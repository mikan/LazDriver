/* FILE NAME: hal_lazurite.c
 *
 * Copyright (c) 2015  Lapis Semiconductor Co.,Ltd.
 * All rights reserved.
 *
 * This program is free software: you can redistribute it and/or
 * modify it under the terms of the GNU Lesser General Public License
 * as published by the Free Software Foundation, either version 3 of
 * the License, or (at your option) any later version.
 *
 * This program is distributed in the hope that it will be useful, but
 * WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the GNU
 * Lesser General Public License for more details.
 *
 * You should have received a copy of the GNU Lesser General Public
 * License along with this program.  If not, see
 * <http://www.gnu.org/licenses/>.
 */



#ifdef	LAZURITE_IDE
#include "lazurite.h"
#include "spi_lazurite.h"
#include "wire0.h"
#include "common_lazurite.h"
#else	// LAZURITE_IDE
#include	<linux/interrupt.h>
#include	<linux/sched.h>
#include	<linux/gpio.h>
#include	<linux/kthread.h>
#include	<linux/delay.h>
#include	"spi-lzpi.h"
#include	"i2c-lzpi.h"
#include	"hal-lzpi.h"
#endif
#include "hal.h"


//*****************************************************
// Local definition
//*****************************************************
#define	LED_FLASH_TIME	1					// LED Flashing time
static struct timespec start_time;			// memory of tick timer
static struct timer_list g_timer;			// timer handler
static void (*ext_timer_func)(void);
static void (*ext_irq_func)(void);
static bool ext_irq_enb;
int que_th2ex = 0;
int que_ex2th= 0;
static wait_queue_head_t rf_irq_q;
static wait_queue_head_t tx_led_q;
static wait_queue_head_t rx_led_q;
static wait_queue_head_t ext_q;
static struct task_struct *rf_main_task;
static struct task_struct *tx_led_task;
static struct task_struct *rx_led_task;
int i2c_addr_bits;

// main_thread_parameter
static struct {
	volatile uint16_t trigger;
	struct {
		const uint8_t* wdata;
		uint16_t wsize;
		uint8_t* rdata;
		uint16_t rsize;
		int ret;
	} spi;
	struct {
		uint16_t addr;
		uint8_t* data;
		uint8_t size;
		int ret;
		uint8_t addr_bits;
		uint8_t i2c_addr;
	} i2c;
	struct {
		uint32_t time;
	} led;
} m = {0};




//*****************************************************
// temporary
//*****************************************************

//*****************************************************
// Function
//*****************************************************
int rf_main_thread(void *p)
{
	m.trigger = 0;
	while(!kthread_should_stop()) {
		if(m.trigger != 0) {
			m.trigger = 0;
			que_th2ex = 1;
			wake_up_interruptible(&ext_q);
		}
		wait_event_interruptible(rf_irq_q, que_ex2th);
		if(kthread_should_stop()) break;
		que_ex2th = 0;
		switch(m.trigger) {
			case 0:
				break;
			case 1:
				break;
			case 2:
				m.spi.ret=lzpi_spi_transfer(m.spi.wdata,m.spi.wsize,m.spi.rdata,m.spi.rsize);
				break;
			case 3:
				m.i2c.ret=HAL_I2C_read(m.i2c.addr,m.i2c.data,m.i2c.size);
				break;
		}
	}
	printk(KERN_INFO"[HAL] %s thread end\n",__func__);
	return 0;
}
int rx_led_thread(void *p)
{
	uint32_t time;
	while(!kthread_should_stop()) {
		que_ex2th = 0;
		wait_event_interruptible(rx_led_q, que_ex2th);
		if(kthread_should_stop()) break;
		if(m.trigger==4) time = m.led.time;
		else time = 1;
		gpio_set_value(GPIO_RX_LED,0);
		msleep(time);
		gpio_set_value(GPIO_RX_LED,1);
		m.trigger = 0;
	}
	printk(KERN_INFO"[HAL] %s thread end\n",__func__);
	return 0;
}
int tx_led_thread(void *p)
{
	uint32_t time;
	while(!kthread_should_stop()) {
		que_ex2th = 0;
		wait_event_interruptible(tx_led_q, que_ex2th);
		if(kthread_should_stop()) break;
		if(m.trigger==4) time = m.led.time;
		else time = 1;
		gpio_set_value(GPIO_TX_LED,0);
		msleep(time);
		gpio_set_value(GPIO_TX_LED,1);
		m.trigger = 0;
	}
	printk(KERN_INFO"[HAL] %s thread end\n",__func__);
	return 0;
}
// rf hardware interrupt handler
static irqreturn_t rf_irq_handler(int irq,void *dev_id) {
	if(ext_irq_func){
		que_ex2th = 1;
		wake_up_interruptible(&rf_irq_q);
		return IRQ_WAKE_THREAD;
	} else {
		return IRQ_NONE;
	}
}
int spi_probe(void){
	int status;
	// Hardware Initialization
	// i2c initialization
	status = lzpi_i2c_init();
	if(status != 0) {
		status = HAL_ERROR_I2C;
		goto error;
	}
	status = lzpi_i2c_adapter_init(m.i2c.i2c_addr);
	if(status != 0) {
		status = HAL_ERROR_I2C;
		goto error;
	}

	// init external functions
	ext_timer_func = NULL;
	ext_irq_func = NULL;
	ext_irq_enb = false;

	// IRQ Initializing
	que_ex2th = 0;
	init_waitqueue_head( &rf_irq_q );
	init_waitqueue_head( &rx_led_q );
	init_waitqueue_head( &tx_led_q );
	init_waitqueue_head( &ext_q );

	// create GPIO irq
	status = request_irq(gpio_to_irq(GPIO_SINTN),
			rf_irq_handler,
			IRQF_TRIGGER_FALLING,
			"hal_lazurite", NULL);
	if(status != 0)
	{
		status = HAL_ERROR_IRQ;
		goto error_irq;
	}
	// GPIO Initializing
	gpio_direction_output(GPIO_RESETN,0);
	gpio_direction_output(GPIO_TX_LED,1);
	gpio_direction_output(GPIO_RX_LED,1);

	// ML7396 reset
	gpio_set_value(GPIO_RESETN,0);
	msleep(1);
	gpio_set_value(GPIO_RESETN,1);
	msleep(1);

	// start thread
	rf_main_task = kthread_run(rf_main_thread, NULL,"lzpi_rf_main_thread");
	if (IS_ERR(rf_main_task)) {
		status = HAL_ERROR_THREAD;
		goto error_thread;
	}
	printk(KERN_INFO"[HAL] %s thread start pid=%d\n",__func__,rf_main_task->pid);

	rx_led_task = kthread_run(rx_led_thread, NULL,"lzpi_rx_led_thread");
	if (IS_ERR(rx_led_task)) {
		status = HAL_ERROR_THREAD;
		goto error_thread;
	}
	printk(KERN_INFO"[HAL] %s thread start pid=%d\n",__func__,rx_led_task->pid);
	tx_led_task = kthread_run(tx_led_thread, NULL, "lzpi_tx_led_thread");
	if (IS_ERR(tx_led_task)) {
		status = HAL_ERROR_THREAD;
		goto error_thread;
	}
	printk(KERN_INFO"[HAL] %s thread start pid=%d\n",__func__,tx_led_task->pid);

	return 0;

	// Error process
error_thread:
	if(rf_main_task) kthread_stop(rf_main_task);
	if(tx_led_task) kthread_stop(tx_led_task);
	if(rx_led_task) kthread_stop(rx_led_task);
	disable_irq(gpio_to_irq(GPIO_SINTN));
	free_irq(gpio_to_irq(GPIO_SINTN), NULL);
	gpio_free(GPIO_RESETN);
	gpio_free(GPIO_TX_LED);
	gpio_free(GPIO_RX_LED);
	gpio_free(GPIO_SINTN);
error_irq:
	lzpi_spi_del_driver();
	lzpi_i2c_del_driver();
error:
	return status;
}

int HAL_init(uint8_t i2c_addr, uint8_t addr_bits){
	int status;
	// spi initialization
	m.i2c.i2c_addr = i2c_addr;
	m.i2c.addr_bits = addr_bits;
	status = lzpi_spi_init(spi_probe);
	if(status != 0){
		status = HAL_ERROR_SPI;
		lzpi_i2c_del_driver();
	}
	return status;
}

int HAL_remove(void)
{
	que_ex2th = 1;
	if(rf_main_task) kthread_stop(rf_main_task);
	if(tx_led_task) kthread_stop(tx_led_task);
	if(rx_led_task) kthread_stop(rx_led_task);
	disable_irq(gpio_to_irq(GPIO_SINTN));
	free_irq(gpio_to_irq(GPIO_SINTN), NULL);
	gpio_free(GPIO_RESETN);
	gpio_free(GPIO_TX_LED);
	gpio_free(GPIO_RX_LED);
	gpio_free(GPIO_SINTN);
	lzpi_spi_del_driver();
	lzpi_i2c_del_driver();
	return 0;
}

int HAL_SPI_transfer(const uint8_t *wdata, uint16_t wsize,unsigned char *rdata, uint16_t rsize)
{
	return lzpi_spi_transfer(wdata,wsize,rdata,wsize);
}

int HAL_GPIO_setInterrupt(void (*func)(void))
{
	ext_irq_func = func;
	return HAL_STATUS_OK;
}

int HAL_GPIO_enableInterrupt(void)
{
	enable_irq(gpio_to_irq(GPIO_SINTN));
	return HAL_STATUS_OK;
}

int HAL_GPIO_disableInterrupt(void)
{
	disable_irq(gpio_to_irq(GPIO_SINTN));
	return HAL_STATUS_OK;
}

int HAL_I2C_read(unsigned short addr, unsigned char *data, unsigned char size)
{
	uint8_t wtmp[2];
	if(m.i2c.addr_bits <= 8) {
		wtmp[0] = addr&0x00FF;
		lzpi_i2c_write(&wtmp[0],1);
	} else {
		wtmp[0] = (addr>>8)&0x00FF;
		wtmp[1] = addr&0x00FF;
		lzpi_i2c_write(&wtmp[0],2);
	}
	lzpi_i2c_read(data,size);

	return HAL_STATUS_OK;
}


// timer function
int HAL_TIMER_getTick(uint32_t *tick)
{
	struct timespec current_time;
	struct timespec diff_time;

	getnstimeofday(&current_time);

	diff_time.tv_sec = current_time.tv_sec - start_time.tv_sec;
	diff_time.tv_nsec = current_time.tv_nsec - start_time.tv_nsec;

	*tick = diff_time.tv_sec * 1000 + diff_time.tv_nsec/1000000;

	return HAL_STATUS_OK;
}

int HAL_TIMER_setup(void)
{
	getnstimeofday(&start_time);
	return HAL_STATUS_OK;
}


void timer_function(unsigned long data)
{
	if(ext_timer_func) ext_timer_func();
}

int HAL_TIMER_start(unsigned short msec, void (*func)(void))
{
	uint32_t tmp = HZ;
	init_timer(&g_timer);
	g_timer.data = 0;
	g_timer.expires = jiffies + (tmp*msec)/1000;
	g_timer.function = timer_function;
	add_timer(&g_timer);
	return HAL_STATUS_OK;
}

int HAL_TIMER_stop(void)
{
	del_timer(&g_timer);
	return HAL_STATUS_OK;
}

int EXT_SPI_transfer(const uint8_t *wdata, uint16_t wsize,uint8_t *rdata, uint16_t rsize)
{
	m.spi.wdata = wdata;
	m.spi.wsize = wsize;
	m.spi.rdata = rdata;
	m.spi.rsize = rsize;
	m.trigger = 2;
	que_ex2th = 1;
	wake_up_interruptible(&rf_irq_q);
	que_th2ex = 0;
	wait_event_interruptible_timeout(ext_q,que_th2ex,1);
	return m.spi.ret;
}

int EXT_I2C_read(unsigned short addr, unsigned char *data, unsigned char size)
{
	m.i2c.addr = addr;
	m.i2c.data = data;
	m.i2c.size = size;
	m.trigger = 3;
	que_ex2th = 1;
	wake_up_interruptible(&rf_irq_q);
	que_th2ex = 0;
	wait_event_interruptible_timeout(ext_q,que_th2ex,1);
	return m.i2c.ret;
}

void EXT_tx_led_flash(uint32_t time)
{
	m.trigger = 4;
	m.led.time = time;
	que_ex2th = 1;
	wake_up_interruptible(&tx_led_q);
}
void EXT_rx_led_flash(uint32_t time)
{
	m.trigger = 4;
	m.led.time = time;
	que_ex2th = 1;
	wake_up_interruptible(&rx_led_q);
}
// no need in Raspberry Pi
void HAL_EX_disableInterrupt(void)
{
}

// no need in Raspberry Pi
void HAL_EX_enableInterrupt(void)
{
}

