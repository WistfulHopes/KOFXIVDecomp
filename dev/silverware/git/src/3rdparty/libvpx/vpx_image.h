#pragma once

enum vpx_img_fmt
{
	VPX_IMG_FMT_NONE = 0,
	VPX_IMG_FMT_RGB24 = 1,
	VPX_IMG_FMT_RGB32 = 2,
	VPX_IMG_FMT_RGB565 = 3,
	VPX_IMG_FMT_RGB555 = 4,
	VPX_IMG_FMT_UYVY = 5,
	VPX_IMG_FMT_YUY2 = 6,
	VPX_IMG_FMT_YVYU = 7,
	VPX_IMG_FMT_BGR24 = 8,
	VPX_IMG_FMT_RGB32_LE = 9,
	VPX_IMG_FMT_ARGB = 10,
	VPX_IMG_FMT_ARGB_LE = 11,
	VPX_IMG_FMT_RGB565_LE = 12,
	VPX_IMG_FMT_RGB555_LE = 13,
	VPX_IMG_FMT_YV12 = 769,
	VPX_IMG_FMT_I420 = 258,
	VPX_IMG_FMT_VPXYV12 = 771,
	VPX_IMG_FMT_VPXI420 = 260,
	VPX_IMG_FMT_I422 = 261,
	VPX_IMG_FMT_I444 = 262,
	VPX_IMG_FMT_I440 = 263,
	VPX_IMG_FMT_444A = 1286,
	VPX_IMG_FMT_I42016 = 2306,
	VPX_IMG_FMT_I42216 = 2309,
	VPX_IMG_FMT_I44416 = 2310,
	VPX_IMG_FMT_I44016 = 2311,
};
enum vpx_color_range
{
	VPX_CR_STUDIO_RANGE = 0,
	VPX_CR_FULL_RANGE = 1,
};
struct vpx_image
{
	vpx_img_fmt fmt; // 0x0
	vpx_color_space cs; // 0x4
	vpx_color_range range; // 0x8
	unsigned long w; // 0xC
	unsigned long h; // 0x10
	unsigned long bit_depth; // 0x14
	unsigned long d_w; // 0x18
	unsigned long d_h; // 0x1C
	unsigned long r_w; // 0x20
	unsigned long r_h; // 0x24
	unsigned long x_chroma_shift; // 0x28
	unsigned long y_chroma_shift; // 0x2C
	unsigned char * planes[4]; // 0x30
	long stride[4]; // 0x50
	long bps; // 0x60
	void * user_priv; // 0x68
	unsigned char * img_data; // 0x70
	long img_data_owner; // 0x78
	long self_allocd; // 0x7C
	void * fb_priv; // 0x80
};