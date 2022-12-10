#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/silverware/git/sdk/memory/agbuffer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/memory/agbufferstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/src/platforms/shared/filesystem/agvirtualmount.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"

AgVirtualFileStream::AgVirtualFileStream(AgPointer<AgBuffer<AgAllocator<1> > > buffer, AgPointer<AgMount> mount, const AgPath & path, unsigned long accessMode); // 0x1406A0C00
AgBufferStream<AgBuffer<AgAllocator<1> > >::~AgBufferStream<AgBuffer<AgAllocator<1> > >(); // 0x1406A0D30
AgVirtualFileStream::~AgVirtualFileStream(); // 0x1406A0D60
unsigned long AgVirtualFileStream::read(unsigned char * buffer, unsigned long size); // 0x1406A0FC0
unsigned long AgVirtualFileStream::write(const unsigned char * buffer, unsigned long size); // 0x1406A10D0
unsigned long long AgVirtualFileStream::getSize(); // 0x1406A0F50
void AgVirtualFileStream::setPosition(unsigned long long position); // 0x1406A1050
unsigned long long AgVirtualFileStream::getPosition(); // 0x1406A0EE0
void AgVirtualFileStream::_store(); // 0x1406A0E40void __fastcall AgVirtualFileStream::AgVirtualFileStream(
        AgVirtualFileStream *this,
        AgPointer<AgBuffer<AgAllocator<1> > > *buffer,
        AgPointer<AgMount> *mount,
        const AgPath *path,
        unsigned int accessMode)
{
  AgPointer<AgMount> *v9; // rax
  AgBuffer<AgAllocator<1> > *m_ptr; // rbx
  unsigned __int8 *m_data; // rdx
  AgFileErrorData errorData; // [rsp+28h] [rbp-50h] BYREF
  AgPointer<AgPlayer> v13; // [rsp+38h] [rbp-40h] BYREF

  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(&v13, (const AgPointer<AgPlayer> *)mount);
  AgFile::AgFile(this, v9, path, accessMode);
  this->__vftable = (AgVirtualFileStream_vtbl *)&AgVirtualFileStream::`vftable';
  *(_QWORD *)&errorData.error = &this->m_internalStream;
  this->m_internalStream.m_refCount = 0i64;
  this->m_internalStream.__vftable = (AgBufferStream<AgBuffer<AgAllocator<1> > >_vtbl *)&AgStream::`vftable';
  this->m_internalStream.__vftable = (AgBufferStream<AgBuffer<AgAllocator<1> > >_vtbl *)&AgBufferStream<AgBuffer<AgAllocator<1>>>::`vftable';
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)&this->m_internalStream.m_buffer,
    (const AgPointer<AgPlayer> *)buffer);
  this->m_internalStream.m_bufferOffset = 0i64;
  this->m_internalStream.m_bufferSize = -1i64;
  this->m_internalStream.m_bufferPosition = 0i64;
  if ( buffer->m_ptr )
  {
    AgFile::setOpen(this, 1);
    if ( (accessMode & 2) != 0 )
    {
      m_ptr = buffer->m_ptr;
      m_data = m_ptr->m_data;
      if ( m_data )
      {
        AgAllocator<1>::deallocate(&m_ptr->m_allocator, m_data);
        m_ptr->m_data = 0i64;
        m_ptr->m_size = 0i64;
      }
      m_ptr->m_data = 0i64;
      m_ptr->m_size = 0i64;
    }
  }
  else
  {
    errorData.error = AgFileError_NotFound;
    errorData.systemError = 0i64;
    AgFile::setError(this, &errorData);
  }
  AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(buffer);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)mount);
}

void __fastcall AgBufferStream<AgBuffer<AgAllocator<1>>>::~AgBufferStream<AgBuffer<AgAllocator<1>>>(
        AgBufferStream<AgBuffer<AgAllocator<1> > > *this)
{
  AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&this->m_buffer);
  this->__vftable = (AgBufferStream<AgBuffer<AgAllocator<1> > >_vtbl *)&AgStream::`vftable';
}

void __fastcall AgVirtualFileStream::~AgVirtualFileStream(AgVirtualFileStream *this)
{
  AgBufferStream<AgBuffer<AgAllocator<1> > > *p_m_internalStream; // rbx
  unsigned __int64 v3; // rdx

  this->__vftable = (AgVirtualFileStream_vtbl *)&AgVirtualFileStream::`vftable';
  p_m_internalStream = &this->m_internalStream;
  AgPointer<AgBuffer<AgAllocator<1>>>::~AgPointer<AgBuffer<AgAllocator<1>>>(&this->m_internalStream.m_buffer);
  p_m_internalStream->__vftable = (AgBufferStream<AgBuffer<AgAllocator<1> > >_vtbl *)&AgStream::`vftable';
  AgFile::~AgFile(this, v3);
}

void __fastcall AgVirtualFileStream::_store(AgVirtualFileStream *this)
{
  AgMutex *m_mutex; // rdi

  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  if ( this->m_flushed && !this->m_storing )
  {
    AgFile::setStoring(this, 1);
    if ( this->m_open )
      AgFile::setModified(this, 0);
    AgFile::setStoring(this, 0);
    AgFile::setFlushed(this, 0);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
}

unsigned __int64 __fastcall AgVirtualFileStream::getPosition(AgVirtualFileStream *this)
{
  AgMutex *m_mutex; // rdi
  unsigned __int64 v3; // rbx

  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  v3 = this->m_internalStream.getPosition(&this->m_internalStream);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
  return v3;
}

unsigned __int64 __fastcall AgVirtualFileStream::getSize(AgVirtualFileStream *this)
{
  AgMutex *m_mutex; // rdi
  unsigned __int64 v3; // rbx

  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  v3 = this->m_internalStream.getSize(&this->m_internalStream);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
  return v3;
}

__int64 __fastcall AgVirtualFileStream::read(AgVirtualFileStream *this, unsigned __int8 *buffer, unsigned int size)
{
  AgVirtualFileStream *v5; // rbx
  AgMutex *m_mutex; // rbp

  v5 = this;
  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  LODWORD(v5) = v5->m_internalStream.read(&v5->m_internalStream, buffer, size);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
  return (unsigned int)v5;
}

void __fastcall AgVirtualFileStream::setPosition(AgVirtualFileStream *this, unsigned __int64 position)
{
  AgMutex *m_mutex; // rsi

  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  this->m_internalStream.setPosition(&this->m_internalStream, position);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
}

__int64 __fastcall AgVirtualFileStream::write(
        AgVirtualFileStream *this,
        const unsigned __int8 *buffer,
        unsigned int size)
{
  AgMutex *m_mutex; // rsi
  unsigned int v7; // ebx

  m_mutex = this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)m_mutex);
  v7 = this->m_internalStream.write(&this->m_internalStream, buffer, size);
  if ( v7 )
    AgFile::setModified(this, 1);
  LeaveCriticalSection((LPCRITICAL_SECTION)m_mutex);
  return v7;
}

