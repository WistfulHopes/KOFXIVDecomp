#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Log * Scaleform::SF_GlobalLog; // 0x140A721B8
Scaleform::Log::~Log(); // 0x14031EBA0
void Scaleform::Log::LogMessageById(Scaleform::LogMessageId messageId, const char * pfmt, ...); // 0x140320090
void Scaleform::Log::DefaultLogMessageVarg(Scaleform::LogMessageId messageId, const char * fmt, char * argList); // 0x14002E7C0
void Scaleform::Log::SetGlobalLog(Scaleform::Log * log); // 0x14031EC50
Scaleform::Log * Scaleform::Log::GetGlobalLog(); // 0x14031EC40
Scaleform::Log * Scaleform::Log::GetDefaultLog(); // 0x14031EBD0//decompilation failure at 140A721B8!
void __fastcall Scaleform::Log::~Log(Scaleform::Log *this)
{
  this->__vftable = (Scaleform::Log_vtbl *)&Scaleform::Log::`vftable';
  if ( this == Scaleform::SF_GlobalLog )
    Scaleform::SF_GlobalLog = 0i64;
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

Scaleform::Log *__fastcall Scaleform::Log::GetDefaultLog()
{
  if ( dword_140A721C0 > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
  {
    Init_thread_header(&dword_140A721C0);
    if ( dword_140A721C0 == -1 )
    {
      defaultLog.__vftable = (Scaleform::Log_vtbl *)&Scaleform::Log::`vftable';
      atexit(Scaleform::Log::GetDefaultLog_::_2_::_dynamic_atexit_destructor_for__defaultLog__);
      Init_thread_footer(&dword_140A721C0);
    }
  }
  return &defaultLog;
}

Scaleform::Log *__fastcall Scaleform::Log::GetGlobalLog()
{
  return Scaleform::SF_GlobalLog;
}

void Scaleform::Log::LogMessageById(Scaleform::Log *this, int *messageId, const char *pfmt, ...)
{
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF
  va_list va; // [rsp+58h] [rbp+20h] BYREF

  va_start(va, pfmt);
  v3[0] = *messageId;
  ((void (__fastcall *)(Scaleform::Log *, int *, const char *, __int64 *))this->LogMessageVarg)(
    this,
    v3,
    pfmt,
    (__int64 *)va);
}

void __fastcall Scaleform::Log::SetGlobalLog(Scaleform::Log *log)
{
  Scaleform::SF_GlobalLog = log;
}

