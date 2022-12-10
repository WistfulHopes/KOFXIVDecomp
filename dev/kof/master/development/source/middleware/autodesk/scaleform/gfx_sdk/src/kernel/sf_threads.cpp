#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"

Scaleform::Waitable::Waitable(bool enable); // 0x140392900
Scaleform::Waitable::~Waitable(); // 0x1403929F0
bool Scaleform::Waitable::AddWaitHandler(void(*handler)(void *), void * pdata); // 0x140392B70
bool Scaleform::Waitable::RemoveWaitHandler(void(*handler)(void *), void * pdata); // 0x140392F60
void Scaleform::Waitable::HandlerArray::Release(); // 0x140392F00
void Scaleform::Waitable::HandlerArray::CallWaitHandlers(); // 0x140392CE0
void Scaleform::Waitable::CallWaitHandlers(); // 0x140392DB0
struct Scaleform::Waitable_SingleWaitData
{
	Scaleform::Waitable * pWaitable; // 0x0
	Scaleform::Event * pEvent; // 0x8
	Waitable_SingleWaitData(Scaleform::Waitable *, Scaleform::Event *);
};
void Scaleform::Waitable_SingleWaitHandler(void * hdata); // 0x1403935F0
bool Scaleform::Waitable::Wait(unsigned long delay); // 0x140393350
Scaleform::AcquireInterface * Scaleform::Waitable::GetAcquireInterface(); // 0x140392DD0
bool Scaleform::AcquireInterface::CanAcquire(); // 0x1400B8180
struct Scaleform::AcquireInterface_AcquireDesc
{
	Scaleform::Waitable * * pWaitList; // 0x0
	unsigned long WaitCount; // 0x8
	Scaleform::Event * pEvent; // 0x10
	Scaleform::AcquireInterface * * pAcquireList; // 0x18
	AcquireInterface_AcquireDesc(Scaleform::Waitable * *, unsigned long, Scaleform::Event *, Scaleform::AcquireInterface * *);
	bool AddHandlers(void(*)(void *));
	void RemoveHandlers(void(*)(void *));
};
struct Scaleform::AcquireInterface_AcquireList
{
	Scaleform::AcquireInterface * * pList; // 0x0
	Scaleform::AcquireInterface * StaticList[32]; // 0x8
	AcquireInterface_AcquireList(Scaleform::Waitable * *, unsigned long);
	~AcquireInterface_AcquireList();
};
Scaleform::Event::Event(bool setInitially, bool multiWait); // 0x1403928A0
Scaleform::Event::~Event(); // 0x1403929A0
bool Scaleform::Event::Wait(unsigned long delay); // 0x1403932B0
void Scaleform::Event::SetEvent(); // 0x1403931C0
void Scaleform::Event::ResetEvent(); // 0x1403930F0
void Scaleform::Event::PulseEvent(); // 0x140392E50
bool Scaleform::Event::IsSignaled(); // 0x140392E40
Scaleform::AcquireInterface * Scaleform::Event::GetAcquireInterface(); // 0x140392DC0
bool Scaleform::Event::CanAcquire(); // 0x140310C20
bool Scaleform::Event::TryAcquireCommit(); // 0x140393270
class Scaleform::SemaphoreWaitableIncrement :
	Scaleform::Waitable,
	Scaleform::AcquireInterface
{
private:
	Scaleform::Semaphore * pSemaphore; // 0x20
	long Count; // 0x28
public:
	SemaphoreWaitableIncrement(const Scaleform::SemaphoreWaitableIncrement &);
	SemaphoreWaitableIncrement(Scaleform::Semaphore *, long);
	SemaphoreWaitableIncrement();
	virtual ~SemaphoreWaitableIncrement();
	virtual bool CanAcquire();
	virtual bool TryAcquire();
	virtual bool TryAcquireCommit();
	virtual bool TryAcquireCancel();
	virtual bool IsSignaled();
	virtual Scaleform::AcquireInterface * GetAcquireInterface();
	void AddRef();
	void Release(unsigned long);
	Scaleform::SemaphoreWaitableIncrement & operator=(const Scaleform::SemaphoreWaitableIncrement &);
};void __fastcall Scaleform::Event::Event(Scaleform::Event *this, bool setInitially, bool multiWait)
{
  Scaleform::Waitable::Waitable(this, multiWait);
  this->Scaleform::Waitable::Scaleform::RefCountBase<Scaleform::Waitable,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Event_vtbl *)&Scaleform::Event::`vftable'{for `Scaleform::Waitable'};
  this->Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::Event::`vftable'{for `Scaleform::AcquireInterface'};
  Scaleform::Mutex::Mutex(&this->StateMutex, 1, 0);
  Scaleform::WaitCondition::WaitCondition(&this->StateWaitCondition);
  this->State = setInitially;
  this->Temporary = 0;
}

void __fastcall Scaleform::Waitable::Waitable(Scaleform::Waitable *this, bool enable)
{
  __int64 v3; // rax
  Scaleform::Waitable::HandlerArray *v4; // rdi

  this->__vftable = (Scaleform::Waitable_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Waitable_vtbl *)&Scaleform::Waitable::`vftable';
  this->RefCount = 1;
  if ( enable )
  {
    v3 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
           Scaleform::Memory::pGlobalHeap,
           80i64);
    v4 = (Scaleform::Waitable::HandlerArray *)v3;
    if ( v3 )
    {
      *(_QWORD *)(v3 + 8) = 0i64;
      *(_QWORD *)(v3 + 16) = 0i64;
      *(_QWORD *)(v3 + 24) = 0i64;
      Scaleform::Lock::Lock((Scaleform::Lock *)(v3 + 32), 0);
      v4->RefCount.Value = 1;
      this->pHandlers = v4;
    }
    else
    {
      this->pHandlers = 0i64;
    }
  }
  else
  {
    this->pHandlers = 0i64;
  }
}

void __fastcall Scaleform::Event::~Event(Scaleform::Event *this)
{
  this->Scaleform::Waitable::Scaleform::RefCountBase<Scaleform::Waitable,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Event_vtbl *)&Scaleform::Event::`vftable'{for `Scaleform::Waitable'};
  this->Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::Event::`vftable'{for `Scaleform::AcquireInterface'};
  Scaleform::WaitCondition::~WaitCondition(&this->StateWaitCondition);
  Scaleform::Mutex::~Mutex(&this->StateMutex);
  this->Scaleform::AcquireInterface::__vftable = (Scaleform::AcquireInterface_vtbl *)&Scaleform::DefaultAcquireInterface::`vftable';
  Scaleform::Waitable::~Waitable(this);
}

void __fastcall Scaleform::Waitable::~Waitable(Scaleform::Waitable *this)
{
  Scaleform::Waitable::HandlerArray *pHandlers; // rbx

  pHandlers = this->pHandlers;
  this->__vftable = (Scaleform::Waitable_vtbl *)&Scaleform::Waitable::`vftable';
  if ( pHandlers
    && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pHandlers->RefCount.Value, -1) == 1 )
  {
    Scaleform::Lock::~Lock(&pHandlers->HandlersLock);
    if ( pHandlers->Handlers.Data.Data )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pHandlers);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

char __fastcall Scaleform::Waitable::AddWaitHandler(
        Scaleform::Waitable *this,
        void (__fastcall *handler)(void *),
        void *pdata)
{
  Scaleform::Waitable::HandlerArray *pHandlers; // rbx
  Scaleform::Array<Scaleform::Waitable::HandlerStruct,2,Scaleform::ArrayConstPolicy<0,16,1> > *p_Handlers; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  Scaleform::Waitable::HandlerStruct *Data; // rax
  void (__fastcall **p_Handler)(void *); // rcx

  pHandlers = this->pHandlers;
  if ( !pHandlers )
    return 0;
  Scaleform::Lock::DoLock(&pHandlers->HandlersLock);
  p_Handlers = &this->pHandlers->Handlers;
  v9 = p_Handlers->Data.Size + 1;
  if ( v9 >= p_Handlers->Data.Size )
  {
    if ( v9 > p_Handlers->Data.Policy.Capacity )
    {
      v10 = v9 + (v9 >> 2);
      goto LABEL_8;
    }
  }
  else if ( v9 < p_Handlers->Data.Policy.Capacity >> 1 )
  {
    v10 = p_Handlers->Data.Size + 1;
LABEL_8:
    Scaleform::ArrayDataBase<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1>>::Reserve(
      &p_Handlers->Data,
      p_Handlers,
      v10);
  }
  Data = p_Handlers->Data.Data;
  p_Handlers->Data.Size = v9;
  p_Handler = &Data[v9 - 1].Handler;
  if ( p_Handler )
  {
    *p_Handler = handler;
    p_Handler[1] = (void (__fastcall *)(void *))pdata;
  }
  Scaleform::Lock::Unlock(&pHandlers->HandlersLock);
  return 1;
}

void __fastcall Scaleform::ArrayData<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1>>::Append(
        Scaleform::ArrayData<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1> > *this,
        const Scaleform::Waitable::HandlerStruct *other,
        unsigned __int64 count)
{
  unsigned __int64 v3; // rsi
  unsigned __int64 Size; // rbx
  unsigned __int64 v7; // r14
  unsigned __int64 v8; // r8
  Scaleform::Waitable::HandlerStruct *v9; // rbx

  if ( !count )
    return;
  v3 = count;
  Size = this->Size;
  v7 = Size + count;
  if ( Size + count >= Size )
  {
    if ( v7 <= this->Policy.Capacity )
      goto LABEL_8;
    v8 = v7 + (v7 >> 2);
  }
  else
  {
    if ( v7 >= this->Policy.Capacity >> 1 )
      goto LABEL_8;
    v8 = Size + count;
  }
  Scaleform::ArrayDataBase<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1>>::Reserve(
    this,
    this,
    v8);
LABEL_8:
  v9 = &this->Data[Size];
  this->Size = v7;
  do
  {
    if ( v9 )
    {
      v9->Handler = other->Handler;
      v9->pUserData = other->pUserData;
    }
    ++other;
    ++v9;
    --v3;
  }
  while ( v3 );
}

void __fastcall Scaleform::Waitable::HandlerArray::CallWaitHandlers(Scaleform::Waitable::HandlerArray *this)
{
  Scaleform::Lock *p_HandlersLock; // rbx
  unsigned __int64 Size; // rax
  unsigned __int64 v4; // r8
  Scaleform::Waitable::HandlerStruct *Data; // rdx
  unsigned __int64 v6; // rsi
  Scaleform::Waitable::HandlerStruct *v7; // rdi
  Scaleform::ArrayData<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1> > v8; // [rsp+20h] [rbp-28h] BYREF

  p_HandlersLock = &this->HandlersLock;
  Scaleform::Lock::DoLock(&this->HandlersLock);
  Size = this->Handlers.Data.Size;
  if ( Size )
  {
    if ( Size == 1 )
    {
      this->Handlers.Data.Data->Handler(this->Handlers.Data.Data->pUserData);
      Scaleform::Lock::Unlock(p_HandlersLock);
      return;
    }
    v4 = this->Handlers.Data.Size;
    Data = this->Handlers.Data.Data;
    memset(&v8, 0, sizeof(v8));
    Scaleform::ArrayData<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1>>::Append(
      &v8,
      Data,
      v4);
    v6 = v8.Size;
    if ( v8.Size )
    {
      v7 = v8.Data;
      do
      {
        v7->Handler(v7->pUserData);
        ++v7;
        --v6;
      }
      while ( v6 );
    }
    if ( v8.Data )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v8.Data);
  }
  Scaleform::Lock::Unlock(p_HandlersLock);
}

void __fastcall Scaleform::Waitable::CallWaitHandlers(Scaleform::Waitable *this)
{
  Scaleform::Waitable::HandlerArray *pHandlers; // rcx

  pHandlers = this->pHandlers;
  if ( pHandlers )
    Scaleform::Waitable::HandlerArray::CallWaitHandlers(pHandlers);
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

__int64 __fastcall Scaleform::Thread::CanAcquire(Scaleform::Thread *this)
{
  return (*(__int64 (__fastcall **)(int *))(*(_QWORD *)&this[-1].Processor + 8i64))(&this[-1].Processor);
}

Scaleform::AcquireInterface *__fastcall Scaleform::Event::GetAcquireInterface(Scaleform::Thread *this)
{
  Scaleform::AcquireInterface *result; // rax

  result = &this->Scaleform::AcquireInterface;
  if ( !this )
    return 0i64;
  return result;
}

void ***__fastcall Scaleform::Waitable::GetAcquireInterface(Scaleform::Waitable *this)
{
  if ( dword_140A724B4 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A724B4);
    if ( dword_140A724B4 == -1 )
    {
      off_1409F9BC0 = &Scaleform::DefaultAcquireInterface::`vftable';
      atexit(Scaleform::DefaultAcquireInterface::GetDefaultAcquireInterface_::_2_::_dynamic_atexit_destructor_for__di__);
      Init_thread_footer(&dword_140A724B4);
    }
  }
  return &off_1409F9BC0;
}

_BOOL8 __fastcall Scaleform::Event::IsSignaled(Scaleform::Event *this)
{
  return this->State;
}

void __fastcall Scaleform::Event::PulseEvent(Scaleform::Event *this)
{
  Scaleform::Waitable::HandlerArray *pHandlers; // rbx

  Scaleform::Mutex::DoLock(&this->StateMutex);
  this->State = 1;
  this->Temporary = 1;
  Scaleform::WaitCondition::NotifyAll(&this->StateWaitCondition);
  pHandlers = 0i64;
  if ( this->pHandlers )
  {
    pHandlers = this->pHandlers;
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pHandlers->RefCount.Value, 1);
  }
  Scaleform::Mutex::Unlock(&this->StateMutex);
  if ( pHandlers )
  {
    Scaleform::Waitable::HandlerArray::CallWaitHandlers(pHandlers);
    if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pHandlers->RefCount.Value, -1) == 1 )
    {
      Scaleform::Lock::~Lock(&pHandlers->HandlersLock);
      if ( pHandlers->Handlers.Data.Data )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pHandlers);
    }
  }
}

void __fastcall Scaleform::Waitable::HandlerArray::Release(Scaleform::Waitable::HandlerArray *this)
{
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount.Value, -1) == 1 && this )
  {
    Scaleform::Lock::~Lock(&this->HandlersLock);
    if ( this->Handlers.Data.Data )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this);
  }
}

char __fastcall Scaleform::Waitable::RemoveWaitHandler(
        Scaleform::Waitable *this,
        void (__fastcall *handler)(void *),
        void *pdata)
{
  Scaleform::Waitable::HandlerArray *pHandlers; // rbx
  char v8; // r14
  Scaleform::Waitable::HandlerArray *v9; // rdi
  unsigned int v10; // ecx
  unsigned __int64 Size; // rdx
  __int64 v12; // rax
  __int64 v13; // rax
  unsigned __int64 v14; // r8
  size_t v15; // r8
  __int64 v16; // rcx

  pHandlers = this->pHandlers;
  if ( !pHandlers )
    return 0;
  v8 = 0;
  Scaleform::Lock::DoLock(&pHandlers->HandlersLock);
  v9 = this->pHandlers;
  v10 = 0;
  Size = v9->Handlers.Data.Size;
  if ( Size )
  {
    v12 = 0i64;
    while ( 1 )
    {
      v13 = (__int64)&v9->Handlers.Data.Data[v12];
      if ( *(void (__fastcall **)(void *))v13 == handler && *(void **)(v13 + 8) == pdata )
        break;
      v12 = ++v10;
      if ( v10 >= Size )
        goto LABEL_13;
    }
    v14 = v9->Handlers.Data.Size;
    if ( v14 == 1 )
    {
      Scaleform::ArrayData<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1>>::Resize(
        &v9->Handlers.Data,
        0i64);
    }
    else
    {
      v15 = 16 * (v14 - v10) - 16;
      v16 = (__int64)&v9->Handlers.Data.Data[v10];
      memmove((void *)v16, (const void *)(v16 + 16), v15);
      --v9->Handlers.Data.Size;
    }
    v8 = 1;
  }
LABEL_13:
  Scaleform::Lock::Unlock(&pHandlers->HandlersLock);
  return v8;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int64 Capacity; // rax
  Scaleform::Waitable::HandlerStruct *Data; // rdx
  unsigned __int64 v6; // rdi
  Scaleform::Waitable::HandlerStruct *v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  Capacity = this->Policy.Capacity;
  if ( newCapacity != Capacity && newCapacity >= Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 15) & 0xFFFFFFFFFFFFFFF0ui64;
      if ( Data )
      {
        v7 = (Scaleform::Waitable::HandlerStruct *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     Data,
                                                     16 * v6);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = 2;
      this->Data = (Scaleform::Waitable::HandlerStruct *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                           Scaleform::Memory::pGlobalHeap,
                                                           16 * v6,
                                                           &v8);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::Event::ResetEvent(Scaleform::Event *this)
{
  Scaleform::Mutex::DoLock(&this->StateMutex);
  this->State = 0;
  this->Temporary = 0;
  Scaleform::Mutex::Unlock(&this->StateMutex);
}

void __fastcall Scaleform::ArrayData<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1>>::Resize(
        Scaleform::ArrayData<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1> > *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v5; // r8
  Scaleform::Waitable::HandlerStruct *v6; // rax
  unsigned __int64 i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      v5 = newSize + (newSize >> 2);
      goto LABEL_6;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    v5 = newSize;
LABEL_6:
    Scaleform::ArrayDataBase<Scaleform::Waitable::HandlerStruct,Scaleform::AllocatorGH<Scaleform::Waitable::HandlerStruct,2>,Scaleform::ArrayConstPolicy<0,16,1>>::Reserve(
      this,
      this,
      v5);
  }
  this->Size = newSize;
  if ( newSize > Size )
  {
    v6 = &this->Data[Size];
    for ( i = newSize - Size; i; --i )
    {
      if ( v6 )
      {
        v6->Handler = 0i64;
        v6->pUserData = 0i64;
      }
      ++v6;
    }
  }
}

void __fastcall Scaleform::Event::SetEvent(Scaleform::Event *this)
{
  Scaleform::Waitable::HandlerArray *pHandlers; // rbx

  Scaleform::Mutex::DoLock(&this->StateMutex);
  this->State = 1;
  this->Temporary = 0;
  Scaleform::WaitCondition::NotifyAll(&this->StateWaitCondition);
  pHandlers = 0i64;
  if ( this->pHandlers )
  {
    pHandlers = this->pHandlers;
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pHandlers->RefCount.Value, 1);
  }
  Scaleform::Mutex::Unlock(&this->StateMutex);
  if ( pHandlers )
  {
    Scaleform::Waitable::HandlerArray::CallWaitHandlers(pHandlers);
    if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pHandlers->RefCount.Value, -1) == 1 )
    {
      Scaleform::Lock::~Lock(&pHandlers->HandlersLock);
      if ( pHandlers->Handlers.Data.Data )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pHandlers);
    }
  }
}

char __fastcall Scaleform::Event::TryAcquireCommit(Scaleform::Event *this)
{
  Scaleform::Mutex::DoLock((Scaleform::Mutex *)&this->pHandlers);
  if ( BYTE1(this->RefCount) )
  {
    BYTE1(this->RefCount) = 0;
    LOBYTE(this->RefCount) = 0;
  }
  Scaleform::Mutex::Unlock((Scaleform::Mutex *)&this->pHandlers);
  return 1;
}

_BOOL8 __fastcall Scaleform::Event::Wait(Scaleform::Event *this, unsigned int delay)
{
  volatile bool State; // al
  volatile bool v5; // si

  Scaleform::Mutex::DoLock(&this->StateMutex);
  if ( delay )
  {
    State = this->State;
    if ( delay == -1 )
    {
      if ( !State )
      {
        do
          Scaleform::WaitCondition::Wait(&this->StateWaitCondition, &this->StateMutex, 0xFFFFFFFF);
        while ( !this->State );
      }
    }
    else if ( !State )
    {
      Scaleform::WaitCondition::Wait(&this->StateWaitCondition, &this->StateMutex, delay);
    }
  }
  v5 = this->State;
  if ( this->Temporary )
  {
    this->Temporary = 0;
    this->State = 0;
  }
  Scaleform::Mutex::Unlock(&this->StateMutex);
  return v5;
}

char __fastcall Scaleform::Waitable::Wait(Scaleform::Waitable *this, unsigned int delay)
{
  unsigned int TicksMs; // er12
  char v6; // r15
  unsigned int v7; // ebx
  char v8; // si
  unsigned int v9; // eax
  volatile int *v10; // rbx
  __int64 pdata[2]; // [rsp+20h] [rbp-39h] BYREF
  Scaleform::RefCountImplCore v12; // [rsp+30h] [rbp-29h] BYREF
  volatile int *p; // [rsp+40h] [rbp-19h]
  void **v14; // [rsp+48h] [rbp-11h]
  char v15; // [rsp+50h] [rbp-9h]
  char v16; // [rsp+51h] [rbp-8h]
  Scaleform::Mutex pmutex; // [rsp+58h] [rbp-1h] BYREF
  Scaleform::WaitCondition v18; // [rsp+80h] [rbp+27h] BYREF

  if ( this->IsSignaled(this) )
    return 1;
  if ( !delay )
    return 0;
  TicksMs = 0;
  v14 = &Scaleform::Event::`vftable'{for `Scaleform::AcquireInterface'};
  v12.__vftable = (Scaleform::RefCountImplCore_vtbl *)&Scaleform::Event::`vftable'{for `Scaleform::Waitable'};
  v12.RefCount = 1;
  p = 0i64;
  Scaleform::Mutex::Mutex(&pmutex, 1, 0);
  Scaleform::WaitCondition::WaitCondition(&v18);
  v15 = 0;
  pdata[1] = (__int64)&v12;
  v16 = 0;
  pdata[0] = (__int64)this;
  if ( Scaleform::Waitable::AddWaitHandler(this, Scaleform::Waitable_SingleWaitHandler, pdata) )
  {
    if ( this->IsSignaled(this) )
    {
      Scaleform::Waitable::RemoveWaitHandler(this, Scaleform::Waitable_SingleWaitHandler, pdata);
      v6 = 1;
    }
    else
    {
      v6 = 0;
      v7 = delay;
      if ( delay != -1 )
        TicksMs = Scaleform::Timer::GetTicksMs();
      while ( 1 )
      {
        Scaleform::Mutex::DoLock(&pmutex);
        if ( v7 )
        {
          if ( v7 == -1 )
          {
            while ( !v15 )
              Scaleform::WaitCondition::Wait(&v18, &pmutex, 0xFFFFFFFF);
          }
          else if ( !v15 )
          {
            Scaleform::WaitCondition::Wait(&v18, &pmutex, v7);
          }
        }
        v8 = v15;
        if ( v16 )
        {
          v16 = 0;
          v15 = 0;
        }
        Scaleform::Mutex::Unlock(&pmutex);
        if ( !v8 )
          break;
        if ( this->IsSignaled(this) )
        {
          v6 = 1;
          break;
        }
        if ( delay != -1 )
        {
          v9 = Scaleform::Timer::GetTicksMs() - TicksMs;
          if ( v9 >= delay )
            break;
          v7 = delay - v9;
        }
      }
      Scaleform::Waitable::RemoveWaitHandler(this, Scaleform::Waitable_SingleWaitHandler, pdata);
    }
  }
  else
  {
    v6 = 0;
  }
  v12.__vftable = (Scaleform::RefCountImplCore_vtbl *)&Scaleform::Event::`vftable'{for `Scaleform::Waitable'};
  v14 = &Scaleform::Event::`vftable'{for `Scaleform::AcquireInterface'};
  Scaleform::WaitCondition::~WaitCondition(&v18);
  Scaleform::Mutex::~Mutex(&pmutex);
  v10 = p;
  v14 = &Scaleform::DefaultAcquireInterface::`vftable';
  v12.__vftable = (Scaleform::RefCountImplCore_vtbl *)&Scaleform::Waitable::`vftable';
  if ( p && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(p, -1) == 1 && v10 )
  {
    Scaleform::Lock::~Lock((Scaleform::Lock *)(v10 + 8));
    if ( *((_QWORD *)v10 + 1) )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v10);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(&v12);
  return v6;
}

void __fastcall Scaleform::Waitable_SingleWaitHandler(void *hdata)
{
  if ( (*(unsigned __int8 (__fastcall **)(_QWORD))(**(_QWORD **)hdata + 8i64))(*(_QWORD *)hdata) )
    Scaleform::Event::PulseEvent(*((Scaleform::Event **)hdata + 1));
}

