#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/memory/agbufferstream.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/memory/agbuffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/silverware/git/src/platforms/shared/filesystem/agsteamremotemount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"

typedef AgPointer<AgSteamRemoteMount> AgSteamRemoteMountPtr;
AgPointer<AgFile> AgSteamRemoteMount::open(const AgPath & path, unsigned long accessMode); // 0x14069EB80
void AgSteamRemoteMount::mount(); // 0x140699F20
long AgSteamRemoteMount::exists(const AgPath & path); // 0x14069EB10
long AgSteamRemoteMount::remove(const AgPath & path); // 0x14069EC90void __fastcall AgPointer<AgSteamRemoteMount>::AgPointer<AgSteamRemoteMount>(
        AgPointer<AgSteamRemoteMount> *this,
        AgSteamRemoteMount *t)
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

void __fastcall AgPointer<AgSteamRemoteMount>::~AgPointer<AgSteamRemoteMount>(AgPointer<AgSteamRemoteMount> *this)
{
  AgSteamRemoteMount *m_ptr; // rdi
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
        ((void (__fastcall *)(AgSteamRemoteMount *, __int64))m_ptr->~AgMount)(m_ptr, 1i64);
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

__int64 __fastcall AgSteamRemoteMount::exists(AgSteamRemoteMount *this, const AgPath *path)
{
  AgPath *v2; // rbx
  __int64 v3; // rdi
  AgPath *Relative; // rax
  char *CString; // rax
  unsigned __int64 v6; // rdx
  AgPath result; // [rsp+28h] [rbp-20h] BYREF

  v2 = (AgPath *)path;
  v3 = *(_QWORD *)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, path) + 72);
  Relative = AgPath::getRelative(v2, &result);
  CString = AgString::getCString(&Relative->m_path);
  LODWORD(v2) = (*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 104i64))(v3, CString);
  AgString::~AgString(&result.m_path, v6);
  return (unsigned int)v2;
}

void __fastcall AgPCStorageMount::mount(AgSteamRemoteMount *this)
{
  AgMount::setMounted(this, 1);
}

AgPointer<AgFile> *__fastcall AgSteamRemoteMount::open(
        AgSteamRemoteMount *this,
        AgPointer<AgFile> *result,
        const AgPath *path,
        unsigned int accessMode)
{
  char v8; // di
  AgMutex *p_m_mutex; // rbp
  AgUser *v10; // rax
  AgSteamRemoteStream *v11; // r14
  const AgPath *Relative; // rbx
  AgPointer<AgSteamRemoteMount> *v13; // rax
  unsigned __int64 v14; // rdx
  AgPointer<AgSteamRemoteMount> v16; // [rsp+48h] [rbp-50h] BYREF
  AgPath resulta; // [rsp+58h] [rbp-40h] BYREF

  v8 = 0;
  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v10 = (AgUser *)operator new(0xD0ui64);
  v11 = (AgSteamRemoteStream *)v10;
  if ( v10 )
  {
    Relative = AgPath::getRelative((AgPath *)path, &resulta);
    v8 = 1;
    AgPointer<AgSteamRemoteMount>::AgPointer<AgSteamRemoteMount>(&v16, this);
    AgSteamRemoteStream::AgSteamRemoteStream(v11, v13, Relative, accessMode);
  }
  AgPointer<AgUser>::AgPointer<AgUser>((AgPointer<AgUser> *)result, v10);
  if ( (v8 & 1) != 0 )
    AgString::~AgString(&resulta.m_path, v14);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  return result;
}

__int64 __fastcall AgSteamRemoteMount::remove(AgSteamRemoteMount *this, const AgPath *path)
{
  AgPath *v2; // rbx
  __int64 v3; // rdi
  AgPath *Relative; // rax
  char *CString; // rax
  unsigned __int64 v6; // rdx
  AgPath result; // [rsp+28h] [rbp-20h] BYREF

  v2 = (AgPath *)path;
  v3 = *(_QWORD *)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, path) + 72);
  Relative = AgPath::getRelative(v2, &result);
  CString = AgString::getCString(&Relative->m_path);
  LODWORD(v2) = (*(unsigned __int8 (__fastcall **)(__int64, char *))(*(_QWORD *)v3 + 48i64))(v3, CString);
  AgString::~AgString(&result.m_path, v6);
  return (unsigned int)v2;
}

