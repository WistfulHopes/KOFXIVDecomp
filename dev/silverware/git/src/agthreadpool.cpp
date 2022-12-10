#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/agcondition.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/agringbuffer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/agmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agqueue.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"

class AgThreadPool::ThreadHost :
	AgSimpleThreadHost
{
public:
	ThreadHost(AgThreadPool::ThreadHost &);
	ThreadHost(const AgThreadPool::ThreadHost &);
	ThreadHost(AgThreadPool *);
	virtual void onExecuteThread();
private:
	AgThreadPool * m_pool; // 0x10
public:
	virtual ~ThreadHost();
	AgThreadPool::ThreadHost & operator=(AgThreadPool::ThreadHost &);
	AgThreadPool::ThreadHost & operator=(const AgThreadPool::ThreadHost &);
};
void AgThreadPool::ThreadHost::onExecuteThread(); // 0x14067F050
AgThreadPool::AgThreadPool(); // 0x14067DE40
AgThreadPool::~AgThreadPool(); // 0x14067E080
void AgThreadPool::init(unsigned long maxJobs, unsigned long numThreads, long allowWorkInIdle, long threadPriority, const char * name); // 0x14067EA80
void AgThreadPool::free(); // 0x14067E7F0
unsigned long AgThreadPool::getUniqueGroupID(); // 0x14067E900
AgJobCompletion AgThreadPool::pushJob(AgThreadPool::Job * job); // 0x14067F340
void AgThreadPool::workerThreadFunction(AgThreadPool::ThreadHost * host); // 0x14067F890
struct FindJobByIdPredicate
{
	FindJobByIdPredicate(unsigned long);
	long operator()(AgThreadPool::Job *);
private:
	unsigned long m_id; // 0x0
};
struct FindJobByGroupIdPredicate
{
	FindJobByGroupIdPredicate(unsigned long);
	long operator()(AgThreadPool::Job *);
private:
	unsigned long m_id; // 0x0
};
long AgThreadPool::isJobComplete(unsigned long jobid); // 0x14067EEB0
long AgThreadPool::isGroupComplete(unsigned long groupid); // 0x14067ED80
void AgThreadPool::waitForGroup(unsigned long groupid); // 0x14067F630
void AgThreadPool::waitForSpace(unsigned long requiredSpace); // 0x14067F750
long AgThreadPool::processCompletedJobs(); // 0x14067F1D0
struct GetRemoveJobPredicate
{
	GetRemoveJobPredicate(AgThreadPool::Job *);
	long operator()(AgThreadPool::Job *);
private:
	AgThreadPool::Job * m_removeJob; // 0x0
};
void AgThreadPool::runJob(AgThreadPool::Job * job); // 0x14067F400
long AgThreadPool::nextJob(AgThreadPool::Job * & job, long timeout); // 0x14067EFE0
struct CancelJobPredicate
{
	CancelJobPredicate(unsigned long);
	long operator()(AgThreadPool::Job *);
private:
	unsigned long m_cancelJobId; // 0x0
};
long AgThreadPool::cancelJob(unsigned long jobId); // 0x14067E530
long AgThreadPool::cancelAllJobs(); // 0x14067E3C0
struct GetPriorityPredicate
{
	long operator()(AgThreadPool::Job *);
};void __fastcall std::_Destroy_range<std::allocator<AgPointer<AgThread>>,AgPointer<AgThread> *>(
        AgPointer<AgUser> *_First,
        AgPointer<AgUser> *_Last,
        std::_Wrap_alloc<std::allocator<AgPointer<AgUser> > > *_Al)
{
  AgPointer<AgUser> *v4; // rbx

  if ( _First != _Last )
  {
    v4 = _First;
    do
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)v4++);
    while ( v4 != _Last );
  }
}

AgPointer<AgThread> *__fastcall std::_Uninitialized_move_al_unchecked1<AgPointer<AgThread> *,AgPointer<AgThread> *,std::allocator<AgPointer<AgThread>>>(
        AgPointer<AgThread> *_First,
        AgPointer<AgThread> *_Last,
        AgPointer<AgThread> *_Dest,
        std::_Wrap_alloc<std::allocator<AgPointer<AgThread> > > *_Al)
{
  while ( _First != _Last )
  {
    if ( _Dest )
    {
      *_Dest = *_First;
      _First->m_ref = 0i64;
      _First->m_ptr = 0i64;
    }
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

void __fastcall AgThreadPool::AgThreadPool(AgThreadPool *this)
{
  AgThreadPool::ThreadHost *v2; // rax

  this->__vftable = (AgThreadPool_vtbl *)&AgThreadPool::`vftable';
  this->m_work.m_buffer.m_baseMem = 0i64;
  this->m_work.m_buffer.m_returnedMem = 0i64;
  this->m_work.m_buffer.m_numItems = 0;
  this->m_work.m_sem.m_data.m_aborted = 0;
  this->m_work.m_sem.m_data.m_sem = 0i64;
  this->m_work.m_sem.m_data.m_sem = CreateSemaphoreA(0i64, 0, 0x7FFFFFFF, 0i64);
  this->m_working.m_buffer.m_baseMem = 0i64;
  this->m_working.m_buffer.m_returnedMem = 0i64;
  this->m_working.m_buffer.m_numItems = 0;
  this->m_working.m_sem.m_data.m_aborted = 0;
  this->m_working.m_sem.m_data.m_sem = 0i64;
  this->m_working.m_sem.m_data.m_sem = CreateSemaphoreA(0i64, 0, 0x7FFFFFFF, 0i64);
  this->m_completed.m_buffer.m_baseMem = 0i64;
  this->m_completed.m_buffer.m_returnedMem = 0i64;
  this->m_completed.m_buffer.m_numItems = 0;
  this->m_completed.m_sem.m_data.m_aborted = 0;
  this->m_completed.m_sem.m_data.m_sem = 0i64;
  this->m_completed.m_sem.m_data.m_sem = CreateSemaphoreA(0i64, 0, 0x7FFFFFFF, 0i64);
  this->m_threads._Mypair._Myval2._Myfirst = 0i64;
  this->m_threads._Mypair._Myval2._Mylast = 0i64;
  this->m_threads._Mypair._Myval2._Myend = 0i64;
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
  this->m_completion.m_conditionVariable.m_mutex = &this->m_completion.m_mutex;
  InitializeConditionVariable((PCONDITION_VARIABLE)&this->m_completion.m_conditionVariable.m_data);
  this->m_jobCount = 0;
  this->m_uniqueJobID = 0;
  this->m_uniqueGroupID = 0;
  this->m_allowWorkInIdle = 0;
  v2 = (AgThreadPool::ThreadHost *)operator new(0x18ui64);
  if ( v2 )
  {
    v2->__vftable = (AgThreadPool::ThreadHost_vtbl *)&AgIThreadHost::`vftable';
    v2->__vftable = (AgThreadPool::ThreadHost_vtbl *)&AgSimpleThreadHost::`vftable';
    v2->m_abort = 0;
    v2->m_running = 1;
    v2->__vftable = (AgThreadPool::ThreadHost_vtbl *)&AgThreadPool::ThreadHost::`vftable';
    v2->m_pool = this;
  }
  else
  {
    v2 = 0i64;
  }
  this->m_threadHost = v2;
}

void __fastcall AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::~AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>(
        AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1> *this)
{
  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(this);
}

void __fastcall AgQueue<AgThreadPool::Job *>::~AgQueue<AgThreadPool::Job *>(AgQueue<AgThreadPool::Job *> *this)
{
  void *m_sem; // rcx

  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(&this->m_buffer);
  if ( !this->m_sem.m_data.m_aborted )
  {
    this->m_sem.m_data.m_aborted = 1;
    ReleaseSemaphore(this->m_sem.m_data.m_sem, 1000, 0i64);
  }
  m_sem = this->m_sem.m_data.m_sem;
  if ( m_sem )
    CloseHandle(m_sem);
  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(&this->m_buffer);
}

void __fastcall AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::~AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>(
        AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex> *this)
{
  AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::free(this);
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
}

void __fastcall std::vector<AgPointer<AgThread>>::~vector<AgPointer<AgThread>>(std::vector<AgPointer<AgThread>> *this)
{
  std::vector<AgPointer<AgThread>>::_Tidy((std::vector<AgPointer<AgUser>> *)this);
}

void __fastcall AgThreadPool::~AgThreadPool(AgThreadPool *this)
{
  AgThreadPool::ThreadHost *m_threadHost; // rcx
  void *m_sem; // rcx
  void *v4; // rcx
  AgQueue<AgThreadPool::Job *> *p_m_work; // rbx
  void *v6; // rcx

  this->__vftable = (AgThreadPool_vtbl *)&AgThreadPool::`vftable';
  AgThreadPool::free(this);
  m_threadHost = this->m_threadHost;
  if ( m_threadHost )
    ((void (__fastcall *)(AgThreadPool::ThreadHost *, __int64))m_threadHost->~AgIThreadHost)(m_threadHost, 1i64);
  this->m_threadHost = 0i64;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
  std::vector<AgPointer<AgThread>>::_Tidy((std::vector<AgPointer<AgUser>> *)&this->m_threads);
  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(&this->m_completed.m_buffer);
  if ( !this->m_completed.m_sem.m_data.m_aborted )
  {
    this->m_completed.m_sem.m_data.m_aborted = 1;
    ReleaseSemaphore(this->m_completed.m_sem.m_data.m_sem, 1000, 0i64);
  }
  m_sem = this->m_completed.m_sem.m_data.m_sem;
  if ( m_sem )
    CloseHandle(m_sem);
  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(&this->m_completed.m_buffer);
  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(&this->m_working.m_buffer);
  if ( !this->m_working.m_sem.m_data.m_aborted )
  {
    this->m_working.m_sem.m_data.m_aborted = 1;
    ReleaseSemaphore(this->m_working.m_sem.m_data.m_sem, 1000, 0i64);
  }
  v4 = this->m_working.m_sem.m_data.m_sem;
  if ( v4 )
    CloseHandle(v4);
  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(&this->m_working.m_buffer);
  p_m_work = &this->m_work;
  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(&p_m_work->m_buffer);
  if ( !p_m_work->m_sem.m_data.m_aborted )
  {
    p_m_work->m_sem.m_data.m_aborted = 1;
    ReleaseSemaphore(p_m_work->m_sem.m_data.m_sem, 1000, 0i64);
  }
  v6 = p_m_work->m_sem.m_data.m_sem;
  if ( v6 )
    CloseHandle(v6);
  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(&p_m_work->m_buffer);
}

void __fastcall std::vector<AgPointer<AgThread>>::_Reallocate(
        std::vector<AgPointer<AgThread>> *this,
        unsigned __int64 _Count)
{
  AgPointer<AgThread> *v4; // r12
  AgPointer<AgThread> *Mylast; // r14
  AgPointer<AgThread> *Myfirst; // rbx
  signed __int64 v7; // rsi

  v4 = (AgPointer<AgThread> *)std::allocator<AgDelegate1<AgShutdownEvent const &,void>>::allocate(
                                (std::allocator<AgDelegate1<AgShutdownEvent const &,void> > *)this,
                                _Count);
  std::_Uninitialized_move_al_unchecked1<AgPointer<AgThread> *,AgPointer<AgThread> *,std::allocator<AgPointer<AgThread>>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    (std::_Wrap_alloc<std::allocator<AgPointer<AgThread> > > *)this);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v7 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)Myfirst);
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = (AgPointer<AgThread> *)((char *)v4 + (v7 & 0xFFFFFFFFFFFFFFF0ui64));
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<AgPointer<AgThread>>::_Reserve(
        std::vector<AgPointer<AgThread>> *this,
        unsigned __int64 _Count)
{
  AgPointer<AgThread> *Myend; // r10
  AgPointer<AgThread> *Mylast; // r8
  AgPointer<AgThread> *Myfirst; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( 0xFFFFFFFFFFFFFFFi64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0xFFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<AgPointer<AgThread>>::_Reallocate(this, v7);
  }
}

void __fastcall std::vector<AgPointer<AgThread>>::_Tidy(std::vector<AgPointer<AgUser>> *this)
{
  AgPointer<AgUser> *Myfirst; // rbx
  AgPointer<AgUser> *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)Myfirst);
    std::_Wrap_alloc<std::allocator<AgDelegate1<AgSuspendingEvent const &,void>>>::deallocate(
      (std::_Wrap_alloc<std::allocator<AgDelegate1<AgUserUpdatedEvent const &,void> > > *)this,
      (AgDelegate1<AgUserUpdatedEvent const &,void> *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

AgDelegate1<AgShutdownEvent const &,void> *__fastcall std::allocator<AgDelegate1<AgShutdownEvent const &,void>>::allocate(
        std::allocator<AgDelegate1<AgShutdownEvent const &,void> > *this,
        unsigned __int64 _Count)
{
  AgDelegate1<AgShutdownEvent const &,void> *result; // rax
  unsigned __int64 v3; // rdx
  void (__fastcall *v4)(detail::GenericClass *); // rax
  void (__fastcall *v5)(detail::GenericClass *); // rcx

  if ( !_Count )
    return 0i64;
  if ( _Count > 0xFFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 16 * _Count;
  if ( v3 < 0x1000 )
  {
    result = (AgDelegate1<AgShutdownEvent const &,void> *)operator new(v3);
    if ( !result )
      invalid_parameter_noinfo_noreturn();
  }
  else
  {
    if ( v3 + 39 <= v3 )
      std::_Xbad_alloc();
    v4 = (void (__fastcall *)(detail::GenericClass *))operator new(v3 + 39);
    v5 = v4;
    if ( !v4 )
      invalid_parameter_noinfo_noreturn();
    result = (AgDelegate1<AgShutdownEvent const &,void> *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
    result[-1].m_Closure.m_pFunction = v5;
  }
  return result;
}

__int64 __fastcall AgThreadPool::cancelAllJobs(AgThreadPool *this)
{
  AgRingBufferLocked<AgThreadPool::Job *> *m_returnedMem; // rbx
  int v3; // ebp
  unsigned int m_read; // edi
  AgThreadPool::Job *v5; // rcx
  unsigned int v6; // edx
  AgRingBufferLocked<AgThreadPool::Job *> *v7; // rdi
  int v8; // esi
  unsigned int i; // ebx
  AgThreadPool::Job *v10; // rcx
  __int64 result; // rax

  m_returnedMem = this->m_work.m_buffer.m_returnedMem;
  EnterCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  v3 = 0;
  m_read = m_returnedMem->m_read;
  if ( m_returnedMem->m_read < m_returnedMem->m_write )
  {
    while ( 1 )
    {
      v5 = m_returnedMem->m_buffer[m_read & (m_returnedMem->m_sz - 1)];
      v5->cancel(v5);
      ++v3;
      v6 = --m_returnedMem->m_write;
      if ( v6 == m_read )
        break;
      m_returnedMem->m_buffer[m_read & (m_returnedMem->m_sz - 1)] = m_returnedMem->m_buffer[(m_returnedMem->m_sz - 1) & v6];
      m_returnedMem->m_buffer[m_returnedMem->m_write & (m_returnedMem->m_sz - 1)] = (AgThreadPool::Job *)`AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::enumerate<CancelJobPredicate>'::`2'::zero;
      if ( m_read >= m_returnedMem->m_write )
        goto LABEL_6;
    }
    m_returnedMem->m_buffer[v6 & (m_returnedMem->m_sz - 1)] = (AgThreadPool::Job *)`AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::enumerate<CancelJobPredicate>'::`2'::zero;
  }
LABEL_6:
  LeaveCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  v7 = this->m_working.m_buffer.m_returnedMem;
  EnterCriticalSection((LPCRITICAL_SECTION)&v7->m_lock);
  v8 = 0;
  for ( i = v7->m_read; i < v7->m_write; ++i )
  {
    v10 = v7->m_buffer[i & (v7->m_sz - 1)];
    v10->cancel(v10);
    ++v8;
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&v7->m_lock);
  if ( v3 )
    return 1i64;
  result = 0i64;
  if ( v8 )
    return 1i64;
  return result;
}

__int64 __fastcall AgThreadPool::cancelJob(AgThreadPool *this, unsigned int jobId)
{
  AgRingBufferLocked<AgThreadPool::Job *> *m_returnedMem; // rbx
  int v5; // ebp
  unsigned int m_read; // edi
  AgThreadPool::Job *v7; // rcx
  unsigned int v8; // edx
  AgRingBufferLocked<AgThreadPool::Job *> *v9; // rdi
  int v10; // ebp
  unsigned int i; // ebx
  AgThreadPool::Job *v12; // rcx
  __int64 result; // rax

  m_returnedMem = this->m_work.m_buffer.m_returnedMem;
  EnterCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  v5 = 0;
  m_read = m_returnedMem->m_read;
  if ( m_returnedMem->m_read >= m_returnedMem->m_write )
    goto LABEL_10;
  while ( 1 )
  {
    v7 = m_returnedMem->m_buffer[m_read & (m_returnedMem->m_sz - 1)];
    if ( jobId == -1 || v7->m_jobID == jobId )
      break;
    ++m_read;
LABEL_7:
    if ( m_read >= m_returnedMem->m_write )
      goto LABEL_10;
  }
  v7->cancel(v7);
  ++v5;
  v8 = --m_returnedMem->m_write;
  if ( v8 != m_read )
  {
    m_returnedMem->m_buffer[m_read & (m_returnedMem->m_sz - 1)] = m_returnedMem->m_buffer[(m_returnedMem->m_sz - 1) & v8];
    m_returnedMem->m_buffer[m_returnedMem->m_write & (m_returnedMem->m_sz - 1)] = (AgThreadPool::Job *)`AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::enumerate<CancelJobPredicate>'::`2'::zero;
    goto LABEL_7;
  }
  m_returnedMem->m_buffer[v8 & (m_returnedMem->m_sz - 1)] = (AgThreadPool::Job *)`AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::enumerate<CancelJobPredicate>'::`2'::zero;
LABEL_10:
  LeaveCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  if ( v5 )
    return 1i64;
  v9 = this->m_working.m_buffer.m_returnedMem;
  EnterCriticalSection((LPCRITICAL_SECTION)&v9->m_lock);
  v10 = 0;
  for ( i = v9->m_read; i < v9->m_write; ++i )
  {
    v12 = v9->m_buffer[i & (v9->m_sz - 1)];
    if ( jobId == -1 || v12->m_jobID == jobId )
    {
      v12->cancel(v12);
      ++v10;
    }
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&v9->m_lock);
  result = 0i64;
  if ( v10 )
    return 1i64;
  return result;
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

void __fastcall AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(
        AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1> *this,
        unsigned __int64 a2)
{
  unsigned int i; // ebp
  AgRingBufferLocked<AgThreadPool::Job *> *v4; // rsi
  unsigned __int64 v5; // rdx

  if ( this->m_returnedMem )
  {
    for ( i = 0; i < this->m_numItems; ++i )
    {
      v4 = &this->m_returnedMem[(unsigned __int64)i];
      EnterCriticalSection((LPCRITICAL_SECTION)&v4->m_lock);
      operator delete(v4->m_buffer, v5);
      v4->m_buffer = 0i64;
      LeaveCriticalSection((LPCRITICAL_SECTION)&v4->m_lock);
      DeleteCriticalSection((LPCRITICAL_SECTION)&v4->m_lock);
    }
  }
  operator delete(this->m_baseMem, a2);
  this->m_baseMem = 0i64;
  this->m_returnedMem = 0i64;
}

void __fastcall AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::free(
        AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex> *this)
{
  AgMutex *p_m_lock; // rbx
  unsigned __int64 v3; // rdx

  p_m_lock = &this->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  operator delete(this->m_buffer, v3);
  this->m_buffer = 0i64;
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
}

void __fastcall AgThreadPool::free(AgThreadPool *this)
{
  void *m_sem; // rcx
  unsigned int v3; // ebx
  __int64 v4; // rdx
  AgPointer<AgThread> *Mylast; // rsi
  AgPointer<AgThread> *i; // rbx

  if ( this->m_threads._Mypair._Myval2._Myfirst != this->m_threads._Mypair._Myval2._Mylast )
  {
    if ( !this->m_work.m_sem.m_data.m_aborted )
    {
      this->m_work.m_sem.m_data.m_aborted = 1;
      ReleaseSemaphore(this->m_work.m_sem.m_data.m_sem, 1000, 0i64);
    }
    if ( !this->m_completed.m_sem.m_data.m_aborted )
    {
      m_sem = this->m_completed.m_sem.m_data.m_sem;
      this->m_completed.m_sem.m_data.m_aborted = 1;
      ReleaseSemaphore(m_sem, 1000, 0i64);
    }
    AgThreadPool::cancelAllJobs(this);
    v3 = 0;
    if ( this->m_threads._Mypair._Myval2._Mylast - this->m_threads._Mypair._Myval2._Myfirst )
    {
      v4 = 0i64;
      do
      {
        AgThread::join(this->m_threads._Mypair._Myval2._Myfirst[v4].m_ptr);
        v4 = ++v3;
      }
      while ( v3 < (unsigned __int64)(this->m_threads._Mypair._Myval2._Mylast - this->m_threads._Mypair._Myval2._Myfirst) );
    }
    Mylast = this->m_threads._Mypair._Myval2._Mylast;
    for ( i = this->m_threads._Mypair._Myval2._Myfirst; i != Mylast; ++i )
      AgPointer<AgUser>::~AgPointer<AgUser>((AgPointer<KOFApplication> *)i);
    this->m_threads._Mypair._Myval2._Mylast = this->m_threads._Mypair._Myval2._Myfirst;
  }
}

__int64 __fastcall AgThreadPool::getUniqueGroupID(AgThreadPool *this)
{
  volatile int *p_m_uniqueGroupID; // rsi
  volatile int v2; // edi
  unsigned int v3; // ebx

  p_m_uniqueGroupID = &this->m_uniqueGroupID;
  do
  {
    v3 = 1;
    if ( *p_m_uniqueGroupID != -1 )
      v3 = *p_m_uniqueGroupID + 1;
    v2 = *p_m_uniqueGroupID;
  }
  while ( AgAtomicCompareExchange(p_m_uniqueGroupID, *p_m_uniqueGroupID, v3) != v2 );
  return v3;
}

void __fastcall AgQueue<AgThreadPool::Job *>::init(AgQueue<AgThreadPool::Job *> *this, unsigned int maxItems)
{
  unsigned __int8 *v4; // r15
  AgRingBufferLocked<AgThreadPool::Job *> *v5; // rbp
  int v6; // edi
  AgMutex *p_m_lock; // rbx
  unsigned int i; // eax
  unsigned __int64 v9; // rax
  unsigned __int64 v10; // kr00_8
  unsigned __int64 v11; // rdx
  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1> v12; // [rsp+28h] [rbp-40h] BYREF

  v4 = (unsigned __int8 *)operator new[](0xC0ui64);
  v12.m_baseMem = v4;
  v5 = (AgRingBufferLocked<AgThreadPool::Job *> *)((unsigned __int64)(v4 + 63) & 0xFFFFFFFFFFFFFFC0ui64);
  v12.m_returnedMem = v5;
  v12.m_numItems = 1;
  v6 = 0;
  p_m_lock = &v5->m_lock;
  do
  {
    if ( p_m_lock != (AgMutex *)16 )
    {
      *(_DWORD *)&p_m_lock[-1].m_data.m_criticalSection.data[24] = 0;
      *(_QWORD *)&p_m_lock[-1].m_data.m_criticalSection.data[32] = 0i64;
      InitializeCriticalSection((LPCRITICAL_SECTION)p_m_lock);
      *(_DWORD *)p_m_lock[1].m_data.m_criticalSection.data = 0;
      *(_DWORD *)&p_m_lock[1].m_data.m_criticalSection.data[8] = 0;
    }
    ++v6;
    p_m_lock = (AgMutex *)((char *)p_m_lock + 128);
  }
  while ( !v6 );
  this->m_buffer.m_baseMem = v4;
  this->m_buffer.m_returnedMem = v5;
  this->m_buffer.m_numItems = 1;
  *(_OWORD *)&v12.m_baseMem = 0i64;
  for ( i = maxItems & -maxItems; i < maxItems; i *= 2 )
    ;
  *(_DWORD *)(((unsigned __int64)(v4 + 63) & 0xFFFFFFFFFFFFFFC0ui64) + 0x38) = i;
  v10 = i;
  v9 = 8i64 * i;
  if ( !is_mul_ok(v10, 8ui64) )
    v9 = -1i64;
  *(_QWORD *)(((unsigned __int64)(v4 + 63) & 0xFFFFFFFFFFFFFFC0ui64) + 8) = operator new[](v9);
  *(_DWORD *)(((unsigned __int64)(v4 + 63) & 0xFFFFFFFFFFFFFFC0ui64) + 0x40) = 0;
  v5->m_read = 0;
  AgAlignedPointer<AgRingBufferLocked<AgThreadPool::Job *>,1>::free(&v12, v11);
}

void __fastcall AgThreadPool::init(
        AgThreadPool *this,
        unsigned int maxJobs,
        unsigned int numThreads,
        int allowWorkInIdle,
        int threadPriority,
        const char *name)
{
  unsigned __int64 v7; // r12
  unsigned int v10; // edx
  std::vector<AgPointer<AgThread>> *p_m_threads; // rsi
  unsigned int i; // er15
  AgThread *v13; // rax
  __int64 v14; // rax
  __int64 v15; // rbp
  _DWORD *v16; // rax
  int v17; // eax
  AgReferenceCount *v18; // rdi
  int j; // ebx
  AgPointer<AgThread> *Mylast; // rax
  signed __int64 v21; // rbx
  AgPointer<AgThread> *v22; // rcx
  AgReferenceCount **v23; // rbx
  AgPointer<AgThread> *v24; // rcx
  void (__fastcall ***v25)(_QWORD, __int64); // rbx
  int v26; // ebp
  __int128 v27; // [rsp+50h] [rbp-38h] BYREF

  v7 = numThreads;
  this->m_allowWorkInIdle = allowWorkInIdle;
  AgTrace("AgThreadPool initializing work buffer");
  AgQueue<AgThreadPool::Job *>::init(&this->m_work, maxJobs);
  AgTrace("AgThreadPool initializing working buffer");
  v10 = v7;
  if ( allowWorkInIdle )
    v10 = maxJobs;
  AgQueue<AgThreadPool::Job *>::init(&this->m_working, v10);
  AgTrace("AgThreadPool initializing completed buffer");
  AgQueue<AgThreadPool::Job *>::init(&this->m_completed, maxJobs);
  AgTrace("AgThreadPool initializing threads");
  p_m_threads = &this->m_threads;
  if ( this->m_threads._Mypair._Myval2._Myend - this->m_threads._Mypair._Myval2._Myfirst < v7 )
    std::vector<AgPointer<AgThread>>::_Reallocate(&this->m_threads, (unsigned int)v7);
  for ( i = 0; i < (unsigned int)v7; ++i )
  {
    AgTrace("AgThreadPool creating thread %i", i);
    v13 = (AgThread *)operator new(0x28ui64);
    if ( v13 )
    {
      AgThread::AgThread(v13, this->m_threadHost, 0x10000ui64, threadPriority, name);
      v15 = v14;
    }
    else
    {
      v15 = 0i64;
    }
    v27 = 0i64;
    if ( v15 )
    {
      if ( *(_QWORD *)(v15 + 8) )
      {
        v17 = 0;
      }
      else
      {
        v16 = AgReferenceCount::operator new(0x10ui64);
        if ( v16 )
        {
          *v16 = 1;
          v16[1] = 1;
          *((_QWORD *)v16 + 1) = v15;
        }
        else
        {
          v16 = 0i64;
        }
        *(_QWORD *)(v15 + 8) = v16;
        v17 = 1;
      }
      v18 = *(AgReferenceCount **)(v15 + 8);
      if ( !v17 )
      {
        for ( j = v18->m_strongCount; v18->m_strongCount; j = v18->m_strongCount )
        {
          if ( AgAtomicCompareExchange(&v18->m_strongCount, j, j + 1) == j )
            break;
        }
      }
      *(_QWORD *)&v27 = v18;
      *((_QWORD *)&v27 + 1) = v15;
    }
    else
    {
      v18 = (AgReferenceCount *)v27;
    }
    Mylast = this->m_threads._Mypair._Myval2._Mylast;
    if ( &v27 >= (__int128 *)Mylast || p_m_threads->_Mypair._Myval2._Myfirst > (AgPointer<AgThread> *)&v27 )
    {
      if ( Mylast == this->m_threads._Mypair._Myval2._Myend )
        std::vector<AgPointer<AgThread>>::_Reserve(&this->m_threads, 1ui64);
      v24 = this->m_threads._Mypair._Myval2._Mylast;
      if ( v24 )
      {
        v24->m_ref = v18;
        v24->m_ptr = (AgThread *)*((_QWORD *)&v27 + 1);
        v27 = 0i64;
        v18 = 0i64;
      }
    }
    else
    {
      v21 = (char *)&v27 - (char *)p_m_threads->_Mypair._Myval2._Myfirst;
      if ( Mylast == this->m_threads._Mypair._Myval2._Myend )
        std::vector<AgPointer<AgThread>>::_Reserve(&this->m_threads, 1ui64);
      v22 = this->m_threads._Mypair._Myval2._Mylast;
      v23 = (AgReferenceCount **)((char *)&p_m_threads->_Mypair._Myval2._Myfirst->m_ref + (v21 & 0xFFFFFFFFFFFFFFF0ui64));
      if ( v22 )
      {
        v22->m_ref = *v23;
        v22->m_ptr = (AgThread *)v23[1];
        *v23 = 0i64;
        v23[1] = 0i64;
        v18 = (AgReferenceCount *)v27;
      }
    }
    ++this->m_threads._Mypair._Myval2._Mylast;
    v25 = (void (__fastcall ***)(_QWORD, __int64))*((_QWORD *)&v27 + 1);
    *((_QWORD *)&v27 + 1) = 0i64;
    if ( v18 )
    {
      *(_QWORD *)&v27 = 0i64;
      v26 = 0;
      if ( !AgAtomicDecrement(&v18->m_strongCount) )
      {
        if ( !AgAtomicDecrement(&v18->m_weakCount) )
          v26 = 1;
        v18->m_data = 0i64;
        if ( v25 )
          (**v25)(v25, 1i64);
        if ( v26 )
          AgReferenceCount::operator delete(v18);
      }
    }
    AgTrace("AgThreadPool added thread %i", i);
  }
}

__int64 __fastcall AgThreadPool::isGroupComplete(AgThreadPool *this, unsigned int groupid)
{
  AgRingBufferLocked<AgThreadPool::Job *> *m_returnedMem; // rdi
  int v5; // ebx
  unsigned int m_read; // edx
  unsigned int m_write; // er8
  AgRingBufferLocked<AgThreadPool::Job *> *v8; // rdi
  int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // er8
  __int64 result; // rax

  m_returnedMem = this->m_working.m_buffer.m_returnedMem;
  EnterCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  v5 = 0;
  m_read = m_returnedMem->m_read;
  m_write = m_returnedMem->m_write;
  if ( m_returnedMem->m_read < m_write )
  {
    do
    {
      if ( m_returnedMem->m_buffer[m_read & (m_returnedMem->m_sz - 1)]->m_groupID == groupid )
        ++v5;
      ++m_read;
    }
    while ( m_read < m_write );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  if ( v5 )
    return 0i64;
  v8 = this->m_work.m_buffer.m_returnedMem;
  EnterCriticalSection((LPCRITICAL_SECTION)&v8->m_lock);
  v9 = 0;
  v10 = v8->m_read;
  v11 = v8->m_write;
  if ( v8->m_read < v11 )
  {
    do
    {
      if ( v8->m_buffer[v10 & (v8->m_sz - 1)]->m_groupID == groupid )
        ++v9;
      ++v10;
    }
    while ( v10 < v11 );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&v8->m_lock);
  result = 1i64;
  if ( v9 )
    return 0i64;
  return result;
}

__int64 __fastcall AgThreadPool::isJobComplete(AgThreadPool *this, unsigned int jobid)
{
  AgRingBufferLocked<AgThreadPool::Job *> *m_returnedMem; // rdi
  int v5; // ebx
  unsigned int m_read; // edx
  unsigned int m_write; // er8
  AgRingBufferLocked<AgThreadPool::Job *> *v8; // rdi
  int v9; // ebx
  unsigned int v10; // edx
  unsigned int v11; // er8
  __int64 result; // rax

  m_returnedMem = this->m_working.m_buffer.m_returnedMem;
  EnterCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  v5 = 0;
  m_read = m_returnedMem->m_read;
  m_write = m_returnedMem->m_write;
  if ( m_returnedMem->m_read < m_write )
  {
    do
    {
      if ( m_returnedMem->m_buffer[m_read & (m_returnedMem->m_sz - 1)]->m_jobID == jobid )
        ++v5;
      ++m_read;
    }
    while ( m_read < m_write );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  if ( v5 )
    return 0i64;
  v8 = this->m_work.m_buffer.m_returnedMem;
  EnterCriticalSection((LPCRITICAL_SECTION)&v8->m_lock);
  v9 = 0;
  v10 = v8->m_read;
  v11 = v8->m_write;
  if ( v8->m_read < v11 )
  {
    do
    {
      if ( v8->m_buffer[v10 & (v8->m_sz - 1)]->m_jobID == jobid )
        ++v9;
      ++v10;
    }
    while ( v10 < v11 );
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)&v8->m_lock);
  result = 1i64;
  if ( v9 )
    return 0i64;
  return result;
}

__int64 __fastcall AgThreadPool::nextJob(AgThreadPool *this, AgThreadPool::Job **job, int timeout)
{
  if ( !AgQueue<AgThreadPool::Job *>::pop(&this->m_work, job, timeout) )
    return 0i64;
  if ( AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::push(this->m_working.m_buffer.m_returnedMem, *job) )
  {
    if ( !this->m_working.m_sem.m_data.m_aborted )
      ReleaseSemaphore(this->m_working.m_sem.m_data.m_sem, 1, 0i64);
  }
  return 1i64;
}

void __fastcall AgThreadPool::ThreadHost::onExecuteThread(AgThreadPool::ThreadHost *this)
{
  AgThreadPool::workerThreadFunction(this->m_pool, this);
  this->m_running = 0;
}

unsigned int __fastcall AgQueue<AgThreadPool::Job *>::pop(
        AgQueue<AgThreadPool::Job *> *this,
        AgThreadPool::Job **item,
        int timeout)
{
  int v3; // er9
  void *m_sem; // rcx

  v3 = timeout;
  if ( this->m_sem.m_data.m_aborted )
    return 0;
  m_sem = this->m_sem.m_data.m_sem;
  if ( timeout == -1 )
    v3 = -1;
  if ( WaitForSingleObjectEx(m_sem, v3, 1) || this->m_sem.m_data.m_aborted )
    return 0;
  else
    return AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::pop(this->m_buffer.m_returnedMem, item, 1u);
}

__int64 __fastcall AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::pop(
        AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex> *this,
        AgThreadPool::Job **items,
        unsigned int numItems)
{
  AgMutex *p_m_lock; // rbp
  unsigned int v7; // edi
  unsigned int i; // er9

  p_m_lock = &this->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  v7 = 0;
  for ( i = this->m_read; v7 < numItems; ++items )
  {
    if ( i >= this->m_write )
      break;
    *items = this->m_buffer[i & (this->m_sz - 1)];
    this->m_buffer[i++ & (this->m_sz - 1)] = `AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::pop'::`2'::zero;
    ++v7;
  }
  this->m_read = i;
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
  return v7;
}

__int64 __fastcall AgThreadPool::processCompletedJobs(AgThreadPool *this)
{
  AgRingBufferLocked<AgThreadPool::Job *> *m_returnedMem; // rbx
  unsigned int v2; // esi
  int v3; // er14
  unsigned int i; // ebp
  AgThreadPool::Job *v5; // rdi

  m_returnedMem = this->m_completed.m_buffer.m_returnedMem;
  v2 = 0;
  EnterCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  v3 = 0;
  for ( i = m_returnedMem->m_read; i < m_returnedMem->m_write; ++i )
  {
    v5 = m_returnedMem->m_buffer[i & (m_returnedMem->m_sz - 1)];
    v5->complete(v5);
    ((void (__fastcall *)(AgThreadPool::Job *, __int64))v5->~Job)(v5, 1i64);
    ++v3;
  }
  m_returnedMem->m_write = 0;
  m_returnedMem->m_read = 0;
  LeaveCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
  LOBYTE(v2) = v3 != 0;
  return v2;
}

__int64 __fastcall AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::push(
        AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex> *this,
        AgThreadPool::Job *item)
{
  AgMutex *p_m_lock; // rsi
  unsigned int v4; // edi
  unsigned int m_write; // er10
  AgThreadPool::Job **v6; // r11
  unsigned int m_sz; // edx
  AgThreadPool::Job *v9; // [rsp+58h] [rbp+10h] BYREF

  v9 = item;
  p_m_lock = &this->m_lock;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_lock);
  v4 = 0;
  m_write = this->m_write;
  v6 = &v9;
  do
  {
    m_sz = this->m_sz;
    if ( m_write >= m_sz + this->m_read )
      break;
    this->m_buffer[m_write++ & (m_sz - 1)] = *v6;
    ++v4;
    ++v6;
  }
  while ( !v4 );
  this->m_write = m_write;
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_lock);
  return v4;
}

AgJobCompletion *__fastcall AgThreadPool::pushJob(AgThreadPool *this, AgJobCompletion *result, AgThreadPool::Job *job)
{
  int m_uniqueJobID; // ebx
  unsigned int v7; // esi
  AgJobCompletion *v8; // rax

  do
  {
    m_uniqueJobID = this->m_uniqueJobID;
    v7 = 1;
    if ( m_uniqueJobID != -1 )
      v7 = m_uniqueJobID + 1;
  }
  while ( AgAtomicCompareExchange(&this->m_uniqueJobID, m_uniqueJobID, v7) != m_uniqueJobID );
  job->m_jobID = v7;
  do
    AgThreadPool::waitForSpace(this, 1u);
  while ( !(unsigned int)AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::push(
                           this->m_work.m_buffer.m_returnedMem,
                           job) );
  if ( !this->m_work.m_sem.m_data.m_aborted )
    ReleaseSemaphore(this->m_work.m_sem.m_data.m_sem, 1, 0i64);
  AgAtomicIncrement(&this->m_jobCount);
  v8 = result;
  result->m_jobId = v7;
  result->m_threadPool = this;
  return v8;
}

void __fastcall AgThreadPool::runJob(AgThreadPool *this, AgThreadPool::Job *job)
{
  int v4; // er15
  int v5; // er14
  BOOL v6; // ebx
  AgRingBufferLocked<AgThreadPool::Job *> *m_returnedMem; // rbx
  unsigned int m_read; // er8
  int v9; // edx
  AgThreadPool::Job **m_buffer; // r9
  unsigned int v11; // ecx

  v4 = job->run(job);
  if ( v4 )
    goto LABEL_10;
  do
  {
    AgThread::sleep(1u);
    if ( (unsigned int)AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::push(
                         this->m_work.m_buffer.m_returnedMem,
                         job) )
    {
      if ( !this->m_work.m_sem.m_data.m_aborted )
        ReleaseSemaphore(this->m_work.m_sem.m_data.m_sem, 1, 0i64);
      v5 = 1;
    }
    else
    {
      v5 = 0;
      EnterCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
      v6 = SleepConditionVariableCS(
             (PCONDITION_VARIABLE)&this->m_completion.m_conditionVariable.m_data,
             (PCRITICAL_SECTION)this->m_completion.m_conditionVariable.m_mutex,
             1u);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
      if ( !v6 )
        v4 = job->run(job);
    }
  }
  while ( !(v4 | v5) );
  if ( v4 )
  {
LABEL_10:
    m_returnedMem = this->m_working.m_buffer.m_returnedMem;
    EnterCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
    m_read = m_returnedMem->m_read;
    while ( m_read < m_returnedMem->m_write )
    {
      v9 = m_returnedMem->m_sz - 1;
      m_buffer = m_returnedMem->m_buffer;
      if ( m_buffer[m_read & v9] == job )
      {
        v11 = --m_returnedMem->m_write;
        if ( v11 == m_read )
        {
          m_buffer[v11 & (m_returnedMem->m_sz - 1)] = (AgThreadPool::Job *)`AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::enumerate<GetRemoveJobPredicate>'::`2'::zero;
          break;
        }
        m_buffer[v9 & m_read] = m_buffer[v9 & v11];
        m_returnedMem->m_buffer[m_returnedMem->m_write & (m_returnedMem->m_sz - 1)] = (AgThreadPool::Job *)`AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::enumerate<GetRemoveJobPredicate>'::`2'::zero;
      }
      else
      {
        ++m_read;
      }
    }
    LeaveCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
    if ( job->m_callCompleteFunc )
    {
      if ( (unsigned int)AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::push(
                           this->m_completed.m_buffer.m_returnedMem,
                           job) )
      {
        if ( !this->m_completed.m_sem.m_data.m_aborted )
          ReleaseSemaphore(this->m_completed.m_sem.m_data.m_sem, 1, 0i64);
      }
    }
    else
    {
      ((void (__fastcall *)(AgThreadPool::Job *, __int64))job->~Job)(job, 1i64);
    }
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
    WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_completion.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
    AgAtomicDecrement(&this->m_jobCount);
  }
}

void __fastcall AgThreadPool::waitForGroup(AgThreadPool *this, unsigned int groupid)
{
  AgRingBufferLocked<AgThreadPool::Job *> *m_returnedMem; // rdi
  _RTL_CRITICAL_SECTION *p_m_lock; // rbp
  unsigned int m_read; // esi
  AgThreadPool::Job *job; // [rsp+60h] [rbp+8h] BYREF

  while ( this->m_jobCount > 0 )
  {
    if ( (unsigned int)AgThreadPool::isGroupComplete(this, groupid) )
      break;
    if ( this->m_allowWorkInIdle
      && (m_returnedMem = this->m_work.m_buffer.m_returnedMem,
          p_m_lock = (_RTL_CRITICAL_SECTION *)&m_returnedMem->m_lock,
          EnterCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock),
          m_read = m_returnedMem->m_read,
          LODWORD(m_returnedMem) = m_returnedMem->m_write,
          LeaveCriticalSection(p_m_lock),
          m_read != (_DWORD)m_returnedMem)
      && this->nextJob(this, &job, 0i64) )
    {
      AgThreadPool::runJob(this, job);
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
      SleepConditionVariableCS(
        (PCONDITION_VARIABLE)&this->m_completion.m_conditionVariable.m_data,
        (PCRITICAL_SECTION)this->m_completion.m_conditionVariable.m_mutex,
        1u);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
    }
  }
}

void __fastcall AgThreadPool::waitForSpace(AgThreadPool *this, unsigned int requiredSpace)
{
  AgRingBufferLocked<AgThreadPool::Job *> *m_returnedMem; // rsi
  unsigned int m_sz; // er14
  int v6; // edi
  AgRingBufferLocked<AgThreadPool::Job *> *v7; // rdi
  _RTL_CRITICAL_SECTION *p_m_lock; // rbp
  unsigned int m_read; // esi
  AgThreadPool::Job *job; // [rsp+80h] [rbp+8h] BYREF

  while ( 1 )
  {
    m_returnedMem = this->m_work.m_buffer.m_returnedMem;
    m_sz = m_returnedMem->m_sz;
    EnterCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
    v6 = m_returnedMem->m_write - m_returnedMem->m_read;
    LeaveCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
    if ( m_sz - v6 >= requiredSpace )
      break;
    if ( this->m_allowWorkInIdle
      && (v7 = this->m_work.m_buffer.m_returnedMem,
          p_m_lock = (_RTL_CRITICAL_SECTION *)&v7->m_lock,
          EnterCriticalSection((LPCRITICAL_SECTION)&v7->m_lock),
          m_read = v7->m_read,
          LODWORD(v7) = v7->m_write,
          LeaveCriticalSection(p_m_lock),
          m_read != (_DWORD)v7)
      && this->nextJob(this, &job, 0i64) )
    {
      AgThreadPool::runJob(this, job);
    }
    else
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
      SleepConditionVariableCS(
        (PCONDITION_VARIABLE)&this->m_completion.m_conditionVariable.m_data,
        (PCRITICAL_SECTION)this->m_completion.m_conditionVariable.m_mutex,
        1u);
      LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
    }
  }
}

void __fastcall AgThreadPool::workerThreadFunction(AgThreadPool *this, AgThreadPool::ThreadHost *host)
{
  AgThreadPool::Job *v4; // r14
  int v5; // er15
  int v6; // ebp
  BOOL v7; // ebx
  AgRingBufferLocked<AgThreadPool::Job *> *m_returnedMem; // rbx
  unsigned int m_read; // er8
  int v10; // edx
  AgThreadPool::Job **m_buffer; // r9
  unsigned int v12; // ecx
  AgThreadPool::Job *item; // [rsp+80h] [rbp+8h] BYREF

  while ( !this->m_work.m_sem.m_data.m_aborted )
  {
    if ( host->getThreadIsStopping(host) )
      break;
    if ( this->nextJob(this, &item, 0xFFFFFFFFi64) )
    {
      v4 = item;
      v5 = item->run(item);
      if ( v5 )
        goto LABEL_13;
      do
      {
        AgThread::sleep(1u);
        if ( (unsigned int)AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::push(
                             this->m_work.m_buffer.m_returnedMem,
                             v4) )
        {
          if ( !this->m_work.m_sem.m_data.m_aborted )
            ReleaseSemaphore(this->m_work.m_sem.m_data.m_sem, 1, 0i64);
          v6 = 1;
        }
        else
        {
          v6 = 0;
          EnterCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
          v7 = SleepConditionVariableCS(
                 (PCONDITION_VARIABLE)&this->m_completion.m_conditionVariable.m_data,
                 (PCRITICAL_SECTION)this->m_completion.m_conditionVariable.m_mutex,
                 1u);
          LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
          if ( !v7 )
            v5 = v4->run(v4);
        }
      }
      while ( !(v5 | v6) );
      if ( v5 )
      {
LABEL_13:
        m_returnedMem = this->m_working.m_buffer.m_returnedMem;
        EnterCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
        m_read = m_returnedMem->m_read;
        while ( m_read < m_returnedMem->m_write )
        {
          v10 = m_returnedMem->m_sz - 1;
          m_buffer = m_returnedMem->m_buffer;
          if ( m_buffer[m_read & v10] == v4 )
          {
            v12 = --m_returnedMem->m_write;
            if ( v12 == m_read )
            {
              m_returnedMem->m_buffer[v12 & (m_returnedMem->m_sz - 1)] = (AgThreadPool::Job *)`AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::enumerate<GetRemoveJobPredicate>'::`2'::zero;
              break;
            }
            m_buffer[v10 & m_read] = m_buffer[v10 & v12];
            m_returnedMem->m_buffer[m_returnedMem->m_write & (m_returnedMem->m_sz - 1)] = (AgThreadPool::Job *)`AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::enumerate<GetRemoveJobPredicate>'::`2'::zero;
          }
          else
          {
            ++m_read;
          }
        }
        LeaveCriticalSection((LPCRITICAL_SECTION)&m_returnedMem->m_lock);
        if ( v4->m_callCompleteFunc )
        {
          if ( (unsigned int)AgRingBufferImpl<AgThreadPool::Job *,AgMutex,AgMutex>::push(
                               this->m_completed.m_buffer.m_returnedMem,
                               v4) )
          {
            if ( !this->m_completed.m_sem.m_data.m_aborted )
              ReleaseSemaphore(this->m_completed.m_sem.m_data.m_sem, 1, 0i64);
          }
        }
        else
        {
          ((void (__fastcall *)(AgThreadPool::Job *, __int64))v4->~Job)(v4, 1i64);
        }
        EnterCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
        WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_completion.m_conditionVariable.m_data);
        LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_completion);
        AgAtomicDecrement(&this->m_jobCount);
      }
    }
  }
}

