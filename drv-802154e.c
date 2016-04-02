/*
 * IEEE802.15.4e driver IO
 * 
 * File:  drv-802154e.c
 * 
 * Copyright 2015 Lapis Semiconductor Co.,Ltd.
 * Author: Naotaka Saito
 * 
 * The program is based on BP3596 driver by Communication Technology
 * 
 * This program is free software; you can redistribute it and/or modify
 * it under the terms of the GNU General Public License version 2 as
 * published by the Free Software Foundation.
 */

#include <linux/module.h>
#include <linux/init.h>
#include <linux/wait.h>
#include <linux/sched.h>
#include <linux/ioctl.h>
#include <linux/parport.h>
#include <linux/ctype.h>
#include <linux/poll.h>
#include <linux/slab.h>
#include <linux/major.h>
#include <linux/errno.h>
#include <linux/input.h>
#include <linux/kernel.h>
#include <linux/list.h>
#include <linux/time.h>

#include "common_802154e.h"

#include "drv-802154e.h"
#include "mac-802154e.h"

// Device driver IO
// mode = 0 :
//		read size = 2:				receiving packet size
//		read size = packet size:	raw data output
// mode = 1: sniffer
//		read size = 2:				receiving packet size
//		read size = packet size:	raw data output
// mode = 2 : MODE_STREAM
//		read size = 2				output data size
//		read size = data size
//			command			16bit
//				0x0000				nop
//				0x0101				phy reset
//				0x0201				send data
//				0x0301				set rx parameter(does not include payload)
//				0x0302				receiving data packet
//				0x0401				set to read ed value
//				0x0402				read ed value
//			time.tv_sec		32bit	current time (32bit epoch gime)
//			time.tv_nsec	32bit	nano sec time(000,000,000ns ~ 999,999,999ns) of current time
//			area			16bit	area code. currently support only "JP"
//			ch				16bit	frequency
//			rate			16bit	bit rate
//			pwr				16bit	output power
//			header			32bit	header frame
//			rxPanid			32bit	0-0xFFFF = panid,  -1= omitted
//			rxAddrType		8bit	0: omit, 1=8bit, 2=16bit, 3=128bit
//			rxAddr			64bit
//			txPanid			32bit	0-0xFFFF = panid,  -1= omitted
//			txAddrType		8bit	0: omit, 1=8bit, 2=16bit, 3=128bit
//			txAddr			64bit
//			rssi			8bit
//			payload			flexible length

#define PHY_DATA_SIZE		512		//250 + 1
//static wait_queue_head_t read_q;	//poll wait
struct list_data {				
	uint8_t	data[PHY_DATA_SIZE];
	int		len;
	struct list_head list;
};
struct list_data head;				// char dev list head
static struct s_CHAR_DEV {
	char name[32];
	struct class *dev_class;		// device class
	int major;						// device major number
	int access_num;					// open count
	spinlock_t	lock;				// chardev spin lock
	wait_queue_head_t	read_q;		// polling wait for char dev
} chrdev =
{
	.name = "",
	.access_num = 0
};
// MAC / PHY Initializing parameter
static int ch = 36;            //BASE channel
static int rate = 100;           // BASE rate
static int panid = 0xABCD;     		// PANID
static int pwr = 20;     			// PANID

// MODE OPtion:
//  debug code is trace
// MODE_DRV_DEBUG:  for driver layer
// MODE_MAC_DEBUG:  for mac layer
// MODE_PHY_DEBUG:  for phy layer
// MODE_INVALID_MAC: in this option, driver works as sniffer.
// MODE_RAW: 
// (ex)
// all trace is available, mac is invalid.
// static int mode = MODE_DRV_DEBUG | MODE_MAC_DEBUG | MODE_PHY_DEBUG | MODE_INVALID_MAC;
static int mode = 0 ;
uint16_t drv_mode;
uint16_t listed_packet = 0;

module_param(ch, int, S_IRUGO);
module_param(rate, int, S_IRUGO);
module_param(panid, int, S_IRUGO);
module_param(mode, int, S_IRUGO);
module_param(pwr, int, S_IRUGO);

// IEEE802.15.4e custom parameter
static t_802154E_SETTING	mac_init_param;

// *****************************************************************
//			transfer process (input from chrdev)
// *****************************************************************
uint16_t gen_tx_stream(uint8_t *in) {
}
// *****************************************************************
//			receiving process (output to chrdev)
// *****************************************************************
uint16_t gen_rx_stream(uint8_t *out, t_MAC_HEADER *phdr) {
	uint16_t offset=0;
	struct timespec time;

	// output temprary 
	uint16_t tmp16;
	uint32_t tmp32;
	uint8_t tmp8;

#define MEM_TO_BUFFER(A,B,C)	memcpy(A+C,&B,sizeof(B));\
	C+=sizeof(B);
	// write command 
	tmp16 = 0x03;
	MEM_TO_BUFFER(out,tmp16,offset);

	// write tv_sec & tv_nsec
	getnstimeofday(&time);
	MEM_TO_BUFFER(out,time.tv_sec,offset);
	MEM_TO_BUFFER(out,time.tv_nsec,offset);

	// area code
	tmp8 = 'J';
	MEM_TO_BUFFER(out,tmp8,offset);		// write area
	tmp8 = 'P';
	MEM_TO_BUFFER(out,tmp8,offset);		// write area
	tmp16 = ch;
	MEM_TO_BUFFER(out,tmp16,offset);	// write ch
	tmp16 = rate;
	MEM_TO_BUFFER(out,tmp16,offset);	// write rate
	tmp16 = pwr;
	MEM_TO_BUFFER(out,tmp16,offset);	// write pwr

	tmp32 = (uint32_t)(*(unsigned short*)phdr->raw.data);	// header

	MEM_TO_BUFFER(out,tmp32,offset);

	// rx_panid
	if(phdr->rx_addr.panid_enb) tmp32 = (uint32_t)phdr->rx_addr.panid;
	else tmp32 = 0xffffffff;
	MEM_TO_BUFFER(out,tmp32,offset);

	// rx_addr type
	tmp8 = (uint32_t)phdr->rx_addr.addr_type;
	MEM_TO_BUFFER(out,tmp8,offset);

	// rx_addr
	switch(phdr->rx_addr.addr_type) {
		case 0:
			tmp8 = 0xff;
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			break;
		case 1:
			tmp8 = 0;
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			tmp8 = phdr->rx_addr.addr.addr8;
			MEM_TO_BUFFER(out,tmp8,offset);
			break;
		case 2:
			tmp8 = 0;
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			tmp8 = (uint8_t)(phdr->rx_addr.addr.addr16>>8);
			MEM_TO_BUFFER(out,tmp8,offset);
			tmp8 = (uint8_t)phdr->rx_addr.addr.addr16&0x00ff;
			MEM_TO_BUFFER(out,tmp8,offset);
			break;
		case 3:
			MEM_TO_BUFFER(out,phdr->rx_addr.addr.addr64[7],offset);
			MEM_TO_BUFFER(out,phdr->rx_addr.addr.addr64[6],offset);
			MEM_TO_BUFFER(out,phdr->rx_addr.addr.addr64[5],offset);
			MEM_TO_BUFFER(out,phdr->rx_addr.addr.addr64[4],offset);
			MEM_TO_BUFFER(out,phdr->rx_addr.addr.addr64[3],offset);
			MEM_TO_BUFFER(out,phdr->rx_addr.addr.addr64[2],offset);
			MEM_TO_BUFFER(out,phdr->rx_addr.addr.addr64[1],offset);
			MEM_TO_BUFFER(out,phdr->rx_addr.addr.addr64[0],offset);
			break;
	}

	// tx_panid
	if(phdr->tx_addr.panid_enb) tmp32 = (uint32_t)phdr->tx_addr.panid;
	else tmp32 = 0xffffffff;
	MEM_TO_BUFFER(out,tmp32,offset);

	// tx_addr type
	tmp8 = (uint32_t)phdr->tx_addr.addr_type;
	MEM_TO_BUFFER(out,tmp8,offset);

	// tx_addr
	switch(phdr->tx_addr.addr_type) {
		case 0:
			tmp8 = 0xff;
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			break;
		case 1:
			tmp8 = 0;
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			tmp8 = phdr->tx_addr.addr.addr8;
			MEM_TO_BUFFER(out,tmp8,offset);
			break;
		case 2:
			tmp8 = 0;
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			MEM_TO_BUFFER(out,tmp8,offset);
			tmp8 = (uint8_t)(phdr->tx_addr.addr.addr16>>8);
			MEM_TO_BUFFER(out,tmp8,offset);
			tmp8 = (uint8_t)phdr->tx_addr.addr.addr16&0x00ff;
			MEM_TO_BUFFER(out,tmp8,offset);
			break;
		case 3:
			MEM_TO_BUFFER(out,phdr->tx_addr.addr.addr64[7],offset);
			MEM_TO_BUFFER(out,phdr->tx_addr.addr.addr64[6],offset);
			MEM_TO_BUFFER(out,phdr->tx_addr.addr.addr64[5],offset);
			MEM_TO_BUFFER(out,phdr->tx_addr.addr.addr64[4],offset);
			MEM_TO_BUFFER(out,phdr->tx_addr.addr.addr64[3],offset);
			MEM_TO_BUFFER(out,phdr->tx_addr.addr.addr64[2],offset);
			MEM_TO_BUFFER(out,phdr->tx_addr.addr.addr64[1],offset);
			MEM_TO_BUFFER(out,phdr->tx_addr.addr.addr64[0],offset);
			break;
	}

	// rssi
	tmp8 = phdr->rssi;
	MEM_TO_BUFFER(out,tmp8,offset);

	// payload
	memcpy(out+offset,phdr->payload.data,phdr->payload.len);
	offset+=phdr->payload.len;
	return offset;
}

int rx_callback(t_MAC_HEADER *phdr)
{
	struct list_data *new_data;
	uint16_t size;
	uint8_t *in, *out;

	DEBUGONDISPLAY(MODE_DRV_DEBUG,printk(KERN_INFO "[DRV-802154E] %dbyte received\n", phdr->raw.len));

	new_data = kmalloc(sizeof(struct list_data), GFP_KERNEL);
	if (new_data == NULL) {
		printk(KERN_ERR "[DRV-802154E] kmalloc (list_data) GFP_KERNEL no memory\n");
		return -ENOMEM;
	}

	// copy data to list
	size = phdr->raw.len;

	if(size < PHY_DATA_SIZE)
	{
		if(mode == MODE_STREAM)
		{
			out = new_data->data;
			size = gen_rx_stream(out, phdr);
			new_data->len = size;
			DEBUGONDISPLAY(MODE_DRV_DEBUG,PAYLOADDUMP(out, size));
		}
		else {
			in = phdr->raw.data;
			out = new_data->data;
			memcpy(out,in,size);
			new_data->len = size;
			DEBUGONDISPLAY(MODE_DRV_DEBUG,PAYLOADDUMP(out, size));
		}
		// list add 
		list_add_tail(&new_data->list, &head.list);
		listed_packet++;

		//check list length. And delete data, if list length is over maximum length.
		while(listed_packet >4) {
			struct list_data *data;
			data = list_entry(head.list.next, struct list_data, list);
			list_del(head.list.next);
			listed_packet--;
			kfree(data);
		}
		// poll wait cancell 
		wake_up_interruptible(&chrdev.read_q);	
	}
	else
	{
		printk(KERN_ERR "[DRV-802154E] add_list PHY Size error\n");
		kfree(new_data);
		return -1;
	}

	return DRV_OK;
}

// poll wait cancell 

// *****************************************************************
//			char dev function
// *****************************************************************
static long chardev_ioctl(struct file *file, unsigned int cmd, unsigned long arg) {
	long ret = 0;
	return ret;
}

static int chardev_open(struct inode* inode, struct file* filp) {
	spin_lock( &chrdev.lock );
	if (chrdev.access_num > 2) {
		spin_unlock(&chrdev.lock );
		return -EBUSY;
	}
	chrdev.access_num ++;
	spin_unlock( &chrdev.lock );
	return 0;
}

static int chardev_release(struct inode* inode, struct file* filp)
{
	spin_lock( &chrdev.lock );
	chrdev.access_num --;
	spin_unlock( &chrdev.lock );
	return 0;
}

static ssize_t chardev_read (struct file * file, char __user * buf, size_t count, loff_t * ppos) {
	ssize_t bytes_read = 0;
	struct list_data *ptr = NULL;

	spin_lock( &chrdev.lock );

	//printk("read size=%d\n",count);
	if (list_empty(&head.list) != 0) {
		//		DEBUGONDISPLAY(MODE_DRV_DEBUG,printk("list empty\n"));   
		goto end;
	}
	ptr = list_entry(head.list.next, struct list_data, list);
	if (ptr == NULL) {
		printk( KERN_ERR "%s : list_entry failed\n", chrdev.name);
		bytes_read = 0;
		goto end;
	}
	if (count == sizeof(unsigned short)) {
		DEBUGONDISPLAY(MODE_DRV_DEBUG,printk("list_data %d[bytes]\n", ptr->len));
		bytes_read = count;
		if (bytes_read > 0 && copy_to_user (buf, &(ptr->len), count)) {
			printk( KERN_ERR "%s : copy_to_user failed\n", chrdev.name);
			bytes_read = 0;
			goto end;
		}
	} else {
		bytes_read = count;
		if (bytes_read > 0 && copy_to_user (buf, &(ptr->data), bytes_read)) {
			printk( KERN_ERR "%s : copy_to_user failed\n", chrdev.name);
			bytes_read = 0;
			goto end;
		}
		list_del(head.list.next);
		listed_packet--;


		kfree(ptr);
	}
end:
	spin_unlock( &chrdev.lock );
	return bytes_read;
}

static ssize_t chardev_write (struct file * file, const char __user * buf,
		size_t count, loff_t * ppos) {
	int status = 0;
	if(count >=250)
	{
		count = 0;
		goto error;
	}
	if(mode == MODE_STREAM)
	{
	} else
	{
		status = mac.send(buf,count);
	}

	DEBUGONDISPLAY(MODE_DRV_DEBUG,PAYLOADDUMP(buf,count));		// for debug

error:
	return status;
}

static unsigned int chardev_poll(struct file* filp, poll_table* wait) {
	unsigned int retmask = 0;
	poll_wait( filp, &chrdev.read_q,  wait );
	if (list_empty(&head.list) == 0) {
		retmask |= ( POLLIN  | POLLRDNORM );
	}
	return retmask;
}

static const struct file_operations chardev_fops = {
	.owner		= THIS_MODULE,
	.read		= chardev_read,
	.write		= chardev_write,
	.open		= chardev_open,
	.poll		= chardev_poll,
	.unlocked_ioctl	= chardev_ioctl,
	.release    = chardev_release,
};

// *****************************************************************
//			driver initialization
// *****************************************************************
static int __init drv_param_init(void) {
	//int drv_param_init(void) {
	int status = 0;
	int err;
	struct device *dev;

	// check ch & rate
	if(( ch==32)&&(rate==100))
	{
		printk(KERN_INFO "[DRV-802154E] ch=%d, rate = %d can not be used\n",ch, rate);
		status = -1;
		goto error;
	}

	drv_mode = mode;
	printk(KERN_INFO "[DRV-802154E] Starting\n");

	status = mac.get_name(chrdev.name);
	printk(KERN_INFO "[DRV-802154E] DEVNAME=%s\n",chrdev.name);

	// create char device
	if((chrdev.major = register_chrdev(0, chrdev.name, &chardev_fops)) < 0)
	{
		printk(KERN_ERR "[DRV-802154E] unable to get major =%d\n",
				chrdev.major);
		goto error;
	}
	chrdev.dev_class = class_create(THIS_MODULE, chrdev.name);
	if(IS_ERR(chrdev.dev_class))
	{
		err = PTR_ERR(chrdev.dev_class);
		printk(KERN_ERR"[DRV-802154E] class_create error %d\n", err);
		goto error_class_create;
	}
	dev = device_create(chrdev.dev_class, NULL, MKDEV(chrdev.major, 0), NULL, chrdev.name);
	if (IS_ERR(dev)) {
		err = PTR_ERR(dev);
		printk(KERN_ERR"[DRV-802154E]device_create error %d\n", err);
		goto error_device_create;
	}
	DEBUGONDISPLAY(MODE_DRV_DEBUG,printk(KERN_INFO "[DRV-802154E] char dev create = %s\n",chrdev.name));

	//initializing list head
	INIT_LIST_HEAD(&head.list);

	// initializing wait queue
	init_waitqueue_head( &chrdev.read_q );

	// parameter initialization
	mac_init_param.ch = ch;
	mac_init_param.bitrate = rate;
	mac_init_param.panid = panid;
	mac_init_param.tx_pwr = pwr;

	// MAC initialization
	//mac.rx_callback = recv_addlist;
	status = mac.init(&mac_init_param, rx_callback);
	if(status != MAC_OK) goto error_device_create;


	printk(KERN_INFO "[DRV-802154E] End of init\n");

	return status;

error_device_create:
	class_destroy(chrdev.dev_class);
error_class_create:
	unregister_chrdev(chrdev.major, chrdev.name);
error:
	printk(KERN_INFO "[DRV-802154E] Init Error\n");
	return status;
}

// *****************************************************************
//			unload driver 
// *****************************************************************
static void __exit drv_param_exit(void) {
	//void drv_param_exit(void) {
	//	mac_802154e_exit();
	//list delete 
	printk(KERN_INFO "[DRV-802154E] remove\n");
	while (!list_empty(&head.list)) {
		struct list_data *data;
		data = list_entry(head.list.next, struct list_data, list);
		list_del(head.list.next);
		listed_packet--;
		kfree(data);
	}

	// char dev destroy
	device_destroy(chrdev.dev_class, MKDEV(chrdev.major, 0));
	class_destroy(chrdev.dev_class);
	unregister_chrdev(chrdev.major, chrdev.name);
	DEBUGONDISPLAY(MODE_DRV_DEBUG,printk(KERN_INFO "[DRV-802154E] char dev delete\n"));
	// mac remove
	mac.remove();
	printk(KERN_INFO "[DRV-802154E] exit remove\n");
	return;
}


module_init(drv_param_init);
module_exit(drv_param_exit);

MODULE_AUTHOR("Lapis Semiconductor.");
MODULE_DESCRIPTION("IEEE802.15.4e driver");
MODULE_LICENSE("Dual BSD/GPL");

