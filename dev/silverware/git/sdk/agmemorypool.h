#pragma once

union AgMemoryPoolImpl<AgMutex,AgMutex>::PoolPtr
{
public:
	unsigned char * p; // 0x0
	unsigned char * * pp; // 0x0
};
union AgMemoryPoolImpl<void,int>::PoolPtr
{
public:
	unsigned char * p; // 0x0
	unsigned char * * pp; // 0x0
};
struct AgMemoryPoolImpl<AgMutex,AgMutex>::BlockHeader
{
	AgMemoryPoolImpl<AgMutex,AgMutex>::BlockHeader * m_next; // 0x0
	unsigned long m_num; // 0x8
};
struct AgMemoryPoolImpl<void,int>::BlockHeader
{
	AgMemoryPoolImpl<void,int>::BlockHeader * m_next; // 0x0
	unsigned long m_num; // 0x8
};
unsigned char * AgMemoryPoolImpl<AgMutex,AgMutex>::_alloc(); // 0x140051010
void AgMemoryPoolImpl<AgMutex,AgMutex>::_grow(unsigned long num); // 0x1400510C0
void AgMemoryPoolImpl<void,int>::_grow(unsigned long num); // 0x1400510C0
AgMemoryPoolImpl<void,int>::~AgMemoryPoolImpl<void,int>(); // 0x140657560
AgMemoryPoolImpl<AgMutex,AgMutex>::~AgMemoryPoolImpl<AgMutex,AgMutex>(); // 0x14065C780
void AgMemoryPoolImpl<AgMutex,AgMutex>::free(); // 0x14065C8A0
class AgMemoryPool :
	AgMemoryPoolImpl<void,int>
{
public:
	AgMemoryPool(unsigned long, unsigned long, unsigned long);
	AgMemoryPool();
	~AgMemoryPool();
};
class AgMemoryPoolImpl<void,int>
{
	union PoolPtr;
	struct BlockHeader;
private:
	unsigned char * m_free; // 0x0
	AgMemoryPoolImpl<void,int>::BlockHeader * m_blocks; // 0x8
	unsigned long m_itemSize; // 0x10
	unsigned long m_capacity; // 0x14
	unsigned long m_used; // 0x18
	unsigned long m_growPercent; // 0x1C
	long m_lock; // 0x20
	unsigned char * _alloc();
	void _release(unsigned char *);
	void _addItems(unsigned char *, unsigned long);
	void _addBlock(unsigned char *, unsigned long);
	void _grow(unsigned long);
public:
	AgMemoryPoolImpl<void,int>(unsigned long, unsigned long, unsigned long);
	AgMemoryPoolImpl<void,int>();
	~AgMemoryPoolImpl<void,int>();
	void init(unsigned long, unsigned long, unsigned long);
	void free();
	void clear();
	unsigned long used();
	unsigned long capacity();
	unsigned long remaining();
	void * alloc();
	void release(void *);
	void grow(unsigned long);
	unsigned long getItemSize();
};
AgMemoryPool::AgMemoryPool(); // 0x140657530
class AgMemoryPoolImpl<AgMutex,AgMutex>
{
	union PoolPtr;
	struct BlockHeader;
private:
	unsigned char * m_free; // 0x0
	AgMemoryPoolImpl<AgMutex,AgMutex>::BlockHeader * m_blocks; // 0x8
	unsigned long m_itemSize; // 0x10
	unsigned long m_capacity; // 0x14
	unsigned long m_used; // 0x18
	unsigned long m_growPercent; // 0x1C
	AgMutex m_lock; // 0x20
	unsigned char * _alloc();
	void _release(unsigned char *);
	void _addItems(unsigned char *, unsigned long);
	void _addBlock(unsigned char *, unsigned long);
	void _grow(unsigned long);
public:
	AgMemoryPoolImpl<AgMutex,AgMutex>(unsigned long, unsigned long, unsigned long);
	AgMemoryPoolImpl<AgMutex,AgMutex>();
	~AgMemoryPoolImpl<AgMutex,AgMutex>();
	void init(unsigned long, unsigned long, unsigned long);
	void free();
	void clear();
	unsigned long used();
	unsigned long capacity();
	unsigned long remaining();
	void * alloc();
	void release(void *);
	void grow(unsigned long);
	unsigned long getItemSize();
};
class AgMemoryPoolLocked :
	AgMemoryPoolImpl<AgMutex,AgMutex>
{
public:
	AgMemoryPoolLocked(unsigned long, unsigned long, unsigned long);
	~AgMemoryPoolLocked();
};
class AgThreadedMemoryPool
{
public:
	AgThreadedMemoryPool(unsigned long, unsigned long, unsigned long);
	void * alloc();
	void release(void *);
	long getPool();
private:
	static const long kNumPools; // 0xFFFFFFFFFFFFFFFF
	AgMutex m_mutexes[4]; // 0x0
	AgMemoryPool m_pools[4]; // 0xA0
	long m_cursor; // 0x140
public:
	~AgThreadedMemoryPool();
};
void * AgThreadedMemoryPool::alloc(); // 0x140657760
void AgThreadedMemoryPool::release(void * p); // 0x140657840