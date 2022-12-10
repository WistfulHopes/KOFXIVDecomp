#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"

Scaleform::Render::Cxform Scaleform::Render::Cxform::Identity; // 0x1409F9510
Scaleform::Render::Cxform::Cxform(); // 0x14032A650
void Scaleform::Render::Cxform::SetIdentity(); // 0x14032A830
bool Scaleform::Render::Cxform::IsIdentity(); // 0x14032A790
bool Scaleform::Render::Cxform::operator==(const Scaleform::Render::Cxform & x); // 0x14032A680
bool Scaleform::Render::Cxform::operator!=(const Scaleform::Render::Cxform & x); // 0x14032A6F0
void Scaleform::Render::Cxform::Prepend(const Scaleform::Render::Cxform & c); // 0x14032A810
void Scaleform::Render::Cxform::Append(const Scaleform::Render::Cxform & c); // 0x14032A770
void Scaleform::Render::Cxform::SetToAppend(const Scaleform::Render::Cxform & c0, const Scaleform::Render::Cxform & c1); // 0x14032A860
void Scaleform::Render::Cxform::Normalize(); // 0x14032A800//decompilation failure at 1409F9510!
void __fastcall Scaleform::Render::Cxform::Cxform(Scaleform::Render::Cxform *this)
{
  this->M[0][0] = 1.0;
  this->M[0][1] = 1.0;
  this->M[0][2] = 1.0;
  *(_OWORD *)&this->M[0][3] = 0x3F800000ui64;
  this->M[1][3] = 0.0;
}

bool __fastcall Scaleform::Render::Cxform::operator==(
        Scaleform::Render::Cxform *this,
        const Scaleform::Render::Cxform *x)
{
  return this->M[0][0] == x->M[0][0]
      && this->M[0][1] == x->M[0][1]
      && this->M[0][2] == x->M[0][2]
      && this->M[0][3] == x->M[0][3]
      && this->M[1][0] == x->M[1][0]
      && this->M[1][1] == x->M[1][1]
      && this->M[1][2] == x->M[1][2]
      && this->M[1][3] == x->M[1][3];
}

bool __fastcall Scaleform::Render::Cxform::operator!=(
        Scaleform::Render::Cxform *this,
        const Scaleform::Render::Cxform *x)
{
  char v2; // al

  if ( x->M[0][0] != this->M[0][0]
    || x->M[0][1] != this->M[0][1]
    || x->M[0][2] != this->M[0][2]
    || x->M[0][3] != this->M[0][3]
    || x->M[1][0] != this->M[1][0]
    || x->M[1][1] != this->M[1][1]
    || x->M[1][2] != this->M[1][2]
    || (v2 = 1, x->M[1][3] != this->M[1][3]) )
  {
    v2 = 0;
  }
  return v2 == 0;
}

void __fastcall Scaleform::Render::Cxform::Append(Scaleform::Render::Cxform *this, const Scaleform::Render::Cxform *c)
{
  __m128 v2; // xmm3

  v2 = _mm_add_ps(*(__m128 *)&c->M[1][0], _mm_mul_ps(*(__m128 *)&this->M[1][0], *(__m128 *)&c->M[0][0]));
  *(__m128 *)&this->M[0][0] = _mm_mul_ps(*(__m128 *)&this->M[0][0], *(__m128 *)&c->M[0][0]);
  *(__m128 *)&this->M[1][0] = v2;
}

bool __fastcall Scaleform::Render::Cxform::IsIdentity(Scaleform::Render::Cxform *this)
{
  return this->M[0][0] == 1.0
      && this->M[0][1] == 1.0
      && this->M[0][2] == 1.0
      && this->M[0][3] == 1.0
      && this->M[1][0] == 0.0
      && this->M[1][1] == 0.0
      && this->M[1][2] == 0.0
      && this->M[1][3] == 0.0;
}

void __fastcall Scaleform::Render::Cxform::Normalize(Scaleform::Render::Cxform *this)
{
  *(__m128 *)&this->M[1][0] = _mm_mul_ps(*(__m128 *)&this->M[1][0], tffinv);
}

void __fastcall Scaleform::Render::Cxform::Prepend(Scaleform::Render::Cxform *this, const Scaleform::Render::Cxform *c)
{
  __m128 v2; // xmm3

  v2 = _mm_add_ps(*(__m128 *)&this->M[1][0], _mm_mul_ps(*(__m128 *)&c->M[1][0], *(__m128 *)&this->M[0][0]));
  *(__m128 *)&this->M[0][0] = _mm_mul_ps(*(__m128 *)&c->M[0][0], *(__m128 *)&this->M[0][0]);
  *(__m128 *)&this->M[1][0] = v2;
}

void __fastcall Scaleform::Render::Cxform::SetIdentity(Scaleform::Render::Cxform *this)
{
  this->M[0][0] = 1.0;
  this->M[0][1] = 1.0;
  this->M[0][2] = 1.0;
  *(_OWORD *)&this->M[0][3] = 0x3F800000ui64;
  this->M[1][3] = 0.0;
}

void __fastcall Scaleform::Render::Cxform::SetToAppend(
        Scaleform::Render::Cxform *this,
        const Scaleform::Render::Cxform *c0,
        const Scaleform::Render::Cxform *c1)
{
  __m128 v3; // xmm3

  v3 = _mm_add_ps(*(__m128 *)&c1->M[1][0], _mm_mul_ps(*(__m128 *)&c0->M[1][0], *(__m128 *)&c1->M[0][0]));
  *(__m128 *)&this->M[0][0] = _mm_mul_ps(*(__m128 *)&c0->M[0][0], *(__m128 *)&c1->M[0][0]);
  *(__m128 *)&this->M[1][0] = v3;
}

