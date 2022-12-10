#pragma once

class Scaleform::HeapPT::Starter
{
public:
	Starter(Scaleform::SysAllocPaged *, unsigned long long, unsigned long long);
	Scaleform::SysAllocPaged * GetSysAlloc();
	void * Alloc(unsigned long long, unsigned long long);
	void Free(void *, unsigned long long, unsigned long long);
	void VisitMem(Scaleform::Heap::MemVisitor *);
	void VisitSegments(Scaleform::Heap::SegVisitor *);
	unsigned long long GetFootprint();
	unsigned long long GetUsedSpace();
private:
	Scaleform::HeapPT::Granulator Allocator; // 0x0
};