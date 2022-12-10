#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"

typedef HINSTANCE__ * HINSTANCE;
typedef long(*Scaleform::Function_InitializeCriticalSectionAndSpinCount)(_RTL_CRITICAL_SECTION *, unsigned long);
typedef HINSTANCE__ * HMODULE;
typedef long long(*FARPROC)();
typedef _RTL_CRITICAL_SECTION * PRTL_CRITICAL_SECTION;
typedef _RTL_CRITICAL_SECTION * LPCRITICAL_SECTION;
long Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(volatile long * p, long val); // 0x1402DB3B0
bool Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(volatile long * p, long c, long val); // 0x1402DB390
long long Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(volatile long long * p, long long val); // 0x1402DB3C0
Scaleform::Lock::Lock(unsigned long spinCount); // 0x1402DB2F0
Scaleform::Lock::~Lock(); // 0x1402DB380
void Scaleform::Lock::DoLock(); // 0x1402DB3A0
void Scaleform::Lock::Unlock(); // 0x140095090void __fastcall Scaleform::Lock::Lock(Scaleform::Lock *this, unsigned int spinCount)
{
  bool v2; // zf
  HMODULE LibraryA; // rax
  int (__fastcall *ProcAddress)(_RTL_CRITICAL_SECTION *, unsigned int); // rax
  _RTL_CRITICAL_SECTION *cs; // rcx

  v2 = !initTried;
  this->cs = (_RTL_CRITICAL_SECTION *)this->csBuf;
  if ( v2 )
  {
    LibraryA = LoadLibraryA("kernel32.dll");
    ProcAddress = (int (__fastcall *)(_RTL_CRITICAL_SECTION *, unsigned int))GetProcAddress(
                                                                               LibraryA,
                                                                               "InitializeCriticalSectionAndSpinCount");
    pInitFn = ProcAddress;
    initTried = 1;
  }
  else
  {
    ProcAddress = pInitFn;
  }
  cs = this->cs;
  if ( ProcAddress )
    ProcAddress(cs, spinCount);
  else
    InitializeCriticalSection(cs);
}

void __fastcall Scaleform::Lock::~Lock(Scaleform::Lock *this)
{
  DeleteCriticalSection(this->cs);
}

bool __fastcall Scaleform::AtomicOpsRaw_4ByteImpl::CompareAndSet_NoSync(volatile int *p, int c, int val)
{
  return c == _InterlockedCompareExchange(p, val, c);
}

void __fastcall Scaleform::Lock::DoLock(Scaleform::Lock *this)
{
  EnterCriticalSection(this->cs);
}

__int64 __fastcall Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(volatile int *p, int val)
{
  return (unsigned int)_InterlockedExchangeAdd(p, val);
}

__int64 __fastcall Scaleform::AtomicOpsRaw_8ByteImpl::Exchange_NoSync(volatile __int64 *p, __int64 val)
{
  return _InterlockedExchange64(p, val);
}

void __fastcall Scaleform::Lock::Unlock(Scaleform::Lock *this)
{
  LeaveCriticalSection(this->cs);
}

