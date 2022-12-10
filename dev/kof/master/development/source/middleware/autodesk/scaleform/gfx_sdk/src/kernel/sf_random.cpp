#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_random.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"

Scaleform::Alg::Random::Generator Scaleform::Alg::Generator_1; // 0x1409FA4A0
void(*Scaleform::Alg::Generator_1$initializer$)(); // 0x140739E68
unsigned long Scaleform::Alg::Random::NextRandom(); // 0x140422040
Scaleform::Alg::Random::Generator::Generator(); // 0x140421FB0
void Scaleform::Alg::Random::Generator::SeedRandom(unsigned long seed); // 0x1404220A0
float Scaleform::Alg::Random::Generator::GetUnitFloat(); // 0x140421FE0//decompilation failure at 1409FA4A0!
//decompilation failure at 140739E68!
void __fastcall Scaleform::Alg::Random::Generator::Generator(Scaleform::Alg::Random::Generator *this)
{
  unsigned int TicksMs; // eax

  this->C = 362436;
  this->I = 7;
  TicksMs = Scaleform::Timer::GetTicksMs();
  Scaleform::Alg::Random::Generator::SeedRandom(this, TicksMs);
}

float __fastcall Scaleform::Alg::Random::Generator::GetUnitFloat(Scaleform::Alg::Random::Generator *this)
{
  __int64 v1; // rax
  __int64 v2; // r9
  unsigned int v3; // edx
  unsigned __int64 v4; // rax
  int v5; // er8

  v1 = ((unsigned __int8)this->I + 1) & 7;
  v2 = v1;
  this->I = v1;
  v3 = this->C + 716514398 * this->Q[v1];
  v4 = (this->C + 716514398 * (unsigned __int64)this->Q[v1]) >> 32;
  this->C = v4;
  v5 = v4 + v3;
  if ( (unsigned int)v4 + v3 < (unsigned int)v4 )
  {
    ++v5;
    this->C = v4 + 1;
  }
  this->Q[v2] = -2 - v5;
  return (float)((unsigned int)(-2 - v5) >> 8) / 16777215.0;
}

__int64 __fastcall Scaleform::Alg::Random::NextRandom()
{
  __int64 v0; // rax
  unsigned int *v1; // r8
  unsigned int v2; // ecx
  unsigned __int64 v3; // rax
  int v4; // edx
  __int64 result; // rax

  v0 = (LOBYTE(Scaleform::Alg::Generator_1.I) + 1) & 7;
  Scaleform::Alg::Generator_1.I = (LOBYTE(Scaleform::Alg::Generator_1.I) + 1) & 7;
  v1 = &Scaleform::Alg::Generator_1.Q[v0];
  v2 = Scaleform::Alg::Generator_1.C + 716514398 * *v1;
  v3 = (Scaleform::Alg::Generator_1.C + 716514398 * (unsigned __int64)*v1) >> 32;
  Scaleform::Alg::Generator_1.C = v3;
  v4 = v3 + v2;
  if ( (unsigned int)v3 + v2 < (unsigned int)v3 )
  {
    ++v4;
    Scaleform::Alg::Generator_1.C = v3 + 1;
  }
  result = (unsigned int)(-2 - v4);
  *v1 = result;
  return result;
}

void __fastcall Scaleform::Alg::Random::Generator::SeedRandom(
        Scaleform::Alg::Random::Generator *this,
        unsigned int seed)
{
  unsigned int v2; // er8
  unsigned int v3; // er8
  int v4; // er8
  unsigned int v5; // er8
  int v6; // er8
  unsigned int v7; // er8
  int v8; // er8
  unsigned int v9; // er8
  int v10; // er8
  unsigned int v11; // er8
  int v12; // er8
  unsigned int v13; // er8
  int v14; // er8
  unsigned int v15; // er8

  v2 = (32 * (((seed ^ (seed << 13)) >> 17) ^ seed ^ (seed << 13))) ^ ((seed ^ (seed << 13)) >> 17) ^ seed ^ (seed << 13);
  this->Q[0] = v2;
  v3 = (((v2 << 13) ^ v2) >> 17) ^ (v2 << 13) ^ v2;
  v4 = (32 * v3) ^ v3;
  this->Q[1] = v4;
  v5 = (((v4 << 13) ^ (unsigned int)v4) >> 17) ^ (v4 << 13) ^ v4;
  v6 = (32 * v5) ^ v5;
  this->Q[2] = v6;
  v7 = (((v6 << 13) ^ (unsigned int)v6) >> 17) ^ (v6 << 13) ^ v6;
  v8 = (32 * v7) ^ v7;
  this->Q[3] = v8;
  v9 = (((v8 << 13) ^ (unsigned int)v8) >> 17) ^ (v8 << 13) ^ v8;
  v10 = (32 * v9) ^ v9;
  this->Q[4] = v10;
  v11 = (((v10 << 13) ^ (unsigned int)v10) >> 17) ^ (v10 << 13) ^ v10;
  v12 = (32 * v11) ^ v11;
  this->Q[5] = v12;
  v13 = (((v12 << 13) ^ (unsigned int)v12) >> 17) ^ (v12 << 13) ^ v12;
  v14 = (32 * v13) ^ v13;
  this->Q[6] = v14;
  v15 = (((v14 << 13) ^ (unsigned int)v14) >> 17) ^ (v14 << 13) ^ v14;
  this->Q[7] = v15 ^ (32 * v15);
  this->C = 362436;
  this->I = 7;
}

