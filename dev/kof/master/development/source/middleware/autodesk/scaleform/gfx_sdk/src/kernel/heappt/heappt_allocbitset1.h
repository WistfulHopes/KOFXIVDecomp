#pragma once

class Scaleform::HeapPT::AllocBitSet1
{
public:
	AllocBitSet1(unsigned long long);
	static unsigned long * GetBitSet(const Scaleform::Heap::HeapSegment *);
	unsigned long long GetBitSetWords(unsigned long long);
	unsigned long long GetBitSetBytes(unsigned long long);
	void InitSegment(Scaleform::Heap::HeapSegment *);
	void ReleaseSegment(Scaleform::Heap::HeapSegment *);
	unsigned long long AlignSize(unsigned long long);
	void * Alloc(unsigned long long, Scaleform::Heap::HeapSegment * *);
	void Free(Scaleform::Heap::HeapSegment *, void *, unsigned long long);
	unsigned long long GetTotalFreeSpace();
	void VisitMem(Scaleform::Heap::MemVisitor *, Scaleform::Heap::MemVisitor::Category);
	void VisitUnused(Scaleform::Heap::SegVisitor *, unsigned long);
private:
	static void clrBit(unsigned long *, unsigned long long);
	static void setBit(unsigned long *, unsigned long long);
	static void markBusy(unsigned long *, unsigned long long, unsigned long long);
	static void markFree(unsigned long *, unsigned long long, unsigned long long);
	static bool isZero(const unsigned long *, unsigned long long);
	unsigned long long MinAlignShift; // 0x0
	unsigned long long MinAlignMask; // 0x8
	Scaleform::HeapPT::FreeBin Bin; // 0x10
};