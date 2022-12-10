#pragma once

struct png_info_def
{
	unsigned long width; // 0x0
	unsigned long height; // 0x4
	unsigned long valid; // 0x8
	unsigned long long rowbytes; // 0x10
	png_color_struct * palette; // 0x18
	unsigned short num_palette; // 0x20
	unsigned short num_trans; // 0x22
	unsigned char bit_depth; // 0x24
	unsigned char color_type; // 0x25
	unsigned char compression_type; // 0x26
	unsigned char filter_type; // 0x27
	unsigned char interlace_type; // 0x28
	unsigned char channels; // 0x29
	unsigned char pixel_depth; // 0x2A
	unsigned char spare_byte; // 0x2B
	unsigned char signature[8]; // 0x2C
	png_colorspace colorspace; // 0x34
	char * iccp_name; // 0x80
	unsigned char * iccp_profile; // 0x88
	unsigned long iccp_proflen; // 0x90
	long num_text; // 0x94
	long max_text; // 0x98
	png_text_struct * text; // 0xA0
	png_time_struct mod_time; // 0xA8
	png_color_8_struct sig_bit; // 0xB0
	unsigned char * trans_alpha; // 0xB8
	png_color_16_struct trans_color; // 0xC0
	png_color_16_struct background; // 0xCA
	long x_offset; // 0xD4
	long y_offset; // 0xD8
	unsigned char offset_unit_type; // 0xDC
	unsigned long x_pixels_per_unit; // 0xE0
	unsigned long y_pixels_per_unit; // 0xE4
	unsigned char phys_unit_type; // 0xE8
	unsigned short * hist; // 0xF0
	char * pcal_purpose; // 0xF8
	long pcal_X0; // 0x100
	long pcal_X1; // 0x104
	char * pcal_units; // 0x108
	char * * pcal_params; // 0x110
	unsigned char pcal_type; // 0x118
	unsigned char pcal_nparams; // 0x119
	unsigned long free_me; // 0x11C
	png_unknown_chunk_t * unknown_chunks; // 0x120
	long unknown_chunks_num; // 0x128
	png_sPLT_struct * splt_palettes; // 0x130
	long splt_palettes_num; // 0x138
	unsigned char scal_unit; // 0x13C
	char * scal_s_width; // 0x140
	char * scal_s_height; // 0x148
	unsigned char * * row_pointers; // 0x150
};