#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stackmempool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_msgformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_locale.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

void Scaleform::GFx::Resource::AddRef(); // 0x14027E270
void Scaleform::GFx::Resource::Release(); // 0x140321800
bool Scaleform::GFx::Resource::AddRef_NotZero(); // 0x1403213F0
Scaleform::GFx::ResourceLib::ResourceLib(bool debug); // 0x140320B30
Scaleform::GFx::ResourceLib::~ResourceLib(); // 0x140320D50
Scaleform::GFx::ResourceLib::ResourceSlot::ResourceSlot(Scaleform::GFx::ResourceWeakLib * plib, const Scaleform::GFx::ResourceKey & key); // 0x140320BB0
Scaleform::GFx::ResourceLib::ResourceSlot::~ResourceSlot(); // 0x140320DE0
const char * Scaleform::GFx::ResourceLib::ResourceSlot::GetError(); // 0x1403216F0
void Scaleform::GFx::ResourceLib::ResourceSlot::Resolve(Scaleform::GFx::Resource * pres); // 0x140321950
void Scaleform::GFx::ResourceLib::ResourceSlot::CancelResolve(const char * perrorMessage); // 0x1403215C0
Scaleform::GFx::Resource * Scaleform::GFx::ResourceLib::BindHandle::WaitForResolve(); // 0x140321C40
Scaleform::GFx::ResourceWeakLib::ResourceWeakLib(Scaleform::GFx::ResourceLib * pstrongLib); // 0x140320C80
Scaleform::GFx::ResourceWeakLib::~ResourceWeakLib(); // 0x140320EE0
Scaleform::GFx::ResourceLib::ResolveState Scaleform::GFx::ResourceWeakLib::BindResourceKey(Scaleform::GFx::ResourceLib::BindHandle * phandle, const Scaleform::GFx::ResourceKey & k); // 0x140321430
void Scaleform::GFx::ResourceWeakLib::PinResource(Scaleform::GFx::Resource * pres); // 0x140321740
void Scaleform::GFx::ResourceWeakLib::UnpinResource(Scaleform::GFx::Resource * pres); // 0x140321BB0
void Scaleform::GFx::ResourceWeakLib::UnpinAll(); // 0x140321A30
void Scaleform::GFx::ResourceWeakLib::RemoveResourceOnRelease(Scaleform::GFx::Resource * pres); // 0x140321850
Scaleform::GFx::ResourceFileInfo::ResourceFileInfo(); // 0x140320A60
unsigned long long Scaleform::GFx::ResourceFileInfo::GetHashCode(); // 0x140321700
Scaleform::GFx::ResourceKey::ResourceKey(); // 0x14005DEC0
Scaleform::GFx::ResourceKey::ResourceKey(Scaleform::GFx::ResourceKey::KeyInterface * pki, void * hk); // 0x140320AE0
Scaleform::GFx::ResourceKey::ResourceKey(const Scaleform::GFx::ResourceKey & src); // 0x140320AA0
Scaleform::GFx::ResourceKey & Scaleform::GFx::ResourceKey::operator=(const Scaleform::GFx::ResourceKey & src); // 0x140321040char __fastcall Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::RemoveAlt<Scaleform::GFx::Resource *>(
        Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> > *this,
        Scaleform::GFx::Resource *const *key)
{
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *pTable; // r9
  unsigned __int64 SizeMask; // r10
  unsigned __int64 EntryCount; // r8
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v7; // rax
  __int64 v8; // r10
  unsigned __int64 v9; // rbx
  unsigned __int64 v10; // rcx
  unsigned __int64 v11; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v12; // rdx

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  SizeMask = pTable->SizeMask;
  EntryCount = SizeMask & ((__int64)*key ^ ((unsigned __int64)*key >> 6));
  v7 = &pTable[EntryCount + 1];
  if ( v7->EntryCount == -2i64 || (SizeMask & (v7->SizeMask ^ (v7->SizeMask >> 6))) != EntryCount )
    return 0;
  v8 = -1i64;
  v9 = EntryCount;
  while ( 1 )
  {
    v10 = v7->SizeMask;
    if ( (pTable->SizeMask & (v10 ^ (v10 >> 6))) == v9 && (Scaleform::GFx::Resource *const)v10 == *key )
      break;
    v8 = EntryCount;
    EntryCount = v7->EntryCount;
    if ( v7->EntryCount == -1i64 )
      return 0;
    v7 = &pTable[EntryCount + 1];
  }
  if ( v9 == EntryCount )
  {
    v11 = v7->EntryCount;
    if ( v7->EntryCount != -1i64 )
    {
      v7->EntryCount = -2i64;
      v12 = &pTable[v11 + 1];
      v7->EntryCount = v12->EntryCount;
      v7->SizeMask = v12->SizeMask;
      v12->EntryCount = -2i64;
      --this->pTable->EntryCount;
      return 1;
    }
  }
  else
  {
    pTable[v8 + 1].EntryCount = v7->EntryCount;
  }
  v7->EntryCount = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

char __fastcall Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::RemoveAlt<Scaleform::GFx::ResourceKey>(
        Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > *this,
        const Scaleform::GFx::ResourceKey *key)
{
  unsigned __int64 v5; // rax
  unsigned __int64 EntryCount; // rdi
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *v7; // rbx
  __int64 v8; // rbp
  unsigned __int64 v9; // r14
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *v10; // rcx

  if ( !this->pTable )
    return 0;
  if ( key->pKeyInterface )
    v5 = key->pKeyInterface->GetHashCode(key->pKeyInterface, key->hKeyData);
  else
    v5 = 0i64;
  EntryCount = v5 & this->pTable->SizeMask;
  v7 = &this->pTable[2 * EntryCount + 1];
  if ( v7->EntryCount == -2i64 || v7->SizeMask != EntryCount )
    return 0;
  v8 = -1i64;
  v9 = v5 & this->pTable->SizeMask;
  while ( v7->SizeMask != v9
       || !Scaleform::GFx::ResourceWeakLib::ResourceNode::operator==(
             (Scaleform::GFx::ResourceWeakLib::ResourceNode *)&v7[1],
             key) )
  {
    v8 = EntryCount;
    EntryCount = v7->EntryCount;
    if ( v7->EntryCount == -1i64 )
      return 0;
    v7 = &this->pTable[2 * EntryCount + 1];
  }
  if ( v9 == EntryCount )
  {
    if ( v7->EntryCount != -1i64 )
    {
      v10 = &this->pTable[2 * v7->EntryCount];
      v7->EntryCount = -2i64;
      v7->EntryCount = v10[1].EntryCount;
      v7->SizeMask = v10[1].SizeMask;
      v7[1] = v10[2];
      v7 = v10 + 1;
    }
  }
  else
  {
    this->pTable[2 * v8 + 1].EntryCount = v7->EntryCount;
  }
  v7->EntryCount = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::add<Scaleform::GFx::Resource *>(
        Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> > *this,
        void *pmemAddr,
        Scaleform::GFx::Resource *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v11; // r9
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v12; // r8
  unsigned __int64 EntryCount; // rdi
  Scaleform::GFx::Resource *v14; // rax
  unsigned __int64 v15; // r11
  __int64 v16; // rdx
  unsigned __int64 v17; // rax
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v18; // r10
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *i; // rax

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
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[v10 + 1];
  EntryCount = v12->EntryCount;
  if ( v12->EntryCount == -2i64 )
  {
    v12->EntryCount = -1i64;
    v14 = *key;
  }
  else
  {
    v15 = v11->SizeMask;
    v16 = v10;
    do
      v16 = v15 & (v16 + 1);
    while ( v11[v16 + 1].EntryCount != -2i64 );
    v17 = v12->SizeMask;
    v18 = &v11[v16 + 1];
    if ( (v15 & (v17 ^ (v17 >> 6))) == v10 )
    {
      if ( v18 )
      {
        v18->EntryCount = EntryCount;
        v18->SizeMask = v12->SizeMask;
      }
      v14 = *key;
      v12->EntryCount = v16;
    }
    else
    {
      for ( i = &v11[(v15 & (v17 ^ (v17 >> 6))) + 1]; i->EntryCount != v10; i = &v11[i->EntryCount + 1] )
        ;
      if ( v18 )
      {
        v18->EntryCount = EntryCount;
        v18->SizeMask = v12->SizeMask;
      }
      i->EntryCount = v16;
      v14 = *key;
      v12->EntryCount = -1i64;
    }
  }
  v12->SizeMask = (unsigned __int64)v14;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::add<Scaleform::GFx::ResourceWeakLib::ResourceNode>(
        Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > *this,
        void *pmemAddr,
        const Scaleform::GFx::ResourceWeakLib::ResourceNode *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *v11; // r8
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *v12; // rdx
  unsigned __int64 EntryCount; // r11
  Scaleform::GFx::ResourceWeakLib::ResourceNode v14; // xmm0
  __int64 v15; // rcx
  __int64 v16; // r10
  unsigned __int64 v17; // rax
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *i; // r9

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
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[2 * v10];
  EntryCount = v12[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v12[1].EntryCount = -1i64;
    v12[1].SizeMask = 0i64;
    v14 = *key;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( v11[2 * v15 + 1].EntryCount != -2i64 );
    v16 = (__int64)&v11[2 * v15 + 1];
    v17 = v12[1].SizeMask;
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *(_QWORD *)v16 = EntryCount;
        *(_QWORD *)(v16 + 8) = v12[1].SizeMask;
        *(Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *)(v16 + 16) = v12[2];
      }
      v14 = *key;
      v12[1].EntryCount = v15;
    }
    else
    {
      for ( i = &v11[2 * v17 + 1]; i->EntryCount != v10; i = &v11[2 * i->EntryCount + 1] )
        ;
      if ( v16 )
      {
        *(_QWORD *)v16 = EntryCount;
        *(_QWORD *)(v16 + 8) = v12[1].SizeMask;
        *(Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *)(v16 + 16) = v12[2];
      }
      i->EntryCount = v15;
      v14 = *key;
      v12[1].EntryCount = -1i64;
    }
  }
  v12[1].SizeMask = v10;
  v12[2] = (Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType)v14;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::findIndexCore<Scaleform::GFx::Resource *>(
        Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> > *this,
        Scaleform::GFx::Resource *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *pTable; // r10
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v4; // rax
  unsigned __int64 EntryCount; // r9

  pTable = this->pTable;
  v4 = &this->pTable[hashValue + 1];
  EntryCount = hashValue;
  if ( v4->EntryCount == -2i64 || (pTable->SizeMask & (v4->SizeMask ^ (v4->SizeMask >> 6))) != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( (pTable->SizeMask & (v4->SizeMask ^ (v4->SizeMask >> 6))) == hashValue
      && (Scaleform::GFx::Resource *const)v4->SizeMask == *key )
    {
      return EntryCount;
    }
    EntryCount = v4->EntryCount;
    if ( v4->EntryCount == -1i64 )
      break;
    v4 = &pTable[EntryCount + 1];
  }
  return -1i64;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::findIndexCore<Scaleform::GFx::ResourceKey>(
        Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > *this,
        const Scaleform::GFx::ResourceKey *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *v3; // rbx
  unsigned __int64 EntryCount; // rsi
  _QWORD *v8; // rdx
  char v9; // di
  unsigned __int64 SizeMask; // rdx
  __int64 v11; // rcx
  __int64 v13[5]; // [rsp+20h] [rbp-28h] BYREF

  v3 = &this->pTable[2 * hashValue + 1];
  EntryCount = hashValue;
  if ( v3->EntryCount == -2i64 || v3->SizeMask != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v3->SizeMask == hashValue )
    {
      if ( LODWORD(v3[1].EntryCount) )
      {
        SizeMask = v3[1].SizeMask;
        v11 = *(_QWORD *)(SizeMask + 40);
        if ( v11 && key->pKeyInterface )
          v9 = (*(__int64 (__fastcall **)(__int64, _QWORD, const Scaleform::GFx::ResourceKey *))(*(_QWORD *)v11 + 40i64))(
                 v11,
                 *(_QWORD *)(SizeMask + 48),
                 key);
        else
          v9 = 0;
      }
      else
      {
        v8 = (_QWORD *)(*(__int64 (__fastcall **)(unsigned __int64, __int64 *))(*(_QWORD *)v3[1].SizeMask + 8i64))(
                         v3[1].SizeMask,
                         v13);
        if ( *v8 && key->pKeyInterface )
          v9 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const Scaleform::GFx::ResourceKey *))(*(_QWORD *)*v8 + 40i64))(
                 *v8,
                 v8[1],
                 key);
        else
          v9 = 0;
        if ( v13[0] )
          (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v13[0] + 16i64))(v13[0], v13[1]);
      }
      if ( v9 )
        return EntryCount;
    }
    EntryCount = v3->EntryCount;
    if ( v3->EntryCount == -1i64 )
      break;
    v3 = &this->pTable[2 * EntryCount + 1];
  }
  return -1i64;
}

void __fastcall Scaleform::GFx::ResourceFileInfo::ResourceFileInfo(Scaleform::GFx::ResourceFileInfo *this)
{
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::ResourceFileInfo_vtbl *)&Scaleform::GFx::ResourceFileInfo::`vftable';
  Scaleform::String::String(&this->FileName);
  this->Format = File_Unknown;
  this->pExporterInfo = 0i64;
}

void __fastcall Scaleform::GFx::ResourceKey::ResourceKey(
        Scaleform::GFx::ResourceKey *this,
        const Scaleform::GFx::ResourceKey *src)
{
  if ( src->pKeyInterface )
    src->pKeyInterface->AddRef(src->pKeyInterface, src->hKeyData);
  this->pKeyInterface = src->pKeyInterface;
  this->hKeyData = src->hKeyData;
}

void __fastcall Scaleform::GFx::ResourceKey::ResourceKey(
        Scaleform::GFx::ResourceKey *this,
        Scaleform::GFx::ResourceKey::KeyInterface *pki,
        void *hk)
{
  if ( pki )
    pki->AddRef(pki, hk);
  this->hKeyData = hk;
  this->pKeyInterface = pki;
}

void __fastcall AgPointer<AgController>::AgPointer<AgController>(AgPointer<AgMemoryStream> *this)
{
  this->m_ref = 0i64;
  this->m_ptr = 0i64;
}

void __fastcall Scaleform::GFx::ResourceLib::ResourceLib(Scaleform::GFx::ResourceLib *this, bool debug)
{
  Scaleform::GFx::ResourceWeakLib *v3; // rax
  Scaleform::GFx::ResourceWeakLib *v4; // rax

  this->__vftable = (Scaleform::GFx::ResourceLib_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::ResourceLib_vtbl *)&Scaleform::GFx::ResourceLib::`vftable';
  this->PinSet.pTable = 0i64;
  this->DebugFlag = debug;
  v3 = (Scaleform::GFx::ResourceWeakLib *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                            Scaleform::Memory::pGlobalHeap,
                                            88i64);
  if ( v3 )
  {
    Scaleform::GFx::ResourceWeakLib::ResourceWeakLib(v3, this);
    this->pWeakLib = v4;
  }
  else
  {
    this->pWeakLib = 0i64;
  }
}

void __fastcall Scaleform::GFx::ResourceLib::ResourceSlot::ResourceSlot(
        Scaleform::GFx::ResourceLib::ResourceSlot *this,
        Scaleform::GFx::ResourceWeakLib *plib,
        const Scaleform::GFx::ResourceKey *key)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::GFx::ResourceKey::KeyInterface *pKeyInterface; // rcx

  this->__vftable = (Scaleform::GFx::ResourceLib::ResourceSlot_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::ResourceLib::ResourceSlot_vtbl *)&Scaleform::GFx::ResourceLib::ResourceSlot::`vftable';
  this->pLib.pObject = 0i64;
  this->Key.pKeyInterface = 0i64;
  this->Key.hKeyData = 0i64;
  Scaleform::String::String(&this->ErrorMessage);
  Scaleform::Event::Event(&this->ResolveComplete, 0, 0);
  if ( plib )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)plib);
  pObject = (Scaleform::RefCountVImpl *)this->pLib.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pLib.pObject = plib;
  this->State = Resolve_InProgress;
  this->pResource = 0i64;
  if ( key->pKeyInterface )
    key->pKeyInterface->AddRef(key->pKeyInterface, key->hKeyData);
  pKeyInterface = this->Key.pKeyInterface;
  if ( pKeyInterface )
    pKeyInterface->Release(pKeyInterface, this->Key.hKeyData);
  this->Key.pKeyInterface = key->pKeyInterface;
  this->Key.hKeyData = key->hKeyData;
}

void __fastcall Scaleform::GFx::ResourceWeakLib::ResourceWeakLib(
        Scaleform::GFx::ResourceWeakLib *this,
        Scaleform::GFx::ResourceLib *pstrongLib)
{
  int v4; // eax
  Scaleform::MemoryHeap *v5; // rax
  Scaleform::MemoryHeap *pObject; // rcx
  Scaleform::MemoryHeap *v7; // rdi
  int v8; // [rsp+20h] [rbp-48h] BYREF
  __int64 v9; // [rsp+28h] [rbp-40h]
  __int64 v10; // [rsp+30h] [rbp-38h]
  __int64 v11; // [rsp+38h] [rbp-30h]
  __int64 v12; // [rsp+40h] [rbp-28h]
  __int64 v13; // [rsp+48h] [rbp-20h]
  __int64 v14; // [rsp+50h] [rbp-18h]
  __int64 v15; // [rsp+58h] [rbp-10h]

  this->__vftable = (Scaleform::GFx::ResourceWeakLib_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::GFx::ResourceWeakLib_vtbl *)&Scaleform::GFx::ResourceWeakLib::`vftable';
  Scaleform::Lock::Lock(&this->ResourceLock, 0);
  this->Resources.pTable = 0i64;
  this->pImageHeap.pObject = 0i64;
  this->pStrongLib = pstrongLib;
  if ( !pstrongLib || (v4 = 4096, !pstrongLib->DebugFlag) )
    v4 = 0;
  v15 = 0i64;
  v11 = 0i64;
  v13 = 0i64;
  v8 = v4 | 4;
  v9 = 64i64;
  v10 = 4096i64;
  v12 = -1i64;
  v14 = 5i64;
  v5 = Scaleform::Memory::pGlobalHeap->CreateHeap(Scaleform::Memory::pGlobalHeap, "_ResourceLib_Images", &v8);
  pObject = this->pImageHeap.pObject;
  v7 = v5;
  if ( pObject )
    pObject->Release(pObject);
  this->pImageHeap.pObject = v7;
}

void __fastcall Scaleform::GFx::ResourceLib::~ResourceLib(Scaleform::GFx::ResourceLib *this)
{
  Scaleform::GFx::ResourceWeakLib *pWeakLib; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *pTable; // rax
  __int64 v4; // rcx
  __int64 v5; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v6; // rax

  this->__vftable = (Scaleform::GFx::ResourceLib_vtbl *)&Scaleform::GFx::ResourceLib::`vftable';
  pWeakLib = this->pWeakLib;
  if ( pWeakLib )
  {
    Scaleform::GFx::ResourceWeakLib::UnpinAll(pWeakLib);
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->pWeakLib);
  }
  pTable = this->PinSet.pTable;
  if ( pTable )
  {
    v4 = 0i64;
    v5 = pTable->SizeMask + 1;
    do
    {
      v6 = this->PinSet.pTable;
      if ( v6[v4 + 1].EntryCount != -2i64 )
        v6[v4 + 1].EntryCount = -2i64;
      ++v4;
      --v5;
    }
    while ( v5 );
    if ( this->PinSet.pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->PinSet.pTable = 0i64;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::ResourceLib::ResourceSlot::~ResourceSlot(
        Scaleform::GFx::ResourceLib::ResourceSlot *this)
{
  Scaleform::GFx::ResourceWeakLib *pObject; // rbx
  Scaleform::GFx::Resource *volatile pResource; // rsi
  Scaleform::GFx::ResourceLibBase *pLib; // rcx
  volatile int *v5; // rbx
  Scaleform::GFx::ResourceKey::KeyInterface *pKeyInterface; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  pObject = this->pLib.pObject;
  this->__vftable = (Scaleform::GFx::ResourceLib::ResourceSlot_vtbl *)&Scaleform::GFx::ResourceLib::ResourceSlot::`vftable';
  Scaleform::Lock::DoLock(&pObject->ResourceLock);
  if ( this->State )
  {
    if ( this->pResource )
    {
      pResource = this->pResource;
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pResource->RefCount.Value, -1) == 1 )
      {
        pLib = pResource->pLib;
        if ( pLib )
        {
          pLib->RemoveResourceOnRelease(pLib, pResource);
          pResource->pLib = 0i64;
        }
        ((void (__fastcall *)(Scaleform::GFx::Resource *volatile, __int64))pResource->~Resource)(pResource, 1i64);
      }
    }
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::RemoveAlt<Scaleform::GFx::ResourceKey>(
      &this->pLib.pObject->Resources,
      &this->Key);
  }
  Scaleform::Lock::Unlock(&pObject->ResourceLock);
  Scaleform::Event::~Event(&this->ResolveComplete);
  v5 = (volatile int *)(this->ErrorMessage.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
  pKeyInterface = this->Key.pKeyInterface;
  if ( pKeyInterface )
    pKeyInterface->Release(pKeyInterface, this->Key.hKeyData);
  v7 = (Scaleform::RefCountVImpl *)this->pLib.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::GFx::ResourceWeakLib::~ResourceWeakLib(Scaleform::GFx::ResourceWeakLib *this)
{
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *pTable; // rcx
  Scaleform::HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > *p_Resources; // rdi
  __m128i v4; // xmm0
  unsigned __int64 SizeMask; // rdx
  unsigned __int64 v6; // rax
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *v7; // rcx
  __int64 v8; // rcx
  __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  _QWORD *v11; // rax
  Scaleform::MemoryHeap *pObject; // rcx
  __int64 v13; // rcx
  __int64 v14; // rdx
  __m128i v15; // [rsp+20h] [rbp-18h] BYREF

  this->__vftable = (Scaleform::GFx::ResourceWeakLib_vtbl *)&Scaleform::GFx::ResourceWeakLib::`vftable';
  Scaleform::Lock::DoLock(&this->ResourceLock);
  pTable = this->Resources.pTable;
  p_Resources = &this->Resources;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    v6 = 0i64;
    v7 = pTable + 1;
    do
    {
      if ( v7->EntryCount != -2i64 )
        break;
      ++v6;
      v7 += 2;
    }
    while ( v6 <= SizeMask );
    v15.m128i_i64[0] = (__int64)&this->Resources;
    v15.m128i_i64[1] = v6;
    v4 = _mm_load_si128(&v15);
  }
  else
  {
    v4 = 0i64;
  }
  v15 = v4;
  v8 = v4.m128i_i64[1];
  while ( v4.m128i_i64[0] )
  {
    v9 = *(_QWORD *)v4.m128i_i64[0];
    if ( !*(_QWORD *)v4.m128i_i64[0] || v8 > *(_QWORD *)(v9 + 8) )
      break;
    *(_QWORD *)(*(_QWORD *)(32 * v8 + v9 + 40) + 16i64) = 0i64;
    v10 = *(_QWORD *)(*(_QWORD *)v4.m128i_i64[0] + 8i64);
    if ( v8 <= (__int64)v10 && ++v8 <= v10 )
    {
      v11 = (_QWORD *)(*(_QWORD *)v4.m128i_i64[0] + 32 * v8 + 16);
      do
      {
        if ( *v11 != -2i64 )
          break;
        ++v8;
        v11 += 4;
      }
      while ( v8 <= v10 );
    }
  }
  Scaleform::Lock::Unlock(&this->ResourceLock);
  pObject = this->pImageHeap.pObject;
  if ( pObject )
    pObject->Release(pObject);
  if ( p_Resources->pTable )
  {
    v13 = 0i64;
    v14 = p_Resources->pTable->SizeMask + 1;
    do
    {
      if ( p_Resources->pTable[v13 + 1].EntryCount != -2i64 )
        p_Resources->pTable[v13 + 1].EntryCount = -2i64;
      v13 += 2i64;
      --v14;
    }
    while ( v14 );
    if ( p_Resources->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    p_Resources->pTable = 0i64;
  }
  Scaleform::Lock::~Lock(&this->ResourceLock);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

Scaleform::GFx::ResourceKey *__fastcall Scaleform::GFx::ResourceKey::operator=(
        Scaleform::GFx::ResourceKey *this,
        const Scaleform::GFx::ResourceKey *src)
{
  if ( src->pKeyInterface )
    src->pKeyInterface->AddRef(src->pKeyInterface, src->hKeyData);
  if ( this->pKeyInterface )
    this->pKeyInterface->Release(this->pKeyInterface, this->hKeyData);
  this->pKeyInterface = src->pKeyInterface;
  this->hKeyData = src->hKeyData;
  return this;
}

char __fastcall Scaleform::GFx::ResourceWeakLib::ResourceNode::operator==(
        Scaleform::GFx::ResourceWeakLib::ResourceNode *this,
        const Scaleform::GFx::ResourceKey *k)
{
  _QWORD *v3; // rax
  char v4; // bl
  Scaleform::GFx::ResourceLib::ResourceSlot *pResolver; // rdx
  Scaleform::GFx::ResourceKey::KeyInterface *pKeyInterface; // rcx
  __int64 v8[3]; // [rsp+20h] [rbp-18h] BYREF

  if ( this->Type )
  {
    pResolver = this->pResolver;
    pKeyInterface = pResolver->Key.pKeyInterface;
    return pKeyInterface && k->pKeyInterface && pKeyInterface->KeyEquals(pKeyInterface, pResolver->Key.hKeyData, k);
  }
  else
  {
    v3 = (_QWORD *)((__int64 (__fastcall *)(Scaleform::GFx::ResourceLib::ResourceSlot *, __int64 *))this->pResolver->__vftable[1].~RefCountImplCore)(
                     this->pResolver,
                     v8);
    if ( *v3 && k->pKeyInterface )
      v4 = (*(__int64 (__fastcall **)(_QWORD, _QWORD, const Scaleform::GFx::ResourceKey *))(*(_QWORD *)*v3 + 40i64))(
             *v3,
             v3[1],
             k);
    else
      v4 = 0;
    if ( v8[0] )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8[0] + 16i64))(v8[0], v8[1]);
    return v4;
  }
}

__int64 __fastcall Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp::operator()(
        Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp *this,
        const Scaleform::GFx::ResourceWeakLib::ResourceNode *node)
{
  __int64 hKeyData; // rbp
  char v3; // bl
  __int64 v4; // rsi
  __int64 *v5; // rdi
  Scaleform::GFx::ResourceLib::ResourceSlot *pResolver; // rbx
  Scaleform::GFx::ResourceKey::KeyInterface *pKeyInterface; // rcx
  __int64 v8; // r14
  __int64 v9; // rdi
  __int64 v10; // rbx
  __int64 v12; // [rsp+20h] [rbp-38h] BYREF
  __int64 v13; // [rsp+28h] [rbp-30h]
  __int64 v14[5]; // [rsp+30h] [rbp-28h] BYREF

  if ( node->Type )
  {
    pResolver = node->pResolver;
    pKeyInterface = pResolver->Key.pKeyInterface;
    if ( pKeyInterface )
      pKeyInterface->AddRef(pKeyInterface, pResolver->Key.hKeyData);
    v4 = (__int64)pResolver->Key.pKeyInterface;
    v5 = &v12;
    hKeyData = (__int64)pResolver->Key.hKeyData;
    v3 = 2;
    v12 = v4;
    v13 = hKeyData;
  }
  else
  {
    hKeyData = v13;
    v3 = 1;
    v4 = v12;
    v5 = (__int64 *)((__int64 (__fastcall *)(Scaleform::GFx::ResourceLib::ResourceSlot *, __int64 *))node->pResolver->__vftable[1].~RefCountImplCore)(
                      node->pResolver,
                      v14);
  }
  if ( *v5 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)*v5 + 8i64))(*v5, v5[1]);
  v8 = *v5;
  v9 = v5[1];
  if ( (v3 & 2) != 0 )
  {
    v3 &= ~2u;
    if ( v4 )
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 16i64))(v4, hKeyData);
  }
  if ( (v3 & 1) != 0 && v14[0] )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v14[0] + 16i64))(v14[0], v14[1]);
  if ( !v8 )
    return 0i64;
  v10 = (*(__int64 (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 32i64))(v8, v9);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v8 + 16i64))(v8, v9);
  return v10;
}

void __fastcall Scaleform::Render::RenderBuffer::AddRef(Scaleform::RefCountVImpl *this)
{
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount, 1);
}

char __fastcall Scaleform::GFx::Resource::AddRef_NotZero(Scaleform::GFx::Resource *this)
{
  int Value; // eax
  Scaleform::AtomicInt<long> *p_RefCount; // rbx

  Value = this->RefCount.Value;
  p_RefCount = &this->RefCount;
  if ( !Value )
    return 0;
  while ( !Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(&p_RefCount->Value, Value, Value + 1) )
  {
    Value = p_RefCount->Value;
    if ( !p_RefCount->Value )
      return 0;
  }
  return 1;
}

__int64 __fastcall Scaleform::GFx::ResourceWeakLib::BindResourceKey(
        Scaleform::GFx::ResourceWeakLib *this,
        Scaleform::GFx::ResourceLib::BindHandle *phandle,
        const Scaleform::GFx::ResourceKey *k)
{
  unsigned __int64 pKeyInterface; // rcx
  signed __int64 v7; // rax
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *v8; // rsi
  unsigned __int64 v9; // rdi
  int v10; // eax
  Scaleform::GFx::ResourceLib::ResourceSlot *v11; // rax
  Scaleform::GFx::ResourceLib::ResourceSlot *v12; // rax
  Scaleform::GFx::Resource *v13; // rdi
  __int64 v14; // rax
  Scaleform::GFx::ResourceLib::ResolveState State; // edi
  Scaleform::GFx::Resource *SizeMask; // rcx
  Scaleform::GFx::ResourceWeakLib::ResourceNode node; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp v19; // [rsp+60h] [rbp+8h] BYREF

  Scaleform::Lock::DoLock(&this->ResourceLock);
  if ( !this->Resources.pTable )
    goto LABEL_11;
  pKeyInterface = (unsigned __int64)k->pKeyInterface;
  if ( k->pKeyInterface )
    pKeyInterface = (*(__int64 (__fastcall **)(unsigned __int64, void *))(*(_QWORD *)pKeyInterface + 32i64))(
                      pKeyInterface,
                      k->hKeyData);
  v7 = Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::findIndexCore<Scaleform::GFx::ResourceKey>(
         &this->Resources,
         k,
         pKeyInterface & this->Resources.pTable->SizeMask);
  if ( v7 < 0 )
    goto LABEL_11;
  v8 = &this->Resources.pTable[2 * v7 + 2];
  if ( !v8 )
    goto LABEL_11;
  if ( LODWORD(v8->EntryCount) )
  {
    SizeMask = (Scaleform::GFx::Resource *)v8->SizeMask;
    phandle->pResource = SizeMask;
    phandle->State = RS_WaitingResolve;
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)SizeMask);
    State = phandle->State;
    goto LABEL_17;
  }
  v9 = v8->SizeMask;
  v10 = *(_DWORD *)(v9 + 8);
  if ( !v10 )
  {
LABEL_10:
    Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::RemoveAlt<Scaleform::GFx::ResourceKey>(
      &this->Resources,
      k);
LABEL_11:
    v11 = (Scaleform::GFx::ResourceLib::ResourceSlot *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         152i64,
                                                         0i64);
    if ( v11
      && (Scaleform::GFx::ResourceLib::ResourceSlot::ResourceSlot(v11, this, k),
          (v13 = (Scaleform::GFx::Resource *)v12) != 0i64) )
    {
      node.Type = Node_Resolver;
      node.pResolver = v12;
      v14 = Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp::operator()(&v19, &node);
      Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::add<Scaleform::GFx::ResourceWeakLib::ResourceNode>(
        &this->Resources,
        &this->Resources,
        &node,
        v14);
      phandle->pResource = v13;
      State = RS_NeedsResolve;
      phandle->State = RS_NeedsResolve;
    }
    else
    {
      State = RS_Error;
    }
    goto LABEL_17;
  }
  while ( !Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync((volatile int *)(v9 + 8), v10, v10 + 1) )
  {
    v10 = *(_DWORD *)(v9 + 8);
    if ( !v10 )
      goto LABEL_10;
  }
  phandle->pResource = (Scaleform::GFx::Resource *)v8->SizeMask;
  phandle->State = RS_Available;
  State = phandle->State;
LABEL_17:
  Scaleform::Lock::Unlock(&this->ResourceLock);
  return (unsigned int)State;
}

void __fastcall Scaleform::GFx::ResourceLib::ResourceSlot::CancelResolve(
        Scaleform::GFx::ResourceLib::ResourceSlot *this,
        const char *perrorMessage)
{
  Scaleform::GFx::ResourceWeakLib *pObject; // rbx

  pObject = this->pLib.pObject;
  Scaleform::Lock::DoLock(&pObject->ResourceLock);
  this->State = Resolve_Fail;
  Scaleform::String::operator=(&this->ErrorMessage, perrorMessage);
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::RemoveAlt<Scaleform::GFx::ResourceKey>(
    &this->pLib.pObject->Resources,
    &this->Key);
  Scaleform::Event::SetEvent(&this->ResolveComplete);
  Scaleform::Lock::Unlock(&pObject->ResourceLock);
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::Clear(
        Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
        this->pTable[v2 + 1].EntryCount = -2i64;
      ++v2;
      --v3;
    }
    while ( v3 );
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
        this->pTable[v2 + 1].EntryCount = -2i64;
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pTable = 0i64;
  }
}

const char *__fastcall Scaleform::GFx::ResourceLib::ResourceSlot::GetError(
        Scaleform::GFx::ResourceLib::ResourceSlot *this)
{
  return (const char *)((this->ErrorMessage.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
}

unsigned __int64 __fastcall Scaleform::GFx::ResourceFileInfo::GetHashCode(Scaleform::GFx::ResourceFileInfo *this)
{
  return (int)this->Format ^ Scaleform::String::BernsteinHashFunction(
                               (const void *)((this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
                               *(_QWORD *)(this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64,
                               0x1505ui64);
}

void __fastcall Scaleform::GFx::ResourceWeakLib::PinResource(
        Scaleform::GFx::ResourceWeakLib *this,
        Scaleform::GFx::Resource *pres)
{
  Scaleform::Lock *p_ResourceLock; // rbx
  Scaleform::GFx::ResourceLib *pStrongLib; // r14
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *pTable; // rdi
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> > *p_PinSet; // r14
  signed __int64 v8; // rax
  Scaleform::GFx::Resource *key; // [rsp+38h] [rbp+10h] BYREF

  key = pres;
  p_ResourceLock = &this->ResourceLock;
  Scaleform::Lock::DoLock(&this->ResourceLock);
  pStrongLib = this->pStrongLib;
  if ( pStrongLib )
  {
    pTable = pStrongLib->PinSet.pTable;
    p_PinSet = &pStrongLib->PinSet;
    if ( !pTable
      || (v8 = Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::findIndexCore<Scaleform::GFx::Resource *>(
                 p_PinSet,
                 &key,
                 pTable->SizeMask & ((unsigned __int64)pres ^ ((unsigned __int64)pres >> 6))),
          v8 < 0)
      || !&pTable[v8 + 1].SizeMask )
    {
      Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::add<Scaleform::GFx::Resource *>(
        p_PinSet,
        p_PinSet,
        &key,
        (unsigned __int64)pres ^ ((unsigned __int64)pres >> 6));
      Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pres->RefCount.Value, 1);
    }
  }
  Scaleform::Lock::Unlock(p_ResourceLock);
}

void __fastcall Scaleform::GFx::Resource::Release(Scaleform::GFx::Resource *this)
{
  Scaleform::GFx::ResourceLibBase *pLib; // rcx

  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount.Value, -1) == 1 )
  {
    pLib = this->pLib;
    if ( pLib )
    {
      pLib->RemoveResourceOnRelease(pLib, this);
      this->pLib = 0i64;
    }
    ((void (__fastcall *)(Scaleform::GFx::Resource *, __int64))this->~Resource)(this, 1i64);
  }
}

void __fastcall Scaleform::GFx::ResourceWeakLib::RemoveResourceOnRelease(
        Scaleform::GFx::ResourceWeakLib *this,
        Scaleform::GFx::Resource *pres)
{
  Scaleform::Lock *p_ResourceLock; // rbx
  Scaleform::HashSet<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > *p_Resources; // r14
  Scaleform::GFx::ResourceKey *v5; // rax
  __int64 v6; // rdi
  const Scaleform::GFx::ResourceKey *v7; // r15
  __int64 v8; // rcx
  signed __int64 v9; // rax
  const Scaleform::GFx::ResourceKey *v10; // rax
  __int64 v11; // [rsp+20h] [rbp-18h] BYREF
  __int64 v12; // [rsp+28h] [rbp-10h]

  p_ResourceLock = &this->ResourceLock;
  p_Resources = &this->Resources;
  Scaleform::Lock::DoLock(&this->ResourceLock);
  v5 = pres->GetKey(pres, &v11);
  v6 = 0i64;
  v7 = v5;
  if ( p_Resources->pTable )
  {
    v8 = v5->pKeyInterface ? v5->pKeyInterface->GetHashCode(v5->pKeyInterface, v5->hKeyData) : 0i64;
    v9 = Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::findIndexCore<Scaleform::GFx::ResourceKey>(
           p_Resources,
           v7,
           v8 & p_Resources->pTable->SizeMask);
    if ( v9 >= 0 )
      v6 = (__int64)&p_Resources->pTable[2 * v9 + 2];
  }
  if ( v11 )
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16i64))(v11, v12);
  if ( v6 )
  {
    if ( !*(_DWORD *)v6 && *(Scaleform::GFx::Resource **)(v6 + 8) == pres )
    {
      v10 = pres->GetKey(pres, &v11);
      Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::RemoveAlt<Scaleform::GFx::ResourceKey>(
        p_Resources,
        v10);
      if ( v11 )
        (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 16i64))(v11, v12);
    }
  }
  Scaleform::Lock::Unlock(p_ResourceLock);
}

void __fastcall Scaleform::GFx::ResourceLib::ResourceSlot::Resolve(
        Scaleform::GFx::ResourceLib::ResourceSlot *this,
        Scaleform::GFx::Resource *pres)
{
  Scaleform::GFx::ResourceWeakLib *pObject; // rbx
  Scaleform::GFx::ResourceWeakLib *v5; // rsi
  unsigned __int64 pKeyInterface; // rcx
  signed __int64 v7; // rax
  __int64 v8; // rax

  pObject = this->pLib.pObject;
  Scaleform::Lock::DoLock(&pObject->ResourceLock);
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pres->RefCount.Value, 1);
  v5 = this->pLib.pObject;
  this->pResource = pres;
  this->State = Resolve_Success;
  if ( !v5->Resources.pTable )
    goto LABEL_6;
  pKeyInterface = (unsigned __int64)this->Key.pKeyInterface;
  if ( pKeyInterface )
    pKeyInterface = (*(__int64 (__fastcall **)(unsigned __int64, void *))(*(_QWORD *)pKeyInterface + 32i64))(
                      pKeyInterface,
                      this->Key.hKeyData);
  v7 = Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::findIndexCore<Scaleform::GFx::ResourceKey>(
         &v5->Resources,
         &this->Key,
         pKeyInterface & v5->Resources.pTable->SizeMask);
  if ( v7 >= 0 )
    v8 = (__int64)&v5->Resources.pTable[2 * v7 + 2];
  else
LABEL_6:
    v8 = 0i64;
  *(_QWORD *)(v8 + 8) = pres;
  *(_DWORD *)v8 = 0;
  pres->pLib = this->pLib.pObject;
  Scaleform::Event::SetEvent(&this->ResolveComplete);
  Scaleform::Lock::Unlock(&pObject->ResourceLock);
}

void __fastcall Scaleform::GFx::ResourceWeakLib::UnpinAll(Scaleform::GFx::ResourceWeakLib *this)
{
  Scaleform::GFx::ResourceLib *pStrongLib; // r14
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *pTable; // rax
  Scaleform::HashSetUncached<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2> > *p_PinSet; // r14
  unsigned __int64 v5; // rdi
  unsigned __int64 SizeMask; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v7; // rax
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v8; // rsi
  unsigned __int64 v9; // rsi
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v12; // rax
  Scaleform::GFx::ResourceLib *v13; // rdi
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v14; // rax
  __int64 v15; // rcx
  __int64 v16; // rdx
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *v17; // rax

  Scaleform::Lock::DoLock(&this->ResourceLock);
  pStrongLib = this->pStrongLib;
  if ( pStrongLib )
  {
    pTable = pStrongLib->PinSet.pTable;
    p_PinSet = &pStrongLib->PinSet;
    if ( pTable )
    {
      SizeMask = pTable->SizeMask;
      v5 = 0i64;
      v7 = pTable + 1;
      do
      {
        if ( v7->EntryCount != -2i64 )
          break;
        ++v5;
        ++v7;
      }
      while ( v5 <= SizeMask );
    }
    else
    {
      v5 = 0i64;
      p_PinSet = 0i64;
    }
    while ( p_PinSet )
    {
      v8 = p_PinSet->pTable;
      if ( !p_PinSet->pTable || (signed __int64)v5 > (signed __int64)v8->SizeMask )
        break;
      v9 = v8[v5 + 1].SizeMask;
      if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((volatile int *)(v9 + 8), -1) == 1 )
      {
        v10 = *(_QWORD *)(v9 + 16);
        if ( v10 )
        {
          (*(void (__fastcall **)(__int64, unsigned __int64))(*(_QWORD *)v10 + 8i64))(v10, v9);
          *(_QWORD *)(v9 + 16) = 0i64;
        }
        (**(void (__fastcall ***)(unsigned __int64, __int64))v9)(v9, 1i64);
      }
      v11 = p_PinSet->pTable->SizeMask;
      if ( (__int64)v5 <= (__int64)v11 && ++v5 <= v11 )
      {
        v12 = &p_PinSet->pTable[v5 + 1];
        do
        {
          if ( v12->EntryCount != -2i64 )
            break;
          ++v5;
          ++v12;
        }
        while ( v5 <= v11 );
      }
    }
    v13 = this->pStrongLib;
    v14 = v13->PinSet.pTable;
    if ( v14 )
    {
      v15 = 0i64;
      v16 = v14->SizeMask + 1;
      do
      {
        v17 = v13->PinSet.pTable;
        if ( v17[v15 + 1].EntryCount != -2i64 )
          v17[v15 + 1].EntryCount = -2i64;
        ++v15;
        --v16;
      }
      while ( v16 );
      if ( v13->PinSet.pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      v13->PinSet.pTable = 0i64;
    }
  }
  Scaleform::Lock::Unlock(&this->ResourceLock);
}

void __fastcall Scaleform::GFx::ResourceWeakLib::UnpinResource(
        Scaleform::GFx::ResourceWeakLib *this,
        Scaleform::GFx::Resource *pres)
{
  Scaleform::GFx::ResourceLib *pStrongLib; // rcx
  Scaleform::GFx::ResourceLibBase *pLib; // rcx
  Scaleform::GFx::Resource *key; // [rsp+38h] [rbp+10h] BYREF

  key = pres;
  Scaleform::Lock::DoLock(&this->ResourceLock);
  pStrongLib = this->pStrongLib;
  if ( pStrongLib )
  {
    Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::RemoveAlt<Scaleform::GFx::Resource *>(
      &pStrongLib->PinSet,
      &key);
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pres->RefCount.Value, -1) == 1 )
    {
      pLib = pres->pLib;
      if ( pLib )
      {
        pLib->RemoveResourceOnRelease(pLib, pres);
        pres->pLib = 0i64;
      }
      ((void (__fastcall *)(Scaleform::GFx::Resource *, __int64))pres->~Resource)(pres, 1i64);
    }
  }
  Scaleform::Lock::Unlock(&this->ResourceLock);
}

Scaleform::GFx::Resource *__fastcall Scaleform::GFx::ResourceLib::BindHandle::WaitForResolve(
        Scaleform::GFx::ResourceLib::BindHandle *this)
{
  Scaleform::GFx::Resource *result; // rax
  Scaleform::GFx::Resource *pResource; // rdi
  Scaleform::GFx::Resource *v4; // rsi

  if ( this->State == RS_Available )
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->pResource->RefCount.Value, 1);
    return this->pResource;
  }
  else if ( this->State == RS_Error )
  {
    return 0i64;
  }
  else
  {
    pResource = this->pResource;
    Scaleform::Event::Wait((Scaleform::Event *)&pResource[2].pLib, 0xFFFFFFFF);
    if ( *(_QWORD *)&pResource[1].RefCount.Value )
      Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
        (volatile int *)(*(_QWORD *)&pResource[1].RefCount.Value + 8i64),
        1);
    v4 = *(Scaleform::GFx::Resource **)&pResource[1].RefCount.Value;
    if ( v4 )
    {
      this->State = RS_Available;
      this->pResource = v4;
      Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&v4->RefCount.Value, 1);
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pResource);
      return v4;
    }
    else
    {
      result = 0i64;
      this->State = RS_Error;
    }
  }
  return result;
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *pTable; // rdi
  int v10; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> > v11; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v10 = 2;
    v6 = 0i64;
    v11.pTable = 0i64;
    v11.pTable = (Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc> >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 16 * (v5 + 1), &v10);
    v11.pTable->EntryCount = 0i64;
    v11.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v11.pTable[++v7].EntryCount = -2i64;
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
        if ( this->pTable[v6 + 1].EntryCount != -2i64 )
        {
          Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::add<Scaleform::GFx::Resource *>(
            &v11,
            pheapAddr,
            (Scaleform::GFx::Resource *const *)&pTable[v6 + 1].SizeMask,
            pTable[v6 + 1].SizeMask ^ (pTable[v6 + 1].SizeMask >> 6));
          pTable[v6 + 1].EntryCount = -2i64;
        }
        ++v6;
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
    Scaleform::HashSetBase<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc,Scaleform::AllocatorGH<Scaleform::GFx::Resource *,2>,Scaleform::HashsetEntry<Scaleform::GFx::Resource *,Scaleform::GFx::ResourceLib::ResourcePtrHashFunc>>::Clear(this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v3; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *v9; // rsi
  __int64 v10; // rax
  int v11; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> > v12; // [rsp+68h] [rbp+20h] BYREF

  v3 = 0i64;
  v11 = 0;
  if ( newSize )
  {
    if ( newSize >= 8 )
      v6 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v6 = 8i64;
    v12.pTable = 0i64;
    v11 = 2;
    v12.pTable = (Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp> >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 32 * v6 + 16, &v11);
    v12.pTable->EntryCount = 0i64;
    v12.pTable->SizeMask = v6 - 1;
    if ( v6 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v12.pTable[v7 - 1].EntryCount = -2i64;
        --v6;
      }
      while ( v6 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = &this->pTable[v3];
        if ( v9[1].EntryCount != -2i64 )
        {
          v10 = Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp::operator()(
                  (Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp *)&v11,
                  (const Scaleform::GFx::ResourceWeakLib::ResourceNode *)&v9[2]);
          Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::add<Scaleform::GFx::ResourceWeakLib::ResourceNode>(
            &v12,
            pheapAddr,
            (const Scaleform::GFx::ResourceWeakLib::ResourceNode *)&v9[2],
            v10);
          v9[1].EntryCount = -2i64;
        }
        v3 += 2i64;
        --v8;
      }
      while ( v8 );
      if ( this->pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->pTable = v12.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp,Scaleform::AllocatorGH<Scaleform::GFx::ResourceWeakLib::ResourceNode,2>,Scaleform::HashsetCachedEntry<Scaleform::GFx::ResourceWeakLib::ResourceNode,Scaleform::GFx::ResourceWeakLib::ResourceNode::HashOp>>::Clear((Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> > *)this);
  }
}

