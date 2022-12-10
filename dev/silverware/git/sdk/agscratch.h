#pragma once

class AgScratch
{
private:
	static unsigned char * m_buffer; // 0xFFFFFFFFFFFFFFFF
	static unsigned long m_index; // 0xFFFFFFFFFFFFFFFF
	static unsigned long m_capacity; // 0xFFFFFFFFFFFFFFFF
public:
	static long init(unsigned long);
	static void deinit();
	static void reset();
	static long remaining();
	static long used();
	static long capacity();
	static unsigned char * alloc(unsigned long, unsigned long);
	static void free(unsigned long);
};
class AgScratchRewinder
{
private:
	unsigned long m_oldSize; // 0x0
public:
	AgScratchRewinder();
	~AgScratchRewinder();
};