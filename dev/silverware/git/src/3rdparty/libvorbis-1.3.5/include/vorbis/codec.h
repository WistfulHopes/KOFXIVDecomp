#pragma once

struct vorbis_info
{
	long version; // 0x0
	long channels; // 0x4
	long rate; // 0x8
	long bitrate_upper; // 0xC
	long bitrate_nominal; // 0x10
	long bitrate_lower; // 0x14
	long bitrate_window; // 0x18
	void * codec_setup; // 0x20
};
struct vorbis_dsp_state
{
	long analysisp; // 0x0
	vorbis_info * vi; // 0x8
	float * * pcm; // 0x10
	float * * pcmret; // 0x18
	long pcm_storage; // 0x20
	long pcm_current; // 0x24
	long pcm_returned; // 0x28
	long preextrapolate; // 0x2C
	long eofflag; // 0x30
	long lW; // 0x34
	long W; // 0x38
	long nW; // 0x3C
	long centerW; // 0x40
	long long granulepos; // 0x48
	long long sequence; // 0x50
	long long glue_bits; // 0x58
	long long time_bits; // 0x60
	long long floor_bits; // 0x68
	long long res_bits; // 0x70
	void * backend_state; // 0x78
};
struct vorbis_block
{
	float * * pcm; // 0x0
	oggpack_buffer opb; // 0x8
	long lW; // 0x28
	long W; // 0x2C
	long nW; // 0x30
	long pcmend; // 0x34
	long mode; // 0x38
	long eofflag; // 0x3C
	long long granulepos; // 0x40
	long long sequence; // 0x48
	vorbis_dsp_state * vd; // 0x50
	void * localstore; // 0x58
	long localtop; // 0x60
	long localalloc; // 0x64
	long totaluse; // 0x68
	alloc_chain * reap; // 0x70
	long glue_bits; // 0x78
	long time_bits; // 0x7C
	long floor_bits; // 0x80
	long res_bits; // 0x84
	void * internal; // 0x88
};
struct alloc_chain
{
	void * ptr; // 0x0
	alloc_chain * next; // 0x8
};
struct vorbis_comment
{
	char * * user_comments; // 0x0
	long * comment_lengths; // 0x8
	long comments; // 0x10
	char * vendor; // 0x18
};