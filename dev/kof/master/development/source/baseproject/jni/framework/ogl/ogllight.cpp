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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x140889569
OGLLightManager::OGLLightManager(); // 0x14005DF10
OGLLightManager::~OGLLightManager(); // 0x14005DFC0
OGLLight::OGLLight(); // 0x14005DFE0
OGLLight::~OGLLight(); // 0x14005E000
void OGLLightManager::clear(); // 0x14005E010
long OGLLightManager::initList(); // 0x14005E140
long OGLLightManager::addLight(); // 0x14005E260
long OGLLightManager::addLight(const OGLLight * srcLight); // 0x14005E410
OGLLight * OGLLightManager::getLightById(long lightId); // 0x14005E6C0
void OGLLightManager::calcShadowViewProjBiasMatrix(long index); // 0x14005E6F0
unsigned char OGLLightManager::deleteAllLights(); // 0x14005E7F0
void OGLLightManager::copy(const OGLLightManager * srcLM); // 0x14005E920
void OGLLight::initialize(long id); // 0x14005EB90
void OGLLight::finalize(); // 0x14005EC50//decompilation failure at 140889569!
void __fastcall OGLLight::OGLLight(OGLLight *this)
{
  OGLLight::initialize(this, 0);
}

void __fastcall OGLLightManager::OGLLightManager(OGLLightManager *this)
{
  *(_QWORD *)this->m_ScaleBias.m = 0i64;
  *(_QWORD *)&this->m_ScaleBias.m[2] = 0i64;
  *(_QWORD *)&this->m_ScaleBias.m[4] = 0i64;
  *(_QWORD *)&this->m_ScaleBias.m[6] = 0i64;
  *(_QWORD *)&this->m_ScaleBias.m[8] = 0i64;
  *(_QWORD *)&this->m_ScaleBias.m[10] = 0i64;
  *(_QWORD *)&this->m_ScaleBias.m[12] = 0i64;
  *(_QWORD *)&this->m_ScaleBias.m[14] = 0i64;
  memset(this->m_ShadowViewMatrix, 0, sizeof(this->m_ShadowViewMatrix));
  memset(this->m_ShadowProjMatrix, 0, sizeof(this->m_ShadowProjMatrix));
  memset(this->m_ShadowViewProjMatrix, 0, sizeof(this->m_ShadowViewProjMatrix));
  memset(this->m_ShadowViewProjBiasMatrix, 0, sizeof(this->m_ShadowViewProjBiasMatrix));
  OGLLightManager::clear(this);
}

// attributes: thunk
void __fastcall OGLLight::~OGLLight(OGLLight *this)
{
  OGLLight::finalize(this);
}

void __fastcall OGLLightManager::~OGLLightManager(OGLLightManager *this)
{
  OGLLightManager::deleteAllLights(this);
  OGLLightManager::clear(this);
}

__int64 __fastcall OGLLightManager::addLight(OGLLightManager *this, const OGLLight *const srcLight)
{
  OGLLightNode *m_pLightNodeList; // rcx
  __int64 v6; // rcx
  OGLLightNode *v7; // r8
  __int64 v8; // rcx
  OGLLightNode *v9; // rax
  OGLLight *v10; // [rsp+38h] [rbp+10h]

  if ( !srcLight )
    return 0xFFFFFFFFi64;
  if ( !this->m_pLightNodeList )
  {
    OGLLightManager::initList(this);
    m_pLightNodeList = this->m_pLightNodeList;
    *(_OWORD *)&m_pLightNodeList->m_light.m_nId = *(_OWORD *)&srcLight->m_nId;
    *(_OWORD *)&m_pLightNodeList->m_light.m_DecayRate = *(_OWORD *)&srcLight->m_DecayRate;
    *(_OWORD *)&m_pLightNodeList->m_light.m_fAmbient[3] = *(_OWORD *)&srcLight->m_fAmbient[3];
    *(_OWORD *)&m_pLightNodeList->m_light.m_fDiffuse[3] = *(_OWORD *)&srcLight->m_fDiffuse[3];
    *(_OWORD *)&m_pLightNodeList->m_light.m_fSpecular[3] = *(_OWORD *)&srcLight->m_fSpecular[3];
    *(_OWORD *)&m_pLightNodeList->m_light.m_fPosition[3] = *(_OWORD *)&srcLight->m_fPosition[3];
    *(_OWORD *)m_pLightNodeList->m_light.m_fDirection = *(_OWORD *)srcLight->m_fDirection;
    *(_OWORD *)&m_pLightNodeList->m_light.m_fEyePosition[1] = *(_OWORD *)&srcLight->m_fEyePosition[1];
    *(_OWORD *)&m_pLightNodeList->m_light.m_fPenumbraRad = *(_OWORD *)&srcLight->m_fPenumbraRad;
    *(_QWORD *)&m_pLightNodeList->m_light.m_fLinearAttenuation = *(_QWORD *)&srcLight->m_fLinearAttenuation;
    *(_DWORD *)&m_pLightNodeList->m_light.m_bCastsShadows = *(_DWORD *)&srcLight->m_bCastsShadows;
    return this->m_pLightNodeList->m_light.m_nId;
  }
  v10 = (OGLLight *)operator new(0x128ui64);
  OGLLight::initialize(v10, 0);
  *(_QWORD *)(v6 + 156) = 0i64;
  *(_QWORD *)(v6 + 164) = 0i64;
  *(_QWORD *)(v6 + 172) = 0i64;
  *(_QWORD *)(v6 + 180) = 0i64;
  *(_QWORD *)(v6 + 188) = 0i64;
  *(_QWORD *)(v6 + 196) = 0i64;
  *(_QWORD *)(v6 + 204) = 0i64;
  *(_QWORD *)(v6 + 212) = 0i64;
  *(_QWORD *)(v6 + 220) = 0i64;
  *(_QWORD *)(v6 + 228) = 0i64;
  *(_QWORD *)(v6 + 236) = 0i64;
  *(_QWORD *)(v6 + 244) = 0i64;
  *(_QWORD *)(v6 + 252) = 0i64;
  *(_QWORD *)(v6 + 260) = 0i64;
  *(_QWORD *)(v6 + 268) = 0i64;
  *(_QWORD *)(v6 + 276) = 0i64;
  OGLLight::initialize((OGLLight *)v6, this->m_nextLightId);
  *(_OWORD *)v8 = *(_OWORD *)&srcLight->m_nId;
  *(_OWORD *)(v8 + 16) = *(_OWORD *)&srcLight->m_DecayRate;
  *(_OWORD *)(v8 + 32) = *(_OWORD *)&srcLight->m_fAmbient[3];
  *(_OWORD *)(v8 + 48) = *(_OWORD *)&srcLight->m_fDiffuse[3];
  *(_OWORD *)(v8 + 64) = *(_OWORD *)&srcLight->m_fSpecular[3];
  *(_OWORD *)(v8 + 80) = *(_OWORD *)&srcLight->m_fPosition[3];
  *(_OWORD *)(v8 + 96) = *(_OWORD *)srcLight->m_fDirection;
  *(_OWORD *)(v8 + 112) = *(_OWORD *)&srcLight->m_fEyePosition[1];
  *(_OWORD *)(v8 + 128) = *(_OWORD *)&srcLight->m_fPenumbraRad;
  *(_QWORD *)(v8 + 144) = *(_QWORD *)&srcLight->m_fLinearAttenuation;
  *(_DWORD *)(v8 + 152) = *(_DWORD *)&srcLight->m_bCastsShadows;
  *(_QWORD *)(v8 + 288) = 0i64;
  *(_QWORD *)(v8 + 156) = 1065353216i64;
  *(_DWORD *)(v8 + 172) = 0;
  *(_QWORD *)(v8 + 188) = 0i64;
  *(_QWORD *)(v8 + 204) = 0i64;
  *(_QWORD *)(v8 + 176) = 1065353216i64;
  *(_QWORD *)(v8 + 164) = 0i64;
  *(_QWORD *)(v8 + 196) = 1065353216i64;
  *(_DWORD *)(v8 + 212) = 0;
  *(_DWORD *)(v8 + 184) = 0;
  *(_DWORD *)(v8 + 216) = 1065353216;
  *(_QWORD *)(v8 + 220) = 1065353216i64;
  *(_DWORD *)(v8 + 236) = 0;
  *(_QWORD *)(v8 + 252) = 0i64;
  *(_QWORD *)(v8 + 268) = 0i64;
  *(_QWORD *)(v8 + 240) = 1065353216i64;
  *(_QWORD *)(v8 + 228) = 0i64;
  *(_QWORD *)(v8 + 260) = 1065353216i64;
  *(_DWORD *)(v8 + 276) = 0;
  *(_DWORD *)(v8 + 248) = 0;
  *(_DWORD *)(v8 + 280) = 1065353216;
  ++this->m_lightCount;
  ++this->m_nextLightId;
  v9 = this->m_pLightNodeList;
  if ( !v9 )
    return 0xFFFFFFFFi64;
  while ( v9->next )
    v9 = v9->next;
  v9->next = v7;
  return (unsigned int)v7->m_light.m_nId;
}

int __fastcall OGLLightManager::addLight(OGLLightManager *this)
{
  __int64 v3; // rcx
  __int64 v4; // r8
  OGLLightNode *m_pLightNodeList; // rax
  OGLLight *v6; // [rsp+30h] [rbp+8h]

  if ( !this->m_pLightNodeList )
    return OGLLightManager::initList(this);
  v6 = (OGLLight *)operator new(0x128ui64);
  OGLLight::initialize(v6, 0);
  *(_QWORD *)(v3 + 156) = 0i64;
  *(_QWORD *)(v3 + 164) = 0i64;
  *(_QWORD *)(v3 + 172) = 0i64;
  *(_QWORD *)(v3 + 180) = 0i64;
  *(_QWORD *)(v3 + 188) = 0i64;
  *(_QWORD *)(v3 + 196) = 0i64;
  *(_QWORD *)(v3 + 204) = 0i64;
  *(_QWORD *)(v3 + 212) = 0i64;
  *(_QWORD *)(v3 + 220) = 0i64;
  *(_QWORD *)(v3 + 228) = 0i64;
  *(_QWORD *)(v3 + 236) = 0i64;
  *(_QWORD *)(v3 + 244) = 0i64;
  *(_QWORD *)(v3 + 252) = 0i64;
  *(_QWORD *)(v3 + 260) = 0i64;
  *(_QWORD *)(v3 + 268) = 0i64;
  *(_QWORD *)(v3 + 276) = 0i64;
  OGLLight::initialize((OGLLight *)v3, this->m_nextLightId);
  *(_QWORD *)(v4 + 288) = 0i64;
  *(_QWORD *)(v4 + 156) = 1065353216i64;
  *(_DWORD *)(v4 + 172) = 0;
  *(_QWORD *)(v4 + 188) = 0i64;
  *(_QWORD *)(v4 + 204) = 0i64;
  *(_QWORD *)(v4 + 176) = 1065353216i64;
  *(_QWORD *)(v4 + 164) = 0i64;
  *(_QWORD *)(v4 + 196) = 1065353216i64;
  *(_DWORD *)(v4 + 212) = 0;
  *(_DWORD *)(v4 + 184) = 0;
  *(_DWORD *)(v4 + 216) = 1065353216;
  *(_QWORD *)(v4 + 220) = 1065353216i64;
  *(_DWORD *)(v4 + 236) = 0;
  *(_QWORD *)(v4 + 252) = 0i64;
  *(_QWORD *)(v4 + 268) = 0i64;
  *(_QWORD *)(v4 + 240) = 1065353216i64;
  *(_QWORD *)(v4 + 228) = 0i64;
  *(_QWORD *)(v4 + 260) = 1065353216i64;
  *(_DWORD *)(v4 + 276) = 0;
  *(_DWORD *)(v4 + 248) = 0;
  *(_DWORD *)(v4 + 280) = 1065353216;
  ++this->m_lightCount;
  ++this->m_nextLightId;
  m_pLightNodeList = this->m_pLightNodeList;
  if ( !m_pLightNodeList )
    return -1;
  while ( m_pLightNodeList->next )
    m_pLightNodeList = m_pLightNodeList->next;
  m_pLightNodeList->next = (OGLLightNode *)v4;
  return *(_DWORD *)v4;
}

void __fastcall OGLLightManager::calcShadowViewProjBiasMatrix(OGLLightManager *this, int index)
{
  OGLLightManager *v3; // rax
  OGLLightManager *v4; // r8
  OGLMatrix *v5; // r10
  __int64 v6; // r9
  char *v7; // rcx
  OGLMatrix *v8; // r10
  OGLMatrix *v9; // rcx
  OGLMatrix *v10; // r10

  if ( index >= 2 )
    v3 = this;
  else
    v3 = (OGLLightManager *)((char *)this + 64 * (__int64)index);
  if ( index >= 2 )
    v4 = this;
  else
    v4 = (OGLLightManager *)((char *)this + 64 * (__int64)index);
  v5 = &this->m_ShadowViewProjMatrix[(__int64)index];
  *(_QWORD *)v5->m = 1065353216i64;
  v5->m[4] = 0.0;
  *(_QWORD *)&v5->m[8] = 0i64;
  *(_QWORD *)&v5->m[12] = 0i64;
  *(_QWORD *)&v5->m[5] = 1065353216i64;
  *(_QWORD *)&v5->m[2] = 0i64;
  *(_QWORD *)&v5->m[10] = 1065353216i64;
  v5->m[14] = 0.0;
  v5->m[7] = 0.0;
  v5->m[15] = 1.0;
  OGLMatrix::multiply(v5, v3->m_ShadowViewMatrix, v4->m_ShadowProjMatrix);
  v7 = (char *)this->m_ShadowViewProjBiasMatrix + v6;
  *(_QWORD *)v7 = 1065353216i64;
  *((_DWORD *)v7 + 4) = 0;
  *((_QWORD *)v7 + 4) = 0i64;
  *((_QWORD *)v7 + 6) = 0i64;
  *(_QWORD *)(v7 + 20) = 1065353216i64;
  *((_QWORD *)v7 + 1) = 0i64;
  *((_QWORD *)v7 + 5) = 1065353216i64;
  *((_DWORD *)v7 + 14) = 0;
  *((_DWORD *)v7 + 7) = 0;
  *((_DWORD *)v7 + 15) = 1065353216;
  OGLMatrix::multiply((OGLMatrix *)v7, v8, &this->m_ScaleBias);
  OGLMatrix::transpose(v9);
  OGLMatrix::transpose(v10);
}

void __fastcall OGLLightManager::clear(OGLLightManager *this)
{
  *(_QWORD *)&this->m_activeLightCount = 0i64;
  this->m_lightCount = 0;
  *(_QWORD *)this->m_ScaleBias.m = 1065353216i64;
  this->m_ScaleBias.m[4] = 0.0;
  *(_QWORD *)&this->m_ScaleBias.m[8] = 0i64;
  *(_QWORD *)&this->m_ScaleBias.m[12] = 0i64;
  *(_QWORD *)&this->m_ScaleBias.m[5] = 1065353216i64;
  *(_QWORD *)&this->m_ScaleBias.m[2] = 0i64;
  *(_QWORD *)&this->m_ScaleBias.m[10] = 1065353216i64;
  this->m_ScaleBias.m[14] = 0.0;
  this->m_ScaleBias.m[7] = 0.0;
  this->m_ScaleBias.m[15] = 1.0;
  this->m_pLightNodeList = 0i64;
  this->m_RimColour[0] = 1.0;
  this->m_RimColour[1] = 1.0;
  this->m_RimColour[2] = 1.0;
  this->m_RimStart = 0.5;
  this->m_RimEnd = 1.0;
  this->m_RimMultiplier = 1.0;
  this->m_GroundShadowColour[0] = 1.0;
  this->m_GroundShadowColour[1] = 0.40000001;
  this->m_GroundShadowColour[2] = 0.40000001;
  this->m_GroundShadowColIntensity = 1.0;
  this->m_BodySelfShadowColour[0] = 1.0;
  this->m_BodySelfShadowColour[1] = 0.40000001;
  this->m_BodySelfShadowColour[2] = 0.40000001;
  this->m_BodySelfShadowColIntensity = 1.0;
  this->m_SkinSelfShadowColour[0] = 1.0;
  this->m_SkinSelfShadowColour[1] = 0.40000001;
  this->m_SkinSelfShadowColour[2] = 0.40000001;
  this->m_SkinSelfShadowColIntensity = 1.0;
  this->m_BodySelfShadowBias = 0.012;
  *(_QWORD *)&this->m_BodySelfShadowMaxStrength = 1064346583i64;
  this->m_SkinSelfShadowBias = 0.012;
  *(_QWORD *)&this->m_SkinSelfShadowMaxStrength = 1064346583i64;
  this->m_GroundShadowMaxStrength = 0.80000001;
  *(_QWORD *)&this->m_GroundShadowVisibility = 1048576000i64;
  *(_DWORD *)&this->m_ShadowFXAA = 0;
  this->m_BodySelfShadowVisibility = 0.25;
  this->m_SkinSelfShadowVisibility = 0.25;
}

void __fastcall OGLLightManager::copy(OGLLightManager *this, const OGLLightManager *const srcLM)
{
  OGLLightNode *i; // rbx

  if ( srcLM )
  {
    for ( i = srcLM->m_pLightNodeList; i; i = i->next )
      OGLLightManager::addLight(this, &i->m_light);
    this->m_lightCount = srcLM->m_lightCount;
    this->m_activeLightCount = srcLM->m_activeLightCount;
    this->m_nextLightId = srcLM->m_nextLightId;
    *(_QWORD *)this->m_RimColour = *(_QWORD *)srcLM->m_RimColour;
    this->m_RimColour[2] = srcLM->m_RimColour[2];
    this->m_RimStart = srcLM->m_RimStart;
    this->m_RimEnd = srcLM->m_RimEnd;
    this->m_RimMultiplier = srcLM->m_RimMultiplier;
    *(_QWORD *)this->m_GroundShadowColour = *(_QWORD *)srcLM->m_GroundShadowColour;
    this->m_GroundShadowColour[2] = srcLM->m_GroundShadowColour[2];
    this->m_GroundShadowColIntensity = srcLM->m_GroundShadowColIntensity;
    *(_QWORD *)this->m_BodySelfShadowColour = *(_QWORD *)srcLM->m_BodySelfShadowColour;
    this->m_BodySelfShadowColour[2] = srcLM->m_BodySelfShadowColour[2];
    this->m_BodySelfShadowColIntensity = srcLM->m_BodySelfShadowColIntensity;
    this->m_BodySelfShadowBias = srcLM->m_BodySelfShadowBias;
    *(_QWORD *)this->m_SkinSelfShadowColour = *(_QWORD *)srcLM->m_SkinSelfShadowColour;
    this->m_SkinSelfShadowColour[2] = srcLM->m_SkinSelfShadowColour[2];
    this->m_SkinSelfShadowColIntensity = srcLM->m_SkinSelfShadowColIntensity;
    this->m_SkinSelfShadowBias = srcLM->m_SkinSelfShadowBias;
    this->m_GroundShadowBias = srcLM->m_GroundShadowBias;
    this->m_BodySelfShadowMaxStrength = srcLM->m_BodySelfShadowMaxStrength;
    this->m_SkinSelfShadowMaxStrength = srcLM->m_SkinSelfShadowMaxStrength;
    this->m_GroundShadowMaxStrength = srcLM->m_GroundShadowMaxStrength;
    this->m_ShadowBlur = srcLM->m_ShadowBlur;
    this->m_ShadowFXAA = srcLM->m_ShadowFXAA;
    this->m_ShadowUseSlope = srcLM->m_ShadowUseSlope;
    this->m_BodySelfShadowVisibility = srcLM->m_BodySelfShadowVisibility;
    this->m_SkinSelfShadowVisibility = srcLM->m_SkinSelfShadowVisibility;
    this->m_GroundShadowVisibility = srcLM->m_GroundShadowVisibility;
    this->m_BodySelfShadowHardEdge = srcLM->m_BodySelfShadowHardEdge;
    this->m_SkinSelfShadowHardEdge = srcLM->m_SkinSelfShadowHardEdge;
    this->m_moveLight = srcLM->m_moveLight;
    this->m_mirrorLight = srcLM->m_mirrorLight;
    *(_OWORD *)this->m_ScaleBias.m = *(_OWORD *)srcLM->m_ScaleBias.m;
    *(_OWORD *)&this->m_ScaleBias.m[4] = *(_OWORD *)&srcLM->m_ScaleBias.m[4];
    *(_OWORD *)&this->m_ScaleBias.m[8] = *(_OWORD *)&srcLM->m_ScaleBias.m[8];
    *(_OWORD *)&this->m_ScaleBias.m[12] = *(_OWORD *)&srcLM->m_ScaleBias.m[12];
    *(_OWORD *)this->m_ShadowViewMatrix[0].m = *(_OWORD *)srcLM->m_ShadowViewMatrix[0].m;
    *(_OWORD *)&this->m_ShadowViewMatrix[0].m[4] = *(_OWORD *)&srcLM->m_ShadowViewMatrix[0].m[4];
    *(_OWORD *)&this->m_ShadowViewMatrix[0].m[8] = *(_OWORD *)&srcLM->m_ShadowViewMatrix[0].m[8];
    *(_OWORD *)&this->m_ShadowViewMatrix[0].m[12] = *(_OWORD *)&srcLM->m_ShadowViewMatrix[0].m[12];
    *(_OWORD *)this->m_ShadowViewMatrix[1].m = *(_OWORD *)srcLM->m_ShadowViewMatrix[1].m;
    *(_OWORD *)&this->m_ShadowViewMatrix[1].m[4] = *(_OWORD *)&srcLM->m_ShadowViewMatrix[1].m[4];
    *(_OWORD *)&this->m_ShadowViewMatrix[1].m[8] = *(_OWORD *)&srcLM->m_ShadowViewMatrix[1].m[8];
    *(_OWORD *)&this->m_ShadowViewMatrix[1].m[12] = *(_OWORD *)&srcLM->m_ShadowViewMatrix[1].m[12];
    *(_OWORD *)this->m_ShadowProjMatrix[0].m = *(_OWORD *)srcLM->m_ShadowProjMatrix[0].m;
    *(_OWORD *)&this->m_ShadowProjMatrix[0].m[4] = *(_OWORD *)&srcLM->m_ShadowProjMatrix[0].m[4];
    *(_OWORD *)&this->m_ShadowProjMatrix[0].m[8] = *(_OWORD *)&srcLM->m_ShadowProjMatrix[0].m[8];
    *(_OWORD *)&this->m_ShadowProjMatrix[0].m[12] = *(_OWORD *)&srcLM->m_ShadowProjMatrix[0].m[12];
    *(_OWORD *)this->m_ShadowProjMatrix[1].m = *(_OWORD *)srcLM->m_ShadowProjMatrix[1].m;
    *(_OWORD *)&this->m_ShadowProjMatrix[1].m[4] = *(_OWORD *)&srcLM->m_ShadowProjMatrix[1].m[4];
    *(_OWORD *)&this->m_ShadowProjMatrix[1].m[8] = *(_OWORD *)&srcLM->m_ShadowProjMatrix[1].m[8];
    *(_OWORD *)&this->m_ShadowProjMatrix[1].m[12] = *(_OWORD *)&srcLM->m_ShadowProjMatrix[1].m[12];
  }
}

bool __fastcall OGLLightManager::deleteAllLights(OGLLightManager *this)
{
  int i; // esi
  OGLLightNode *m_pLightNodeList; // rbx
  OGLLightNode *v4; // rbp
  void *v5; // rcx
  void *v6; // rcx
  __int64 v7; // rax
  OGLLightNode *next; // rcx
  OGLLightNode *v9; // rbp
  void *v10; // rcx

  for ( i = this->m_lightCount - 1; i >= 0; --i )
  {
    m_pLightNodeList = this->m_pLightNodeList;
    if ( m_pLightNodeList && i < this->m_lightCount )
    {
      if ( i )
      {
        v7 = (unsigned int)(i - 1);
        if ( i - 1 > 0 )
        {
          do
          {
            m_pLightNodeList = m_pLightNodeList->next;
            --v7;
          }
          while ( v7 );
        }
        if ( m_pLightNodeList->m_light.m_bOn )
          --this->m_activeLightCount;
        next = m_pLightNodeList->next;
        v9 = next->next;
        if ( next )
        {
          OGLLight::finalize(&next->m_light);
          operator delete(v10, 0x128ui64);
          m_pLightNodeList->next = 0i64;
        }
        --this->m_lightCount;
        m_pLightNodeList->next = v9;
      }
      else
      {
        v4 = m_pLightNodeList->next;
        if ( v4 )
        {
          if ( m_pLightNodeList->m_light.m_bOn )
            --this->m_activeLightCount;
          OGLLight::finalize(&m_pLightNodeList->m_light);
          operator delete(v6, 0x128ui64);
          --this->m_lightCount;
          this->m_pLightNodeList = v4;
        }
        else
        {
          OGLLight::finalize(&this->m_pLightNodeList->m_light);
          operator delete(v5, 0x128ui64);
          --this->m_lightCount;
          this->m_pLightNodeList = 0i64;
          this->m_activeLightCount = 0;
        }
      }
    }
  }
  return this->m_lightCount == 0;
}

void __fastcall OGLLight::finalize(OGLLight *this)
{
  *(_QWORD *)&this->m_nType = 0i64;
  *(_QWORD *)&this->m_DecayRate = 0i64;
  *(_QWORD *)&this->m_fAmbient[1] = 0i64;
  this->m_fAmbient[3] = 1.0;
  this->m_fDiffuse[0] = 1.0;
  this->m_fDiffuse[1] = 1.0;
  this->m_fDiffuse[2] = 1.0;
  this->m_fDiffuse[3] = 1.0;
  this->m_fSpecular[0] = 0.2;
  this->m_fSpecular[1] = 0.2;
  this->m_fSpecular[2] = 0.2;
  *(_QWORD *)&this->m_fSpecular[3] = 1065353216i64;
  this->m_fPosition[1] = 0.0;
  *(_QWORD *)&this->m_fPosition[2] = 1065353216i64;
  *(_QWORD *)this->m_fLocalOffset = 0i64;
  *(_QWORD *)&this->m_fLocalOffset[2] = 0i64;
  this->m_fDirection[1] = 0.0;
  this->m_fDirection[2] = -1.0;
  *(_QWORD *)this->m_fEyePosition = 0i64;
  *(_QWORD *)&this->m_fEyePosition[2] = 0i64;
  *(_QWORD *)&this->m_fConeAngleRad = 1078530000i64;
  this->m_fShininess = 1.0;
  this->m_fIntensity = 1.0;
  *(_QWORD *)&this->m_fConstantAttenuation = 1065353216i64;
  this->m_fQuadraticAttenuation = 0.0;
  *(_WORD *)&this->m_bCastsShadows = 256;
  this->m_bEmitSpecular = 1;
  this->m_bOn = 0;
}

OGLLightNode *__fastcall OGLLightManager::getLightById(OGLLightManager *this, int lightId)
{
  OGLLightNode *result; // rax

  result = this->m_pLightNodeList;
  if ( !result )
    return 0i64;
  if ( lightId != -1 )
  {
    while ( result->m_light.m_nId != lightId )
    {
      result = result->next;
      if ( !result )
        return 0i64;
    }
  }
  return result;
}

__int64 __fastcall OGLLightManager::initList(OGLLightManager *this)
{
  OGLLightNode *v2; // rdi
  __int64 v3; // rcx
  int v4; // edx
  OGLMatrix *p_m_ProjLight; // rcx
  __int64 v6; // r8
  OGLMatrix *p_m_ViewLight; // rax
  OGLLightNode *m_pLightNodeList; // rax

  v2 = (OGLLightNode *)operator new(0x128ui64);
  OGLLight::initialize(&v2->m_light, 0);
  memset((void *)(v3 + 156), v4, 0x80ui64);
  this->m_pLightNodeList = v2;
  if ( !v2 )
    return 0xFFFFFFFFi64;
  v2->next = 0i64;
  OGLLight::initialize(&this->m_pLightNodeList->m_light, this->m_nextLightId);
  p_m_ProjLight = &this->m_pLightNodeList->m_ProjLight;
  *(_QWORD *)p_m_ProjLight->m = 1065353216i64;
  LODWORD(p_m_ProjLight->m[4]) = v6;
  *(_QWORD *)&p_m_ProjLight->m[8] = v6;
  *(_QWORD *)&p_m_ProjLight->m[12] = v6;
  *(_QWORD *)&p_m_ProjLight->m[5] = 1065353216i64;
  *(_QWORD *)&p_m_ProjLight->m[2] = v6;
  *(_QWORD *)&p_m_ProjLight->m[10] = 1065353216i64;
  LODWORD(p_m_ProjLight->m[14]) = v6;
  LODWORD(p_m_ProjLight->m[7]) = v6;
  p_m_ProjLight->m[15] = 1.0;
  p_m_ViewLight = &this->m_pLightNodeList->m_ViewLight;
  *(_QWORD *)p_m_ViewLight->m = 1065353216i64;
  LODWORD(p_m_ViewLight->m[4]) = v6;
  *(_QWORD *)&p_m_ViewLight->m[8] = v6;
  *(_QWORD *)&p_m_ViewLight->m[12] = v6;
  *(_QWORD *)&p_m_ViewLight->m[5] = 1065353216i64;
  *(_QWORD *)&p_m_ViewLight->m[2] = v6;
  *(_QWORD *)&p_m_ViewLight->m[10] = 1065353216i64;
  LODWORD(p_m_ViewLight->m[14]) = v6;
  LODWORD(p_m_ViewLight->m[7]) = v6;
  p_m_ViewLight->m[15] = 1.0;
  ++this->m_nextLightId;
  m_pLightNodeList = this->m_pLightNodeList;
  ++this->m_lightCount;
  return (unsigned int)m_pLightNodeList->m_light.m_nId;
}

void __fastcall OGLLight::initialize(OGLLight *this, int id)
{
  this->m_nId = id;
  *(_QWORD *)&this->m_nType = 0i64;
  *(_QWORD *)&this->m_DecayRate = 0i64;
  *(_QWORD *)&this->m_fAmbient[1] = 0i64;
  this->m_fAmbient[3] = 1.0;
  this->m_fDiffuse[0] = 1.0;
  this->m_fDiffuse[1] = 1.0;
  this->m_fDiffuse[2] = 1.0;
  this->m_fDiffuse[3] = 1.0;
  this->m_fSpecular[0] = 0.2;
  this->m_fSpecular[1] = 0.2;
  this->m_fSpecular[2] = 0.2;
  *(_QWORD *)&this->m_fSpecular[3] = 1065353216i64;
  this->m_fPosition[1] = 0.0;
  *(_QWORD *)&this->m_fPosition[2] = 1065353216i64;
  *(_QWORD *)this->m_fLocalOffset = 0i64;
  *(_QWORD *)&this->m_fLocalOffset[2] = 0i64;
  this->m_fDirection[1] = 0.0;
  this->m_fDirection[2] = -1.0;
  *(_QWORD *)this->m_fEyePosition = 0i64;
  *(_QWORD *)&this->m_fEyePosition[2] = 0i64;
  *(_QWORD *)&this->m_fConeAngleRad = 1078530000i64;
  this->m_fShininess = 1.0;
  this->m_fIntensity = 1.0;
  *(_QWORD *)&this->m_fConstantAttenuation = 1065353216i64;
  this->m_fQuadraticAttenuation = 0.0;
  this->m_bOn = 0;
  *(_WORD *)&this->m_bCastsShadows = 256;
  this->m_bEmitSpecular = 1;
}

