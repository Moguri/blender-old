/**
 * $Id$
 * ***** BEGIN GPL/BL DUAL LICENSE BLOCK *****
 *
 * This program is free software; you can redistribute it and/or
 * modify it under the terms of the GNU General Public License
 * as published by the Free Software Foundation; either version 2
 * of the License, or (at your option) any later version. The Blender
 * Foundation also sells licenses for use in proprietary software under
 * the Blender License.  See http://www.blender.org/BL/ for information
 * about this.
 *
 * This program is distributed in the hope that it will be useful,
 * but WITHOUT ANY WARRANTY; without even the implied warranty of
 * MERCHANTABILITY or FITNESS FOR A PARTICULAR PURPOSE.  See the
 * GNU General Public License for more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program; if not, write to the Free Software Foundation,
 * Inc., 59 Temple Place - Suite 330, Boston, MA  02111-1307, USA.
 *
 * The Original Code is Copyright (C) 2001-2002 by NaN Holding BV.
 * All rights reserved.
 *
 * The Original Code is: all of this file.
 *
 * Contributor(s): none yet.
 *
 * ***** END GPL/BL DUAL LICENSE BLOCK *****
 */

#ifdef HAVE_CONFIG_H
#include <config.h>
#endif

#include "BMF_FontData.h"
#include "BMF_Settings.h"

#if BMF_INCLUDE_SCR12

static unsigned char bitmap_data[]= {
	0x80,0x80,0x00,0x80,0x80,0x80,0x80,0x80,
	0xa0,0xa0,0xa0,0xa0,0x50,0x50,0xfc,0x28,
	0x28,0x7e,0x14,0x14,0x20,0x70,0xa8,0x28,
	0x70,0xa0,0xa8,0x70,0x20,0x98,0x54,0x54,
	0x2c,0xd0,0xa8,0xa8,0x64,0x74,0x88,0x8c,
	0x50,0x20,0x50,0x48,0x30,0x80,0x40,0x20,
	0x20,0x20,0x40,0x40,0x80,0x80,0x80,0x80,
	0x40,0x40,0x20,0x80,0x40,0x40,0x20,0x20,
	0x20,0x20,0x40,0x40,0x80,0x20,0xa8,0x70,
	0xa8,0x20,0x20,0x20,0xf8,0x20,0x20,0x80,
	0x40,0x40,0xc0,0xf8,0x80,0x80,0x80,0x80,
	0x40,0x40,0x20,0x20,0x10,0x10,0x08,0x08,
	0x70,0x88,0x88,0xc8,0xa8,0x98,0x88,0x70,
	0xe0,0x40,0x40,0x40,0x40,0x40,0xc0,0x40,
	0xf8,0x80,0x40,0x20,0x10,0x08,0x88,0x70,
	0x70,0x88,0x08,0x08,0x70,0x08,0x88,0x70,
	0x10,0x10,0x10,0xf8,0x90,0x50,0x30,0x10,
	0x70,0x88,0x08,0x08,0xf0,0x80,0x80,0xf8,
	0x70,0x88,0x88,0x88,0xf0,0x80,0x88,0x70,
	0x40,0x40,0x20,0x20,0x10,0x10,0x08,0xf8,
	0x70,0x88,0x88,0x88,0x70,0x88,0x88,0x70,
	0x70,0x88,0x08,0x78,0x88,0x88,0x88,0x70,
	0x80,0x80,0x00,0x00,0x80,0x80,0x80,0x40,
	0x40,0xc0,0x00,0x00,0x40,0x40,0x08,0x10,
	0x20,0x40,0x80,0x40,0x20,0x10,0x08,0xf8,
	0x00,0xf8,0x80,0x40,0x20,0x10,0x08,0x10,
	0x20,0x40,0x80,0x20,0x00,0x20,0x20,0x10,
	0x88,0x88,0x70,0x38,0x40,0x98,0xa8,0xa8,
	0x98,0x48,0x30,0x88,0x88,0xf8,0x88,0x50,
	0x50,0x20,0x20,0xf0,0x88,0x88,0x88,0xf0,
	0x88,0x88,0xf0,0x70,0x88,0x80,0x80,0x80,
	0x80,0x88,0x70,0xf0,0x88,0x88,0x88,0x88,
	0x88,0x88,0xf0,0xf8,0x80,0x80,0x80,0xf0,
	0x80,0x80,0xf8,0x80,0x80,0x80,0x80,0xf0,
	0x80,0x80,0xf8,0x68,0x98,0x88,0x88,0x98,
	0x80,0x88,0x70,0x88,0x88,0x88,0x88,0xf8,
	0x88,0x88,0x88,0xe0,0x40,0x40,0x40,0x40,
	0x40,0x40,0xe0,0x70,0x88,0x88,0x08,0x08,
	0x08,0x08,0x08,0x88,0x88,0x90,0xa0,0xc0,
	0xa0,0x90,0x88,0xf8,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x88,0x88,0xa8,0xa8,0xd8,
	0xd8,0x88,0x88,0x88,0x98,0x98,0xa8,0xa8,
	0xc8,0xc8,0x88,0x70,0x88,0x88,0x88,0x88,
	0x88,0x88,0x70,0x80,0x80,0x80,0x80,0xf0,
	0x88,0x88,0xf0,0x08,0x10,0x70,0xa8,0x88,
	0x88,0x88,0x88,0x88,0x70,0x88,0x90,0x90,
	0xa0,0xf0,0x88,0x88,0xf0,0x70,0x88,0x88,
	0x08,0x70,0x80,0x88,0x70,0x20,0x20,0x20,
	0x20,0x20,0x20,0x20,0xf8,0x70,0x88,0x88,
	0x88,0x88,0x88,0x88,0x88,0x20,0x20,0x50,
	0x50,0x50,0x88,0x88,0x88,0x50,0x50,0xf8,
	0xa8,0xa8,0xa8,0x88,0x88,0x88,0x88,0x50,
	0x20,0x20,0x50,0x88,0x88,0x20,0x20,0x20,
	0x20,0x50,0x50,0x88,0x88,0xf8,0x80,0x40,
	0x40,0x20,0x10,0x08,0xf8,0xe0,0x80,0x80,
	0x80,0x80,0x80,0x80,0x80,0xe0,0x08,0x08,
	0x10,0x10,0x20,0x20,0x40,0x40,0x80,0x80,
	0xe0,0x20,0x20,0x20,0x20,0x20,0x20,0x20,
	0xe0,0x88,0x50,0x20,0xfe,0x20,0x40,0x80,
	0x80,0x68,0x98,0x88,0x78,0x08,0x70,0xb0,
	0xc8,0x88,0x88,0xc8,0xb0,0x80,0x80,0x70,
	0x88,0x80,0x80,0x88,0x70,0x68,0x98,0x88,
	0x88,0x98,0x68,0x08,0x08,0x70,0x88,0x80,
	0xf8,0x88,0x70,0x40,0x40,0x40,0x40,0x40,
	0xf0,0x40,0x38,0xf0,0x08,0x68,0x98,0x88,
	0x88,0x98,0x68,0x88,0x88,0x88,0x88,0xc8,
	0xb0,0x80,0x80,0x20,0x20,0x20,0x20,0x20,
	0xe0,0x00,0x20,0x60,0x90,0x10,0x10,0x10,
	0x10,0x10,0x70,0x00,0x10,0x88,0x90,0xa0,
	0xc0,0xa0,0x90,0x80,0x80,0x20,0x20,0x20,
	0x20,0x20,0x20,0x20,0xe0,0xa8,0xa8,0xa8,
	0xa8,0xa8,0xd0,0x88,0x88,0x88,0x88,0xc8,
	0xb0,0x70,0x88,0x88,0x88,0x88,0x70,0x80,
	0x80,0xb0,0xc8,0x88,0x88,0xc8,0xb0,0x08,
	0x08,0x68,0x98,0x88,0x88,0x98,0x68,0x80,
	0x80,0x80,0x80,0xc8,0xb0,0x70,0x88,0x10,
	0x60,0x88,0x70,0x30,0x40,0x40,0x40,0x40,
	0xf0,0x40,0x68,0x98,0x88,0x88,0x88,0x88,
	0x20,0x20,0x50,0x50,0x88,0x88,0x50,0xa8,
	0xa8,0xa8,0x88,0x88,0x88,0x88,0x50,0x20,
	0x50,0x88,0xf0,0x08,0x68,0x98,0x88,0x88,
	0x88,0x88,0xf8,0x80,0x40,0x20,0x10,0xf8,
	0x18,0x20,0x20,0x20,0x20,0xc0,0x20,0x20,
	0x20,0x18,0x80,0x80,0x80,0x80,0x80,0x80,
	0x80,0x80,0x80,0x80,0xc0,0x20,0x20,0x20,
	0x20,0x18,0x20,0x20,0x20,0xc0,0x98,0xb4,
	0x64,0x80,0x80,0x80,0x80,0x80,0x00,0x80,
	0x80,0x20,0x20,0x70,0x88,0x80,0x88,0x70,
	0x20,0x20,0xb0,0x48,0x40,0xf0,0x40,0x40,
	0x48,0x30,0x90,0x60,0x90,0x90,0x60,0x90,
	0x20,0x70,0x20,0x70,0x20,0x50,0x88,0x88,
	0x80,0x80,0x80,0x80,0x00,0x00,0x80,0x80,
	0x80,0x80,0x70,0x88,0x10,0x28,0x48,0x90,
	0xa0,0x40,0x88,0x70,0xa0,0x78,0x84,0xb4,
	0xa4,0xb4,0x84,0x78,0xf0,0x90,0x70,0x10,
	0x60,0x14,0x28,0x50,0xa0,0x50,0x28,0x14,
	0x08,0xf8,0xf0,0x78,0x84,0xac,0xb4,0xb4,
	0x84,0x78,0xe0,0x60,0x90,0x60,0xf8,0x00,
	0x20,0x20,0xf8,0x20,0x20,0xe0,0x40,0x20,
	0xa0,0x40,0xc0,0x20,0x40,0x20,0xc0,0x80,
	0x40,0x80,0xe8,0x90,0x90,0x90,0x90,0x28,
	0x28,0x28,0x28,0x68,0xa8,0xa8,0xa8,0x7c,
	0x80,0x80,0xc0,0x40,0xe0,0x40,0x40,0xc0,
	0x40,0xf0,0x60,0x90,0x90,0x60,0xa0,0x50,
	0x28,0x14,0x28,0x50,0xa0,0x08,0x38,0xa8,
	0x58,0x28,0xf0,0x48,0x40,0xc0,0x40,0x38,
	0x10,0x88,0x68,0x30,0xf0,0x48,0x40,0xc0,
	0x40,0x08,0x38,0xa8,0x58,0x28,0xd0,0x28,
	0x40,0x20,0xc0,0x70,0x88,0x88,0x40,0x20,
	0x20,0x00,0x20,0x88,0x88,0xf8,0x88,0x50,
	0x50,0x20,0x00,0x20,0x40,0x88,0x88,0xf8,
	0x50,0x50,0x20,0x20,0x00,0x20,0x10,0x88,
	0x88,0xf8,0x50,0x50,0x20,0x20,0x00,0x50,
	0x20,0x88,0x88,0xf8,0x50,0x50,0x20,0x20,
	0x00,0xb0,0x68,0x88,0x88,0xf8,0x50,0x50,
	0x20,0x20,0x00,0x50,0x88,0x88,0xf8,0x50,
	0x50,0x20,0x20,0x20,0x50,0x20,0x9c,0x90,
	0xf0,0x50,0x5c,0x30,0x30,0x1c,0x60,0x20,
	0x70,0x88,0x80,0x80,0x80,0x80,0x88,0x70,
	0xf8,0x80,0x80,0xf0,0x80,0x80,0xf8,0x00,
	0x20,0x40,0xf8,0x80,0x80,0xf0,0x80,0x80,
	0xf8,0x00,0x20,0x10,0xf8,0x80,0x80,0xf0,
	0x80,0x80,0xf8,0x00,0x50,0x20,0xf8,0x80,
	0x80,0xf0,0x80,0x80,0xf8,0x00,0x50,0xe0,
	0x40,0x40,0x40,0x40,0x40,0xe0,0x00,0x40,
	0x80,0xe0,0x40,0x40,0x40,0x40,0x40,0xe0,
	0x00,0x40,0x20,0xe0,0x40,0x40,0x40,0x40,
	0x40,0xe0,0x00,0xa0,0x40,0xe0,0x40,0x40,
	0x40,0x40,0x40,0xe0,0x00,0xa0,0x78,0x44,
	0x44,0xf4,0x44,0x44,0x44,0x78,0x88,0x98,
	0x98,0xa8,0xc8,0xc8,0x88,0x00,0xb0,0x68,
	0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x00,
	0x20,0x40,0x70,0x88,0x88,0x88,0x88,0x88,
	0x70,0x00,0x20,0x10,0x70,0x88,0x88,0x88,
	0x88,0x88,0x70,0x00,0x50,0x20,0x70,0x88,
	0x88,0x88,0x88,0x88,0x70,0x00,0xb0,0x68,
	0x70,0x88,0x88,0x88,0x88,0x88,0x70,0x00,
	0x50,0x88,0x50,0x20,0x50,0x88,0xb8,0x44,
	0x64,0x54,0x4c,0x44,0x3a,0x70,0x88,0x88,
	0x88,0x88,0x88,0x88,0x00,0x20,0x40,0x70,
	0x88,0x88,0x88,0x88,0x88,0x88,0x00,0x20,
	0x10,0x70,0x88,0x88,0x88,0x88,0x88,0x88,
	0x00,0x50,0x20,0x70,0x88,0x88,0x88,0x88,
	0x88,0x88,0x00,0x50,0x20,0x20,0x20,0x50,
	0x50,0x88,0x88,0x00,0x20,0x10,0x80,0x80,
	0xf0,0x88,0x88,0x88,0xf0,0x80,0x80,0xb0,
	0x88,0x88,0x88,0x90,0xa0,0x90,0x60,0x78,
	0x88,0x78,0x08,0x70,0x00,0x20,0x40,0x78,
	0x88,0x78,0x08,0x70,0x00,0x20,0x10,0x78,
	0x88,0x78,0x08,0x70,0x00,0x50,0x20,0x78,
	0x88,0x78,0x08,0x70,0x00,0xb0,0x68,0x78,
	0x88,0x78,0x08,0x70,0x00,0x50,0x78,0x88,
	0x78,0x08,0x70,0x00,0x20,0x50,0x20,0x6c,
	0x90,0x7c,0x12,0x6c,0x60,0x20,0x70,0x88,
	0x80,0x80,0x88,0x70,0x78,0x80,0xf8,0x88,
	0x70,0x00,0x20,0x40,0x78,0x80,0xf8,0x88,
	0x70,0x00,0x20,0x10,0x78,0x80,0xf8,0x88,
	0x70,0x00,0x50,0x20,0x78,0x80,0xf8,0x88,
	0x70,0x00,0x50,0x20,0x20,0x20,0x20,0xe0,
	0x00,0x40,0x80,0x20,0x20,0x20,0x20,0xe0,
	0x00,0x40,0x20,0x20,0x20,0x20,0x20,0xe0,
	0x00,0xa0,0x40,0x20,0x20,0x20,0x20,0xe0,
	0x00,0xa0,0x70,0x88,0x88,0x88,0x78,0x08,
	0x90,0x60,0xd0,0x88,0x88,0x88,0xc8,0xb0,
	0x00,0xb0,0x68,0x70,0x88,0x88,0x88,0x70,
	0x00,0x20,0x40,0x70,0x88,0x88,0x88,0x70,
	0x00,0x20,0x10,0x70,0x88,0x88,0x88,0x70,
	0x00,0x50,0x20,0x70,0x88,0x88,0x88,0x70,
	0x00,0xb0,0x68,0x70,0x88,0x88,0x88,0x70,
	0x00,0x50,0x20,0x00,0xf8,0x00,0x20,0xb8,
	0x64,0x54,0x4c,0x3a,0x68,0x98,0x88,0x88,
	0x88,0x00,0x20,0x40,0x68,0x98,0x88,0x88,
	0x88,0x00,0x20,0x10,0x68,0x98,0x88,0x88,
	0x88,0x00,0x50,0x20,0x68,0x98,0x88,0x88,
	0x88,0x00,0x50,0xf0,0x08,0x68,0x98,0x88,
	0x88,0x88,0x00,0x20,0x10,0x80,0x80,0xb0,
	0xc8,0x88,0x88,0xc8,0xb0,0x80,0x80,0xf0,
	0x08,0x68,0x98,0x88,0x88,0x88,0x00,0xd8,
};

BMF_FontData BMF_font_scr12 = {
	0, -2,
	7, 10,
	{
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0, 0, 0, 0, 16, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0, 0, 0, 0, 7, -1},
		{1, 8, -3, 0, 7, 0},
		{3, 4, -2, -5, 7, 8},
		{7, 8, 0, 0, 7, 12},
		{5, 9, -1, 1, 7, 20},
		{6, 8, 0, 0, 7, 29},
		{6, 8, 0, 0, 7, 37},
		{3, 4, -2, -5, 7, 45},
		{3, 10, -2, 2, 7, 49},
		{3, 10, -2, 2, 7, 59},
		{5, 5, -1, -3, 7, 69},
		{5, 5, -1, -1, 7, 74},
		{2, 4, -2, 2, 7, 79},
		{5, 1, -1, -3, 7, 83},
		{1, 2, -3, 0, 7, 84},
		{5, 10, -1, 1, 7, 86},
		{5, 8, -1, 0, 7, 96},
		{3, 8, -2, 0, 7, 104},
		{5, 8, -1, 0, 7, 112},
		{5, 8, -1, 0, 7, 120},
		{5, 8, -1, 0, 7, 128},
		{5, 8, -1, 0, 7, 136},
		{5, 8, -1, 0, 7, 144},
		{5, 8, -1, 0, 7, 152},
		{5, 8, -1, 0, 7, 160},
		{5, 8, -1, 0, 7, 168},
		{1, 6, -3, 0, 7, 176},
		{2, 8, -2, 2, 7, 182},
		{5, 9, -1, 1, 7, 190},
		{5, 3, -1, -2, 7, 199},
		{5, 9, -1, 1, 7, 202},
		{5, 8, -1, 0, 7, 211},
		{5, 8, -1, 0, 7, 219},
		{5, 8, -1, 0, 7, 227},
		{5, 8, -1, 0, 7, 235},
		{5, 8, -1, 0, 7, 243},
		{5, 8, -1, 0, 7, 251},
		{5, 8, -1, 0, 7, 259},
		{5, 8, -1, 0, 7, 267},
		{5, 8, -1, 0, 7, 275},
		{5, 8, -1, 0, 7, 283},
		{3, 8, -2, 0, 7, 291},
		{5, 8, -1, 0, 7, 299},
		{5, 8, -1, 0, 7, 307},
		{5, 8, -1, 0, 7, 315},
		{5, 8, -1, 0, 7, 323},
		{5, 8, -1, 0, 7, 331},
		{5, 8, -1, 0, 7, 339},
		{5, 8, -1, 0, 7, 347},
		{5, 10, -1, 2, 7, 355},
		{5, 8, -1, 0, 7, 365},
		{5, 8, -1, 0, 7, 373},
		{5, 8, -1, 0, 7, 381},
		{5, 8, -1, 0, 7, 389},
		{5, 8, -1, 0, 7, 397},
		{5, 8, -1, 0, 7, 405},
		{5, 8, -1, 0, 7, 413},
		{5, 8, -1, 0, 7, 421},
		{5, 8, -1, 0, 7, 429},
		{3, 9, -2, 1, 7, 437},
		{5, 10, -1, 1, 7, 446},
		{3, 9, -2, 1, 7, 456},
		{5, 3, -1, -5, 7, 465},
		{7, 1, 0, 1, 7, 468},
		{3, 4, -2, -5, 7, 469},
		{5, 6, -1, 0, 7, 473},
		{5, 8, -1, 0, 7, 479},
		{5, 6, -1, 0, 7, 487},
		{5, 8, -1, 0, 7, 493},
		{5, 6, -1, 0, 7, 501},
		{5, 8, -1, 0, 7, 507},
		{5, 8, -1, 2, 7, 515},
		{5, 8, -1, 0, 7, 523},
		{3, 8, -2, 0, 7, 531},
		{4, 10, -1, 2, 7, 539},
		{5, 8, -1, 0, 7, 549},
		{3, 8, -2, 0, 7, 557},
		{5, 6, -1, 0, 7, 565},
		{5, 6, -1, 0, 7, 571},
		{5, 6, -1, 0, 7, 577},
		{5, 8, -1, 2, 7, 583},
		{5, 8, -1, 2, 7, 591},
		{5, 6, -1, 0, 7, 599},
		{5, 6, -1, 0, 7, 605},
		{4, 7, -1, 0, 7, 611},
		{5, 6, -1, 0, 7, 618},
		{5, 6, -1, 0, 7, 624},
		{5, 6, -1, 0, 7, 630},
		{5, 6, -1, 0, 7, 636},
		{5, 8, -1, 2, 7, 642},
		{5, 6, -1, 0, 7, 650},
		{5, 10, -1, 2, 7, 656},
		{1, 10, -3, 1, 7, 666},
		{5, 10, -1, 2, 7, 676},
		{6, 3, 0, -2, 7, 686},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{0,0,0,0,0, -1},
		{1, 8, -3, 2, 7, 689},
		{5, 9, -1, 0, 7, 697},
		{5, 8, -1, 0, 7, 706},
		{4, 6, -1, -2, 7, 714},
		{5, 8, -1, 0, 7, 720},
		{1, 10, -3, 1, 7, 728},
		{5, 10, -1, 1, 7, 738},
		{3, 1, -2, -7, 7, 748},
		{6, 7, 0, 0, 7, 749},
		{4, 5, -1, -4, 7, 756},
		{6, 7, 0, 0, 7, 761},
		{5, 2, -1, -3, 7, 768},
		{4, 1, -1, -3, 7, 770},
		{6, 7, 0, 0, 7, 771},
		{3, 1, -2, -7, 7, 778},
		{4, 3, -1, -4, 7, 779},
		{5, 7, -1, 0, 7, 782},
		{3, 5, -2, -4, 7, 789},
		{3, 5, -2, -4, 7, 794},
		{2, 2, -2, -7, 7, 799},
		{5, 6, -1, 1, 7, 801},
		{6, 9, 0, 1, 7, 807},
		{1, 2, -3, -3, 7, 816},
		{2, 2, -2, 2, 7, 818},
		{3, 5, -2, -4, 7, 820},
		{4, 5, -1, -4, 7, 825},
		{6, 7, 0, 0, 7, 830},
		{5, 10, -1, 1, 7, 837},
		{5, 10, -1, 1, 7, 847},
		{5, 10, -1, 1, 7, 857},
		{5, 8, -1, 2, 7, 867},
		{5, 10, -1, 0, 7, 875},
		{5, 10, -1, 0, 7, 885},
		{5, 10, -1, 0, 7, 895},
		{5, 10, -1, 0, 7, 905},
		{5, 9, -1, 0, 7, 915},
		{5, 10, -1, 0, 7, 924},
		{6, 8, 0, 0, 7, 934},
		{5, 10, -1, 2, 7, 942},
		{5, 10, -1, 0, 7, 952},
		{5, 10, -1, 0, 7, 962},
		{5, 10, -1, 0, 7, 972},
		{5, 9, -1, 0, 7, 982},
		{3, 10, -2, 0, 7, 991},
		{3, 10, -2, 0, 7, 1001},
		{3, 10, -2, 0, 7, 1011},
		{3, 9, -2, 0, 7, 1021},
		{6, 8, 0, 0, 7, 1030},
		{5, 10, -1, 0, 7, 1038},
		{5, 10, -1, 0, 7, 1048},
		{5, 10, -1, 0, 7, 1058},
		{5, 10, -1, 0, 7, 1068},
		{5, 10, -1, 0, 7, 1078},
		{5, 9, -1, 0, 7, 1088},
		{5, 5, -1, -1, 7, 1097},
		{7, 7, 0, 0, 7, 1102},
		{5, 10, -1, 0, 7, 1109},
		{5, 10, -1, 0, 7, 1119},
		{5, 10, -1, 0, 7, 1129},
		{5, 9, -1, 0, 7, 1139},
		{5, 10, -1, 0, 7, 1148},
		{5, 9, -1, 0, 7, 1158},
		{5, 8, -1, 0, 7, 1167},
		{5, 8, -1, 0, 7, 1175},
		{5, 8, -1, 0, 7, 1183},
		{5, 8, -1, 0, 7, 1191},
		{5, 8, -1, 0, 7, 1199},
		{5, 7, -1, 0, 7, 1207},
		{5, 9, -1, 0, 7, 1214},
		{7, 5, 0, 0, 7, 1223},
		{5, 8, -1, 2, 7, 1228},
		{5, 8, -1, 0, 7, 1236},
		{5, 8, -1, 0, 7, 1244},
		{5, 8, -1, 0, 7, 1252},
		{5, 7, -1, 0, 7, 1260},
		{3, 8, -2, 0, 7, 1267},
		{3, 8, -2, 0, 7, 1275},
		{3, 8, -2, 0, 7, 1283},
		{3, 7, -2, 0, 7, 1291},
		{5, 9, -1, 0, 7, 1298},
		{5, 8, -1, 0, 7, 1307},
		{5, 8, -1, 0, 7, 1315},
		{5, 8, -1, 0, 7, 1323},
		{5, 8, -1, 0, 7, 1331},
		{5, 8, -1, 0, 7, 1339},
		{5, 7, -1, 0, 7, 1347},
		{5, 5, -1, -1, 7, 1354},
		{7, 5, 0, 0, 7, 1359},
		{5, 8, -1, 0, 7, 1364},
		{5, 8, -1, 0, 7, 1372},
		{5, 8, -1, 0, 7, 1380},
		{5, 7, -1, 0, 7, 1388},
		{5, 10, -1, 2, 7, 1395},
		{5, 10, -1, 2, 7, 1405},
		{5, 9, -1, 2, 7, 1415},
	},
	bitmap_data
};

#endif

