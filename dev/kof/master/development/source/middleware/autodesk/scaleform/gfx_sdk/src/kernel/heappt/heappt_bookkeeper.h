#pragma once

class Scaleform::HeapPT::Bookkeeper
{
	class SegmentListType;
public:
	Bookkeeper(Scaleform::SysAllocPaged *, unsigned long long);
	Scaleform::SysAllocPaged * GetSysAlloc();
	void * Alloc(unsigned long long);
	void Free(void *, unsigned long long);
	void VisitMem(Scaleform::Heap::MemVisitor *, unsigned long);
	void VisitSegments(Scaleform::Heap::SegVisitor *);
	unsigned long long GetFootprint();
	unsigned long long GetUsedSpace();
private:
	unsigned long long getHeaderSize(unsigned long long);
	Scaleform::Heap::HeapSegment * allocSegment(unsigned long long);
	void freeSegment(Scaleform::Heap::HeapSegment *);
	Scaleform::SysAllocPaged * pSysAlloc; // 0x0
	unsigned long long Granularity; // 0x8
	Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > SegmentList; // 0x10
	Scaleform::HeapPT::AllocBitSet1 Allocator; // 0x20
	unsigned long long Footprint; // 0x650
};
class Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> >
{
	struct ValueType;
private:
	List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> >(const Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > &);
public:
	List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> >();
	void Clear();
	Scaleform::Heap::HeapSegment * GetFirst();
	Scaleform::Heap::HeapSegment * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Heap::HeapSegment *);
	bool IsLast(const Scaleform::Heap::HeapSegment *);
	bool IsNull(const Scaleform::Heap::HeapSegment *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Heap::HeapSegment * GetPrev(const Scaleform::Heap::HeapSegment *);
	static Scaleform::Heap::HeapSegment * GetNext(const Scaleform::Heap::HeapSegment *);
	void PushFront(Scaleform::Heap::HeapSegment *);
	void PushBack(Scaleform::Heap::HeapSegment *);
	static void Remove(Scaleform::Heap::HeapSegment *);
	void BringToFront(Scaleform::Heap::HeapSegment *);
	void SendToBack(Scaleform::Heap::HeapSegment *);
	void PushListToFront(Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > &);
	void PushListToBack(Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > &, Scaleform::Heap::HeapSegment *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > &, Scaleform::Heap::HeapSegment *);
	void PushListItemsToFront(Scaleform::Heap::HeapSegment *, Scaleform::Heap::HeapSegment *);
private:
	const Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > & operator=(const Scaleform::List<Scaleform::Heap::HeapSegment,Scaleform::Heap::HeapSegment,Scaleform::ListNode<Scaleform::Heap::HeapSegment> > &);
	Scaleform::ListNode<Scaleform::Heap::HeapSegment> Root; // 0x0
};