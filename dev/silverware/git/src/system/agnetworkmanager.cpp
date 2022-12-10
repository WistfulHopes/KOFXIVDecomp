#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
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
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/agrectangle.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/agvector4.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agdisplay.h"
#include "dev/silverware/git/sdk/agvector3.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/system/agnetworkmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"

typedef AgNetworkManager AgPlatformNetworkManager;
AgNetworkManager::AgNetworkManager(); // 0x140681400
AgEventDispatcher<AgNetworkOfflineEvent>::~AgEventDispatcher<AgNetworkOfflineEvent>(); // 0x140681490
AgEventDispatcher<AgNetworkOnlineEvent>::~AgEventDispatcher<AgNetworkOnlineEvent>(); // 0x1406814F0
AgEventDispatcherBase<AgNetworkOfflineEvent>::~AgEventDispatcherBase<AgNetworkOfflineEvent>(); // 0x140681550
AgEventDispatcherBase<AgNetworkOnlineEvent>::~AgEventDispatcherBase<AgNetworkOnlineEvent>(); // 0x1406815B0
AgNetworkManager::~AgNetworkManager(); // 0x1406816A0
AgNetworkManager * AgNetworkManager::createSingleton(); // 0x1406817C0
void AgNetworkManager::update(); // 0x14002E7C0
long AgNetworkManager::onSingletonExit(); // 0x1400482A0void __fastcall AgNetworkManager::AgNetworkManager(AgNetworkManager *this)
{
  AgEventDispatcher<AgNetworkOnlineEvent> *p_Online; // rbx

  this->__vftable = (AgNetworkManager_vtbl *)&AgSingleton<AgNetworkManager>::`vftable';
  this->__vftable = (AgNetworkManager_vtbl *)&AgNetworkManager::`vftable';
  p_Online = &this->Online;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->Online);
  p_Online->m_bindings._Mypair._Myval2._Myfirst = 0i64;
  p_Online->m_bindings._Mypair._Myval2._Mylast = 0i64;
  p_Online->m_bindings._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->Offline);
  this->Offline.m_bindings._Mypair._Myval2._Myfirst = 0i64;
  this->Offline.m_bindings._Mypair._Myval2._Mylast = 0i64;
  this->Offline.m_bindings._Mypair._Myval2._Myend = 0i64;
  this->m_isOnline = 0;
}

void __fastcall AgEventDispatcher<AgNetworkOfflineEvent>::~AgEventDispatcher<AgNetworkOfflineEvent>(
        AgEventDispatcher<AgNetworkOfflineEvent> *this)
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

void __fastcall AgEventDispatcher<AgNetworkOnlineEvent>::~AgEventDispatcher<AgNetworkOnlineEvent>(
        AgEventDispatcher<AgNetworkOnlineEvent> *this)
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

void __fastcall AgEventDispatcherBase<AgNetworkOfflineEvent>::~AgEventDispatcherBase<AgNetworkOfflineEvent>(
        AgEventDispatcherBase<AgNetworkOfflineEvent> *this)
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

void __fastcall AgEventDispatcherBase<AgNetworkOnlineEvent>::~AgEventDispatcherBase<AgNetworkOnlineEvent>(
        AgEventDispatcherBase<AgNetworkOnlineEvent> *this)
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

void __fastcall AgSingleton<AgNetworkManager>::~AgSingleton<AgNetworkManager>(AgSingleton<AgNetworkManager> *this)
{
  this->__vftable = (AgSingleton<AgNetworkManager>_vtbl *)&AgSingleton<AgNetworkManager>::`vftable';
}

void __fastcall std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>>::~vector<AgDelegate1<AgNetworkOfflineEvent const &,void>>(
        std::vector<AgDelegate1<AgNetworkOfflineEvent const &,void>> *this)
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

void __fastcall std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>>::~vector<AgDelegate1<AgNetworkOnlineEvent const &,void>>(
        std::vector<AgDelegate1<AgNetworkOnlineEvent const &,void>> *this)
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

void __fastcall AgNetworkManager::~AgNetworkManager(AgNetworkManager *this)
{
  AgEventDispatcher<AgNetworkOfflineEvent> *p_Offline; // rsi
  AgDelegate1<AgUserUpdatedEvent const &,void> *Myfirst; // rdx
  AgDelegate1<AgUserUpdatedEvent const &,void> *v4; // rdx

  p_Offline = &this->Offline;
  Myfirst = (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->Offline.m_bindings._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->Offline.m_bindings,
      Myfirst,
      ((char *)this->Offline.m_bindings._Mypair._Myval2._Myend - (char *)Myfirst) >> 4);
    p_Offline->m_bindings._Mypair._Myval2._Myfirst = 0i64;
    p_Offline->m_bindings._Mypair._Myval2._Mylast = 0i64;
    p_Offline->m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)p_Offline);
  v4 = (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->Online.m_bindings._Mypair._Myval2._Myfirst;
  if ( v4 )
  {
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)&this->Online.m_bindings,
      v4,
      ((char *)this->Online.m_bindings._Mypair._Myval2._Myend - (char *)v4) >> 4);
    this->Online.m_bindings._Mypair._Myval2._Myfirst = 0i64;
    this->Online.m_bindings._Mypair._Myval2._Mylast = 0i64;
    this->Online.m_bindings._Mypair._Myval2._Myend = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->Online);
  this->__vftable = (AgNetworkManager_vtbl *)&AgSingleton<AgNetworkManager>::`vftable';
}

void __fastcall AgNetworkManager::createSingleton()
{
  AgNetworkManager *v0; // rax

  v0 = (AgNetworkManager *)operator new(0x90ui64);
  if ( v0 )
    AgNetworkManager::AgNetworkManager(v0);
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

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

