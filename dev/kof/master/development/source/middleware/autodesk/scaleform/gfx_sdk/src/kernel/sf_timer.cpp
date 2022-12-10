#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"

Scaleform::Timer::TimerOverride * Scaleform::TimerOverrideInstance; // 0x140A72268
_RTL_CRITICAL_SECTION Scaleform::WinAPI_GetTimeCS; // 0x140A72228
volatile unsigned long Scaleform::WinAPI_OldTime; // 0x140A72250
volatile unsigned long Scaleform::WinAPI_WrapCounter; // 0x140A72254
unsigned long long Scaleform::Timer::StartRawTicks; // 0x140A72258
unsigned long long Scaleform::Timer::RawFrequency; // 0x140A72260
typedef unsigned long MMRESULT;
unsigned long long Scaleform::Timer::GetRawTicks(); // 0x1403238B0
unsigned long long Scaleform::Timer::GetRawFrequency(); // 0x140323860
unsigned long Scaleform::Timer::GetTicksMs(); // 0x140323970
unsigned long long Scaleform::Timer::GetTicks(); // 0x1403238F0
void Scaleform::Timer::initializeTimerSystem(); // 0x1403239A0
void Scaleform::Timer::shutdownTimerSystem(); // 0x140323A00//decompilation failure at 140A72268!
//decompilation failure at 140A72228!
//decompilation failure at 140A72250!
//decompilation failure at 140A72254!
//decompilation failure at 140A72258!
//decompilation failure at 140A72260!
unsigned __int64 __fastcall Scaleform::Timer::GetRawFrequency()
{
  unsigned __int64 QuadPart; // rcx
  LARGE_INTEGER Frequency; // [rsp+30h] [rbp+8h] BYREF

  QuadPart = Scaleform::Timer::RawFrequency;
  if ( !Scaleform::Timer::RawFrequency )
  {
    QueryPerformanceFrequency(&Frequency);
    QuadPart = Frequency.QuadPart;
    Scaleform::Timer::RawFrequency = Frequency.QuadPart;
  }
  if ( Scaleform::TimerOverrideInstance )
    return Scaleform::TimerOverrideInstance->GetRawFrequency(Scaleform::TimerOverrideInstance, QuadPart);
  else
    return QuadPart;
}

LARGE_INTEGER __fastcall Scaleform::Timer::GetRawTicks()
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  if ( Scaleform::TimerOverrideInstance )
    return (LARGE_INTEGER)Scaleform::TimerOverrideInstance->GetRawTicks(
                            Scaleform::TimerOverrideInstance,
                            PerformanceCount.QuadPart);
  else
    return PerformanceCount;
}

__int64 __fastcall Scaleform::Timer::GetTicks()
{
  unsigned int Time; // eax
  unsigned int v1; // ecx
  unsigned __int64 v2; // rbx

  EnterCriticalSection(&Scaleform::WinAPI_GetTimeCS);
  Time = timeGetTime();
  v1 = Time;
  if ( Scaleform::TimerOverrideInstance )
    v1 = Scaleform::TimerOverrideInstance->GetTicksMs(Scaleform::TimerOverrideInstance, Time);
  if ( Scaleform::WinAPI_OldTime > v1 )
    ++Scaleform::WinAPI_WrapCounter;
  Scaleform::WinAPI_OldTime = v1;
  v2 = v1 | ((unsigned __int64)Scaleform::WinAPI_WrapCounter << 32);
  LeaveCriticalSection(&Scaleform::WinAPI_GetTimeCS);
  return 1000 * v2;
}

unsigned int __fastcall Scaleform::Timer::GetTicksMs()
{
  unsigned int result; // eax

  result = timeGetTime();
  if ( Scaleform::TimerOverrideInstance )
    return Scaleform::TimerOverrideInstance->GetTicksMs(Scaleform::TimerOverrideInstance, result);
  return result;
}

void Scaleform::Timer::initializeTimerSystem(void)
{
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  timeBeginPeriod(1u);
  InitializeCriticalSection(&Scaleform::WinAPI_GetTimeCS);
  QueryPerformanceCounter(&PerformanceCount);
  Scaleform::Timer::StartRawTicks = PerformanceCount.QuadPart;
  if ( !Scaleform::Timer::RawFrequency )
  {
    QueryPerformanceFrequency(&PerformanceCount);
    Scaleform::Timer::RawFrequency = PerformanceCount.QuadPart;
  }
}

void Scaleform::Timer::shutdownTimerSystem(void)
{
  DeleteCriticalSection(&Scaleform::WinAPI_GetTimeCS);
  timeEndPeriod(1u);
}

