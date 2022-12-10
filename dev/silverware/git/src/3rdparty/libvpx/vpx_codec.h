#pragma once

struct vpx_codec_ctx
{
	const char * name; // 0x0
	const vpx_codec_iface * iface; // 0x8
	vpx_codec_err_t err; // 0x10
	const char * err_detail; // 0x18
	long init_flags; // 0x20
	union <unnamed-type-config>;
	vpx_codec_ctx::<unnamed-type-config> config; // 0x28
	vpx_codec_priv * priv; // 0x30
};
union vpx_codec_ctx::<unnamed-type-config>
{
public:
	const vpx_codec_dec_cfg * dec; // 0x0
	const vpx_codec_enc_cfg * enc; // 0x0
	const void * raw; // 0x0
};