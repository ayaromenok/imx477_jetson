/*
 * imx477_mode_tbls.h - imx477 sensor mode tables
 *
 * Copyright (c) 2020, RidgeRun. All rights reserved.
 *
 * Contact us: support@ridgerun.com
 * 
 * Copyright (c) 2021, Andrey Yaromenok. All rights reserved.
 *
 * This program is free software; you can redistribute it and/or modify it
 * under the terms and conditions of the GNU General Public License,
 * version 2, as published by the Free Software Foundation.
 *
 * This program is distributed in the hope it will be useful, but WITHOUT
 * ANY WARRANTY; without even the implied warranty of MERCHANTABILITY or
 * FITNESS FOR A PARTICULAR PURPOSE.  See the GNU General Public License for
 * more details.
 *
 * You should have received a copy of the GNU General Public License
 * along with this program.  If not, see <http://www.gnu.org/licenses/>.
 */
 
#ifndef __IMX477_MODE_1920_1080_60__
#define __IMX477_MODE_1920_1080_60__

static const imx477_reg imx477_mode_1920x1080_60fps[] = {
	{0x0112, 0x0A},
	{0x0113, 0x0A},
	{0x0114, 0x01},
	{0x0342, 0x23},
	{0x0343, 0x40},
	{0x0340, 0x06},
	{0x0341, 0x0F},
	{0x0344, 0x00},
	{0x0345, 0x00},
	{0x0346, 0x01},
	{0x0347, 0x78},
	{0x0348, 0x0F},
	{0x0349, 0xD7},
	{0x034A, 0x0A},
	{0x034B, 0x67},
	{0x00E3, 0x00},
	{0x00E4, 0x00},
	{0x00FC, 0x0A},
	{0x00FD, 0x0A},
	{0x00FE, 0x0A},
	{0x00FF, 0x0A},
	{0x0220, 0x00},
	{0x0221, 0x11},
	{0x0381, 0x01},
	{0x0383, 0x01},
	{0x0385, 0x01},
	{0x0387, 0x01},
	{0x0900, 0x01},
	{0x0901, 0x22},
	{0x0902, 0x02},
	{0x3140, 0x02},
	{0x3C00, 0x00},
	{0x3C01, 0x01},
	{0x3C02, 0x9C},
	{0x3F0D, 0x00},
	{0x5748, 0x00},
	{0x5749, 0x00},
	{0x574A, 0x00},
	{0x574B, 0xA4},
	{0x7B75, 0x0E},
	{0x7B76, 0x09},
	{0x7B77, 0x08},
	{0x7B78, 0x06},
	{0x7B79, 0x34},
	{0x7B53, 0x00},
	{0x9369, 0x73},
	{0x936B, 0x64},
	{0x936D, 0x5F},
	{0x9304, 0x03},
	{0x9305, 0x80},
	{0x9E9A, 0x2F},
	{0x9E9B, 0x2F},
	{0x9E9C, 0x2F},
	{0x9E9D, 0x00},
	{0x9E9E, 0x00},
	{0x9E9F, 0x00},
	{0xA2A9, 0x27},
	{0xA2B7, 0x03},
	{0x0401, 0x00},
	{0x0404, 0x00},
	{0x0405, 0x10},
	{0x0408, 0x00},
	{0x0409, 0x36},
	{0x040A, 0x00},
	{0x040B, 0x20},
	{0x040C, 0x07},
	{0x040D, 0x80},
	{0x040E, 0x04},
	{0x040F, 0x38},
	{0x034C, 0x07},
	{0x034D, 0x80},
	{0x034E, 0x04},
	{0x034F, 0x38},
	{0x0301, 0x05},
	{0x0303, 0x02},
	{0x0305, 0x02},
	{0x0306, 0x00},
	{0x0307, 0xAF},
	{0x0309, 0x0A},
	{0x030B, 0x01},
	{0x030D, 0x03},
	{0x030E, 0x00},
	{0x030F, 0x96},
	{0x0310, 0x01},
	{0x0820, 0x09},
	{0x0821, 0x60},
	{0x0822, 0x00},
	{0x0823, 0x00},
	{0x080A, 0x00},
	{0x080B, 0x87},
	{0x080C, 0x00},
	{0x080D, 0x4F},
	{0x080E, 0x00},
	{0x080F, 0x87},
	{0x0810, 0x00},
	{0x0811, 0x5F},
	{0x0812, 0x00},
	{0x0813, 0x5F},
	{0x0814, 0x00},
	{0x0815, 0x4F},
	{0x0816, 0x01},
	{0x0817, 0x3F},
	{0x0818, 0x00},
	{0x0819, 0x3F},
	{0xE04C, 0x00},
	{0xE04D, 0x87},
	{0xE04E, 0x00},
	{0xE04F, 0x1F},
	{0x3E20, 0x01},
	{0x3E37, 0x00},
	{0x3F50, 0x00},
	{0x3F56, 0x01},
	{0x3F57, 0x02},
	{0X3FF9, 0x01},
	{IMX477_TABLE_WAIT_MS, IMX477_WAIT_MS},
	{IMX477_TABLE_END, 0x0000}
};

#endif /* __IMX477_MODE_1920_1080_60__ */