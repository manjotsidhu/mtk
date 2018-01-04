/*
* Copyright (C) 2016 MediaTek Inc.
*
* This program is free software; you can redistribute it and/or modify
* it under the terms of the GNU General Public License version 2 as
* published by the Free Software Foundation.
*
* This program is distributed in the hope that it will be useful,
* but WITHOUT ANY WARRANTY; without even the implied warranty of
* MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.
* See http://www.gnu.org/licenses/gpl-2.0.html for more details.
*/

#ifndef __MTK_UDI_MT6763__
#define __MTK_UDI_MT6763__

#include <linux/kernel.h>

/* UDI pin mux ADDR */
/* 1. Write 0x102D_0330 = 0x0033_3330 */
/* 2. Write 0x102D_0340 = 0x0000_0003 */

#ifdef CONFIG_OF
#define DEVICE_GPIO "mediatek,gpio"
static void __iomem  *udipin_base;         /* 0x102D0000 0x1000, UDI pinmux reg */
#endif

#ifdef __KERNEL__
#define UDIPIN_BASE				(udipin_base)
#else
#define UDIPIN_BASE				0x102D0000
#endif

/* 0x102D0000 0x1000, UDI pinmux reg */
#define UDIPIN_UDI_MUX1			(UDIPIN_BASE+0x330)
#define UDIPIN_UDI_MUX1_VALUE		(0x00333330)
#define UDIPIN_UDI_MUX2			(UDIPIN_BASE+0x340)
#define UDIPIN_UDI_MUX2_VALUE		(0x00303333)


#endif /* __MTK_UDI_MT6763__ */

