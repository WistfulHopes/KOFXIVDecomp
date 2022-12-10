#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/exutil.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/sync_queue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.cpp"

class extension::`anonymous-namespace'::AssetCacheExpiredEntryCleaner :
	extension::asyncjob_detail::AssetCacheNode
{
private:
	AssetCacheExpiredEntryCleaner();
public:
	virtual void CleanupExpiredEntry();
	static extension::`anonymous-namespace'::AssetCacheExpiredEntryCleaner & Instance();
	static extension::asyncjob_detail::AssetCacheNode * ListEndNode();
	virtual ~AssetCacheExpiredEntryCleaner();
};
void(*??s_mutex$initializer$@GraphicsLock@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740868
void(*??s_mutex$initializer$@AsyncStatus@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740878
void(*??s_instance$initializer$@AsyncWorker@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740870
void(*??s_signalCondition$initializer$@AsyncStatus@extension@@0P6AXXZEA@@3P6AXXZEA)(); // 0x140740880
const char * extension::AsyncContentConstants::GetErrorString(extension::AsyncContentConstants::ErrorCode e); // 0x140246050
struct std::pair<char const *,enum extension::AsyncContentConstants::ErrorCode>
{
	struct _Myt;
	typedef const char first_type;
	enum second_type
	{
		ErrorCode_None = 0,
		ErrorCode_LoadFailed = 1,
		ErrorCode_DataBroken = 2,
		ErrorCode_InvalidFormat = 3,
		ErrorCode_Canceled = 4,
		ErrorCode_Internal = 5,
	};
	pair<char const *,enum extension::AsyncContentConstants::ErrorCode>(std::pair<char const *,enum extension::AsyncContentConstants::ErrorCode> &);
	std::pair<char const *,enum extension::AsyncContentConstants::ErrorCode> & operator=(const std::pair<char const *,enum extension::AsyncContentConstants::ErrorCode> &);
	std::pair<char const *,enum extension::AsyncContentConstants::ErrorCode> & operator=(std::pair<char const *,enum extension::AsyncContentConstants::ErrorCode> &);
	const char * first; // 0x0
	extension::AsyncContentConstants::ErrorCode second; // 0x8
	void swap(std::pair<char const *,enum extension::AsyncContentConstants::ErrorCode> &);
};
extension::AsyncJobConsumer::~AsyncJobConsumer(); // 0x1402460D0
void extension::AsyncJobConsumer::start(const extension::ExThread::StartParam & param); // 0x140246140
void extension::AsyncJobConsumer::join(); // 0x140246220
long extension::AsyncJobConsumer::run(); // 0x1402462C0
extension::AsyncWorker::AsyncWorker(); // 0x140246340
void extension::AsyncWorker::enqueueFixupJob(std::unique_ptr<extension::ExThread::Runnable,std::default_delete<extension::ExThread::Runnable> > job); // 0x140246470
std::string extension::AsyncWorker::ToLowerCasePath(const char * path_str); // 0x1402464F0
void extension::AsyncStatus::waitFor(extension::AsyncStatus::Step s); // 0x1402465E0//decompilation failure at 140740868!
//decompilation failure at 140740878!
//decompilation failure at 140740870!
//decompilation failure at 140740880!
void __fastcall extension::ExSimpleThreadPool<extension::ExThread>::ExSimpleThreadPool<extension::ExThread>(
        extension::ExSimpleThreadPool<extension::ExThread> *this,
        int count)
{
  unsigned __int64 v2; // rbp
  __int64 v4; // rax
  bool v5; // cf
  unsigned __int64 v6; // rax
  unsigned __int64 *v7; // rax
  extension::ExThread *v8; // rdi

  v2 = count;
  v4 = 72i64 * count;
  if ( !is_mul_ok(count, 0x48ui64) )
    v4 = -1i64;
  v5 = __CFADD__(v4, 8i64);
  v6 = v4 + 8;
  if ( v5 )
    v6 = -1i64;
  v7 = (unsigned __int64 *)operator new[](v6);
  if ( v7 )
  {
    *v7 = v2;
    v8 = (extension::ExThread *)(v7 + 1);
    `eh vector constructor iterator'(
      v7 + 1,
      0x48ui64,
      v2,
      (void (__fastcall *)(void *))extension::ExThread::ExThread,
      (void (__fastcall *)(void *))extension::ExThread::~ExThread);
  }
  else
  {
    v8 = 0i64;
  }
  this->m_threads._Mypair._Myval2 = v8;
  this->m_count = v2;
}

void __fastcall extension::SynchronizedQueue<extension::ExThread::Runnable>::SynchronizedQueue<extension::ExThread::Runnable>(
        extension::SynchronizedQueue<extension::ExThread::Runnable> *this)
{
  std::_Container_proxy *v2; // rax

  InitializeCriticalSection((LPCRITICAL_SECTION)this);
  this->m_enqueueCondition.m_conditionVariable.m_mutex = &this->m_enqueueCondition.m_mutex;
  InitializeConditionVariable((PCONDITION_VARIABLE)&this->m_enqueueCondition.m_conditionVariable.m_data);
  InitializeCriticalSection((LPCRITICAL_SECTION)&this->m_enqueueCondition.m_mutex);
  this->m_queue._Mypair._Myval2._Myproxy = 0i64;
  this->m_queue._Mypair._Myval2._Map = 0i64;
  this->m_queue._Mypair._Myval2._Mapsize = 0i64;
  this->m_queue._Mypair._Myval2._Myoff = 0i64;
  this->m_queue._Mypair._Myval2._Mysize = 0i64;
  v2 = (std::_Container_proxy *)operator new(0x10ui64);
  this->m_queue._Mypair._Myval2._Myproxy = v2;
  if ( v2 )
    *v2 = 0i64;
  this->m_queue._Mypair._Myval2._Myproxy->_Mycont = &this->m_queue._Mypair._Myval2;
  this->m_isClosed = 0;
}

void __fastcall extension::AsyncWorker::AsyncWorker(extension::AsyncWorker *this)
{
  extension::ExThread::StartParam param; // [rsp+28h] [rbp-30h] BYREF

  extension::AsyncWorker::s_instance.m_loadJobConsumer.m_abort = 0;
  extension::AsyncWorker::s_instance.m_loadJobConsumer.m_running = 1;
  extension::AsyncWorker::s_instance.m_loadJobConsumer.__vftable = (extension::AsyncJobConsumer_vtbl *)&extension::AsyncJobConsumer::`vftable';
  extension::ExSimpleThreadPool<extension::ExThread>::ExSimpleThreadPool<extension::ExThread>(
    &extension::AsyncWorker::s_instance.m_loadJobConsumer.m_threads,
    4);
  extension::SynchronizedQueue<extension::ExThread::Runnable>::SynchronizedQueue<extension::ExThread::Runnable>(&extension::AsyncWorker::s_instance.m_loadJobConsumer.m_jobQueue);
  extension::AsyncWorker::s_instance.m_fixupJobConsumer.m_abort = 0;
  extension::AsyncWorker::s_instance.m_fixupJobConsumer.m_running = 1;
  extension::AsyncWorker::s_instance.m_fixupJobConsumer.__vftable = (extension::AsyncJobConsumer_vtbl *)&extension::AsyncJobConsumer::`vftable';
  extension::ExSimpleThreadPool<extension::ExThread>::ExSimpleThreadPool<extension::ExThread>(
    &extension::AsyncWorker::s_instance.m_fixupJobConsumer.m_threads,
    1);
  extension::SynchronizedQueue<extension::ExThread::Runnable>::SynchronizedQueue<extension::ExThread::Runnable>(&extension::AsyncWorker::s_instance.m_fixupJobConsumer.m_jobQueue);
  param.stackSize = 0x10000i64;
  *(_QWORD *)&param.priority = 1i64;
  param.name = "Async Asset Load";
  extension::AsyncJobConsumer::start(&extension::AsyncWorker::s_instance.m_loadJobConsumer, &param);
  param.priority = Priority_Same;
  param.name = "Async Asset FixUp";
  extension::AsyncJobConsumer::start(&extension::AsyncWorker::s_instance.m_fixupJobConsumer, &param);
}

void __fastcall extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>>::~ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<OGLCamera,void>::AssetCache>>(
        extension::ExLockableLock<extension::ExSimpleLockable<extension::BasicFutureObject<extension::exsound_detail::SoundBankImpl,void>::AssetCache> > *this)
{
  _RTL_CRITICAL_SECTION *m_associated; // rdi
  int v2; // ebx
  __int64 m_ownsLockCount; // rbx

  m_associated = (_RTL_CRITICAL_SECTION *)this->m_associated;
  v2 = -this->m_ownsLockCount;
  if ( v2 < 0 || this->m_ownsLockCount == 0 )
  {
    if ( this->m_ownsLockCount > 0 )
    {
      m_ownsLockCount = (unsigned int)this->m_ownsLockCount;
      do
      {
        LeaveCriticalSection(m_associated);
        --m_ownsLockCount;
      }
      while ( m_ownsLockCount );
    }
  }
  else
  {
    do
    {
      EnterCriticalSection(m_associated);
      --v2;
    }
    while ( v2 );
  }
}

// attributes: thunk
void __stdcall AgMutex::~AgMutex(LPCRITICAL_SECTION lpCriticalSection)
{
  DeleteCriticalSection(lpCriticalSection);
}

void __fastcall extension::ExSimpleThreadPool<extension::ExThread>::~ExSimpleThreadPool<extension::ExThread>(
        extension::ExSimpleThreadPool<extension::ExThread> *this,
        unsigned __int64 a2)
{
  extension::ExThread *Myval2; // rcx

  Myval2 = this->m_threads._Mypair._Myval2;
  if ( Myval2 )
  {
    if ( Myval2[-1].m_agThread.m_internalData )
      ((void (__fastcall *)(extension::ExThread *, __int64))Myval2->~ExThread)(Myval2, 3i64);
    else
      operator delete(&Myval2[-1].m_agThread.m_internalData, a2);
  }
}

void __fastcall extension::SynchronizedQueue<extension::ExThread::Runnable>::~SynchronizedQueue<extension::ExThread::Runnable>(
        extension::SynchronizedQueue<extension::ExThread::Runnable> *this)
{
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  std::deque<std::unique_ptr<extension::ExThread::Runnable>>::_Tidy(&this->m_queue);
  this->m_isClosed = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_enqueueCondition.m_mutex);
  WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_enqueueCondition.m_conditionVariable.m_data);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_enqueueCondition.m_mutex);
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  std::deque<std::unique_ptr<extension::ExThread::Runnable>>::_Tidy(&this->m_queue);
  operator delete(this->m_queue._Mypair._Myval2._Myproxy);
  this->m_queue._Mypair._Myval2._Myproxy = 0i64;
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_enqueueCondition.m_mutex);
  DeleteCriticalSection((LPCRITICAL_SECTION)this);
}

void __fastcall extension::AsyncJobConsumer::~AsyncJobConsumer(extension::AsyncJobConsumer *this)
{
  unsigned __int64 v2; // rdx
  extension::ExThread *Myval2; // rcx

  this->__vftable = (extension::AsyncJobConsumer_vtbl *)&extension::AsyncJobConsumer::`vftable';
  extension::AsyncJobConsumer::join(this);
  extension::SynchronizedQueue<extension::ExThread::Runnable>::~SynchronizedQueue<extension::ExThread::Runnable>(&this->m_jobQueue);
  Myval2 = this->m_threads.m_threads._Mypair._Myval2;
  if ( Myval2 )
  {
    if ( Myval2[-1].m_agThread.m_internalData )
      ((void (__fastcall *)(extension::ExThread *, __int64))Myval2->~ExThread)(Myval2, 3i64);
    else
      operator delete(&Myval2[-1].m_agThread.m_internalData, v2);
  }
  this->__vftable = (extension::AsyncJobConsumer_vtbl *)&AgIThreadHost::`vftable';
}

void __fastcall extension::ExWaitCondition::~ExWaitCondition(extension::ExWaitCondition *this)
{
  DeleteCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
}

const char *__fastcall extension::AsyncContentConstants::GetErrorString(extension::AsyncContentConstants::ErrorCode e)
{
  extension::gfxi_detail::TranslatorImpl *v1; // rax
  const char *result; // rax

  v1 = (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[19][200];
  while ( v1->RefCount != e )
  {
    v1 = (extension::gfxi_detail::TranslatorImpl *)((char *)v1 + 16);
    if ( v1 == (extension::gfxi_detail::TranslatorImpl *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[20][40] )
      return "unknown";
  }
  result = (const char *)v1->__vftable;
  if ( !result )
    return "unknown";
  return result;
}

std::string *__fastcall extension::AsyncWorker::ToLowerCasePath(std::string *result, const char *path_str)
{
  std::string *Ptr; // rax
  unsigned __int64 v4; // r8
  unsigned __int64 Myres; // rdx
  std::string *v6; // rdi
  std::string *v7; // rcx
  std::string *v8; // rax
  std::string *v9; // rsi
  std::string *v10; // rbp
  signed __int64 v11; // rsi
  __int64 v12; // r14

  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    Ptr = result;
  else
    Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  if ( *path_str )
  {
    v4 = -1i64;
    do
      ++v4;
    while ( path_str[v4] );
  }
  else
  {
    v4 = 0i64;
  }
  std::string::assign(result, path_str, v4);
  Myres = result->_Mypair._Myval2._Myres;
  if ( Myres < 0x10 )
    v6 = result;
  else
    v6 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  if ( Myres < 0x10 )
    v7 = result;
  else
    v7 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v8 = (std::string *)((char *)v7 + result->_Mypair._Myval2._Mysize);
  if ( Myres < 0x10 )
    v9 = result;
  else
    v9 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v10 = (std::string *)((char *)v8 - (char *)v9);
  if ( v9 > v8 )
    v10 = 0i64;
  if ( v10 )
  {
    v11 = (char *)v9 - (char *)v6;
    v12 = -(__int64)v6;
    do
    {
      v6->_Mypair._Myval2._Bx._Buf[0] = tolower(v6->_Mypair._Myval2._Bx._Buf[v11]);
      v6 = (std::string *)((char *)v6 + 1);
    }
    while ( (std::string *)((char *)v6 + v12) != v10 );
  }
  return result;
}

void __fastcall std::deque<std::unique_ptr<extension::ExThread::Runnable>>::_Growmap(
        std::deque<std::unique_ptr<extension::ExThread::Runnable>> *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rbx
  unsigned __int64 Mapsize; // rcx
  unsigned __int64 v5; // rbx
  unsigned __int64 v6; // r15
  unsigned __int64 v7; // rcx
  _QWORD *v8; // r14
  unsigned __int64 v9; // rcx
  void *v10; // rax
  __int64 v11; // r12
  size_t v12; // rdi
  std::unique_ptr<extension::ExThread::Runnable> **Map; // rdx
  char *v14; // rcx
  size_t v15; // r8
  char *v16; // rcx
  std::unique_ptr<extension::ExThread::Runnable> **v17; // rcx
  unsigned __int64 v18; // rax
  std::unique_ptr<extension::ExThread::Runnable> **v19; // rax
  unsigned __int64 v20; // rcx

  v3 = 1i64;
  Mapsize = this->_Mypair._Myval2._Mapsize;
  if ( Mapsize )
    v3 = Mapsize;
  while ( v3 == Mapsize || v3 < 8 )
  {
    if ( 0xFFFFFFFFFFFFFFFi64 - v3 < v3 )
      std::_Xlength_error("deque<T> too long");
    v3 *= 2i64;
  }
  v5 = v3 - Mapsize;
  v6 = this->_Mypair._Myval2._Myoff >> 1;
  v7 = v5 + Mapsize;
  if ( v7 )
  {
    if ( v7 > 0x1FFFFFFFFFFFFFFFi64 )
      std::_Xbad_alloc();
    v9 = 8 * v7;
    if ( v9 < 0x1000 )
    {
      v8 = operator new(v9);
    }
    else
    {
      if ( v9 + 39 <= v9 )
        std::_Xbad_alloc();
      v10 = operator new(v9 + 39);
      v8 = (_QWORD *)(((unsigned __int64)v10 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      *(v8 - 1) = v10;
    }
  }
  else
  {
    v8 = 0i64;
  }
  v11 = 8 * v6;
  v12 = 8 * this->_Mypair._Myval2._Mapsize - 8 * v6;
  memmove(&v8[v6], &this->_Mypair._Myval2._Map[v6], v12);
  Map = this->_Mypair._Myval2._Map;
  v14 = (char *)&v8[v6] + v12;
  if ( v6 > v5 )
  {
    memmove(v14, Map, 8 * v5);
    memmove(v8, &this->_Mypair._Myval2._Map[v5], v11 - 8 * v5);
    v16 = (char *)v8 + v11 - 8 * v5;
    v15 = 8 * v5;
  }
  else
  {
    memmove(v14, Map, 8 * v6);
    memset((char *)&v8[v6] + v12 + v11, 0, 8 * (v5 - v6));
    v15 = 8 * v6;
    v16 = (char *)v8;
  }
  memset(v16, 0, v15);
  v17 = this->_Mypair._Myval2._Map;
  if ( v17 )
  {
    v18 = this->_Mypair._Myval2._Mapsize;
    if ( v18 > 0x1FFFFFFFFFFFFFFFi64 )
      invalid_parameter_noinfo_noreturn();
    if ( 8 * v18 >= 0x1000 )
    {
      if ( ((unsigned __int8)v17 & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v19 = (std::unique_ptr<extension::ExThread::Runnable> **)*(v17 - 1);
      if ( v19 >= v17 )
        invalid_parameter_noinfo_noreturn();
      v20 = (char *)v17 - (char *)v19;
      if ( v20 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v20 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v17 = v19;
    }
    operator delete(v17);
  }
  this->_Mypair._Myval2._Map = (std::unique_ptr<extension::ExThread::Runnable> **)v8;
  this->_Mypair._Myval2._Mapsize += v5;
}

void __fastcall std::deque<std::unique_ptr<extension::ExThread::Runnable>>::_Tidy(
        std::deque<std::unique_ptr<extension::ExThread::Runnable>> *this)
{
  unsigned __int64 i; // rcx
  extension::ExThread::Runnable *Myval2; // rcx
  unsigned __int64 Mapsize; // rdi
  std::unique_ptr<extension::ExThread::Runnable> *v6; // rcx
  std::unique_ptr<extension::ExThread::Runnable> **Map; // rcx
  unsigned __int64 v8; // rax
  std::unique_ptr<extension::ExThread::Runnable> **v9; // rax
  unsigned __int64 v10; // rcx

  for ( i = this->_Mypair._Myval2._Mysize; i; i = this->_Mypair._Myval2._Mysize )
  {
    Myval2 = this->_Mypair._Myval2._Map[(this->_Mypair._Myval2._Mapsize - 1) & ((i + this->_Mypair._Myval2._Myoff - 1) >> 1)][((_DWORD)i + LODWORD(this->_Mypair._Myval2._Myoff) - 1) & 1]._Mypair._Myval2;
    if ( Myval2 )
      ((void (__fastcall *)(extension::ExThread::Runnable *, __int64))Myval2->~AgIThreadHost)(Myval2, 1i64);
    if ( this->_Mypair._Myval2._Mysize-- == 1 )
      this->_Mypair._Myval2._Myoff = 0i64;
  }
  Mapsize = this->_Mypair._Myval2._Mapsize;
  while ( Mapsize )
  {
    v6 = this->_Mypair._Myval2._Map[--Mapsize];
    if ( v6 )
      operator delete(v6);
  }
  Map = this->_Mypair._Myval2._Map;
  if ( Map )
  {
    v8 = this->_Mypair._Myval2._Mapsize;
    if ( v8 > 0x1FFFFFFFFFFFFFFFi64 )
      invalid_parameter_noinfo_noreturn();
    if ( 8 * v8 >= 0x1000 )
    {
      if ( ((unsigned __int8)Map & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (std::unique_ptr<extension::ExThread::Runnable> **)*(Map - 1);
      if ( v9 >= Map )
        invalid_parameter_noinfo_noreturn();
      v10 = (char *)Map - (char *)v9;
      if ( v10 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v10 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      Map = v9;
    }
    operator delete(Map);
  }
  this->_Mypair._Myval2._Mapsize = 0i64;
  this->_Mypair._Myval2._Map = 0i64;
}

std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > *__fastcall std::deque<std::unique_ptr<extension::ExThread::Runnable>>::begin(
        std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>> *this,
        std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > *result)
{
  std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > *v2; // rax

  result->_Myoff = this->_Mypair._Myval2._Myoff;
  result->_Myproxy = this->_Mypair._Myval2._Myproxy;
  v2 = result;
  result->_Mynextiter = 0i64;
  return v2;
}

std::unique_ptr<extension::ExThread::Runnable> *__fastcall extension::SynchronizedQueue<extension::ExThread::Runnable>::dequeue(
        extension::SynchronizedQueue<extension::ExThread::Runnable> *this,
        std::unique_ptr<extension::ExThread::Runnable> *result)
{
  int v4; // esi
  int v5; // ebx
  __int64 v6; // rbx
  extension::ExThread::Runnable *v7; // rbx
  std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > *v8; // rax
  std::_Container_proxy *Myproxy; // r8
  char *v10; // rcx
  extension::ExThread::Runnable *Myval2; // rcx
  int v13; // esi
  __int64 v15; // rbx
  std::_Deque_iterator<std::_Deque_val<std::_Deque_simple_types<extension::BasicFutureObject<extension::AsyncFileImage,void> > > > resulta; // [rsp+20h] [rbp-38h] BYREF
  char v17; // [rsp+60h] [rbp+8h] BYREF

  v4 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  while ( !this->m_isClosed )
  {
    if ( this->m_queue._Mypair._Myval2._Mysize )
      break;
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_enqueueCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)this);
    --v4;
    SleepConditionVariableCS(
      (PCONDITION_VARIABLE)&this->m_enqueueCondition.m_conditionVariable.m_data,
      (PCRITICAL_SECTION)this->m_enqueueCondition.m_conditionVariable.m_mutex,
      0xFFFFFFFF);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_enqueueCondition.m_mutex);
    if ( v4 <= 0 )
    {
      v5 = 1 - v4;
      if ( 1 - v4 <= 0 )
      {
        if ( v5 < 0 )
        {
          v6 = (unsigned int)(v4 - 1);
          do
          {
            LeaveCriticalSection((LPCRITICAL_SECTION)this);
            --v6;
          }
          while ( v6 );
        }
      }
      else
      {
        do
        {
          EnterCriticalSection((LPCRITICAL_SECTION)this);
          --v5;
        }
        while ( v5 );
      }
      v4 = 1;
    }
  }
  v7 = 0i64;
  if ( !this->m_isClosed )
  {
    v8 = std::deque<std::unique_ptr<extension::ExThread::Runnable>>::begin(
           (std::deque<extension::BasicFutureObject<extension::AsyncFileImage,void>> *)&this->m_queue,
           &resulta);
    Myproxy = v8->_Myproxy;
    if ( v8->_Myproxy )
      Myproxy = (std::_Container_proxy *)Myproxy->_Mycont;
    v10 = (char *)(*((_QWORD *)&Myproxy->_Myfirstiter->_Myproxy
                   + (((__int64)&Myproxy[1]._Mycont[-1]._Myproxy + 7) & (v8->_Myoff >> 1)))
                 + 8 * (v8->_Myoff & 1));
    if ( &v17 != v10 )
    {
      v7 = *(extension::ExThread::Runnable **)v10;
      *(_QWORD *)v10 = 0i64;
    }
    Myval2 = this->m_queue._Mypair._Myval2._Map[(this->m_queue._Mypair._Myval2._Mapsize - 1) & (this->m_queue._Mypair._Myval2._Myoff >> 1)][this->m_queue._Mypair._Myval2._Myoff & 1]._Mypair._Myval2;
    if ( Myval2 )
      ((void (__fastcall *)(extension::ExThread::Runnable *, __int64))Myval2->~AgIThreadHost)(Myval2, 1i64);
    if ( this->m_queue._Mypair._Myval2._Mysize-- == 1 )
      this->m_queue._Mypair._Myval2._Myoff = 0i64;
    else
      ++this->m_queue._Mypair._Myval2._Myoff;
  }
  v13 = -v4;
  result->_Mypair._Myval2 = v7;
  if ( v13 <= 0 )
  {
    if ( v13 < 0 )
    {
      v15 = (unsigned int)-v13;
      do
      {
        LeaveCriticalSection((LPCRITICAL_SECTION)this);
        --v15;
      }
      while ( v15 );
    }
    return result;
  }
  else
  {
    do
    {
      EnterCriticalSection((LPCRITICAL_SECTION)this);
      --v13;
    }
    while ( v13 );
    return result;
  }
}

void __fastcall extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
        extension::SynchronizedQueue<extension::ExThread::Runnable> *this,
        std::unique_ptr<extension::ExThread::Runnable> obj)
{
  EnterCriticalSection((LPCRITICAL_SECTION)this);
  if ( !this->m_isClosed && obj._Mypair._Myval2->__vftable )
  {
    std::deque<std::unique_ptr<extension::ExThread::Runnable>>::push_back(
      &this->m_queue,
      (std::unique_ptr<extension::ExThread::Runnable> *)obj._Mypair._Myval2);
    EnterCriticalSection((LPCRITICAL_SECTION)&this->m_enqueueCondition.m_mutex);
    WakeConditionVariable((PCONDITION_VARIABLE)&this->m_enqueueCondition.m_conditionVariable.m_data);
    LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_enqueueCondition.m_mutex);
  }
  LeaveCriticalSection((LPCRITICAL_SECTION)this);
  if ( obj._Mypair._Myval2->__vftable )
    (*(void (__fastcall **)(extension::ExThread::Runnable_vtbl *, __int64))obj._Mypair._Myval2->~AgIThreadHost)(
      obj._Mypair._Myval2->__vftable,
      1i64);
}

void __fastcall extension::AsyncWorker::enqueueFixupJob(
        extension::AsyncWorker *this,
        std::unique_ptr<extension::ExThread::Runnable> job)
{
  extension::ExThread::Runnable_vtbl *v3; // rax
  void (__fastcall ***v4)(_QWORD, __int64); // [rsp+40h] [rbp+8h] BYREF
  extension::ExThread::Runnable *Myval2; // [rsp+48h] [rbp+10h]
  extension::ExThread::Runnable_vtbl *v6; // [rsp+50h] [rbp+18h] BYREF
  void (__fastcall ****v7)(_QWORD, __int64); // [rsp+58h] [rbp+20h]

  Myval2 = job._Mypair._Myval2;
  v3 = job._Mypair._Myval2->__vftable;
  job._Mypair._Myval2->__vftable = 0i64;
  v7 = &v4;
  v4 = 0i64;
  v6 = v3;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::enqueue(
    &this->m_fixupJobConsumer.m_jobQueue,
    (std::unique_ptr<extension::ExThread::Runnable>)&v6);
  if ( v4 )
    (**v4)(v4, 1i64);
  if ( job._Mypair._Myval2->__vftable )
    (*(void (__fastcall **)(extension::ExThread::Runnable_vtbl *, __int64))job._Mypair._Myval2->~AgIThreadHost)(
      job._Mypair._Myval2->__vftable,
      1i64);
}

void __fastcall extension::ExSimpleThreadPool<extension::ExThread>::join(
        extension::ExSimpleThreadPool<extension::ExThread> *this)
{
  int v2; // ebx
  __int64 v3; // rdi
  extension::ExThread *Myval2; // rsi

  v2 = 0;
  if ( this->m_count > 0 )
  {
    v3 = 0i64;
    do
    {
      Myval2 = this->m_threads._Mypair._Myval2;
      if ( (this->m_threads._Mypair._Myval2[v3].m_stateFlags.m_value._My_val & 3) != 0 )
      {
        AgThread::join(&Myval2[v3].m_agThread);
        Myval2[v3].m_stateFlags.m_value._My_val = 0i64;
      }
      ++v2;
      ++v3;
    }
    while ( v2 < this->m_count );
  }
}

void __fastcall extension::AsyncJobConsumer::join(extension::AsyncJobConsumer *this)
{
  int v2; // eax
  __int64 v3; // r8
  extension::ExThread *Myval2; // rdx

  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_jobQueue);
  std::deque<std::unique_ptr<extension::ExThread::Runnable>>::_Tidy(&this->m_jobQueue.m_queue);
  this->m_jobQueue.m_isClosed = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_jobQueue.m_enqueueCondition.m_mutex);
  WakeAllConditionVariable((PCONDITION_VARIABLE)&this->m_jobQueue.m_enqueueCondition.m_conditionVariable.m_data);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_jobQueue.m_enqueueCondition.m_mutex);
  LeaveCriticalSection((LPCRITICAL_SECTION)&this->m_jobQueue);
  v2 = 0;
  if ( this->m_threads.m_count > 0 )
  {
    v3 = 0i64;
    do
    {
      Myval2 = this->m_threads.m_threads._Mypair._Myval2;
      if ( Myval2[v3].m_stateFlags.m_value._My_val )
        _InterlockedOr64((volatile signed __int64 *)&Myval2[v3].m_stateFlags, 0x100ui64);
      ++v2;
      ++v3;
    }
    while ( v2 < this->m_threads.m_count );
  }
  extension::ExSimpleThreadPool<extension::ExThread>::join(&this->m_threads);
}

void __fastcall std::deque<std::unique_ptr<extension::ExThread::Runnable>>::push_back(
        std::deque<std::unique_ptr<extension::ExThread::Runnable>> *this,
        std::unique_ptr<extension::ExThread::Runnable> *_Val)
{
  unsigned __int64 Mysize; // rcx
  unsigned __int64 v5; // rdi
  unsigned __int64 v6; // r14
  std::unique_ptr<extension::ExThread::Runnable> *v7; // rcx
  extension::ExThread::Runnable *Myval2; // rax

  Mysize = this->_Mypair._Myval2._Mysize;
  if ( ((LOBYTE(this->_Mypair._Myval2._Myoff) + (_BYTE)Mysize) & 1) == 0
    && this->_Mypair._Myval2._Mapsize <= (Mysize + 2) >> 1 )
  {
    std::deque<std::unique_ptr<extension::ExThread::Runnable>>::_Growmap(this, (unsigned __int64)_Val);
  }
  this->_Mypair._Myval2._Myoff &= 2 * this->_Mypair._Myval2._Mapsize - 1;
  v5 = this->_Mypair._Myval2._Mysize + this->_Mypair._Myval2._Myoff;
  v6 = (v5 >> 1) & (this->_Mypair._Myval2._Mapsize - 1);
  if ( !this->_Mypair._Myval2._Map[v6] )
    this->_Mypair._Myval2._Map[v6] = (std::unique_ptr<extension::ExThread::Runnable> *)operator new(0x10ui64);
  v7 = &this->_Mypair._Myval2._Map[v6][v5 & 1];
  if ( v7 )
  {
    Myval2 = _Val->_Mypair._Myval2;
    _Val->_Mypair._Myval2 = 0i64;
    v7->_Mypair._Myval2 = Myval2;
  }
  ++this->_Mypair._Myval2._Mysize;
}

__int64 __fastcall extension::AsyncJobConsumer::run(extension::AsyncJobConsumer *this)
{
  extension::SynchronizedQueue<extension::ExThread::Runnable> *p_m_jobQueue; // rdi
  extension::ExThread::Runnable *i; // rbx
  std::unique_ptr<extension::ExThread::Runnable> result; // [rsp+40h] [rbp+8h] BYREF

  p_m_jobQueue = &this->m_jobQueue;
  extension::SynchronizedQueue<extension::ExThread::Runnable>::dequeue(&this->m_jobQueue, &result);
  for ( i = result._Mypair._Myval2; result._Mypair._Myval2; i = result._Mypair._Myval2 )
  {
    i->run(i);
    ((void (__fastcall *)(extension::ExThread::Runnable *, __int64))i->~AgIThreadHost)(i, 1i64);
    extension::SynchronizedQueue<extension::ExThread::Runnable>::dequeue(p_m_jobQueue, &result);
  }
  if ( i )
    ((void (__fastcall *)(extension::ExThread::Runnable *, __int64))i->~AgIThreadHost)(i, 1i64);
  return 0i64;
}

void __fastcall extension::AsyncJobConsumer::start(
        extension::AsyncJobConsumer *this,
        const extension::ExThread::StartParam *param)
{
  int v2; // edi
  __int64 v4; // rsi
  extension::ExThread *v5; // rcx
  int v6; // er9
  extension::ExThread::StartParam threadName; // [rsp+30h] [rbp-38h]

  v2 = 0;
  threadName = *param;
  if ( this->m_threads.m_count > 0 )
  {
    v4 = 0i64;
    do
    {
      v5 = &this->m_threads.m_threads._Mypair._Myval2[v4];
      if ( !v5->m_stateFlags.m_value._My_val )
      {
        v5->m_runnable = this;
        v6 = 50;
        if ( threadName.priority )
        {
          switch ( threadName.priority )
          {
            case Priority_Higher:
              v6 = 25;
              break;
            case Priority_Lower:
              v6 = 75;
              break;
            case Priority_BelowLower:
              v6 = 100;
              break;
          }
        }
        else
        {
          v6 = 0;
        }
        AgThread::start(&v5->m_agThread, this, threadName.stackSize, v6, threadName.name);
      }
      ++v2;
      ++v4;
    }
    while ( v2 < this->m_threads.m_count );
  }
}

void __fastcall extension::AsyncStatus::waitFor(extension::AsyncStatus *this, extension::AsyncStatus::Step s)
{
  int v3; // edi
  int v4; // ebx
  __int64 v5; // rbx
  int v6; // edi
  __int64 v7; // rbx

  v3 = 1;
  EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
  while ( (this->m_stateFlags.m_value._My_val & 1) == 0 )
  {
    EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
    --v3;
    SleepConditionVariableCS(
      (PCONDITION_VARIABLE)&extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_data,
      (PCRITICAL_SECTION)extension::AsyncStatus::s_signalCondition.m_conditionVariable.m_mutex,
      0xFFFFFFFF);
    LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_signalCondition.m_mutex);
    if ( v3 <= 0 )
    {
      v4 = 1 - v3;
      if ( 1 - v3 <= 0 )
      {
        if ( v4 < 0 )
        {
          v5 = (unsigned int)(v3 - 1);
          do
          {
            LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
            --v5;
          }
          while ( v5 );
        }
        v3 = 1;
      }
      else
      {
        do
        {
          EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
          --v4;
        }
        while ( v4 );
        v3 = 1;
      }
    }
  }
  v6 = -v3;
  if ( v6 <= 0 )
  {
    if ( v6 < 0 )
    {
      v7 = (unsigned int)-v6;
      do
      {
        LeaveCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
        --v7;
      }
      while ( v7 );
    }
  }
  else
  {
    do
    {
      EnterCriticalSection((LPCRITICAL_SECTION)&extension::AsyncStatus::s_mutex);
      --v6;
    }
    while ( v6 );
  }
}

