#pragma once

class extension::MemoryAllocator
{
private:
	extension::memory::MemoryAllocatorImpl * m_pAllocator; // 0x8
	unsigned long m_memorySize; // 0x10
public:
	MemoryAllocator(const extension::MemoryAllocator &);
	MemoryAllocator(void *, unsigned long, unsigned long);
	~MemoryAllocator();
	unsigned long getMemorySize();
	bool free(void *, unsigned long, unsigned long);
	void * memalign(unsigned long, unsigned long);
	void * reallocalign(void *, unsigned long, unsigned long, unsigned long);
	unsigned long getUseMemorySize();
	unsigned long getUseMemoryCount();
	unsigned long getUseMemorySizeMax();
	unsigned long getUseMemoryCountMax();
	float getMemoryUsageRate();
	const char * getName();
	void setName(const char *);
	extension::MemoryAllocator & operator=(const extension::MemoryAllocator &);
};