#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"

void AgPerformanceCounter::reset(); // 0x140678470void __fastcall AgPerformanceCounter::reset(AgPerformanceCounter *this)
{
  __int64 m_frameCount; // r8

  m_frameCount = this->m_frameCount;
  *(_QWORD *)&this->m_currentDeltaTime = 0i64;
  this->m_startTime = 0.0;
  memset(this->m_deltaTime, 0, 4 * m_frameCount);
}

