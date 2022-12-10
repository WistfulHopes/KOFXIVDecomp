#pragma once

struct Scaleform::MemPoolImmediateFree
{
	MemPoolImmediateFree(Scaleform::MemoryHeap *);
	void * Alloc(unsigned long long, unsigned long long);
	void Free(void *);
private:
	Scaleform::MemoryHeap * pHeap; // 0x0
};
struct Scaleform::MemPoolPostponeFree
{
	MemPoolPostponeFree(const Scaleform::MemPoolPostponeFree &);
	MemPoolPostponeFree(Scaleform::MemoryHeap *);
	~MemPoolPostponeFree();
	void * Alloc(unsigned long long, unsigned long long);
	static void Free(void *);
private:
	Scaleform::MemoryHeap * pHeap; // 0x0
	Scaleform::Array<void *,2,Scaleform::ArrayDefaultPolicy> AllocatedMem; // 0x8
public:
	Scaleform::MemPoolPostponeFree & operator=(const Scaleform::MemPoolPostponeFree &);
};
class Scaleform::Array<void *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<void *,Scaleform::AllocatorGH<void *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef void *ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<void *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<void *,2,Scaleform::ArrayDefaultPolicy> &);
	Array<void *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<void *,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<void *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<void *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<void *,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<void *,2,Scaleform::ArrayDefaultPolicy>();
};
void * operator new<512,8>(unsigned long long nbytes, Scaleform::StackMemPool<512,8,Scaleform::MemPoolImmediateFree> & pool); // 0x140365700