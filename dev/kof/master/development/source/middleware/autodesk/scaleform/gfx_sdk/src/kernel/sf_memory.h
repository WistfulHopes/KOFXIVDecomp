#pragma once

class Scaleform::Memory
{
public:
	static Scaleform::MemoryHeap * pGlobalHeap; // 0xFFFFFFFFFFFFFFFF
	static void SetGlobalHeap(Scaleform::MemoryHeap *);
	static Scaleform::MemoryHeap * GetGlobalHeap();
	static void CreateArena(unsigned long long, Scaleform::SysAllocPaged *);
	static void DestroyArena(unsigned long long);
	static bool ArenaIsEmpty(unsigned long long);
	static void * Alloc(unsigned long long, unsigned long long, const Scaleform::AllocInfo &);
	static void * Alloc(unsigned long long, const Scaleform::AllocInfo &);
	static void * Alloc(unsigned long long, unsigned long long);
	static void * Alloc(unsigned long long);
	static void * AllocAutoHeap(const void *, unsigned long long, unsigned long long, const Scaleform::AllocInfo &);
	static void * AllocAutoHeap(const void *, unsigned long long, const Scaleform::AllocInfo &);
	static void * AllocAutoHeap(const void *, unsigned long long, unsigned long long);
	static void * AllocAutoHeap(const void *, unsigned long long);
	static void * AllocInHeap(Scaleform::MemoryHeap *, unsigned long long, unsigned long long, const Scaleform::AllocInfo &);
	static void * AllocInHeap(Scaleform::MemoryHeap *, unsigned long long, const Scaleform::AllocInfo &);
	static void * AllocInHeap(Scaleform::MemoryHeap *, unsigned long long, unsigned long long);
	static void * AllocInHeap(Scaleform::MemoryHeap *, unsigned long long);
	static void * Realloc(void *, unsigned long long);
	static void Free(void *);
	static Scaleform::MemoryHeap * GetHeapByAddress(const void *);
	static Scaleform::MemoryHeap * GetHeapByAddressOrNULL(const void *);
	static bool DetectMemoryLeaks();
};
struct Scaleform::MemAddressStub
{
};