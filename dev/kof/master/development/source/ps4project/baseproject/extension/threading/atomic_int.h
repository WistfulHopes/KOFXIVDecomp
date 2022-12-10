#pragma once

class extension::AtomicInt
{
private:
	volatile std::atomic<__int64> m_value; // 0x0
public:
	AtomicInt(long long);
	AtomicInt();
private:
	AtomicInt(const extension::AtomicInt &);
public:
	long long operator=(long long);
private:
	extension::AtomicInt & operator=(const extension::AtomicInt &);
	typedef long long Value_t;
public:
	long long loadNoFence();
	long long loadAcquire();
	void storeNoFence(long long);
	void storeRelease(long long);
	long long fetchAddNoFence(long long);
	long long fetchAddAcquire(long long);
	long long fetchAddRelease(long long);
	long long fetchAddSync(long long);
	bool compareAndSetNoFence(long long, long long);
	bool compareAndSetAcquire(long long, long long);
	bool compareAndSetRelease(long long, long long);
	bool compareAndSetSync(long long, long long);
	long long bitwiseAndNoFence(long long);
	long long bitwiseAndAcquire(long long);
	long long bitwiseAndRelease(long long);
	long long bitwiseOrNoFence(long long);
	long long bitwiseOrAcquire(long long);
	long long bitwiseOrRelease(long long);
	long long operator __int64();
	long long operator+=(long long);
	long long operator-=(long long);
	long long operator++(long);
	long long operator++();
	long long operator--(long);
	long long operator--();
};