#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
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
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/services/agsessionmanager.h"
#include "dev/silverware/git/sdk/services/agsession.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/util/ageventdispatcher.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"

void * AgSessionManager::s_config; // 0x140A93F78
typedef AgDefaultSessionManager AgPlatformSessionManager;
AgSessionManager::AgSessionManager(); // 0x140681BF0
AgAsyncEventDispatcher<AgPointer<AgSession> >::~AgAsyncEventDispatcher<AgPointer<AgSession> >(); // 0x140681C80
AgEventDispatcherBase<AgPointer<AgSession> >::~AgEventDispatcherBase<AgPointer<AgSession> >(); // 0x140681D00
AgSessionManager * AgSessionManager::createSingleton(); // 0x140682030
void AgSessionManager::update(); // 0x140682180
long AgSessionManager::onSingletonExit(); // 0x1400482A0//decompilation failure at 140A93F78!
void __fastcall AgSessionManager::AgSessionManager(AgSessionManager *this)
{
  AgAsyncEventDispatcher<AgPointer<AgSession> > *p_InvalidSession; // rbx

  this->__vftable = (AgSessionManager_vtbl *)&AgSingleton<AgSessionManager>::`vftable';
  this->__vftable = (AgSessionManager_vtbl *)&AgSessionManager::`vftable';
  p_InvalidSession = &this->InvalidSession;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->InvalidSession);
  p_InvalidSession->m_bindings._Mypair._Myval2._Myfirst = 0i64;
  p_InvalidSession->m_bindings._Mypair._Myval2._Mylast = 0i64;
  p_InvalidSession->m_bindings._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&p_InvalidSession->m_queueMutex);
  p_InvalidSession->m_eventQueue._Mypair._Myval2._Myfirst = 0i64;
  p_InvalidSession->m_eventQueue._Mypair._Myval2._Mylast = 0i64;
  p_InvalidSession->m_eventQueue._Mypair._Myval2._Myend = 0i64;
  this->m_primarySession.m_ref = 0i64;
  this->m_primarySession.m_ptr = 0i64;
}

void __fastcall AgAsyncEventDispatcher<AgPointer<AgSession>>::~AgAsyncEventDispatcher<AgPointer<AgSession>>(
        AgAsyncEventDispatcher<AgPointer<AgSession> > *this)
{
  AgDelegate1<AgUserUpdatedEvent const &,void> *Myfirst; // rdx

  std::vector<AgPointer<AgSession>>::_Tidy(&this->m_eventQueue);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
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

void __fastcall AgEventDispatcherBase<AgPointer<AgSession>>::~AgEventDispatcherBase<AgPointer<AgSession>>(
        AgEventDispatcherBase<AgPointer<AgSession> > *this)
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

void __fastcall AgPointer<AgSession>::~AgPointer<AgSession>(AgPointer<AgSession> *this)
{
  AgSession *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v3; // esi

  m_ptr = this->m_ptr;
  this->m_ptr = 0i64;
  m_ref = this->m_ref;
  if ( this->m_ref )
  {
    this->m_ref = 0i64;
    v3 = 0;
    if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_weakCount) )
        v3 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(AgSession *, __int64))m_ptr->~AgSession)(m_ptr, 1i64);
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

void __fastcall AgSingleton<AgSessionManager>::~AgSingleton<AgSessionManager>(AgSingleton<AgSessionManager> *this)
{
  this->__vftable = (AgSingleton<AgSessionManager>_vtbl *)&AgSingleton<AgSessionManager>::`vftable';
}

void __fastcall std::vector<AgDelegate1<AgPointer<AgSession> const &,void>>::~vector<AgDelegate1<AgPointer<AgSession> const &,void>>(
        std::vector<AgDelegate1<AgPointer<AgSession> const &,void>> *this)
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

void __fastcall std::vector<AgPointer<AgSession>>::~vector<AgPointer<AgSession>>(
        std::vector<AgPointer<AgSession>> *this)
{
  std::vector<AgPointer<AgSession>>::_Tidy(this);
}

void __fastcall std::vector<AgPointer<AgSession>>::_Tidy(std::vector<AgPointer<AgSession>> *this)
{
  AgPointer<AgSession> *Myfirst; // rbx
  AgPointer<AgSession> *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      AgPointer<AgSession>::~AgPointer<AgSession>(Myfirst);
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall AgEventDispatcherBase<AgPointer<AgSession>>::call(
        AgEventDispatcherBase<AgPointer<AgSession> > *this,
        const AgPointer<AgSession> *e)
{
  AgDelegate1<AgPointer<AgSession> const &,void> *Myfirst; // rbx
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
    ((void (__fastcall *)(detail::GenericClass *, const AgPointer<AgSession> *))m_pFunction)(m_pthis, e);
    EnterCriticalSection((LPCRITICAL_SECTION)this);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall AgSessionManager::createSingleton()
{
  AgDefaultSessionManager *v0; // rax

  v0 = (AgDefaultSessionManager *)operator new(0x98ui64);
  if ( v0 )
    AgDefaultSessionManager::AgDefaultSessionManager(v0);
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

void __fastcall AgAsyncEventDispatcher<AgPointer<AgSession>>::run(AgAsyncEventDispatcher<AgPointer<AgSession> > *this)
{
  AgPointer<AgSession> *Myend; // r14
  std::vector<AgPointer<AgSession>> *p_m_eventQueue; // rax
  AgDelegate1<AgUserUpdatedEvent const &,void> *Myfirst; // rsi
  AgPointer<AgSession> *Mylast; // rdi
  const AgPointer<AgSession> *v6; // rbx
  AgPointer<AgSession> *v7; // rbx
  __int128 v8; // [rsp+28h] [rbp-30h] BYREF
  AgPointer<AgSession> *v9; // [rsp+38h] [rbp-20h]

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  v8 = 0i64;
  Myend = 0i64;
  v9 = 0i64;
  p_m_eventQueue = &this->m_eventQueue;
  if ( &v8 == (__int128 *)&this->m_eventQueue )
  {
    Mylast = (AgPointer<AgSession> *)*((_QWORD *)&v8 + 1);
    Myfirst = (AgDelegate1<AgUserUpdatedEvent const &,void> *)v8;
  }
  else
  {
    Myfirst = (AgDelegate1<AgUserUpdatedEvent const &,void> *)p_m_eventQueue->_Mypair._Myval2._Myfirst;
    *(_QWORD *)&v8 = p_m_eventQueue->_Mypair._Myval2._Myfirst;
    p_m_eventQueue->_Mypair._Myval2._Myfirst = 0i64;
    Mylast = this->m_eventQueue._Mypair._Myval2._Mylast;
    *((_QWORD *)&v8 + 1) = Mylast;
    this->m_eventQueue._Mypair._Myval2._Mylast = 0i64;
    Myend = this->m_eventQueue._Mypair._Myval2._Myend;
    v9 = Myend;
    this->m_eventQueue._Mypair._Myval2._Myend = 0i64;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_queueMutex);
  v6 = (const AgPointer<AgSession> *)Myfirst;
  if ( Myfirst != (AgDelegate1<AgUserUpdatedEvent const &,void> *)Mylast )
  {
    do
      AgEventDispatcherBase<AgPointer<AgSession>>::call(this, v6++);
    while ( v6 != Mylast );
  }
  if ( Myfirst )
  {
    v7 = (AgPointer<AgSession> *)Myfirst;
    if ( Myfirst != (AgDelegate1<AgUserUpdatedEvent const &,void> *)Mylast )
    {
      do
        AgPointer<AgSession>::~AgPointer<AgSession>(v7++);
      while ( v7 != Mylast );
    }
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&v8,
      Myfirst,
      ((char *)Myend - (char *)Myfirst) >> 4);
  }
}

void __fastcall AgSessionManager::update(AgSessionManager *this)
{
  AgAsyncEventDispatcher<AgPointer<AgSession>>::run(&this->InvalidSession);
}

