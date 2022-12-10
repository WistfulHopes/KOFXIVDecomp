#pragma once

enum Fw::ALLOC_MODE
{
	ALLOC_MODE_PHYSICAL_FRONT = 0,
	ALLOC_MODE_PHYSICAL_BACK = 1,
};
class Fw::HeapMemory
{
	struct Handle;
public:
	HeapMemory();
	~HeapMemory();
	void destroy();
	void * alloc(unsigned long, unsigned long, Fw::ALLOC_MODE);
	void dealloc(void *);
	static void free(void *);
	static Fw::HeapMemory * getHeapFromPtr(void *);
	void setName(const char *);
	const char * getName();
	bool isValid();
	unsigned long getSize();
	unsigned long getUsedSize();
	unsigned long getAllocatableSize();
	void * getNextAlloc(void *);
	unsigned long getChildHeapSize();
	Fw::HeapMemory::Handle createChildHeap(unsigned long, const char *);
	void destroyChildHeap(Fw::HeapMemory::Handle, unsigned long);
	void chainChildHeap(Fw::HeapMemory *);
	void chainSiblingHeap(Fw::HeapMemory *);
	void unchainChildHeap(Fw::HeapMemory *);
	void unchainSiblingHeap(Fw::HeapMemory *);
	Fw::HeapMemory * getParentHeap();
	Fw::HeapMemory * getChildHeap();
	Fw::HeapMemory * getSiblingHeap();
	struct cTag;
protected:
	static Fw::HeapMemory::cTag * getTagFromPtr(void *);
	static void * getPtrFromTag(Fw::HeapMemory::cTag *);
	Fw::cMutex m_Mutex; // 0x8
	Fw::HeapMemory * m_pParentHeap; // 0x38
	Fw::HeapMemory * m_pSiblingHeap; // 0x40
	Fw::HeapMemory * m_pChildHeap; // 0x48
	const char * m_pName; // 0x50
private:
	void * allocImpl(unsigned long, unsigned long, Fw::ALLOC_MODE);
};
struct Fw::HeapMemory::Handle
{
	void * addr; // 0x0
	void * heap; // 0x8
	void * operator void *();
	Handle(void *);
	Handle();
};
struct Fw::HeapMemory::cTag
{
	Fw::HeapMemory * m_pHeap; // 0x0
};