#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

AgClock::AgClock(double maxFrameTime); // 0x140666AE0
void AgClock::tick(); // 0x140666BA0
double AgClock::getElapsedFrameTime(); // 0x140666B00
double AgClock::getTotalElapsedTime(); // 0x140666B60
void AgClock::setMaxElapsedFrameTime(double maxElapsedFrameTime); // 0x140666B90
void AgClock::reset(); // 0x140666B70
double AgClock::getSystemTime(); // 0x140666B10void __fastcall AgClock::AgClock(AgClock *this, long double maxFrameTime)
{
  this->m_maxElapsedFrameTime = maxFrameTime;
  this->m_elapsedFrameTime = 0.0;
  this->m_totalElapsedTime = 0.0;
  this->m_time = 0.0;
  this->m_conversion = 0.0;
}

long double __fastcall AgClock::getElapsedFrameTime(AgClock *this)
{
  return this->m_elapsedFrameTime;
}

double __fastcall AgClock::getSystemTime()
{
  signed int LowPart; // eax
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  LowPart = freq_0.LowPart;
  if ( !freq_0.QuadPart )
  {
    QueryPerformanceFrequency(&freq_0);
    LowPart = freq_0.LowPart;
  }
  return (double)(int)PerformanceCount.LowPart / (double)LowPart;
}

long double __fastcall AgClock::getTotalElapsedTime(AgClock *this)
{
  return this->m_totalElapsedTime;
}

void __fastcall AgClock::reset(AgClock *this)
{
  this->m_time = 0.0;
  this->m_elapsedFrameTime = 0.0;
  this->m_totalElapsedTime = 0.0;
  AgClock::tick(this);
}

void __fastcall AgClock::setMaxElapsedFrameTime(AgClock *this, long double maxElapsedFrameTime)
{
  this->m_maxElapsedFrameTime = maxElapsedFrameTime;
}

void __fastcall AgClock::tick(AgClock *this)
{
  signed int LowPart; // eax
  bool v3; // cf
  double v4; // xmm0_8
  long double v5; // xmm2_8
  double m_maxElapsedFrameTime; // xmm2_8
  long double v7; // xmm0_8
  LARGE_INTEGER PerformanceCount; // [rsp+30h] [rbp+8h] BYREF

  QueryPerformanceCounter(&PerformanceCount);
  if ( freq.QuadPart )
  {
    LowPart = PerformanceCount.LowPart;
  }
  else
  {
    QueryPerformanceFrequency(&freq);
    LowPart = PerformanceCount.LowPart;
    this->m_time = (double)(int)PerformanceCount.LowPart;
  }
  if ( this->m_time == 0.0 )
    this->m_time = (double)LowPart;
  v3 = this->m_maxElapsedFrameTime > 0.0;
  v4 = (double)(int)freq.LowPart;
  v5 = (double)LowPart - this->m_time;
  this->m_time = (double)LowPart;
  m_maxElapsedFrameTime = v5 / v4;
  if ( v3 && this->m_maxElapsedFrameTime < m_maxElapsedFrameTime )
    m_maxElapsedFrameTime = this->m_maxElapsedFrameTime;
  v7 = this->m_totalElapsedTime + m_maxElapsedFrameTime;
  this->m_elapsedFrameTime = m_maxElapsedFrameTime;
  this->m_totalElapsedTime = v7;
}

