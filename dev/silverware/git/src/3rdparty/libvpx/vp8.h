#pragma once

enum vp8_com_control_id
{
	VP8_SET_REFERENCE = 1,
	VP8_COPY_REFERENCE = 2,
	VP8_SET_POSTPROC = 3,
	VP8_SET_DBG_COLOR_REF_FRAME = 4,
	VP8_SET_DBG_COLOR_MB_MODES = 5,
	VP8_SET_DBG_COLOR_B_MODES = 6,
	VP8_SET_DBG_DISPLAY_MV = 7,
	VP9_GET_REFERENCE = 128,
	VP8_COMMON_CTRL_ID_MAX = 129,
	VP8_DECODER_CTRL_ID_START = 256,
};
struct vp8_postproc_cfg
{
	long post_proc_flag; // 0x0
	long deblocking_level; // 0x4
	long noise_level; // 0x8
};
struct vpx_ref_frame
{
	vpx_ref_frame_type frame_type; // 0x0
	vpx_image img; // 0x8
};
struct vp9_ref_frame
{
	long idx; // 0x0
	vpx_image img; // 0x8
};