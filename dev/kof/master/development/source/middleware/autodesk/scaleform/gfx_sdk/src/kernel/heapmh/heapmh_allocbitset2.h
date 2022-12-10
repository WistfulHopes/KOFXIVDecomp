#pragma once

class Scaleform::HeapMH::AllocBitSet2MH
{
public:
	AllocBitSet2MH();
	void Reset();
	void InitPage(Scaleform::HeapMH::PageMH *, unsigned long);
	void ReleasePage(unsigned char *);
	void * Alloc(unsigned long long, unsigned long long, Scaleform::HeapMH::MagicHeadersInfo *);
	void * Alloc(unsigned long long, Scaleform::HeapMH::MagicHeadersInfo *);
	void * ReallocInPlace(Scaleform::HeapMH::PageMH *, void *, unsigned long long, unsigned long long *, Scaleform::HeapMH::MagicHeadersInfo *);
	void Free(Scaleform::HeapMH::PageMH *, void *, Scaleform::HeapMH::MagicHeadersInfo *, unsigned long long *);
	unsigned long long GetUsableSize(const Scaleform::HeapMH::PageMH *, const void *);
private:
	Scaleform::HeapMH::ListBinMH Bin; // 0x0
};