#pragma once

#include "aghash.h"
#include "aghashtable.h"
#include "agsingleton.h"

class AgFactory :
	AgSingleton<AgFactory>
{
	class KeyType;
	class IAllocator;
public:
	void release(void *, AgHash, long);
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	class AllocatorHashType;
private:
	AgHashTable<AgFactory::IAllocator *> m_allocators; // 0x8
public:
	AgFactory(AgFactory &);
	AgFactory(const AgFactory &);
	AgFactory();
	virtual ~AgFactory();
	AgFactory & operator=(AgFactory &);
	AgFactory & operator=(const AgFactory &);
};
class AgFactory::IAllocator
{
public:
	~IAllocator();
	void * alloc(long);
	void free(void *, long);
	IAllocator(const AgFactory::IAllocator &);
	IAllocator();
	AgFactory::IAllocator & operator=(const AgFactory::IAllocator &);
};