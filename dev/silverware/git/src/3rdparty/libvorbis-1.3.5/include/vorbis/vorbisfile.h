#pragma once

struct ov_callbacks
{
	unsigned long long(*read_func)(void *, unsigned long long, unsigned long long, void *); // 0x0
	long(*seek_func)(void *, long long, long); // 0x8
	long(*close_func)(void *); // 0x10
	long(*tell_func)(void *); // 0x18
};
struct OggVorbis_File
{
	void * datasource; // 0x0
	long seekable; // 0x8
	long long offset; // 0x10
	long long end; // 0x18
	ogg_sync_state oy; // 0x20
	long links; // 0x40
	long long * offsets; // 0x48
	long long * dataoffsets; // 0x50
	long * serialnos; // 0x58
	long long * pcmlengths; // 0x60
	vorbis_info * vi; // 0x68
	vorbis_comment * vc; // 0x70
	long long pcm_offset; // 0x78
	long ready_state; // 0x80
	long current_serialno; // 0x84
	long current_link; // 0x88
	double bittrack; // 0x90
	double samptrack; // 0x98
	ogg_stream_state os; // 0xA0
	vorbis_dsp_state vd; // 0x218
	vorbis_block vb; // 0x298
	ov_callbacks callbacks; // 0x328
};