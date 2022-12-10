#pragma once

struct z_stream_s
{
	const unsigned char * next_in; // 0x0
	unsigned long avail_in; // 0x8
	unsigned long total_in; // 0xC
	unsigned char * next_out; // 0x10
	unsigned long avail_out; // 0x18
	unsigned long total_out; // 0x1C
	const char * msg; // 0x20
	internal_state * state; // 0x28
	void *(*zalloc)(void *, unsigned long, unsigned long); // 0x30
	void(*zfree)(void *, void *); // 0x38
	void * opaque; // 0x40
	long data_type; // 0x48
	unsigned long adler; // 0x4C
	unsigned long reserved; // 0x50
};
struct z_stream_s
{
	unsigned char * next_in; // 0x0
	unsigned long avail_in; // 0x8
	unsigned long total_in; // 0xC
	unsigned char * next_out; // 0x10
	unsigned long avail_out; // 0x18
	unsigned long total_out; // 0x1C
	char * msg; // 0x20
	internal_state * state; // 0x28
	void *(*zalloc)(void *, unsigned long, unsigned long); // 0x30
	void(*zfree)(void *, void *); // 0x38
	void * opaque; // 0x40
	long data_type; // 0x48
	unsigned long adler; // 0x4C
	unsigned long reserved; // 0x50
};
struct internal_state
{
	long dummy; // 0x0
};