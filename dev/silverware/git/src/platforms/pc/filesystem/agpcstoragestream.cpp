#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/src/platforms/pc/filesystem/agpcstoragestream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/silverware/git/src/platforms/pc/filesystem/agpcstoragemount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_io.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"

AgPCStorageStream::AgPCStorageStream(AgPointer<AgPCStorageMount> mount, const AgPath & path, unsigned long accessMode); // 0x14069FFC0
unsigned long AgPCStorageStream::read(unsigned char * buffer, unsigned long size); // 0x1406A03B0
unsigned long AgPCStorageStream::write(const unsigned char * buffer, unsigned long size); // 0x1406A04C0
unsigned long long AgPCStorageStream::getSize(); // 0x1406A0340
void AgPCStorageStream::setPosition(unsigned long long position); // 0x1406A0440
unsigned long long AgPCStorageStream::getPosition(); // 0x1406A02D0
void AgPCStorageStream::_store(); // 0x1406A01D0
void AgPCStorageStream::close(); // 0x1406A0250void __fastcall AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
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

AgPointer<AgMount> *__fastcall AgPointer<AgPCStorageMount>::operator<AgMount> AgPointer<AgMount>(
        AgPointer<AgPCStorageMount> *this,
        AgPointer<AgMount> *result)
{
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)result,
    (const AgPointer<AgPlayer> *)this);
  return result;
}

void __fastcall AgPCStorageStream::AgPCStorageStream(
        AgPCStorageStream *this,
        AgPointer<AgPCStorageMount> *mount,
        const AgPath *path,
        unsigned int accessMode)
{
  AgPointer<AgMount> *v8; // rax
  const char *v9; // rsi
  const wchar_t *v10; // rdi
  std::wstring *Ptr; // rcx
  _iobuf *v12; // rax
  char *CString; // rax
  AgFileErrorData errorData; // [rsp+20h] [rbp-98h] BYREF
  __int64 v15; // [rsp+30h] [rbp-88h]
  AgPCStorageStream *v16; // [rsp+38h] [rbp-80h]
  AgPointer<AgPCStorageMount> *v17; // [rsp+40h] [rbp-78h]
  AgPointer<AgMount> result; // [rsp+48h] [rbp-70h] BYREF
  std::wstring v19; // [rsp+58h] [rbp-60h] BYREF

  v15 = -2i64;
  v16 = this;
  v17 = mount;
  *(_QWORD *)&errorData.error = &result;
  v8 = AgPointer<AgPCStorageMount>::operator<AgMount> AgPointer<AgMount>(mount, &result);
  AgFile::AgFile(this, v8, path, accessMode);
  this->__vftable = (AgPCStorageStream_vtbl *)&AgPCStorageStream::`vftable';
  this->m_file = 0i64;
  v9 = 0i64;
  v10 = 0i64;
  if ( (accessMode & 3) == 3 )
  {
    v9 = "w+b";
    v10 = L"w+b";
  }
  else if ( (accessMode & 1) != 0 )
  {
    v9 = "rb";
    v10 = L"rb";
  }
  else if ( (accessMode & 2) != 0 )
  {
    v9 = "wb";
    v10 = L"wb";
  }
  else if ( (accessMode & 8) != 0 )
  {
    v9 = "ab";
    v10 = L"ab";
  }
  AgPCStorageMount::convertToWidePath(&v19, path);
  if ( v19._Mypair._Myval2._Mysize )
  {
    Ptr = &v19;
    if ( v19._Mypair._Myval2._Myres >= 8 )
      Ptr = (std::wstring *)v19._Mypair._Myval2._Bx._Ptr;
    v12 = wfopen(Ptr->_Mypair._Myval2._Bx._Buf, v10);
  }
  else
  {
    CString = AgString::getCString(&path->m_path);
    v12 = fopen(CString, v9);
  }
  this->m_file = v12;
  if ( v12 )
  {
    AgFile::setOpen(this, 1);
  }
  else
  {
    errorData.error = AgFileError_NotFound;
    errorData.systemError = 0i64;
    AgFile::setError(this, &errorData);
  }
  if ( v19._Mypair._Myval2._Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)&v19,
      v19._Mypair._Myval2._Bx._Ptr,
      v19._Mypair._Myval2._Myres + 1);
  v19._Mypair._Myval2._Myres = 7i64;
  v19._Mypair._Myval2._Mysize = 0i64;
  v19._Mypair._Myval2._Bx._Buf[0] = 0;
  AgPointer<AgPCStorageMount>::~AgPointer<AgPCStorageMount>(mount);
}

void __fastcall AgPCStorageStream::_store(AgPCStorageStream *this)
{
  AgMutex *m_mutex; // rbx

  AgFile::setStoring(this, 1);
  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  fflush_nolock(this->m_file);
  AgFile::setStoring(this, 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
}

void __fastcall AgPCStorageStream::close(AgPCStorageStream *this)
{
  AgMutex *m_mutex; // rdi
  _iobuf *m_file; // rcx

  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  m_file = this->m_file;
  if ( m_file )
  {
    fclose_nolock(m_file);
    this->m_file = 0i64;
    AgFile::setOpen(this, 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
}

__int64 __fastcall AgPCStorageStream::getPosition(AgPCStorageStream *this)
{
  AgMutex *m_mutex; // rdi
  __int64 v3; // rbx

  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  v3 = ftelli64_nolock(this->m_file);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
  return v3;
}

__int64 __fastcall AgPCStorageStream::getSize(AgPCStorageStream *this)
{
  AgMutex *m_mutex; // rdi
  int v3; // eax
  __int64 v4; // rbx

  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  v3 = fileno(this->m_file);
  v4 = filelengthi64(v3);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
  return v4;
}

__int64 __fastcall AgPCStorageStream::read(AgPCStorageStream *this, unsigned __int8 *buffer, unsigned int size)
{
  AgPCStorageStream *v5; // rbx
  AgMutex *m_mutex; // rbp

  v5 = this;
  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  LODWORD(v5) = fread_nolock(buffer, 1ui64, size, v5->m_file);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
  return (unsigned int)v5;
}

void __fastcall AgPCStorageStream::setPosition(AgPCStorageStream *this, unsigned __int64 position)
{
  AgMutex *m_mutex; // rsi

  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  fseeki64_nolock(this->m_file, position, 0);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
}

__int64 __fastcall AgPCStorageStream::write(AgPCStorageStream *this, const unsigned __int8 *buffer, unsigned int size)
{
  AgPCStorageStream *v5; // rbx
  AgMutex *m_mutex; // r14
  const AgPointer<AgPlayer> *p_m_mount; // rdi
  AgPointer<AgMount> *v8; // rax
  AgPointer<AgMount> *v9; // rax
  AgPointer<AgPlayer> v11; // [rsp+38h] [rbp-30h] BYREF

  v5 = this;
  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  p_m_mount = (const AgPointer<AgPlayer> *)&v5->m_mount;
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    &v11,
    (const AgPointer<AgPlayer> *)&v5->m_mount);
  AgFileSystem::onWriteBegin((AgFileSystem *)AgSingleton<AgFileSystem>::ms_instance, v8);
  LODWORD(v5) = fwrite_nolock(buffer, 1ui64, size, v5->m_file);
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(&v11, p_m_mount);
  AgFileSystem::onWriteEnd((AgFileSystem *)AgSingleton<AgFileSystem>::ms_instance, v9);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
  return (unsigned int)v5;
}

