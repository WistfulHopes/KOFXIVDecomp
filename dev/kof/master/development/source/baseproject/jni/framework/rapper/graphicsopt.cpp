#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/rapper/graphicsopt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/image/graphics.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/core/glstate.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088982D
void GraphicsOpt::lock(); // 0x140093980
void GraphicsOpt::lock(long w, long h); // 0x140093A10
void GraphicsOpt::clearDepth(); // 0x140093A80
void GraphicsOpt::clearClip(); // 0x140093AB0
void GraphicsOpt::fillRect(long x, long y, long width, long height, unsigned long color, unsigned char bDraw); // 0x140093B00
void GraphicsOpt::drawImage(Image * image, float x, float y); // 0x140093B60
void GraphicsOpt::drawImage(Image * image, float x, float y, float sx, float sy, float sw, float sh, float scaleX, float scaleY, float angle, long flipmode); // 0x140093C00
void GraphicsOpt::drawImage(Image * image, float x, float y, const _C_CONV * pConv, float scalX, float scalY, float angle, long flipmode); // 0x140094010
void GraphicsOpt::drawConv(Image * image, float x, float y, const _C_CONV * pConv, long flipmode); // 0x140094540
void GraphicsOpt::drawConv(Image * image, float x, float y, const _C_CONV * pConv, float scalX, float scalY, float angle, long flipmode); // 0x1400946C0
void GraphicsOpt::setSpriteFog(float r, float g, float b, float a); // 0x140094A10
void GraphicsOpt::resetFog(); // 0x140094AA0
void GraphicsOpt::drawTexture(unsigned long textureId, float x, float y, float w, float h); // 0x140094AF0//decompilation failure at 14088982D!
void __fastcall GraphicsOpt::clearClip(GraphicsOpt *this)
{
  Graphics *g; // rcx

  Graphics::drawStack(this->g);
  g = this->g;
  g->m_ClipW = g->m_OriginW;
  g->m_ClipH = g->m_OriginH;
  *(_QWORD *)&g->m_ClipX = 0i64;
  if ( dword_140A96098 )
  {
    dword_140A96098 = 0;
    glDisable(0xC11u);
  }
}

void __fastcall GraphicsOpt::clearDepth(GraphicsOpt *this)
{
  if ( m_DepthMask != 1 )
  {
    m_DepthMask = 1;
    glDepthMask(1u);
  }
  glClearAG(0x100u);
}

void __fastcall GraphicsOpt::drawConv(
        GraphicsOpt *this,
        Image *image,
        float x,
        float y,
        const _C_CONV *pConv,
        int flipmode)
{
  float v6; // xmm4_4
  float v7; // xmm5_4
  int v9; // er9
  int cy; // ecx
  __m128i v11; // xmm0
  int h; // eax
  Graphics *g; // rcx
  float sx; // [rsp+20h] [rbp-28h]
  float sy; // [rsp+28h] [rbp-20h]
  float width; // [rsp+30h] [rbp-18h]
  float height; // [rsp+38h] [rbp-10h]

  v6 = y;
  v7 = x;
  v9 = pConv->Flip ^ flipmode;
  switch ( v9 )
  {
    case 0:
      v7 = x - (float)pConv->cx;
LABEL_5:
      v6 = y - (float)pConv->cy;
      break;
    case 1:
      v7 = x + (float)(pConv->cx - pConv->w);
      goto LABEL_5;
    case 2:
      cy = pConv->cy;
      v11 = _mm_cvtsi32_si128(pConv->cx);
      h = pConv->h;
LABEL_14:
      v7 = x - _mm_cvtepi32_ps(v11).m128_f32[0];
      goto LABEL_15;
    case 3:
      h = pConv->h;
      cy = pConv->cy;
      v7 = x + (float)(pConv->cx - pConv->w);
LABEL_15:
      v6 = y + (float)(cy - h);
      break;
    case 5:
      v6 = y - (float)pConv->cx;
      v7 = x + (float)(pConv->cy - pConv->h);
      break;
    case 4:
      cy = pConv->cx;
      v11 = _mm_cvtsi32_si128(pConv->cy);
      h = pConv->w;
      goto LABEL_14;
  }
  this->g->m_FlipMode = v9;
  g = this->g;
  height = (float)pConv->h;
  width = (float)pConv->w;
  sy = (float)pConv->sy;
  sx = (float)pConv->sx;
  if ( this->m_FogFlg )
    Graphics::drawImage(g, image, v7, v6, sx, sy, width, height);
  else
    Graphics::drawImageS(g, image, v7, v6, sx, sy, width, height);
}

void __fastcall GraphicsOpt::drawConv(
        GraphicsOpt *this,
        Image *image,
        float x,
        float y,
        const _C_CONV *pConv,
        float scalX,
        float scalY,
        float angle,
        int flipmode)
{
  float v11; // xmm7_4
  float v13; // xmm14_4
  float v14; // xmm6_4
  float v15; // xmm10_4
  float v16; // xmm0_4
  float v17; // xmm5_4
  float v18; // xmm1_4
  float v19; // xmm9_4
  float v20; // xmm12_4
  float v21; // xmm3_4
  float v22; // xmm6_4
  float v23; // xmm12_4
  float v24; // xmm9_4
  float v25; // xmm3_4
  float v26; // xmm2_4
  float v27; // xmm7_4
  float v28; // xmm13_4
  float v29; // xmm12_4
  float v30; // xmm13_4
  bool v31; // zf
  float matrix[6]; // [rsp+48h] [rbp-C0h] BYREF

  v11 = scalX;
  if ( (((unsigned __int8)pConv->Flip ^ (unsigned __int8)flipmode) & 1) != 0 )
    LODWORD(v11) = LODWORD(scalX) ^ _xmm;
  v13 = scalY;
  if ( ((LOBYTE(pConv->Flip) ^ (unsigned __int8)flipmode) & 2) != 0 )
    LODWORD(v13) = LODWORD(scalY) ^ _xmm;
  v14 = (float)((float)((float)(angle * 360.0) * 0.00024414062) * 3.1415927) / 180.0;
  v15 = sinf(v14);
  v16 = cosf(v14);
  v17 = (float)(v11 * 0.0) + 0.0;
  v18 = (float)-pConv->cx;
  v19 = (float)(v13 * 0.0) + 0.0;
  v20 = (float)-pConv->cy;
  v21 = COERCE_FLOAT(LODWORD(v15) ^ _xmm) * v19;
  v22 = (float)((float)(v18 * v11) + (float)(v20 * 0.0)) + 0.0;
  v23 = (float)((float)(v20 * v13) + (float)(v18 * 0.0)) + 0.0;
  v24 = (float)(v19 * v16) + (float)((float)(v11 + 0.0) * v15);
  v25 = v21 + (float)((float)(v11 + 0.0) * v16);
  v26 = (float)(COERCE_FLOAT(LODWORD(v15) ^ _xmm) * (float)(v13 + 0.0)) + (float)(v17 * v16);
  v27 = (float)((float)(v13 + 0.0) * v16) + (float)(v17 * v15);
  v28 = (float)(COERCE_FLOAT(LODWORD(v15) ^ _xmm) * v23) + (float)(v22 * v16);
  v29 = (float)((float)(v23 * v16) + (float)(v22 * v15)) + 0.0;
  v30 = v28 + 0.0;
  matrix[0] = (float)(v24 * 0.0) + v25;
  matrix[1] = (float)(v27 * 0.0) + v26;
  matrix[2] = (float)((float)(v29 * 0.0) + v30) + x;
  this->g->m_FlipMode = 0;
  v31 = this->m_FogFlg == 0;
  matrix[3] = (float)(v25 * 0.0) + v24;
  matrix[4] = (float)(v26 * 0.0) + v27;
  matrix[5] = (float)((float)(v30 * 0.0) + v29) + y;
  if ( v31 )
  {
    Graphics::drawImageS(this->g, image, matrix, (float)pConv->sx, (float)pConv->sy, (float)pConv->w, (float)pConv->h);
  }
  else if ( image )
  {
    Graphics::drawImage(this->g, image, matrix, (float)pConv->sx, (float)pConv->sy, (float)pConv->w, (float)pConv->h);
  }
}

void __fastcall GraphicsOpt::drawImage(GraphicsOpt *this, Image *image, float x, float y)
{
  this->g->m_FlipMode = 0;
  if ( this->m_FogFlg )
  {
    if ( image )
      Graphics::drawImage(this->g, image, x, y, 0.0, 0.0, (float)image->m_Width, (float)image->m_Height);
  }
  else if ( image )
  {
    Graphics::drawImageS(this->g, image, x, y, 0.0, 0.0, (float)image->m_Width, (float)image->m_Height);
  }
}

void __fastcall GraphicsOpt::drawImage(
        GraphicsOpt *this,
        Image *image,
        float x,
        float y,
        float sx,
        float sy,
        float sw,
        float sh,
        float scaleX,
        float scaleY,
        float angle)
{
  float v13; // xmm6_4
  float v14; // xmm0_4
  float v15; // xmm13_4
  float v16; // xmm11_4
  float v17; // xmm10_4
  float v18; // xmm14_4
  float v19; // xmm6_4
  float v20; // xmm3_4
  float v21; // xmm13_4
  float v22; // xmm7_4
  float v23; // xmm6_4
  float v24; // xmm2_4
  float v25; // xmm7_4
  float v26; // xmm12_4
  bool v27; // zf
  float v28; // xmm1_4
  float v29; // xmm7_4
  float v30; // xmm3_4
  float v31; // xmm2_4
  float v32; // xmm13_4
  float v33; // xmm8_4
  float v34; // xmm4_4
  float v35; // xmm12_4
  float v36; // xmm6_4
  float v37; // xmm5_4
  float v38; // xmm7_4
  float v39; // xmm8_4
  float v40; // xmm13_4
  float v41; // xmm12_4
  float v42; // [rsp+44h] [rbp-D4h]
  float v43; // [rsp+48h] [rbp-D0h]
  float matrix[8]; // [rsp+50h] [rbp-C8h] BYREF

  v13 = (float)((float)((float)(angle * 360.0) * 0.00024414062) * 3.1415927) / 180.0;
  v42 = sinf(v13);
  v14 = cosf(v13);
  v15 = (float)(sw * scaleX) * 0.5;
  v16 = (float)(sh * scaleY) * 0.5;
  LODWORD(v17) = LODWORD(v15) ^ _xmm;
  v18 = v16 + y;
  LODWORD(v19) = COERCE_UNSIGNED_INT(sw * 0.5) ^ _xmm;
  v43 = v15 + x;
  LODWORD(v20) = COERCE_UNSIGNED_INT(sh * 0.5) ^ _xmm;
  v21 = (float)(scaleX * 0.0) + 0.0;
  v22 = (float)((float)(v20 * 0.0) + v19) + 0.0;
  v23 = (float)((float)(v19 * 0.0) + v20) + 0.0;
  v24 = (float)((float)(v23 * 0.0) + v22) + (float)(sw * 0.5);
  v25 = (float)((float)(v22 * 0.0) + v23) + (float)(sh * 0.5);
  v26 = (float)((float)(v24 * scaleX) + (float)(v25 * 0.0)) + 0.0;
  this->g->m_FlipMode = 0;
  v27 = this->m_FogFlg == 0;
  v28 = (float)(scaleY * 0.0) + 0.0;
  v29 = (float)((float)(v25 * scaleY) + (float)(v24 * 0.0)) + 0.0;
  v30 = (float)((float)(scaleY + 0.0) * 0.0) + v21;
  v31 = (float)(v28 * 0.0) + (float)(scaleX + 0.0);
  v32 = (float)(v21 * 0.0) + (float)(scaleY + 0.0);
  v33 = (float)((float)(scaleX + 0.0) * 0.0) + v28;
  v34 = (float)((float)(v29 * 0.0) + v26) + v17;
  v35 = (float)((float)(v26 * 0.0) + v29) + COERCE_FLOAT(LODWORD(v16) ^ _xmm);
  v36 = (float)(COERCE_FLOAT(LODWORD(v42) ^ _xmm) * v33) + (float)(v31 * v14);
  v37 = (float)(COERCE_FLOAT(LODWORD(v42) ^ _xmm) * v32) + (float)(v30 * v14);
  v38 = (float)((float)(COERCE_FLOAT(LODWORD(v42) ^ _xmm) * v35) + (float)(v34 * v14)) + 0.0;
  v39 = (float)(v33 * v14) + (float)(v31 * v42);
  v40 = (float)(v32 * v14) + (float)(v30 * v42);
  v41 = (float)((float)(v35 * v14) + (float)(v34 * v42)) + 0.0;
  matrix[0] = (float)(v39 * 0.0) + v36;
  matrix[1] = (float)(v40 * 0.0) + v37;
  matrix[3] = (float)(v36 * 0.0) + v39;
  matrix[4] = (float)(v37 * 0.0) + v40;
  matrix[2] = (float)((float)(v41 * 0.0) + v38) + v43;
  matrix[5] = (float)((float)(v38 * 0.0) + v41) + v18;
  if ( v27 )
  {
    Graphics::drawImageS(this->g, image, matrix, sx, sy, sw, sh);
  }
  else if ( image )
  {
    Graphics::drawImage(this->g, image, matrix, sx, sy, sw, sh);
  }
}

void __fastcall GraphicsOpt::drawImage(
        GraphicsOpt *this,
        Image *image,
        float x,
        float y,
        const _C_CONV *pConv,
        float scalX,
        float scalY,
        float angle)
{
  __int16 Flip; // dx
  float v11; // xmm11_4
  float v14; // xmm6_4
  float v15; // xmm0_4
  int h; // ecx
  float v17; // xmm2_4
  float v18; // xmm3_4
  float v19; // xmm7_4
  float v20; // xmm14_4
  float v21; // xmm10_4
  float v22; // xmm15_4
  float v23; // xmm4_4
  float v24; // xmm12_4
  float v25; // xmm1_4
  float v26; // xmm11_4
  float v27; // xmm7_4
  float v28; // xmm12_4
  float v29; // xmm2_4
  float v30; // xmm11_4
  float v31; // xmm7_4
  float v32; // xmm10_4
  float v33; // xmm3_4
  float v34; // xmm4_4
  float v35; // xmm13_4
  float v36; // xmm11_4
  float v37; // xmm0_4
  float v38; // xmm7_4
  float v39; // xmm12_4
  float v40; // xmm10_4
  float v41; // xmm6_4
  float v42; // xmm2_4
  float v43; // xmm1_4
  float v44; // xmm11_4
  float v45; // xmm7_4
  float v46; // xmm13_4
  float v47; // xmm5_4
  float v48; // xmm3_4
  float v49; // xmm4_4
  float v50; // xmm6_4
  float v51; // xmm13_4
  float v52; // xmm10_4
  bool v53; // zf
  float v54; // xmm7_4
  float v55; // xmm6_4
  float v56; // [rsp+40h] [rbp-E8h]
  float v57; // [rsp+44h] [rbp-E4h]
  float v58; // [rsp+4Ch] [rbp-DCh]
  float v59; // [rsp+50h] [rbp-D8h]
  float v60; // [rsp+54h] [rbp-D4h]
  float v61; // [rsp+58h] [rbp-D0h]
  float matrix[48]; // [rsp+60h] [rbp-C8h] BYREF

  Flip = pConv->Flip;
  v11 = *(float *)&FLOAT_1_0;
  v56 = *(float *)&FLOAT_1_0;
  v57 = *(float *)&FLOAT_1_0;
  if ( (Flip & 1) != 0 )
  {
    v11 = FLOAT_N1_0;
    v56 = FLOAT_N1_0;
  }
  if ( (Flip & 2) != 0 )
    v57 = FLOAT_N1_0;
  v14 = (float)((float)((float)(angle * 360.0) * 0.00024414062) * 3.1415927) / 180.0;
  v59 = sinf(v14);
  v15 = cosf(v14);
  h = pConv->h;
  v58 = v15;
  v17 = (float)-(pConv->w >> 1);
  v18 = (float)((float)pConv->w * scalX) * 0.5;
  v19 = (float)-(h >> 1);
  LODWORD(v20) = LODWORD(v18) ^ _xmm;
  v21 = v11 + 0.0;
  v60 = v18 + x;
  v22 = (float)((float)h * scalY) * 0.5;
  v23 = v22 + y;
  v24 = v11;
  v25 = (float)(v57 * 0.0) + 0.0;
  v26 = (float)(v17 * v56) + (float)(v19 * 0.0);
  v61 = v23;
  v27 = (float)(v19 * v57) + (float)(v17 * 0.0);
  v28 = (float)(v24 * 0.0) + 0.0;
  v29 = (float)(v25 * 0.0) + v21;
  v30 = v26 + 0.0;
  v31 = v27 + 0.0;
  v32 = (float)(v21 * 0.0) + v25;
  v33 = (float)((float)(v57 + 0.0) * 0.0) + v28;
  v34 = (float)((float)(v31 * 0.0) + v30) + (float)(pConv->w >> 1);
  v35 = (float)(v29 * scalX) + (float)(v32 * 0.0);
  v36 = (float)((float)(v30 * 0.0) + v31) + (float)(pConv->h >> 1);
  v37 = (float)(v28 * 0.0) + (float)(v57 + 0.0);
  v38 = (float)(v33 * scalX) + (float)(v37 * 0.0);
  v39 = (float)(v37 * scalY) + (float)(v33 * 0.0);
  v40 = (float)(v32 * scalY) + (float)(v29 * 0.0);
  v41 = (float)((float)(v34 * scalX) + (float)(v36 * 0.0)) + 0.0;
  v42 = (float)(v39 * 0.0) + v38;
  v43 = (float)(v40 * 0.0) + v35;
  v44 = (float)((float)(v36 * scalY) + (float)(v34 * 0.0)) + 0.0;
  v45 = (float)(v38 * 0.0) + v39;
  v46 = (float)(v35 * 0.0) + v40;
  v47 = (float)(COERCE_FLOAT(LODWORD(v59) ^ _xmm) * v46) + (float)(v43 * v58);
  v48 = (float)((float)(v44 * 0.0) + v41) + v20;
  v49 = (float)(COERCE_FLOAT(LODWORD(v59) ^ _xmm) * v45) + (float)(v42 * v58);
  v50 = (float)((float)(v41 * 0.0) + v44) + COERCE_FLOAT(LODWORD(v22) ^ _xmm);
  v51 = (float)(v46 * v58) + (float)(v43 * v59);
  v52 = (float)((float)(COERCE_FLOAT(LODWORD(v59) ^ _xmm) * v50) + (float)(v48 * v58)) + 0.0;
  this->g->m_FlipMode = 0;
  v53 = this->m_FogFlg == 0;
  v54 = (float)(v45 * v58) + (float)(v42 * v59);
  matrix[0] = (float)(v51 * 0.0) + v47;
  v55 = (float)((float)(v50 * v58) + (float)(v48 * v59)) + 0.0;
  matrix[3] = (float)(v47 * 0.0) + v51;
  matrix[1] = (float)(v54 * 0.0) + v49;
  matrix[4] = (float)(v49 * 0.0) + v54;
  matrix[2] = (float)((float)(v55 * 0.0) + v52) + v60;
  matrix[5] = (float)((float)(v52 * 0.0) + v55) + v61;
  if ( v53 )
  {
    Graphics::drawImageS(this->g, image, matrix, (float)pConv->sx, (float)pConv->sy, (float)pConv->w, (float)pConv->h);
  }
  else if ( image )
  {
    Graphics::drawImage(this->g, image, matrix, (float)pConv->sx, (float)pConv->sy, (float)pConv->w, (float)pConv->h);
  }
}

void __fastcall GraphicsOpt::drawTexture(GraphicsOpt *this, unsigned int textureId, float x, float y, float w, float h)
{
  unsigned int v6; // ebx

  v6 = *(_DWORD *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][128];
  glDisable(0x8DB9u);
  Graphics::drawTexture(this->g, v6, x, y, w, h);
  glEnable(0x8DB9u);
}

void __fastcall GraphicsOpt::fillRect(GraphicsOpt *this, int x, int y, int width, int height, unsigned int color)
{
  Graphics::drawStack(this->g);
  this->g->m_Color = color;
  Graphics::fillRect(this->g, x, y, width, height);
}

void __fastcall GraphicsOpt::lock(GraphicsOpt *this, int w, int h)
{
  Graphics *g; // rdx
  int v5; // er9
  __int64 v6; // r8
  GraphicsStack *v7; // rcx

  Graphics::lock(this->g, w, h);
  g = this->g;
  v5 = 0;
  if ( g->m_StackMax > 0 )
  {
    v6 = 0i64;
    do
    {
      ++v6;
      ++v5;
      v7 = g->m_pStack[v6 - 1];
      v7->thisID = 0;
      v7->image = 0i64;
      v7->blend = 0;
      v7->alpha = 0;
      v7->count = 0;
      v7->enable = 1;
      v7->color = -1;
    }
    while ( v5 < g->m_StackMax );
  }
  *(_QWORD *)&g->m_StackCount = 0i64;
}

void __fastcall GraphicsOpt::lock(GraphicsOpt *this)
{
  Graphics *g; // rdx
  int v3; // er9
  __int64 v4; // r8
  GraphicsStack *v5; // rcx

  Graphics::lock(this->g, this->m_iDisplayX, this->m_iDisplayY, this->m_iDisplayW, this->m_iDisplayH, this->m_DrawScale);
  g = this->g;
  v3 = 0;
  if ( g->m_StackMax > 0 )
  {
    v4 = 0i64;
    do
    {
      ++v4;
      ++v3;
      v5 = g->m_pStack[v4 - 1];
      v5->thisID = 0;
      v5->image = 0i64;
      v5->blend = 0;
      v5->alpha = 0;
      v5->count = 0;
      v5->enable = 1;
      v5->color = -1;
    }
    while ( v3 < g->m_StackMax );
  }
  *(_QWORD *)&g->m_StackCount = 0i64;
}

void __fastcall GraphicsOpt::resetFog(GraphicsOpt *this)
{
  Graphics *g; // rax
  OGLRender *m_pRender; // rax

  Graphics::drawStack(this->g);
  g = this->g;
  if ( g->m_bPreDrawMode )
  {
    m_pRender = g->m_pRender;
    *(_QWORD *)m_pRender->m_dummyFog = 0i64;
    *(_QWORD *)&m_pRender->m_dummyFog[2] = 0i64;
  }
  else
  {
    dword_140A96048 = 0;
    this->m_FogFlg = 0;
  }
}

void __fastcall GraphicsOpt::setSpriteFog(GraphicsOpt *this, float r, float g, float b, float a)
{
  Graphics *v5; // rax
  bool v6; // zf
  OGLRender *m_pRender; // rax
  __int128 v8; // [rsp+0h] [rbp-18h]

  v5 = this->g;
  *(_QWORD *)&v8 = __PAIR64__(LODWORD(g), LODWORD(r));
  v6 = v5->m_bPreDrawMode == 0;
  m_pRender = v5->m_pRender;
  *((_QWORD *)&v8 + 1) = __PAIR64__(LODWORD(a), LODWORD(b));
  if ( v6 )
  {
    dword_140A96048 = 1;
    m_pRender->m_GroundFog.m_Mode = 0;
    m_pRender->m_GroundFog.m_Color[0] = r;
    m_pRender->m_GroundFog.m_Color[1] = g;
    m_pRender->m_GroundFog.m_Color[2] = b;
    m_pRender->m_GroundFog.m_Color[3] = a;
    m_pRender->m_GroundFog.m_fStart = 0.0;
    m_pRender->m_GroundFog.m_fEnd = 1.0;
    this->m_FogFlg = 1;
  }
  else
  {
    *(_OWORD *)m_pRender->m_dummyFog = v8;
  }
}

