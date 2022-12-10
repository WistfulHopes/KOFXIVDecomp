#pragma once

class Fw::VariableHeapMemoryBase :
	Fw::HeapMemory
{
protected:
	VariableHeapMemoryBase();
public:
	VariableHeapMemoryBase(const Fw::VariableHeapMemoryBase &);
	const Fw::VariableHeapMemoryBase & operator=(const Fw::VariableHeapMemoryBase &);
	virtual void dealloc(void *);
	virtual bool isValid();
	virtual unsigned long getSize();
	virtual unsigned long getUsedSize();
	virtual unsigned long getAllocatableSize();
	virtual void * getNextAlloc(void *);
	virtual unsigned long getChildHeapSize();
	virtual Fw::HeapMemory::Handle createChildHeap(unsigned long, const char *);
	virtual void destroyChildHeap(Fw::HeapMemory::Handle, unsigned long);
	struct cList;
protected:
	virtual ~VariableHeapMemoryBase();
	void addList(Fw::VariableHeapMemoryBase::cList *);
	void leaveList(Fw::VariableHeapMemoryBase::cList *);
	void createAbstract(unsigned long, const char *);
	void destroyAbstract();
	static unsigned long getBlockSizeForAlloc(unsigned long, unsigned long);
	static Fw::VariableHeapMemoryBase::cList * getListFromTag(Fw::HeapMemory::cTag *);
	static Fw::HeapMemory::cTag * getTagFromList(Fw::VariableHeapMemoryBase::cList *);
	Fw::HeapMemory::Handle m_hHeap; // 0x58
	Fw::VariableHeapMemoryBase::cList * m_pFirstList; // 0x68
	Fw::VariableHeapMemoryBase::cList * m_pLastList; // 0x70
	unsigned long m_HeapSize; // 0x78
	unsigned long m_RestSize; // 0x7C
	long m_ChildSize; // 0x80
private:
	virtual void * allocImpl(unsigned long, unsigned long, Fw::ALLOC_MODE);
	void * allocPhysical(unsigned long, unsigned long);
	void freePhysical(void *);
};
unsigned long Fw::VariableHeapMemoryBase::getChildHeapSize(); // 0x140046F90
struct Fw::VariableHeapMemoryBase::cList
{
	Fw::VariableHeapMemoryBase::cList * m_pPrev; // 0x0
	Fw::VariableHeapMemoryBase::cList * m_pNext; // 0x8
	void * m_pAlloc; // 0x10
	unsigned long m_AllocSizeMode; // 0x18
	void SetAllocSize(unsigned long);
	void SetAllocMode(Fw::ALLOC_MODE);
	unsigned long GetAllocSize();
	Fw::ALLOC_MODE GetAllocMode();
};