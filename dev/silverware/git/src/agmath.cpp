#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"

float AgMath::ms_sinLUT[4096]; // 0x140A8FF60
void AgMath::initialize(); // 0x14067DD60//decompilation failure at 140A8FF60!
void AgMath::initialize(void)
{
  float *v0; // rdi
  unsigned int i; // ebx

  v0 = AgMath::ms_sinLUT;
  for ( i = 0; i < 0x1000; i += 2 )
  {
    v0 += 2;
    *((double *)v0 - 1) = _vdecl_sin2();
  }
}

