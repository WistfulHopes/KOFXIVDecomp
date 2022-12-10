#pragma once

class Fw::PhysicalHeapMemory :
	Fw::HeapMemory
{
public:
	PhysicalHeapMemory();
	virtual ~PhysicalHeapMemory();
	bool create(unsigned long, Fw::HeapMemory &, const char *);
	virtual void destroy();
	virtual void dealloc(void *);
	virtual bool isValid();
	virtual unsigned long getSize();
	unsigned long getFrontSize();
	unsigned long getBackSize();
	virtual unsigned long getUsedSize();
	virtual unsigned long getAllocatableSize();
	virtual void * getNextAlloc(void *);
	virtual unsigned long getChildHeapSize();
	virtual Fw::HeapMemory::Handle createChildHeap(unsigned long, const char *);
	virtual void destroyChildHeap(Fw::HeapMemory::Handle, unsigned long);
	struct cList;
protected:
	static unsigned long getBlockSizeForAlloc(unsigned long, unsigned long);
	static Fw::PhysicalHeapMemory::cList * getListFromTag(Fw::HeapMemory::cTag *);
	static Fw::HeapMemory::cTag * getTagFromList(Fw::PhysicalHeapMemory::cList *);
	void * m_pBuffer; // 0x58
	Fw::PhysicalHeapMemory::cList * m_pListFirst; // 0x60
	Fw::PhysicalHeapMemory::cList * m_pListLast; // 0x68
	unsigned long m_HeapSize; // 0x70
	unsigned long m_RestSize; // 0x74
	virtual void * allocImpl(unsigned long, unsigned long, Fw::ALLOC_MODE);
	void chainList(Fw::PhysicalHeapMemory::cList *, Fw::PhysicalHeapMemory::cList *);
	Fw::PhysicalHeapMemory::cList * findAllocBlockFront(unsigned long long &, unsigned long long &, unsigned long, unsigned long);
	Fw::PhysicalHeapMemory::cList * findAllocBlockBack(unsigned long long &, unsigned long long &, unsigned long, unsigned long);
};
unsigned long Fw::PhysicalHeapMemory::getChildHeapSize(); // 0x1400470F0
struct Fw::PhysicalHeapMemory::cList
{
	Fw::PhysicalHeapMemory::cList * m_pPrev; // 0x0
	Fw::PhysicalHeapMemory::cList * m_pNext; // 0x8
	unsigned long m_RestSize; // 0x10
	unsigned long m_AllocSize; // 0x14
	Fw::ALLOC_MODE m_AllocMode; // 0x18
};