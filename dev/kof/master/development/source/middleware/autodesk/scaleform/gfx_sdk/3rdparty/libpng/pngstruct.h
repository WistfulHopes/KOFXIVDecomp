#pragma once

struct png_compression_buffer
{
	png_compression_buffer * next; // 0x0
	unsigned char output[1]; // 0x8
};
struct png_xy
{
	long redx; // 0x0
	long redy; // 0x4
	long greenx; // 0x8
	long greeny; // 0xC
	long bluex; // 0x10
	long bluey; // 0x14
	long whitex; // 0x18
	long whitey; // 0x1C
};
struct png_XYZ
{
	long red_X; // 0x0
	long red_Y; // 0x4
	long red_Z; // 0x8
	long green_X; // 0xC
	long green_Y; // 0x10
	long green_Z; // 0x14
	long blue_X; // 0x18
	long blue_Y; // 0x1C
	long blue_Z; // 0x20
};
struct png_colorspace
{
	long gamma; // 0x0
	png_xy end_points_xy; // 0x4
	png_XYZ end_points_XYZ; // 0x24
	unsigned short rendering_intent; // 0x48
	unsigned short flags; // 0x4A
};
struct png_struct_def
{
	_SETJMP_FLOAT128 jmp_buf_local[16]; // 0x0
	void(*longjmp_fn)(_SETJMP_FLOAT128 *, long); // 0x100
	_SETJMP_FLOAT128[16] * jmp_buf_ptr; // 0x108
	unsigned long long jmp_buf_size; // 0x110
	void(*error_fn)(png_struct_def *, const char *); // 0x118
	void(*warning_fn)(png_struct_def *, const char *); // 0x120
	void * error_ptr; // 0x128
	void(*write_data_fn)(png_struct_def *, unsigned char *, unsigned long long); // 0x130
	void(*read_data_fn)(png_struct_def *, unsigned char *, unsigned long long); // 0x138
	void * io_ptr; // 0x140
	void(*read_user_transform_fn)(png_struct_def *, png_row_info_struct *, unsigned char *); // 0x148
	void(*write_user_transform_fn)(png_struct_def *, png_row_info_struct *, unsigned char *); // 0x150
	void * user_transform_ptr; // 0x158
	unsigned char user_transform_depth; // 0x160
	unsigned char user_transform_channels; // 0x161
	unsigned long mode; // 0x164
	unsigned long flags; // 0x168
	unsigned long transformations; // 0x16C
	unsigned long zowner; // 0x170
	z_stream_s zstream; // 0x178
	png_compression_buffer * zbuffer_list; // 0x1D0
	unsigned long zbuffer_size; // 0x1D8
	long zlib_level; // 0x1DC
	long zlib_method; // 0x1E0
	long zlib_window_bits; // 0x1E4
	long zlib_mem_level; // 0x1E8
	long zlib_strategy; // 0x1EC
	long zlib_text_level; // 0x1F0
	long zlib_text_method; // 0x1F4
	long zlib_text_window_bits; // 0x1F8
	long zlib_text_mem_level; // 0x1FC
	long zlib_text_strategy; // 0x200
	long zlib_set_level; // 0x204
	long zlib_set_method; // 0x208
	long zlib_set_window_bits; // 0x20C
	long zlib_set_mem_level; // 0x210
	long zlib_set_strategy; // 0x214
	unsigned long width; // 0x218
	unsigned long height; // 0x21C
	unsigned long num_rows; // 0x220
	unsigned long usr_width; // 0x224
	unsigned long long rowbytes; // 0x228
	unsigned long iwidth; // 0x230
	unsigned long row_number; // 0x234
	unsigned long chunk_name; // 0x238
	unsigned char * prev_row; // 0x240
	unsigned char * row_buf; // 0x248
	unsigned char * sub_row; // 0x250
	unsigned char * up_row; // 0x258
	unsigned char * avg_row; // 0x260
	unsigned char * paeth_row; // 0x268
	unsigned long long info_rowbytes; // 0x270
	unsigned long idat_size; // 0x278
	unsigned long crc; // 0x27C
	png_color_struct * palette; // 0x280
	unsigned short num_palette; // 0x288
	long num_palette_max; // 0x28C
	unsigned short num_trans; // 0x290
	unsigned char compression; // 0x292
	unsigned char filter; // 0x293
	unsigned char interlaced; // 0x294
	unsigned char pass; // 0x295
	unsigned char do_filter; // 0x296
	unsigned char color_type; // 0x297
	unsigned char bit_depth; // 0x298
	unsigned char usr_bit_depth; // 0x299
	unsigned char pixel_depth; // 0x29A
	unsigned char channels; // 0x29B
	unsigned char usr_channels; // 0x29C
	unsigned char sig_bytes; // 0x29D
	unsigned char maximum_pixel_depth; // 0x29E
	unsigned char transformed_pixel_depth; // 0x29F
	unsigned short filler; // 0x2A0
	unsigned char background_gamma_type; // 0x2A2
	long background_gamma; // 0x2A4
	png_color_16_struct background; // 0x2A8
	png_color_16_struct background_1; // 0x2B2
	void(*output_flush_fn)(png_struct_def *); // 0x2C0
	unsigned long flush_dist; // 0x2C8
	unsigned long flush_rows; // 0x2CC
	long gamma_shift; // 0x2D0
	long screen_gamma; // 0x2D4
	unsigned char * gamma_table; // 0x2D8
	unsigned short * * gamma_16_table; // 0x2E0
	unsigned char * gamma_from_1; // 0x2E8
	unsigned char * gamma_to_1; // 0x2F0
	unsigned short * * gamma_16_from_1; // 0x2F8
	unsigned short * * gamma_16_to_1; // 0x300
	png_color_8_struct sig_bit; // 0x308
	png_color_8_struct shift; // 0x30D
	unsigned char * trans_alpha; // 0x318
	png_color_16_struct trans_color; // 0x320
	void(*read_row_fn)(png_struct_def *, unsigned long, long); // 0x330
	void(*write_row_fn)(png_struct_def *, unsigned long, long); // 0x338
	void(*info_fn)(png_struct_def *, png_info_def *); // 0x340
	void(*row_fn)(png_struct_def *, unsigned char *, unsigned long, long); // 0x348
	void(*end_fn)(png_struct_def *, png_info_def *); // 0x350
	unsigned char * save_buffer_ptr; // 0x358
	unsigned char * save_buffer; // 0x360
	unsigned char * current_buffer_ptr; // 0x368
	unsigned char * current_buffer; // 0x370
	unsigned long push_length; // 0x378
	unsigned long skip_length; // 0x37C
	unsigned long long save_buffer_size; // 0x380
	unsigned long long save_buffer_max; // 0x388
	unsigned long long buffer_size; // 0x390
	unsigned long long current_buffer_size; // 0x398
	long process_mode; // 0x3A0
	long cur_palette; // 0x3A4
	unsigned char * palette_lookup; // 0x3A8
	unsigned char * quantize_index; // 0x3B0
	unsigned char heuristic_method; // 0x3B8
	unsigned char num_prev_filters; // 0x3B9
	unsigned char * prev_filters; // 0x3C0
	unsigned short * filter_weights; // 0x3C8
	unsigned short * inv_filter_weights; // 0x3D0
	unsigned short * filter_costs; // 0x3D8
	unsigned short * inv_filter_costs; // 0x3E0
	char time_buffer[29]; // 0x3E8
	unsigned long free_me; // 0x408
	void * user_chunk_ptr; // 0x410
	long(*read_user_chunk_fn)(png_struct_def *, png_unknown_chunk_t *); // 0x418
	long unknown_default; // 0x420
	unsigned long num_chunk_list; // 0x424
	unsigned char * chunk_list; // 0x428
	unsigned char rgb_to_gray_status; // 0x430
	unsigned char rgb_to_gray_coefficients_set; // 0x431
	unsigned short rgb_to_gray_red_coeff; // 0x432
	unsigned short rgb_to_gray_green_coeff; // 0x434
	unsigned long mng_features_permitted; // 0x438
	unsigned char filter_type; // 0x43C
	void * mem_ptr; // 0x440
	void *(*malloc_fn)(png_struct_def *, unsigned long long); // 0x448
	void(*free_fn)(png_struct_def *, void *); // 0x450
	unsigned char * big_row_buf; // 0x458
	unsigned char * quantize_sort; // 0x460
	unsigned char * index_to_palette; // 0x468
	unsigned char * palette_to_index; // 0x470
	unsigned char compression_type; // 0x478
	unsigned long user_width_max; // 0x47C
	unsigned long user_height_max; // 0x480
	unsigned long user_chunk_cache_max; // 0x484
	unsigned long long user_chunk_malloc_max; // 0x488
	png_unknown_chunk_t unknown_chunk; // 0x490
	unsigned long long old_big_row_buf_size; // 0x4B0
	unsigned char * read_buffer; // 0x4B8
	unsigned long long read_buffer_size; // 0x4C0
	unsigned long IDAT_read_size; // 0x4C8
	unsigned long io_state; // 0x4CC
	unsigned char * big_prev_row; // 0x4D0
	void(*read_filter)(png_row_info_struct *, unsigned char *, const unsigned char *)[4]; // 0x4D8
	png_colorspace colorspace; // 0x4F8
};