#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resourcehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::GFx::ResourceBinding::ResourceBinding(Scaleform::MemoryHeap * pheap); // 0x14038E4B0
Scaleform::GFx::ResourceBinding::~ResourceBinding(); // 0x14038E4E0
void Scaleform::GFx::ResourceBinding::Destroy(); // 0x14038E500
void Scaleform::GFx::ResourceBinding::SetBindData(unsigned long index, const Scaleform::GFx::ResourceBindData & bd); // 0x14038E670
void Scaleform::GFx::ResourceBinding::GetResourceData_Locked(Scaleform::GFx::ResourceBindData * pdata, unsigned long index); // 0x14038E570void __fastcall Scaleform::GFx::ResourceBinding::ResourceBinding(
        Scaleform::GFx::ResourceBinding *this,
        Scaleform::MemoryHeap *pheap)
{
  this->pHeap = pheap;
  Scaleform::Lock::Lock(&this->ResourceLock, 0);
  this->pResources = 0i64;
  this->ResourceCount = 0;
  this->Frozen = 0;
  this->pOwnerDefRes = 0i64;
}

void __fastcall Scaleform::GFx::ResourceBinding::~ResourceBinding(Scaleform::GFx::ResourceBinding *this)
{
  Scaleform::GFx::ResourceBinding::Destroy(this);
  Scaleform::Lock::~Lock(&this->ResourceLock);
}

void __fastcall Scaleform::GFx::ResourceBinding::Destroy(Scaleform::GFx::ResourceBinding *this)
{
  volatile unsigned int ResourceCount; // eax
  Scaleform::GFx::ResourceBindData *volatile pResources; // rbx
  __int64 v4; // rdi

  if ( this->pResources )
  {
    ResourceCount = this->ResourceCount;
    pResources = this->pResources;
    v4 = ResourceCount;
    if ( ResourceCount )
    {
      do
      {
        if ( pResources->pResource.pObject )
          Scaleform::GFx::Resource::Release(pResources->pResource.pObject);
        ++pResources;
        --v4;
      }
      while ( v4 );
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pResources);
    this->pResources = 0i64;
  }
}

void __fastcall Scaleform::GFx::ResourceBinding::GetResourceData_Locked(
        Scaleform::GFx::ResourceBinding *this,
        Scaleform::GFx::ResourceBindData *pdata,
        unsigned int index)
{
  Scaleform::Lock *p_ResourceLock; // rbx
  __int64 v4; // rsi
  Scaleform::GFx::ResourceBindData *v7; // rsi
  Scaleform::RefCountVImpl *pObject; // rdi
  Scaleform::GFx::Resource **v9; // r14
  __int64 pBinding; // rax
  char v11; // si
  __int64 v12[2]; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::GFx::Resource *v13[2]; // [rsp+30h] [rbp-28h] BYREF

  p_ResourceLock = &this->ResourceLock;
  v4 = index;
  Scaleform::Lock::DoLock(&this->ResourceLock);
  if ( (unsigned int)v4 >= this->ResourceCount )
  {
    pObject = (Scaleform::RefCountVImpl *)v12[0];
    v9 = v13;
    v11 = 2;
    *(_OWORD *)v13 = 0i64;
  }
  else
  {
    v7 = &this->pResources[v4];
    if ( v7->pResource.pObject )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v7->pResource.pObject);
    pObject = (Scaleform::RefCountVImpl *)v7->pResource.pObject;
    v9 = (Scaleform::GFx::Resource **)v12;
    pBinding = (__int64)v7->pBinding;
    v11 = 1;
    v12[0] = (__int64)pObject;
    v12[1] = pBinding;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
  }
  if ( pdata->pResource.pObject )
    Scaleform::GFx::Resource::Release(pdata->pResource.pObject);
  pdata->pResource.pObject = *v9;
  pdata->pBinding = (Scaleform::GFx::ResourceBinding *)v9[1];
  if ( (v11 & 2) != 0 )
  {
    v11 &= ~2u;
    if ( v13[0] )
      Scaleform::GFx::Resource::Release(v13[0]);
  }
  if ( (v11 & 1) != 0 && pObject )
    Scaleform::GFx::Resource::Release((Scaleform::GFx::Resource *)pObject);
  Scaleform::Lock::Unlock(p_ResourceLock);
}

void __fastcall Scaleform::GFx::ResourceBinding::SetBindData(
        Scaleform::GFx::ResourceBinding *this,
        unsigned int index,
        const Scaleform::GFx::ResourceBindData *bd)
{
  Scaleform::Lock *p_ResourceLock; // rbx
  unsigned int v6; // er15
  unsigned int v7; // ebp
  Scaleform::MemoryHeap *pHeap; // rcx
  __int64 v9; // rdx
  Scaleform::MemoryHeap_vtbl *v10; // rax
  __int64 v11; // rsi
  Scaleform::GFx::ResourceBindData *volatile v12; // rax
  volatile unsigned int v13; // edi
  Scaleform::GFx::ResourceBindData *v14; // r12
  Scaleform::GFx::ResourceBindData *v15; // rcx
  __int64 v16; // rax
  Scaleform::GFx::ResourceBindData *v17; // rsi
  Scaleform::GFx::ResourceBindData *v18; // r15
  volatile unsigned int ResourceCount; // eax
  Scaleform::GFx::ResourceBindData *volatile pResources; // rdi
  __int64 v21; // rsi
  Scaleform::GFx::ResourceBindData *v22; // rdi

  p_ResourceLock = &this->ResourceLock;
  v6 = index;
  Scaleform::Lock::DoLock(&this->ResourceLock);
  v7 = (v6 + 16) & 0xFFFFFFF0;
  if ( v7 > this->ResourceCount )
  {
    pHeap = this->pHeap;
    v9 = 16i64 * v7;
    v10 = this->pHeap->__vftable;
    v11 = v7;
    if ( this->pResources )
    {
      v13 = 0;
      v14 = (Scaleform::GFx::ResourceBindData *)v10->Alloc(pHeap, v9, 0i64);
      v15 = v14;
      if ( v7 )
      {
        do
        {
          if ( v15 )
          {
            v15->pResource.pObject = 0i64;
            v15->pBinding = 0i64;
          }
          ++v15;
          --v11;
        }
        while ( v11 );
      }
      if ( this->ResourceCount )
      {
        do
        {
          v16 = v13;
          v17 = &this->pResources[v16];
          v18 = &v14[v16];
          if ( v17->pResource.pObject )
            Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v17->pResource.pObject);
          if ( v18->pResource.pObject )
            Scaleform::GFx::Resource::Release(v18->pResource.pObject);
          ++v13;
          v18->pResource.pObject = v17->pResource.pObject;
          v18->pBinding = v17->pBinding;
        }
        while ( v13 < this->ResourceCount );
        v6 = index;
      }
      ResourceCount = this->ResourceCount;
      pResources = this->pResources;
      v21 = ResourceCount;
      if ( ResourceCount )
      {
        do
        {
          if ( pResources->pResource.pObject )
            Scaleform::GFx::Resource::Release(pResources->pResource.pObject);
          ++pResources;
          --v21;
        }
        while ( v21 );
      }
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pResources);
      this->pResources = v14;
    }
    else
    {
      this->pResources = (Scaleform::GFx::ResourceBindData *volatile)v10->Alloc(pHeap, v9, 0i64);
      v12 = this->pResources;
      if ( v7 )
      {
        do
        {
          if ( v12 )
          {
            v12->pResource.pObject = 0i64;
            v12->pBinding = 0i64;
          }
          ++v12;
          --v11;
        }
        while ( v11 );
      }
    }
    this->ResourceCount = v7;
  }
  v22 = &this->pResources[v6];
  if ( bd->pResource.pObject )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)bd->pResource.pObject);
  if ( v22->pResource.pObject )
    Scaleform::GFx::Resource::Release(v22->pResource.pObject);
  v22->pResource.pObject = bd->pResource.pObject;
  v22->pBinding = bd->pBinding;
  Scaleform::Lock::Unlock(p_ResourceLock);
}

