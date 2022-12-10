#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hittest.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"

bool Scaleform::Render::Math2D::CheckMonoQuadIntersection(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y); // 0x1403E9E70
bool Scaleform::Render::Math2D::CheckQuadIntersection(float x1, float y1, float x2, float y2, float x3, float y3, float x, float y); // 0x1403EA0D0
void Scaleform::Render::Math2D::SubdivideCubicToQuads<Scaleform::Render::Math2D::QuadCurvePath>(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, Scaleform::Render::Math2D::QuadCurvePath & path); // 0x1403E9770
struct Scaleform::Render::Math2D::CubicCurveCoord
{
	float x1; // 0x0
	float y1; // 0x4
	float x2; // 0x8
	float y2; // 0xC
	float x3; // 0x10
	float y3; // 0x14
	float x4; // 0x18
	float y4; // 0x1C
};
void Scaleform::Render::Math2D::SubdivideCubic<Scaleform::Render::Math2D::CubicCurveCoord>(const Scaleform::Render::Math2D::CubicCurveCoord & c, float t, Scaleform::Render::Math2D::CubicCurveCoord * c1, Scaleform::Render::Math2D::CubicCurveCoord * c2); // 0x1403E9580
void Scaleform::Render::Math2D::CubicToQuadratic<Scaleform::Render::Math2D::QuadCurvePath>(float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, Scaleform::Render::Math2D::QuadCurvePath & path); // 0x1403E91C0
struct Scaleform::Render::Math2D::QuadCoord
{
	float cx; // 0x0
	float cy; // 0x4
	float ax; // 0x8
	float ay; // 0xC
};
class Scaleform::Render::Math2D::QuadCurvePath
{
	enum <unnamed-enum-StaticBuff>
	{
		StaticBuff = 32,
	};
public:
	QuadCurvePath();
	void QuadTo(float, float, float, float);
	unsigned long GetQuadCount();
	const Scaleform::Render::Math2D::QuadCoord & GetQuad(unsigned long);
private:
	Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2> Quads; // 0x0
public:
	~QuadCurvePath();
};
class Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2>
{
	struct ValueType;
private:
	ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2>(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2> &);
public:
	ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2>();
	void Clear();
	void PushBack(const Scaleform::Render::Math2D::QuadCoord &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	Scaleform::Render::Math2D::QuadCoord & operator[](unsigned long long);
	const Scaleform::Render::Math2D::QuadCoord & operator[](unsigned long long);
	Scaleform::Render::Math2D::QuadCoord & At(unsigned long long);
	const Scaleform::Render::Math2D::QuadCoord & At(unsigned long long);
	Scaleform::Render::Math2D::QuadCoord ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2> & operator=(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	Scaleform::Render::Math2D::QuadCoord Static[32]; // 0x18
	Scaleform::Render::Math2D::QuadCoord * Data; // 0x218
public:
	void __dflt_ctor_closure();
};
long Scaleform::Render::Math2D::CheckQuadraticIntersection(long styleCount, float x1, float y1, float x2, float y2, float x3, float y3, float x, float y); // 0x1403EA340
long Scaleform::Render::Math2D::CheckCubicIntersection(long styleCount, float x1, float y1, float x2, float y2, float x3, float y3, float x4, float y4, float x, float y); // 0x1403E9C60
bool Scaleform::Render::HitTestRoundStroke(const Scaleform::Render::VertexPath & path, float w, float x, float y); // 0x1403EA840
bool Scaleform::Render::HitTestGeneralStroke(const Scaleform::Render::VertexPath & path, float x, float y); // 0x1403EA3F0void __fastcall Scaleform::Render::Math2D::CubicToQuadratic<Scaleform::Render::Math2D::QuadCurvePath>(
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float x4,
        float y4,
        Scaleform::Render::Math2D::QuadCurvePath *path)
{
  float v9; // xmm8_4
  float v10; // xmm6_4
  float v11; // xmm9_4
  float v12; // xmm10_4
  float v13; // xmm12_4
  float v14; // xmm5_4
  float v15; // xmm7_4
  float v16; // xmm13_4
  float v17; // xmm1_4
  float v18; // xmm6_4
  float v19; // xmm0_4
  int v20; // eax
  unsigned int v21; // edx
  int v22; // ecx
  int v23; // ecx
  int v24; // ecx
  int v25; // ecx
  float v26; // xmm0_4
  float *p_x4; // rbx
  __int64 v28; // rdi
  float v29; // [rsp+58h] [rbp-B0h]
  float c; // [rsp+60h] [rbp-A8h]
  Scaleform::Render::Math2D::CubicCurveCoord c_8; // [rsp+68h] [rbp-A0h] BYREF
  Scaleform::Render::Math2D::CubicCurveCoord c1; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::Render::Math2D::CubicCurveCoord c2; // [rsp+A8h] [rbp-60h] BYREF
  Scaleform::Render::Math2D::CubicCurveCoord v35; // [rsp+C8h] [rbp-40h] BYREF

  v9 = FLOAT_N1_0;
  v10 = y1;
  c = x1;
  v11 = (float)(x2 * 3.0) - (float)(x1 * 3.0);
  v12 = (float)(y2 * 3.0) - (float)(y1 * 3.0);
  v13 = (float)((float)((float)(x2 * 3.0) - x1) - (float)(x3 * 3.0)) + x4;
  v29 = (float)((float)(x1 * 3.0) - (float)(x2 * 6.0)) + (float)(x3 * 3.0);
  v14 = (float)((float)(y1 * 3.0) - (float)(y2 * 6.0)) + (float)(y3 * 3.0);
  v15 = FLOAT_N1_0;
  v16 = (float)((float)((float)(y2 * 3.0) - y1) - (float)(y3 * 3.0)) + y4;
  v17 = (float)(v29 * v16) - (float)(v14 * v13);
  if ( v17 != 0.0 )
  {
    v18 = (float)((float)((float)(v11 * v16) - (float)(v12 * v13)) * -0.5) / v17;
    v19 = sqrtf((float)(v18 * v18) - (float)((float)((float)(v11 * v14) - (float)(v12 * v29)) / (float)(v17 * 3.0)));
    v9 = v18 - v19;
    v15 = v19 + v18;
    v10 = y1;
  }
  v20 = 0;
  v21 = 1;
  c_8.x1 = c;
  c_8.x2 = x2;
  c_8.x3 = x3;
  c_8.y3 = y3;
  c_8.x4 = x4;
  c_8.y1 = v10;
  c_8.y4 = y4;
  c_8.y2 = y2;
  if ( v15 <= 0.0 || (v22 = 2, v15 >= 1.0) )
    v22 = 0;
  if ( v9 > 0.0 && v9 < 1.0 )
    v20 = 1;
  v23 = v20 + v22;
  if ( v23 )
  {
    v24 = v23 - 1;
    if ( v24 )
    {
      v25 = v24 - 1;
      if ( v25 )
      {
        if ( v25 == 1 )
        {
          if ( v9 > v15 )
          {
            v26 = v9;
            v9 = v15;
            v15 = v26;
          }
          Scaleform::Render::Math2D::SubdivideCubic<Scaleform::Render::Math2D::CubicCurveCoord>(&c_8, v9, &c1, &c2);
          Scaleform::Render::Math2D::SubdivideCubic<Scaleform::Render::Math2D::CubicCurveCoord>(
            &c2,
            (float)(v15 - v9) / (float)(1.0 - v9),
            &c2,
            &v35);
          v21 = 3;
        }
      }
      else
      {
        Scaleform::Render::Math2D::SubdivideCubic<Scaleform::Render::Math2D::CubicCurveCoord>(&c_8, v15, &c1, &c2);
        v21 = 2;
      }
    }
    else
    {
      Scaleform::Render::Math2D::SubdivideCubic<Scaleform::Render::Math2D::CubicCurveCoord>(&c_8, v9, &c1, &c2);
      v21 = 2;
    }
  }
  else
  {
    c1 = c_8;
  }
  p_x4 = &c1.x4;
  v28 = v21;
  do
  {
    Scaleform::Render::Math2D::SubdivideCubicToQuads<Scaleform::Render::Math2D::QuadCurvePath>(
      *(p_x4 - 6),
      *(p_x4 - 5),
      *(p_x4 - 4),
      *(p_x4 - 3),
      *(p_x4 - 2),
      *(p_x4 - 1),
      *p_x4,
      p_x4[1],
      path);
    p_x4 += 8;
    --v28;
  }
  while ( v28 );
}

void __fastcall Scaleform::Render::Math2D::SubdivideCubic<Scaleform::Render::Math2D::CubicCurveCoord>(
        const Scaleform::Render::Math2D::CubicCurveCoord *c,
        float t,
        Scaleform::Render::Math2D::CubicCurveCoord *c1,
        Scaleform::Render::Math2D::CubicCurveCoord *c2)
{
  float y2; // xmm0_4
  float x2; // xmm2_4
  float y4; // xmm9_4
  float x4; // xmm11_4
  float v9; // xmm12_4
  float v10; // xmm15_4
  float v11; // xmm10_4
  float v12; // xmm7_4
  float y3; // xmm2_4
  float v14; // xmm6_4
  float v15; // xmm8_4
  float v16; // xmm3_4
  float v17; // xmm5_4
  float v18; // xmm4_4
  float v19; // xmm2_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float y1; // [rsp+B8h] [rbp+10h]

  y2 = c->y2;
  x2 = c->x2;
  y4 = c->y4;
  x4 = c->x4;
  y1 = c->y1;
  v9 = (float)((float)(y2 - y1) * t) + y1;
  v10 = (float)((float)(x2 - c->x1) * t) + c->x1;
  v11 = (float)((float)(x4 - c->x3) * t) + c->x3;
  v12 = (float)((float)(c->x3 - x2) * t) + x2;
  y3 = c->y3;
  c1->x1 = c->x1;
  c1->x2 = v10;
  c1->y2 = v9;
  v14 = (float)((float)(y3 - y2) * t) + y2;
  v15 = (float)((float)(y4 - y3) * t) + y3;
  v16 = (float)((float)(v11 - v12) * t) + v12;
  v17 = (float)((float)(v12 - v10) * t) + v10;
  c1->x3 = v17;
  v18 = (float)((float)(v14 - v9) * t) + v9;
  v19 = (float)((float)(v15 - v14) * t) + v14;
  c1->y1 = y1;
  v20 = (float)((float)(v16 - v17) * t) + v17;
  c1->y3 = v18;
  c1->x4 = v20;
  v21 = (float)((float)(v19 - v18) * t) + v18;
  c1->y4 = v21;
  c2->x1 = v20;
  c2->y1 = v21;
  c2->x2 = v16;
  c2->y2 = v19;
  c2->x3 = v11;
  c2->y3 = v15;
  c2->x4 = x4;
  c2->y4 = y4;
}

void __fastcall Scaleform::Render::Math2D::SubdivideCubicToQuads<Scaleform::Render::Math2D::QuadCurvePath>(
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float x4,
        float y4,
        Scaleform::Render::Math2D::QuadCurvePath *path)
{
  float v10; // xmm8_4
  float v13; // xmm14_4
  float v15; // xmm7_4
  float v16; // xmm9_4
  float v17; // xmm10_4
  float v18; // xmm6_4
  float v19; // xmm8_4
  float v20; // xmm14_4
  float v21; // xmm13_4
  float v22; // xmm13_4
  float v23; // xmm13_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm0_4
  float v27; // xmm14_4
  float v28; // xmm1_4
  float v29; // xmm2_4
  float v30; // xmm9_4
  float v31; // xmm10_4
  float v32; // xmm1_4
  float v33; // xmm9_4
  float v34; // xmm10_4
  float v35; // xmm6_4
  float v36; // xmm1_4
  float v37; // xmm0_4
  float v38; // xmm6_4
  float v39; // xmm1_4
  float v40; // xmm6_4
  float v41; // [rsp+50h] [rbp-C8h]
  float v42; // [rsp+54h] [rbp-C4h]
  Scaleform::Render::Math2D::QuadCoord val; // [rsp+58h] [rbp-C0h] BYREF
  float x; // [rsp+120h] [rbp+8h]
  float y1a; // [rsp+128h] [rbp+10h]
  float x2a; // [rsp+130h] [rbp+18h]
  float y2a; // [rsp+138h] [rbp+20h]
  float y3a; // [rsp+148h] [rbp+30h]
  float patha; // [rsp+160h] [rbp+48h]

  y2a = y2;
  x2a = x2;
  v10 = y2;
  v13 = x3;
  while ( 1 )
  {
    v15 = v13;
    v16 = x2 - x1;
    v17 = v10 - y1;
    v18 = y3 - v10;
    v19 = x4 - v13;
    v20 = y4 - y3;
    v21 = sqrtf((float)(v17 * v17) + (float)(v16 * v16));
    v22 = v21 + sqrtf((float)(v18 * v18) + (float)((float)(v15 - x2) * (float)(v15 - x2)));
    v23 = (float)(v22 + sqrtf((float)(v20 * v20) + (float)(v19 * v19))) * 0.0049999999;
    v24 = (float)((float)(y4 - y3) * (float)(x2 - x1)) - (float)(v19 * v17);
    v25 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v24) & _xmm);
    if ( v23 > v25 )
    {
      v29 = FLOAT_0_5;
      v32 = y2a;
      v27 = x3;
      v34 = (float)(y2a + y3) * 0.5;
      v33 = (float)(x2a + x3) * 0.5;
    }
    else
    {
      v26 = (float)(x1 - x3) * v20;
      v27 = x3;
      v28 = (float)((float)((float)(y1 - y3) * v19) - v26) / v24;
      v29 = FLOAT_0_5;
      v30 = v16 * v28;
      v31 = v17 * v28;
      v32 = y2a;
      v33 = v30 + x1;
      v34 = v31 + y1;
    }
    v35 = y1 + v32;
    v36 = (float)(v32 + y3) * v29;
    y3 = (float)(y3 + y4) * v29;
    v41 = v35 * v29;
    y1a = (float)(v36 + (float)(v35 * v29)) * v29;
    v37 = (float)(x2a + v27) * v29;
    v13 = (float)(v27 + x4) * v29;
    v42 = (float)(x1 + x2a) * v29;
    x3 = v13;
    x2a = (float)(v13 + v37) * v29;
    y2a = (float)(y3 + v36) * v29;
    patha = (float)(v37 + v42) * v29;
    x = (float)(x2a + patha) * v29;
    y3a = (float)(y2a + y1a) * v29;
    v38 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(
                          Scaleform::Render::Math2D::LinePointDistance(
                            x1,
                            y1,
                            x4,
                            y4,
                            (float)((float)((float)(v33 + x1) * v29) + (float)((float)(v33 + x4) * v29)) * v29,
                            (float)((float)((float)(v34 + y1) * v29) + (float)((float)(v34 + y4) * v29)) * v29)) & _xmm);
    v39 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(Scaleform::Render::Math2D::LinePointDistance(x1, y1, x4, y4, x, y3a)) & _xmm);
    v10 = y2a;
    v40 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)(v38 - v39)) & _xmm);
    if ( v23 > (float)(v40
                     + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64(
                                              Scaleform::Render::Math2D::LinePointDistance(
                                                patha,
                                                y1a,
                                                x2a,
                                                y2a,
                                                (float)((float)((float)(v33 + x1) * v29)
                                                      + (float)((float)(v33 + x4) * v29))
                                              * v29,
                                                (float)((float)((float)(v34 + y1) * v29)
                                                      + (float)((float)(v34 + y4) * v29))
                                              * v29)) & _xmm)) )
      break;
    Scaleform::Render::Math2D::SubdivideCubicToQuads<Scaleform::Render::Math2D::QuadCurvePath>(
      x1,
      y1,
      v42,
      v41,
      patha,
      y1a,
      x,
      y3a,
      path);
    x2 = x2a;
    y1 = y3a;
    x1 = x;
  }
  val.ax = x4;
  val.ay = y4;
  val.cx = v33;
  val.cy = v34;
  Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2>::PushBack(&path->Quads, &val);
}

__int64 __fastcall Scaleform::Render::Math2D::CheckCubicIntersection(
        int styleCount,
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float x4,
        float y4,
        float x,
        float y)
{
  float v12; // xmm6_4
  float v13; // xmm7_4
  Scaleform::Render::Math2D::QuadCurvePath *Data; // rbp
  float *p_ax; // rdi
  __int64 Size_low; // rsi
  float v17; // xmm8_4
  float v18; // xmm4_4
  float v19; // xmm9_4
  float v20; // xmm1_4
  float v21; // xmm0_4
  float v22; // xmm5_4
  Scaleform::Render::Math2D::QuadCurvePath path; // [rsp+50h] [rbp-2A8h] BYREF

  path.Quads.pHeap = Scaleform::Memory::pGlobalHeap;
  v12 = y1;
  path.Quads.Size = 0i64;
  path.Quads.Reserved = 32i64;
  path.Quads.Data = path.Quads.Static;
  v13 = x1;
  Scaleform::Render::Math2D::CubicToQuadratic<Scaleform::Render::Math2D::QuadCurvePath>(
    x1,
    y1,
    x2,
    y2,
    x3,
    y3,
    x4,
    y4,
    &path);
  Data = (Scaleform::Render::Math2D::QuadCurvePath *)path.Quads.Data;
  if ( LODWORD(path.Quads.Size) )
  {
    p_ax = &path.Quads.Data->ax;
    Size_low = LODWORD(path.Quads.Size);
    do
    {
      v17 = p_ax[1];
      v18 = v12;
      v19 = *p_ax;
      v20 = v17;
      v21 = *p_ax;
      v22 = v13;
      if ( v12 > v17 )
      {
        v22 = *p_ax;
        v18 = p_ax[1];
        v21 = v13;
        v20 = v12;
      }
      if ( Scaleform::Render::Math2D::CheckQuadIntersection(v22, v18, *(p_ax - 2), *(p_ax - 1), v21, v20, x, y) )
        styleCount ^= 1u;
      p_ax += 4;
      v13 = v19;
      v12 = v17;
      --Size_low;
    }
    while ( Size_low );
  }
  if ( Data != (Scaleform::Render::Math2D::QuadCurvePath *)path.Quads.Static )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
  return (unsigned int)styleCount;
}

bool __fastcall Scaleform::Render::Math2D::CheckMonoQuadIntersection(
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float x,
        float y)
{
  float v11; // xmm11_4
  BOOL v12; // edx
  float v13; // xmm1_4
  bool v14; // cf
  bool v15; // zf
  float v16; // xmm1_4
  float v17; // xmm0_4
  float v19; // xmm0_4
  float v20; // xmm9_4
  float v21; // xmm2_4
  float v22; // xmm0_4

  if ( y < y1 || y3 <= y )
    return 0;
  v11 = x2 - x1;
  v12 = (float)((float)((float)(y2 - y1) * (float)(x - x2)) - (float)((float)(y - y2) * (float)(x2 - x1))) > 0.0;
  v13 = (float)((float)(y3 - y2) * (float)(x - x3)) - (float)((float)(y - y3) * (float)(x3 - x2));
  v14 = v13 < 0.0;
  v15 = v13 == 0.0;
  v16 = y3 - y1;
  v17 = (float)((float)(y3 - y1) * (float)(x - x3)) - (float)((float)(x3 - x1) * (float)(y - y3));
  if ( !v14 && !v15 && v17 > 0.0 && v12 )
    return 1;
  if ( (v14 || v15) && v17 <= 0.0 && !v12 )
    return 0;
  v19 = FLOAT_N1_0;
  v20 = (float)(y1 - (float)(y2 + y2)) + y3;
  if ( v20 == 0.0 )
  {
    if ( v16 != 0.0 )
      v19 = (float)(y - y1) / v16;
  }
  else
  {
    v21 = (float)((float)((float)(y2 * y2) - (float)((float)(y3 - y) * y1)) - (float)((float)(y + y) * y2))
        + (float)(y3 * y);
    if ( v21 <= 0.0 )
      v22 = 0.0;
    else
      v22 = sqrtf(v21);
    v19 = (float)((float)(v22 + y1) - y2) / v20;
  }
  return x > (float)((float)((float)((float)((float)((float)(x3 - x2) * v19) + x2) - (float)((float)(v11 * v19) + x1))
                           * v19)
                   + (float)((float)(v11 * v19) + x1));
}

bool __fastcall Scaleform::Render::Math2D::CheckQuadIntersection(
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float x,
        float y)
{
  float v10; // xmm8_4
  float v12; // xmm1_4
  float v13; // xmm0_4
  float v14; // xmm5_4
  float v15; // xmm13_4
  float v16; // xmm14_4
  float v17; // xmm9_4
  float v18; // xmm12_4
  float v19; // xmm10_4
  float v20; // xmm2_4
  float v21; // xmm1_4
  float v22; // xmm15_4
  float v23; // xmm4_4
  float v24; // xmm0_4
  float v25; // xmm4_4
  float v26; // xmm11_4
  bool v27; // bl
  float v28; // [rsp+F8h] [rbp+10h]

  v10 = y3;
  if ( y2 >= y1 && y3 >= y2 )
    return Scaleform::Render::Math2D::CheckMonoQuadIntersection(x1, y1, x2, y2, x3, y3, x, y);
  v12 = (float)((float)(y2 + y2) - y1) - y3;
  if ( v12 == 0.0 )
    v13 = FLOAT_N1_0;
  else
    v13 = (float)(y2 - y1) / v12;
  v14 = x3;
  v15 = x1;
  v16 = y1;
  v17 = (float)((float)(x2 - x1) * v13) + x1;
  v18 = (float)((float)(x3 - x2) * v13) + x2;
  v19 = (float)((float)(y2 - y1) * v13) + y1;
  v20 = (float)((float)(y3 - y2) * v13) + y2;
  v21 = (float)((float)(v18 - v17) * v13) + v17;
  v22 = v21;
  v23 = (float)(v20 - v19) * v13;
  v24 = v21;
  v25 = v23 + v19;
  v28 = v25;
  v26 = v25;
  if ( y1 > v25 )
  {
    v28 = y1;
    v15 = v21;
    v22 = x1;
    v16 = v25;
  }
  if ( v25 > y3 )
  {
    v24 = x3;
    v26 = y3;
    v14 = v21;
    v10 = v25;
  }
  v27 = Scaleform::Render::Math2D::CheckMonoQuadIntersection(v24, v26, v18, v20, v14, v10, x, y);
  return Scaleform::Render::Math2D::CheckMonoQuadIntersection(v15, v16, v17, v19, v22, v28, x, y) != v27;
}

__int64 __fastcall Scaleform::Render::Math2D::CheckQuadraticIntersection(
        int styleCount,
        float x1,
        float y1,
        float x2,
        float y2,
        float x3,
        float y3,
        float x,
        float y)
{
  float v10; // xmm2_4
  float v11; // xmm5_4
  float v13; // xmm0_4
  float v14; // xmm6_4

  v10 = y3;
  v11 = x1;
  if ( y1 <= y3 )
  {
    v14 = x3;
  }
  else
  {
    v11 = x3;
    v13 = y1;
    y1 = y3;
    v14 = x1;
    v10 = v13;
  }
  if ( Scaleform::Render::Math2D::CheckQuadIntersection(v11, y1, x2, y2, v14, v10, x, y) )
    styleCount ^= 1u;
  return (unsigned int)styleCount;
}

bool __fastcall Scaleform::Render::HitTestGeneralStroke(const Scaleform::Render::VertexPath *path, float x, float y)
{
  unsigned __int64 Size; // rdi
  int v4; // edx
  unsigned int v5; // er13
  Scaleform::Render::PathBasic **Pages; // r8
  unsigned __int64 v7; // rsi
  unsigned int v8; // er15
  unsigned __int64 v9; // rax
  __int64 v10; // rsi
  Scaleform::Render::PathBasic *v11; // r12
  unsigned int Count; // er14
  Scaleform::Render::VertexBasic **v13; // rdi
  unsigned int v14; // er11
  unsigned int v15; // eax
  __int64 v16; // rbx
  __int64 v17; // r9
  __int64 v18; // rcx
  Scaleform::Render::VertexBasic *v19; // r8
  float v20; // xmm5_4
  float v21; // xmm6_4
  Scaleform::Render::VertexBasic *v22; // r10
  float v23; // xmm3_4
  int v24; // eax
  float v25; // xmm4_4
  float v26; // xmm5_4
  float v27; // xmm6_4
  __int64 v28; // rcx
  Scaleform::Render::VertexBasic *v29; // r8
  float v30; // xmm3_4
  int v31; // eax
  float v32; // xmm4_4
  float v33; // xmm5_4
  float v34; // xmm6_4
  __int64 v35; // rcx
  Scaleform::Render::VertexBasic *v36; // r8
  float v37; // xmm3_4
  int v38; // eax
  float v39; // xmm0_4
  float v40; // xmm4_4
  float v41; // xmm5_4
  float v42; // xmm6_4
  float v43; // xmm3_4
  int v44; // eax
  float v45; // xmm4_4
  Scaleform::Render::VertexBasic **v46; // rbx
  unsigned int v47; // er9
  __int64 v48; // r11
  __int64 v49; // r8
  Scaleform::Render::VertexBasic *v50; // r10
  float v51; // xmm5_4
  float v52; // xmm6_4
  float v53; // xmm3_4
  int v54; // eax
  float v55; // xmm4_4
  unsigned __int64 v57; // [rsp+8h] [rbp-58h]
  const Scaleform::Render::VertexPath *v58; // [rsp+80h] [rbp+20h]
  Scaleform::Render::VertexBasic v59; // [rsp+98h] [rbp+38h]
  Scaleform::Render::VertexBasic v60; // [rsp+98h] [rbp+38h]
  Scaleform::Render::VertexBasic v61; // [rsp+98h] [rbp+38h]
  Scaleform::Render::VertexBasic v62; // [rsp+98h] [rbp+38h]
  Scaleform::Render::VertexBasic v63; // [rsp+98h] [rbp+38h]

  v58 = path;
  Size = path->Paths.Size;
  v4 = 0;
  v57 = Size;
  v5 = 0;
  if ( Size )
  {
    Pages = path->Paths.Pages;
    v7 = 0i64;
    do
    {
      v8 = 1;
      v9 = v7 >> 2;
      v10 = v7 & 3;
      v11 = Pages[v9];
      Count = v11[v10].Count;
      if ( Count > 1 )
      {
        if ( Count - 1 >= 4 )
        {
          v13 = path->Vertices.Pages;
          v14 = v11[v10].Start + 1;
          v15 = ((Count - 5) >> 2) + 1;
          v16 = v15;
          v8 = 4 * v15 + 1;
          do
          {
            v17 = v14 & 0xF;
            v18 = ((_BYTE)v14 - 1) & 0xF;
            v19 = v13[(unsigned __int64)(v14 - 1) >> 4];
            v20 = v19[v18].y;
            v21 = v19[v18].x;
            v22 = v13[(unsigned __int64)v14 >> 4];
            v59 = v22[v17];
            v23 = v59.y;
            if ( v20 != v59.y )
            {
              v24 = 1;
              if ( v20 <= v59.y )
              {
                LODWORD(v25) = v22[v17];
              }
              else
              {
                LODWORD(v20) = HIDWORD(*(_QWORD *)&v22[v17]);
                LODWORD(v21) = v22[v17];
                v24 = -1;
                LODWORD(v25) = v19[v18];
                LODWORD(v23) = HIDWORD(*(_QWORD *)&v19[v18]);
              }
              if ( y >= v20
                && v23 > y
                && (float)((float)((float)(v23 - v20) * (float)(x - v25))
                         - (float)((float)(v25 - v21) * (float)(y - v23))) > 0.0 )
              {
                v4 += v24;
              }
            }
            v26 = v22[v17].y;
            v27 = v22[v17].x;
            v28 = ((_BYTE)v14 + 1) & 0xF;
            v29 = v13[(unsigned __int64)(v14 + 1) >> 4];
            v60 = v29[v28];
            v30 = v60.y;
            if ( v26 != v60.y )
            {
              v31 = 1;
              if ( v26 <= v60.y )
              {
                LODWORD(v32) = v29[v28];
              }
              else
              {
                v32 = v22[v17].x;
                LODWORD(v27) = v29[v28];
                LODWORD(v26) = HIDWORD(*(_QWORD *)&v29[v28]);
                v30 = v22[v17].y;
                v31 = -1;
              }
              if ( y >= v26
                && v30 > y
                && (float)((float)((float)(v30 - v26) * (float)(x - v32))
                         - (float)((float)(v32 - v27) * (float)(y - v30))) > 0.0 )
              {
                v4 += v31;
              }
            }
            v33 = v29[v28].y;
            v34 = v29[v28].x;
            v35 = ((_BYTE)v14 + 2) & 0xF;
            v36 = v13[(unsigned __int64)(v14 + 2) >> 4];
            v61 = v36[v35];
            v37 = v61.y;
            if ( v33 != v61.y )
            {
              v38 = 1;
              if ( v33 <= v61.y )
              {
                LODWORD(v40) = v36[v35];
              }
              else
              {
                v39 = v33;
                v40 = v34;
                LODWORD(v34) = v36[v35];
                LODWORD(v33) = HIDWORD(*(_QWORD *)&v36[v35]);
                v37 = v39;
                v38 = -1;
              }
              if ( y >= v33
                && v37 > y
                && (float)((float)((float)(v37 - v33) * (float)(x - v40))
                         - (float)((float)(v40 - v34) * (float)(y - v37))) > 0.0 )
              {
                v4 += v38;
              }
            }
            v41 = v36[v35].y;
            v42 = v36[v35].x;
            v62 = v13[(unsigned __int64)(v14 + 3) >> 4][((_BYTE)v14 + 3) & 0xF];
            v43 = v62.y;
            if ( v41 != v62.y )
            {
              v44 = 1;
              if ( v41 <= v62.y )
              {
                LODWORD(v45) = v13[(unsigned __int64)(v14 + 3) >> 4][((_BYTE)v14 + 3) & 0xF];
              }
              else
              {
                v45 = v36[v35].x;
                LODWORD(v42) = v13[(unsigned __int64)(v14 + 3) >> 4][((_BYTE)v14 + 3) & 0xF];
                LODWORD(v41) = HIDWORD(*(_QWORD *)&v13[(unsigned __int64)(v14 + 3) >> 4][((_BYTE)v14 + 3) & 0xF]);
                v43 = v36[v35].y;
                v44 = -1;
              }
              if ( y >= v41
                && v43 > y
                && (float)((float)((float)(v43 - v41) * (float)(x - v45))
                         - (float)((float)(v45 - v42) * (float)(y - v43))) > 0.0 )
              {
                v4 += v44;
              }
            }
            v14 += 4;
            --v16;
          }
          while ( v16 );
          path = v58;
          Size = v57;
        }
        if ( v8 < Count )
        {
          v46 = path->Vertices.Pages;
          v47 = v8 + v11[v10].Start;
          v48 = Count - v8;
          do
          {
            v49 = ((_BYTE)v47 - 1) & 0xF;
            v50 = v46[(unsigned __int64)(v47 - 1) >> 4];
            v51 = v50[v49].y;
            v52 = v50[v49].x;
            v63 = v46[(unsigned __int64)v47 >> 4][v47 & 0xF];
            v53 = v63.y;
            if ( v51 != v63.y )
            {
              v54 = 1;
              if ( v51 <= v63.y )
              {
                LODWORD(v55) = v46[(unsigned __int64)v47 >> 4][v47 & 0xF];
              }
              else
              {
                LODWORD(v51) = HIDWORD(*(_QWORD *)&v46[(unsigned __int64)v47 >> 4][v47 & 0xF]);
                LODWORD(v52) = v46[(unsigned __int64)v47 >> 4][v47 & 0xF];
                v54 = -1;
                LODWORD(v55) = v50[v49];
                LODWORD(v53) = HIDWORD(*(_QWORD *)&v50[v49]);
              }
              if ( y >= v51
                && v53 > y
                && (float)((float)((float)(v53 - v51) * (float)(x - v55))
                         - (float)((float)(v55 - v52) * (float)(y - v53))) > 0.0 )
              {
                v4 += v54;
              }
            }
            ++v47;
            --v48;
          }
          while ( v48 );
        }
      }
      path = v58;
      v7 = ++v5;
      Pages = v58->Paths.Pages;
    }
    while ( v5 < Size );
  }
  return v4 != 0;
}

char __fastcall Scaleform::Render::HitTestRoundStroke(
        const Scaleform::Render::VertexPath *path,
        float w,
        float x,
        float y)
{
  unsigned __int64 Size; // r12
  unsigned int v5; // ebp
  unsigned int v7; // er14
  float v8; // xmm14_4
  Scaleform::Render::PathBasic **Pages; // rcx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rax
  __int64 v12; // rdx
  Scaleform::Render::PathBasic *v13; // rcx
  unsigned int Count; // esi
  unsigned int Start; // edi
  Scaleform::Render::VertexBasic **v16; // r15
  unsigned int v17; // ebx
  int v18; // edi
  __int64 v19; // rdx
  __int64 v20; // r9
  Scaleform::Render::VertexBasic *v21; // r8
  float v22; // xmm12_4
  float v23; // xmm13_4
  Scaleform::Render::VertexBasic *v24; // rcx
  float v25; // xmm7_4
  float v26; // xmm8_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm11_4
  unsigned __int64 v31; // r8
  float v32; // xmm14_4
  unsigned __int64 v33; // rdx
  unsigned __int64 v34; // rax
  __int64 v35; // rdx
  Scaleform::Render::VertexBasic *v36; // rcx
  float v37; // xmm0_4

  Size = path->Paths.Size;
  v5 = 0;
  v7 = 0;
  v8 = w * 0.5;
  if ( Size )
  {
    Pages = path->Paths.Pages;
    v10 = 0i64;
    while ( 1 )
    {
      v11 = v10;
      v12 = v10 & 3;
      v13 = Pages[v11 >> 2];
      Count = v13[v12].Count;
      if ( Count > 1 )
        break;
LABEL_9:
      v10 = ++v7;
      if ( v7 >= Size )
        goto LABEL_12;
      Pages = path->Paths.Pages;
    }
    Start = v13[v12].Start;
    v16 = path->Vertices.Pages;
    v17 = Start + 1;
    v18 = -Start;
    while ( 1 )
    {
      v19 = v17 & 0xF;
      v20 = ((_BYTE)v17 - 1) & 0xF;
      v21 = v16[(unsigned __int64)(v17 - 1) >> 4];
      v22 = v21[v20].x;
      v23 = v21[v20].y;
      v24 = v16[(unsigned __int64)v17 >> 4];
      v25 = v24[v19].x;
      v26 = v24[v19].y;
      v27 = v25 - v22;
      v28 = v26 - v23;
      if ( (float)((float)((float)((float)(v23 + v27) - v23) * (float)(x - (float)(v22 - v28)))
                 - (float)((float)((float)(v22 - v28) - v22) * (float)(y - (float)(v23 + v27)))) >= 0.0 )
      {
        v29 = v24[v19].y + v27;
        if ( (float)((float)((float)(v29 - v26) * (float)(x - (float)(v24[v19].x - v28)))
                   - (float)((float)((float)(v24[v19].x - v28) - v25) * (float)(y - v29))) <= 0.0
          && v8 >= COERCE_FLOAT(COERCE_UNSIGNED_INT(Scaleform::Render::Math2D::LinePointDistance(v22, v23, v25, v26, x, y)) & _xmm) )
        {
          return 1;
        }
      }
      ++v17;
      if ( v18 + v17 >= Count )
        goto LABEL_9;
    }
  }
LABEL_12:
  v31 = path->Vertices.Size;
  v32 = v8 * v8;
  if ( v31 )
  {
    v33 = 0i64;
    while ( 1 )
    {
      v34 = v33;
      v35 = v33 & 0xF;
      v36 = path->Vertices.Pages[v34 >> 4];
      v37 = y - v36[v35].y;
      if ( v32 >= (float)((float)(v37 * v37) + (float)((float)(x - v36[v35].x) * (float)(x - v36[v35].x))) )
        break;
      v33 = ++v5;
      if ( v5 >= v31 )
        return 0;
    }
    return 1;
  }
  return 0;
}

void __fastcall Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2>::PushBack(
        Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Math2D::QuadCoord,32,2> *this,
        const Scaleform::Render::Math2D::QuadCoord *val)
{
  unsigned __int64 Size; // rax
  unsigned __int64 v5; // rdx
  Scaleform::MemoryHeap *pHeap; // rcx
  unsigned __int64 v7; // rdx
  Scaleform::Render::Math2D::QuadCoord *v8; // rax
  Scaleform::Render::Math2D::QuadCoord *Static; // rcx
  __int64 v10; // rdx
  Scaleform::Render::Math2D::QuadCoord v11; // xmm0
  unsigned __int64 Reserved; // r8
  Scaleform::Render::Math2D::QuadCoord *Data; // rdx
  unsigned __int64 v14; // r8

  Size = this->Size;
  if ( Size >= 0x20 )
  {
    if ( Size == 32 )
    {
      v5 = 2 * this->Reserved;
      this->Reserved = v5;
      pHeap = this->pHeap;
      v7 = 16 * v5;
      if ( pHeap )
        v8 = (Scaleform::Render::Math2D::QuadCoord *)pHeap->Alloc(pHeap, v7, 0i64);
      else
        v8 = (Scaleform::Render::Math2D::QuadCoord *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       this,
                                                       v7,
                                                       0i64);
      this->Data = v8;
      Static = this->Static;
      v10 = 4i64;
      do
      {
        v8 += 8;
        v11 = *Static;
        Static += 8;
        v8[-8] = v11;
        v8[-7] = Static[-7];
        v8[-6] = Static[-6];
        v8[-5] = Static[-5];
        v8[-4] = Static[-4];
        v8[-3] = Static[-3];
        v8[-2] = Static[-2];
        v8[-1] = Static[-1];
        --v10;
      }
      while ( v10 );
    }
    else
    {
      Reserved = this->Reserved;
      if ( Size >= Reserved )
      {
        Data = this->Data;
        v14 = 2 * Reserved;
        this->Reserved = v14;
        this->Data = (Scaleform::Render::Math2D::QuadCoord *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                               Scaleform::Memory::pGlobalHeap,
                                                               Data,
                                                               16 * v14);
      }
    }
    this->Data[this->Size++] = *val;
  }
  else
  {
    this->Static[Size] = *val;
    ++this->Size;
  }
}

