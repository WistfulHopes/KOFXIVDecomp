#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_alloclite.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"

Scaleform::SysAllocStatic::SysAllocStatic(unsigned long long minSize); // 0x140323330
void Scaleform::SysAllocStatic::AddMemSegment(void * mem, unsigned long long size); // 0x1403233A0
void Scaleform::SysAllocStatic::GetInfo(Scaleform::SysAllocPaged::Info * i); // 0x1403234F0
void * Scaleform::SysAllocStatic::Alloc(unsigned long long size, unsigned long long alignment); // 0x140323410
bool Scaleform::SysAllocStatic::ReallocInPlace(void * oldPtr, unsigned long long oldSize, unsigned long long newSize, unsigned long long alignment); // 0x1403235A0
bool Scaleform::SysAllocStatic::Free(void * ptr, unsigned long long size, unsigned long long alignment); // 0x140323430
void Scaleform::SysAllocStatic::VisitMem(Scaleform::Heap::MemVisitor * visitor); // 0x140323640
unsigned long long Scaleform::SysAllocStatic::GetBase(); // 0x1403234B0
unsigned long long Scaleform::SysAllocStatic::GetSize(); // 0x140323510
unsigned long long Scaleform::SysAllocStatic::GetFootprint(); // 0x140420110
unsigned long long Scaleform::SysAllocStatic::GetUsedSpace(); // 0x140323580void __fastcall Scaleform::SysAllocStatic::SysAllocStatic(Scaleform::SysAllocStatic *this, unsigned __int64 minSize)
{
  Scaleform::HeapPT::AllocLite *v3; // rax
  Scaleform::HeapPT::AllocLite *PrivateData; // rcx

  this->MinSize = minSize;
  this->__vftable = (Scaleform::SysAllocStatic_vtbl *)&Scaleform::SysAllocStatic::`vftable';
  v3 = 0i64;
  this->NumSegments = 0i64;
  this->pAllocator = 0i64;
  this->TotalSpace = 0i64;
  PrivateData = (Scaleform::HeapPT::AllocLite *)this->PrivateData;
  if ( PrivateData )
    Scaleform::HeapPT::AllocLite::AllocLite(PrivateData, minSize);
  this->pAllocator = v3;
}

void __fastcall Scaleform::SysAllocStatic::AddMemSegment(
        Scaleform::SysAllocStatic *this,
        void *mem,
        unsigned __int64 size)
{
  unsigned __int64 MinSize; // rax
  unsigned __int64 NumSegments; // rcx
  __int64 v6; // r9
  unsigned __int64 v7; // r10
  unsigned __int64 v8; // rax
  Scaleform::HeapPT::TreeSeg *v9; // rdx
  unsigned __int64 v10; // rax
  Scaleform::HeapPT::AllocLite *pAllocator; // rcx

  MinSize = this->MinSize;
  NumSegments = this->NumSegments;
  v6 = ~(MinSize - 1);
  v7 = v6 & ((unsigned __int64)mem + MinSize - 1);
  v8 = v6 & ((unsigned __int64)mem + size);
  if ( NumSegments < 4 )
  {
    v9 = (Scaleform::HeapPT::TreeSeg *)this->Segments[NumSegments];
    v10 = v8 - v7;
    v9->Buffer = (unsigned __int8 *)v7;
    v9->Size = v10;
    v9->UseCount = 0i64;
    pAllocator = this->pAllocator;
    this->TotalSpace += v10;
    Scaleform::HeapPT::AllocLite::InitSegment(pAllocator, v9);
    ++this->NumSegments;
  }
}

Scaleform::HeapPT::DualTNode *__fastcall Scaleform::SysAllocStatic::Alloc(
        Scaleform::SysAllocStatic *this,
        unsigned __int64 size,
        unsigned __int64 alignment)
{
  Scaleform::HeapPT::TreeSeg *allocSeg; // [rsp+30h] [rbp+8h] BYREF

  return Scaleform::HeapPT::AllocLite::Alloc(this->pAllocator, size, alignment, &allocSeg);
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

char __fastcall Scaleform::SysAllocStatic::Free(
        Scaleform::SysAllocStatic *this,
        void *ptr,
        unsigned __int64 size,
        unsigned __int64 alignment)
{
  unsigned __int64 NumSegments; // r11
  __int64 v5; // r10
  unsigned __int64 *i; // rax

  NumSegments = this->NumSegments;
  v5 = 0i64;
  if ( !NumSegments )
    return 0;
  for ( i = &this->Segments[0][4]; (unsigned __int64)ptr < *i || (unsigned __int64)ptr >= *i + i[1]; i += 8 )
  {
    if ( ++v5 >= NumSegments )
      return 0;
  }
  Scaleform::HeapPT::AllocLite::Free(this->pAllocator, (Scaleform::HeapPT::TreeSeg *)(i - 4), ptr, size, alignment);
  return 1;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

unsigned __int64 __fastcall Scaleform::SysAllocStatic::GetBase(Scaleform::SysAllocStatic *this)
{
  unsigned __int64 NumSegments; // r8
  unsigned __int64 result; // rax
  unsigned __int64 *v3; // rdx

  NumSegments = this->NumSegments;
  result = -1i64;
  if ( NumSegments )
  {
    v3 = &this->Segments[0][4];
    do
    {
      if ( *v3 < result )
        result = *v3;
      v3 += 8;
      --NumSegments;
    }
    while ( NumSegments );
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::SysAllocStatic::GetFootprint(Scaleform::SysAllocStatic *this)
{
  return this->TotalSpace;
}

void __fastcall Scaleform::SysAllocStatic::GetInfo(Scaleform::SysAllocStatic *this, Scaleform::SysAllocPaged::Info *i)
{
  unsigned __int64 MinSize; // rcx

  MinSize = this->pAllocator->MinSize;
  i->MaxAlign = 0i64;
  i->Granularity = 0i64;
  i->MinAlign = MinSize;
  i->HasRealloc = 1;
}

unsigned __int64 __fastcall Scaleform::SysAllocStatic::GetSize(Scaleform::SysAllocStatic *this)
{
  unsigned __int64 NumSegments; // r11
  __int64 v2; // rdx
  __int64 v3; // r9
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r10
  unsigned __int64 *v6; // rax
  unsigned __int64 v7; // r8

  NumSegments = this->NumSegments;
  v2 = 0i64;
  v3 = 0i64;
  v4 = 0i64;
  v5 = 0i64;
  if ( NumSegments >= 2 )
  {
    v6 = &this->Segments[1][5];
    v7 = ((NumSegments - 2) >> 1) + 1;
    v5 = 2 * v7;
    do
    {
      v2 += *(v6 - 8);
      v3 += *v6;
      v6 += 16;
      --v7;
    }
    while ( v7 );
  }
  if ( v5 < NumSegments )
    v4 = this->Segments[v5][5];
  return v4 + v3 + v2;
}

unsigned __int64 __fastcall Scaleform::SysAllocStatic::GetUsedSpace(Scaleform::SysAllocStatic *this)
{
  return this->TotalSpace - (this->pAllocator->FreeBlocks << this->pAllocator->MinShift);
}

bool __fastcall Scaleform::SysAllocStatic::ReallocInPlace(
        Scaleform::SysAllocStatic *this,
        void *oldPtr,
        unsigned __int64 oldSize,
        unsigned __int64 newSize,
        unsigned __int64 alignment)
{
  unsigned __int64 NumSegments; // rbx
  __int64 v6; // r10
  unsigned __int64 *i; // rax

  NumSegments = this->NumSegments;
  v6 = 0i64;
  if ( !NumSegments )
    return 0;
  for ( i = &this->Segments[0][4]; (unsigned __int64)oldPtr < *i || (unsigned __int64)oldPtr >= *i + i[1]; i += 8 )
  {
    if ( ++v6 >= NumSegments )
      return 0;
  }
  return (int)Scaleform::HeapPT::AllocLite::ReallocInPlace(
                this->pAllocator,
                (Scaleform::HeapPT::TreeSeg *)(i - 4),
                oldPtr,
                oldSize,
                newSize,
                alignment) < 2;
}

void __fastcall Scaleform::SysAllocStatic::VisitMem(
        Scaleform::SysAllocStatic *this,
        Scaleform::Heap::MemVisitor *visitor)
{
  Scaleform::HeapPT::AllocLite::VisitMem(this->pAllocator, visitor, Cat_SysAllocFree);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

