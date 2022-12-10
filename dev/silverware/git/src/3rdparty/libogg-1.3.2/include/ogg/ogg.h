#pragma once

struct oggpack_buffer
{
	long endbyte; // 0x0
	long endbit; // 0x4
	unsigned char * buffer; // 0x8
	unsigned char * ptr; // 0x10
	long storage; // 0x18
};
struct ogg_stream_state
{
	unsigned char * body_data; // 0x0
	long body_storage; // 0x8
	long body_fill; // 0xC
	long body_returned; // 0x10
	long * lacing_vals; // 0x18
	long long * granule_vals; // 0x20
	long lacing_storage; // 0x28
	long lacing_fill; // 0x2C
	long lacing_packet; // 0x30
	long lacing_returned; // 0x34
	unsigned char header[282]; // 0x38
	long header_fill; // 0x154
	long e_o_s; // 0x158
	long b_o_s; // 0x15C
	long serialno; // 0x160
	long pageno; // 0x164
	long long packetno; // 0x168
	long long granulepos; // 0x170
};
struct ogg_sync_state
{
	unsigned char * data; // 0x0
	long storage; // 0x8
	long fill; // 0xC
	long returned; // 0x10
	long unsynced; // 0x14
	long headerbytes; // 0x18
	long bodybytes; // 0x1C
};