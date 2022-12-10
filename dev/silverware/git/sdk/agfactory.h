#pragma once

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
class AgSingleton<AgFactory>
{
protected:
	~AgSingleton<AgFactory>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgFactory & getInstance();
	static long hasInstance();
private:
	static AgFactory * createSingleton();
	static void destroySingleton(AgFactory *);
	static AgSingleton<AgFactory> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgFactory>(const AgSingleton<AgFactory> &);
	AgSingleton<AgFactory>();
	AgSingleton<AgFactory> & operator=(const AgSingleton<AgFactory> &);
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
class AgHashTable<AgFactory::IAllocator *>
{
private:
	AgHash * m_keys; // 0x0
	AgFactory::IAllocator * * m_values; // 0x8
	unsigned long * m_occupancy; // 0x10
	unsigned long * m_history; // 0x18
	unsigned long m_mask; // 0x20
	unsigned long m_used; // 0x24
	AgAllocatorTypes m_alloc; // 0x28
	long _slotIsOccupied(unsigned long);
	static long _slotIsOccupied(const unsigned long *, unsigned long);
	static unsigned long _occupancyArraySize(unsigned long);
	void _slotSetOccupied(unsigned long);
	void _slotSetUnoccupied(unsigned long);
	long _slotGetFirstOccupied();
	long _slotGetNextOccupied(long);
	long _getSlot(AgHash);
	long _find(AgHash);
	static const long m_minSize; // 0xFFFFFFFFFFFFFFFF
public:
	AgHashTable<AgFactory::IAllocator *>();
	~AgHashTable<AgFactory::IAllocator *>();
	unsigned long capacity();
	unsigned long size();
	void reserve(unsigned long);
	void clear();
	void free();
	class ?$_iterator@AEAPEAVIAllocator@AgFactory@@PEAPEAV12@;
	class iterator;
	typedef const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> const_iterator;
	const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> begin();
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> begin();
	const AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> end();
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> end();
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> find(AgHash);
	long exists(AgHash);
	void remove(AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> &);
	std::pair<AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *>,bool> insert(AgHash, AgFactory::IAllocator * &);
	AgHashTable<AgFactory::IAllocator *>::_iterator<AgFactory::IAllocator * &,AgFactory::IAllocator * *> operator[](AgHash);
};