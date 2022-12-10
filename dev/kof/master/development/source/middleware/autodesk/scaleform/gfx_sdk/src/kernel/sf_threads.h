#pragma once

class Scaleform::AcquireInterface
{
public:
	~AcquireInterface();
	bool CanAcquire();
	bool TryAcquire();
	bool TryAcquireCommit();
	bool TryAcquireCancel();
	static bool AcquireMultipleObjects(Scaleform::Waitable * *, unsigned long, unsigned long);
	static long AcquireOneOfMultipleObjects(Scaleform::Waitable * *, unsigned long, unsigned long);
	AcquireInterface(const Scaleform::AcquireInterface &);
	AcquireInterface();
	Scaleform::AcquireInterface & operator=(const Scaleform::AcquireInterface &);
};
class Scaleform::DefaultAcquireInterface :
	Scaleform::AcquireInterface
{
public:
	virtual ~DefaultAcquireInterface();
	static Scaleform::DefaultAcquireInterface * GetDefaultAcquireInterface();
	DefaultAcquireInterface(const Scaleform::DefaultAcquireInterface &);
	DefaultAcquireInterface();
	Scaleform::DefaultAcquireInterface & operator=(const Scaleform::DefaultAcquireInterface &);
};
class Scaleform::Waitable :
	Scaleform::RefCountBase<Scaleform::Waitable,2>
{
	typedef void(*WaitHandler)(void *);
	class HandlerStruct;
	struct HandlerArray;
protected:
	Scaleform::Waitable::HandlerArray * pHandlers; // 0x10
public:
	Waitable(const Scaleform::Waitable &);
	Waitable(bool);
	virtual ~Waitable();
	void CallWaitHandlers();
	class CallableHandlers;
	void GetCallableHandlers(Scaleform::Waitable::CallableHandlers *);
	bool AddWaitHandler(void(*)(void *), void *);
	bool RemoveWaitHandler(void(*)(void *), void *);
	bool Wait(unsigned long);
	bool Acquire(unsigned long);
	bool IsSignaled();
	Scaleform::AcquireInterface * GetAcquireInterface();
	Scaleform::Waitable & operator=(const Scaleform::Waitable &);
};
class Scaleform::RefCountBase<Scaleform::Waitable,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Waitable,2>(Scaleform::RefCountBase<Scaleform::Waitable,2> &);
	RefCountBase<Scaleform::Waitable,2>(const Scaleform::RefCountBase<Scaleform::Waitable,2> &);
	RefCountBase<Scaleform::Waitable,2>();
	virtual ~RefCountBase<Scaleform::Waitable,2>();
	Scaleform::RefCountBase<Scaleform::Waitable,2> & operator=(Scaleform::RefCountBase<Scaleform::Waitable,2> &);
	Scaleform::RefCountBase<Scaleform::Waitable,2> & operator=(const Scaleform::RefCountBase<Scaleform::Waitable,2> &);
};
class Scaleform::Waitable::HandlerStruct
{
public:
	void(*Handler)(void *); // 0x0
	void * pUserData; // 0x8
	HandlerStruct(const Scaleform::Waitable::HandlerStruct &);
	HandlerStruct(void(*)(void *), void *);
	HandlerStruct();
	Scaleform::Waitable::HandlerStruct & operator=(const Scaleform::Waitable::HandlerStruct &);
	bool operator==(const Scaleform::Waitable::HandlerStruct &);
};
struct Scaleform::Waitable::HandlerArray :
	Scaleform::NewOverrideBase<2>
{
	struct SizePolicyType;
	class HandlerArrayType;
	Scaleform::AtomicInt<long> RefCount; // 0x0
	Scaleform::Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> > Handlers; // 0x8
	Scaleform::Lock HandlersLock; // 0x20
	HandlerArray(Scaleform::Waitable::HandlerArray &);
	HandlerArray(const Scaleform::Waitable::HandlerArray &);
	HandlerArray();
	void AddRef();
	void Release();
	void CallWaitHandlers();
	~HandlerArray();
	Scaleform::Waitable::HandlerArray & operator=(Scaleform::Waitable::HandlerArray &);
	Scaleform::Waitable::HandlerArray & operator=(const Scaleform::Waitable::HandlerArray &);
};
struct Scaleform::ArrayConstPolicy<0,16,1>
{
	struct SelfType;
	ArrayConstPolicy<0,16,1>(const Scaleform::ArrayConstPolicy<0,16,1> &);
	ArrayConstPolicy<0,16,1>();
	unsigned long long GetMinCapacity();
	unsigned long long GetGranularity();
	bool NeverShrinking();
	unsigned long long GetCapacity();
	void SetCapacity(unsigned long long);
private:
	unsigned long long Capacity; // 0x0
};
class Scaleform::Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1> > >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> >(const Scaleform::Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> > &);
	Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> >(const Scaleform::ArrayConstPolicy<0,16,1> &);
	Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> >(long);
	Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> >();
	const Scaleform::Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> > & operator=(const Scaleform::Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> > &);
	~Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> >();
};
class Scaleform::AtomicInt<long> :
	Scaleform::AtomicValueBase<long>
{
	class Ops;
public:
	AtomicInt<long>(Scaleform::AtomicInt<long> &);
	AtomicInt<long>(const Scaleform::AtomicInt<long> &);
	AtomicInt<long>(long);
	AtomicInt<long>();
	long ExchangeAdd_Sync(long);
	long ExchangeAdd_Release(long);
	long ExchangeAdd_Acquire(long);
	long ExchangeAdd_NoSync(long);
	void Increment_Sync();
	void Increment_Release();
	void Increment_Acquire();
	void Increment_NoSync();
	Scaleform::AtomicInt<long> & operator=(Scaleform::AtomicInt<long> &);
	Scaleform::AtomicInt<long> & operator=(const Scaleform::AtomicInt<long> &);
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
class Scaleform::Waitable::CallableHandlers
{
private:
	Scaleform::Ptr<Scaleform::Waitable::HandlerArray> pArray; // 0x0
public:
	CallableHandlers(Scaleform::Waitable::CallableHandlers &);
	CallableHandlers(const Scaleform::Waitable::CallableHandlers &);
	CallableHandlers();
	void CallWaitHandlers();
	~CallableHandlers();
	Scaleform::Waitable::CallableHandlers & operator=(Scaleform::Waitable::CallableHandlers &);
	Scaleform::Waitable::CallableHandlers & operator=(const Scaleform::Waitable::CallableHandlers &);
};
class Scaleform::Ptr<Scaleform::Waitable::HandlerArray>
{
protected:
	Scaleform::Waitable::HandlerArray * pObject; // 0x0
public:
	Ptr<Scaleform::Waitable::HandlerArray>(const Scaleform::Ptr<Scaleform::Waitable::HandlerArray> &);
	Ptr<Scaleform::Waitable::HandlerArray>(Scaleform::Waitable::HandlerArray *);
	Ptr<Scaleform::Waitable::HandlerArray>(Scaleform::Ptr<Scaleform::Waitable::HandlerArray> &, Scaleform::PickType);
	Ptr<Scaleform::Waitable::HandlerArray>(Scaleform::Pickable<Scaleform::Waitable::HandlerArray>);
	Ptr<Scaleform::Waitable::HandlerArray>(Scaleform::Waitable::HandlerArray &);
	Ptr<Scaleform::Waitable::HandlerArray>();
	~Ptr<Scaleform::Waitable::HandlerArray>();
	bool operator==(Scaleform::Waitable::HandlerArray *);
	bool operator==(const Scaleform::Ptr<Scaleform::Waitable::HandlerArray> &);
	bool operator!=(Scaleform::Waitable::HandlerArray *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Waitable::HandlerArray> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Waitable::HandlerArray> &);
	Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & operator=(Scaleform::Pickable<Scaleform::Waitable::HandlerArray>);
	const Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & operator=(Scaleform::Waitable::HandlerArray &);
	const Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & operator=(Scaleform::Waitable::HandlerArray *);
	const Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & operator=(const Scaleform::Ptr<Scaleform::Waitable::HandlerArray> &);
	Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & SetPtr(Scaleform::Pickable<Scaleform::Waitable::HandlerArray>);
	Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & SetPtr(Scaleform::Waitable::HandlerArray &);
	Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & SetPtr(Scaleform::Waitable::HandlerArray *);
	Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & SetPtr(const Scaleform::Ptr<Scaleform::Waitable::HandlerArray> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Waitable::HandlerArray * & GetRawRef();
	Scaleform::Waitable::HandlerArray * GetPtr();
	Scaleform::Waitable::HandlerArray & operator*();
	Scaleform::Waitable::HandlerArray * operator->();
	Scaleform::Waitable::HandlerArray * operator struct Scaleform::Waitable::HandlerArray *();
	Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & Pick(Scaleform::Waitable::HandlerArray *);
	Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & Pick(Scaleform::Pickable<Scaleform::Waitable::HandlerArray>);
	Scaleform::Ptr<Scaleform::Waitable::HandlerArray> & Pick(Scaleform::Ptr<Scaleform::Waitable::HandlerArray> &);
};
class Scaleform::Mutex :
	Scaleform::Waitable,
	Scaleform::AcquireInterface
{
private:
	Scaleform::MutexImpl * pImpl; // 0x20
public:
	Mutex(const Scaleform::Mutex &);
	Mutex(bool, bool);
	virtual ~Mutex();
	void DoLock();
	bool TryLock();
	void Unlock();
	bool IsLockedByAnotherThread();
	virtual bool IsSignaled();
	virtual Scaleform::AcquireInterface * GetAcquireInterface();
	virtual bool CanAcquire();
	virtual bool TryAcquire();
	virtual bool TryAcquireCommit();
	virtual bool TryAcquireCancel();
	class Locker;
	Scaleform::Mutex & operator=(const Scaleform::Mutex &);
	void __dflt_ctor_closure();
};
class Scaleform::Mutex::Locker
{
public:
	Scaleform::Mutex * pMutex; // 0x0
	Locker(Scaleform::Mutex *);
	~Locker();
};
class Scaleform::WaitCondition
{
private:
	Scaleform::WaitConditionImpl * pImpl; // 0x0
public:
	WaitCondition();
	~WaitCondition();
	bool Wait(Scaleform::Mutex *, unsigned long);
	void Notify();
	void NotifyAll();
};
class Scaleform::Event :
	Scaleform::Waitable,
	Scaleform::AcquireInterface
{
private:
	volatile bool State; // 0x20
	volatile bool Temporary; // 0x21
	Scaleform::Mutex StateMutex; // 0x28
	Scaleform::WaitCondition StateWaitCondition; // 0x50
public:
	Event(const Scaleform::Event &);
	Event(bool, bool);
	virtual ~Event();
	bool Wait(unsigned long);
	void SetEvent();
	void ResetEvent();
	void PulseEvent();
	virtual bool IsSignaled();
	virtual Scaleform::AcquireInterface * GetAcquireInterface();
	virtual bool CanAcquire();
	virtual bool TryAcquire();
	virtual bool TryAcquireCommit();
	virtual bool TryAcquireCancel();
	Scaleform::Event & operator=(const Scaleform::Event &);
	void __dflt_ctor_closure();
};
class Scaleform::Semaphore :
	Scaleform::Waitable,
	Scaleform::AcquireInterface
{
protected:
	long MaxValue; // 0x20
	volatile long Value; // 0x24
	Scaleform::Mutex ValueMutex; // 0x28
	Scaleform::WaitCondition ValueWaitCondition; // 0x50
public:
	Semaphore(const Scaleform::Semaphore &);
	Semaphore(long, bool);
	virtual ~Semaphore();
	long GetMaxValue();
	long GetValue();
	long GetAvailable();
	bool ObtainSemaphore(long, unsigned long);
	bool ReleaseSemaphore(long);
	long operator++(long);
	long operator--(long);
	long operator+=(long);
	long operator-=(long);
	Scaleform::Waitable * CreateWaitableIncrement(long);
	virtual bool CanAcquire();
	virtual bool TryAcquire();
	virtual bool TryAcquireCommit();
	virtual bool TryAcquireCancel();
	virtual bool IsSignaled();
	virtual Scaleform::AcquireInterface * GetAcquireInterface();
	class Locker;
	Scaleform::Semaphore & operator=(const Scaleform::Semaphore &);
	void __dflt_ctor_closure();
};
class Scaleform::Semaphore::Locker
{
public:
	Scaleform::Semaphore * pSemaphore; // 0x0
	long Count; // 0x8
	Locker(Scaleform::Semaphore *, long);
	~Locker();
};
class Scaleform::Thread :
	Scaleform::Waitable,
	Scaleform::AcquireInterface
{
	typedef long(*ThreadFn)(Scaleform::Thread *, void *);
public:
	long(*ThreadFunction)(Scaleform::Thread *, void *); // 0x20
	void * UserHandle; // 0x28
	enum ThreadState
	{
		NotRunning = 0,
		Running = 1,
		Suspended = 2,
	};
	enum ThreadPriority
	{
		CriticalPriority = 0,
		HighestPriority = 1,
		AboveNormalPriority = 2,
		NormalPriority = 3,
		BelowNormalPriority = 4,
		LowestPriority = 5,
		IdlePriority = 6,
	};
	struct CreateParams;
protected:
	Thread(const Scaleform::Thread &);
public:
	Thread(const Scaleform::Thread::CreateParams &);
	Thread(long(*)(Scaleform::Thread *, void *), void *, unsigned long long, long, Scaleform::Thread::ThreadState);
	Thread(unsigned long long, long);
	virtual ~Thread();
	static void FinishAllThreads();
	long Run();
	void OnExit();
	bool Start(Scaleform::Thread::ThreadState);
	void Exit(long);
	bool Suspend();
	bool Resume();
	bool GetExitFlag();
	void SetExitFlag(bool);
	bool IsFinished();
	bool IsSuspended();
	Scaleform::Thread::ThreadState GetThreadState();
	static long GetCPUCount();
	long GetExitCode();
	void * GetOSHandle();
	unsigned long GetThreadId();
	static long GetOSPriority(Scaleform::Thread::ThreadPriority);
	static bool Sleep(unsigned long);
	static bool MSleep(unsigned long);
	virtual bool IsSignaled();
	virtual Scaleform::AcquireInterface * GetAcquireInterface();
	virtual bool CanAcquire();
	virtual bool TryAcquire();
	void SetThreadName(const char *);
protected:
	Scaleform::AtomicInt<unsigned long> ThreadFlags; // 0x30
	Scaleform::AtomicInt<long> SuspendCount; // 0x34
	unsigned long long StackSize; // 0x38
	long Processor; // 0x40
	Scaleform::Thread::ThreadPriority Priority; // 0x44
	void * ThreadHandle; // 0x48
	volatile unsigned long IdValue; // 0x50
	void CleanupSystemThread();
	long ExitCode; // 0x54
	long PRun();
	void FinishAndRelease();
	void Init(const Scaleform::Thread::CreateParams &);
	Scaleform::Thread & operator=(const Scaleform::Thread &);
public:
	void __dflt_ctor_closure();
};
struct Scaleform::Thread::CreateParams
{
	CreateParams(long(*)(Scaleform::Thread *, void *), void *, unsigned long long, long, Scaleform::Thread::ThreadState, Scaleform::Thread::ThreadPriority);
	long(*threadFunction)(Scaleform::Thread *, void *); // 0x0
	void * userHandle; // 0x8
	unsigned long long stackSize; // 0x10
	long processor; // 0x18
	Scaleform::Thread::ThreadState initialState; // 0x1C
	Scaleform::Thread::ThreadPriority priority; // 0x20
	void __dflt_ctor_closure();
};
bool Scaleform::Thread::IsSignaled(); // 0x140310EB0
Scaleform::AcquireInterface * Scaleform::Thread::GetAcquireInterface(); // 0x140392DC0
bool Scaleform::Thread::CanAcquire(); // 0x140310C20
class Scaleform::AtomicInt<unsigned long> :
	Scaleform::AtomicValueBase<unsigned long>
{
	class Ops;
public:
	AtomicInt<unsigned long>(Scaleform::AtomicInt<unsigned long> &);
	AtomicInt<unsigned long>(const Scaleform::AtomicInt<unsigned long> &);
	AtomicInt<unsigned long>(unsigned long);
	AtomicInt<unsigned long>();
	unsigned long ExchangeAdd_Sync(unsigned long);
	unsigned long ExchangeAdd_Release(unsigned long);
	unsigned long ExchangeAdd_Acquire(unsigned long);
	unsigned long ExchangeAdd_NoSync(unsigned long);
	void Increment_Sync();
	void Increment_Release();
	void Increment_Acquire();
	void Increment_NoSync();
	Scaleform::AtomicInt<unsigned long> & operator=(Scaleform::AtomicInt<unsigned long> &);
	Scaleform::AtomicInt<unsigned long> & operator=(const Scaleform::AtomicInt<unsigned long> &);
	unsigned long operator=(unsigned long);
	unsigned long operator+=(unsigned long);
	unsigned long operator-=(unsigned long);
	unsigned long operator++(long);
	unsigned long operator++();
	unsigned long operator--(long);
	unsigned long operator--();
	unsigned long operator&=(unsigned long);
	unsigned long operator|=(unsigned long);
	unsigned long operator^=(unsigned long);
	unsigned long operator*=(unsigned long);
	unsigned long operator/=(unsigned long);
	unsigned long operator>>=(unsigned long);
	unsigned long operator<<=(unsigned long);
};