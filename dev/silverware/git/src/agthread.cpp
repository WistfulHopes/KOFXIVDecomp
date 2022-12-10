#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

struct AgThread::InternalData
{
	unsigned long long m_stackSize; // 0x0
	long m_priority; // 0x8
	void * m_thread; // 0x10
	AgString m_name; // 0x18
	long m_startDetached; // 0x28
	InternalData(AgThread::InternalData &);
	InternalData(const AgThread::InternalData &);
	InternalData();
	~InternalData();
	AgThread::InternalData & operator=(AgThread::InternalData &);
	AgThread::InternalData & operator=(const AgThread::InternalData &);
};
typedef tagTHREADNAME_INFO THREADNAME_INFO;
struct tagTHREADNAME_INFO
{
	unsigned long dwType; // 0x0
	const char * szName; // 0x8
	unsigned long dwThreadID; // 0x10
	unsigned long dwFlags; // 0x14
};
void SetThreadName(unsigned long dwThreadID, const char * threadName); // 0x140657B70
AgThread::AgThread(AgIThreadHost * host, unsigned long long stackSize, long priority, const char * threadName); // 0x140657910
AgThread::AgThread(AgThread::CreateSuspended __formal); // 0x1406579E0
AgThread::~AgThread(); // 0x140657A70
void AgThread::startDetached(AgIThreadHost * host, unsigned long long stackSize, long priority, const char * name); // 0x140657E50
void AgThread::start(AgIThreadHost * host, unsigned long long stackSize, long priority, const char * threadName); // 0x140657DC0
unsigned long AgThread::_onPreExecute(void * userData); // 0x140657C70
void AgThread::_onExecute(); // 0x140657BB0
unsigned long long AgThread::getId(); // 0x140657CF0
void AgThread::join(); // 0x140657D40
void AgThread::detach(); // 0x140657C80
long AgThread::getIsRunning(); // 0x140657D10
void AgThread::sleep(unsigned long ms); // 0x140657DB0
unsigned long long AgThread::getCurrentId(); // 0x140657CD0void __fastcall AgThread::AgThread(
        AgThread *this,
        AgIThreadHost *host,
        unsigned __int64 stackSize,
        int priority,
        const char *threadName)
{
  AgThread::InternalData *v9; // rax
  AgThread::InternalData *v10; // rbx

  this->m_refCount = 0i64;
  this->__vftable = (AgThread_vtbl *)&AgThread::`vftable';
  this->m_started = 0;
  this->m_host = host;
  v9 = (AgThread::InternalData *)operator new(0x30ui64);
  v10 = v9;
  if ( v9 )
  {
    v9->m_stackSize = 0x100000i64;
    v9->m_priority = -1;
    AgString::AgString(&v9->m_name, "AgThread", -1);
    v10->m_startDetached = 0;
  }
  else
  {
    v10 = 0i64;
  }
  this->m_internalData = v10;
  AgThread::start(this, host, stackSize, priority, threadName);
}

void __fastcall AgThread::AgThread(AgThread *this, AgThread::CreateSuspended __formal)
{
  AgThread::InternalData *v3; // rax
  AgThread::InternalData *v4; // rbx

  this->m_refCount = 0i64;
  this->__vftable = (AgThread_vtbl *)&AgThread::`vftable';
  this->m_started = 0;
  this->m_host = 0i64;
  v3 = (AgThread::InternalData *)operator new(0x30ui64);
  v4 = v3;
  if ( v3 )
  {
    v3->m_stackSize = 0x100000i64;
    v3->m_priority = -1;
    AgString::AgString(&v3->m_name, "AgThread", -1);
    v4->m_startDetached = 0;
  }
  else
  {
    v4 = 0i64;
  }
  this->m_internalData = v4;
}

void __fastcall AgThread::~AgThread(AgThread *this, unsigned __int64 a2)
{
  AgIThreadHost *m_host; // rcx
  AgThread::InternalData *m_internalData; // rdi

  this->__vftable = (AgThread_vtbl *)&AgThread::`vftable';
  m_host = this->m_host;
  if ( m_host )
  {
    if ( m_host->getThreadIsRunning(m_host) )
      this->m_host->onJoinThread(this->m_host);
    while ( WaitForSingleObject(this->m_internalData->m_thread, 0xFFFFFFFF) )
      ;
    CloseHandle(this->m_internalData->m_thread);
    this->m_started = 0;
    this->m_host = 0i64;
  }
  m_internalData = this->m_internalData;
  if ( m_internalData )
  {
    AgString::~AgString(&m_internalData->m_name, a2);
    operator delete(m_internalData, 0x30ui64);
  }
  this->m_internalData = 0i64;
}

void __fastcall SetThreadName(unsigned int dwThreadID, const char *threadName)
{
  ULONG_PTR Arguments[2]; // [rsp+20h] [rbp-28h] BYREF
  unsigned int v3; // [rsp+30h] [rbp-18h]
  int v4; // [rsp+34h] [rbp-14h]

  LODWORD(Arguments[0]) = 4096;
  Arguments[1] = (ULONG_PTR)threadName;
  v3 = dwThreadID;
  v4 = 0;
  RaiseException(0x406D1388u, 0, 3u, Arguments);
}

void __fastcall AgThread::_onExecute(AgThread *this)
{
  unsigned int v2; // eax
  AgThread::InternalData *m_internalData; // rcx
  int m_priority; // edi
  AgIThreadHost *m_host; // rdi

  v2 = time64(0i64);
  srand(v2);
  while ( !this->m_started )
    Sleep(0);
  m_internalData = this->m_internalData;
  m_priority = m_internalData->m_priority;
  if ( m_priority != -1 )
  {
    SetThreadPriority(
      m_internalData->m_thread,
      ((unsigned int)((unsigned __int64)(5497558140i64 * (100 - m_priority)) >> 32) >> 31)
    - 2
    + ((int)((unsigned __int64)(5497558140i64 * (100 - m_priority)) >> 32) >> 5));
    this->m_internalData->m_priority = m_priority;
  }
  m_host = this->m_host;
  if ( this->m_internalData->m_startDetached && m_host )
  {
    if ( m_host->getThreadIsRunning(this->m_host) )
      this->m_host->onDetachThread(this->m_host);
    CloseHandle(this->m_internalData->m_thread);
    this->m_started = 0;
    this->m_host = 0i64;
  }
  m_host->onExecuteThread(m_host);
}

__int64 __fastcall AgThread::_onPreExecute(void *userData)
{
  AgThread::_onExecute((AgThread *)userData);
  return 0i64;
}

void __fastcall AgThread::detach(AgThread *this)
{
  AgIThreadHost *m_host; // rcx

  m_host = this->m_host;
  if ( m_host )
  {
    if ( m_host->getThreadIsRunning(m_host) )
      this->m_host->onDetachThread(this->m_host);
    CloseHandle(this->m_internalData->m_thread);
    this->m_started = 0;
    this->m_host = 0i64;
  }
}

unsigned __int64 __fastcall AgThread::getCurrentId()
{
  return GetCurrentThreadId();
}

unsigned __int64 __fastcall AgThread::getId(AgThread *this)
{
  return GetThreadId(this->m_internalData->m_thread);
}

_BOOL8 __fastcall AgThread::getIsRunning(AgThread *this)
{
  AgIThreadHost *m_host; // rcx

  m_host = this->m_host;
  return m_host && m_host->getThreadIsRunning(m_host);
}

void __fastcall AgThread::join(AgThread *this)
{
  AgIThreadHost *m_host; // rcx

  m_host = this->m_host;
  if ( m_host )
  {
    if ( m_host->getThreadIsRunning(m_host) )
      this->m_host->onJoinThread(this->m_host);
    while ( WaitForSingleObject(this->m_internalData->m_thread, 0xFFFFFFFF) )
      ;
    CloseHandle(this->m_internalData->m_thread);
    this->m_started = 0;
    this->m_host = 0i64;
  }
}

// attributes: thunk
void __stdcall AgThread::sleep(DWORD dwMilliseconds)
{
  Sleep(dwMilliseconds);
}

void __fastcall AgThread::start(
        AgThread *this,
        AgIThreadHost *host,
        unsigned __int64 stackSize,
        int priority,
        const char *threadName)
{
  AgThread::InternalData *m_internalData; // rax
  unsigned int v7; // edi
  const char *v8; // rdx
  void *v9; // rax
  const char *v10; // rdx
  unsigned int dwThreadID; // [rsp+58h] [rbp+20h] BYREF

  m_internalData = this->m_internalData;
  this->m_host = host;
  v7 = stackSize;
  v8 = threadName;
  m_internalData->m_stackSize = stackSize;
  this->m_internalData->m_priority = priority;
  AgString::operator=(&this->m_internalData->m_name, v8);
  v9 = (void *)beginthreadex(
                 0i64,
                 v7,
                 (unsigned int (__fastcall *)(void *))AgThread::_onPreExecute,
                 this,
                 0,
                 &dwThreadID);
  v10 = threadName;
  this->m_internalData->m_thread = v9;
  SetThreadName(dwThreadID, v10);
  this->m_started = 1;
}

void __fastcall AgThread::startDetached(
        AgThread *this,
        AgIThreadHost *host,
        unsigned __int64 stackSize,
        int priority,
        const char *name)
{
  this->m_internalData->m_startDetached = 1;
  AgThread::start(this, host, stackSize, priority, name);
}

