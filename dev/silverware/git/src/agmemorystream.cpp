#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/src/platforms/pc/memory/agpcallocators.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/silverware/git/src/platforms/pc/memory/agpcsystemallocator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"

AgMemoryPoolLocked AgMemoryStream::s_pool; // 0x140A29370
void(*??s_pool$initializer$@AgMemoryStream@@0P6AXXZEA@@3P6AXXZEA)(); // 0x1407406A8
AgMemoryStream::AgMemoryStream(); // 0x14065C730
AgMemoryStream::AgMemoryStream(unsigned char * data, unsigned long long size, long ownsData); // 0x14065C650
AgMemoryStream::AgMemoryStream(AgPointer<AgFile> file); // 0x14065C6A0
void AgMemoryStream::setPosition(unsigned long long value); // 0x14065CA00
void AgMemoryStream::setSize(unsigned long long value); // 0x14065CA10
unsigned long AgMemoryStream::read(unsigned char * buffer, unsigned long size); // 0x14065C9A0
unsigned long AgMemoryStream::write(const unsigned char * buffer, unsigned long size); // 0x14065CB20
unsigned long AgMemoryStream::write(AgPointer<AgStream> stream); // 0x14065CA70
unsigned long long AgMemoryStream::getPosition(); // 0x1400B8090
unsigned long long AgMemoryStream::getSize(); // 0x14065C990
unsigned char * AgMemoryStream::getData(); // 0x14065ED30//decompilation failure at 140A29370!
//decompilation failure at 1407406A8!
void __fastcall AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
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

AgPointer<AgStream> *__fastcall AgPointer<AgFile>::operator<AgStream> AgPointer<AgStream>(
        AgPointer<AgFile> *this,
        AgPointer<AgStream> *result)
{
  AgPointer<AgBuffer<AgAllocator<1>>>::AgPointer<AgBuffer<AgAllocator<1>>>(
    (AgPointer<AgPlayer> *)result,
    (const AgPointer<AgPlayer> *)this);
  return result;
}

void __fastcall AgMemoryStream::AgMemoryStream(
        AgMemoryStream *this,
        unsigned __int8 *data,
        unsigned __int64 size,
        int ownsData)
{
  this->m_refCount = 0i64;
  this->__vftable = (AgMemoryStream_vtbl *)&AgStream::`vftable';
  this->__vftable = (AgMemoryStream_vtbl *)&AgMemoryStream::`vftable';
  this->m_data = data;
  this->m_size = size;
  this->m_position = 0i64;
  this->m_capacity = size;
  this->m_changed = 0;
  this->m_ownsData = ownsData;
}

void __fastcall AgMemoryStream::AgMemoryStream(AgMemoryStream *this, AgPointer<AgFile> *file)
{
  AgPointer<AgStream> *v4; // rax
  AgPointer<AgStream> result; // [rsp+28h] [rbp-30h] BYREF

  this->m_refCount = 0i64;
  this->__vftable = (AgMemoryStream_vtbl *)&AgStream::`vftable';
  this->__vftable = (AgMemoryStream_vtbl *)&AgMemoryStream::`vftable';
  this->m_data = 0i64;
  this->m_size = 0i64;
  this->m_position = 0i64;
  this->m_capacity = 0i64;
  this->m_changed = 0;
  this->m_ownsData = 1;
  v4 = AgPointer<AgFile>::operator<AgStream> AgPointer<AgStream>(file, &result);
  AgMemoryStream::write(this, v4);
  this->m_position = 0i64;
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)file);
}

void __fastcall AgMemoryStream::AgMemoryStream(AgMemoryStream *this)
{
  this->m_refCount = 0i64;
  this->__vftable = (AgMemoryStream_vtbl *)&AgStream::`vftable';
  this->__vftable = (AgMemoryStream_vtbl *)&AgMemoryStream::`vftable';
  this->m_data = 0i64;
  this->m_size = 0i64;
  this->m_position = 0i64;
  this->m_capacity = 0i64;
  this->m_changed = 0;
  this->m_ownsData = 1;
}

void __fastcall AgMemoryPoolImpl<AgMutex,AgMutex>::~AgMemoryPoolImpl<AgMutex,AgMutex>(
        AgMemoryPoolImpl<AgMutex,AgMutex> *this)
{
  AgMemoryPoolImpl<AgMutex,AgMutex>::free(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
}

void __fastcall AgStream::~AgStream(AgStream *this)
{
  this->__vftable = (AgStream_vtbl *)&AgStream::`vftable';
}

AgPointer<AgStream> *__fastcall AgStream::clone(AgStream *this, AgPointer<AgStream> *result)
{
  result->m_ref = 0i64;
  result->m_ptr = 0i64;
  return result;
}

void __fastcall AgMemoryPoolImpl<AgMutex,AgMutex>::free(AgMemoryPoolImpl<AgMutex,AgMutex> *this)
{
  AgMutex *p_m_lock; // rsi
  unsigned __int64 v3; // rdx
  AgMemoryPoolImpl<AgMutex,AgMutex>::BlockHeader *m_blocks; // rcx
  AgMemoryPoolImpl<AgMutex,AgMutex>::BlockHeader *m_next; // rbx

  p_m_lock = &this->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  m_blocks = this->m_blocks;
  if ( m_blocks )
  {
    do
    {
      m_next = m_blocks->m_next;
      operator delete(m_blocks, v3);
      m_blocks = m_next;
    }
    while ( m_next );
  }
  this->m_free = 0i64;
  *(_QWORD *)&this->m_capacity = 0i64;
  this->m_blocks = 0i64;
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
}

AgAudioChannelData *__fastcall AgAudioChannel::getInternalData(AgAudioChannel *this)
{
  return this->m_internalData;
}

AgStringRef *__fastcall AgMemoryStream::getName(AgBufferStream<AgBuffer<AgAllocator<1> > > *this, AgStringRef *result)
{
  AgStringRef::AgStringRef(result, "Memory");
  return result;
}

AgStringRef *__fastcall AgStream::getName(AgStream *this, AgStringRef *result)
{
  AgStringRef::AgStringRef(result, "Unknown");
  return result;
}

unsigned __int64 __fastcall Actor::GetActionSystem(AgMemoryStream *this)
{
  return this->m_position;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

unsigned __int64 __fastcall AgMemoryStream::getSize(AgMemoryStream *this)
{
  return this->m_size;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

__int64 __fastcall AgMemoryStream::read(AgMemoryStream *this, unsigned __int8 *buffer, unsigned int size)
{
  __int64 v3; // rsi
  unsigned __int64 m_position; // r8

  v3 = size;
  m_position = this->m_position;
  if ( m_position + v3 > this->m_size )
    LODWORD(v3) = LODWORD(this->m_size) - m_position;
  memmove(buffer, &this->m_data[m_position], (unsigned int)v3);
  this->m_position += (unsigned int)v3;
  return (unsigned int)v3;
}

void __fastcall Scaleform::GFx::ASIMEManager::SetActiveMovie(AgMemoryStream *this, unsigned __int64 value)
{
  this->m_position = value;
}

void __fastcall AgMemoryStream::setSize(AgMemoryStream *this, unsigned __int64 value)
{
  unsigned __int8 *m_data; // rcx

  if ( this->m_capacity >= value )
  {
    this->m_size = value;
  }
  else
  {
    m_data = this->m_data;
    if ( m_data )
      operator delete(m_data, value);
    this->m_data = (unsigned __int8 *)operator new[]((unsigned int)value);
    this->m_capacity = value;
    this->m_size = value;
  }
}

__int64 __fastcall AgMemoryStream::write(AgMemoryStream *this, AgPointer<AgStream> *stream)
{
  unsigned __int64 v4; // rsi
  unsigned __int64 v5; // r14
  unsigned __int8 *m_data; // rbx
  unsigned __int8 *v7; // rax
  unsigned __int64 v8; // rdx

  v4 = stream->m_ptr->getSize(stream->m_ptr);
  v5 = v4 + this->m_position;
  if ( v5 > this->m_capacity )
  {
    m_data = this->m_data;
    v7 = (unsigned __int8 *)operator new[]((unsigned int)v5);
    this->m_data = v7;
    memmove(v7, m_data, LODWORD(this->m_size));
    operator delete(m_data, v8);
    this->m_capacity = v5;
  }
  stream->m_ptr->read(stream->m_ptr, &this->m_data[this->m_position], v4);
  this->m_size = v4;
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
  return (unsigned int)v4;
}

__int64 __fastcall AgMemoryStream::write(AgMemoryStream *this, const unsigned __int8 *buffer, unsigned int size)
{
  size_t v4; // rsi
  unsigned __int64 m_capacity; // rcx
  unsigned __int64 v7; // rbp
  unsigned __int8 *m_data; // rbx
  unsigned __int8 *v9; // rax
  size_t m_size_low; // r8
  unsigned __int64 v11; // rdx
  unsigned __int64 m_position; // rax

  v4 = size;
  m_capacity = this->m_capacity;
  if ( size + this->m_position > m_capacity )
  {
    v7 = size + LODWORD(this->m_position);
    if ( v7 > m_capacity )
    {
      m_data = this->m_data;
      v9 = (unsigned __int8 *)operator new[]((unsigned int)v7);
      m_size_low = LODWORD(this->m_size);
      this->m_data = v9;
      memmove(v9, m_data, m_size_low);
      operator delete(m_data, v11);
      this->m_capacity = v7;
    }
  }
  memmove(&this->m_data[this->m_position], buffer, v4);
  this->m_position += v4;
  m_position = this->m_position;
  if ( m_position > this->m_size )
    this->m_size = m_position;
  return (unsigned int)v4;
}

