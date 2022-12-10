#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsecondary.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408895DC
OGLSecondary * OGLSecondary::createSecondary(unsigned char * buf, long size); // 0x14008D300
void OGLSecondary::finalize(); // 0x14008D390
long OGLSecondary::loadOsecData(unsigned char * buffer, unsigned long size); // 0x14008D500
unsigned char OGLSecondary::checkOBBCollision(OGLMatrix * mat0, float sx0, float sy0, float sz0, OGLMatrix * mat1, float sx1, float sy1, float sz1); // 0x14008E2C0
unsigned char OGLSecondary::checkOBBSphereCollision(OGLMatrix * mat0, float sx0, float sy0, float sz0, OGLVec3 * vec1, float r1); // 0x14008E470
unsigned char OGLSecondary::ColObbs(OBB & obb1, OBB & obb2); // 0x14008E570
unsigned char OGLSecondary::ColObbSphere(OBB & obb, OGLVec3 & p, float r); // 0x14008F9A0
float OGLSecondary::calcDistSegmentSegment(OGLVec3 * Line1S, OGLVec3 * Line1E, OGLVec3 * Line2S, OGLVec3 * Line2E); // 0x14008FBC0//decompilation failure at 1408895DC!
bool __fastcall OGLSecondary::ColObbSphere(OBB *obb, OGLVec3 *p, float r)
{
  float v3; // xmm3_4
  float v4; // xmm5_4
  float v5; // xmm4_4
  float v6; // xmm6_4
  float v7; // xmm1_4
  float v8; // xmm0_4
  float v9; // xmm11_4
  float v10; // xmm0_4
  float v11; // xmm3_4
  float v12; // xmm8_4
  float v13; // xmm7_4

  v3 = obb->m_fLength[0];
  v4 = 0.0;
  v5 = 0.0;
  v6 = 0.0;
  if ( v3 > 0.0 )
  {
    v7 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)(p->y - obb->m_Pos.y)
                                                                           * obb->m_NormDir[0].y)
                                                                   + (float)((float)(p->x - obb->m_Pos.x)
                                                                           * obb->m_NormDir[0].x))
                                                           + (float)((float)(p->z - obb->m_Pos.z) * obb->m_NormDir[0].z))
                                                   / v3)) & _xmm);
    if ( v7 > 1.0 )
    {
      v8 = (float)(1.0 - v7) * v3;
      v4 = (float)(obb->m_NormDir[0].x * v8) + 0.0;
      v5 = (float)(obb->m_NormDir[0].y * v8) + 0.0;
      v6 = (float)(obb->m_NormDir[0].z * v8) + 0.0;
    }
  }
  if ( obb->m_fLength[1] > 0.0 )
  {
    v9 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)(p->y - obb->m_Pos.y)
                                                                           * obb->m_NormDir[1].y)
                                                                   + (float)((float)(p->x - obb->m_Pos.x)
                                                                           * obb->m_NormDir[1].x))
                                                           + (float)((float)(p->z - obb->m_Pos.z) * obb->m_NormDir[1].z))
                                                   / obb->m_fLength[1])) & _xmm);
    if ( v9 > 1.0 )
    {
      v10 = (float)(1.0 - v9) * obb->m_fLength[1];
      v4 = v4 + (float)(obb->m_NormDir[1].x * v10);
      v5 = v5 + (float)(obb->m_NormDir[1].y * v10);
      v6 = v6 + (float)(obb->m_NormDir[1].z * v10);
    }
  }
  v11 = obb->m_fLength[2];
  if ( v11 > 0.0 )
  {
    v12 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)((float)((float)(p->y - obb->m_Pos.y)
                                                                            * obb->m_NormDir[2].y)
                                                                    + (float)((float)(p->x - obb->m_Pos.x)
                                                                            * obb->m_NormDir[2].x))
                                                            + (float)((float)(p->z - obb->m_Pos.z) * obb->m_NormDir[2].z))
                                                    / v11)) & _xmm);
    if ( v12 > 1.0 )
    {
      v13 = (float)(1.0 - v12) * v11;
      v4 = v4 + (float)(obb->m_NormDir[2].x * v13);
      v5 = v5 + (float)(obb->m_NormDir[2].y * v13);
      v6 = v6 + (float)(obb->m_NormDir[2].z * v13);
    }
  }
  return (float)(r * r) > (float)((float)((float)(v5 * v5) + (float)(v4 * v4)) + (float)(v6 * v6));
}

bool __fastcall OGLSecondary::ColObbs(OBB *obb1, OBB *obb2)
{
  float v2; // xmm0_4
  float v4; // xmm1_4
  float v6; // xmm7_4
  float y; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm11_4
  float v10; // xmm13_4
  float v11; // xmm0_4
  float v12; // xmm1_4
  float v13; // xmm8_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm14_4
  float v18; // xmm15_4
  float v19; // xmm12_4
  float v20; // xmm6_4
  float v21; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm3_4
  float v25; // xmm0_4
  float v26; // xmm3_4
  float v27; // xmm5_4
  float v28; // xmm4_4
  float v29; // xmm7_4
  float v30; // xmm6_4
  float v31; // xmm5_4
  float v32; // xmm4_4
  float v33; // xmm7_4
  float v34; // xmm6_4
  float v35; // xmm5_4
  float v36; // xmm4_4
  float v37; // xmm7_4
  float v38; // xmm6_4
  float v39; // xmm7_4
  float v40; // xmm6_4
  float v41; // xmm4_4
  float v42; // xmm3_4
  float v43; // xmm0_4
  float v44; // xmm7_4
  float v45; // xmm6_4
  float v46; // xmm4_4
  float v47; // xmm3_4
  float v48; // xmm0_4
  float v49; // xmm7_4
  float v50; // xmm6_4
  float v51; // xmm4_4
  float v52; // xmm3_4
  float v53; // xmm0_4
  float v54; // xmm7_4
  float v55; // xmm6_4
  float v56; // xmm4_4
  float v57; // xmm3_4
  float v58; // xmm0_4
  float v59; // xmm7_4
  float v60; // xmm6_4
  float v61; // xmm4_4
  float v62; // xmm3_4
  float v63; // xmm0_4
  float v64; // xmm7_4
  float v65; // xmm6_4
  float v66; // xmm4_4
  float v67; // xmm3_4
  float v68; // xmm0_4
  float z; // xmm6_4
  float v70; // xmm1_4
  float v71; // xmm6_4
  float v72; // xmm5_4
  float v73; // xmm11_4
  float v74; // xmm5_4
  float v75; // xmm4_4
  float v76; // xmm3_4
  float v77; // xmm0_4
  float v78; // xmm6_4
  float v79; // xmm1_4
  float v80; // xmm6_4
  float v81; // xmm5_4
  float v82; // xmm10_4
  float v83; // xmm5_4
  float v84; // xmm4_4
  float v85; // xmm3_4
  float v86; // xmm0_4
  float v87; // xmm6_4
  float v88; // xmm1_4
  float v89; // xmm6_4
  float v90; // xmm5_4
  float v91; // xmm9_4
  float v92; // xmm5_4
  float v93; // xmm4_4
  float v94; // xmm0_4
  float v95; // [rsp+20h] [rbp-F8h]
  float v96; // [rsp+24h] [rbp-F4h]
  float v97; // [rsp+28h] [rbp-F0h]
  float v98; // [rsp+2Ch] [rbp-ECh]
  float v99; // [rsp+30h] [rbp-E8h]
  float v100; // [rsp+34h] [rbp-E4h]
  float v101; // [rsp+38h] [rbp-E0h]
  float v102; // [rsp+3Ch] [rbp-DCh]
  float v103; // [rsp+40h] [rbp-D8h]
  float v104; // [rsp+44h] [rbp-D4h]
  float v105; // [rsp+48h] [rbp-D0h]
  float v106; // [rsp+50h] [rbp-C8h]
  float x; // [rsp+58h] [rbp-C0h]
  float v108; // [rsp+120h] [rbp+8h]
  float v109; // [rsp+128h] [rbp+10h]
  float v110; // [rsp+130h] [rbp+18h]
  float v111; // [rsp+138h] [rbp+20h]

  v2 = obb1->m_fLength[0];
  v4 = obb1->m_fLength[1];
  v6 = obb1->m_NormDir[0].y * v2;
  y = obb2->m_NormDir[2].y;
  v8 = obb2->m_NormDir[1].y;
  v9 = obb2->m_NormDir[0].y;
  v10 = obb1->m_NormDir[0].x * v2;
  x = obb1->m_NormDir[2].x;
  v106 = v6;
  v98 = obb1->m_NormDir[1].x * v4;
  v105 = obb1->m_NormDir[0].z * v2;
  v97 = obb1->m_NormDir[1].y * v4;
  v99 = obb1->m_NormDir[1].z * v4;
  v11 = obb1->m_fLength[2];
  v109 = x * v11;
  v108 = obb1->m_NormDir[2].y * v11;
  v110 = obb1->m_NormDir[2].z * v11;
  v12 = obb2->m_fLength[0];
  v13 = obb2->m_NormDir[0].x * v12;
  v103 = v9 * v12;
  v104 = obb2->m_NormDir[0].z * v12;
  v14 = obb2->m_fLength[1];
  v101 = obb2->m_NormDir[1].x * v14;
  v100 = v8 * v14;
  v15 = obb2->m_NormDir[1].z * v14;
  v16 = obb2->m_fLength[2];
  v102 = v15;
  v95 = v16 * obb2->m_NormDir[2].x;
  v111 = v16 * y;
  v17 = obb1->m_Pos.x - obb2->m_Pos.x;
  v18 = obb1->m_Pos.y - obb2->m_Pos.y;
  v96 = v16 * obb2->m_NormDir[2].z;
  v19 = obb1->m_Pos.z - obb2->m_Pos.z;
  v20 = sqrtf((float)((float)(v10 * v10) + (float)(v6 * v6)) + (float)(v105 * v105));
  v21 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v18 * obb1->m_NormDir[0].y)
                                                          + (float)(v17 * obb1->m_NormDir[0].x))
                                                  + (float)(v19 * obb1->m_NormDir[0].z))) & _xmm);
  if ( v21 > (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(obb1->m_NormDir[0].y
                                                                                              * v111)
                                                                                      + (float)(obb1->m_NormDir[0].x
                                                                                              * v95))
                                                                              + (float)(obb1->m_NormDir[0].z * v96))) & _xmm)
                           + (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(obb1->m_NormDir[0].y * v100)
                                                                                              + (float)(obb1->m_NormDir[0].x * v101))
                                                                                      + (float)(obb1->m_NormDir[0].z
                                                                                              * v15))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(obb1->m_NormDir[0].y * v103)
                                                                                              + (float)(obb1->m_NormDir[0].x * v13))
                                                                                      + (float)(obb1->m_NormDir[0].z
                                                                                              * v104))) & _xmm)))
                   + v20) )
    return 0;
  v23 = sqrtf((float)((float)(v97 * v97) + (float)(v98 * v98)) + (float)(v99 * v99));
  v24 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v18 * obb1->m_NormDir[1].y)
                                                          + (float)(v17 * obb1->m_NormDir[1].x))
                                                  + (float)(v19 * obb1->m_NormDir[1].z))) & _xmm);
  if ( v24 > (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(obb1->m_NormDir[1].y
                                                                                              * v111)
                                                                                      + (float)(obb1->m_NormDir[1].x
                                                                                              * v95))
                                                                              + (float)(obb1->m_NormDir[1].z * v96))) & _xmm)
                           + (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(obb1->m_NormDir[1].y * v100)
                                                                                              + (float)(obb1->m_NormDir[1].x * v101))
                                                                                      + (float)(obb1->m_NormDir[1].z
                                                                                              * v15))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(obb1->m_NormDir[1].y * v103)
                                                                                              + (float)(obb1->m_NormDir[1].x * v13))
                                                                                      + (float)(obb1->m_NormDir[1].z
                                                                                              * v104))) & _xmm)))
                   + v23) )
    return 0;
  v25 = sqrtf((float)((float)(v108 * v108) + (float)(v109 * v109)) + (float)(v110 * v110));
  v26 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v18 * obb1->m_NormDir[2].y)
                                                          + (float)(v17 * obb1->m_NormDir[2].x))
                                                  + (float)(v19 * obb1->m_NormDir[2].z))) & _xmm);
  if ( v26 > (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(obb1->m_NormDir[2].y
                                                                                              * v111)
                                                                                      + (float)(obb1->m_NormDir[2].x
                                                                                              * v95))
                                                                              + (float)(obb1->m_NormDir[2].z * v96))) & _xmm)
                           + (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(obb1->m_NormDir[2].y * v100)
                                                                                              + (float)(obb1->m_NormDir[2].x * v101))
                                                                                      + (float)(obb1->m_NormDir[2].z
                                                                                              * v15))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(obb1->m_NormDir[2].y * v103)
                                                                                              + (float)(obb1->m_NormDir[2].x * v13))
                                                                                      + (float)(obb1->m_NormDir[2].z
                                                                                              * v104))) & _xmm)))
                   + v25) )
    return 0;
  v27 = obb2->m_NormDir[0].x;
  v28 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v10 * v27) + (float)(v6 * v9))
                                                  + (float)(obb2->m_NormDir[0].z * v105))) & _xmm);
  v29 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v18 * v9) + (float)(v17 * v27))
                                                  + (float)(v19 * obb2->m_NormDir[0].z))) & _xmm);
  v30 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v9 * v108) + (float)(v27 * v109))
                                                         + (float)(obb2->m_NormDir[0].z * v110))) & _xmm)
      + (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v9 * v97) + (float)(v27 * v98))
                                                                 + (float)(obb2->m_NormDir[0].z * v99))) & _xmm)
              + v28);
  if ( v29 > (float)(v30 + sqrtf((float)((float)(v103 * v103) + (float)(v13 * v13)) + (float)(v104 * v104))) )
    return 0;
  v31 = obb2->m_NormDir[1].x;
  v32 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v10 * v31) + (float)(v106 * v8))
                                                  + (float)(obb2->m_NormDir[1].z * v105))) & _xmm);
  v33 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v18 * v8) + (float)(v17 * v31))
                                                  + (float)(v19 * obb2->m_NormDir[1].z))) & _xmm);
  v34 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v8 * v108) + (float)(v31 * v109))
                                                         + (float)(obb2->m_NormDir[1].z * v110))) & _xmm)
      + (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v8 * v97) + (float)(v31 * v98))
                                                                 + (float)(obb2->m_NormDir[1].z * v99))) & _xmm)
              + v32);
  if ( v33 > (float)(v34 + sqrtf((float)((float)(v100 * v100) + (float)(v101 * v101)) + (float)(v15 * v15))) )
    return 0;
  v35 = obb2->m_NormDir[2].x;
  v36 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v10 * v35) + (float)(v106 * y))
                                                  + (float)(obb2->m_NormDir[2].z * v105))) & _xmm);
  v37 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v18 * y) + (float)(v17 * v35))
                                                  + (float)(v19 * obb2->m_NormDir[2].z))) & _xmm);
  v38 = (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(y * v108) + (float)(v35 * v109))
                                                         + (float)(obb2->m_NormDir[2].z * v110))) & _xmm)
      + (float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(y * v97) + (float)(v35 * v98))
                                                                 + (float)(obb2->m_NormDir[2].z * v99))) & _xmm)
              + v36);
  if ( v37 > (float)(v38 + sqrtf((float)((float)(v111 * v111) + (float)(v95 * v95)) + (float)(v96 * v96))) )
    return 0;
  v39 = (float)(obb2->m_NormDir[0].z * obb1->m_NormDir[0].y) - (float)(v9 * obb1->m_NormDir[0].z);
  v40 = (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[0].z) - (float)(obb2->m_NormDir[0].z * obb1->m_NormDir[0].x);
  v41 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v40 * v18) + (float)(v39 * v17))
                                                  + (float)((float)((float)(v9 * obb1->m_NormDir[0].x)
                                                                  - (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[0].y))
                                                          * v19))) & _xmm);
  v42 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v40 * v111) + (float)(v39 * v95))
                                                  + (float)((float)((float)(v9 * obb1->m_NormDir[0].x)
                                                                  - (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[0].y))
                                                          * v96))) & _xmm);
  v43 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v40 * v100) + (float)(v39 * v101))
                                                  + (float)((float)((float)(v9 * obb1->m_NormDir[0].x)
                                                                  - (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[0].y))
                                                          * v15))) & _xmm);
  if ( v41 > (float)((float)((float)(v42 + v43) + 0.0)
                   + (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v40 * v108)
                                                                                              + (float)(v39 * v109))
                                                                                      + (float)((float)((float)(v9 * obb1->m_NormDir[0].x) - (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[0].y))
                                                                                              * v110))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v40 * v97)
                                                                                              + (float)(v39 * v98))
                                                                                      + (float)((float)((float)(v9 * obb1->m_NormDir[0].x) - (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[0].y))
                                                                                              * v99))) & _xmm))
                           + 0.0)) )
    return 0;
  v44 = (float)(obb2->m_NormDir[1].z * obb1->m_NormDir[0].y) - (float)(v8 * obb1->m_NormDir[0].z);
  v45 = (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[0].z) - (float)(obb2->m_NormDir[1].z * obb1->m_NormDir[0].x);
  v46 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v45 * v18) + (float)(v44 * v17))
                                                  + (float)((float)((float)(v8 * obb1->m_NormDir[0].x)
                                                                  - (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[0].y))
                                                          * v19))) & _xmm);
  v47 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v45 * v111) + (float)(v44 * v95))
                                                  + (float)((float)((float)(v8 * obb1->m_NormDir[0].x)
                                                                  - (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[0].y))
                                                          * v96))) & _xmm);
  v48 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v45 * v103) + (float)(v44 * v13))
                                                  + (float)((float)((float)(v8 * obb1->m_NormDir[0].x)
                                                                  - (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[0].y))
                                                          * v104))) & _xmm);
  if ( v46 > (float)((float)((float)(v47 + v48) + 0.0)
                   + (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v45 * v108)
                                                                                              + (float)(v44 * v109))
                                                                                      + (float)((float)((float)(v8 * obb1->m_NormDir[0].x) - (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[0].y))
                                                                                              * v110))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v45 * v97)
                                                                                              + (float)(v44 * v98))
                                                                                      + (float)((float)((float)(v8 * obb1->m_NormDir[0].x) - (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[0].y))
                                                                                              * v99))) & _xmm))
                           + 0.0)) )
    return 0;
  v49 = (float)(obb2->m_NormDir[2].z * obb1->m_NormDir[0].y) - (float)(y * obb1->m_NormDir[0].z);
  v50 = (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[0].z) - (float)(obb2->m_NormDir[2].z * obb1->m_NormDir[0].x);
  v51 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v50 * v18) + (float)(v49 * v17))
                                                  + (float)((float)((float)(y * obb1->m_NormDir[0].x)
                                                                  - (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[0].y))
                                                          * v19))) & _xmm);
  v52 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v50 * v100) + (float)(v49 * v101))
                                                  + (float)((float)((float)(y * obb1->m_NormDir[0].x)
                                                                  - (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[0].y))
                                                          * v15))) & _xmm);
  v53 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v50 * v103) + (float)(v49 * v13))
                                                  + (float)((float)((float)(y * obb1->m_NormDir[0].x)
                                                                  - (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[0].y))
                                                          * v104))) & _xmm);
  if ( v51 > (float)((float)((float)(v52 + v53) + 0.0)
                   + (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v50 * v108)
                                                                                              + (float)(v49 * v109))
                                                                                      + (float)((float)((float)(y * obb1->m_NormDir[0].x) - (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[0].y))
                                                                                              * v110))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v50 * v97)
                                                                                              + (float)(v49 * v98))
                                                                                      + (float)((float)((float)(y * obb1->m_NormDir[0].x) - (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[0].y))
                                                                                              * v99))) & _xmm))
                           + 0.0)) )
    return 0;
  v54 = (float)(obb2->m_NormDir[0].z * obb1->m_NormDir[1].y) - (float)(v9 * obb1->m_NormDir[1].z);
  v55 = (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[1].z) - (float)(obb2->m_NormDir[0].z * obb1->m_NormDir[1].x);
  v56 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v55 * v18) + (float)(v54 * v17))
                                                  + (float)((float)((float)(v9 * obb1->m_NormDir[1].x)
                                                                  - (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[1].y))
                                                          * v19))) & _xmm);
  v57 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v10 * v54) + (float)(v106 * v55))
                                                  + (float)((float)((float)(v9 * obb1->m_NormDir[1].x)
                                                                  - (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[1].y))
                                                          * v105))) & _xmm);
  v58 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v55 * v108) + (float)(v54 * v109))
                                                  + (float)((float)((float)(v9 * obb1->m_NormDir[1].x)
                                                                  - (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[1].y))
                                                          * v110))) & _xmm);
  if ( v56 > (float)((float)((float)(v57 + v58) + 0.0)
                   + (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v55 * v111)
                                                                                              + (float)(v54 * v95))
                                                                                      + (float)((float)((float)(v9 * obb1->m_NormDir[1].x) - (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[1].y))
                                                                                              * v96))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v55 * v100)
                                                                                              + (float)(v54 * v101))
                                                                                      + (float)((float)((float)(v9 * obb1->m_NormDir[1].x) - (float)(obb2->m_NormDir[0].x * obb1->m_NormDir[1].y))
                                                                                              * v15))) & _xmm))
                           + 0.0)) )
    return 0;
  v59 = (float)(obb2->m_NormDir[1].z * obb1->m_NormDir[1].y) - (float)(v8 * obb1->m_NormDir[1].z);
  v60 = (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[1].z) - (float)(obb2->m_NormDir[1].z * obb1->m_NormDir[1].x);
  v61 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v60 * v18) + (float)(v59 * v17))
                                                  + (float)((float)((float)(v8 * obb1->m_NormDir[1].x)
                                                                  - (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[1].y))
                                                          * v19))) & _xmm);
  v62 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v10 * v59) + (float)(v106 * v60))
                                                  + (float)((float)((float)(v8 * obb1->m_NormDir[1].x)
                                                                  - (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[1].y))
                                                          * v105))) & _xmm);
  v63 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v60 * v108) + (float)(v59 * v109))
                                                  + (float)((float)((float)(v8 * obb1->m_NormDir[1].x)
                                                                  - (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[1].y))
                                                          * v110))) & _xmm);
  if ( v61 > (float)((float)((float)(v62 + v63) + 0.0)
                   + (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v60 * v111)
                                                                                              + (float)(v59 * v95))
                                                                                      + (float)((float)((float)(v8 * obb1->m_NormDir[1].x) - (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[1].y))
                                                                                              * v96))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v60 * v103)
                                                                                              + (float)(v59 * v13))
                                                                                      + (float)((float)((float)(v8 * obb1->m_NormDir[1].x) - (float)(obb2->m_NormDir[1].x * obb1->m_NormDir[1].y))
                                                                                              * v104))) & _xmm))
                           + 0.0)) )
    return 0;
  v64 = (float)(obb2->m_NormDir[2].z * obb1->m_NormDir[1].y) - (float)(y * obb1->m_NormDir[1].z);
  v65 = (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[1].z) - (float)(obb2->m_NormDir[2].z * obb1->m_NormDir[1].x);
  v66 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v65 * v18) + (float)(v64 * v17))
                                                  + (float)((float)((float)(y * obb1->m_NormDir[1].x)
                                                                  - (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[1].y))
                                                          * v19))) & _xmm);
  v67 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v10 * v64) + (float)(v106 * v65))
                                                  + (float)((float)((float)(y * obb1->m_NormDir[1].x)
                                                                  - (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[1].y))
                                                          * v105))) & _xmm);
  v68 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v65 * v108) + (float)(v64 * v109))
                                                  + (float)((float)((float)(y * obb1->m_NormDir[1].x)
                                                                  - (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[1].y))
                                                          * v110))) & _xmm);
  if ( v66 > (float)((float)((float)(v67 + v68) + 0.0)
                   + (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v65 * v100)
                                                                                              + (float)(v64 * v101))
                                                                                      + (float)((float)((float)(y * obb1->m_NormDir[1].x) - (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[1].y))
                                                                                              * v15))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v65 * v103)
                                                                                              + (float)(v64 * v13))
                                                                                      + (float)((float)((float)(y * obb1->m_NormDir[1].x) - (float)(obb2->m_NormDir[2].x * obb1->m_NormDir[1].y))
                                                                                              * v104))) & _xmm))
                           + 0.0)) )
    return 0;
  z = obb2->m_NormDir[0].z;
  v70 = z * x;
  v71 = (float)(z * obb1->m_NormDir[2].y) - (float)(v9 * obb1->m_NormDir[2].z);
  v72 = obb2->m_NormDir[0].x;
  v73 = (float)(v9 * x) - (float)(v72 * obb1->m_NormDir[2].y);
  v74 = (float)(v72 * obb1->m_NormDir[2].z) - v70;
  v75 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v74 * v18) + (float)(v71 * v17)) + (float)(v73 * v19))) & _xmm);
  v76 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v10 * v71) + (float)(v106 * v74))
                                                  + (float)(v73 * v105))) & _xmm);
  v77 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v74 * v97) + (float)(v71 * v98)) + (float)(v73 * v99))) & _xmm);
  if ( v75 > (float)((float)((float)(v76 + v77) + 0.0)
                   + (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v74 * v111)
                                                                                              + (float)(v71 * v95))
                                                                                      + (float)(v73 * v96))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v74 * v100)
                                                                                              + (float)(v71 * v101))
                                                                                      + (float)(v73 * v102))) & _xmm))
                           + 0.0)) )
    return 0;
  v78 = obb2->m_NormDir[1].z;
  v79 = v78 * x;
  v80 = (float)(v78 * obb1->m_NormDir[2].y) - (float)(v8 * obb1->m_NormDir[2].z);
  v81 = obb2->m_NormDir[1].x;
  v82 = (float)(v8 * x) - (float)(v81 * obb1->m_NormDir[2].y);
  v83 = (float)(v81 * obb1->m_NormDir[2].z) - v79;
  v84 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v83 * v18) + (float)(v80 * v17)) + (float)(v82 * v19))) & _xmm);
  v85 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v10 * v80) + (float)(v106 * v83))
                                                  + (float)(v82 * v105))) & _xmm);
  v86 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v83 * v97) + (float)(v80 * v98)) + (float)(v82 * v99))) & _xmm);
  if ( v84 > (float)((float)((float)(v85 + v86) + 0.0)
                   + (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v83 * v111)
                                                                                              + (float)(v80 * v95))
                                                                                      + (float)(v82 * v96))) & _xmm)
                                   + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v83 * v103)
                                                                                              + (float)(v80 * v13))
                                                                                      + (float)(v82 * v104))) & _xmm))
                           + 0.0)) )
    return 0;
  v87 = obb2->m_NormDir[2].z;
  v88 = v87 * x;
  v89 = (float)(v87 * obb1->m_NormDir[2].y) - (float)(y * obb1->m_NormDir[2].z);
  v90 = obb2->m_NormDir[2].x;
  v91 = (float)(y * x) - (float)(v90 * obb1->m_NormDir[2].y);
  v92 = (float)(v90 * obb1->m_NormDir[2].z) - v88;
  v93 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v92 * v18) + (float)(v89 * v17)) + (float)(v91 * v19))) & _xmm);
  v94 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v92 * v97) + (float)(v89 * v98)) + (float)(v91 * v99))) & _xmm);
  return v93 <= (float)((float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v10 * v89)
                                                                                                 + (float)(v106 * v92))
                                                                                         + (float)(v91 * v105))) & _xmm)
                                      + v94)
                              + 0.0)
                      + (float)((float)((float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v92 * v100)
                                                                                                 + (float)(v89 * v101))
                                                                                         + (float)(v91 * v102))) & _xmm)
                                      + (float)COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v92 * v103)
                                                                                                 + (float)(v89 * v13))
                                                                                         + (float)(v91 * v104))) & _xmm))
                              + 0.0));
}

float __fastcall OGLSecondary::calcDistSegmentSegment(
        OGLVec3 *Line1S,
        OGLVec3 *Line1E,
        OGLVec3 *Line2S,
        OGLVec3 *Line2E)
{
  float y; // xmm4_4
  float v5; // xmm7_4
  float v6; // xmm8_4
  float v7; // xmm9_4
  float v8; // xmm10_4
  float v9; // xmm12_4
  float v10; // xmm4_4
  float v11; // xmm13_4
  float v12; // xmm11_4
  float v13; // xmm6_4
  float v14; // xmm2_4
  float v15; // xmm14_4
  float v16; // xmm3_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm3_4
  float v20; // xmm15_4
  float v21; // xmm0_4
  float v22; // xmm3_4
  float v23; // xmm0_4
  float v24; // xmm2_4
  float v25; // xmm5_4
  float v26; // xmm2_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm2_4
  float v31; // xmm1_4
  float v32; // xmm5_4
  float v33; // xmm15_4
  float v34; // xmm7_4
  float v35; // xmm5_4
  float v36; // xmm3_4
  float v37; // xmm1_4
  float v38; // xmm0_4
  float v39; // xmm2_4
  float v40; // xmm0_4
  float v41; // [rsp+24h] [rbp-B4h]
  float v42; // [rsp+F8h] [rbp+20h]

  y = Line2S->y;
  v5 = Line1E->y - Line1S->y;
  v6 = Line1E->x - Line1S->x;
  v7 = Line1E->z - Line1S->z;
  v8 = Line2S->z - Line1S->z;
  v9 = Line2E->y - y;
  v10 = y - Line1S->y;
  v11 = Line2E->z - Line2S->z;
  v12 = Line2E->x - Line2S->x;
  v13 = Line2S->x - Line1S->x;
  v14 = 0.0;
  v15 = (float)((float)(v9 * v9) + (float)(v12 * v12)) + (float)(v11 * v11);
  if ( v15 <= 0.0 )
  {
    v40 = sqrtf(
            (float)((float)((float)((float)(v13 * v7) - (float)(v8 * v6)) * (float)((float)(v13 * v7) - (float)(v8 * v6)))
                  + (float)((float)((float)(v8 * v5) - (float)(v10 * v7)) * (float)((float)(v8 * v5) - (float)(v10 * v7))))
          + (float)((float)((float)(v10 * v6) - (float)(v13 * v5)) * (float)((float)(v10 * v6) - (float)(v13 * v5))));
    return v40 / sqrtf((float)((float)(v5 * v5) + (float)(v6 * v6)) + (float)(v7 * v7));
  }
  else
  {
    v16 = (float)((float)((float)(v9 * v5) + (float)(v12 * v6)) + (float)(v11 * v7)) / v15;
    v17 = v16 * v12;
    v18 = (float)(v16 * v9) - v5;
    v42 = (float)((float)(v10 * v9) + (float)(v13 * v12)) + (float)(v8 * v11);
    v19 = (float)(v16 * v11) - v7;
    v41 = v17 - v6;
    v20 = (float)((float)(v18 * v18) + (float)(v41 * v41)) + (float)(v19 * v19);
    if ( v20 >= 0.0000099999997 )
    {
      v31 = (float)((float)((float)((float)((float)((float)(v42 / v15) * v9) - v10) * v18)
                          + (float)((float)((float)((float)(v42 / v15) * v12) - v13) * v41))
                  + (float)((float)((float)((float)(v42 / v15) * v11) - v8) * v19))
          / v20;
      if ( v31 >= 0.0 )
        v32 = fminf(1.0, v31);
      else
        v32 = 0.0;
      v33 = v32 * v5;
      v34 = v32 * v6;
      v35 = v32 * v7;
      v36 = (float)((float)((float)((float)(v34 - v13) * v12) + (float)((float)(v33 - v10) * v9))
                  + (float)((float)(v35 - v8) * v11))
          / v15;
      if ( v36 >= 0.0 )
        v14 = fminf(1.0, v36);
      v37 = v14 * v12;
      v38 = (float)(v14 * v9) + Line2S->y;
      v39 = (float)((float)(v14 * v11) + Line2S->z) - (float)(v35 + Line1S->z);
      return sqrtf(
               (float)((float)((float)(v38 - (float)(v33 + Line1S->y)) * (float)(v38 - (float)(v33 + Line1S->y)))
                     + (float)((float)((float)(v37 + Line2S->x) - (float)(v34 + Line1S->x))
                             * (float)((float)(v37 + Line2S->x) - (float)(v34 + Line1S->x))))
             + (float)(v39 * v39));
    }
    else
    {
      v21 = Line2E->z - Line1S->z;
      v22 = (float)((float)((float)(Line2E->y - Line1S->y) * (float)(Line2E->y - Line1S->y))
                  + (float)((float)(Line2E->x - Line1S->x) * (float)(Line2E->x - Line1S->x)))
          + (float)(v21 * v21);
      v23 = Line2S->z - Line1E->z;
      v24 = Line2S->y - Line1E->y;
      v25 = fminf(
              (float)((float)((float)(Line2E->y - Line1E->y) * (float)(Line2E->y - Line1E->y))
                    + (float)((float)(Line2E->x - Line1E->x) * (float)(Line2E->x - Line1E->x)))
            + (float)((float)(Line2E->z - Line1E->z) * (float)(Line2E->z - Line1E->z)),
              fminf(
                (float)((float)(v24 * v24) + (float)((float)(Line2S->x - Line1E->x) * (float)(Line2S->x - Line1E->x)))
              + (float)(v23 * v23),
                fminf(v22, (float)((float)(v13 * v13) + (float)(v10 * v10)) + (float)(v8 * v8))));
      v26 = v42 / (float)(v15 * -1.0);
      v27 = (float)((float)(v26 * v9) + Line2S->y) - Line1S->y;
      v28 = (float)((float)(v26 * v12) + Line2S->x) - Line1S->x;
      v29 = (float)((float)(v26 * v11) + Line2S->z) - Line1S->z;
      return fminf((float)((float)(v27 * v27) + (float)(v28 * v28)) + (float)(v29 * v29), v25);
    }
  }
}

bool __fastcall OGLSecondary::checkOBBCollision(
        OGLMatrix *mat0,
        float sx0,
        float sy0,
        float sz0,
        OGLMatrix *mat1,
        float sx1,
        float sy1,
        float sz1)
{
  __int64 v8; // rdx
  float *p_z; // rax
  __int64 v10; // r8
  float *v12; // rax
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  float v18; // xmm0_4
  float v19; // xmm1_4
  float v20; // xmm0_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4
  float v24; // xmm0_4
  float v25; // xmm1_4
  float v26; // xmm0_4
  float v27; // xmm1_4
  float v28; // xmm0_4
  float v29; // xmm1_4
  float v30; // xmm0_4
  float v31; // xmm1_4
  float v32; // xmm1_4
  float v33; // xmm0_4
  float v34; // xmm1_4
  OBB obb2; // [rsp+20h] [rbp-59h] BYREF
  OBB obb1; // [rsp+60h] [rbp-19h] BYREF

  v8 = 3i64;
  p_z = &obb1.m_NormDir[0].z;
  v10 = 3i64;
  do
  {
    *((_QWORD *)p_z - 1) = 0i64;
    *p_z = 0.0;
    p_z += 3;
    --v10;
  }
  while ( v10 );
  v12 = &obb2.m_NormDir[0].z;
  do
  {
    *((_QWORD *)v12 - 1) = 0i64;
    *v12 = 0.0;
    v12 += 3;
    --v8;
  }
  while ( v8 );
  v13 = mat0->m[1];
  obb1.m_NormDir[0].x = mat0->m[0];
  obb1.m_NormDir[0].z = mat0->m[2];
  v14 = mat0->m[5];
  obb1.m_NormDir[0].y = v13;
  v15 = mat0->m[4];
  obb1.m_NormDir[1].y = v14;
  v16 = mat0->m[8];
  obb1.m_NormDir[1].x = v15;
  v17 = mat0->m[6];
  obb1.m_NormDir[2].x = v16;
  v18 = mat0->m[10];
  obb1.m_NormDir[1].z = v17;
  v19 = mat0->m[9];
  obb1.m_NormDir[2].z = v18;
  v20 = mat0->m[12];
  obb1.m_NormDir[2].y = v19;
  v21 = mat0->m[13];
  obb1.m_Pos.x = v20;
  v22 = mat0->m[14];
  obb1.m_Pos.y = v21;
  v23 = mat1->m[0];
  obb1.m_Pos.z = v22;
  v24 = mat1->m[1];
  obb2.m_NormDir[0].x = v23;
  v25 = mat1->m[2];
  obb2.m_NormDir[0].y = v24;
  v26 = mat1->m[4];
  obb2.m_NormDir[0].z = v25;
  v27 = mat1->m[5];
  obb2.m_NormDir[1].x = v26;
  v28 = mat1->m[6];
  obb2.m_NormDir[1].y = v27;
  v29 = mat1->m[8];
  obb2.m_NormDir[1].z = v28;
  v30 = mat1->m[9];
  obb2.m_NormDir[2].x = v29;
  v31 = mat1->m[10];
  obb2.m_NormDir[2].y = v30;
  obb2.m_NormDir[2].z = v31;
  obb2.m_fLength[0] = sx1;
  obb2.m_fLength[1] = sy1;
  v32 = mat1->m[12];
  obb2.m_fLength[2] = sz1;
  v33 = mat1->m[13];
  obb2.m_Pos.x = v32;
  v34 = mat1->m[14];
  obb2.m_Pos.y = v33;
  obb1.m_fLength[0] = sx0;
  obb1.m_fLength[1] = sy0;
  obb1.m_fLength[2] = sz0;
  obb2.m_Pos.z = v34;
  return OGLSecondary::ColObbs(&obb1, &obb2);
}

bool __fastcall OGLSecondary::checkOBBSphereCollision(
        OGLMatrix *mat0,
        float sx0,
        float sy0,
        float sz0,
        OGLVec3 *vec1,
        float r1)
{
  float *p_z; // rax
  __int64 v8; // rdx
  float v9; // xmm1_4
  float v10; // xmm0_4
  float v11; // xmm1_4
  float v12; // xmm0_4
  float v13; // xmm1_4
  float v14; // xmm0_4
  float v15; // xmm1_4
  float v16; // xmm0_4
  float v17; // xmm1_4
  OBB obb; // [rsp+20h] [rbp-58h] BYREF

  p_z = &obb.m_NormDir[0].z;
  v8 = 3i64;
  do
  {
    *((_QWORD *)p_z - 1) = 0i64;
    *p_z = 0.0;
    p_z += 3;
    --v8;
  }
  while ( v8 );
  v9 = mat0->m[1];
  obb.m_NormDir[0].x = mat0->m[0];
  obb.m_NormDir[0].z = mat0->m[2];
  obb.m_NormDir[1].y = mat0->m[5];
  v10 = mat0->m[8];
  obb.m_NormDir[0].y = v9;
  v11 = mat0->m[4];
  obb.m_NormDir[2].x = v10;
  v12 = mat0->m[10];
  obb.m_NormDir[1].x = v11;
  v13 = mat0->m[6];
  obb.m_NormDir[2].z = v12;
  v14 = mat0->m[12];
  obb.m_NormDir[1].z = v13;
  v15 = mat0->m[9];
  obb.m_Pos.x = v14;
  v16 = mat0->m[14];
  obb.m_NormDir[2].y = v15;
  v17 = mat0->m[13];
  obb.m_fLength[1] = sy0;
  obb.m_Pos.z = v16;
  obb.m_fLength[0] = sx0;
  obb.m_fLength[2] = sz0;
  obb.m_Pos.y = v17;
  return OGLSecondary::ColObbSphere(&obb, vec1, r1);
}

OGLSecondary *__fastcall OGLSecondary::createSecondary(unsigned __int8 *buf, int size)
{
  OGLSecondary *v4; // rsi

  v4 = (OGLSecondary *)operator new(0x28ui64);
  *(_QWORD *)&v4->m_uiFormatVer = 0i64;
  *(_QWORD *)&v4->m_uiBoneCount = 0i64;
  v4->m_pSecondaryBoneInfo = 0i64;
  v4->m_pSecondaryBoneInfo2 = 0i64;
  v4->m_cBoneName = 0i64;
  if ( OGLSecondary::loadOsecData(v4, buf, size) )
    return v4;
  OGLSecondary::finalize(v4);
  operator delete(v4, 0x28ui64);
  return 0i64;
}

void __fastcall OGLSecondary::finalize(OGLSecondary *this, unsigned __int64 a2)
{
  unsigned int v3; // esi
  __int64 v4; // r15
  unsigned __int8 *pUseBone; // rcx
  unsigned __int8 **v6; // rax
  unsigned __int8 *v7; // rcx
  unsigned __int8 **v8; // rcx
  _SECONDARY_BONE_BASE_INFO *m_pSecondaryBoneInfo; // rcx
  _SECONDARY_BONE_COLLISION_INFO *colInfo; // rcx
  unsigned int i; // esi
  unsigned __int8 **m_cBoneName; // rcx
  __int64 v13; // r14
  unsigned __int8 *v14; // rcx
  unsigned __int8 **v15; // rcx
  _SECONDARY_BONE_BASE_INFO2 *m_pSecondaryBoneInfo2; // rcx

  v3 = 0;
  if ( this->m_uiFormatVer >= 0xA )
  {
    if ( this->m_uiBoneCount )
    {
      do
      {
        colInfo = this->m_pSecondaryBoneInfo2[v3].colInfo;
        if ( colInfo )
        {
          operator delete(colInfo, a2);
          this->m_pSecondaryBoneInfo2[v3].colInfo = 0i64;
        }
        ++v3;
      }
      while ( v3 < this->m_uiBoneCount );
    }
    for ( i = 0; i < this->m_uiBoneListCount; ++i )
    {
      m_cBoneName = this->m_cBoneName;
      if ( m_cBoneName )
      {
        v13 = i;
        v14 = m_cBoneName[v13];
        if ( v14 )
        {
          operator delete(v14, a2);
          this->m_cBoneName[v13] = 0i64;
        }
      }
    }
    v15 = this->m_cBoneName;
    if ( v15 )
    {
      operator delete(v15, a2);
      this->m_cBoneName = 0i64;
    }
    m_pSecondaryBoneInfo2 = this->m_pSecondaryBoneInfo2;
    if ( m_pSecondaryBoneInfo2 )
    {
      operator delete(m_pSecondaryBoneInfo2, a2);
      this->m_pSecondaryBoneInfo2 = 0i64;
    }
    this->m_uiBoneListCount = 0;
  }
  else
  {
    if ( this->m_uiBoneCount )
    {
      do
      {
        v4 = v3;
        pUseBone = this->m_pSecondaryBoneInfo[v4].pUseBone;
        if ( pUseBone )
        {
          operator delete(pUseBone, a2);
          this->m_pSecondaryBoneInfo[v4].pUseBone = 0i64;
        }
        v6 = this->m_cBoneName;
        if ( v6 )
        {
          v7 = v6[v3];
          if ( v7 )
          {
            operator delete(v7, a2);
            this->m_cBoneName[v3] = 0i64;
          }
        }
        ++v3;
      }
      while ( v3 < this->m_uiBoneCount );
    }
    v8 = this->m_cBoneName;
    if ( v8 )
    {
      operator delete(v8, a2);
      this->m_cBoneName = 0i64;
    }
    m_pSecondaryBoneInfo = this->m_pSecondaryBoneInfo;
    if ( m_pSecondaryBoneInfo )
    {
      operator delete(m_pSecondaryBoneInfo, a2);
      this->m_pSecondaryBoneInfo = 0i64;
    }
  }
  this->m_uiFormatVer = 0;
  *(_QWORD *)&this->m_uiFormatType = 0i64;
}

__int64 __fastcall OGLSecondary::loadOsecData(OGLSecondary *this, unsigned __int8 *buffer, unsigned int size)
{
  __int64 v7; // rbx
  unsigned int v8; // er13
  int v9; // edx
  int v10; // er13
  unsigned int v11; // edx
  __int64 v12; // rax
  int v13; // edx
  __int64 v14; // r15
  _SECONDARY_BONE_BASE_INFO *v15; // rax
  float *v16; // rcx
  unsigned __int64 m_uiBoneCount; // rcx
  unsigned __int8 **v18; // rax
  unsigned __int64 v19; // rdx
  bool v20; // zf
  __int64 v21; // r15
  __int64 v22; // r12
  float v23; // xmm0_4
  __int64 v24; // rax
  _SECONDARY_BONE_BASE_INFO *m_pSecondaryBoneInfo; // rax
  float v26; // xmm0_4
  __int64 v27; // rax
  float v28; // ecx
  float v29; // xmm0_4
  __int64 v30; // rax
  float v31; // xmm0_4
  __int64 v32; // rax
  int v33; // edx
  float v34; // xmm0_4
  __int64 v35; // rax
  float v36; // xmm0_4
  __int64 v37; // rax
  float v38; // xmm0_4
  __int64 v39; // rax
  float v40; // xmm0_4
  __int64 v41; // rax
  float v42; // xmm0_4
  __int64 v43; // rax
  float v44; // xmm0_4
  __int64 v45; // rax
  float v46; // xmm0_4
  __int64 v47; // rax
  float v48; // xmm0_4
  __int64 v49; // rax
  float v50; // xmm0_4
  __int64 v51; // rax
  float v52; // xmm0_4
  __int64 v53; // rax
  signed int v54; // er12
  __int64 v55; // r15
  _SECONDARY_BONE_BASE_INFO *v56; // rax
  unsigned __int8 *v57; // rax
  signed int v58; // er8
  __int64 v59; // r9
  unsigned __int8 v60; // al
  __int64 v61; // rax
  unsigned int v62; // edx
  unsigned __int64 v63; // rax
  unsigned int v64; // er13
  __int64 v65; // r12
  int v66; // er15
  unsigned __int8 *v67; // rax
  unsigned int v68; // edx
  __int64 v69; // r15
  _SECONDARY_BONE_BASE_INFO2 *v70; // rax
  _QWORD *p_z; // rcx
  signed int v72; // er13
  __int64 v73; // r15
  int v74; // edx
  float v75; // xmm0_4
  __int64 v76; // rax
  float v77; // xmm0_4
  __int64 v78; // rax
  float v79; // xmm0_4
  __int64 v80; // rax
  float v81; // xmm0_4
  __int64 v82; // rax
  float v83; // xmm0_4
  __int64 v84; // rax
  float v85; // xmm0_4
  __int64 v86; // rax
  float v87; // xmm0_4
  __int64 v88; // rax
  float v89; // xmm0_4
  __int64 v90; // rax
  float v91; // xmm0_4
  __int64 v92; // rax
  int v93; // edx
  float v94; // xmm0_4
  __int64 v95; // rax
  float v96; // xmm0_4
  __int64 v97; // rax
  float v98; // xmm0_4
  __int64 v99; // rax
  float v100; // xmm0_4
  __int64 v101; // rax
  float v102; // xmm0_4
  __int64 v103; // rax
  int v104; // edx
  int v105; // edx
  _SECONDARY_BONE_BASE_INFO2 *m_pSecondaryBoneInfo2; // rax
  unsigned __int64 iColLen; // rcx
  __int64 v108; // r12
  char *v109; // rax
  int v110; // er10
  _SECONDARY_BONE_COLLISION_INFO *v111; // rdx
  _DWORD *v112; // rcx
  int v113; // er12
  __int64 v114; // r11
  __int64 v115; // rdx
  __int64 v116; // r8
  __int64 v117; // r9
  int v118; // ecx
  int v119; // er10
  __int64 v120; // rax
  float v121; // xmm0_4
  __int64 v122; // rax
  float v123; // xmm0_4
  __int64 v124; // rax
  float v125; // xmm0_4
  __int64 v126; // rax
  float v127; // xmm0_4
  __int64 v128; // rax
  int v129; // er10
  int v130; // ecx
  int v131; // er10
  __int64 v132; // rax
  unsigned int v133; // [rsp+B8h] [rbp+48h]
  signed int v134; // [rsp+C8h] [rbp+58h]

  if ( !buffer )
    return 4294967292i64;
  if ( this->m_uiBoneCount )
    return 4294967294i64;
  if ( *buffer != 79 || buffer[1] != 83 )
    return 4294967293i64;
  LODWORD(v7) = 0;
  if ( size && (LODWORD(v7) = 2, size > 2) )
  {
    LODWORD(v7) = 6;
    v8 = buffer[2] | ((buffer[3] | (*((unsigned __int16 *)buffer + 2) << 8)) << 8);
  }
  else
  {
    v8 = 0;
  }
  v133 = v8;
  if ( size > (unsigned int)v7 )
  {
    v9 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
    LODWORD(v7) = v7 + 4;
  }
  else
  {
    v9 = 0;
  }
  this->m_uiFormatVer = v8;
  this->m_uiFormatType = v9;
  if ( v8 >= 0xA )
  {
    if ( size > (unsigned int)v7 )
    {
      v62 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
      LODWORD(v7) = v7 + 4;
    }
    else
    {
      v62 = 0;
    }
    this->m_uiBoneListCount = v62;
    v63 = 8i64 * v62;
    if ( !is_mul_ok(v62, 8ui64) )
      v63 = -1i64;
    v64 = 0;
    this->m_cBoneName = (unsigned __int8 **)operator new[](v63);
    if ( this->m_uiBoneListCount )
    {
      v65 = 0i64;
      do
      {
        if ( size > (unsigned int)v7 )
        {
          v66 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
          LODWORD(v7) = v7 + 4;
        }
        else
        {
          v66 = 0;
        }
        this->m_cBoneName[v65] = (unsigned __int8 *)operator new[](v66 + 1);
        if ( size > (unsigned int)v7 )
        {
          memmove(this->m_cBoneName[v65], &buffer[(unsigned int)v7], v66);
          LODWORD(v7) = v66 + v7;
        }
        ++v64;
        v67 = this->m_cBoneName[v65++];
        v67[v66] = 0;
      }
      while ( v64 < this->m_uiBoneListCount );
    }
    if ( size > (unsigned int)v7 )
    {
      v68 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
      LODWORD(v7) = v7 + 4;
    }
    else
    {
      v68 = 0;
    }
    v69 = v68;
    this->m_uiBoneCount = v68;
    v70 = (_SECONDARY_BONE_BASE_INFO2 *)operator new[](saturated_mul(v68, 0x50ui64));
    if ( v70 )
    {
      if ( v69 )
      {
        p_z = (_QWORD *)&v70->vSize.z;
        do
        {
          *(p_z - 1) = 0i64;
          *p_z = 0i64;
          p_z[1] = 0i64;
          p_z += 10;
          --v69;
        }
        while ( v69 );
      }
    }
    else
    {
      v70 = 0i64;
    }
    this->m_pSecondaryBoneInfo2 = v70;
    if ( v70 )
    {
      v72 = 0;
      if ( (int)this->m_uiBoneCount > 0 )
      {
        v73 = 0i64;
        do
        {
          if ( size <= (unsigned int)v7 || (v7 = (unsigned int)(v7 + 4), size <= (unsigned int)v7) )
          {
            v74 = 0;
          }
          else
          {
            v74 = buffer[v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
            LODWORD(v7) = v7 + 4;
          }
          this->m_pSecondaryBoneInfo2[v73].iBoneNo = v74;
          if ( size > (unsigned int)v7 )
          {
            v76 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v75 = *(float *)&buffer[v76];
          }
          else
          {
            v75 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].vSize.x = v75;
          if ( size > (unsigned int)v7 )
          {
            v78 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v77 = *(float *)&buffer[v78];
          }
          else
          {
            v77 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].vSize.y = v77;
          if ( size > (unsigned int)v7 )
          {
            v80 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v79 = *(float *)&buffer[v80];
          }
          else
          {
            v79 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].vSize.z = v79;
          if ( size > (unsigned int)v7 )
          {
            v82 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v81 = *(float *)&buffer[v82];
          }
          else
          {
            v81 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].vRot.x = v81;
          if ( size > (unsigned int)v7 )
          {
            v84 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v83 = *(float *)&buffer[v84];
          }
          else
          {
            v83 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].vRot.y = v83;
          if ( size > (unsigned int)v7 )
          {
            v86 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v85 = *(float *)&buffer[v86];
          }
          else
          {
            v85 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].vRot.z = v85;
          if ( size > (unsigned int)v7 )
          {
            v88 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v87 = *(float *)&buffer[v88];
          }
          else
          {
            v87 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].fRadianLimitMax = (float)(v87 * 3.1415927) / 180.0;
          if ( size > (unsigned int)v7 )
          {
            v90 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v89 = *(float *)&buffer[v90];
          }
          else
          {
            v89 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].fRadianLimitMin = (float)(v89 * 3.1415927) / 180.0;
          if ( size > (unsigned int)v7 )
          {
            v92 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v91 = *(float *)&buffer[v92];
          }
          else
          {
            v91 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].fWeight = v91;
          if ( size > (unsigned int)v7 )
          {
            v93 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
            LODWORD(v7) = v7 + 4;
          }
          else
          {
            v93 = 0;
          }
          this->m_pSecondaryBoneInfo2[v73].iSettingFlg = v93;
          if ( size > (unsigned int)v7 )
          {
            v95 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v94 = *(float *)&buffer[v95];
          }
          else
          {
            v94 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].fGravity = v94;
          if ( size > (unsigned int)v7 )
          {
            v97 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v96 = *(float *)&buffer[v97];
          }
          else
          {
            v96 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].fOffsetY = v96;
          if ( size > (unsigned int)v7 )
          {
            v99 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v98 = *(float *)&buffer[v99];
          }
          else
          {
            v98 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].fMass = v98;
          if ( size > (unsigned int)v7 )
          {
            v101 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v100 = *(float *)&buffer[v101];
          }
          else
          {
            v100 = 0.0;
          }
          this->m_pSecondaryBoneInfo2[v73].fGround = v100;
          if ( v133 < 0xB )
          {
            this->m_pSecondaryBoneInfo2[v73].fTension = 0.0;
            this->m_pSecondaryBoneInfo2[v73].iTensionBone = -1;
          }
          else
          {
            if ( size > (unsigned int)v7 )
            {
              v103 = (unsigned int)v7;
              LODWORD(v7) = v7 + 4;
              v102 = *(float *)&buffer[v103];
            }
            else
            {
              v102 = 0.0;
            }
            this->m_pSecondaryBoneInfo2[v73].fTension = v102;
            if ( size > (unsigned int)v7 )
            {
              v104 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
              LODWORD(v7) = v7 + 4;
              this->m_pSecondaryBoneInfo2[v73].iTensionBone = v104;
            }
            else
            {
              this->m_pSecondaryBoneInfo2[v73].iTensionBone = 0;
            }
          }
          if ( size > (unsigned int)v7 )
          {
            v105 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
            LODWORD(v7) = v7 + 4;
          }
          else
          {
            v105 = 0;
          }
          this->m_pSecondaryBoneInfo2[v73].iColLen = v105;
          m_pSecondaryBoneInfo2 = this->m_pSecondaryBoneInfo2;
          iColLen = m_pSecondaryBoneInfo2[v73].iColLen;
          if ( (_DWORD)iColLen )
          {
            v108 = m_pSecondaryBoneInfo2[v73].iColLen;
            v109 = (char *)operator new[](saturated_mul(iColLen, 0x18ui64));
            v110 = 0;
            v111 = (_SECONDARY_BONE_COLLISION_INFO *)v109;
            if ( v109 )
            {
              if ( v108 )
              {
                v112 = v109 + 12;
                do
                {
                  *((_QWORD *)v112 - 1) = 0i64;
                  *v112 = 0;
                  v112 += 6;
                  --v108;
                }
                while ( v108 );
              }
            }
            else
            {
              v111 = 0i64;
            }
            v113 = 0;
            this->m_pSecondaryBoneInfo2[v73].colInfo = v111;
            if ( this->m_pSecondaryBoneInfo2[v73].iColLen > 0 )
            {
              v114 = 0i64;
              v115 = (unsigned int)(v7 + 1);
              v116 = (unsigned int)(v7 + 2);
              v117 = (unsigned int)(v7 + 3);
              do
              {
                if ( size > (unsigned int)v7 )
                {
                  v118 = buffer[v116];
                  v116 = (unsigned int)(v116 + 4);
                  v119 = buffer[v117];
                  v117 = (unsigned int)(v117 + 4);
                  v120 = (unsigned int)v7;
                  LODWORD(v7) = v7 + 4;
                  v110 = buffer[v120] | ((buffer[v115] | ((v118 | (v119 << 8)) << 8)) << 8);
                  v115 = (unsigned int)(v115 + 4);
                }
                this->m_pSecondaryBoneInfo2[v73].colInfo[v114].iBoneNo = v110;
                if ( size > (unsigned int)v7 )
                {
                  v122 = (unsigned int)v7;
                  v117 = (unsigned int)(v117 + 4);
                  LODWORD(v7) = v7 + 4;
                  v116 = (unsigned int)(v116 + 4);
                  v115 = (unsigned int)(v115 + 4);
                  v121 = *(float *)&buffer[v122];
                }
                else
                {
                  v121 = 0.0;
                }
                this->m_pSecondaryBoneInfo2[v73].colInfo[v114].vSize.x = v121;
                if ( size > (unsigned int)v7 )
                {
                  v124 = (unsigned int)v7;
                  v117 = (unsigned int)(v117 + 4);
                  LODWORD(v7) = v7 + 4;
                  v116 = (unsigned int)(v116 + 4);
                  v115 = (unsigned int)(v115 + 4);
                  v123 = *(float *)&buffer[v124];
                }
                else
                {
                  v123 = 0.0;
                }
                this->m_pSecondaryBoneInfo2[v73].colInfo[v114].vSize.y = v123;
                if ( size > (unsigned int)v7 )
                {
                  v126 = (unsigned int)v7;
                  v117 = (unsigned int)(v117 + 4);
                  LODWORD(v7) = v7 + 4;
                  v116 = (unsigned int)(v116 + 4);
                  v115 = (unsigned int)(v115 + 4);
                  v125 = *(float *)&buffer[v126];
                }
                else
                {
                  v125 = 0.0;
                }
                this->m_pSecondaryBoneInfo2[v73].colInfo[v114].vSize.z = v125;
                if ( size > (unsigned int)v7 )
                {
                  v128 = (unsigned int)v7;
                  v117 = (unsigned int)(v117 + 4);
                  LODWORD(v7) = v7 + 4;
                  v116 = (unsigned int)(v116 + 4);
                  v115 = (unsigned int)(v115 + 4);
                  v127 = *(float *)&buffer[v128];
                }
                else
                {
                  v127 = 0.0;
                }
                this->m_pSecondaryBoneInfo2[v73].colInfo[v114].fOffsetY = v127;
                if ( size > (unsigned int)v7 )
                {
                  v130 = buffer[v116];
                  v116 = (unsigned int)(v116 + 4);
                  v131 = buffer[v117];
                  v117 = (unsigned int)(v117 + 4);
                  v132 = (unsigned int)v7;
                  LODWORD(v7) = v7 + 4;
                  v129 = buffer[v132] | ((buffer[v115] | ((v130 | (v131 << 8)) << 8)) << 8);
                  v115 = (unsigned int)(v115 + 4);
                }
                else
                {
                  v129 = 0;
                }
                ++v113;
                this->m_pSecondaryBoneInfo2[v73].colInfo[v114++].iSettingFlg = v129;
                v110 = 0;
              }
              while ( v113 < this->m_pSecondaryBoneInfo2[v73].iColLen );
            }
          }
          else
          {
            m_pSecondaryBoneInfo2[v73].colInfo = 0i64;
          }
          ++v72;
          ++v73;
        }
        while ( v72 < (signed int)this->m_uiBoneCount );
      }
      return 1i64;
    }
$_ERROR_2:
    OGLSecondary::finalize(this, v19);
    return 0xFFFFFFFFi64;
  }
  if ( size > (unsigned int)v7 )
  {
    v12 = (unsigned int)v7;
    v13 = (buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8;
    LODWORD(v7) = v7 + 4;
    v11 = buffer[v12] | v13;
    v10 = 0;
  }
  else
  {
    v10 = 0;
    v11 = 0;
  }
  v14 = v11;
  this->m_uiBoneCount = v11;
  this->m_uiBoneListCount = v11;
  v15 = (_SECONDARY_BONE_BASE_INFO *)operator new[](saturated_mul(v11, 0x48ui64));
  if ( v15 )
  {
    if ( v14 )
    {
      v16 = &v15->vSize.z;
      do
      {
        *((_QWORD *)v16 - 1) = 0i64;
        *v16 = 0.0;
        *(_QWORD *)(v16 + 5) = 0i64;
        v16[7] = 0.0;
        v16 += 18;
        --v14;
      }
      while ( v14 );
    }
  }
  else
  {
    v15 = 0i64;
  }
  m_uiBoneCount = this->m_uiBoneCount;
  this->m_pSecondaryBoneInfo = v15;
  v18 = (unsigned __int8 **)operator new[](saturated_mul(m_uiBoneCount, 8ui64));
  v20 = this->m_pSecondaryBoneInfo == 0i64;
  this->m_cBoneName = v18;
  if ( v20 )
    goto $_ERROR_2;
  v134 = 0;
  if ( (int)this->m_uiBoneCount > 0 )
  {
    v21 = 0i64;
    v22 = 0i64;
    do
    {
      if ( size > (unsigned int)v7 )
      {
        v10 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
        LODWORD(v7) = v7 + 4;
      }
      this->m_cBoneName[v22] = (unsigned __int8 *)operator new[](v10 + 1);
      if ( size > (unsigned int)v7 )
      {
        memmove(this->m_cBoneName[v22], &buffer[(unsigned int)v7], v10);
        LODWORD(v7) = v10 + v7;
      }
      this->m_cBoneName[v22][v10] = 0;
      if ( size > (unsigned int)v7 )
      {
        v24 = (unsigned int)v7;
        LODWORD(v7) = v7 + 4;
        v23 = *(float *)&buffer[v24];
      }
      else
      {
        v23 = 0.0;
      }
      this->m_pSecondaryBoneInfo[v21].fRadianLimitMax = (float)(v23 * 3.1415927) / 180.0;
      if ( v133 < 2 )
      {
        m_pSecondaryBoneInfo = this->m_pSecondaryBoneInfo;
        LODWORD(v26) = LODWORD(m_pSecondaryBoneInfo[v21].fRadianLimitMax) ^ _xmm;
      }
      else if ( size > (unsigned int)v7 )
      {
        v27 = (unsigned int)v7;
        LODWORD(v7) = v7 + 4;
        v28 = *(float *)&buffer[v27];
        m_pSecondaryBoneInfo = this->m_pSecondaryBoneInfo;
        v26 = (float)(v28 * 3.1415927) / 180.0;
      }
      else
      {
        m_pSecondaryBoneInfo = this->m_pSecondaryBoneInfo;
        v26 = (float)(0.0 * 3.1415927) / 180.0;
      }
      m_pSecondaryBoneInfo[v21].fRadianLimitMin = v26;
      if ( size > (unsigned int)v7 )
      {
        v30 = (unsigned int)v7;
        LODWORD(v7) = v7 + 4;
        v29 = *(float *)&buffer[v30];
      }
      else
      {
        v29 = 0.0;
      }
      this->m_pSecondaryBoneInfo[v21].fRadius = v29;
      if ( size > (unsigned int)v7 )
      {
        v32 = (unsigned int)v7;
        LODWORD(v7) = v7 + 4;
        v31 = *(float *)&buffer[v32];
      }
      else
      {
        v31 = 0.0;
      }
      this->m_pSecondaryBoneInfo[v21].fWeight = v31;
      if ( v133 < 2 )
      {
        this->m_pSecondaryBoneInfo[v21].iSettingFlg = 0;
      }
      else if ( size > (unsigned int)v7 )
      {
        v33 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
        LODWORD(v7) = v7 + 4;
        this->m_pSecondaryBoneInfo[v21].iSettingFlg = v33;
      }
      else
      {
        this->m_pSecondaryBoneInfo[v21].iSettingFlg = 0;
      }
      this->m_pSecondaryBoneInfo[v21].fGravity = 9.8000002;
      this->m_pSecondaryBoneInfo[v21].vSize.x = 0.40000001;
      this->m_pSecondaryBoneInfo[v21].vSize.y = -1.0;
      this->m_pSecondaryBoneInfo[v21].vSize.z = 0.40000001;
      this->m_pSecondaryBoneInfo[v21].fOffsetY = 0.0;
      this->m_pSecondaryBoneInfo[v21].fMass = 1.0;
      this->m_pSecondaryBoneInfo[v21].fGround = 0.60000002;
      if ( v133 >= 3 )
      {
        if ( size > (unsigned int)v7 )
        {
          v35 = (unsigned int)v7;
          LODWORD(v7) = v7 + 4;
          v34 = *(float *)&buffer[v35];
        }
        else
        {
          v34 = 0.0;
        }
        this->m_pSecondaryBoneInfo[v21].fGravity = v34;
        if ( size > (unsigned int)v7 )
        {
          v37 = (unsigned int)v7;
          LODWORD(v7) = v7 + 4;
          v36 = *(float *)&buffer[v37];
        }
        else
        {
          v36 = 0.0;
        }
        this->m_pSecondaryBoneInfo[v21].vSize.x = v36;
        if ( size > (unsigned int)v7 )
        {
          v39 = (unsigned int)v7;
          LODWORD(v7) = v7 + 4;
          v38 = *(float *)&buffer[v39];
        }
        else
        {
          v38 = 0.0;
        }
        this->m_pSecondaryBoneInfo[v21].vSize.y = v38;
        if ( size > (unsigned int)v7 )
        {
          v41 = (unsigned int)v7;
          LODWORD(v7) = v7 + 4;
          v40 = *(float *)&buffer[v41];
        }
        else
        {
          v40 = 0.0;
        }
        this->m_pSecondaryBoneInfo[v21].vSize.z = v40;
        if ( v133 >= 4 )
        {
          if ( size > (unsigned int)v7 )
          {
            v43 = (unsigned int)v7;
            LODWORD(v7) = v7 + 4;
            v42 = *(float *)&buffer[v43];
          }
          else
          {
            v42 = 0.0;
          }
          this->m_pSecondaryBoneInfo[v21].fOffsetY = v42;
          if ( v133 >= 5 )
          {
            if ( size > (unsigned int)v7 )
            {
              v45 = (unsigned int)v7;
              LODWORD(v7) = v7 + 4;
              v44 = *(float *)&buffer[v45];
            }
            else
            {
              v44 = 0.0;
            }
            this->m_pSecondaryBoneInfo[v21].fMass = v44;
            if ( v133 >= 6 )
            {
              if ( size > (unsigned int)v7 )
              {
                v47 = (unsigned int)v7;
                LODWORD(v7) = v7 + 4;
                v46 = *(float *)&buffer[v47];
              }
              else
              {
                v46 = 0.0;
              }
              this->m_pSecondaryBoneInfo[v21].fGround = v46;
              if ( v133 >= 7 )
              {
                if ( size > (unsigned int)v7 )
                {
                  v49 = (unsigned int)v7;
                  LODWORD(v7) = v7 + 4;
                  v48 = *(float *)&buffer[v49];
                }
                else
                {
                  v48 = 0.0;
                }
                this->m_pSecondaryBoneInfo[v21].vRot.x = v48;
                if ( size > (unsigned int)v7 )
                {
                  v51 = (unsigned int)v7;
                  LODWORD(v7) = v7 + 4;
                  v50 = *(float *)&buffer[v51];
                }
                else
                {
                  v50 = 0.0;
                }
                this->m_pSecondaryBoneInfo[v21].vRot.y = v50;
                if ( size > (unsigned int)v7 )
                {
                  v53 = (unsigned int)v7;
                  LODWORD(v7) = v7 + 4;
                  v52 = *(float *)&buffer[v53];
                }
                else
                {
                  v52 = 0.0;
                }
                this->m_pSecondaryBoneInfo[v21].vRot.z = v52;
              }
            }
          }
        }
      }
      ++v22;
      v10 = 0;
      this->m_pSecondaryBoneInfo[v21++].fRegist = 0.30000001;
      ++v134;
    }
    while ( v134 < (signed int)this->m_uiBoneCount );
  }
  v54 = 0;
  if ( (int)this->m_uiBoneCount <= 0 )
    return 1i64;
  v55 = 0i64;
  do
  {
    v56 = this->m_pSecondaryBoneInfo;
    if ( v56[v55].fRadius == 0.0 )
    {
      v56[v55].pUseBone = 0i64;
    }
    else
    {
      v57 = (unsigned __int8 *)operator new[](this->m_uiBoneCount);
      v58 = 0;
      v59 = 0i64;
      for ( this->m_pSecondaryBoneInfo[v55].pUseBone = v57; v58 < (signed int)this->m_uiBoneCount; ++v59 )
      {
        if ( size > (unsigned int)v7 )
        {
          v61 = (unsigned int)v7;
          LODWORD(v7) = v7 + 1;
          v60 = buffer[v61];
        }
        else
        {
          v60 = 0;
        }
        ++v58;
        this->m_pSecondaryBoneInfo[v55].pUseBone[v59] = v60 != 0;
      }
    }
    ++v54;
    ++v55;
  }
  while ( v54 < (signed int)this->m_uiBoneCount );
  return 1i64;
}

