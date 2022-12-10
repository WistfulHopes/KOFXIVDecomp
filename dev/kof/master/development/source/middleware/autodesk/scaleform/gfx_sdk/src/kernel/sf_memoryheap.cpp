#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::MemoryHeap * Scaleform::Memory::pGlobalHeap; // 0x140A720A0
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_TotalFootprint; // 0x140A720B4
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_LocalFootprint; // 0x140A720AF
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_ChildFootprint; // 0x140A720AE
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_ChildHeaps; // 0x140A720B0
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_LocalUsedSpace; // 0x140A720AA
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_SysDirectSpace; // 0x140A720A9
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_Bookkeeping; // 0x140A720A8
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_DebugInfo; // 0x140A720B3
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_Segments; // 0x140A720AD
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_Granularity; // 0x140A720B2
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_DynamicGranularity; // 0x140A720B1
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_Reserve; // 0x140A720AC
Scaleform::StatDesc Scaleform::SF_STAT_StatHeap_Summary; // 0x140A720AB
Scaleform::MemoryHeap::MemoryHeap(); // 0x1402D9470
void Scaleform::MemoryHeap::ReleaseOnFree(void * ptr); // 0x1402D95A0
void Scaleform::MemoryHeap::AssignToCurrentThread(); // 0x1402D9580//decompilation failure at 140A720A0!
//decompilation failure at 140A720B4!
//decompilation failure at 140A720AF!
//decompilation failure at 140A720AE!
//decompilation failure at 140A720B0!
//decompilation failure at 140A720AA!
//decompilation failure at 140A720A9!
//decompilation failure at 140A720A8!
//decompilation failure at 140A720B3!
//decompilation failure at 140A720AD!
//decompilation failure at 140A720B2!
//decompilation failure at 140A720B1!
//decompilation failure at 140A720AC!
//decompilation failure at 140A720AB!
void __fastcall Scaleform::MemoryHeap::MemoryHeap(Scaleform::MemoryHeap *this)
{
  this->pPrev = (Scaleform::MemoryHeap *)-1i64;
  this->pNext = (Scaleform::MemoryHeap *)-1i64;
  this->__vftable = (Scaleform::MemoryHeap_vtbl *)&Scaleform::MemoryHeap::`vftable';
  this->SelfSize = 0i64;
  this->OwnerThreadId = 0i64;
  this->pAutoRelease = 0i64;
  this->RefCount = 1;
  this->Info.Desc.Flags = 0;
  this->Info.Desc.Limit = 0i64;
  this->Info.Desc.HeapId = 0i64;
  this->Info.Desc.Arena = 0i64;
  this->Info.Desc.MinAlign = 16i64;
  this->Info.Desc.Granularity = 0x2000i64;
  this->Info.Desc.Reserve = 0x2000i64;
  this->Info.Desc.Threshold = -1i64;
  this->ChildHeaps.Root.pPrev = (Scaleform::MemoryHeap *)&this->Info.pName;
  this->ChildHeaps.Root.pNext = (Scaleform::MemoryHeap *)&this->Info.pName;
  Scaleform::Lock::Lock(&this->HeapLock, 0);
  *(_WORD *)&this->UseLocks = 257;
  memset(&this->Info, 0, sizeof(this->Info));
}

void __fastcall Scaleform::MemoryHeap::AssignToCurrentThread(Scaleform::MemoryHeap *this)
{
  this->OwnerThreadId = GetCurrentThreadId();
}

void __fastcall Scaleform::MemoryHeap::ReleaseOnFree(Scaleform::MemoryHeap *this, void *ptr)
{
  this->pAutoRelease = ptr;
}

