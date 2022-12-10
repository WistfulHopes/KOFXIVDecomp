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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmaterial.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmateriallight.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14088956A
OGLMaterial::OGLMaterial(); // 0x14005ED10
OGLMaterial::~OGLMaterial(); // 0x14005ED80
void OGLMaterial::clear(); // 0x14005EE40
void OGLMaterial::finalize(); // 0x14005F070
unsigned char OGLMaterial::loadFloat(OGLInputStream * format); // 0x14005F120
unsigned char OGLMaterial::loadMemcpy(OGLInputStream * format); // 0x14005F8E0
void OGLMaterial::copy(OGLMaterial * material, long indexDstType, long indexSrcType); // 0x14005FA80
void OGLMaterial::prepShaderUniforms(const OGLLight * pWorldLight, const long bSkipSelfShadowLightId, const unsigned char bLowAccSelfShadow, const unsigned char bReceiveShadows, const unsigned char bCreateShadow); // 0x14005FCF0//decompilation failure at 14088956A!
void __fastcall OGLMaterial::OGLMaterial(OGLMaterial *this)
{
  OGLLightManager *v2; // rax
  OGLLightManager *v3; // [rsp+40h] [rbp+8h]

  OGLMaterialLight::initialize(&this->m_MaterialLight);
  this->m_psIndex = 0i64;
  this->m_pssIndex = 0i64;
  this->m_cName = 0i64;
  this->m_bNewFormat = 0;
  v3 = (OGLLightManager *)operator new(0x2D0ui64);
  OGLLightManager::OGLLightManager(v3);
  this->m_pLightManager = v2;
  OGLMaterial::clear(this);
}

void __fastcall OGLMaterial::~OGLMaterial(OGLMaterial *this)
{
  OGLMaterial::finalize(this);
  this->m_MaterialLight.m_uiAttrFlg = 0;
  this->m_MaterialLight.m_fAmbient[0] = 0.2;
  this->m_MaterialLight.m_fAmbient[1] = 0.2;
  this->m_MaterialLight.m_fAmbient[2] = 0.2;
  *(_QWORD *)&this->m_MaterialLight.m_fAmbient[3] = 1065353216i64;
  this->m_MaterialLight.m_fDiffuse[0] = 0.80000001;
  this->m_MaterialLight.m_fDiffuse[1] = 0.80000001;
  this->m_MaterialLight.m_fDiffuse[2] = 0.80000001;
  *(_QWORD *)&this->m_MaterialLight.m_fDiffuse[3] = 1065353216i64;
  *(_QWORD *)this->m_MaterialLight.m_fSpecular = 0i64;
  this->m_MaterialLight.m_fSpecular[2] = 0.0;
  *(_QWORD *)&this->m_MaterialLight.m_fSpecular[3] = 1065353216i64;
  *(_QWORD *)this->m_MaterialLight.m_fEmission = 0i64;
  this->m_MaterialLight.m_fEmission[2] = 0.0;
  *(_QWORD *)&this->m_MaterialLight.m_fEmission[3] = 1065353216i64;
  *(_QWORD *)this->m_MaterialLight.m_fBump = 0i64;
  this->m_MaterialLight.m_fBump[2] = 0.0;
  *(_QWORD *)&this->m_MaterialLight.m_fBump[3] = 1065353216i64;
  *(_QWORD *)&this->m_MaterialLight.m_fShininess = 0i64;
  *(_QWORD *)&this->m_MaterialLight.m_fReflection[1] = 0i64;
  *(_QWORD *)&this->m_MaterialLight.m_fReflection[3] = 1065353216i64;
  this->m_MaterialLight.m_fTransparentFactor = 0.0;
}

void __fastcall OGLMaterial::clear(OGLMaterial *this)
{
  this->m_cTextureIndex = 0;
  this->m_Color[0] = 1.0;
  this->m_Color[1] = 1.0;
  this->m_Color[2] = 1.0;
  this->m_Color[3] = 1.0;
  *(_QWORD *)&this->m_alpha = 1065353216i64;
  *(_QWORD *)&this->m_ucEffectFlg = 0i64;
  this->m_usIndexCount = 0;
  this->m_bUseLightMaterial = 0;
  this->work0 = 0i64;
  this->work1 = 0i64;
  this->work2 = 0i64;
  this->work3 = 0i64;
  this->m_pfIndexBuffer = 0i64;
  this->m_shaderType = 58;
  this->m_hairLength = 0.25;
  this->m_hairLayers = 40;
  this->m_hairforceExp = 2.0;
  this->m_hairforceStrength = 0.25;
  this->m_FresnelPower = 5.0;
  *(_QWORD *)&this->m_FresnelScale = 1065353216i64;
  *(_QWORD *)this->m_HemiLightSkyCol = 0i64;
  *(_QWORD *)&this->m_HemiLightSkyCol[2] = 0i64;
  *(_QWORD *)&this->m_HemiLightGroundCol[1] = 0i64;
  this->m_HemiLightIntensity = 0.0;
  this->m_UseDiffuseColour2 = 0;
  *(_QWORD *)this->m_DiffuseColour2 = 0i64;
  *(_QWORD *)&this->m_DiffuseColour2[2] = 0i64;
  this->m_SpecularMultiplier = 1.0;
  *(_QWORD *)&this->m_NormalHeight = 1065353216i64;
  *(_QWORD *)&this->m_RimLightMax = 1065353216i64;
  *(_QWORD *)this->m_RimLightColour = 0i64;
  *(_QWORD *)&this->m_RimLightColour[2] = 0i64;
  *(_QWORD *)&this->m_ReflectionIntensity = 0i64;
  *(_QWORD *)this->m_ReflectionColour = 0i64;
  this->m_ReflectionColour[2] = 0.0;
  this->m_useAnisotropicDirection = 0;
  *(_QWORD *)this->m_anisotropicSpread = 0i64;
  *(_QWORD *)&this->m_alphaPan[1] = 0i64;
  *(_QWORD *)&this->m_emissiveMultiplier = 1065353216i64;
  *(_QWORD *)&this->m_DiffuseFunction = 0i64;
  this->m_TranslucencyMultiplier = 0.0;
  this->m_TranslucencyDistortion = 0.2;
  *(_QWORD *)&this->m_TranslucencyPower = 1043005964i64;
  this->m_TranslucencyOuterCol[0] = 0.93699998;
  this->m_TranslucencyOuterCol[1] = 0.79303998;
  this->m_TranslucencyOuterCol[2] = 0.69525403;
  this->m_TranslucencyMiddleCol[0] = 0.63300002;
  this->m_TranslucencyMiddleCol[1] = 0.153339;
  this->m_TranslucencyMiddleCol[2] = 0.099381;
  this->m_TranslucencyInnerCol[0] = 0.142855;
  this->m_TranslucencyInnerCol[1] = 0.090699598;
  this->m_TranslucencyInnerCol[2] = 0.090699598;
  this->m_multiUVLerpBlend = 0.0;
  *(_QWORD *)&this->m_multiUVAdditionalMul = 1065353216i64;
  *(_QWORD *)&this->m_texturePan1[1] = 0i64;
  *(_QWORD *)&this->m_texturePan2[1] = 0i64;
  *(_QWORD *)&this->m_vertexColMult = 0i64;
  *(_QWORD *)&this->m_vertexColAdj[1] = 0i64;
  *(_QWORD *)this->m_vertexCol1Adj = 0i64;
  this->m_vertexCol1Adj[2] = 0.0;
  strcpy((char *)&this->m_causticLerp, "млл>");
  *(_QWORD *)this->m_fillColour = 0i64;
  *(_QWORD *)&this->m_fillColour[2] = 0i64;
  this->m_fillColourType = 0;
  *(_WORD *)&this->m_useMatcap = 0;
  this->m_useEmissiveAlpha = 0;
  *(_QWORD *)&this->m_matcapVal = 0i64;
  this->m_cNameLength = 0;
  this->m_iRenderNo = -1;
}

void __fastcall OGLMaterial::copy(
        OGLMaterial *this,
        OGLMaterial *material,
        unsigned __int64 indexDstType,
        int indexSrcType)
{
  OGLMaterial *v4; // rdi
  __int64 m_usIndexCount; // rax
  void *v7; // rax
  __int64 v8; // r8
  void *v9; // rax
  unsigned int v10; // er9
  __int64 v11; // r8
  void *v12; // rax
  __int64 v13; // r8
  unsigned __int8 *m_cName; // rcx
  __int64 v15; // rax
  unsigned __int8 *v16; // rcx

  v4 = material;
  if ( (_DWORD)indexDstType == 32 || indexSrcType != 32 )
  {
    this->m_cTextureIndex = material->m_cTextureIndex;
    *(_OWORD *)this->m_Color = *(_OWORD *)material->m_Color;
    this->m_uiBlendMode = material->m_uiBlendMode;
    this->m_ucEffectFlg = material->m_ucEffectFlg;
    this->m_usIndex = material->m_usIndex;
    m_usIndexCount = material->m_usIndexCount;
    this->m_usIndexCount = m_usIndexCount;
    if ( (_DWORD)m_usIndexCount )
    {
      if ( (_DWORD)indexDstType == 32 )
      {
        if ( indexSrcType == 32 )
        {
          if ( material->m_psIndex )
          {
            v7 = Framework::MemoryManager::allocate(
                   &Framework::GLManager::glm->allocateStaticBuffers,
                   4 * m_usIndexCount,
                   indexDstType);
            v8 = this->m_usIndexCount;
            this->m_pfIndexBuffer = v7;
            memmove(v7, v4->m_psIndex, 4 * v8);
            this->m_psIndex = (unsigned int *)this->m_pfIndexBuffer;
          }
          else
          {
            this->m_psIndex = 0i64;
            this->m_usIndexCount = 0;
          }
        }
        else if ( material->m_pssIndex )
        {
          v9 = Framework::MemoryManager::allocate(
                 &Framework::GLManager::glm->allocateStaticBuffers,
                 4 * m_usIndexCount,
                 indexDstType);
          v10 = 0;
          this->m_pfIndexBuffer = v9;
          if ( this->m_usIndexCount )
          {
            material = 0i64;
            v11 = 0i64;
            do
            {
              ++v11;
              ++v10;
              material = (OGLMaterial *)((char *)material + 4);
              *(_DWORD *)((char *)material + (unsigned __int64)this->m_psIndex - 4) = v4->m_pssIndex[v11 - 1];
            }
            while ( v10 < this->m_usIndexCount );
          }
          this->m_psIndex = (unsigned int *)this->m_pfIndexBuffer;
        }
        else
        {
          this->m_psIndex = 0i64;
          this->m_usIndexCount = 0;
        }
      }
      else if ( indexSrcType != 32 )
      {
        if ( material->m_pssIndex )
        {
          v12 = Framework::MemoryManager::allocate(
                  &Framework::GLManager::glm->allocateStaticBuffers,
                  2 * m_usIndexCount,
                  indexDstType);
          v13 = this->m_usIndexCount;
          this->m_pfIndexBuffer = v12;
          memmove(v12, v4->m_pssIndex, 2 * v13);
          this->m_pssIndex = (unsigned __int16 *)this->m_pfIndexBuffer;
        }
        else
        {
          this->m_pssIndex = 0i64;
          this->m_usIndexCount = 0;
        }
      }
    }
    this->m_iRenderNo = v4->m_iRenderNo;
    *(_OWORD *)&this->m_MaterialLight.m_uiAttrFlg = *(_OWORD *)&v4->m_MaterialLight.m_uiAttrFlg;
    *(_OWORD *)&this->m_MaterialLight.m_fAmbient[3] = *(_OWORD *)&v4->m_MaterialLight.m_fAmbient[3];
    *(_OWORD *)&this->m_MaterialLight.m_fDiffuse[2] = *(_OWORD *)&v4->m_MaterialLight.m_fDiffuse[2];
    *(_OWORD *)&this->m_MaterialLight.m_fSpecular[1] = *(_OWORD *)&v4->m_MaterialLight.m_fSpecular[1];
    *(_OWORD *)this->m_MaterialLight.m_fEmission = *(_OWORD *)v4->m_MaterialLight.m_fEmission;
    *(_OWORD *)&this->m_MaterialLight.m_fEmissionFactor = *(_OWORD *)&v4->m_MaterialLight.m_fEmissionFactor;
    *(_OWORD *)&this->m_MaterialLight.m_fNormal[3] = *(_OWORD *)&v4->m_MaterialLight.m_fNormal[3];
    *(_OWORD *)&this->m_MaterialLight.m_fBump[3] = *(_OWORD *)&v4->m_MaterialLight.m_fBump[3];
    *(_OWORD *)&this->m_MaterialLight.m_fTransparent[2] = *(_OWORD *)&v4->m_MaterialLight.m_fTransparent[2];
    *(_OWORD *)this->m_MaterialLight.m_fReflection = *(_OWORD *)v4->m_MaterialLight.m_fReflection;
    this->m_MaterialLight.m_fReflectionFactor = v4->m_MaterialLight.m_fReflectionFactor;
    this->m_bUseLightMaterial = v4->m_bUseLightMaterial;
    if ( !this->m_bNewFormat )
    {
      m_cName = this->m_cName;
      if ( m_cName )
      {
        operator delete(m_cName, (unsigned __int64)material);
        this->m_cName = 0i64;
      }
    }
    v15 = -1i64;
    this->m_bNewFormat = 1;
    v16 = v4->m_cName;
    this->m_cName = v16;
    do
      ++v15;
    while ( v16[v15] );
    this->m_cNameLength = v15;
  }
}

void __fastcall OGLMaterial::finalize(OGLMaterial *this)
{
  unsigned int *m_psIndex; // rdx
  Framework::GLManager *v2; // rdi
  unsigned __int16 *m_pssIndex; // rdx
  OGLLightManager *m_pLightManager; // rdi
  void *v6; // rcx

  m_psIndex = this->m_psIndex;
  v2 = Framework::GLManager::glm;
  if ( m_psIndex )
  {
    Framework::MemoryManager::release(&Framework::GLManager::glm->allocateStaticBuffers, m_psIndex);
    this->m_psIndex = 0i64;
    this->m_pfIndexBuffer = 0i64;
  }
  m_pssIndex = this->m_pssIndex;
  if ( m_pssIndex )
  {
    Framework::MemoryManager::release(&v2->allocateStaticBuffers, m_pssIndex);
    this->m_pssIndex = 0i64;
    this->m_pfIndexBuffer = 0i64;
  }
  m_pLightManager = this->m_pLightManager;
  if ( m_pLightManager )
  {
    OGLLightManager::deleteAllLights(this->m_pLightManager);
    OGLLightManager::clear(m_pLightManager);
    operator delete(v6, 0x2D0ui64);
    this->m_pLightManager = 0i64;
  }
  this->m_cName = 0i64;
  OGLMaterial::clear(this);
}

unsigned __int8 __fastcall OGLMaterial::loadFloat(OGLMaterial *this, OGLInputStream *format)
{
  __int64 m_uiPoint; // r9
  int v5; // er10
  int v6; // er8
  __int64 v7; // r9
  int v8; // er8
  float v9; // xmm1_4
  __int64 v10; // rdx
  float v11; // xmm0_4
  __int64 v12; // rdx
  float v13; // xmm0_4
  __int64 v14; // rdx
  float v15; // xmm0_4
  __int64 v16; // rdx
  float v17; // xmm0_4
  __int64 v18; // rdx
  float v19; // xmm0_4
  __int64 v20; // rdx
  float v21; // xmm0_4
  __int64 v22; // rdx
  float v23; // xmm0_4
  __int64 v24; // rdx
  float v25; // xmm0_4
  __int64 v26; // rdx
  float v27; // xmm0_4
  __int64 v28; // rdx
  float v29; // xmm0_4
  __int64 v30; // rdx
  float v31; // xmm0_4
  __int64 v32; // rdx
  float v33; // xmm0_4
  __int64 v34; // rdx
  float v35; // xmm0_4
  __int64 v36; // rdx
  float v37; // xmm0_4
  __int64 v38; // rdx
  float v39; // xmm0_4
  __int64 v40; // rdx
  float v41; // xmm0_4
  __int64 v42; // rdx
  float v43; // xmm0_4
  __int64 v44; // rdx
  float v45; // xmm0_4
  __int64 v46; // rdx
  float v47; // xmm0_4
  __int64 v48; // rdx
  float v49; // xmm0_4
  __int64 v50; // rdx
  float v51; // xmm0_4
  __int64 v52; // rdx
  float v53; // xmm0_4
  __int64 v54; // rdx
  float v55; // xmm0_4
  __int64 v56; // rdx
  float v57; // xmm0_4
  __int64 v58; // rdx
  float v59; // xmm0_4
  __int64 v60; // rdx
  float v61; // xmm0_4
  __int64 v62; // rdx
  float v63; // xmm0_4
  __int64 v64; // rdx
  float v65; // xmm0_4
  __int64 v66; // rdx
  float v67; // xmm0_4
  __int64 v68; // rdx
  float v69; // xmm0_4
  __int64 v70; // rdx
  float v71; // xmm0_4
  __int64 v72; // rdx
  __int64 v73; // r9
  int v74; // er8
  __int64 v75; // r8
  unsigned __int8 result; // al

  OGLMaterial::finalize(this);
  m_uiPoint = format->m_uiPoint;
  v5 = 0;
  if ( format->m_uiSize > (unsigned int)m_uiPoint )
  {
    v6 = format->m_pucData[m_uiPoint] | ((format->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((format->m_pucData[(unsigned int)(m_uiPoint + 2)] | (format->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    format->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v6 = 0;
  }
  this->m_cTextureIndex = v6;
  v7 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v7 )
  {
    v8 = format->m_pucData[v7] | ((format->m_pucData[(unsigned int)(v7 + 1)] | ((format->m_pucData[(unsigned int)(v7 + 2)] | (format->m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
    format->m_uiPoint = v7 + 4;
  }
  else
  {
    v8 = 0;
  }
  this->m_MaterialLight.m_uiAttrFlg = v8;
  v9 = 0.0;
  if ( (v8 & 1) != 0 )
  {
    v10 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v10 )
    {
      v11 = *(float *)&format->m_pucData[v10];
      format->m_uiPoint = v10 + 4;
    }
    else
    {
      v11 = 0.0;
    }
    this->m_MaterialLight.m_fAmbient[0] = v11;
    v12 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v12 )
    {
      v13 = *(float *)&format->m_pucData[v12];
      format->m_uiPoint = v12 + 4;
    }
    else
    {
      v13 = 0.0;
    }
    this->m_MaterialLight.m_fAmbient[1] = v13;
    v14 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v14 )
    {
      v15 = *(float *)&format->m_pucData[v14];
      format->m_uiPoint = v14 + 4;
    }
    else
    {
      v15 = 0.0;
    }
    this->m_MaterialLight.m_fAmbient[2] = v15;
  }
  if ( this->m_MaterialLight.m_fAmbient[0] == 0.0
    && this->m_MaterialLight.m_fAmbient[1] == 0.0
    && this->m_MaterialLight.m_fAmbient[2] == 0.0 )
  {
    this->m_MaterialLight.m_fAmbient[0] = 0.30000001;
    this->m_MaterialLight.m_fAmbient[1] = 0.30000001;
    this->m_MaterialLight.m_fAmbient[2] = 0.30000001;
  }
  this->m_MaterialLight.m_fAmbient[3] = 1.0;
  if ( (v8 & 2) != 0 )
  {
    v16 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v16 )
    {
      v17 = *(float *)&format->m_pucData[v16];
      format->m_uiPoint = v16 + 4;
    }
    else
    {
      v17 = 0.0;
    }
    this->m_MaterialLight.m_fAmbientFactor = v17;
  }
  if ( (v8 & 4) != 0 )
  {
    v18 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v18 )
    {
      v19 = *(float *)&format->m_pucData[v18];
      format->m_uiPoint = v18 + 4;
    }
    else
    {
      v19 = 0.0;
    }
    this->m_Color[0] = v19;
    v20 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v20 )
    {
      v21 = *(float *)&format->m_pucData[v20];
      format->m_uiPoint = v20 + 4;
    }
    else
    {
      v21 = 0.0;
    }
    this->m_Color[1] = v21;
    v22 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v22 )
    {
      v23 = *(float *)&format->m_pucData[v22];
      format->m_uiPoint = v22 + 4;
    }
    else
    {
      v23 = 0.0;
    }
    this->m_MaterialLight.m_fDiffuse[0] = this->m_Color[0];
    this->m_MaterialLight.m_fDiffuse[1] = this->m_Color[1];
    this->m_Color[2] = v23;
    this->m_MaterialLight.m_fDiffuse[2] = v23;
  }
  this->m_Color[3] = 1.0;
  this->m_MaterialLight.m_fDiffuse[3] = 1.0;
  if ( (v8 & 8) != 0 )
  {
    v24 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v24 )
    {
      v25 = *(float *)&format->m_pucData[v24];
      format->m_uiPoint = v24 + 4;
    }
    else
    {
      v25 = 0.0;
    }
    this->m_MaterialLight.m_fDiffuseFactor = v25;
  }
  if ( (v8 & 0x10) != 0 )
  {
    v26 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v26 )
    {
      v27 = *(float *)&format->m_pucData[v26];
      format->m_uiPoint = v26 + 4;
    }
    else
    {
      v27 = 0.0;
    }
    this->m_MaterialLight.m_fEmission[0] = v27;
    v28 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v28 )
    {
      v29 = *(float *)&format->m_pucData[v28];
      format->m_uiPoint = v28 + 4;
    }
    else
    {
      v29 = 0.0;
    }
    this->m_MaterialLight.m_fEmission[1] = v29;
    v30 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v30 )
    {
      v31 = *(float *)&format->m_pucData[v30];
      format->m_uiPoint = v30 + 4;
    }
    else
    {
      v31 = 0.0;
    }
    this->m_MaterialLight.m_fEmission[2] = v31;
  }
  this->m_MaterialLight.m_fEmission[3] = 1.0;
  if ( (v8 & 0x20) != 0 )
  {
    v32 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v32 )
    {
      v33 = *(float *)&format->m_pucData[v32];
      format->m_uiPoint = v32 + 4;
    }
    else
    {
      v33 = 0.0;
    }
    this->m_MaterialLight.m_fEmissionFactor = v33;
  }
  if ( (v8 & 0x40) != 0 )
  {
    v34 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v34 )
    {
      v35 = *(float *)&format->m_pucData[v34];
      format->m_uiPoint = v34 + 4;
    }
    else
    {
      v35 = 0.0;
    }
    this->m_MaterialLight.m_fNormal[0] = v35;
    v36 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v36 )
    {
      v37 = *(float *)&format->m_pucData[v36];
      format->m_uiPoint = v36 + 4;
    }
    else
    {
      v37 = 0.0;
    }
    this->m_MaterialLight.m_fNormal[1] = v37;
    v38 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v38 )
    {
      v39 = *(float *)&format->m_pucData[v38];
      format->m_uiPoint = v38 + 4;
    }
    else
    {
      v39 = 0.0;
    }
    this->m_MaterialLight.m_fNormal[2] = v39;
  }
  this->m_MaterialLight.m_fNormal[3] = 1.0;
  if ( (v8 & 0x80u) != 0 )
  {
    v40 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v40 )
    {
      v41 = *(float *)&format->m_pucData[v40];
      format->m_uiPoint = v40 + 4;
    }
    else
    {
      v41 = 0.0;
    }
    this->m_MaterialLight.m_fBump[0] = v41;
    v42 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v42 )
    {
      v43 = *(float *)&format->m_pucData[v42];
      format->m_uiPoint = v42 + 4;
    }
    else
    {
      v43 = 0.0;
    }
    this->m_MaterialLight.m_fBump[1] = v43;
    v44 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v44 )
    {
      v45 = *(float *)&format->m_pucData[v44];
      format->m_uiPoint = v44 + 4;
    }
    else
    {
      v45 = 0.0;
    }
    this->m_MaterialLight.m_fBump[2] = v45;
  }
  this->m_MaterialLight.m_fBump[3] = 1.0;
  if ( (v8 & 0x100) != 0 )
  {
    v46 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v46 )
    {
      v47 = *(float *)&format->m_pucData[v46];
      format->m_uiPoint = v46 + 4;
    }
    else
    {
      v47 = 0.0;
    }
    this->m_MaterialLight.m_fBumpFactor = v47;
  }
  if ( (v8 & 0x200) != 0 )
  {
    v48 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v48 )
    {
      v49 = *(float *)&format->m_pucData[v48];
      format->m_uiPoint = v48 + 4;
    }
    else
    {
      v49 = 0.0;
    }
    this->m_MaterialLight.m_fTransparent[0] = v49;
    v50 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v50 )
    {
      v51 = *(float *)&format->m_pucData[v50];
      format->m_uiPoint = v50 + 4;
    }
    else
    {
      v51 = 0.0;
    }
    this->m_MaterialLight.m_fTransparent[1] = v51;
    v52 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v52 )
    {
      v53 = *(float *)&format->m_pucData[v52];
      format->m_uiPoint = v52 + 4;
    }
    else
    {
      v53 = 0.0;
    }
    this->m_MaterialLight.m_fTransparent[2] = v53;
  }
  this->m_MaterialLight.m_fTransparent[3] = 1.0;
  if ( (v8 & 0x400) != 0 )
  {
    v54 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v54 )
    {
      v55 = *(float *)&format->m_pucData[v54];
      format->m_uiPoint = v54 + 4;
    }
    else
    {
      v55 = 0.0;
    }
    this->m_MaterialLight.m_fTransparentFactor = v55;
  }
  if ( (v8 & 0x800) != 0 )
  {
    v56 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v56 )
    {
      v57 = *(float *)&format->m_pucData[v56];
      format->m_uiPoint = v56 + 4;
    }
    else
    {
      v57 = 0.0;
    }
    this->m_MaterialLight.m_fSpecular[0] = v57;
    v58 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v58 )
    {
      v59 = *(float *)&format->m_pucData[v58];
      format->m_uiPoint = v58 + 4;
    }
    else
    {
      v59 = 0.0;
    }
    this->m_MaterialLight.m_fSpecular[1] = v59;
    v60 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v60 )
    {
      v61 = *(float *)&format->m_pucData[v60];
      format->m_uiPoint = v60 + 4;
      this->m_MaterialLight.m_fSpecular[2] = v61;
    }
    else
    {
      this->m_MaterialLight.m_fSpecular[2] = 0.0;
    }
  }
  else if ( this->m_MaterialLight.m_fSpecular[0] == 0.0
         && this->m_MaterialLight.m_fSpecular[1] == 0.0
         && this->m_MaterialLight.m_fSpecular[2] == 0.0 )
  {
    this->m_MaterialLight.m_fSpecular[0] = 0.30000001;
    this->m_MaterialLight.m_fSpecular[1] = 0.30000001;
    this->m_MaterialLight.m_fSpecular[2] = 0.30000001;
  }
  this->m_MaterialLight.m_fSpecular[3] = 1.0;
  if ( (v8 & 0x1000) != 0 )
  {
    v62 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v62 )
    {
      v63 = *(float *)&format->m_pucData[v62];
      format->m_uiPoint = v62 + 4;
    }
    else
    {
      v63 = 0.0;
    }
    this->m_MaterialLight.m_fSpecularFactor = v63;
  }
  if ( (v8 & 0x2000) != 0 )
  {
    v64 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v64 )
    {
      v65 = *(float *)&format->m_pucData[v64];
      format->m_uiPoint = v64 + 4;
    }
    else
    {
      v65 = 0.0;
    }
    this->m_MaterialLight.m_fShininess = v65;
  }
  if ( (v8 & 0x4000) != 0 )
  {
    v66 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v66 )
    {
      v67 = *(float *)&format->m_pucData[v66];
      format->m_uiPoint = v66 + 4;
    }
    else
    {
      v67 = 0.0;
    }
    this->m_MaterialLight.m_fReflection[0] = v67;
    v68 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v68 )
    {
      v69 = *(float *)&format->m_pucData[v68];
      format->m_uiPoint = v68 + 4;
    }
    else
    {
      v69 = 0.0;
    }
    this->m_MaterialLight.m_fReflection[1] = v69;
    v70 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v70 )
    {
      v71 = *(float *)&format->m_pucData[v70];
      format->m_uiPoint = v70 + 4;
    }
    else
    {
      v71 = 0.0;
    }
    this->m_MaterialLight.m_fReflection[2] = v71;
  }
  this->m_MaterialLight.m_fReflection[3] = 1.0;
  if ( (v8 & 0x8000) != 0 )
  {
    v72 = format->m_uiPoint;
    if ( format->m_uiSize > (unsigned int)v72 )
    {
      v9 = *(float *)&format->m_pucData[v72];
      format->m_uiPoint = v72 + 4;
    }
    this->m_MaterialLight.m_fReflectionFactor = v9;
  }
  v73 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v73 )
  {
    v74 = format->m_pucData[v73] | ((format->m_pucData[(unsigned int)(v73 + 1)] | ((format->m_pucData[(unsigned int)(v73 + 2)] | (format->m_pucData[(unsigned int)(v73 + 3)] << 8)) << 8)) << 8);
    format->m_uiPoint = v73 + 4;
  }
  else
  {
    v74 = 0;
  }
  this->m_uiBlendMode = v74;
  v75 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v75 )
  {
    v5 = format->m_pucData[v75] | ((format->m_pucData[(unsigned int)(v75 + 1)] | ((format->m_pucData[(unsigned int)(v75 + 2)] | (format->m_pucData[(unsigned int)(v75 + 3)] << 8)) << 8)) << 8);
    format->m_uiPoint = v75 + 4;
  }
  result = 1;
  this->m_usIndexCount = v5;
  this->m_bUseLightMaterial = 1;
  this->m_bNewFormat = 0;
  return result;
}

unsigned __int8 __fastcall OGLMaterial::loadMemcpy(OGLMaterial *this, OGLInputStream *format)
{
  __int64 m_uiPoint; // r10
  int v5; // er8
  int v6; // er9
  __int64 v7; // rax
  unsigned __int8 *v8; // rax
  __int64 v9; // r10
  int v10; // er9
  __int64 v11; // r9
  unsigned __int8 result; // al

  OGLMaterial::finalize(this);
  m_uiPoint = format->m_uiPoint;
  v5 = 0;
  if ( format->m_uiSize > (unsigned int)m_uiPoint )
  {
    v6 = format->m_pucData[m_uiPoint] | ((format->m_pucData[(unsigned int)(m_uiPoint + 1)] | ((format->m_pucData[(unsigned int)(m_uiPoint + 2)] | (format->m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
    format->m_uiPoint = m_uiPoint + 4;
  }
  else
  {
    v6 = 0;
  }
  this->m_cTextureIndex = v6;
  v7 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v7 )
  {
    v8 = &format->m_pucData[v7];
    *(_OWORD *)&this->m_MaterialLight.m_uiAttrFlg = *(_OWORD *)v8;
    *(_OWORD *)&this->m_MaterialLight.m_fAmbient[3] = *((_OWORD *)v8 + 1);
    *(_OWORD *)&this->m_MaterialLight.m_fDiffuse[2] = *((_OWORD *)v8 + 2);
    *(_OWORD *)&this->m_MaterialLight.m_fSpecular[1] = *((_OWORD *)v8 + 3);
    *(_OWORD *)this->m_MaterialLight.m_fEmission = *((_OWORD *)v8 + 4);
    *(_OWORD *)&this->m_MaterialLight.m_fEmissionFactor = *((_OWORD *)v8 + 5);
    *(_OWORD *)&this->m_MaterialLight.m_fNormal[3] = *((_OWORD *)v8 + 6);
    *(_OWORD *)&this->m_MaterialLight.m_fBump[3] = *((_OWORD *)v8 + 7);
    *(_OWORD *)&this->m_MaterialLight.m_fTransparent[2] = *((_OWORD *)v8 + 8);
    *(_OWORD *)this->m_MaterialLight.m_fReflection = *((_OWORD *)v8 + 9);
    this->m_MaterialLight.m_fReflectionFactor = *((float *)v8 + 40);
    format->m_uiPoint += 164;
  }
  v9 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v9 )
  {
    v10 = format->m_pucData[v9] | ((format->m_pucData[(unsigned int)(v9 + 1)] | ((format->m_pucData[(unsigned int)(v9 + 2)] | (format->m_pucData[(unsigned int)(v9 + 3)] << 8)) << 8)) << 8);
    format->m_uiPoint = v9 + 4;
  }
  else
  {
    v10 = 0;
  }
  this->m_ucEffectFlg = v10;
  v11 = format->m_uiPoint;
  if ( format->m_uiSize > (unsigned int)v11 )
  {
    v5 = format->m_pucData[v11] | ((format->m_pucData[(unsigned int)(v11 + 1)] | ((format->m_pucData[(unsigned int)(v11 + 2)] | (format->m_pucData[(unsigned int)(v11 + 3)] << 8)) << 8)) << 8);
    format->m_uiPoint = v11 + 4;
  }
  result = 1;
  this->m_usIndexCount = v5;
  this->m_bUseLightMaterial = 1;
  this->m_bNewFormat = 1;
  return result;
}

void __fastcall OGLMaterial::prepShaderUniforms(
        OGLMaterial *this,
        const OGLLight *pWorldLight,
        const int bSkipSelfShadowLightId,
        const unsigned __int8 bLowAccSelfShadow,
        const unsigned __int8 bReceiveShadows,
        const unsigned __int8 bCreateShadow)
{
  __int64 v7; // rbx
  float v8; // eax
  OGLLight::LightType m_LightType; // eax
  int v10; // er9
  int m_lightCount; // edi
  __int64 v12; // r11
  OGLLightManager *m_pLightManager; // rax
  OGLLightNode *m_pLightNodeList; // rdx
  __int64 v15; // rax
  __int64 v16; // rcx
  __int64 v17; // r8
  float v18; // eax
  OGLLight::LightType v19; // eax
  __int64 v20; // rax
  Vector4Unaligned v21; // [rsp+0h] [rbp-40h]
  Vector4Unaligned v22; // [rsp+30h] [rbp-10h]

  this->m_shaderLightShadowData[0].x = -1.0;
  this->m_shaderLightShadowData[0].y = -1.0;
  this->m_shaderLightShadowData[0].z = -1.0;
  v7 = 0i64;
  this->m_shaderLightShadowData[0].w = 0.0;
  if ( pWorldLight && pWorldLight->m_bOn )
  {
    this->m_shaderLightPosition[0] = *(Vector4Unaligned *)pWorldLight->m_fPosition;
    v21.w = 1.0;
    v21.z = pWorldLight->m_fDirection[2];
    *(_QWORD *)&v21.x = *(_QWORD *)pWorldLight->m_fDirection;
    this->m_shaderLightDirection[0] = v21;
    this->m_shaderLightDiffuseCol[0] = *(Vector4Unaligned *)pWorldLight->m_fDiffuse;
    v8 = pWorldLight->m_fEyePosition[2];
    *(_QWORD *)&this->m_shaderLightEyePosition[0].x = _mm_unpacklo_ps(
                                                        (__m128)LODWORD(pWorldLight->m_fEyePosition[0]),
                                                        (__m128)LODWORD(pWorldLight->m_fEyePosition[1])).m128_u64[0];
    this->m_shaderLightEyePosition[0].z = v8;
    this->m_shaderLightShadowData[0].x = (float)pWorldLight->m_bCastsShadows;
    if ( (float)pWorldLight->m_bCastsShadows != 0.0 )
      this->m_shaderLightShadowData[0].y = 0.0;
    if ( (float)pWorldLight->m_bCastsShadows != 0.0 && pWorldLight->m_nId == bSkipSelfShadowLightId )
      this->m_shaderLightShadowData[0].z = 0.0;
    if ( (float)pWorldLight->m_bCastsShadows != 0.0 && bLowAccSelfShadow )
      this->m_shaderLightShadowData[0].w = 1.0;
    this->m_shaderLightShadowData[1].y = (float)bReceiveShadows;
    m_LightType = pWorldLight->m_LightType;
    if ( m_LightType )
    {
      switch ( m_LightType )
      {
        case LIGHT_TYPE_DIR:
          this->m_shaderLightTypeAndSpotSettings[0].x = 1.0;
          break;
        case LIGHT_TYPE_SPOT:
          this->m_shaderLightTypeAndSpotSettings[0].x = 2.0;
          this->m_shaderLightTypeAndSpotSettings[0].y = pWorldLight->m_fConeAngleRad;
          this->m_shaderLightTypeAndSpotSettings[0].z = pWorldLight->m_fPenumbraRad;
          break;
        case LIGHT_TYPE_AMBIENT:
          this->m_shaderLightTypeAndSpotSettings[0].x = 3.0;
          break;
      }
    }
    else
    {
      this->m_shaderLightTypeAndSpotSettings[0].x = 0.0;
    }
    this->m_shaderLightTypeAndSpotSettings[0].w = pWorldLight->m_fShininess;
    if ( bCreateShadow )
      this->m_shaderLightIntensityAndDecayRate[0].x = 0.0;
    else
      this->m_shaderLightIntensityAndDecayRate[0].x = pWorldLight->m_fIntensity;
    v7 = 1i64;
    this->m_shaderLightIntensityAndDecayRate[0].y = (float)pWorldLight->m_bEmitSpecular;
    this->m_shaderLightIntensityAndDecayRate[0].z = (float)pWorldLight->m_bEmitDiffuse;
    this->m_shaderLightIntensityAndDecayRate[0].w = (float)pWorldLight->m_DecayRate;
  }
  v10 = 0;
  m_lightCount = this->m_pLightManager->m_lightCount;
  if ( m_lightCount > 0 )
  {
    v12 = 0i64;
    do
    {
      m_pLightManager = this->m_pLightManager;
      m_pLightNodeList = m_pLightManager->m_pLightNodeList;
      if ( m_pLightNodeList && v10 < m_pLightManager->m_lightCount )
      {
        if ( v10 > 0 )
        {
          v15 = (unsigned int)v10;
          do
          {
            m_pLightNodeList = m_pLightNodeList->next;
            --v15;
          }
          while ( v15 );
        }
        if ( m_pLightNodeList && m_pLightNodeList->m_light.m_bOn )
        {
          v22.w = 1.0;
          v16 = v12 + v7;
          v17 = v12 + v7;
          this->m_shaderLightPosition[v17] = *(Vector4Unaligned *)m_pLightNodeList->m_light.m_fPosition;
          this->m_shaderLightDiffuseCol[v17] = *(Vector4Unaligned *)m_pLightNodeList->m_light.m_fDiffuse;
          v22.z = m_pLightNodeList->m_light.m_fDirection[2];
          *(_QWORD *)&v22.x = *(_QWORD *)m_pLightNodeList->m_light.m_fDirection;
          this->m_shaderLightDirection[v17] = v22;
          v18 = m_pLightNodeList->m_light.m_fEyePosition[2];
          *(_QWORD *)&this->m_shaderLightEyePosition[v16].x = _mm_unpacklo_ps(
                                                                (__m128)LODWORD(m_pLightNodeList->m_light.m_fEyePosition[0]),
                                                                (__m128)LODWORD(m_pLightNodeList->m_light.m_fEyePosition[1])).m128_u64[0];
          this->m_shaderLightEyePosition[v16].z = v18;
          this->m_shaderLightShadowData[v17].x = (float)m_pLightNodeList->m_light.m_bCastsShadows;
          v19 = m_pLightNodeList->m_light.m_LightType;
          if ( v19 )
          {
            switch ( v19 )
            {
              case LIGHT_TYPE_DIR:
                this->m_shaderLightTypeAndSpotSettings[v12 + v7].x = 1.0;
                break;
              case LIGHT_TYPE_SPOT:
                this->m_shaderLightTypeAndSpotSettings[v12 + v7].x = 2.0;
                this->m_shaderLightTypeAndSpotSettings[v12 + v7].y = m_pLightNodeList->m_light.m_fConeAngleRad;
                this->m_shaderLightTypeAndSpotSettings[v12 + v7].z = m_pLightNodeList->m_light.m_fPenumbraRad;
                break;
              case LIGHT_TYPE_AMBIENT:
                this->m_shaderLightTypeAndSpotSettings[v12 + v7].x = 3.0;
                break;
            }
          }
          else
          {
            this->m_shaderLightTypeAndSpotSettings[v12 + v7].x = 0.0;
          }
          this->m_shaderLightTypeAndSpotSettings[v12 + v7].w = m_pLightNodeList->m_light.m_fShininess;
          this->m_shaderLightIntensityAndDecayRate[v12 + v7].x = m_pLightNodeList->m_light.m_fIntensity;
          v20 = v12 + v7 + 61;
          ++v12;
          *((float *)&this->m_bNewFormat + 4 * v20) = (float)m_pLightNodeList->m_light.m_bEmitSpecular;
          this->m_shaderLightIntensityAndDecayRate[v17].z = (float)m_pLightNodeList->m_light.m_bEmitDiffuse;
          this->m_shaderLightIntensityAndDecayRate[v17].w = (float)m_pLightNodeList->m_light.m_DecayRate;
        }
      }
      ++v10;
    }
    while ( v10 < m_lightCount );
  }
}

