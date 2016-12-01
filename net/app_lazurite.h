/* app_lazurite.h - 
 *
 * Copyright (c) 2015  LAPIS Semiconductor Co.,Ltd.
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

#ifndef _APP_LAZURITE_H_
#define _APP_LAZURITE_H_

#ifdef LAZURITE_IDE
#include "lazurite.h"
#include "hal.h"
#include "string.h"
#include "driver_irq.h"
#else
#include <linux/string.h>
#include <linux/sched.h>
#include <linux/wait.h>
#endif
#include "common_lazurite.h"
#include "mach_lazurite.h"

/*! @brief params for MAC application layer
 @struct SUBGHZ_APP
 @brief internal use only
 mac data format
 */
typedef struct {
	struct {
		BUFFER buf;
		void (*callback)(uint8_t *buf, int16_t status, uint8_t rssi);
	}tx;
	struct {
		BUFFER buf;
		void (*callback)(uint8_t *buf, int16_t status, uint8_t rssi);
	}rx;
	MACH_PARAM *mach;
}SUBGHZ_APP;


#endif
