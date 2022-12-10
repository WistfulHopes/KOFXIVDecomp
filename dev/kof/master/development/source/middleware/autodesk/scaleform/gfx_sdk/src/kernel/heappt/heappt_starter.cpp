#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_heaptypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_starter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_granulator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heappt/heappt_alloclite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"

Scaleform::HeapPT::Starter::Starter(Scaleform::SysAllocPaged * sysAlloc, unsigned long long granularity, unsigned long long headerPageSize); // 0x140437200
void * Scaleform::HeapPT::Starter::Alloc(unsigned long long size, unsigned long long alignSize); // 0x140437230
void Scaleform::HeapPT::Starter::Free(void * ptr, unsigned long long size, unsigned long long alignSize); // 0x140437240
void Scaleform::HeapPT::Starter::VisitMem(Scaleform::Heap::MemVisitor * visitor); // 0x140437250
void Scaleform::HeapPT::Starter::VisitSegments(Scaleform::Heap::SegVisitor * visitor); // 0x140437260void __fastcall Scaleform::HeapPT::Starter::Starter(
        Scaleform::HeapPT::Starter *this,
        Scaleform::SysAllocPaged *sysAlloc,
        unsigned __int64 granularity,
        unsigned __int64 headerPageSize)
{
  Scaleform::HeapPT::Granulator::Granulator(&this->Allocator, sysAlloc, 0x100ui64, granularity, headerPageSize);
}

// attributes: thunk
Scaleform::HeapPT::DualTNode *__fastcall Scaleform::HeapPT::Starter::Alloc(
        Scaleform::HeapPT::Starter *this,
        unsigned __int64 size,
        unsigned __int64 alignSize)
{
  return Scaleform::HeapPT::Granulator::Alloc(&this->Allocator, size, alignSize);
}

// attributes: thunk
void __fastcall Scaleform::HeapPT::Starter::Free(
        Scaleform::HeapPT::Starter *this,
        void *ptr,
        unsigned __int64 size,
        unsigned __int64 alignSize)
{
  Scaleform::HeapPT::Granulator::Free(&this->Allocator, ptr, size, alignSize);
}

void __fastcall Scaleform::HeapPT::Starter::VisitMem(
        Scaleform::HeapPT::Starter *this,
        Scaleform::Heap::MemVisitor *visitor)
{
  Scaleform::HeapPT::Granulator::VisitMem(&this->Allocator, visitor, Cat_Starter, Cat_StarterFree);
}

void __fastcall Scaleform::HeapPT::Starter::VisitSegments(
        Scaleform::HeapPT::Starter *this,
        Scaleform::Heap::SegVisitor *visitor)
{
  Scaleform::HeapPT::Granulator::VisitSegments(&this->Allocator, visitor, 2u, 0x82u);
}

