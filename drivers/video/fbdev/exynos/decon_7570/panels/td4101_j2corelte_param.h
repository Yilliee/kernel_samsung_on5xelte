#ifndef __TD4101_PARAM_H__
#define __TD4101_PARAM_H__
#include <linux/types.h>
#include <linux/kernel.h>

#define EXTEND_BRIGHTNESS	306
#define UI_MAX_BRIGHTNESS	255
#define UI_DEFAULT_BRIGHTNESS	128

struct lcd_seq_info {
	unsigned char	*cmd;
	unsigned int	len;
	unsigned int	sleep;
};

struct i2c_rom_data {
	u8 addr;
	u8 val;
};

static const struct i2c_rom_data LM3632_INIT[] = {
	{0x09, 0x41},
	{0x02, 0x50},
	{0x03, 0x0D},
	{0x04, 0x07},
	{0x05, 0xFF},
	{0x0A, 0x19},
	{0x0D, 0x24},
	{0x0E, 0x26},
	{0x0F, 0x26},
	{0x0C, 0x1F},
};

static const unsigned char SEQ_TD4101_BLON[] = {
	0x53,
	0x0C,
};

static const unsigned char SEQ_TD4101_CABC_MODE[] = {
	0x55,
	0x03,
};

static const unsigned char SEQ_TD4101_CABC_MIN[] = {
	0x5E,
	0x30,
};

static const unsigned char SEQ_TD4101_BL[] = {
	0x51,
	0xFF,
};

static const unsigned char SEQ_TD4101_ADDRESS[] = {
	0x36,
	0x40, 0x00
};

static const unsigned char SEQ_TEON_CTL[] = {
	0x35,
	0x01,
};

static const unsigned char SEQ_SLEEP_OUT[] = {
	0x11,
	0x00, 0x00
};

const const unsigned char SEQ_SLEEP_IN[] = {
	0x10,
	0x00, 0x00
};

const const unsigned char SEQ_DISPLAY_OFF[] = {
	0x28,
	0x00, 0x00
};

static const unsigned char SEQ_DISPLAY_ON[] = {
	0x29,
	0x00, 0x00
};

static const unsigned char SEQ_TD4101_CABC_OFF[] = {
	0x55,
	0x00,
};


static const unsigned char SEQ_TD4101_B0[] = {
	0xB0,
	0x04,
};

static const unsigned char SEQ_TD4101_B3[] = {
	0xB3,
	0x10, 0x00, 0x06,
};

static const unsigned char SEQ_TD4101_B4[] = {
	0xB4,
	0x00, 0x01,
};

static const unsigned char SEQ_TD4101_B5[] = {
	0xB5,
	0x00, 0x00, 0x00, 0x00,
};

/* Mipi frequency modified to 836MBPS for J260AZ to prevent RF noise */
static const unsigned char SEQ_TD4101_B6_836[] = {
	0xB6,
	0x32, 0x53, 0x80, 0x00, 0x00, 0x07, 0x86,
};

/* Mipi frequency is 723MBPS for other varients(REV1.1) */
static const unsigned char SEQ_TD4101_B6[] = {
	0xB6,
	0x32, 0x43, 0x80, 0x00, 0x00, 0x07, 0x86,
};

static const unsigned char SEQ_TD4101_B7[] = {
	0xB7,
	0x00,
};

static const unsigned char SEQ_TD4101_BA[] = {
	0xBA,
	0x07, 0x87, 0x3A, 0x0A, 0x3D, 0x88,
};

static const unsigned char SEQ_TD4101_BB[] = {
	0xBB,
	0x00, 0xB4, 0xA0,
};

static const unsigned char SEQ_TD4101_BC[] = {
	0xBC,
	0x00, 0xB4, 0xA0,
};

static const unsigned char SEQ_TD4101_BD[] = {
	0xBD,
	0x00, 0xB4, 0xA0,
};

static const unsigned char SEQ_TD4101_BE[] = {
	0xBE,
	0x04,
};

static const unsigned char SEQ_TD4101_BF[] = {
	0xBF,
	0x02, 0x3c, 0x80, 0x09,
};

static const unsigned char SEQ_TD4101_C0[] = {
	0xC0,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4101_C1[] = {
	0xC1,
	0x04, 0x48, 0x01, 0x03, 0x33, 0x08, 0x11, 0x00, 0x11, 0x00,
	0x73, 0x23, 0x23, 0x11, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xDF, 0x00, 0x30, 0x00,
	0x01, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4101_C2[] = {
	0xC2,
	0x00, 0xF0, 0x03, 0xC0, 0x0A, 0x04, 0x08, 0x00, 0x24, 0x19,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
};

static const unsigned char SEQ_TD4101_C3[] = {
	0xC3,
	0x3D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x01, 0x01, 0x03, 0x28, 0x00, 0x01, 0x03, 0x01, 0x44, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xF0, 0x00,
	0x00, 0x00, 0x00, 0x00, 0xF0, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x40, 0x20, 0x03,
};

static const unsigned char SEQ_TD4101_C4[] = {
	0xC4,
	0x70, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x01,
};

static const unsigned char SEQ_TD4101_C5[] = {
	0xC5,
	0x08, 0x00, 0x00, 0x00, 0x00, 0x70, 0x00, 0x00, 0x2D, 0x41,
};

static const unsigned char SEQ_TD4101_C6[] = {
	0xC6,
	0xFA, 0x54, 0xD7, 0x00, 0x00, 0x54, 0xD7, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x80, 0xFA,
};

static const unsigned char SEQ_TD4101_C7[] = {
	0xC7,
	0x00, 0x0B, 0x14, 0x22, 0x2F, 0x38, 0x52, 0x65, 0x75, 0x83,
	0x38, 0x43, 0x53, 0x6E, 0x7B, 0x87, 0x8D, 0x96, 0xB8, 0x00,
	0x0B, 0x14, 0x22, 0x2F, 0x38, 0x52, 0x65, 0x75, 0x83, 0x38,
	0x49, 0x59, 0x6E, 0x7B, 0x87, 0x8D, 0x96, 0xB8, 0x00, 0x97,
	0x00, 0x97, 0x00, 0x97, 0x00, 0x97,
};

static const unsigned char SEQ_TD4101_C8[] = {
	0xC8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00,
	0x00, 0x00, 0x00, 0xFC, 0x00,
};

static const unsigned char SEQ_TD4101_C9[] = {
	0xC9,
	0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00, 0x00, 0x00, 0x00,
	0x00, 0xFC, 0x00, 0x00, 0x00, 0x00, 0x00, 0xFC, 0x00,
};

static const unsigned char SEQ_TD4101_CA[] = {
	0xCA,
	0x1D, 0xFC, 0xFC, 0xFC, 0x00, 0xD9, 0xDA, 0x70, 0x00, 0xF0,
	0x26, 0xBA, 0x00, 0x9A, 0x00, 0x02, 0x39, 0xD6, 0x00, 0xEE,
	0x00, 0x0D, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4101_CC[] = {
	0xCC,
	0xD2, 0x72, 0x46, 0x42, 0x12, 0x16, 0x1A, 0x1E, 0x00, 0xD0,
	0x70, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x70, 0xD0, 0x00, 0x1C, 0x18, 0x14, 0x10,
	0x40, 0x44, 0x72, 0xD2, 0x00,
};

static const unsigned char SEQ_TD4101_CD[] = {
	0xCD,
	0xD3, 0x03, 0xF2, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00,
};

static const unsigned char SEQ_TD4101_CE[] = {
	0xCE,
	0x7D, 0x40, 0x48, 0x56, 0x67, 0x78, 0x88, 0x98, 0xA7, 0xB5,
	0xC3, 0xD1, 0xDE, 0xE9, 0xF2, 0xFA, 0xFF, 0x3C, 0x00, 0x01,
	0x04, 0x45, 0x00, 0x00,
};

static const unsigned char SEQ_TD4101_CF[] = {
	0xCF,
	0x48, 0x10,
};

static const unsigned char SEQ_TD4101_D0[] = {
	0xD0,
	0x11, 0x04, 0x59, 0xE3, 0x03, 0x10, 0x10, 0x40, 0x19, 0x08,
	0x99, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4101_D1[] = {
	0xD1,
	0x04,
};

static const unsigned char SEQ_TD4101_D3[] = {
	0xD3,
	0xBB, 0x3B, 0x33, 0x3B, 0x44, 0x3B, 0x44, 0x3B, 0x00, 0x00,
	0xEC, 0x91, 0x87, 0x23, 0x22, 0xE7, 0xE7, 0x3B, 0xBB, 0x4F,
	0xD0, 0x3C, 0x10, 0x12, 0x10, 0x00, 0x10,
};

static const unsigned char SEQ_TD4101_D4[] = {
	0xD4,
	0x80, 0x04, 0x04, 0x33, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0A, 0x90,
	0x05, 0x00, 0x64, 0x94,
};

static const unsigned char SEQ_TD4101_D6[] = {
	0xD6,
	0x41,
};

static const unsigned char SEQ_TD4101_D7[] = {
	0xD7,
	0xF6, 0xFF, 0x03, 0x05, 0x43, 0x24, 0x80, 0x1F, 0xC7, 0x1F,
	0x1B, 0x00, 0x0F, 0x01, 0x20, 0x08, 0x80, 0x3F, 0x00, 0x78,
	0x00, 0x40, 0x24, 0x15, 0x00, 0x33, 0x02, 0xC0, 0xAF, 0xCB,
	0x60, 0x30, 0xFC, 0x00, 0x3F, 0x00,
};

static const unsigned char SEQ_TD4101_D8[] = {
	0xD8,
	0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
};

static const unsigned char SEQ_TD4101_DD[] = {
	0xDD,
	0x30, 0x06, 0x23, 0x65,
};

static const unsigned char SEQ_TD4101_DE[] = {
	0xDE,
	0x00, 0xFF, 0xFF, 0x90,
};

/* platform brightness <-> bl reg */
static unsigned int brightness_table[EXTEND_BRIGHTNESS + 1] = {
	0,
	0, 0, 2, 2, 3, 3, 4, 4, 5, 5,
	6, 6, 7, 7, 7, 8, 9, 10, 11, 12,
	12, 13, 13, 14, 15, 15, 16, 16, 17, 17,
	18, 19, 19, 20, 20, 21, 22, 22, 23, 23,
	24, 25, 25, 26, 26, 27, 28, 28, 29, 29,
	30, 31, 31, 32, 32, 33, 33, 34, 35, 35,
	36, 36, 37, 38, 38, 39, 39, 40, 41, 41,
	42, 42, 43, 44, 44, 45, 45, 46, 46, 47,
	48, 48, 49, 49, 50, 51, 51, 52, 52, 53,
	54, 54, 55, 55, 56, 57, 57, 58, 58, 59,
	60, 60, 61, 61, 62, 62, 63, 64, 64, 65,
	65, 66, 67, 67, 68, 68, 69, 70, 70, 71,
	71, 72, 73, 73, 74, 74, 75, 76, 76, 77,
	78, 79, 80, 80, 81, 82, 83, 84, 85, 85,
	86, 87, 88, 89, 89, 90, 91, 92, 93, 94,
	94, 95, 96, 97, 98, 98, 99, 100, 101, 102,
	103, 103, 104, 105, 106, 107, 107, 108, 109, 110,
	111, 112, 112, 113, 114, 115, 116, 116, 117, 118,
	119, 120, 121, 121, 122, 123, 124, 125, 125, 126,
	127, 128, 129, 130, 130, 131, 132, 133, 134, 134,
	135, 136, 137, 138, 139, 139, 140, 141, 142, 143,
	143, 144, 145, 146, 147, 148, 148, 149, 150, 151,
	152, 152, 153, 154, 155, 156, 157, 157, 158, 159,
	160, 161, 161, 162, 163, 164, 165, 166, 166, 167,
	168, 169, 170, 170, 171, 172, 173, 174, 175, 175,
	176, 177, 178, 179, 180, 180, 180, 180, 180, 180,
	180, 180, 180, 180, 180, 180, 180, 180, 180, 180,
	180, 180, 180, 180, 180, 180, 180, 180, 180, 180,
	180, 180, 180, 180, 180, 180, 180, 180, 180, 180,
	180, 180, 180, 180, 180, 180, 180, 180, 180, 180,
	180, 180, 180, 180, 180, 242,
};

#endif /* __TD4101_PARAM_H__ */
