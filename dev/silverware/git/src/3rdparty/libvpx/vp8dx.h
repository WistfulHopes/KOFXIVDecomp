#pragma once

enum vp8_dec_control_id
{
	VP8D_GET_LAST_REF_UPDATES = 256,
	VP8D_GET_FRAME_CORRUPTED = 257,
	VP8D_GET_LAST_REF_USED = 258,
	VPXD_SET_DECRYPTOR = 259,
	VP8D_SET_DECRYPTOR = 259,
	VP9D_GET_FRAME_SIZE = 260,
	VP9D_GET_DISPLAY_SIZE = 261,
	VP9D_GET_BIT_DEPTH = 262,
	VP9_SET_BYTE_ALIGNMENT = 263,
	VP9_INVERT_TILE_DECODE_ORDER = 264,
	VP9_SET_SKIP_LOOP_FILTER = 265,
	VP9_DECODE_SVC_SPATIAL_LAYER = 266,
	VP8_DECODER_CTRL_ID_MAX = 267,
};
struct vpx_decrypt_init
{
	void(*decrypt_cb)(void *, const unsigned char *, unsigned char *, long); // 0x0
	void * decrypt_state; // 0x8
};