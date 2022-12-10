#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/agasyncstreamreader.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

AgAsyncStreamReader::AgAsyncStreamReader(AgPointer<AgStream> stream, unsigned long numBlocks, unsigned long long blockSize, unsigned long long streamOffset, unsigned long long streamSize); // 0x14068F190
AgAsyncStreamReader::~AgAsyncStreamReader(); // 0x14068F3C0
unsigned long AgAsyncStreamReader::read(unsigned char * buffer, unsigned long size); // 0x14068FAE0
unsigned long AgAsyncStreamReader::write(const unsigned char * buffer, unsigned long size); // 0x1400470F0
unsigned long long AgAsyncStreamReader::getSize(); // 0x14068F5F0
void AgAsyncStreamReader::setPosition(unsigned long long position); // 0x14068FC00
unsigned long long AgAsyncStreamReader::getPosition(); // 0x14012A870
void AgAsyncStreamReader::onExecuteThread(); // 0x14068F830
void AgAsyncStreamReader::onJoinThread(); // 0x14068F9C0
long AgAsyncStreamReader::getThreadIsRunning(); // 0x14068F600
void AgAsyncStreamReader::handleEndOfStreamWrite(); // 0x14068F790
void AgAsyncStreamReader::handleEndOfStreamRead(); // 0x14002E7C0
AgAsyncStreamReader::Block * AgAsyncStreamReader::getWriteBlock(); // 0x14068F660
void AgAsyncStreamReader::pushWriteBlock(); // 0x14068FA60
AgAsyncStreamReader::Block * AgAsyncStreamReader::getReadBlock(); // 0x14068F530void __fastcall AgAsyncStreamReader::AgAsyncStreamReader(
        AgAsyncStreamReader *this,
        AgPointer<AgStream> *stream,
        unsigned int numBlocks,
        unsigned __int64 blockSize,
        unsigned __int64 streamOffset,
        unsigned __int64 streamSize)
{
  AgController *v10; // rbx
  unsigned __int64 v11; // rax
  unsigned int i; // er8
  __int64 v13; // rcx
  AgThread *v14; // rax
  AgController *v15; // rax

  v10 = 0i64;
  this->m_refCount = 0i64;
  this->AgStream::__vftable = (AgAsyncStreamReader_vtbl *)&AgStream::`vftable';
  this->AgIThreadHost::__vftable = (AgIThreadHost_vtbl *)&AgIThreadHost::`vftable';
  this->AgStream::__vftable = (AgAsyncStreamReader_vtbl *)&AgAsyncStreamReader::`vftable'{for `AgStream'};
  this->AgIThreadHost::__vftable = (AgIThreadHost_vtbl *)&AgAsyncStreamReader::`vftable'{for `AgIThreadHost'};
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  this->m_numBlocks = numBlocks;
  this->m_blockSize = blockSize;
  this->m_streamOffset = streamOffset;
  this->m_streamSize = streamSize;
  *(_QWORD *)&this->m_writeCursor = 0i64;
  this->m_readPosition = 0i64;
  this->m_stream.m_ref = 0i64;
  this->m_stream.m_ptr = 0i64;
  this->m_loadingThread.m_ref = 0i64;
  this->m_loadingThread.m_ptr = 0i64;
  this->m_blocks = 0i64;
  this->m_workingBuffer = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_shutdownMutex);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  this->m_condition.m_conditionVariable.m_mutex = &this->m_condition.m_mutex;
  InitializeConditionVariable((PCONDITION_VARIABLE)&this->m_condition.m_conditionVariable.m_data);
  this->m_shutdownThread = 0;
  this->m_seeking = 0;
  AgPointer<AgStream>::operator=(&this->m_stream, stream);
  this->m_stream.m_ptr->setPosition(this->m_stream.m_ptr, this->m_streamOffset);
  if ( !this->m_streamSize )
    this->m_streamSize = this->m_stream.m_ptr->getSize(this->m_stream.m_ptr);
  v11 = 32i64 * this->m_numBlocks;
  if ( !is_mul_ok(this->m_numBlocks, 0x20ui64) )
    v11 = -1i64;
  this->m_blocks = (AgAsyncStreamReader::Block *)operator new[](v11);
  this->m_workingBuffer = (unsigned __int8 *)operator new[](blockSize * this->m_numBlocks);
  for ( i = 0; i < this->m_numBlocks; ++i )
  {
    v13 = i;
    this->m_blocks[v13].m_positionInStream = 0i64;
    this->m_blocks[v13].m_size = 0i64;
    this->m_blocks[v13].m_cursor = 0i64;
    this->m_blocks[v13].m_data = &this->m_workingBuffer[blockSize * i];
  }
  v14 = (AgThread *)operator new(0x28ui64);
  if ( v14 )
  {
    AgThread::AgThread(v14, &this->AgIThreadHost, 0x100000ui64, -1, "AgThread");
    v10 = v15;
  }
  AgPointer<AgThread>::operator=((AgPointer<AgController> *)&this->m_loadingThread, v10);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)stream);
}

void __fastcall AgAsyncStreamReader::~AgAsyncStreamReader(AgAsyncStreamReader *this)
{
  BOOL v2; // ebx
  unsigned __int64 v3; // rdx
  AgAsyncStreamReader::Block *m_blocks; // rcx
  unsigned __int8 *m_workingBuffer; // rcx
  _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+30h] [rbp-18h]

  this->AgStream::__vftable = (AgAsyncStreamReader_vtbl *)&AgAsyncStreamReader::`vftable'{for `AgStream'};
  this->AgIThreadHost::__vftable = (AgIThreadHost_vtbl *)&AgAsyncStreamReader::`vftable'{for `AgIThreadHost'};
  lpCriticalSection = (_RTL_CRITICAL_SECTION *)&this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v2 = this->m_shutdownThread == 0;
  LeaveCriticalSection(lpCriticalSection);
  if ( v2 )
    AgThread::join(this->m_loadingThread.m_ptr);
  AgPointer<AgThread>::operator=((AgPointer<AgController> *)&this->m_loadingThread, 0i64);
  m_blocks = this->m_blocks;
  if ( m_blocks )
  {
    operator delete(m_blocks, v3);
    this->m_blocks = 0i64;
  }
  m_workingBuffer = this->m_workingBuffer;
  if ( m_workingBuffer )
  {
    operator delete(m_workingBuffer, v3);
    this->m_workingBuffer = 0i64;
  }
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_shutdownMutex);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&this->m_loadingThread);
  AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)&this->m_stream);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  this->AgIThreadHost::__vftable = (AgIThreadHost_vtbl *)&AgIThreadHost::`vftable';
  this->AgStream::__vftable = (AgAsyncStreamReader_vtbl *)&AgStream::`vftable';
}

unsigned __int64 __fastcall Scaleform::GFx::AS3::IntervalTimer::GetNextInvokeTime(AgAsyncStreamReader *this)
{
  return this->m_readPosition;
}

AgAsyncStreamReader::Block *__fastcall AgAsyncStreamReader::getReadBlock(AgAsyncStreamReader *this)
{
  unsigned int m_readCursor; // eax

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  while ( this->m_readCursor >= this->m_writeCursor )
  {
    if ( this->m_shutdownThread )
      break;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
    SleepConditionVariableCS(
      (PCONDITION_VARIABLE)&this->m_condition.m_conditionVariable.m_data,
      (PCRITICAL_SECTION)this->m_condition.m_conditionVariable.m_mutex,
      0xFFFFFFFF);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  m_readCursor = this->m_readCursor;
  if ( m_readCursor < this->m_writeCursor )
    return &this->m_blocks[m_readCursor % this->m_numBlocks];
  else
    return 0i64;
}

unsigned __int64 __fastcall Scaleform::GFx::AS3::Instances::fl::XMLAttr::GetCurrNamespace(AgAsyncStreamReader *this)
{
  return this->m_streamSize;
}

__int64 __fastcall AgAsyncStreamReader::getThreadIsRunning(AgAsyncStreamReader *this)
{
  AgAsyncStreamReader *v1; // rbx
  _RTL_CRITICAL_SECTION *lpCriticalSection; // [rsp+30h] [rbp-18h]

  v1 = this;
  lpCriticalSection = (_RTL_CRITICAL_SECTION *)&this->AgReferencedObject;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->AgReferencedObject);
  LODWORD(v1) = LODWORD(v1->m_condition.m_conditionVariable.m_mutex) == 0;
  LeaveCriticalSection(lpCriticalSection);
  return (unsigned int)v1;
}

AgAsyncStreamReader::Block *__fastcall AgAsyncStreamReader::getWriteBlock(AgAsyncStreamReader *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  while ( 1 )
  {
    if ( this->m_writeCursor - this->m_readCursor < this->m_numBlocks - 1 && !this->m_seeking )
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
      return &this->m_blocks[this->m_writeCursor % this->m_numBlocks];
    }
    if ( this->m_shutdownThread )
      break;
    if ( this->m_seeking )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
      WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_condition.m_conditionVariable.m_data);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
    SleepConditionVariableCS(
      (PCONDITION_VARIABLE)&this->m_condition.m_conditionVariable.m_data,
      (PCRITICAL_SECTION)this->m_condition.m_conditionVariable.m_mutex,
      0xFFFFFFFF);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  return 0i64;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall AgAsyncStreamReader::handleEndOfStreamWrite(AgAsyncStreamReader *this)
{
  AgMutex *p_m_mutex; // rdi

  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  this->m_shutdownThread = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_condition.m_conditionVariable.m_data);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
}

void __fastcall AgAsyncStreamReader::onExecuteThread(AgAsyncStreamReader *this)
{
  AgAsyncStreamReader::Block *v2; // rdi
  __int64 v3; // rax
  unsigned __int64 v4; // rdx
  unsigned int v5; // eax

  while ( !LODWORD(this->m_condition.m_conditionVariable.m_mutex) )
  {
    v2 = AgAsyncStreamReader::getWriteBlock((AgAsyncStreamReader *)((char *)this - 16));
    EnterCriticalSection((LPCRITICAL_SECTION)&this->AgReferencedObject);
    if ( HIDWORD(this->m_condition.m_conditionVariable.m_mutex) )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->m_shutdownMutex.m_data.m_criticalSection.data[24]);
      WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_condition.m_mutex.m_data.m_criticalSection.data[32]);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_shutdownMutex.m_data.m_criticalSection.data[24]);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->AgReferencedObject);
    }
    else
    {
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->AgReferencedObject);
      if ( LODWORD(this->m_condition.m_conditionVariable.m_mutex) )
        break;
      v3 = (*(__int64 (__fastcall **)(unsigned __int64))(*(_QWORD *)this->m_readPosition + 48i64))(this->m_readPosition)
         - *(_QWORD *)&this->m_mutex.m_data.m_criticalSection.data[32];
      v2->m_positionInStream = v3;
      v2->m_cursor = 0i64;
      v4 = *(unsigned int *)&this->m_mutex.m_data.m_criticalSection.data[28];
      if ( *(_QWORD *)&this->m_numBlocks - v3 < v4 )
        v4 = *(_QWORD *)&this->m_numBlocks - v3;
      v5 = (*(__int64 (__fastcall **)(unsigned __int64, unsigned __int8 *, _QWORD))(*(_QWORD *)this->m_readPosition
                                                                                  + 16i64))(
             this->m_readPosition,
             v2->m_data,
             (unsigned int)v4);
      v2->m_size = v5;
      if ( v5 )
        AgAsyncStreamReader::pushWriteBlock((AgAsyncStreamReader *)((char *)this - 16));
      if ( v2->m_size < *(unsigned int *)&this->m_mutex.m_data.m_criticalSection.data[28] )
        (*(void (__fastcall **)(AgConditionVariableInternalData *))(*(_QWORD *)&this[-1].m_condition.m_conditionVariable.m_data
                                                                  + 96i64))(&this[-1].m_condition.m_conditionVariable.m_data);
    }
  }
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_blocks);
  if ( !LODWORD(this->m_condition.m_conditionVariable.m_mutex) )
    AgThread::detach((AgThread *)this->m_stream.m_ptr);
  LODWORD(this->m_condition.m_conditionVariable.m_mutex) = 1;
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_blocks);
}

void __fastcall AgAsyncStreamReader::onJoinThread(AgAsyncStreamReader *this)
{
  AgReferencedObject *v2; // rdi

  v2 = &this->AgReferencedObject;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->AgReferencedObject);
  LODWORD(this->m_condition.m_conditionVariable.m_mutex) = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_shutdownMutex.m_data.m_criticalSection.data[24]);
  WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_condition.m_mutex.m_data.m_criticalSection.data[32]);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_shutdownMutex.m_data.m_criticalSection.data[24]);
  LeaveCriticalSection((LPCRITICAL_SECTION)v2);
}

void __fastcall AgAsyncStreamReader::pushWriteBlock(AgAsyncStreamReader *this)
{
  AgMutex *p_m_mutex; // rdi

  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  ++this->m_writeCursor;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_condition.m_conditionVariable.m_data);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
}

__int64 __fastcall AgAsyncStreamReader::read(AgAsyncStreamReader *this, unsigned __int8 *buffer, unsigned int size)
{
  unsigned int v6; // er14
  AgAsyncStreamReader::Block *Block; // rax
  AgAsyncStreamReader::Block *v8; // rbp
  unsigned int v9; // esi

  v6 = 0;
  do
  {
    Block = AgAsyncStreamReader::getReadBlock(this);
    v8 = Block;
    if ( !Block )
      break;
    v9 = LODWORD(Block->m_size) - LODWORD(Block->m_cursor);
    if ( size - v6 < v9 )
      v9 = size - v6;
    memmove(&buffer[v6], &Block->m_data[Block->m_cursor], v9);
    v8->m_cursor += v9;
    v6 += v9;
    this->m_readPosition += v9;
    if ( v8->m_cursor == v8->m_size )
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
      ++this->m_readCursor;
      EnterCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
      WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_condition.m_conditionVariable.m_data);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
      if ( v8->m_size < this->m_blockSize )
      {
        this->handleEndOfStreamRead(this);
        return v6;
      }
    }
  }
  while ( size > v6 );
  return v6;
}

void __fastcall AgAsyncStreamReader::setPosition(AgAsyncStreamReader *this, unsigned __int64 position)
{
  unsigned int i; // edx
  __int64 v5; // rcx

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  this->m_seeking = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_condition.m_conditionVariable.m_data);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  SleepConditionVariableCS(
    (PCONDITION_VARIABLE)&this->m_condition.m_conditionVariable.m_data,
    (PCRITICAL_SECTION)this->m_condition.m_conditionVariable.m_mutex,
    0xFFFFFFFF);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  for ( i = 0; i < this->m_numBlocks; ++i )
  {
    v5 = i;
    this->m_blocks[v5].m_positionInStream = 0i64;
    this->m_blocks[v5].m_size = 0i64;
    this->m_blocks[v5].m_cursor = 0i64;
  }
  this->m_stream.m_ptr->setPosition(this->m_stream.m_ptr, position + this->m_streamOffset);
  *(_QWORD *)&this->m_writeCursor = 0i64;
  this->m_readPosition = position;
  this->m_seeking = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_condition.m_conditionVariable.m_data);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_condition);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

