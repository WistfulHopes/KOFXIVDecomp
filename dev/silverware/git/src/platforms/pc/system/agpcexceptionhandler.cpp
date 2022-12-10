#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/util/ageventdispatcher.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/system/agexceptionhandler.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"

class AgExceptionHandlerInternalData
{
public:
	AgExceptionHandlerInternalData();
private:
	static long _steamUnhandledExceptionFilter(_EXCEPTION_POINTERS *);
};
AgPrepareDumpEvent::~AgPrepareDumpEvent(); // 0x140695EF0
long AgExceptionHandlerInternalData::_steamUnhandledExceptionFilter(_EXCEPTION_POINTERS * ExceptionInfo); // 0x140695F10
long AgPCExceptionHandler::onSingletonExit(); // 0x140696040
long AgPCExceptionHandler::onSingletonInit(); // 0x140696070void __fastcall AgPrepareDumpEvent::~AgPrepareDumpEvent(AgPrepareDumpEvent *this, unsigned __int64 a2)
{
  AgString::~AgString(&this->miniDumpComment, a2);
}

__int64 __fastcall AgExceptionHandlerInternalData::_steamUnhandledExceptionFilter(_EXCEPTION_POINTERS *ExceptionInfo)
{
  char *CString; // rax
  unsigned __int64 v3; // rdx
  AgString v5; // [rsp+28h] [rbp-20h] BYREF

  AgString::AgString(&v5);
  AgEventDispatcherBase<AgPrepareDumpEvent>::call(
    (AgEventDispatcherBase<AgPrepareDumpEvent> *)&AgSingleton<AgExceptionHandler>::ms_instance[1],
    (const AgPrepareDumpEvent *)&v5);
  CString = AgString::getCString(&v5);
  SteamAPI_SetMiniDumpComment(CString);
  SteamAPI_WriteMiniDump(ExceptionInfo->ExceptionRecord->ExceptionCode, ExceptionInfo, steam_minidump_buildID);
  AgString::~AgString(&v5, v3);
  return 0i64;
}

void __fastcall AgEventDispatcherBase<AgPrepareDumpEvent>::call(
        AgEventDispatcherBase<AgPrepareDumpEvent> *this,
        const AgPrepareDumpEvent *e)
{
  AgDelegate1<AgPrepareDumpEvent const &,void> *Myfirst; // rbx
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rbp
  detail::GenericClass *m_pthis; // r14

  EnterCriticalSection((LPCRITICAL_SECTION)this);
  Myfirst = this->m_bindings._Mypair._Myval2._Myfirst;
  while ( Myfirst != this->m_bindings._Mypair._Myval2._Mylast )
  {
    m_pFunction = Myfirst->m_Closure.m_pFunction;
    m_pthis = Myfirst->m_Closure.m_pthis;
    ++Myfirst;
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    ((void (__fastcall *)(detail::GenericClass *, const AgPrepareDumpEvent *))m_pFunction)(m_pthis, e);
    EnterCriticalSection((LPCRITICAL_SECTION)this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}

__int64 __fastcall AgPCExceptionHandler::onSingletonExit(AgPCExceptionHandler *this)
{
  __int64 result; // rax

  operator delete(this->m_internalData, 1ui64);
  result = 1i64;
  this->m_internalData = 0i64;
  return result;
}

__int64 __fastcall AgPCExceptionHandler::onSingletonInit(AgPCExceptionHandler *this)
{
  AgExceptionHandlerInternalData *v2; // rbx

  v2 = (AgExceptionHandlerInternalData *)operator new(1ui64);
  if ( v2 )
    SetUnhandledExceptionFilter((LPTOP_LEVEL_EXCEPTION_FILTER)AgExceptionHandlerInternalData::_steamUnhandledExceptionFilter);
  else
    v2 = 0i64;
  this->m_internalData = v2;
  return 1i64;
}

