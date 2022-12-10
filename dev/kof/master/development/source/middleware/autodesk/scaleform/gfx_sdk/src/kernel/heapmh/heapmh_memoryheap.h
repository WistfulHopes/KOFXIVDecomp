#pragma once

class Scaleform::MemoryHeapMH :
	Scaleform::MemoryHeap
{
private:
	MemoryHeapMH();
	virtual ~MemoryHeapMH();
public:
	virtual void CreateArena(unsigned long long, Scaleform::SysAllocPaged *);
	virtual void DestroyArena(unsigned long long);
	virtual bool ArenaIsEmpty(unsigned long long);
	virtual Scaleform::MemoryHeap * CreateHeap(const char *, const Scaleform::MemoryHeap::HeapDesc &);
	virtual void SetLimitHandler(Scaleform::MemoryHeap::LimitHandler *);
	virtual void SetLimit(unsigned long long);
	virtual void AddRef();
	virtual void Release();
	virtual void * Alloc(unsigned long long, unsigned long long, const Scaleform::AllocInfo *);
	virtual void * Alloc(unsigned long long, const Scaleform::AllocInfo *);
	virtual void * Realloc(void *, unsigned long long);
	virtual void Free(void *);
	virtual void * AllocAutoHeap(const void *, unsigned long long, unsigned long long, const Scaleform::AllocInfo *);
	virtual void * AllocAutoHeap(const void *, unsigned long long, const Scaleform::AllocInfo *);
	virtual Scaleform::MemoryHeap * GetAllocHeapOrNULL(const void *);
	virtual unsigned long long GetUsableSize(const void *);
	virtual void * AllocSysDirect(unsigned long long);
	virtual void FreeSysDirect(void *, unsigned long long);
	virtual bool GetStats(Scaleform::StatBag *);
	virtual unsigned long long GetFootprint();
	virtual unsigned long long GetTotalFootprint();
	virtual unsigned long long GetUsedSpace();
	virtual unsigned long long GetTotalUsedSpace();
	virtual void GetRootStats(Scaleform::MemoryHeap::RootStats *);
	virtual void VisitMem(Scaleform::Heap::MemVisitor *, unsigned long);
	virtual void VisitRootSegments(Scaleform::Heap::SegVisitor *);
	virtual void VisitHeapSegments(Scaleform::Heap::SegVisitor *);
	virtual void SetTracer(Scaleform::MemoryHeap::HeapTracer *);
private:
	virtual void destroyItself();
	virtual void ultimateCheck();
	virtual void releaseCachedMem();
	virtual bool dumpMemoryLeaks();
	virtual void checkIntegrity();
	virtual void getUserDebugStats(Scaleform::MemoryHeap::RootStats *);
	void * allocMem(Scaleform::HeapMH::PageInfoMH *, const void *, unsigned long long, unsigned long long, const Scaleform::AllocInfo *, bool);
	void * allocMem(Scaleform::HeapMH::PageInfoMH *, const void *, unsigned long long, const Scaleform::AllocInfo *, bool);
	void * allocMem(unsigned long long, unsigned long long, const Scaleform::AllocInfo *, bool);
	void * allocMem(unsigned long long, const Scaleform::AllocInfo *, bool);
	void * reallocMem(Scaleform::HeapMH::NodeMH *, void *, unsigned long long, bool);
	void * reallocMem(Scaleform::HeapMH::PageMH *, void *, unsigned long long, bool);
	void freeLocked(void *, bool);
	void freeMem(Scaleform::HeapMH::NodeMH *, void *, bool);
	void freeMem(Scaleform::HeapMH::PageMH *, void *, bool);
	Scaleform::HeapMH::AllocEngineMH * pEngine; // 0xD0
	Scaleform::HeapMH::DebugStorageMH * pDebugStorage; // 0xD8
};