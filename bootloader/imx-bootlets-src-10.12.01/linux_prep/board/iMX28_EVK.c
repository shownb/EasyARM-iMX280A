/*
 * Platform specific data for the  STMP37XX development board
 *
 * Vladislav Buzov <vbuzov@embeddedalley.com>
 *
 * Copyright 2008 SigmaTel, Inc
 * Copyright 2008 Embedded Alley Solutions, Inc
 * Copyright 2008-2010 Freescale Semiconductor, Inc. All Rights Reserved.
 *
 * This file is licensed under the terms of the GNU General Public License
 * version 2.  This program  is licensed "as is" without any warranty of any
 * kind, whether express or implied.
 */
#include <setup.h>
#include <keys.h>
#include <lradc_buttons.h>

/************************************************
 *		LRADC keyboard data		*
 ************************************************/
int lradc_keypad_ch = LRADC_CH1;
int lradc_vddio_ch = LRADC_CH10;

struct lradc_keycode lradc_keycodes[] = {
	{ 100, KEY4 },
	{ 306, KEY5 },
	{ 626, KEY6 },
	{ 932, KEY7 },
	{ 1260, KEY8 },
	{ 1584, KEY9 },
	{ 1757, KEY10 },
	{ 2207, KEY11 },
	{ 2525, KEY12 },
	{ 2831, KEY13 },
	{ 3134, KEY14 },
	{ -1, 0 },
};

/************************************************
 *	Magic key combinations for Armadillo	*
 ************************************************/
u32 magic_keys[MAGIC_KEY_NR] = {
	[MAGIC_KEY1]	= KEY4,
	[MAGIC_KEY2]	= KEY6,
	[MAGIC_KEY3]	= KEY10,
};

/************************************************
 *		Default command line		*
 ************************************************/
char cmdline_def[] = "gpmi=g console=ttyAMA0,115200n8 ubi.mtd=1 root=ubi0:rootfs rootfstype=ubifs  fec_mac= ethact";
