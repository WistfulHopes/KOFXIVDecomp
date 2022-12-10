#pragma once

class AgPCSystemAllocator
{
public:
	void * allocate(unsigned long long, unsigned long long);
	void * allocate(unsigned long long);
	void * reallocate(void *, unsigned long long, unsigned long long);
	void * reallocate(void *, unsigned long long);
	void deallocate(void *);
};