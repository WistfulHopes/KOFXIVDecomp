#pragma once

struct Scaleform::HeapPT::HeapOtherStats
{
	unsigned long long Segments; // 0x0
	unsigned long long Bookkeeping; // 0x8
	unsigned long long DynamicGranularity; // 0x10
	unsigned long long SysDirectSpace; // 0x18
};
class Scaleform::HeapPT::AllocEngine
{
	struct TinyBlock;
	class SegmentListType;
	class TinyListType;
public:
	AllocEngine(Scaleform::SysAllocPaged *, Scaleform::MemoryHeapPT *, unsigned long, unsigned long long, unsigned long long, unsigned long long, unsigned long long, unsigned long long);
	~AllocEngine();
	bool IsValid();
	unsigned long long SetLimit(unsigned long long);
	void SetLimitHandler(void *);
	void FreeAll();
	void * Alloc(unsigned long long, unsigned long long);
	void * Alloc(unsigned long long);
	void * Realloc(void *, unsigned long long);
	void * Realloc(Scaleform::Heap::HeapSegment *, void *, unsigned long long);
	void Free(void *);
	void Free(Scaleform::Heap::HeapSegment *, void *);
	unsigned long long GetUsableSize(Scaleform::Heap::HeapSegment *, const void *);
	unsigned long long GetUsableSize(const void *);
	unsigned long long GetFootprint();
	unsigned long long GetUsedSpace();
	void ReleaseCachedMem();
	void VisitMem(Scaleform::Heap::MemVisitor *, unsigned long);
	void VisitSegments(Scaleform::Heap::SegVisitor *);
	void GetHeapOtherStats(Scaleform::HeapPT::HeapOtherStats *);
	void CheckIntegrity();
private:
	static void compilerAsserts();
	Scaleform::Heap::HeapSegment * allocSegment(unsigned long, unsigned long long, unsigned long long, unsigned long long, bool *);
	Scaleform::Heap::HeapSegment * allocSegmentNoGranulator(unsigned long long, unsigned long long, bool *);
	Scaleform::Heap::HeapSegment * allocSegmentLocked(unsigned long, unsigned long long, unsigned long long, unsigned long long, bool *);
	void freeSegment(Scaleform::Heap::HeapSegment *);
	void freeSegmentLocked(Scaleform::Heap::HeapSegment *);
	unsigned long long calcDynaSize();
	Scaleform::Heap::HeapSegment * allocSegmentBitSet(unsigned long long, unsigned long long, bool *);
	Scaleform::Heap::HeapSegment * allocSegmentBitSet(unsigned long long, unsigned long long, unsigned long long, bool *);
	void freeSegmentBitSet(Scaleform::Heap::HeapSegment *);
	void * allocSysDirect(unsigned long long, unsigned long long);
	void * reallocSysDirect(Scaleform::Heap::HeapSegment *, void *, unsigned long long);
	void * reallocGeneral(Scaleform::Heap::HeapSegment *, void *, unsigned long long, unsigned long long, unsigned long long);
	void * allocBitSet(unsigned long long, unsigned long long);
	void * allocBitSet(unsigned long long);
	void * allocSegmentTiny(unsigned long);
	void releaseSegmentTiny(Scaleform::Heap::HeapSegment *);
	void freeSegmentTiny(Scaleform::Heap::HeapSegment *);
	void * allocTiny(unsigned long);
	void freeTiny(Scaleform::Heap::HeapSegment *, Scaleform::HeapPT::AllocEngine::TinyBlock *);
	Scaleform::MemoryHeapPT * pHeap; // 0x0
	Scaleform::SysAllocPaged * pSysAlloc; // 0x8
	Scaleform::HeapPT::Bookkeeper * pBookkeeper; // 0x10
	unsigned long long MinAlignShift; // 0x18
	unsigned long long MinAlignMask; // 0x20
	Scaleform::HeapPT::AllocBitSet2 Allocator; // 0x28
	Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > SegmentList; // 0x658
	Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > TinyBlocks[8]; // 0x668
	bool AllowTinyBlocks; // 0x6E8
	bool AllowDynaSize; // 0x6E9
	bool Valid; // 0x6EA
	bool HasRealloc; // 0x6EB
	unsigned long long SysGranularity; // 0x6F0
	unsigned long long Granularity; // 0x6F8
	unsigned long long Reserve; // 0x700
	unsigned long long Threshold; // 0x708
	unsigned long long SysDirectThreshold; // 0x710
	unsigned long long Footprint; // 0x718
	unsigned long long TinyFreeSpace; // 0x720
	unsigned long long SysDirectSpace; // 0x728
	Scaleform::Heap::HeapSegment * pCachedBSeg; // 0x730
	Scaleform::Heap::HeapSegment * pCachedTSeg; // 0x738
	unsigned long long Limit; // 0x740
	void * pLimHandler; // 0x748
};
struct Scaleform::HeapPT::AllocEngine::TinyBlock :
	Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock>
{
	Scaleform::Heap::HeapSegment * pSegment; // 0x10
	TinyBlock();
};
struct Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock>
{
	Scaleform::HeapPT::AllocEngine::TinyBlock * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::HeapPT::AllocEngine::TinyBlock * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock>();
	Scaleform::HeapPT::AllocEngine::TinyBlock * GetPrev();
	Scaleform::HeapPT::AllocEngine::TinyBlock * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::HeapPT::AllocEngine::TinyBlock *);
	void InsertNodeAfter(Scaleform::HeapPT::AllocEngine::TinyBlock *);
	void InsertNodeBefore(Scaleform::HeapPT::AllocEngine::TinyBlock *);
};
class Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> >
{
	struct ValueType;
private:
	List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> >(const Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > &);
public:
	List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> >();
	void Clear();
	Scaleform::HeapPT::AllocEngine::TinyBlock * GetFirst();
	Scaleform::HeapPT::AllocEngine::TinyBlock * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::HeapPT::AllocEngine::TinyBlock *);
	bool IsLast(const Scaleform::HeapPT::AllocEngine::TinyBlock *);
	bool IsNull(const Scaleform::HeapPT::AllocEngine::TinyBlock *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::HeapPT::AllocEngine::TinyBlock * GetPrev(const Scaleform::HeapPT::AllocEngine::TinyBlock *);
	static Scaleform::HeapPT::AllocEngine::TinyBlock * GetNext(const Scaleform::HeapPT::AllocEngine::TinyBlock *);
	void PushFront(Scaleform::HeapPT::AllocEngine::TinyBlock *);
	void PushBack(Scaleform::HeapPT::AllocEngine::TinyBlock *);
	static void Remove(Scaleform::HeapPT::AllocEngine::TinyBlock *);
	void BringToFront(Scaleform::HeapPT::AllocEngine::TinyBlock *);
	void SendToBack(Scaleform::HeapPT::AllocEngine::TinyBlock *);
	void PushListToFront(Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > &);
	void PushListToBack(Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > &, Scaleform::HeapPT::AllocEngine::TinyBlock *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > &, Scaleform::HeapPT::AllocEngine::TinyBlock *);
	void PushListItemsToFront(Scaleform::HeapPT::AllocEngine::TinyBlock *, Scaleform::HeapPT::AllocEngine::TinyBlock *);
private:
	const Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > & operator=(const Scaleform::List<Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::HeapPT::AllocEngine::TinyBlock,Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> > &);
	Scaleform::ListNode<Scaleform::HeapPT::AllocEngine::TinyBlock> Root; // 0x0
};