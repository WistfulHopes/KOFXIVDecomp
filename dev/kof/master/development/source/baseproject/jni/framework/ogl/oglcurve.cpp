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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088952C
bool OGLCurve::loadOncData(unsigned char * pBuffer, long iSize); // 0x140055C70//decompilation failure at 14088952C!
void __fastcall OGLCurveData::OGLCurveData(OGLCurveData *this)
{
  this->curveType = 0;
}

void __fastcall OGLCurveData::~OGLCurveData(OGLCurveData *this, unsigned __int64 a2)
{
  int *KnotPoints; // rcx
  float *CtrlPoints; // rcx

  this->curveType = 0;
  KnotPoints = this->KnotPoints;
  if ( KnotPoints )
  {
    operator delete(KnotPoints, a2);
    this->KnotPoints = 0i64;
  }
  CtrlPoints = this->CtrlPoints;
  if ( CtrlPoints )
  {
    operator delete(CtrlPoints, a2);
    this->CtrlPoints = 0i64;
  }
}

char __fastcall OGLCurve::loadOncData(OGLCurve *this, unsigned __int8 *pBuffer, int iSize)
{
  unsigned int v7; // ebx
  int v8; // ecx
  int v9; // edx
  unsigned __int64 v10; // r15
  __int64 v11; // rax
  bool v12; // cf
  unsigned __int64 v13; // rax
  unsigned __int64 *v14; // rax
  OGLCurveData *v15; // rdi
  int v16; // er15
  __int64 v17; // rdi
  int v18; // edx
  int v19; // edx
  int v20; // edx
  int v21; // edx
  int v22; // edx
  unsigned __int64 KnotCount; // rcx
  unsigned __int64 v24; // rax
  int v25; // er9
  __int64 v26; // r8
  __int64 v27; // r10
  int v28; // edx
  int v29; // edx
  int v30; // ecx
  unsigned __int64 v31; // rax
  int v32; // er8
  __int64 v33; // rdx
  float v34; // xmm0_4
  float v35; // xmm0_4
  float v36; // xmm0_4
  float v37; // xmm0_4
  float v38; // [rsp+78h] [rbp+10h]
  float v39; // [rsp+78h] [rbp+10h]
  float v40; // [rsp+78h] [rbp+10h]
  float v41; // [rsp+78h] [rbp+10h]

  if ( !pBuffer )
    return 0;
  if ( *pBuffer == 78 && pBuffer[1] == 67 )
  {
    v7 = 0;
    if ( iSize && (v7 = 2, (unsigned int)iSize > 2) )
    {
      v8 = pBuffer[2] | ((pBuffer[3] | (*((unsigned __int16 *)pBuffer + 2) << 8)) << 8);
      v7 = 6;
    }
    else
    {
      v8 = 0;
    }
    this->cFormatType = v8;
    if ( iSize > v7 )
    {
      v9 = pBuffer[v7] | ((pBuffer[v7 + 1] | ((pBuffer[v7 + 2] | (pBuffer[v7 + 3] << 8)) << 8)) << 8);
      v7 += 4;
    }
    else
    {
      v9 = 0;
    }
    this->m_CurveCount = v9;
    v10 = v9;
    v11 = 48i64 * v9;
    if ( !is_mul_ok(v9, 0x30ui64) )
      v11 = -1i64;
    v12 = __CFADD__(v11, 8i64);
    v13 = v11 + 8;
    if ( v12 )
      v13 = -1i64;
    v14 = (unsigned __int64 *)operator new[](v13);
    if ( v14 )
    {
      *v14 = v10;
      v15 = (OGLCurveData *)(v14 + 1);
      `eh vector constructor iterator'(
        v14 + 1,
        0x30ui64,
        v10,
        (void (__fastcall *)(void *))OGLCurveData::OGLCurveData,
        (void (__fastcall *)(void *))OGLCurveData::~OGLCurveData);
    }
    else
    {
      v15 = 0i64;
    }
    this->m_CurveData = v15;
    v16 = 0;
    if ( this->m_CurveCount > 0 )
    {
      v17 = 0i64;
      do
      {
        if ( iSize > v7 )
        {
          v18 = pBuffer[v7] | ((pBuffer[v7 + 1] | ((pBuffer[v7 + 2] | (pBuffer[v7 + 3] << 8)) << 8)) << 8);
          v7 += 4;
        }
        else
        {
          v18 = 0;
        }
        this->m_CurveData[v17].curveType = v18;
        if ( iSize > v7 )
        {
          v19 = pBuffer[v7] | ((pBuffer[v7 + 1] | ((pBuffer[v7 + 2] | (pBuffer[v7 + 3] << 8)) << 8)) << 8);
          v7 += 4;
        }
        else
        {
          v19 = 0;
        }
        this->m_CurveData[v17].dimension = v19;
        if ( iSize > v7 )
        {
          v20 = pBuffer[v7] | ((pBuffer[v7 + 1] | ((pBuffer[v7 + 2] | (pBuffer[v7 + 3] << 8)) << 8)) << 8);
          v7 += 4;
        }
        else
        {
          v20 = 0;
        }
        this->m_CurveData[v17].order = v20;
        if ( iSize > v7 )
        {
          v21 = pBuffer[v7] | ((pBuffer[v7 + 1] | ((pBuffer[v7 + 2] | (pBuffer[v7 + 3] << 8)) << 8)) << 8);
          v7 += 4;
        }
        else
        {
          v21 = 0;
        }
        this->m_CurveData[v17].stepCount = v21;
        if ( iSize > v7 )
        {
          v22 = pBuffer[v7] | ((pBuffer[v7 + 1] | ((pBuffer[v7 + 2] | (pBuffer[v7 + 3] << 8)) << 8)) << 8);
          v7 += 4;
        }
        else
        {
          v22 = 0;
        }
        this->m_CurveData[v17].KnotCount = v22;
        KnotCount = this->m_CurveData[v17].KnotCount;
        v24 = 4 * KnotCount;
        if ( !is_mul_ok(KnotCount, 4ui64) )
          v24 = -1i64;
        this->m_CurveData[v17].KnotPoints = (int *)operator new[](v24);
        v25 = 0;
        if ( this->m_CurveData[v17].KnotCount > 0 )
        {
          v26 = 0i64;
          v27 = v7 + 2;
          do
          {
            if ( iSize > v7 )
            {
              v28 = pBuffer[v7] | ((pBuffer[(unsigned int)(v27 - 1)] | ((pBuffer[v27] | (pBuffer[(unsigned int)(v27 + 1)] << 8)) << 8)) << 8);
              v7 += 4;
              v27 = (unsigned int)(v27 + 4);
            }
            else
            {
              v28 = 0;
            }
            this->m_CurveData[v17].KnotPoints[v26] = v28;
            ++v25;
            ++v26;
          }
          while ( v25 < this->m_CurveData[v17].KnotCount );
        }
        if ( iSize > v7 )
        {
          v29 = pBuffer[v7] | ((pBuffer[v7 + 1] | ((pBuffer[v7 + 2] | (pBuffer[v7 + 3] << 8)) << 8)) << 8);
          v7 += 4;
        }
        else
        {
          v29 = 0;
        }
        this->m_CurveData[v17].CtrlCount = v29;
        v30 = 4 * this->m_CurveData[v17].CtrlCount;
        v31 = 4i64 * v30;
        if ( !is_mul_ok(v30, 4ui64) )
          v31 = -1i64;
        this->m_CurveData[v17].CtrlPoints = (float *)operator new[](v31);
        v32 = 0;
        if ( this->m_CurveData[v17].CtrlCount > 0 )
        {
          v33 = 0i64;
          do
          {
            if ( iSize > v7 )
            {
              v38 = *(float *)&pBuffer[v7];
              v7 += 4;
              v34 = v38;
            }
            else
            {
              v34 = 0.0;
            }
            this->m_CurveData[v17].CtrlPoints[v33] = v34;
            if ( iSize > v7 )
            {
              v39 = *(float *)&pBuffer[v7];
              v7 += 4;
              v35 = v39;
            }
            else
            {
              v35 = 0.0;
            }
            this->m_CurveData[v17].CtrlPoints[v33 + 1] = v35;
            if ( iSize > v7 )
            {
              v40 = *(float *)&pBuffer[v7];
              v7 += 4;
              v36 = v40;
            }
            else
            {
              v36 = 0.0;
            }
            this->m_CurveData[v17].CtrlPoints[v33 + 2] = v36;
            if ( iSize > v7 )
            {
              v41 = *(float *)&pBuffer[v7];
              v7 += 4;
              v37 = v41;
            }
            else
            {
              v37 = 0.0;
            }
            this->m_CurveData[v17].CtrlPoints[v33 + 3] = v37;
            ++v32;
            v33 += 4i64;
          }
          while ( v32 < this->m_CurveData[v17].CtrlCount );
        }
        ++v16;
        ++v17;
      }
      while ( v16 < this->m_CurveCount );
    }
  }
  return 1;
}

