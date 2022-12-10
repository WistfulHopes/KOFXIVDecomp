#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"

class Scaleform::Mutex_AreadyLockedAcquireInterface :
	Scaleform::AcquireInterface
{
public:
	Scaleform::Mutex * pMutex; // 0x8
	Mutex_AreadyLockedAcquireInterface(Scaleform::Mutex_AreadyLockedAcquireInterface &);
	Mutex_AreadyLockedAcquireInterface(const Scaleform::Mutex_AreadyLockedAcquireInterface &);
	Mutex_AreadyLockedAcquireInterface();
	virtual bool CanAcquire();
	virtual bool TryAcquire();
	virtual bool TryAcquireCommit();
	virtual bool TryAcquireCancel();
	void AddRef();
	void Release(unsigned long);
	virtual ~Mutex_AreadyLockedAcquireInterface();
	Scaleform::Mutex_AreadyLockedAcquireInterface & operator=(Scaleform::Mutex_AreadyLockedAcquireInterface &);
	Scaleform::Mutex_AreadyLockedAcquireInterface & operator=(const Scaleform::Mutex_AreadyLockedAcquireInterface &);
};
bool Scaleform::Mutex_AreadyLockedAcquireInterface::CanAcquire(); // 0x1400B8180
bool Scaleform::Mutex_AreadyLockedAcquireInterface::TryAcquire(); // 0x140311210
bool Scaleform::Mutex_AreadyLockedAcquireInterface::TryAcquireCommit(); // 0x140311250
bool Scaleform::Mutex_AreadyLockedAcquireInterface::TryAcquireCancel(); // 0x140311240
class Scaleform::MutexImpl :
	Scaleform::NewOverrideBase<2>
{
private:
	void * hMutexOrSemaphore; // 0x0
	bool Recursive; // 0x8
	volatile unsigned long LockCount; // 0xC
	Scaleform::Mutex_AreadyLockedAcquireInterface AreadyLockedAcquire; // 0x10
public:
	MutexImpl(const Scaleform::MutexImpl &);
	MutexImpl(Scaleform::Mutex *, bool);
	~MutexImpl();
	void DoLock();
	bool TryLock();
	void Unlock(Scaleform::Mutex *);
	bool IsLockedByAnotherThread(Scaleform::Mutex *);
	bool IsSignaled();
	Scaleform::AcquireInterface * GetAcquireInterface(Scaleform::Mutex *);
	Scaleform::MutexImpl & operator=(const Scaleform::MutexImpl &);
};
void Scaleform::MutexImpl::Unlock(Scaleform::Mutex * pmutex); // 0x140311270
Scaleform::Mutex::Mutex(bool recursive, bool multiWait); // 0x1403105E0
Scaleform::Mutex::~Mutex(); // 0x1403107A0
void Scaleform::Mutex::DoLock(); // 0x140310C30
void Scaleform::Mutex::Unlock(); // 0x140311260
bool Scaleform::Mutex::IsSignaled(); // 0x140310EA0
Scaleform::AcquireInterface * Scaleform::Mutex::GetAcquireInterface(); // 0x140310DD0
bool Scaleform::Mutex::CanAcquire(); // 0x140310BD0
bool Scaleform::Mutex::TryAcquire(); // 0x1403111E0
bool Scaleform::Mutex::TryAcquireCancel(); // 0x140311220
class Scaleform::WaitConditionImpl :
	Scaleform::NewOverrideBase<2>
{
	struct EventPoolEntry;
private:
	Scaleform::Lock WaitQueueLoc; // 0x0
	Scaleform::WaitConditionImpl::EventPoolEntry * pFreeEventList; // 0x30
	Scaleform::WaitConditionImpl::EventPoolEntry * pQueueHead; // 0x38
	Scaleform::WaitConditionImpl::EventPoolEntry * pQueueTail; // 0x40
	Scaleform::WaitConditionImpl::EventPoolEntry * GetNewEvent();
	void ReleaseEvent(Scaleform::WaitConditionImpl::EventPoolEntry *);
	void QueuePush(Scaleform::WaitConditionImpl::EventPoolEntry *);
	Scaleform::WaitConditionImpl::EventPoolEntry * QueuePop();
	void QueueFindAndRemove(Scaleform::WaitConditionImpl::EventPoolEntry *);
public:
	WaitConditionImpl();
	~WaitConditionImpl();
	bool Wait(Scaleform::Mutex *, unsigned long);
	void Notify();
	void NotifyAll();
};
struct Scaleform::WaitConditionImpl::EventPoolEntry :
	Scaleform::NewOverrideBase<2>
{
	void * hEvent; // 0x0
	Scaleform::WaitConditionImpl::EventPoolEntry * pNext; // 0x8
	Scaleform::WaitConditionImpl::EventPoolEntry * pPrev; // 0x10
};
Scaleform::ThreadList * Scaleform::ThreadList::pRunningThreads; // 0x140A72120
typedef unsigned long long DWORD_PTR;
typedef _SYSTEM_INFO * LPSYSTEM_INFO;
typedef _SYSTEM_INFO SYSTEM_INFO;
typedef unsigned long(*_beginthreadex_proc_type)(void *);
typedef long * LPLONG;
Scaleform::WaitConditionImpl::~WaitConditionImpl(); // 0x140310950
Scaleform::WaitConditionImpl::EventPoolEntry * Scaleform::WaitConditionImpl::GetNewEvent(); // 0x140310E30
bool Scaleform::WaitConditionImpl::Wait(Scaleform::Mutex * pmutex, unsigned long delay); // 0x140311310
void Scaleform::WaitConditionImpl::NotifyAll(); // 0x140310ED0
Scaleform::WaitCondition::WaitCondition(); // 0x140310730
Scaleform::WaitCondition::~WaitCondition(); // 0x140310910
bool Scaleform::WaitCondition::Wait(Scaleform::Mutex * pmutex, unsigned long delay); // 0x140311300
void Scaleform::WaitCondition::NotifyAll(); // 0x140310EC0
Scaleform::Thread::Thread(unsigned long long stackSize, long processor); // 0x1403106C0
Scaleform::Thread::~Thread(); // 0x140310810
long Scaleform::Thread::Run(); // 0x140310FD0
void Scaleform::Thread::FinishAndRelease(); // 0x140310D30
class Scaleform::ThreadList :
	Scaleform::NewOverrideBase<2>
{
	struct ThreadHashOp;
private:
	Scaleform::HashSet<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> > ThreadSet; // 0x0
	Scaleform::Mutex ThreadMutex; // 0x8
	Scaleform::WaitCondition ThreadsEmpty; // 0x30
	unsigned long RootThreadId; // 0x38
	static Scaleform::ThreadList * pRunningThreads; // 0xFFFFFFFFFFFFFFFF
	void addThread(Scaleform::Thread *);
	void removeThread(Scaleform::Thread *);
	void finishAllThreads();
public:
	ThreadList(const Scaleform::ThreadList &);
	ThreadList();
	~ThreadList();
	static void AddRunningThread(Scaleform::Thread *);
	static void RemoveRunningThread(Scaleform::Thread *);
	static void FinishAllThreads();
	Scaleform::ThreadList & operator=(const Scaleform::ThreadList &);
};
struct Scaleform::ThreadList::ThreadHashOp
{
	unsigned long long operator()(const Scaleform::Thread *);
};
class Scaleform::HashSet<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> > :
	Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >
{
	class BaseType;
	class SelfType;
	typedef Scaleform::Thread ValueType;
public:
	HashSet<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >(const Scaleform::HashSet<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> > &);
	HashSet<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >(void *, long);
	HashSet<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >(void *);
	HashSet<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >(long);
	HashSet<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >();
	~HashSet<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >();
	void operator=(const Scaleform::HashSet<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> > &);
	void CheckExpand();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
};
void Scaleform::ThreadList::addThread(Scaleform::Thread * pthread); // 0x1403114D0
void Scaleform::ThreadList::removeThread(Scaleform::Thread * pthread); // 0x1403115C0
void Scaleform::ThreadList::finishAllThreads(); // 0x140311550
Scaleform::ThreadList::~ThreadList(); // 0x140310870
void Scaleform::ThreadList::AddRunningThread(Scaleform::Thread * pthread); // 0x140310B40
void Scaleform::ThreadList::FinishAllThreads(); // 0x140310CB0
void Scaleform::Thread::FinishAllThreads(); // 0x140310CA0
long Scaleform::Thread::PRun(); // 0x140310F60
unsigned long Scaleform::Thread_Win32StartFn(void * phandle); // 0x140311100
bool Scaleform::Thread::Start(Scaleform::Thread::ThreadState initialState); // 0x140311010
void Scaleform::Thread::Exit(long exitCode); // 0x140310C60
bool Scaleform::Thread::Sleep(unsigned long secs); // 0x140310FF0
void Scaleform::Mutex_AreadyLockedAcquireInterface::AddRef(); // 0x14002E7C0
unsigned long Scaleform::GetCurrentThreadId(); // 0x1406A3430//decompilation failure at 140A72120!
char __fastcall Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp>>::RemoveAlt<Scaleform::Thread *>(
        Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> > *this,
        Scaleform::Thread *const *key)
{
  Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >::TableType *pTable; // r8
  Scaleform::Thread *v4; // r11
  unsigned __int64 v5; // rax
  unsigned __int64 v6; // rdx
  bool v7; // zf
  unsigned __int64 *v8; // rdx
  unsigned __int64 v9; // r10
  __int64 v10; // r9
  unsigned __int64 v11; // rax
  unsigned __int64 *v12; // rcx

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  v4 = *key;
  v5 = pTable->SizeMask & ((__int64)*key ^ ((unsigned __int64)*key >> 6));
  v6 = v5 + 2 * (v5 + 1);
  v7 = *(&pTable->EntryCount + v6) == -2i64;
  v8 = &pTable->EntryCount + v6;
  if ( v7 || v8[1] != v5 )
    return 0;
  v9 = v5;
  v10 = -1i64;
  while ( v8[1] != v9 || (Scaleform::Thread *)v8[2] != v4 )
  {
    v10 = v5;
    v5 = *v8;
    if ( *v8 == -1i64 )
      return 0;
    v8 = &pTable[v5 + 1].EntryCount + v5;
  }
  v7 = v9 == v5;
  v11 = *v8;
  if ( v7 )
  {
    if ( v11 != -1i64 )
    {
      *v8 = -2i64;
      v12 = &pTable->EntryCount + 3 * v11;
      *v8 = v12[2];
      v8[1] = v12[3];
      v8[2] = v12[4];
      v12[2] = -2i64;
      --this->pTable->EntryCount;
      return 1;
    }
  }
  else
  {
    *(&pTable[1].EntryCount + 3 * v10) = v11;
  }
  *v8 = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp>>::add<Scaleform::Thread *>(
        Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> > *this,
        void *pmemAddr,
        Scaleform::Thread *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  unsigned __int64 *v13; // r8
  Scaleform::Thread *v14; // rax
  __int64 v15; // rdx
  unsigned __int64 *v16; // r10
  unsigned __int64 v17; // rax
  unsigned __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 *i; // rcx
  __int64 v21; // rcx

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v8 = 2 * SizeMask + 2;
  }
  else
  {
    v8 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = &this->pTable->EntryCount + 3 * v10;
  if ( v12 == -2i64 )
  {
    v13[2] = -1i64;
    v13[3] = 0i64;
    v14 = *key;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( *(&v11[1].EntryCount + 3 * v15) != -2i64 );
    v16 = &v11[v15 + 1].EntryCount + v15;
    v17 = v13[3];
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v16[2] = v13[4];
      }
      v14 = *key;
      v13[2] = v15;
    }
    else
    {
      v18 = v17 + 2 * (v17 + 1);
      v19 = *(&v11->EntryCount + v18) == v10;
      for ( i = &v11->EntryCount + v18; !v19; i = &v11->EntryCount + v21 )
      {
        v21 = *i + 2 * (*i + 1);
        v19 = *(&v11->EntryCount + v21) == v10;
      }
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = v13[3];
        v16[2] = v13[4];
      }
      *i = v15;
      v14 = *key;
      v13[2] = -1i64;
    }
  }
  v13[3] = v10;
  v13[4] = (unsigned __int64)v14;
}

void __fastcall Scaleform::Mutex::Mutex(Scaleform::Mutex *this, bool recursive, bool multiWait)
{
  __int64 v5; // rax
  Scaleform::MutexImpl *v6; // rbx

  Scaleform::Waitable::Waitable(this, multiWait);
  this->Scaleform::Waitable::Scaleform::RefCountBase<Scaleform::Waitable,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Mutex_vtbl *)&Scaleform::Mutex::`vftable'{for `Scaleform::Waitable'};
  this->Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::Mutex::`vftable'{for `Scaleform::AcquireInterface'};
  v5 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         32i64);
  v6 = (Scaleform::MutexImpl *)v5;
  if ( v5 )
  {
    *(_QWORD *)(v5 + 16) = &Scaleform::Mutex_AreadyLockedAcquireInterface::`vftable';
    *(_BYTE *)(v5 + 8) = recursive;
    *(_QWORD *)(v5 + 24) = this;
    *(_DWORD *)(v5 + 12) = 0;
    if ( *(_BYTE *)(v5 + 8) )
      *(_QWORD *)v5 = CreateMutexA(0i64, 0, 0i64);
    else
      *(_QWORD *)v5 = CreateSemaphoreA(0i64, 1, 1, 0i64);
    this->pImpl = v6;
  }
  else
  {
    this->pImpl = 0i64;
  }
}

void __fastcall Scaleform::Thread::Thread(Scaleform::Thread *this, unsigned __int64 stackSize, int processor)
{
  Scaleform::Waitable::Waitable(this, 1);
  this->Scaleform::Waitable::Scaleform::RefCountBase<Scaleform::Waitable,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Thread_vtbl *)&Scaleform::Thread::`vftable'{for `Scaleform::Waitable'};
  this->Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::Thread::`vftable'{for `Scaleform::AcquireInterface'};
  this->ThreadFlags.Value = 0;
  this->ThreadHandle = 0i64;
  this->IdValue = 0;
  this->ExitCode = 0;
  this->SuspendCount.Value = 0;
  this->ThreadFunction = 0i64;
  this->UserHandle = 0i64;
  this->StackSize = stackSize;
  this->Processor = processor;
  this->Priority = NormalPriority;
}

void __fastcall Scaleform::WaitCondition::WaitCondition(Scaleform::WaitCondition *this)
{
  Scaleform::Lock *v2; // rax
  Scaleform::WaitConditionImpl *v3; // rbx

  v2 = (Scaleform::Lock *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                            Scaleform::Memory::pGlobalHeap,
                            72i64);
  v3 = (Scaleform::WaitConditionImpl *)v2;
  if ( v2 )
  {
    Scaleform::Lock::Lock(v2, 0);
    v3->pFreeEventList = 0i64;
    v3->pQueueTail = 0i64;
    v3->pQueueHead = 0i64;
    this->pImpl = v3;
  }
  else
  {
    this->pImpl = 0i64;
  }
}

void __fastcall Scaleform::Mutex::~Mutex(Scaleform::Mutex *this)
{
  Scaleform::MutexImpl *pImpl; // rdi

  pImpl = this->pImpl;
  this->Scaleform::Waitable::Scaleform::RefCountBase<Scaleform::Waitable,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Mutex_vtbl *)&Scaleform::Mutex::`vftable'{for `Scaleform::Waitable'};
  this->Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::Mutex::`vftable'{for `Scaleform::AcquireInterface'};
  if ( pImpl )
  {
    CloseHandle(pImpl->hMutexOrSemaphore);
    pImpl->AreadyLockedAcquire.__vftable = (Scaleform::Mutex_AreadyLockedAcquireInterface_vtbl *)&Scaleform::DefaultAcquireInterface::`vftable';
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pImpl);
  }
  this->Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::DefaultAcquireInterface::`vftable';
  Scaleform::Waitable::~Waitable(this);
}

void __fastcall Scaleform::Thread::~Thread(Scaleform::Thread *this)
{
  void *ThreadHandle; // rcx

  this->Scaleform::Waitable::Scaleform::RefCountBase<Scaleform::Waitable,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Thread_vtbl *)&Scaleform::Thread::`vftable'{for `Scaleform::Waitable'};
  this->Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::Thread::`vftable'{for `Scaleform::AcquireInterface'};
  ThreadHandle = this->ThreadHandle;
  if ( ThreadHandle )
  {
    CloseHandle(ThreadHandle);
    this->ThreadHandle = 0i64;
  }
  this->ThreadHandle = 0i64;
  this->Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::DefaultAcquireInterface::`vftable';
  Scaleform::Waitable::~Waitable(this);
}

void __fastcall Scaleform::ThreadList::~ThreadList(Scaleform::ThreadList *this)
{
  Scaleform::WaitConditionImpl *pImpl; // rdi
  __int64 v3; // rcx
  unsigned __int64 v4; // rdx

  pImpl = this->ThreadsEmpty.pImpl;
  if ( pImpl )
  {
    Scaleform::WaitConditionImpl::~WaitConditionImpl(this->ThreadsEmpty.pImpl);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pImpl);
  }
  Scaleform::Mutex::~Mutex(&this->ThreadMutex);
  if ( this->ThreadSet.pTable )
  {
    v3 = 0i64;
    v4 = this->ThreadSet.pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&this->ThreadSet.pTable[1].EntryCount + v3) != -2i64 )
        *(unsigned __int64 *)((char *)&this->ThreadSet.pTable[1].EntryCount + v3) = -2i64;
      v3 += 24i64;
      --v4;
    }
    while ( v4 );
    if ( this->ThreadSet.pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->ThreadSet.pTable = 0i64;
  }
}

void __fastcall Scaleform::WaitCondition::~WaitCondition(Scaleform::WaitCondition *this)
{
  Scaleform::WaitConditionImpl *pImpl; // rbx

  pImpl = this->pImpl;
  if ( this->pImpl )
  {
    Scaleform::WaitConditionImpl::~WaitConditionImpl(this->pImpl);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pImpl);
  }
}

void __fastcall Scaleform::WaitConditionImpl::~WaitConditionImpl(Scaleform::WaitConditionImpl *this)
{
  Scaleform::WaitConditionImpl::EventPoolEntry *pFreeEventList; // rbx
  HANDLE *v3; // rdi

  pFreeEventList = this->pFreeEventList;
  while ( pFreeEventList )
  {
    v3 = (HANDLE *)pFreeEventList;
    pFreeEventList = pFreeEventList->pNext;
    CloseHandle(*v3);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v3);
  }
  this->pFreeEventList = 0i64;
  this->pQueueTail = 0i64;
  this->pQueueHead = 0i64;
  Scaleform::Lock::~Lock(&this->WaitQueueLoc);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::ThreadList::AddRunningThread(Scaleform::Thread *pthread)
{
  __int64 v2; // rax
  Scaleform::ThreadList *v3; // rbx

  if ( !Scaleform::ThreadList::pRunningThreads )
  {
    v2 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
           Scaleform::Memory::pGlobalHeap,
           64i64);
    v3 = (Scaleform::ThreadList *)v2;
    if ( v2 )
    {
      *(_QWORD *)v2 = 0i64;
      Scaleform::Mutex::Mutex((Scaleform::Mutex *)(v2 + 8), 1, 0);
      Scaleform::WaitCondition::WaitCondition(&v3->ThreadsEmpty);
      v3->RootThreadId = GetCurrentThreadId();
    }
    else
    {
      v3 = 0i64;
    }
    Scaleform::ThreadList::pRunningThreads = v3;
  }
  Scaleform::ThreadList::addThread(Scaleform::ThreadList::pRunningThreads, pthread);
}

char __fastcall Scaleform::Mutex::CanAcquire(Scaleform::Mutex *this)
{
  Scaleform::MutexImpl *v1; // rbx
  Scaleform::Mutex *v2; // rdi

  v1 = *(Scaleform::MutexImpl **)&this->RefCount;
  v2 = (Scaleform::Mutex *)((char *)this - 24);
  if ( !v1->LockCount )
    return 1;
  if ( !WaitForSingleObject(v1->hMutexOrSemaphore, 0) )
  {
    ++v1->LockCount;
    Scaleform::MutexImpl::Unlock(v1, v2);
    return 1;
  }
  return 0;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

__int64 __fastcall Scaleform::Thread::CanAcquire(Scaleform::Thread *this)
{
  return (*(__int64 (__fastcall **)(int *))(*(_QWORD *)&this[-1].Processor + 8i64))(&this[-1].Processor);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
        *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) = -2i64;
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::Mutex::DoLock(Scaleform::Mutex *this)
{
  Scaleform::MutexImpl *pImpl; // rbx

  pImpl = this->pImpl;
  if ( !WaitForSingleObject(pImpl->hMutexOrSemaphore, 0xFFFFFFFF) )
    ++pImpl->LockCount;
}

void __fastcall __noreturn Scaleform::Thread::Exit(Scaleform::Thread *this, int exitCode)
{
  this->OnExit(this);
  Scaleform::Thread::FinishAndRelease(this);
  Scaleform::ThreadList::removeThread(Scaleform::ThreadList::pRunningThreads, this);
  endthreadex(exitCode);
}

// attributes: thunk
void Scaleform::Thread::FinishAllThreads(void)
{
  Scaleform::ThreadList::FinishAllThreads();
}

void Scaleform::ThreadList::FinishAllThreads(void)
{
  Scaleform::ThreadList *v0; // [rsp+30h] [rbp+8h]

  if ( Scaleform::ThreadList::pRunningThreads )
  {
    Scaleform::ThreadList::finishAllThreads(Scaleform::ThreadList::pRunningThreads);
    v0 = Scaleform::ThreadList::pRunningThreads;
    if ( Scaleform::ThreadList::pRunningThreads )
    {
      Scaleform::ThreadList::~ThreadList(Scaleform::ThreadList::pRunningThreads);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v0);
    }
    Scaleform::ThreadList::pRunningThreads = 0i64;
  }
}

void __fastcall Scaleform::Thread::FinishAndRelease(Scaleform::Thread *this)
{
  Scaleform::Waitable::HandlerArray *pHandlers; // rbx
  Scaleform::Waitable::HandlerArray *v3; // [rsp+30h] [rbp+8h]

  pHandlers = this->pHandlers;
  v3 = 0i64;
  if ( pHandlers )
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pHandlers->RefCount.Value, 1);
    v3 = pHandlers;
  }
  while ( !Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(
             (volatile int *)&this->ThreadFlags,
             this->ThreadFlags.Value,
             this->ThreadFlags.Value & 0xFFFFFFFE) )
    ;
  while ( !Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(
             (volatile int *)&this->ThreadFlags,
             this->ThreadFlags.Value,
             this->ThreadFlags.Value | 2) )
    ;
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this);
  if ( v3 )
  {
    Scaleform::Waitable::HandlerArray::CallWaitHandlers(v3);
    Scaleform::Waitable::HandlerArray::Release(v3);
  }
}

Scaleform::Mutex_AreadyLockedAcquireInterface *__fastcall Scaleform::Mutex::GetAcquireInterface(Scaleform::Mutex *this)
{
  Scaleform::MutexImpl *pImpl; // rbx

  pImpl = this->pImpl;
  if ( !pImpl->LockCount || WaitForSingleObject(pImpl->hMutexOrSemaphore, 0) )
    return (Scaleform::Mutex_AreadyLockedAcquireInterface *)&this->Scaleform::AcquireInterface;
  ++pImpl->LockCount;
  Scaleform::MutexImpl::Unlock(pImpl, this);
  return &pImpl->AreadyLockedAcquire;
}

Scaleform::AcquireInterface *__fastcall Scaleform::Event::GetAcquireInterface(Scaleform::Thread *this)
{
  Scaleform::AcquireInterface *result; // rax

  result = &this->Scaleform::AcquireInterface;
  if ( !this )
    return 0i64;
  return result;
}

// attributes: thunk
DWORD __stdcall Concurrency::details::platform::GetCurrentThreadId()
{
  return GetCurrentThreadId();
}

Scaleform::WaitConditionImpl::EventPoolEntry *__fastcall Scaleform::WaitConditionImpl::GetNewEvent(
        Scaleform::WaitConditionImpl *this)
{
  Scaleform::WaitConditionImpl::EventPoolEntry *result; // rax
  HANDLE *v2; // rbx

  result = this->pFreeEventList;
  if ( result )
  {
    this->pFreeEventList = result->pNext;
  }
  else
  {
    v2 = (HANDLE *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                     Scaleform::Memory::pGlobalHeap,
                     24i64);
    v2[1] = 0i64;
    v2[2] = 0i64;
    *v2 = CreateEventA(0i64, 1, 0, 0i64);
    return (Scaleform::WaitConditionImpl::EventPoolEntry *)v2;
  }
  return result;
}

bool __fastcall Scaleform::Mutex::IsSignaled(Scaleform::Mutex *this)
{
  return this->pImpl->LockCount == 0;
}

__int64 __fastcall Scaleform::Thread::IsSignaled(Scaleform::Thread *this)
{
  return (this->ThreadFlags.Value >> 1) & 1;
}

void __fastcall Scaleform::WaitCondition::NotifyAll(Scaleform::WaitCondition *this)
{
  Scaleform::WaitConditionImpl::NotifyAll(this->pImpl);
}

void __fastcall Scaleform::WaitConditionImpl::NotifyAll(Scaleform::WaitConditionImpl *this)
{
  Scaleform::WaitConditionImpl::EventPoolEntry *pQueueHead; // rcx
  Scaleform::WaitConditionImpl::EventPoolEntry *pNext; // rax
  Scaleform::WaitConditionImpl::EventPoolEntry *v4; // rax

  Scaleform::Lock::DoLock(&this->WaitQueueLoc);
  pQueueHead = this->pQueueHead;
  if ( pQueueHead )
  {
    if ( pQueueHead->pNext )
    {
      pNext = pQueueHead->pNext;
      this->pQueueHead = pNext;
      pNext->pPrev = 0i64;
    }
    else
    {
      this->pQueueHead = 0i64;
      this->pQueueTail = 0i64;
    }
    while ( 1 )
    {
      SetEvent(pQueueHead->hEvent);
      pQueueHead = this->pQueueHead;
      if ( !pQueueHead )
        break;
      if ( pQueueHead->pNext )
      {
        v4 = pQueueHead->pNext;
        this->pQueueHead = v4;
        v4->pPrev = 0i64;
      }
      else
      {
        this->pQueueHead = 0i64;
        this->pQueueTail = 0i64;
      }
    }
  }
  Scaleform::Lock::Unlock(&this->WaitQueueLoc);
}

__int64 __fastcall Scaleform::Thread::PRun(Scaleform::Thread *this)
{
  __int64 result; // rax

  if ( (this->ThreadFlags.Value & 8) != 0 )
  {
    if ( (this->ThreadFlags.Value & 1) != 0 && SuspendThread(this->ThreadHandle) != -1 )
      Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->SuspendCount.Value, 1);
    while ( !Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(
               (volatile int *)&this->ThreadFlags,
               this->ThreadFlags.Value,
               this->ThreadFlags.Value & 0xFFFFFFF7) )
      ;
  }
  result = ((__int64 (__fastcall *)(Scaleform::Thread *))this->Run)(this);
  this->ExitCode = result;
  return result;
}

int (__fastcall *__fastcall Scaleform::Thread::Run(Scaleform::Thread *this))(Scaleform::Thread *, void *)
{
  int (__fastcall *result)(Scaleform::Thread *, void *); // rax

  result = this->ThreadFunction;
  if ( result )
    return (int (__fastcall *)(Scaleform::Thread *, void *))((__int64 (__fastcall *)(Scaleform::Thread *, void *))result)(
                                                              this,
                                                              this->UserHandle);
  return result;
}

char __fastcall Scaleform::Thread::Sleep(unsigned int secs)
{
  Sleep(1000 * secs);
  return 1;
}

char __fastcall Scaleform::Thread::Start(Scaleform::Thread *this, Scaleform::Thread::ThreadState initialState)
{
  void *ThreadHandle; // rcx
  volatile unsigned int v6; // eax
  void *v7; // rax

  if ( initialState == NotRunning
    || (this->SuspendCount.Value > 0 || (this->ThreadFlags.Value & 1) != 0)
    && !Scaleform::Waitable::Wait(this, 0xFFFFFFFF) )
  {
    return 0;
  }
  ThreadHandle = this->ThreadHandle;
  if ( ThreadHandle )
  {
    CloseHandle(ThreadHandle);
    this->ThreadHandle = 0i64;
  }
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this);
  Scaleform::ThreadList::AddRunningThread(this);
  this->ExitCode = 0;
  this->SuspendCount.Value = 0;
  v6 = 8;
  if ( initialState == Running )
    v6 = 1;
  this->ThreadFlags.Value = v6;
  v7 = (void *)beginthreadex(
                 0i64,
                 this->StackSize,
                 Scaleform::Thread_Win32StartFn,
                 this,
                 0,
                 (unsigned int *)&this->IdValue);
  this->ThreadHandle = v7;
  if ( v7 )
    return 1;
  this->ThreadFlags.Value = 0;
  Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this);
  Scaleform::ThreadList::removeThread(Scaleform::ThreadList::pRunningThreads, this);
  return 0;
}

__int64 __fastcall Scaleform::Thread_Win32StartFn(void *phandle)
{
  unsigned int v2; // ebx
  HANDLE CurrentThread; // rax
  int v4; // ebx
  HANDLE v5; // rax
  unsigned int v6; // ebx

  if ( *((_DWORD *)phandle + 16) != -1 )
  {
    v2 = *((_DWORD *)phandle + 16);
    CurrentThread = GetCurrentThread();
    SetThreadAffinityMask(CurrentThread, v2);
  }
  switch ( *((_DWORD *)phandle + 17) )
  {
    case 0:
      v4 = 15;
      break;
    case 1:
      v4 = 2;
      break;
    case 2:
      v4 = 1;
      break;
    case 4:
      v4 = -1;
      break;
    case 5:
      v4 = -2;
      break;
    case 6:
      v4 = -15;
      break;
    default:
      v4 = 0;
      break;
  }
  v5 = GetCurrentThread();
  SetThreadPriority(v5, v4);
  *((_DWORD *)phandle + 20) = GetCurrentThreadId();
  v6 = Scaleform::Thread::PRun((Scaleform::Thread *)phandle);
  Scaleform::Thread::FinishAndRelease((Scaleform::Thread *)phandle);
  Scaleform::ThreadList::removeThread(Scaleform::ThreadList::pRunningThreads, (Scaleform::Thread *)phandle);
  return v6;
}

char __fastcall Scaleform::Mutex::TryAcquire(Scaleform::Mutex *this)
{
  __int64 v1; // rbx

  v1 = *(_QWORD *)&this->RefCount;
  if ( WaitForSingleObject(*(HANDLE *)v1, 0) )
    return 0;
  ++*(_DWORD *)(v1 + 12);
  return 1;
}

__int64 __fastcall Scaleform::Mutex_AreadyLockedAcquireInterface::TryAcquire(
        Scaleform::Mutex_AreadyLockedAcquireInterface *this)
{
  return ((__int64 (__fastcall *)(Scaleform::AcquireInterface *))this->pMutex->TryAcquire)(&this->pMutex->Scaleform::AcquireInterface);
}

char __fastcall Scaleform::Mutex::TryAcquireCancel(Scaleform::Mutex *this)
{
  Scaleform::MutexImpl::Unlock(*(Scaleform::MutexImpl **)&this->RefCount, (Scaleform::Mutex *)((char *)this - 24));
  return 1;
}

__int64 __fastcall Scaleform::Mutex_AreadyLockedAcquireInterface::TryAcquireCancel(
        Scaleform::Mutex_AreadyLockedAcquireInterface *this)
{
  return ((__int64 (__fastcall *)(Scaleform::AcquireInterface *))this->pMutex->TryAcquireCancel)(&this->pMutex->Scaleform::AcquireInterface);
}

__int64 __fastcall Scaleform::Mutex_AreadyLockedAcquireInterface::TryAcquireCommit(
        Scaleform::Mutex_AreadyLockedAcquireInterface *this)
{
  return ((__int64 (__fastcall *)(Scaleform::AcquireInterface *))this->pMutex->TryAcquireCommit)(&this->pMutex->Scaleform::AcquireInterface);
}

void __fastcall Scaleform::Mutex::Unlock(Scaleform::Mutex *this)
{
  Scaleform::MutexImpl::Unlock(this->pImpl, this);
}

void __fastcall Scaleform::MutexImpl::Unlock(Scaleform::MutexImpl *this, Scaleform::Mutex *pmutex)
{
  Scaleform::Waitable::HandlerArray *v2; // rbx
  volatile unsigned int LockCount; // esi
  Scaleform::Waitable::HandlerArray *pHandlers; // rax
  void *hMutexOrSemaphore; // rcx
  BOOL v7; // eax

  --this->LockCount;
  v2 = 0i64;
  LockCount = this->LockCount;
  pHandlers = pmutex->pHandlers;
  if ( pHandlers )
  {
    v2 = pmutex->pHandlers;
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pHandlers->RefCount.Value, 1);
  }
  hMutexOrSemaphore = this->hMutexOrSemaphore;
  if ( this->Recursive )
    v7 = ReleaseMutex(hMutexOrSemaphore);
  else
    v7 = ReleaseSemaphore(hMutexOrSemaphore, 1, 0i64);
  if ( v7 && !LockCount )
  {
    if ( !v2 )
      return;
    Scaleform::Waitable::HandlerArray::CallWaitHandlers(v2);
  }
  if ( v2 )
    Scaleform::Waitable::HandlerArray::Release(v2);
}

bool __fastcall Scaleform::WaitCondition::Wait(
        Scaleform::WaitCondition *this,
        Scaleform::Mutex *pmutex,
        unsigned int delay)
{
  return Scaleform::WaitConditionImpl::Wait(this->pImpl, pmutex, delay);
}

char __fastcall Scaleform::WaitConditionImpl::Wait(
        Scaleform::WaitConditionImpl *this,
        Scaleform::Mutex *pmutex,
        unsigned int delay)
{
  char v3; // r13
  __int64 LockCount; // r15
  Scaleform::WaitConditionImpl::EventPoolEntry *NewEvent; // rdi
  Scaleform::WaitConditionImpl::EventPoolEntry *pQueueTail; // rax
  Scaleform::MutexImpl *pImpl; // rax
  bool v12; // zf
  __int64 v13; // rbx
  DWORD v14; // ebx
  Scaleform::WaitConditionImpl::EventPoolEntry *pQueueHead; // rax
  Scaleform::WaitConditionImpl::EventPoolEntry *pPrev; // rcx
  Scaleform::WaitConditionImpl::EventPoolEntry *pNext; // rax
  Scaleform::WaitConditionImpl::EventPoolEntry *v18; // rcx
  Scaleform::WaitConditionImpl::EventPoolEntry *v19; // rax
  __int64 v20; // rdi
  Scaleform::MutexImpl *v21; // rbx

  v3 = 0;
  LockCount = pmutex->pImpl->LockCount;
  if ( !(_DWORD)LockCount )
    return 0;
  Scaleform::Lock::DoLock(&this->WaitQueueLoc);
  NewEvent = Scaleform::WaitConditionImpl::GetNewEvent(this);
  pQueueTail = this->pQueueTail;
  if ( pQueueTail )
  {
    NewEvent->pPrev = pQueueTail;
    this->pQueueTail->pNext = NewEvent;
    NewEvent->pNext = 0i64;
  }
  else
  {
    NewEvent->pPrev = 0i64;
    NewEvent->pNext = 0i64;
    this->pQueueHead = NewEvent;
  }
  this->pQueueTail = NewEvent;
  Scaleform::Lock::Unlock(&this->WaitQueueLoc);
  pImpl = pmutex->pImpl;
  v12 = !pImpl->Recursive;
  pImpl->LockCount = 0;
  if ( v12 )
  {
    ReleaseSemaphore(pmutex->pImpl->hMutexOrSemaphore, 1, 0i64);
  }
  else
  {
    v13 = LockCount;
    do
    {
      ReleaseMutex(pmutex->pImpl->hMutexOrSemaphore);
      --v13;
    }
    while ( v13 );
  }
  Scaleform::Waitable::CallWaitHandlers(pmutex);
  if ( delay == -1 )
    delay = -1;
  v14 = WaitForSingleObject(NewEvent->hEvent, delay);
  Scaleform::Lock::DoLock(&this->WaitQueueLoc);
  if ( (v14 & 0xFFFFFF7F) != 0 )
  {
    pQueueHead = this->pQueueHead;
    if ( pQueueHead )
    {
      while ( pQueueHead != NewEvent )
      {
        pQueueHead = pQueueHead->pNext;
        if ( !pQueueHead )
          goto LABEL_25;
      }
      pPrev = NewEvent->pPrev;
      pNext = NewEvent->pNext;
      if ( pPrev )
        pPrev->pNext = pNext;
      else
        this->pQueueHead = pNext;
      v18 = NewEvent->pNext;
      v19 = NewEvent->pPrev;
      if ( v18 )
        v18->pPrev = v19;
      else
        this->pQueueTail = v19;
    }
  }
  else
  {
    v3 = 1;
  }
LABEL_25:
  ResetEvent(NewEvent->hEvent);
  NewEvent->pNext = this->pFreeEventList;
  NewEvent->pPrev = 0i64;
  this->pFreeEventList = NewEvent;
  Scaleform::Lock::Unlock(&this->WaitQueueLoc);
  v20 = LockCount;
  do
  {
    v21 = pmutex->pImpl;
    if ( !WaitForSingleObject(v21->hMutexOrSemaphore, 0xFFFFFFFF) )
      ++v21->LockCount;
    --v20;
  }
  while ( v20 );
  return v3;
}

void __fastcall Scaleform::ThreadList::addThread(Scaleform::ThreadList *this, Scaleform::Thread *pthread)
{
  Scaleform::MutexImpl *pImpl; // rdi
  Scaleform::Thread *v3; // rsi
  Scaleform::Thread *key; // [rsp+38h] [rbp+10h] BYREF

  key = pthread;
  pImpl = this->ThreadMutex.pImpl;
  v3 = pthread;
  if ( !WaitForSingleObject(pImpl->hMutexOrSemaphore, 0xFFFFFFFF) )
  {
    ++pImpl->LockCount;
    v3 = key;
  }
  Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp>>::add<Scaleform::Thread *>(
    &this->ThreadSet,
    this,
    &key,
    (unsigned __int64)v3 ^ ((unsigned __int64)v3 >> 6));
  Scaleform::MutexImpl::Unlock(this->ThreadMutex.pImpl, &this->ThreadMutex);
}

void __fastcall Scaleform::ThreadList::finishAllThreads(Scaleform::ThreadList *this)
{
  Scaleform::MutexImpl *pImpl; // rsi

  pImpl = this->ThreadMutex.pImpl;
  if ( !WaitForSingleObject(pImpl->hMutexOrSemaphore, 0xFFFFFFFF) )
    ++pImpl->LockCount;
  while ( this->ThreadSet.pTable && this->ThreadSet.pTable->EntryCount )
    Scaleform::WaitConditionImpl::Wait(this->ThreadsEmpty.pImpl, &this->ThreadMutex, 0xFFFFFFFF);
  Scaleform::MutexImpl::Unlock(this->ThreadMutex.pImpl, &this->ThreadMutex);
}

void __fastcall Scaleform::ThreadList::removeThread(Scaleform::ThreadList *this, Scaleform::Thread *pthread)
{
  Scaleform::MutexImpl *pImpl; // rsi
  Scaleform::Mutex *p_ThreadMutex; // rbx
  Scaleform::WaitConditionImpl *v5; // rdi
  Scaleform::WaitConditionImpl::EventPoolEntry *pQueueHead; // rdx
  Scaleform::WaitConditionImpl::EventPoolEntry *pNext; // rax
  Scaleform::Thread *key; // [rsp+38h] [rbp+10h] BYREF

  key = pthread;
  pImpl = this->ThreadMutex.pImpl;
  p_ThreadMutex = &this->ThreadMutex;
  if ( !WaitForSingleObject(pImpl->hMutexOrSemaphore, 0xFFFFFFFF) )
    ++pImpl->LockCount;
  Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp>>::RemoveAlt<Scaleform::Thread *>(
    &this->ThreadSet,
    &key);
  if ( !this->ThreadSet.pTable || !this->ThreadSet.pTable->EntryCount )
  {
    v5 = this->ThreadsEmpty.pImpl;
    Scaleform::Lock::DoLock(&v5->WaitQueueLoc);
    pQueueHead = v5->pQueueHead;
    if ( pQueueHead )
    {
      if ( pQueueHead->pNext )
      {
        pNext = pQueueHead->pNext;
        v5->pQueueHead = pNext;
        pNext->pPrev = 0i64;
      }
      else
      {
        v5->pQueueHead = 0i64;
        v5->pQueueTail = 0i64;
      }
      SetEvent(pQueueHead->hEvent);
    }
    Scaleform::Lock::Unlock(&v5->WaitQueueLoc);
  }
  Scaleform::MutexImpl::Unlock(p_ThreadMutex->pImpl, p_ThreadMutex);
}

void __fastcall Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >::TableType *pTable; // rdi
  int v10; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> > v11; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v10 = 2;
    v6 = 0i64;
    v11.pTable = 0i64;
    v11.pTable = (Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp> >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 24 * v5 + 16, &v10);
    v11.pTable->EntryCount = 0i64;
    v11.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v11.pTable + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        pTable = this->pTable;
        if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v6) != -2i64 )
        {
          Scaleform::HashSetBase<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp,Scaleform::ThreadList::ThreadHashOp,Scaleform::AllocatorGH<Scaleform::Thread *,2>,Scaleform::HashsetCachedEntry<Scaleform::Thread *,Scaleform::ThreadList::ThreadHashOp>>::add<Scaleform::Thread *>(
            &v11,
            pheapAddr,
            (Scaleform::Thread *const *)((char *)&pTable[2] + v6),
            *(unsigned __int64 *)((char *)&pTable[2].EntryCount + v6) ^ (*(unsigned __int64 *)((char *)&pTable[2].EntryCount
                                                                                             + v6) >> 6));
          *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v6) = -2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      if ( this->pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->pTable = v11.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Clear((Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)this);
  }
}

