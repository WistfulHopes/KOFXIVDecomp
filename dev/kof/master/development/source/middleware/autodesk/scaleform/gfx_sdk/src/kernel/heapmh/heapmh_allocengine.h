#pragma once

class Scaleform::HeapMH::AllocEngineMH
{
	class PageListType;
public:
	AllocEngineMH(Scaleform::SysAlloc *, Scaleform::MemoryHeapMH *, unsigned long long, unsigned long long);
	~AllocEngineMH();
	bool IsValid();
	void FreeAll();
	unsigned long long SetLimit(unsigned long long);
	void SetLimitHandler(void *);
	void * Alloc(unsigned long long, unsigned long long, Scaleform::HeapMH::PageInfoMH *, bool);
	void * Alloc(unsigned long long, Scaleform::HeapMH::PageInfoMH *, bool);
	void * ReallocInPage(Scaleform::HeapMH::PageMH *, void *, unsigned long long, Scaleform::HeapMH::PageInfoMH *, bool);
	void * ReallocInNode(Scaleform::HeapMH::NodeMH *, void *, unsigned long long, Scaleform::HeapMH::PageInfoMH *, bool);
	void * ReallocGeneral(Scaleform::HeapMH::PageMH *, void *, unsigned long long, Scaleform::HeapMH::PageInfoMH *, bool);
	void * Realloc(void *, unsigned long long, bool);
	void Free(void *, bool);
	void Free(Scaleform::HeapMH::NodeMH *, void *, bool);
	void Free(Scaleform::HeapMH::PageMH *, void *, bool);
	void GetPageInfo(Scaleform::HeapMH::NodeMH *, Scaleform::HeapMH::PageInfoMH *);
	void GetPageInfo(Scaleform::HeapMH::PageMH *, Scaleform::HeapMH::PageInfoMH *);
	void GetPageInfoWithSize(Scaleform::HeapMH::NodeMH *, const void *, Scaleform::HeapMH::PageInfoMH *);
	void GetPageInfoWithSize(Scaleform::HeapMH::PageMH *, const void *, Scaleform::HeapMH::PageInfoMH *);
	unsigned long long GetFootprint();
	unsigned long long GetUsedSpace();
	unsigned long long GetUsableSize(void *);
private:
	Scaleform::HeapMH::PageMH * allocPageLocked(bool *);
	Scaleform::HeapMH::PageMH * allocPageUnlocked(bool *);
	void * allocDirect(unsigned long long, unsigned long long, bool *, Scaleform::HeapMH::PageInfoMH *);
	void freePage(Scaleform::HeapMH::PageMH *, bool);
	void * allocFromPage(unsigned long long, unsigned long long, Scaleform::HeapMH::PageInfoMH *, bool);
	void * allocFromPage(unsigned long long, Scaleform::HeapMH::PageInfoMH *, bool);
	void * reallocInNodeNoLock(Scaleform::HeapMH::NodeMH *, void *, unsigned long long, Scaleform::HeapMH::PageInfoMH *);
	Scaleform::SysAlloc * pSysAlloc; // 0x0
	Scaleform::MemoryHeapMH * pHeap; // 0x8
	unsigned long long MinAlignSize; // 0x10
	Scaleform::HeapMH::AllocBitSet2MH Allocator; // 0x18
	Scaleform::List<Scaleform::HeapMH::PageMH,Scaleform::HeapMH::PageMH,Scaleform::ListNode<Scaleform::HeapMH::PageMH> > Pages; // 0x220
	unsigned long long Footprint; // 0x230
	unsigned long long UsedSpace; // 0x238
	unsigned long long Limit; // 0x240
	void * pLimHandler; // 0x248
	unsigned long long UseCount; // 0x250
};