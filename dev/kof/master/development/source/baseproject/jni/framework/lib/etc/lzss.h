#pragma once

class CLZSS
{
public:
	static long Decode(unsigned char *, unsigned char *, unsigned long);
};
class CompressLZSS
{
private:
	static long bit_buffer; // 0xFFFFFFFFFFFFFFFF
	static long bit_mask; // 0xFFFFFFFFFFFFFFFF
	static unsigned long codecount; // 0xFFFFFFFFFFFFFFFF
	static unsigned long textcount; // 0xFFFFFFFFFFFFFFFF
	static unsigned char buffer[4096]; // 0xFFFFFFFFFFFFFFFF
	static long srcIndex; // 0xFFFFFFFFFFFFFFFF
	static long srcSize; // 0xFFFFFFFFFFFFFFFF
	static long dstSize; // 0xFFFFFFFFFFFFFFFF
	static unsigned char * srcData; // 0xFFFFFFFFFFFFFFFF
	static unsigned char * dstData; // 0xFFFFFFFFFFFFFFFF
	static void init();
	static void putbit1();
	static void putbit0();
	static void flush_bit_buffer();
	static void output1(long);
	static void output2(long, long);
	static long dgetc(unsigned char *, long *);
	static long getbit(long);
	static long dputc(unsigned char *, long *, long);
public:
	static long encode(unsigned char *, unsigned char *, long);
	static long decode(unsigned char *, unsigned char *, long);
};