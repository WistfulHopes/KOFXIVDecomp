#pragma once

struct png_color_struct
{
	unsigned char red; // 0x0
	unsigned char green; // 0x1
	unsigned char blue; // 0x2
};
struct png_color_16_struct
{
	unsigned char index; // 0x0
	unsigned short red; // 0x2
	unsigned short green; // 0x4
	unsigned short blue; // 0x6
	unsigned short gray; // 0x8
};
struct png_color_8_struct
{
	unsigned char red; // 0x0
	unsigned char green; // 0x1
	unsigned char blue; // 0x2
	unsigned char gray; // 0x3
	unsigned char alpha; // 0x4
};
struct png_sPLT_entry_struct
{
	unsigned short red; // 0x0
	unsigned short green; // 0x2
	unsigned short blue; // 0x4
	unsigned short alpha; // 0x6
	unsigned short frequency; // 0x8
};
struct png_sPLT_struct
{
	char * name; // 0x0
	unsigned char depth; // 0x8
	png_sPLT_entry_struct * entries; // 0x10
	long nentries; // 0x18
};
struct png_text_struct
{
	long compression; // 0x0
	char * key; // 0x8
	char * text; // 0x10
	unsigned long long text_length; // 0x18
	unsigned long long itxt_length; // 0x20
	char * lang; // 0x28
	char * lang_key; // 0x30
};
struct png_time_struct
{
	unsigned short year; // 0x0
	unsigned char month; // 0x2
	unsigned char day; // 0x3
	unsigned char hour; // 0x4
	unsigned char minute; // 0x5
	unsigned char second; // 0x6
};
struct png_unknown_chunk_t
{
	unsigned char name[5]; // 0x0
	unsigned char * data; // 0x8
	unsigned long long size; // 0x10
	unsigned char location; // 0x18
};
struct png_row_info_struct
{
	unsigned long width; // 0x0
	unsigned long long rowbytes; // 0x8
	unsigned char color_type; // 0x10
	unsigned char bit_depth; // 0x11
	unsigned char channels; // 0x12
	unsigned char pixel_depth; // 0x13
};
struct png_image
{
	png_control * opaque; // 0x0
	unsigned long version; // 0x8
	unsigned long width; // 0xC
	unsigned long height; // 0x10
	unsigned long format; // 0x14
	unsigned long flags; // 0x18
	unsigned long colormap_entries; // 0x1C
	unsigned long warning_or_error; // 0x20
	char message[64]; // 0x24
};