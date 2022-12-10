#pragma once

class Scaleform::HeapPT::AllocBitSet2
{
public:
	AllocBitSet2(unsigned long long);
	void Reset();
	static unsigned long * GetBitSet(const Scaleform::Heap::HeapSegment *);
	unsigned long long GetBitSetWords(unsigned long long);
	unsigned long long GetBitSetBytes(unsigned long long);
	void InitSegment(Scaleform::Heap::HeapSegment *);
	void ReleaseSegment(Scaleform::Heap::HeapSegment *);
	void * Alloc(unsigned long long, unsigned long long, Scaleform::Heap::HeapSegment * *);
	void * Alloc(unsigned long long, Scaleform::Heap::HeapSegment * *);
	void Free(Scaleform::Heap::HeapSegment *, void *);
	void * ReallocInPlace(Scaleform::Heap::HeapSegment *, void *, unsigned long long, unsigned long long *);
	unsigned long long GetUsableSize(const Scaleform::Heap::HeapSegment *, const void *);
	unsigned long long GetAlignShift(const Scaleform::Heap::HeapSegment *, const void *, unsigned long long);
	unsigned long long GetTotalFreeSpace();
	void VisitMem(Scaleform::Heap::MemVisitor *, Scaleform::Heap::MemVisitor::Category);
	void VisitUnused(Scaleform::Heap::SegVisitor *, unsigned long);
	void CheckIntegrity();
private:
	unsigned long long MinAlignShift; // 0x0
	unsigned long long MinAlignMask; // 0x8
	Scaleform::HeapPT::FreeBin Bin; // 0x10
};