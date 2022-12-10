#pragma once

class extension::GFXISystem
{
public:
	GFXISystem();
private:
	GFXISystem(const extension::GFXISystem &);
	extension::GFXISystem & operator=(const extension::GFXISystem &);
public:
	~GFXISystem();
private:
	static Scaleform::AtomicInt<int> s_initializeCount; // 0xFFFFFFFFFFFFFFFF
	extension::KofSysAlloc * m_pAllocator; // 0x0
	void * m_pBlockMemory; // 0x8
};
class Scaleform::AtomicInt<int> :
	Scaleform::AtomicValueBase<int>
{
	class Ops;
public:
	AtomicInt<int>(Scaleform::AtomicInt<int> &);
	AtomicInt<int>(const Scaleform::AtomicInt<int> &);
	AtomicInt<int>(long);
	AtomicInt<int>();
	long ExchangeAdd_Sync(long);
	long ExchangeAdd_Release(long);
	long ExchangeAdd_Acquire(long);
	long ExchangeAdd_NoSync(long);
	void Increment_Sync();
	void Increment_Release();
	void Increment_Acquire();
	void Increment_NoSync();
	Scaleform::AtomicInt<int> & operator=(Scaleform::AtomicInt<int> &);
	Scaleform::AtomicInt<int> & operator=(const Scaleform::AtomicInt<int> &);
	long operator=(long);
	long operator+=(long);
	long operator-=(long);
	long operator++(long);
	long operator++();
	long operator--(long);
	long operator--();
	long operator&=(long);
	long operator|=(long);
	long operator^=(long);
	long operator*=(long);
	long operator/=(long);
	long operator>>=(unsigned long);
	long operator<<=(unsigned long);
};