#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
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
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/silverware/git/src/platforms/shared/filesystem/agsteamremotemount.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/silverware/git/sdk/memory/agbufferstream.h"
#include "dev/silverware/git/sdk/agmutex.h"
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
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
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
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"

typedef AgPointer<AgSteamRemoteMount> AgSteamRemoteMountPtr;
AgSteamRemoteStream::AgSteamRemoteStream(AgPointer<AgSteamRemoteMount> mount, const AgPath & path, unsigned long accessMode); // 0x1406A11B0
void AgSteamRemoteStream::close(); // 0x1406A14F0
void AgSteamRemoteStream::_store(); // 0x1406A13E0void __fastcall AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
        AgPointer<AgPlayer> *this,
        const AgPointer<AgPlayer> *rhs)
{
  AgReferenceCount *m_ref; // rsi
  int m_strongCount; // ebx

  this->m_ref = 0i64;
  this->m_ptr = 0i64;
  m_ref = rhs->m_ref;
  if ( rhs->m_ref )
  {
    m_strongCount = m_ref->m_strongCount;
    if ( m_ref->m_strongCount )
    {
      while ( AgAtomicCompareExchange(&m_ref->m_strongCount, m_strongCount, m_strongCount + 1) != m_strongCount )
      {
        m_strongCount = m_ref->m_strongCount;
        if ( !m_ref->m_strongCount )
          return;
      }
      if ( m_strongCount != -1 )
      {
        this->m_ref = rhs->m_ref;
        this->m_ptr = rhs->m_ptr;
      }
    }
  }
}

AgPointer<AgMount> *__fastcall AgPointer<AgSteamRemoteMount>::operator<AgMount> AgPointer<AgMount>(
        AgPointer<AgSteamRemoteMount> *this,
        AgPointer<AgMount> *result)
{
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)result,
    (const AgPointer<AgPlayer> *)this);
  return result;
}

void __fastcall AgSteamRemoteStream::AgSteamRemoteStream(
        AgSteamRemoteStream *this,
        AgPointer<AgSteamRemoteMount> *mount,
        const AgPath *path,
        unsigned int accessMode)
{
  AgBuffer<AgAllocator<1> > *v8; // rax
  AgBuffer<AgAllocator<1> > *v9; // rdi
  AgPointer<AgMount> *v10; // rbx
  AgPointer<AgBuffer<AgAllocator<1> > > *v11; // rax
  __int64 v12; // rdx
  __int64 v13; // rbx
  char *CString; // rax
  int v15; // eax
  unsigned __int64 v16; // r12
  AgPointer<AgBuffer<AgAllocator<1> > > *Buffer; // rax
  __int64 v18; // rdx
  __int64 v19; // rdi
  unsigned __int8 *m_data; // rbx
  char *v21; // rax
  AgFileErrorData errorData; // [rsp+48h] [rbp-60h] BYREF
  AgPointer<AgMount> result; // [rsp+58h] [rbp-50h] BYREF
  AgPointer<AgBuffer<AgAllocator<1> > > v24; // [rsp+68h] [rbp-40h] BYREF

  v8 = (AgBuffer<AgAllocator<1> > *)operator new(0x30ui64);
  v9 = v8;
  *(_QWORD *)&errorData.error = v8;
  if ( v8 )
  {
    v8->m_refCount = 0i64;
    v8->__vftable = (AgBuffer<AgAllocator<1> >_vtbl *)&AgBuffer<AgAllocator<1>>::`vftable';
    v8->m_alignment = 0i64;
    v8->m_flags = 7;
    v8->m_data = 0i64;
    v8->m_size = 0i64;
  }
  else
  {
    v9 = 0i64;
  }
  v10 = AgPointer<AgSteamRemoteMount>::operator<AgMount> AgPointer<AgMount>(mount, &result);
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(&v24, v9);
  AgVirtualFileStream::AgVirtualFileStream(this, v11, v10, path, accessMode);
  this->__vftable = (AgSteamRemoteStream_vtbl *)&AgSteamRemoteStream::`vftable';
  if ( (accessMode & 1) == 0 )
    goto LABEL_8;
  v13 = *(_QWORD *)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v12) + 72);
  CString = AgString::getCString(&path->m_path);
  v15 = (*(__int64 (__fastcall **)(__int64, char *))(*(_QWORD *)v13 + 120i64))(v13, CString);
  v16 = v15;
  if ( v15 )
  {
    Buffer = AgBufferStream<AgBuffer<AgAllocator<1>>>::getBuffer(&this->m_internalStream, &v24);
    AgBuffer<AgAllocator<1>>::resize(Buffer->m_ptr, v16);
    AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&v24);
    v19 = *(_QWORD *)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v18)
                    + 72);
    m_data = AgBufferStream<AgBuffer<AgAllocator<1>>>::getBuffer(&this->m_internalStream, &v24)->m_ptr->m_data;
    v21 = AgString::getCString(&path->m_path);
    (*(void (__fastcall **)(__int64, char *, unsigned __int8 *, _QWORD))(*(_QWORD *)v19 + 8i64))(
      v19,
      v21,
      m_data,
      (unsigned int)v16);
    AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&v24);
LABEL_8:
    AgFile::setOpen(this, 1);
    goto LABEL_9;
  }
  errorData.error = AgFileError_NotFound;
  errorData.systemError = 0i64;
  AgFile::setError(this, &errorData);
LABEL_9:
  AgPointer<AgSteamRemoteMount>::~AgPointer<AgSteamRemoteMount>(mount);
}

void __fastcall AgSteamRemoteStream::_store(AgSteamRemoteStream *this)
{
  AgMutex *m_mutex; // rbp
  __int64 v3; // rdx
  void (__fastcall ***v4)(_QWORD, char *, unsigned __int8 *, unsigned __int64, __int64, int, AgMutex *); // r14
  unsigned __int8 *m_data; // rsi
  char *CString; // rbx
  void (__fastcall **v7)(_QWORD, char *, unsigned __int8 *, unsigned __int64, __int64, int, AgMutex *); // rdi
  unsigned __int64 v8; // rax
  AgPointer<AgBuffer<AgAllocator<1> > > result; // [rsp+38h] [rbp-30h] BYREF

  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  if ( !this->m_storing )
  {
    AgFile::setStoring(this, 1);
    if ( this->m_open )
    {
      v4 = *(void (__fastcall ****)(_QWORD, char *, unsigned __int8 *, unsigned __int64, __int64, int, AgMutex *))(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v3) + 72);
      m_data = AgBufferStream<AgBuffer<AgAllocator<1>>>::getBuffer(&this->m_internalStream, &result)->m_ptr->m_data;
      CString = AgString::getCString(&this->m_path.m_path);
      v7 = *v4;
      v8 = this->getSize(this);
      (*v7)(v4, CString, m_data, v8, -2i64, 1, m_mutex);
      AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&result);
      AgFile::setModified(this, 0);
    }
    AgFile::setStoring(this, 0);
    AgFile::setFlushed(this, 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
}

void __fastcall AgSteamRemoteStream::close(AgSteamRemoteStream *this, __int64 a2)
{
  void (__fastcall ***v3)(_QWORD, char *, unsigned __int8 *, unsigned __int64, __int64); // r14
  unsigned __int8 *m_data; // rsi
  char *CString; // rbx
  void (__fastcall **v6)(_QWORD, char *, unsigned __int8 *, unsigned __int64, __int64); // rdi
  unsigned __int64 v7; // rax
  AgPointer<AgBuffer<AgAllocator<1> > > result; // [rsp+28h] [rbp-20h] BYREF

  if ( this->m_open && this->m_modified && !this->m_storing )
  {
    v3 = *(void (__fastcall ****)(_QWORD, char *, unsigned __int8 *, unsigned __int64, __int64))(SteamInternal_ContextInit(
                                                                                                   &`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext,
                                                                                                   a2)
                                                                                               + 72);
    m_data = AgBufferStream<AgBuffer<AgAllocator<1>>>::getBuffer(&this->m_internalStream, &result)->m_ptr->m_data;
    CString = AgString::getCString(&this->m_path.m_path);
    v6 = *v3;
    v7 = this->getSize(this);
    (*v6)(v3, CString, m_data, v7, -2i64);
    AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&result);
  }
}

