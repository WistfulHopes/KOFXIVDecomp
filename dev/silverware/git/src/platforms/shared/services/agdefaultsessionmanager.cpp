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
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
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
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"

AgDefaultSessionManager::AgDefaultSessionManager(); // 0x140696390
AgSessionManager::~AgSessionManager(); // 0x1406963C0
AgPointer<AgSession> AgDefaultSessionManager::createSession(const AgString & name, long primary); // 0x140696590void __fastcall AgPointer<AgSession>::AgPointer<AgSession>(AgPointer<AgSession> *this, AgSession *t)
{
  AgReferenceCount *v4; // rax
  int v5; // ecx
  AgReferenceCount *m_refCount; // rsi

  this->m_ref = 0i64;
  this->m_ptr = 0i64;
  if ( t )
  {
    if ( t->m_refCount )
    {
      v5 = 0;
    }
    else
    {
      v4 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
      v5 = 1;
      if ( v4 )
      {
        v4->m_strongCount = 1;
        v4->m_weakCount = 1;
        v4->m_data = t;
      }
      else
      {
        v4 = 0i64;
      }
      t->m_refCount = v4;
    }
    m_refCount = t->m_refCount;
    if ( !v5 )
      AgReferenceCount::incRef(t->m_refCount);
    this->m_ref = m_refCount;
    this->m_ptr = t;
  }
}

void __fastcall AgDefaultSessionManager::AgDefaultSessionManager(AgDefaultSessionManager *this)
{
  AgSessionManager::AgSessionManager(this);
  this->__vftable = (AgDefaultSessionManager_vtbl *)&AgDefaultSessionManager::`vftable';
}

void __fastcall AgSessionManager::~AgSessionManager(AgSessionManager *this)
{
  AgPointer<AgSession>::~AgPointer<AgSession>(&this->m_primarySession);
  AgAsyncEventDispatcher<AgPointer<AgSession>>::~AgAsyncEventDispatcher<AgPointer<AgSession>>(&this->InvalidSession);
  this->__vftable = (AgSessionManager_vtbl *)&AgSingleton<AgSessionManager>::`vftable';
}

AgPointer<AgSession> *__fastcall AgPointer<AgSession>::operator=(
        AgPointer<AgSession> *this,
        const AgPointer<AgSession> *rhs)
{
  AgReferenceCount *m_ref; // rdi
  int m_strongCount; // ebx
  AgReferenceCount *v6; // rbx
  AgSession *m_ptr; // rdi
  int v8; // ebp
  AgPointer<AgSession> v10; // [rsp+28h] [rbp-20h]

  v10 = 0i64;
  m_ref = rhs->m_ref;
  if ( rhs->m_ref )
  {
    m_strongCount = m_ref->m_strongCount;
    if ( m_ref->m_strongCount )
    {
      while ( (unsigned int)AgAtomicCompareExchange(&m_ref->m_strongCount, m_strongCount, m_strongCount + 1) != m_strongCount )
      {
        m_strongCount = m_ref->m_strongCount;
        if ( !m_ref->m_strongCount )
          goto LABEL_8;
      }
      if ( m_strongCount != -1 )
        v10 = *rhs;
    }
  }
LABEL_8:
  v6 = this->m_ref;
  m_ptr = this->m_ptr;
  *this = v10;
  if ( v6 )
  {
    v8 = 0;
    if ( !(unsigned int)AgAtomicDecrement(&v6->m_strongCount) )
    {
      if ( !(unsigned int)AgAtomicDecrement(&v6->m_weakCount) )
        v8 = 1;
      v6->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(AgSession *, __int64))m_ptr->~AgSession)(m_ptr, 1i64);
      if ( v8 )
        AgReferenceCount::operator delete(v6);
    }
  }
  return this;
}

AgPointer<AgSession> *__fastcall AgDefaultSessionManager::createSession(
        AgDefaultSessionManager *this,
        AgPointer<AgSession> *result,
        const AgString *name,
        int primary)
{
  AgSession *v7; // rdi
  AgDefaultSession *v8; // rax
  AgSession *v9; // rax

  v7 = 0i64;
  v8 = (AgDefaultSession *)operator new(0x70ui64);
  if ( v8 )
  {
    AgDefaultSession::AgDefaultSession(v8, name);
    v7 = v9;
  }
  AgPointer<AgSession>::AgPointer<AgSession>(result, v7);
  AgPointer<AgSession>::operator=(&this->m_primarySession, result);
  return result;
}

