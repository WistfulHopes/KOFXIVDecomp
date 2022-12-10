#pragma once

struct png_control
{
	png_struct_def * png_ptr; // 0x0
	png_info_def * info_ptr; // 0x8
	void * error_buf; // 0x10
	const unsigned char * memory; // 0x18
	unsigned long long size; // 0x20
	unsigned long for_write : 1; // 0x28
	unsigned long owned_file : 1; // 0x28
};