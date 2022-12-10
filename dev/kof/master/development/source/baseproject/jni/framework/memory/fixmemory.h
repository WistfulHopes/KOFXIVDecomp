#pragma once

class CFixMemoryPara
{
private:
	long buf_idx; // 0x0
	unsigned long cur_size; // 0x4
	void * pData; // 0x8
public:
	CFixMemoryPara();
	void SetBuf(void *);
	unsigned char * GetBuffer();
	const unsigned char * GetBufferConst();
	long GetIdx();
	unsigned long GetSize();
	void SetSize(unsigned long);
	void FreeBuffer();
};
class CFixMemory
{
private:
	CFixMemory();
	static CFixMemory * p_singleton; // 0xFFFFFFFFFFFFFFFF
public:
	static CFixMemory * GetInstance();
	static long start_up();
	static long KeepMemory(CFixMemoryPara *, unsigned long, const char *, bool);
	static void Destroy();
private:
	static unsigned long m_max; // 0xFFFFFFFFFFFFFFFF
};