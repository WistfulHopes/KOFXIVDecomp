#pragma once

class Scaleform::HeapPT::SysAllocGranulator :
	Scaleform::SysAllocPaged
{
public:
	SysAllocGranulator(Scaleform::HeapPT::SysAllocGranulator &);
	SysAllocGranulator(const Scaleform::HeapPT::SysAllocGranulator &);
	SysAllocGranulator(Scaleform::SysAllocPaged *);
	SysAllocGranulator();
	void Init(Scaleform::SysAllocPaged *);
	virtual void GetInfo(Scaleform::SysAllocPaged::Info *);
	virtual void * Alloc(unsigned long long, unsigned long long);
	virtual bool ReallocInPlace(void *, unsigned long long, unsigned long long, unsigned long long);
	virtual bool Free(void *, unsigned long long, unsigned long long);
	virtual void * AllocSysDirect(unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
	virtual bool FreeSysDirect(void *, unsigned long long, unsigned long long);
	virtual unsigned long long GetFootprint();
	virtual unsigned long long GetUsedSpace();
	virtual void VisitMem(Scaleform::Heap::MemVisitor *);
	virtual void VisitSegments(Scaleform::Heap::SegVisitor *, unsigned long long, unsigned long long);
	virtual unsigned long long GetBase();
	virtual unsigned long long GetSize();
private:
	Scaleform::HeapPT::Granulator * pGranulator; // 0x8
	unsigned long long SysDirectThreshold; // 0x10
	unsigned long long MaxHeapGranularity; // 0x18
	unsigned long long MinAlign; // 0x20
	unsigned long long MaxAlign; // 0x28
	unsigned long long SysDirectFootprint; // 0x30
	unsigned long long PrivateData[32]; // 0x38
public:
	virtual ~SysAllocGranulator();
	Scaleform::HeapPT::SysAllocGranulator & operator=(Scaleform::HeapPT::SysAllocGranulator &);
	Scaleform::HeapPT::SysAllocGranulator & operator=(const Scaleform::HeapPT::SysAllocGranulator &);
};
class Scaleform::HeapPT::SysAllocWrapper :
	Scaleform::SysAllocPaged
{
public:
	SysAllocWrapper(Scaleform::HeapPT::SysAllocWrapper &);
	SysAllocWrapper(const Scaleform::HeapPT::SysAllocWrapper &);
	SysAllocWrapper(Scaleform::SysAllocPaged *);
	virtual void GetInfo(Scaleform::SysAllocPaged::Info *);
	virtual void * Alloc(unsigned long long, unsigned long long);
	virtual bool Free(void *, unsigned long long, unsigned long long);
	virtual bool ReallocInPlace(void *, unsigned long long, unsigned long long, unsigned long long);
	void * AllocSysDirect(unsigned long long);
	virtual void * AllocSysDirect(unsigned long long, unsigned long long, unsigned long long *, unsigned long long *);
	void FreeSysDirect(void *, unsigned long long);
	virtual bool FreeSysDirect(void *, unsigned long long, unsigned long long);
	virtual void VisitMem(Scaleform::Heap::MemVisitor *);
	virtual void VisitSegments(Scaleform::Heap::SegVisitor *, unsigned long long, unsigned long long);
	virtual unsigned long long GetFootprint();
	virtual unsigned long long GetUsedSpace();
private:
	Scaleform::HeapPT::SysAllocGranulator Allocator; // 0x8
	Scaleform::SysAllocPaged * pSrcAlloc; // 0x140
	Scaleform::SysAllocPaged * pSysAlloc; // 0x148
	unsigned long long SysGranularity; // 0x150
	unsigned long long MinAlign; // 0x158
	unsigned long long UsedSpace; // 0x160
public:
	virtual ~SysAllocWrapper();
	Scaleform::HeapPT::SysAllocWrapper & operator=(Scaleform::HeapPT::SysAllocWrapper &);
	Scaleform::HeapPT::SysAllocWrapper & operator=(const Scaleform::HeapPT::SysAllocWrapper &);
};
class Scaleform::HeapPT::HeapRoot
{
public:
	HeapRoot(Scaleform::SysAllocPaged *);
	~HeapRoot();
	void CreateArena(unsigned long long, Scaleform::SysAllocPaged *);
	long DestroyArena(unsigned long long);
	void DestroyAllArenas();
	bool ArenaIsEmpty(unsigned long long);
	Scaleform::SysAllocPaged * GetSysAlloc(unsigned long long);
	Scaleform::HeapPT::Starter * GetStarter();
	Scaleform::HeapPT::Bookkeeper * GetBookkeeper();
	Scaleform::MemoryHeapPT * CreateHeap(const char *, Scaleform::MemoryHeapPT *, const Scaleform::MemoryHeap::HeapDesc &);
	void DestroyHeap(Scaleform::MemoryHeapPT *);
	Scaleform::LockSafe * GetLock();
	void VisitSegments(Scaleform::Heap::SegVisitor *);
	void * AllocSysDirect(unsigned long long);
	void FreeSysDirect(void *, unsigned long long);
	void GetStats(Scaleform::MemoryHeap::RootStats *);
private:
	Scaleform::HeapPT::SysAllocWrapper AllocWrapper; // 0x0
	Scaleform::HeapPT::Starter AllocStarter; // 0x168
	Scaleform::HeapPT::Bookkeeper AllocBookkeeper; // 0x230
	Scaleform::LockSafe RootLock; // 0x888
	Scaleform::SysAllocPaged * * pArenas; // 0x8B8
	unsigned long long NumArenas; // 0x8C0
};