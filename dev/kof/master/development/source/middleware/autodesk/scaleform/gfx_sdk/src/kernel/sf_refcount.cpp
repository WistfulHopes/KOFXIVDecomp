#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::RefCountImplCore::~RefCountImplCore(); // 0x1402EE870
Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(); // 0x1402EE880
void Scaleform::RefCountImpl::AddRef(); // 0x14027E270
class Scaleform::AtomicOps<int>
{
	struct Ops;
	typedef long T;
	typedef volatile long PT;
	union C2T_union;
public:
	static long Exchange_Sync(volatile long *, long);
	static long Exchange_Release(volatile long *, long);
	static long Exchange_Acquire(volatile long *, long);
	static long Exchange_NoSync(volatile long *, long);
	static long ExchangeAdd_Sync(volatile long *, long);
	static long ExchangeAdd_Release(volatile long *, long);
	static long ExchangeAdd_Acquire(volatile long *, long);
	static long ExchangeAdd_NoSync(volatile long *, long);
	static bool CompareAndSet_Sync(volatile long *, long, long);
	static bool CompareAndSet_Release(volatile long *, long, long);
	static bool CompareAndSet_Acquire(volatile long *, long, long);
	static bool CompareAndSet_NoSync(volatile long *, long, long);
	static void Store_Release(volatile long *, long);
	static long Load_Acquire(const long *);
};
void Scaleform::RefCountImpl::Release(); // 0x14027E280
void Scaleform::RefCountNTSImpl::Release(); // 0x1402EE9D0
Scaleform::RefCountWeakSupportImpl::~RefCountWeakSupportImpl(); // 0x1402EE890
Scaleform::WeakPtrProxy * Scaleform::RefCountWeakSupportImpl::CreateWeakProxy(); // 0x1402EE960void __fastcall Scaleform::RefCountImplCore::~RefCountImplCore(Scaleform::RefCountImplCore *this)
{
  this->__vftable = (Scaleform::RefCountImplCore_vtbl *)&Scaleform::RefCountImplCore::`vftable';
}

void __fastcall Scaleform::RefCountNTSImplCore::~RefCountNTSImplCore(Scaleform::RefCountNTSImplCore *this)
{
  this->__vftable = (Scaleform::RefCountNTSImplCore_vtbl *)&Scaleform::RefCountNTSImplCore::`vftable';
}

void __fastcall Scaleform::RefCountWeakSupportImpl::~RefCountWeakSupportImpl(Scaleform::RefCountWeakSupportImpl *this)
{
  Scaleform::WeakPtrProxy *pWeakProxy; // rax
  Scaleform::WeakPtrProxy *v3; // rdx
  bool v4; // zf

  this->__vftable = (Scaleform::RefCountWeakSupportImpl_vtbl *)&Scaleform::RefCountWeakSupportImpl::`vftable';
  pWeakProxy = this->pWeakProxy;
  if ( pWeakProxy && (pWeakProxy->pObject = 0i64, v3 = this->pWeakProxy, v4 = v3->RefCount == 1, --v3->RefCount, v4) )
  {
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->__vftable = (Scaleform::RefCountWeakSupportImpl_vtbl *)&Scaleform::RefCountNTSImplCore::`vftable';
  }
  else
  {
    this->__vftable = (Scaleform::RefCountWeakSupportImpl_vtbl *)&Scaleform::RefCountNTSImplCore::`vftable';
  }
}

void __fastcall Scaleform::Render::RenderBuffer::AddRef(Scaleform::RefCountVImpl *this)
{
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount, 1);
}

Scaleform::WeakPtrProxy *__fastcall Scaleform::RefCountWeakSupportImpl::CreateWeakProxy(
        Scaleform::RefCountWeakSupportImpl *this)
{
  Scaleform::WeakPtrProxy *result; // rax
  int v3; // [rsp+30h] [rbp+8h] BYREF

  if ( this->pWeakProxy )
    goto LABEL_5;
  v3 = 2;
  result = (Scaleform::WeakPtrProxy *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                        Scaleform::Memory::pGlobalHeap,
                                        this,
                                        16i64,
                                        &v3);
  if ( result )
  {
    result->RefCount = 1;
    result->pObject = this;
  }
  this->pWeakProxy = result;
  if ( result )
  {
LABEL_5:
    ++this->pWeakProxy->RefCount;
    return this->pWeakProxy;
  }
  return result;
}

void __fastcall Scaleform::RefCountImpl::Release(Scaleform::RefCountVImpl *this)
{
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount, -1) == 1 )
  {
    if ( this )
      ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int64))this->~RefCountImplCore)(this, 1i64);
  }
}

void __fastcall Scaleform::RefCountNTSImpl::Release(Scaleform::RefCountNTSImpl *this)
{
  if ( this->RefCount-- == 1 )
    ((void (__fastcall *)(Scaleform::RefCountNTSImpl *, __int64))this->~RefCountNTSImplCore)(this, 1i64);
}

