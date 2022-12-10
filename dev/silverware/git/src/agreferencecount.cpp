#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"

AgThreadedMemoryPool * s_pool; // 0x140A8FCB0
AgMemoryPool::~AgMemoryPool(); // 0x1406575A0
void * AgReferenceCount::operator new(unsigned long long __formal); // 0x1406575F0
void AgReferenceCount::operator delete(void * p); // 0x140657720//decompilation failure at 140A8FCB0!
void __fastcall AgMemoryPool::AgMemoryPool(AgMemoryPool *this)
{
  this->m_free = 0i64;
  this->m_blocks = 0i64;
  *(_QWORD *)&this->m_itemSize = 0i64;
  this->m_used = 0;
  this->m_growPercent = 100;
}

void __fastcall AgMemoryPoolImpl<void,int>::~AgMemoryPoolImpl<void,int>(
        AgMemoryPoolImpl<void,int> *this,
        unsigned __int64 a2)
{
  AgMemoryPoolImpl<void,int>::BlockHeader *m_blocks; // rcx
  AgMemoryPoolImpl<void,int>::BlockHeader *m_next; // rbx

  m_blocks = this->m_blocks;
  if ( m_blocks )
  {
    do
    {
      m_next = m_blocks->m_next;
      operator delete(m_blocks, a2);
      m_blocks = m_next;
    }
    while ( m_next );
  }
  this->m_free = 0i64;
  *(_QWORD *)&this->m_capacity = 0i64;
  this->m_blocks = 0i64;
}

void __fastcall AgMemoryPool::~AgMemoryPool(AgMemoryPool *this, unsigned __int64 a2)
{
  AgMemoryPoolImpl<void,int>::BlockHeader *m_blocks; // rcx
  AgMemoryPoolImpl<void,int>::BlockHeader *m_next; // rbx

  m_blocks = this->m_blocks;
  if ( m_blocks )
  {
    do
    {
      m_next = m_blocks->m_next;
      operator delete(m_blocks, a2);
      m_blocks = m_next;
    }
    while ( m_next );
  }
  this->m_free = 0i64;
  *(_QWORD *)&this->m_capacity = 0i64;
  this->m_blocks = 0i64;
}

void *__fastcall AgReferenceCount::operator new(unsigned __int64 __formal)
{
  AgThreadedMemoryPool *v1; // rdi
  __int64 v2; // rsi
  unsigned int *p_m_capacity; // rbx
  _DWORD *v4; // r8
  int v5; // edx
  _QWORD *v6; // rcx

  v1 = s_pool;
  if ( !s_pool )
  {
    v1 = (AgThreadedMemoryPool *)operator new(0x148ui64);
    if ( v1 )
    {
      v2 = 4i64;
      `eh vector constructor iterator'(
        v1,
        0x28ui64,
        4ui64,
        (void (__fastcall *)(void *))AgMutex::`default constructor closure',
        (void (__fastcall *)(void *))AgMutex::~AgMutex);
      `eh vector constructor iterator'(
        v1->m_pools,
        0x28ui64,
        4ui64,
        (void (__fastcall *)(void *))AgMemoryPool::AgMemoryPool,
        (void (__fastcall *)(void *))AgMemoryPool::~AgMemoryPool);
      v1->m_cursor = 0;
      p_m_capacity = &v1->m_pools[0].m_capacity;
      do
      {
        p_m_capacity[2] = 100;
        *(p_m_capacity - 1) = 16;
        v4 = operator new[](0x4010ui64);
        *(_QWORD *)v4 = *(_QWORD *)(p_m_capacity - 3);
        v4[2] = 1024;
        *(_QWORD *)(p_m_capacity - 3) = v4;
        v5 = 1024;
        do
        {
          v6 = (_QWORD *)((char *)v4 + --v5 * *(p_m_capacity - 1) + 16);
          *v6 = *(_QWORD *)(p_m_capacity - 5);
          *(_QWORD *)(p_m_capacity - 5) = v6;
        }
        while ( v5 );
        *p_m_capacity += 1024;
        p_m_capacity += 10;
        --v2;
      }
      while ( v2 );
    }
    else
    {
      v1 = 0i64;
    }
    s_pool = v1;
  }
  return AgThreadedMemoryPool::alloc(v1);
}

void __fastcall AgReferenceCount::operator delete(void *p)
{
  AgThreadedMemoryPool::release(s_pool, p);
}

void __fastcall AgMemoryPoolImpl<AgMutex,AgMutex>::_grow(AgMemoryPoolImpl<void,int> *this, unsigned int num)
{
  AgMemoryPoolImpl<void,int>::BlockHeader *v4; // r8
  unsigned int v5; // edx
  unsigned __int8 *v6; // rcx

  if ( num )
  {
    v4 = (AgMemoryPoolImpl<void,int>::BlockHeader *)operator new[](num * this->m_itemSize + 16i64);
    v5 = num;
    v4->m_next = this->m_blocks;
    v4->m_num = num;
    this->m_blocks = v4;
    do
    {
      v6 = (unsigned __int8 *)&v4[1] + --v5 * this->m_itemSize;
      *(_QWORD *)v6 = this->m_free;
      this->m_free = v6;
    }
    while ( v5 );
    this->m_capacity += num;
  }
}

unsigned __int8 *__fastcall AgThreadedMemoryPool::alloc(AgThreadedMemoryPool *this)
{
  __int64 v2; // rbx
  _RTL_CRITICAL_SECTION *v3; // rsi
  AgMemoryPool *v4; // rbx
  int m_growPercent; // eax
  unsigned int v6; // eax
  unsigned int v7; // edx
  unsigned __int8 *m_free; // rdi

  v2 = AgAtomicIncrement(&this->m_cursor) & 3;
  v3 = (_RTL_CRITICAL_SECTION *)&this->m_mutexes[v2];
  EnterCriticalSection(v3);
  v4 = &this->m_pools[v2];
  if ( !v4->m_free )
  {
    m_growPercent = v4->m_growPercent;
    if ( m_growPercent )
    {
      v6 = (int)(float)((float)((float)m_growPercent * (float)(int)v4->m_capacity) * 0.0099999998);
      v7 = 4;
      if ( v6 > 4 )
        v7 = v6;
      AgMemoryPoolImpl<AgMutex,AgMutex>::_grow(v4, v7);
    }
  }
  m_free = v4->m_free;
  if ( v4->m_free )
  {
    v4->m_free = *(unsigned __int8 **)m_free;
    ++v4->m_used;
  }
  LeaveCriticalSection(v3);
  return m_free;
}

void __fastcall AgThreadedMemoryPool::release(AgThreadedMemoryPool *this, void *p)
{
  __int64 v4; // rbx
  AgMemoryPool *v5; // rdx

  v4 = AgAtomicIncrement(&this->m_cursor) & 3;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutexes[v4]);
  v5 = &this->m_pools[v4];
  *(_QWORD *)p = v5->m_free;
  v5->m_free = (unsigned __int8 *)p;
  --v5->m_used;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutexes[v4]);
}

