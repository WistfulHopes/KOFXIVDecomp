#pragma once

class Scaleform::System
{
public:
	System(const Scaleform::MemoryHeap::HeapDesc &, Scaleform::SysAllocBase *);
	System(Scaleform::SysAllocBase *);
	~System();
	static void Init(Scaleform::SysAllocBase *);
	static void Init(const Scaleform::MemoryHeap::HeapDesc &, Scaleform::SysAllocBase *);
	static void Destroy();
	static bool HasMemoryLeaks; // 0xFFFFFFFFFFFFFFFF
	void __dflt_ctor_closure();
};