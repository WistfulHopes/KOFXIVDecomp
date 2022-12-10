#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
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
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"

typedef AgPCExceptionHandler AgPlatformExceptionHandler;
AgPCExceptionHandler::AgPCExceptionHandler(); // 0x140681800
AgEventDispatcher<AgPrepareDumpEvent>::~AgEventDispatcher<AgPrepareDumpEvent>(); // 0x140681870
AgEventDispatcherBase<AgPrepareDumpEvent>::~AgEventDispatcherBase<AgPrepareDumpEvent>(); // 0x1406818D0
AgExceptionHandler::~AgExceptionHandler(); // 0x140681980
AgExceptionHandler * AgExceptionHandler::createSingleton(); // 0x140681AC0void __fastcall AgPCExceptionHandler::AgPCExceptionHandler(AgPCExceptionHandler *this)
{
  AgEventDispatcher<AgPrepareDumpEvent> *p_CommentSet; // rbx

  this->__vftable = (AgPCExceptionHandler_vtbl *)&AgSingleton<AgExceptionHandler>::`vftable';
  this->__vftable = (AgPCExceptionHandler_vtbl *)&AgExceptionHandler::`vftable';
  p_CommentSet = &this->CommentSet;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->CommentSet);
  p_CommentSet->m_bindings._Mypair._Myval2._Myfirst = 0i64;
  p_CommentSet->m_bindings._Mypair._Myval2._Mylast = 0i64;
  p_CommentSet->m_bindings._Mypair._Myval2._Myend = 0i64;
  this->__vftable = (AgPCExceptionHandler_vtbl *)&AgPCExceptionHandler::`vftable';
}

void __fastcall AgEventDispatcher<AgPrepareDumpEvent>::~AgEventDispatcher<AgPrepareDumpEvent>(
        AgEventDispatcher<AgPrepareDumpEvent> *this)
{
  AgDelegate1<AgUserUpdatedEvent const &,void> *Myfirst; // rdx

  Myfirst = (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      Myfirst,
      ((char *)this->m_bindings._Mypair._Myval2._Myend - (char *)Myfirst) >> 4);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgEventDispatcherBase<AgPrepareDumpEvent>::~AgEventDispatcherBase<AgPrepareDumpEvent>(
        AgEventDispatcherBase<AgPrepareDumpEvent> *this)
{
  AgDelegate1<AgUserUpdatedEvent const &,void> *Myfirst; // rdx

  Myfirst = (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->m_bindings,
      Myfirst,
      ((char *)this->m_bindings._Mypair._Myval2._Myend - (char *)Myfirst) >> 4);
    this->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgSingleton<AgExceptionHandler>::~AgSingleton<AgExceptionHandler>(
        AgSingleton<AgExceptionHandler> *this)
{
  this->__vftable = (AgSingleton<AgExceptionHandler>_vtbl *)&AgSingleton<AgExceptionHandler>::`vftable';
}

void __fastcall std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>>::~vector<AgDelegate1<AgPrepareDumpEvent const &,void>>(
        std::vector<AgDelegate1<AgPrepareDumpEvent const &,void>> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall AgExceptionHandler::~AgExceptionHandler(AgExceptionHandler *this)
{
  AgEventDispatcher<AgPrepareDumpEvent> *p_CommentSet; // rsi
  AgDelegate1<AgUserUpdatedEvent const &,void> *Myfirst; // rdx

  p_CommentSet = &this->CommentSet;
  Myfirst = (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->CommentSet.m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->CommentSet.m_bindings,
      Myfirst,
      ((char *)this->CommentSet.m_bindings._Mypair._Myval2._Myend - (char *)Myfirst) >> 4);
    p_CommentSet->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    p_CommentSet->m_bindings._Mypair._Myval2._Mylast = 0i64;
    p_CommentSet->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)p_CommentSet);
  this->__vftable = (AgExceptionHandler_vtbl *)&AgSingleton<AgExceptionHandler>::`vftable';
}

void __fastcall AgExceptionHandler::createSingleton()
{
  AgPCExceptionHandler *v0; // rax

  v0 = (AgPCExceptionHandler *)operator new(0x50ui64);
  if ( v0 )
    AgPCExceptionHandler::AgPCExceptionHandler(v0);
}

void __fastcall std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
        std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *this,
        AgDelegate1<AgUserUpdatedEvent const &,void> *_Ptr,
        unsigned __int64 _Count)
{
  void (__fastcall *m_pFunction)(detail::GenericClass *); // rax
  char *v4; // rdx

  if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 16 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_pFunction = _Ptr[-1].m_Closure.m_pFunction;
    if ( (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_pFunction);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgDelegate1<AgUserUpdatedEvent const &,void> *)m_pFunction;
  }
  operator delete(_Ptr);
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

