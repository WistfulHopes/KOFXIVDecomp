#pragma once

enum AgAllocatorTypes
{
	AgAllocator_Unknown = 0,
	AgAllocator_System = 1,
	AgAllocator_Texture = 2,
	AgAllocator_RenderTarget = 3,
	AgAllocator_Shader = 4,
	AgAllocator_VertexBuffer = 5,
	AgAllocator_IndexBuffer = 6,
	AgAllocator_ConstantBuffer = 7,
	AgAllocator_Count = 8,
};
class AgSingleton<AgAllocators>
{
protected:
	~AgSingleton<AgAllocators>();
	long onSingletonInit();
	long onSingletonExit();
public:
	static long createInstance();
	static long destroyInstance();
	static AgAllocators & getInstance();
	static long hasInstance();
private:
	static AgAllocators * createSingleton();
	static void destroySingleton(AgAllocators *);
	static AgSingleton<AgAllocators> * ms_instance; // 0xFFFFFFFFFFFFFFFF
public:
	AgSingleton<AgAllocators>(const AgSingleton<AgAllocators> &);
	AgSingleton<AgAllocators>();
	AgSingleton<AgAllocators> & operator=(const AgSingleton<AgAllocators> &);
};
class AgAllocators :
	AgSingleton<AgAllocators>
{
public:
	virtual long onSingletonInit();
	virtual long onSingletonExit();
	void dumpMemoryStats();
	static AgAllocators * createSingleton();
	AgAllocators(AgAllocators &);
	AgAllocators(const AgAllocators &);
	AgAllocators();
	virtual ~AgAllocators();
	AgAllocators & operator=(AgAllocators &);
	AgAllocators & operator=(const AgAllocators &);
};
long AgAllocators::onSingletonExit(); // 0x1400482A0
void AgAllocators::dumpMemoryStats(); // 0x14002E7C0
class AgAllocator<1>
{
	enum <unnamed-enum-Type>
	{
		Type = 1,
	};
public:
	void * allocate(unsigned long long, unsigned long long);
	void * allocate(unsigned long long);
	void * reallocate(void *, unsigned long long, unsigned long long);
	void * reallocate(void *, unsigned long long);
	void deallocate(void *);
};
class AgAllocator<2>
{
	enum <unnamed-enum-Type>
	{
		Type = 2,
	};
public:
	void * allocate(unsigned long long, unsigned long long);
	void * allocate(unsigned long long);
	void * reallocate(void *, unsigned long long, unsigned long long);
	void * reallocate(void *, unsigned long long);
	void deallocate(void *);
};
class AgAllocator<3>
{
	enum <unnamed-enum-Type>
	{
		Type = 3,
	};
public:
	void * allocate(unsigned long long, unsigned long long);
	void * allocate(unsigned long long);
	void * reallocate(void *, unsigned long long, unsigned long long);
	void * reallocate(void *, unsigned long long);
	void deallocate(void *);
};
class AgAllocator<4>
{
	enum <unnamed-enum-Type>
	{
		Type = 4,
	};
public:
	void * allocate(unsigned long long, unsigned long long);
	void * allocate(unsigned long long);
	void * reallocate(void *, unsigned long long, unsigned long long);
	void * reallocate(void *, unsigned long long);
	void deallocate(void *);
};
class AgAllocator<5>
{
	enum <unnamed-enum-Type>
	{
		Type = 5,
	};
public:
	void * allocate(unsigned long long, unsigned long long);
	void * allocate(unsigned long long);
	void * reallocate(void *, unsigned long long, unsigned long long);
	void * reallocate(void *, unsigned long long);
	void deallocate(void *);
};
class AgAllocator<6>
{
	enum <unnamed-enum-Type>
	{
		Type = 6,
	};
public:
	void * allocate(unsigned long long, unsigned long long);
	void * allocate(unsigned long long);
	void * reallocate(void *, unsigned long long, unsigned long long);
	void * reallocate(void *, unsigned long long);
	void deallocate(void *);
};
class AgAllocator<7>
{
	enum <unnamed-enum-Type>
	{
		Type = 7,
	};
public:
	void * allocate(unsigned long long, unsigned long long);
	void * allocate(unsigned long long);
	void * reallocate(void *, unsigned long long, unsigned long long);
	void * reallocate(void *, unsigned long long);
	void deallocate(void *);
};