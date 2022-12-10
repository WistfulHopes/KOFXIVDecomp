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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfigure.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvertexoptiinfo.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmatrix.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglquat.cpp"
#include "dev/kof/master/development/source/ps4project/baseproject/pcdummy.cpp"

struct MATERIAL_EFFECT_INFO
{
	const char * str; // 0x0
	long flg; // 0x8
};
OGLFigure::OGLFigure(); // 0x140056130
std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> >,std::default_delete<std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> > > > >::~_LaunchPad<std::unique_ptr<std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> >,std::default_delete<std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> > > > >(); // 0x14005DB00
OGLFigure * OGLFigure::createFigure(unsigned char * buf, long size, unsigned char bMemoryTypeCPU, unsigned char bNoMotion); // 0x140056210
void OGLFigure::finalize(); // 0x1400562B0
void OGLFigure::setNodeLevel(OGLBone * pBone); // 0x140056700
long OGLFigure::loadObacData(unsigned char * buffer, unsigned long size); // 0x140056790
void <lambda_230801668028c2b66e05f2ecff55509a>::operator()(); // 0x14005A810
class OGLFigure::loadObacData::__l448::<lambda_230801668028c2b66e05f2ecff55509a>
{
public:
	void operator()();
	<lambda_230801668028c2b66e05f2ecff55509a>(OGLFigure::loadObacData::__l448::<lambda_230801668028c2b66e05f2ecff55509a> &);
	<lambda_230801668028c2b66e05f2ecff55509a>();
	<lambda_230801668028c2b66e05f2ecff55509a>(OGLFigure * &, MeshVertexInfoComp * &);
private:
	OGLFigure * figure; // 0x0
	MeshVertexInfoComp * outV; // 0x8
public:
	OGLFigure::loadObacData::__l448::<lambda_230801668028c2b66e05f2ecff55509a> & operator=(const OGLFigure::loadObacData::__l448::<lambda_230801668028c2b66e05f2ecff55509a> &);
};
void <lambda_1247ded54a2e5f087cbbad2046cfed3a>::operator()(); // 0x14005AED0
class OGLFigure::loadObacData::__l465::<lambda_1247ded54a2e5f087cbbad2046cfed3a>
{
public:
	void operator()();
	<lambda_1247ded54a2e5f087cbbad2046cfed3a>(OGLFigure::loadObacData::__l465::<lambda_1247ded54a2e5f087cbbad2046cfed3a> &);
	<lambda_1247ded54a2e5f087cbbad2046cfed3a>();
	<lambda_1247ded54a2e5f087cbbad2046cfed3a>(OGLFigure * &, MeshVertexInfoComp * &);
private:
	OGLFigure * figure; // 0x0
	MeshVertexInfoComp * outV; // 0x8
public:
	OGLFigure::loadObacData::__l465::<lambda_1247ded54a2e5f087cbbad2046cfed3a> & operator=(const OGLFigure::loadObacData::__l465::<lambda_1247ded54a2e5f087cbbad2046cfed3a> &);
};
void <lambda_12b90ea9f2fd716190554ece8222dbaa>::operator()(); // 0x14005B5F0
class OGLFigure::loadObacData::__l501::<lambda_12b90ea9f2fd716190554ece8222dbaa>
{
public:
	void operator()();
	<lambda_12b90ea9f2fd716190554ece8222dbaa>(OGLFigure::loadObacData::__l501::<lambda_12b90ea9f2fd716190554ece8222dbaa> &);
	<lambda_12b90ea9f2fd716190554ece8222dbaa>();
	<lambda_12b90ea9f2fd716190554ece8222dbaa>(OGLFigure * &, MeshVertexInfo * &);
private:
	OGLFigure * figure; // 0x0
	MeshVertexInfo * outV; // 0x8
public:
	OGLFigure::loadObacData::__l501::<lambda_12b90ea9f2fd716190554ece8222dbaa> & operator=(const OGLFigure::loadObacData::__l501::<lambda_12b90ea9f2fd716190554ece8222dbaa> &);
};
void <lambda_49e167d41e58ceaf27bb79ed79325610>::operator()(); // 0x14005BC50
class OGLFigure::loadObacData::__l525::<lambda_49e167d41e58ceaf27bb79ed79325610>
{
public:
	void operator()();
	<lambda_49e167d41e58ceaf27bb79ed79325610>(OGLFigure::loadObacData::__l525::<lambda_49e167d41e58ceaf27bb79ed79325610> &);
	<lambda_49e167d41e58ceaf27bb79ed79325610>();
	<lambda_49e167d41e58ceaf27bb79ed79325610>(OGLFigure * &, MeshVertexInfo * &);
private:
	OGLFigure * figure; // 0x0
	MeshVertexInfo * outV; // 0x8
public:
	OGLFigure::loadObacData::__l525::<lambda_49e167d41e58ceaf27bb79ed79325610> & operator=(const OGLFigure::loadObacData::__l525::<lambda_49e167d41e58ceaf27bb79ed79325610> &);
};
const MATERIAL_EFFECT_INFO MaterialEffectInfo[28]; // 0x140889630
std::piecewise_construct_t std::piecewise_construct; // 0x14088952D
const MATERIAL_EFFECT_INFO MaterialAddEffectInfo[72]; // 0x1408896A0
long OGLFigure::loadBaseObacData(unsigned char * buffer, unsigned long size); // 0x14005C300
void OGLFigure::copyParamaterGPU(); // 0x14005D140
void OGLFigure::calcTangentAndBinormal(float * p0, float * uv0, float * p1, float * uv1, float * p2, float * uv2, float * outTangent, float * outBinormal); // 0x14005D250//decompilation failure at 140889630!
//decompilation failure at 14088952D!
//decompilation failure at 1408896A0!
void __fastcall std::_Launch<std::unique_ptr<std::tuple<_lambda_1247ded54a2e5f087cbbad2046cfed3a_>>>(
        _Thrd_imp_t *_Thr,
        std::unique_ptr<std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> >> *_Tg)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> > *Myval2; // rax
  int v9; // eax
  int v10; // eax
  _Cnd_internal_imp_t *v11; // rdi
  _Mtx_internal_imp_t *v12; // rbx
  int v13; // eax
  void **b; // [rsp+48h] [rbp-30h] BYREF
  _Cnd_internal_imp_t *cond; // [rsp+50h] [rbp-28h] BYREF
  _Mtx_internal_imp_t *mtx; // [rsp+58h] [rbp-20h] BYREF
  char v17; // [rsp+60h] [rbp-18h]
  void *block; // [rsp+68h] [rbp-10h]

  b = &std::_Pad::`vftable';
  v4 = Cnd_init(&cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = 1;
  v6 = Mtx_init(&mtx, 1);
  if ( v6 )
    std::_Throw_C_error(v6);
  v17 = 0;
  v7 = Mtx_lock(mtx);
  if ( v7 )
    std::_Throw_C_error(v7);
  b = &std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_1247ded54a2e5f087cbbad2046cfed3a_>>>::`vftable';
  Myval2 = _Tg->_Mypair._Myval2;
  _Tg->_Mypair._Myval2 = 0i64;
  block = Myval2;
  v9 = Thrd_start(_Thr, std::_Pad::_Call_func, &b);
  if ( v9 != 4 )
    v5 = v9;
  if ( v5 )
    std::_Throw_C_error(v5);
  while ( !v17 )
  {
    v10 = Cnd_wait(cond, mtx);
    if ( v10 )
      std::_Throw_C_error(v10);
  }
  if ( block )
    operator delete(block, 0x10ui64);
  b = &std::_Pad::`vftable';
  v11 = cond;
  v12 = mtx;
  v13 = Mtx_unlock(mtx);
  if ( v13 )
    std::_Throw_C_error(v13);
  Mtx_destroy(v12);
  Cnd_destroy(v11);
}

void __fastcall std::_Launch<std::unique_ptr<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>>>(
        _Thrd_imp_t *_Thr,
        std::unique_ptr<std::tuple<<lambda_12b90ea9f2fd716190554ece8222dbaa> >> *_Tg)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  std::tuple<<lambda_12b90ea9f2fd716190554ece8222dbaa> > *Myval2; // rax
  int v9; // eax
  int v10; // eax
  _Cnd_internal_imp_t *v11; // rdi
  _Mtx_internal_imp_t *v12; // rbx
  int v13; // eax
  void **b; // [rsp+48h] [rbp-30h] BYREF
  _Cnd_internal_imp_t *cond; // [rsp+50h] [rbp-28h] BYREF
  _Mtx_internal_imp_t *mtx; // [rsp+58h] [rbp-20h] BYREF
  char v17; // [rsp+60h] [rbp-18h]
  void *block; // [rsp+68h] [rbp-10h]

  b = &std::_Pad::`vftable';
  v4 = Cnd_init(&cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = 1;
  v6 = Mtx_init(&mtx, 1);
  if ( v6 )
    std::_Throw_C_error(v6);
  v17 = 0;
  v7 = Mtx_lock(mtx);
  if ( v7 )
    std::_Throw_C_error(v7);
  b = &std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>>>::`vftable';
  Myval2 = _Tg->_Mypair._Myval2;
  _Tg->_Mypair._Myval2 = 0i64;
  block = Myval2;
  v9 = Thrd_start(_Thr, std::_Pad::_Call_func, &b);
  if ( v9 != 4 )
    v5 = v9;
  if ( v5 )
    std::_Throw_C_error(v5);
  while ( !v17 )
  {
    v10 = Cnd_wait(cond, mtx);
    if ( v10 )
      std::_Throw_C_error(v10);
  }
  if ( block )
    operator delete(block, 0x10ui64);
  b = &std::_Pad::`vftable';
  v11 = cond;
  v12 = mtx;
  v13 = Mtx_unlock(mtx);
  if ( v13 )
    std::_Throw_C_error(v13);
  Mtx_destroy(v12);
  Cnd_destroy(v11);
}

void __fastcall std::_Launch<std::unique_ptr<std::tuple<_lambda_230801668028c2b66e05f2ecff55509a_>>>(
        _Thrd_imp_t *_Thr,
        std::unique_ptr<std::tuple<<lambda_230801668028c2b66e05f2ecff55509a> >> *_Tg)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  std::tuple<<lambda_230801668028c2b66e05f2ecff55509a> > *Myval2; // rax
  int v9; // eax
  int v10; // eax
  _Cnd_internal_imp_t *v11; // rdi
  _Mtx_internal_imp_t *v12; // rbx
  int v13; // eax
  void **b; // [rsp+48h] [rbp-30h] BYREF
  _Cnd_internal_imp_t *cond; // [rsp+50h] [rbp-28h] BYREF
  _Mtx_internal_imp_t *mtx; // [rsp+58h] [rbp-20h] BYREF
  char v17; // [rsp+60h] [rbp-18h]
  void *block; // [rsp+68h] [rbp-10h]

  b = &std::_Pad::`vftable';
  v4 = Cnd_init(&cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = 1;
  v6 = Mtx_init(&mtx, 1);
  if ( v6 )
    std::_Throw_C_error(v6);
  v17 = 0;
  v7 = Mtx_lock(mtx);
  if ( v7 )
    std::_Throw_C_error(v7);
  b = &std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_230801668028c2b66e05f2ecff55509a_>>>::`vftable';
  Myval2 = _Tg->_Mypair._Myval2;
  _Tg->_Mypair._Myval2 = 0i64;
  block = Myval2;
  v9 = Thrd_start(_Thr, std::_Pad::_Call_func, &b);
  if ( v9 != 4 )
    v5 = v9;
  if ( v5 )
    std::_Throw_C_error(v5);
  while ( !v17 )
  {
    v10 = Cnd_wait(cond, mtx);
    if ( v10 )
      std::_Throw_C_error(v10);
  }
  if ( block )
    operator delete(block, 0x10ui64);
  b = &std::_Pad::`vftable';
  v11 = cond;
  v12 = mtx;
  v13 = Mtx_unlock(mtx);
  if ( v13 )
    std::_Throw_C_error(v13);
  Mtx_destroy(v12);
  Cnd_destroy(v11);
}

void __fastcall std::_Launch<std::unique_ptr<std::tuple<_lambda_49e167d41e58ceaf27bb79ed79325610_>>>(
        _Thrd_imp_t *_Thr,
        std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> *_Tg)
{
  int v4; // eax
  int v5; // ebx
  int v6; // eax
  int v7; // eax
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *Myval2; // rax
  int v9; // eax
  int v10; // eax
  _Cnd_internal_imp_t *v11; // rdi
  _Mtx_internal_imp_t *v12; // rbx
  int v13; // eax
  void **b; // [rsp+48h] [rbp-30h] BYREF
  _Cnd_internal_imp_t *cond; // [rsp+50h] [rbp-28h] BYREF
  _Mtx_internal_imp_t *mtx; // [rsp+58h] [rbp-20h] BYREF
  char v17; // [rsp+60h] [rbp-18h]
  void *block; // [rsp+68h] [rbp-10h]

  b = &std::_Pad::`vftable';
  v4 = Cnd_init(&cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = 1;
  v6 = Mtx_init(&mtx, 1);
  if ( v6 )
    std::_Throw_C_error(v6);
  v17 = 0;
  v7 = Mtx_lock(mtx);
  if ( v7 )
    std::_Throw_C_error(v7);
  b = &std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_49e167d41e58ceaf27bb79ed79325610_>>>::`vftable';
  Myval2 = _Tg->_Mypair._Myval2;
  _Tg->_Mypair._Myval2 = 0i64;
  block = Myval2;
  v9 = Thrd_start(_Thr, std::_Pad::_Call_func, &b);
  if ( v9 != 4 )
    v5 = v9;
  if ( v5 )
    std::_Throw_C_error(v5);
  while ( !v17 )
  {
    v10 = Cnd_wait(cond, mtx);
    if ( v10 )
      std::_Throw_C_error(v10);
  }
  if ( block )
    operator delete(block, 0x10ui64);
  b = &std::_Pad::`vftable';
  v11 = cond;
  v12 = mtx;
  v13 = Mtx_unlock(mtx);
  if ( v13 )
    std::_Throw_C_error(v13);
  Mtx_destroy(v12);
  Cnd_destroy(v11);
}

std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> *__fastcall std::make_unique<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>,_lambda_12b90ea9f2fd716190554ece8222dbaa_>(
        std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> *result,
        OGLFigure::loadObacData::__l525::<lambda_49e167d41e58ceaf27bb79ed79325610> *<_Args_0>)
{
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v5; // [rsp+40h] [rbp+8h]

  v5 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)operator new(0x10ui64);
  *v5 = *(std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)<_Args_0>;
  result->_Mypair._Myval2 = v5;
  return result;
}

void __fastcall OGLFigure::OGLFigure(OGLFigure *this)
{
  this->m_pVerOptiInfo = 0i64;
  this->m_pfVertexCoord = 0i64;
  this->m_pfNormalCoord = 0i64;
  this->m_pfTangentCoord = 0i64;
  this->m_pfTexCoord[0] = 0i64;
  this->m_pfTexCoord[1] = 0i64;
  this->m_pfTexCoord[2] = 0i64;
  this->m_pfTexCoord[3] = 0i64;
  this->m_pBone = 0i64;
  this->m_pMaterial = 0i64;
  this->m_pusIndex = 0i64;
  this->m_pussIndex = 0i64;
  this->m_psMaterialIndex = 0i64;
  this->m_psVertexCoordIndex = 0i64;
  this->m_pBindPose = 0i64;
  this->m_usIndexCount = 0;
  this->m_ucMaterialCount = 0;
  this->m_uiBoneCount = 0;
  *(_QWORD *)this->m_usTexCoordCount = 0i64;
  *(_QWORD *)&this->m_usTexCoordCount[2] = 0i64;
  this->m_usVertexColorCount = 0;
  this->m_usNormalCoordCount = 0;
  this->m_usVertexCoordCount = 0;
  this->m_pfIndexBuffer = 0i64;
  this->m_pfVertexBuffer = 0i64;
  this->m_pfVertexColor = 0i64;
  this->vertexBuffer = 0;
  *(_QWORD *)&this->m_iNodeLevelMax = 0i64;
  this->m_uiStateFlg = 0;
  this->m_cBoneNames = 0i64;
  this->m_cMatreialNames = 0i64;
  this->m_iBoneHash = 0i64;
}

void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_49e167d41e58ceaf27bb79ed79325610_>>>::~_LaunchPad<std::unique_ptr<std::tuple<_lambda_49e167d41e58ceaf27bb79ed79325610_>>>(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> > *this)
{
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *Myval2; // rcx
  _Cnd_internal_imp_t *Cond; // rdi
  _Mtx_internal_imp_t *Mtx; // rbx
  int v5; // eax

  Myval2 = this->_MyTarget._Mypair._Myval2;
  if ( Myval2 )
    operator delete(Myval2, 0x10ui64);
  this->__vftable = (std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> >_vtbl *)&std::_Pad::`vftable';
  Cond = this->_Cond;
  Mtx = this->_Mtx;
  v5 = Mtx_unlock(Mtx);
  if ( v5 )
    std::_Throw_C_error(v5);
  Mtx_destroy(Mtx);
  Cnd_destroy(Cond);
}

void __fastcall std::unique_ptr<std::tuple<_lambda_1247ded54a2e5f087cbbad2046cfed3a_>>::~unique_ptr<std::tuple<_lambda_1247ded54a2e5f087cbbad2046cfed3a_>>(
        std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> *this)
{
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    operator delete(Myval2, 0x10ui64);
}

void __fastcall std::_Auto_cnd::~_Auto_cnd(std::_Auto_cnd *this)
{
  if ( this->_Active )
    Cnd_destroy(this->_MyCndp);
}

void __fastcall std::_Auto_mtx::~_Auto_mtx(std::_Auto_mtx *this)
{
  if ( this->_Active )
    Mtx_destroy(this->_MyMtxp);
}

void __fastcall std::thread::~thread(std::thread *this)
{
  if ( this->_Thr._Id )
  {
    terminate((Effect *)this);
    JUMPOUT(0x140056124i64);
  }
}

__int64 __fastcall lambda_1247ded54a2e5f087cbbad2046cfed3a_::operator()(_QWORD *a1, unsigned __int64 a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r9
  void *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r9
  void *v20; // rcx
  __int64 result; // rax
  int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r10
  void *v29; // rcx

  v3 = *(_DWORD *)(*a1 + 16i64);
  if ( v3 )
  {
    v4 = v3 - 1;
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( v4 + 1i64 >= 4 )
      {
        v6 = (unsigned __int64)(v4 + 1i64) >> 2;
        v7 = 136i64 * v4;
        v8 = 12i64 * v4;
        v5 = v4 - 4 * v6;
        do
        {
          v7 -= 544i64;
          v8 -= 48i64;
          *(_DWORD *)(v7 + a1[1] + 544) = *(_DWORD *)(v8 + *(_QWORD *)(*a1 + 8i64) + 48);
          *(_DWORD *)(v7 + a1[1] + 548) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 52);
          *(_DWORD *)(v7 + a1[1] + 552) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 56);
          *(_DWORD *)(v7 + a1[1] + 408) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 36);
          *(_DWORD *)(v7 + a1[1] + 412) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 40);
          *(_DWORD *)(v7 + a1[1] + 416) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 44);
          *(_DWORD *)(v7 + a1[1] + 272) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 24);
          *(_DWORD *)(v7 + a1[1] + 276) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 28);
          *(_DWORD *)(v7 + a1[1] + 280) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 32);
          *(_DWORD *)(v7 + a1[1] + 136) = *(_DWORD *)(v8 + *(_QWORD *)(*a1 + 8i64) + 12);
          *(_DWORD *)(v7 + a1[1] + 140) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 16);
          a2 = a1[1];
          *(_DWORD *)(v7 + a2 + 144) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 20);
          --v6;
        }
        while ( v6 );
      }
      if ( v5 >= 0 )
      {
        v9 = 136 * v5;
        v10 = 12 * v5;
        do
        {
          --v5;
          v9 -= 136i64;
          v10 -= 12i64;
          *(_DWORD *)(v9 + a1[1] + 136) = *(_DWORD *)(v10 + *(_QWORD *)(*a1 + 8i64) + 12);
          *(_DWORD *)(v9 + a1[1] + 140) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v10 + 16);
          a2 = a1[1];
          *(_DWORD *)(v9 + a2 + 144) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v10 + 20);
        }
        while ( v5 >= 0 );
      }
    }
    v11 = *(void **)(*a1 + 8i64);
    if ( v11 )
    {
      operator delete(v11, a2);
      *(_QWORD *)(*a1 + 8i64) = 0i64;
    }
  }
  v12 = *(_DWORD *)(*a1 + 32i64);
  if ( v12 )
  {
    v13 = v12 - 1;
    v14 = v13;
    if ( v13 >= 0 )
    {
      if ( v13 + 1i64 >= 4 )
      {
        v15 = (unsigned __int64)(v13 + 1i64) >> 2;
        v16 = 136i64 * v13;
        v17 = 12i64 * v13;
        v14 = v13 - 4 * v15;
        do
        {
          v16 -= 544i64;
          v17 -= 48i64;
          *(_DWORD *)(v16 + a1[1] + 556) = *(_DWORD *)(v17 + *(_QWORD *)(*a1 + 24i64) + 48);
          *(_DWORD *)(v16 + a1[1] + 560) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 52);
          *(_DWORD *)(v16 + a1[1] + 564) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 56) ^ _xmm;
          *(_DWORD *)(v16 + a1[1] + 420) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 36);
          *(_DWORD *)(v16 + a1[1] + 424) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 40);
          *(_DWORD *)(v16 + a1[1] + 428) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 44) ^ _xmm;
          *(_DWORD *)(v16 + a1[1] + 284) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 24);
          *(_DWORD *)(v16 + a1[1] + 288) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 28);
          *(_DWORD *)(v16 + a1[1] + 292) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 32) ^ _xmm;
          *(_DWORD *)(v16 + a1[1] + 148) = *(_DWORD *)(v17 + *(_QWORD *)(*a1 + 24i64) + 12);
          a2 = a1[1];
          *(_DWORD *)(v16 + a2 + 152) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 16);
          *(_DWORD *)(v16 + a1[1] + 156) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 20) ^ _xmm;
          --v15;
        }
        while ( v15 );
      }
      if ( v14 >= 0 )
      {
        v18 = 136 * v14;
        v19 = 12 * v14;
        do
        {
          --v14;
          v18 -= 136i64;
          v19 -= 12i64;
          *(_DWORD *)(v18 + a1[1] + 148) = *(_DWORD *)(v19 + *(_QWORD *)(*a1 + 24i64) + 12);
          a2 = a1[1];
          *(_DWORD *)(v18 + a2 + 152) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v19 + 16);
          *(_DWORD *)(v18 + a1[1] + 156) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v19 + 20) ^ _xmm;
        }
        while ( v14 >= 0 );
      }
    }
    v20 = *(void **)(*a1 + 24i64);
    if ( v20 )
    {
      operator delete(v20, a2);
      *(_QWORD *)(*a1 + 24i64) = 0i64;
    }
  }
  result = *(unsigned int *)(*a1 + 216i64);
  if ( (_DWORD)result )
  {
    v22 = result - 1;
    v23 = v22;
    if ( v22 >= 0 )
    {
      if ( v22 + 1i64 >= 4 )
      {
        v24 = (unsigned __int64)(v22 + 1i64) >> 2;
        v25 = 136i64 * v22;
        v26 = 12i64 * v22;
        v23 = v22 - 4 * v24;
        do
        {
          v25 -= 544i64;
          v26 -= 48i64;
          *(_DWORD *)(v25 + a1[1] + 568) = *(_DWORD *)(v26 + *(_QWORD *)(*a1 + 208i64) + 48);
          *(_DWORD *)(v25 + a1[1] + 572) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 52);
          *(_DWORD *)(v25 + a1[1] + 576) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 56) ^ _xmm;
          *(_DWORD *)(v25 + a1[1] + 580) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 432) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 36);
          *(_DWORD *)(v25 + a1[1] + 436) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 40);
          *(_DWORD *)(v25 + a1[1] + 440) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 44) ^ _xmm;
          *(_DWORD *)(v25 + a1[1] + 444) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 296) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 24);
          *(_DWORD *)(v25 + a1[1] + 300) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 28);
          *(_DWORD *)(v25 + a1[1] + 304) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 32) ^ _xmm;
          *(_DWORD *)(v25 + a1[1] + 308) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 160) = *(_DWORD *)(v26 + *(_QWORD *)(*a1 + 208i64) + 12);
          a2 = a1[1];
          *(_DWORD *)(v25 + a2 + 164) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 16);
          *(_DWORD *)(v25 + a1[1] + 168) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 20) ^ _xmm;
          *(_DWORD *)(v25 + a1[1] + 172) = 1065353216;
          --v24;
        }
        while ( v24 );
      }
      if ( v23 >= 0 )
      {
        v27 = 136 * v23;
        v28 = 12 * v23;
        do
        {
          --v23;
          v27 -= 136i64;
          v28 -= 12i64;
          *(_DWORD *)(v27 + a1[1] + 160) = *(_DWORD *)(v28 + *(_QWORD *)(*a1 + 208i64) + 12);
          a2 = a1[1];
          *(_DWORD *)(v27 + a2 + 164) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v28 + 16);
          *(_DWORD *)(v27 + a1[1] + 168) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v28 + 20) ^ _xmm;
          *(_DWORD *)(v27 + a1[1] + 172) = 1065353216;
        }
        while ( v23 >= 0 );
      }
    }
    result = *a1;
    v29 = *(void **)(*a1 + 208i64);
    if ( v29 )
    {
      operator delete(v29, a2);
      result = *a1;
      *(_QWORD *)(*a1 + 208i64) = 0i64;
    }
  }
  return result;
}

__int64 __fastcall lambda_12b90ea9f2fd716190554ece8222dbaa_::operator()(_QWORD *a1, unsigned __int64 a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r9
  void *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r9
  void *v20; // rcx
  __int64 result; // rax
  int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r10
  void *v29; // rcx

  v3 = *(_DWORD *)(*a1 + 16i64);
  if ( v3 )
  {
    v4 = v3 - 1;
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( v4 + 1i64 >= 4 )
      {
        v6 = (unsigned __int64)(v4 + 1i64) >> 2;
        v7 = 88i64 * v4;
        v8 = 12i64 * v4;
        v5 = v4 - 4 * v6;
        do
        {
          v7 -= 352i64;
          v8 -= 48i64;
          *(_DWORD *)(v7 + a1[1] + 352) = *(_DWORD *)(v8 + *(_QWORD *)(*a1 + 8i64) + 48);
          *(_DWORD *)(v7 + a1[1] + 356) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 52);
          *(_DWORD *)(v7 + a1[1] + 360) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 56);
          *(_DWORD *)(v7 + a1[1] + 264) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 36);
          *(_DWORD *)(v7 + a1[1] + 268) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 40);
          *(_DWORD *)(v7 + a1[1] + 272) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 44);
          *(_DWORD *)(v7 + a1[1] + 176) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 24);
          *(_DWORD *)(v7 + a1[1] + 180) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 28);
          *(_DWORD *)(v7 + a1[1] + 184) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 32);
          *(_DWORD *)(v7 + a1[1] + 88) = *(_DWORD *)(v8 + *(_QWORD *)(*a1 + 8i64) + 12);
          *(_DWORD *)(v7 + a1[1] + 92) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 16);
          a2 = a1[1];
          *(_DWORD *)(v7 + a2 + 96) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 20);
          --v6;
        }
        while ( v6 );
      }
      if ( v5 >= 0 )
      {
        v9 = 88 * v5;
        v10 = 12 * v5;
        do
        {
          --v5;
          v9 -= 88i64;
          v10 -= 12i64;
          *(_DWORD *)(v9 + a1[1] + 88) = *(_DWORD *)(v10 + *(_QWORD *)(*a1 + 8i64) + 12);
          *(_DWORD *)(v9 + a1[1] + 92) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v10 + 16);
          a2 = a1[1];
          *(_DWORD *)(v9 + a2 + 96) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v10 + 20);
        }
        while ( v5 >= 0 );
      }
    }
    v11 = *(void **)(*a1 + 8i64);
    if ( v11 )
    {
      operator delete(v11, a2);
      *(_QWORD *)(*a1 + 8i64) = 0i64;
    }
  }
  v12 = *(_DWORD *)(*a1 + 32i64);
  if ( v12 )
  {
    v13 = v12 - 1;
    v14 = v13;
    if ( v13 >= 0 )
    {
      if ( v13 + 1i64 >= 4 )
      {
        v15 = (unsigned __int64)(v13 + 1i64) >> 2;
        v16 = 88i64 * v13;
        v17 = 12i64 * v13;
        v14 = v13 - 4 * v15;
        do
        {
          v16 -= 352i64;
          v17 -= 48i64;
          *(_DWORD *)(v16 + a1[1] + 364) = *(_DWORD *)(v17 + *(_QWORD *)(*a1 + 24i64) + 48);
          *(_DWORD *)(v16 + a1[1] + 368) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 52);
          *(_DWORD *)(v16 + a1[1] + 372) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 56);
          *(_DWORD *)(v16 + a1[1] + 276) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 36);
          *(_DWORD *)(v16 + a1[1] + 280) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 40);
          *(_DWORD *)(v16 + a1[1] + 284) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 44);
          *(_DWORD *)(v16 + a1[1] + 188) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 24);
          *(_DWORD *)(v16 + a1[1] + 192) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 28);
          *(_DWORD *)(v16 + a1[1] + 196) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 32);
          *(_DWORD *)(v16 + a1[1] + 100) = *(_DWORD *)(v17 + *(_QWORD *)(*a1 + 24i64) + 12);
          *(_DWORD *)(v16 + a1[1] + 104) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 16);
          a2 = a1[1];
          *(_DWORD *)(v16 + a2 + 108) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 20);
          --v15;
        }
        while ( v15 );
      }
      if ( v14 >= 0 )
      {
        v18 = 88 * v14;
        v19 = 12 * v14;
        do
        {
          --v14;
          v18 -= 88i64;
          v19 -= 12i64;
          *(_DWORD *)(v18 + a1[1] + 100) = *(_DWORD *)(v19 + *(_QWORD *)(*a1 + 24i64) + 12);
          *(_DWORD *)(v18 + a1[1] + 104) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v19 + 16);
          a2 = a1[1];
          *(_DWORD *)(v18 + a2 + 108) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v19 + 20);
        }
        while ( v14 >= 0 );
      }
    }
    v20 = *(void **)(*a1 + 24i64);
    if ( v20 )
    {
      operator delete(v20, a2);
      *(_QWORD *)(*a1 + 24i64) = 0i64;
    }
  }
  result = *(unsigned int *)(*a1 + 216i64);
  if ( (_DWORD)result )
  {
    v22 = result - 1;
    v23 = v22;
    if ( v22 >= 0 )
    {
      if ( v22 + 1i64 >= 4 )
      {
        v24 = (unsigned __int64)(v22 + 1i64) >> 2;
        v25 = 88i64 * v22;
        v26 = 12i64 * v22;
        v23 = v22 - 4 * v24;
        do
        {
          v25 -= 352i64;
          v26 -= 48i64;
          *(_DWORD *)(v25 + a1[1] + 376) = *(_DWORD *)(v26 + *(_QWORD *)(*a1 + 208i64) + 48);
          *(_DWORD *)(v25 + a1[1] + 380) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 52);
          *(_DWORD *)(v25 + a1[1] + 384) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 56);
          *(_DWORD *)(v25 + a1[1] + 388) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 288) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 36);
          *(_DWORD *)(v25 + a1[1] + 292) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 40);
          *(_DWORD *)(v25 + a1[1] + 296) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 44);
          *(_DWORD *)(v25 + a1[1] + 300) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 200) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 24);
          *(_DWORD *)(v25 + a1[1] + 204) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 28);
          *(_DWORD *)(v25 + a1[1] + 208) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 32);
          *(_DWORD *)(v25 + a1[1] + 212) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 112) = *(_DWORD *)(v26 + *(_QWORD *)(*a1 + 208i64) + 12);
          *(_DWORD *)(v25 + a1[1] + 116) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 16);
          a2 = a1[1];
          *(_DWORD *)(v25 + a2 + 120) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 20);
          *(_DWORD *)(v25 + a1[1] + 124) = 1065353216;
          --v24;
        }
        while ( v24 );
      }
      if ( v23 >= 0 )
      {
        v27 = 88 * v23;
        v28 = 12 * v23;
        do
        {
          --v23;
          v27 -= 88i64;
          v28 -= 12i64;
          *(_DWORD *)(v27 + a1[1] + 112) = *(_DWORD *)(v28 + *(_QWORD *)(*a1 + 208i64) + 12);
          *(_DWORD *)(v27 + a1[1] + 116) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v28 + 16);
          a2 = a1[1];
          *(_DWORD *)(v27 + a2 + 120) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v28 + 20);
          *(_DWORD *)(v27 + a1[1] + 124) = 1065353216;
        }
        while ( v23 >= 0 );
      }
    }
    result = *a1;
    v29 = *(void **)(*a1 + 208i64);
    if ( v29 )
    {
      operator delete(v29, a2);
      result = *a1;
      *(_QWORD *)(*a1 + 208i64) = 0i64;
    }
  }
  return result;
}

__int64 __fastcall lambda_230801668028c2b66e05f2ecff55509a_::operator()(_QWORD *a1, unsigned __int64 a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r9
  void *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r9
  void *v20; // rcx
  __int64 result; // rax
  int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r10
  void *v29; // rcx

  v3 = *(_DWORD *)(*a1 + 16i64);
  if ( v3 )
  {
    v4 = v3 - 1;
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( v4 + 1i64 >= 4 )
      {
        v6 = (unsigned __int64)(v4 + 1i64) >> 2;
        v7 = 136i64 * v4;
        v8 = 12i64 * v4;
        v5 = v4 - 4 * v6;
        do
        {
          v7 -= 544i64;
          v8 -= 48i64;
          *(_DWORD *)(v7 + a1[1] + 544) = *(_DWORD *)(v8 + *(_QWORD *)(*a1 + 8i64) + 48);
          *(_DWORD *)(v7 + a1[1] + 548) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 52);
          *(_DWORD *)(v7 + a1[1] + 552) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 56);
          *(_DWORD *)(v7 + a1[1] + 408) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 36);
          *(_DWORD *)(v7 + a1[1] + 412) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 40);
          *(_DWORD *)(v7 + a1[1] + 416) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 44);
          *(_DWORD *)(v7 + a1[1] + 272) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 24);
          *(_DWORD *)(v7 + a1[1] + 276) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 28);
          *(_DWORD *)(v7 + a1[1] + 280) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 32);
          *(_DWORD *)(v7 + a1[1] + 136) = *(_DWORD *)(v8 + *(_QWORD *)(*a1 + 8i64) + 12);
          *(_DWORD *)(v7 + a1[1] + 140) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 16);
          a2 = a1[1];
          *(_DWORD *)(v7 + a2 + 144) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 20);
          --v6;
        }
        while ( v6 );
      }
      if ( v5 >= 0 )
      {
        v9 = 136 * v5;
        v10 = 12 * v5;
        do
        {
          --v5;
          v9 -= 136i64;
          v10 -= 12i64;
          *(_DWORD *)(v9 + a1[1] + 136) = *(_DWORD *)(v10 + *(_QWORD *)(*a1 + 8i64) + 12);
          *(_DWORD *)(v9 + a1[1] + 140) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v10 + 16);
          a2 = a1[1];
          *(_DWORD *)(v9 + a2 + 144) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v10 + 20);
        }
        while ( v5 >= 0 );
      }
    }
    v11 = *(void **)(*a1 + 8i64);
    if ( v11 )
    {
      operator delete(v11, a2);
      *(_QWORD *)(*a1 + 8i64) = 0i64;
    }
  }
  v12 = *(_DWORD *)(*a1 + 32i64);
  if ( v12 )
  {
    v13 = v12 - 1;
    v14 = v13;
    if ( v13 >= 0 )
    {
      if ( v13 + 1i64 >= 4 )
      {
        v15 = (unsigned __int64)(v13 + 1i64) >> 2;
        v16 = 136i64 * v13;
        v17 = 12i64 * v13;
        v14 = v13 - 4 * v15;
        do
        {
          v16 -= 544i64;
          v17 -= 48i64;
          *(_DWORD *)(v16 + a1[1] + 556) = *(_DWORD *)(v17 + *(_QWORD *)(*a1 + 24i64) + 48);
          *(_DWORD *)(v16 + a1[1] + 560) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 52);
          *(_DWORD *)(v16 + a1[1] + 564) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 56);
          *(_DWORD *)(v16 + a1[1] + 420) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 36);
          *(_DWORD *)(v16 + a1[1] + 424) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 40);
          *(_DWORD *)(v16 + a1[1] + 428) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 44);
          *(_DWORD *)(v16 + a1[1] + 284) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 24);
          *(_DWORD *)(v16 + a1[1] + 288) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 28);
          *(_DWORD *)(v16 + a1[1] + 292) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 32);
          *(_DWORD *)(v16 + a1[1] + 148) = *(_DWORD *)(v17 + *(_QWORD *)(*a1 + 24i64) + 12);
          *(_DWORD *)(v16 + a1[1] + 152) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 16);
          a2 = a1[1];
          *(_DWORD *)(v16 + a2 + 156) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 20);
          --v15;
        }
        while ( v15 );
      }
      if ( v14 >= 0 )
      {
        v18 = 136 * v14;
        v19 = 12 * v14;
        do
        {
          --v14;
          v18 -= 136i64;
          v19 -= 12i64;
          *(_DWORD *)(v18 + a1[1] + 148) = *(_DWORD *)(v19 + *(_QWORD *)(*a1 + 24i64) + 12);
          *(_DWORD *)(v18 + a1[1] + 152) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v19 + 16);
          a2 = a1[1];
          *(_DWORD *)(v18 + a2 + 156) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v19 + 20);
        }
        while ( v14 >= 0 );
      }
    }
    v20 = *(void **)(*a1 + 24i64);
    if ( v20 )
    {
      operator delete(v20, a2);
      *(_QWORD *)(*a1 + 24i64) = 0i64;
    }
  }
  result = *(unsigned int *)(*a1 + 216i64);
  if ( (_DWORD)result )
  {
    v22 = result - 1;
    v23 = v22;
    if ( v22 >= 0 )
    {
      if ( v22 + 1i64 >= 4 )
      {
        v24 = (unsigned __int64)(v22 + 1i64) >> 2;
        v25 = 136i64 * v22;
        v26 = 12i64 * v22;
        v23 = v22 - 4 * v24;
        do
        {
          v25 -= 544i64;
          v26 -= 48i64;
          *(_DWORD *)(v25 + a1[1] + 568) = *(_DWORD *)(v26 + *(_QWORD *)(*a1 + 208i64) + 48);
          *(_DWORD *)(v25 + a1[1] + 572) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 52);
          *(_DWORD *)(v25 + a1[1] + 576) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 56);
          *(_DWORD *)(v25 + a1[1] + 580) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 432) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 36);
          *(_DWORD *)(v25 + a1[1] + 436) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 40);
          *(_DWORD *)(v25 + a1[1] + 440) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 44);
          *(_DWORD *)(v25 + a1[1] + 444) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 296) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 24);
          *(_DWORD *)(v25 + a1[1] + 300) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 28);
          *(_DWORD *)(v25 + a1[1] + 304) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 32);
          *(_DWORD *)(v25 + a1[1] + 308) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 160) = *(_DWORD *)(v26 + *(_QWORD *)(*a1 + 208i64) + 12);
          *(_DWORD *)(v25 + a1[1] + 164) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 16);
          a2 = a1[1];
          *(_DWORD *)(v25 + a2 + 168) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 20);
          *(_DWORD *)(v25 + a1[1] + 172) = 1065353216;
          --v24;
        }
        while ( v24 );
      }
      if ( v23 >= 0 )
      {
        v27 = 136 * v23;
        v28 = 12 * v23;
        do
        {
          --v23;
          v27 -= 136i64;
          v28 -= 12i64;
          *(_DWORD *)(v27 + a1[1] + 160) = *(_DWORD *)(v28 + *(_QWORD *)(*a1 + 208i64) + 12);
          *(_DWORD *)(v27 + a1[1] + 164) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v28 + 16);
          a2 = a1[1];
          *(_DWORD *)(v27 + a2 + 168) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v28 + 20);
          *(_DWORD *)(v27 + a1[1] + 172) = 1065353216;
        }
        while ( v23 >= 0 );
      }
    }
    result = *a1;
    v29 = *(void **)(*a1 + 208i64);
    if ( v29 )
    {
      operator delete(v29, a2);
      result = *a1;
      *(_QWORD *)(*a1 + 208i64) = 0i64;
    }
  }
  return result;
}

__int64 __fastcall lambda_49e167d41e58ceaf27bb79ed79325610_::operator()(_QWORD *a1, unsigned __int64 a2)
{
  int v3; // eax
  int v4; // eax
  __int64 v5; // r8
  unsigned __int64 v6; // r11
  __int64 v7; // r10
  __int64 v8; // r9
  __int64 v9; // r10
  __int64 v10; // r9
  void *v11; // rcx
  int v12; // eax
  int v13; // eax
  __int64 v14; // r8
  unsigned __int64 v15; // r11
  __int64 v16; // r10
  __int64 v17; // r9
  __int64 v18; // r10
  __int64 v19; // r9
  void *v20; // rcx
  __int64 result; // rax
  int v22; // eax
  __int64 v23; // r8
  unsigned __int64 v24; // r11
  __int64 v25; // r10
  __int64 v26; // r9
  __int64 v27; // r9
  __int64 v28; // r10
  void *v29; // rcx

  v3 = *(_DWORD *)(*a1 + 16i64);
  if ( v3 )
  {
    v4 = v3 - 1;
    v5 = v4;
    if ( v4 >= 0 )
    {
      if ( v4 + 1i64 >= 4 )
      {
        v6 = (unsigned __int64)(v4 + 1i64) >> 2;
        v7 = 88i64 * v4;
        v8 = 12i64 * v4;
        v5 = v4 - 4 * v6;
        do
        {
          v7 -= 352i64;
          v8 -= 48i64;
          *(_DWORD *)(v7 + a1[1] + 352) = *(_DWORD *)(v8 + *(_QWORD *)(*a1 + 8i64) + 48);
          *(_DWORD *)(v7 + a1[1] + 356) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 52);
          *(_DWORD *)(v7 + a1[1] + 360) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 56);
          *(_DWORD *)(v7 + a1[1] + 264) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 36);
          *(_DWORD *)(v7 + a1[1] + 268) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 40);
          *(_DWORD *)(v7 + a1[1] + 272) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 44);
          *(_DWORD *)(v7 + a1[1] + 176) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 24);
          *(_DWORD *)(v7 + a1[1] + 180) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 28);
          *(_DWORD *)(v7 + a1[1] + 184) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 32);
          *(_DWORD *)(v7 + a1[1] + 88) = *(_DWORD *)(v8 + *(_QWORD *)(*a1 + 8i64) + 12);
          *(_DWORD *)(v7 + a1[1] + 92) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 16);
          a2 = a1[1];
          *(_DWORD *)(v7 + a2 + 96) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v8 + 20);
          --v6;
        }
        while ( v6 );
      }
      if ( v5 >= 0 )
      {
        v9 = 88 * v5;
        v10 = 12 * v5;
        do
        {
          --v5;
          v9 -= 88i64;
          v10 -= 12i64;
          *(_DWORD *)(v9 + a1[1] + 88) = *(_DWORD *)(v10 + *(_QWORD *)(*a1 + 8i64) + 12);
          *(_DWORD *)(v9 + a1[1] + 92) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v10 + 16);
          a2 = a1[1];
          *(_DWORD *)(v9 + a2 + 96) = *(_DWORD *)(*(_QWORD *)(*a1 + 8i64) + v10 + 20);
        }
        while ( v5 >= 0 );
      }
    }
    v11 = *(void **)(*a1 + 8i64);
    if ( v11 )
    {
      operator delete(v11, a2);
      *(_QWORD *)(*a1 + 8i64) = 0i64;
    }
  }
  v12 = *(_DWORD *)(*a1 + 32i64);
  if ( v12 )
  {
    v13 = v12 - 1;
    v14 = v13;
    if ( v13 >= 0 )
    {
      if ( v13 + 1i64 >= 4 )
      {
        v15 = (unsigned __int64)(v13 + 1i64) >> 2;
        v16 = 88i64 * v13;
        v17 = 12i64 * v13;
        v14 = v13 - 4 * v15;
        do
        {
          v16 -= 352i64;
          v17 -= 48i64;
          *(_DWORD *)(v16 + a1[1] + 364) = *(_DWORD *)(v17 + *(_QWORD *)(*a1 + 24i64) + 48);
          *(_DWORD *)(v16 + a1[1] + 368) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 52);
          *(_DWORD *)(v16 + a1[1] + 372) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 56) ^ _xmm;
          *(_DWORD *)(v16 + a1[1] + 276) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 36);
          *(_DWORD *)(v16 + a1[1] + 280) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 40);
          *(_DWORD *)(v16 + a1[1] + 284) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 44) ^ _xmm;
          *(_DWORD *)(v16 + a1[1] + 188) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 24);
          *(_DWORD *)(v16 + a1[1] + 192) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 28);
          *(_DWORD *)(v16 + a1[1] + 196) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 32) ^ _xmm;
          *(_DWORD *)(v16 + a1[1] + 100) = *(_DWORD *)(v17 + *(_QWORD *)(*a1 + 24i64) + 12);
          a2 = a1[1];
          *(_DWORD *)(v16 + a2 + 104) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 16);
          *(_DWORD *)(v16 + a1[1] + 108) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v17 + 20) ^ _xmm;
          --v15;
        }
        while ( v15 );
      }
      if ( v14 >= 0 )
      {
        v18 = 88 * v14;
        v19 = 12 * v14;
        do
        {
          --v14;
          v18 -= 88i64;
          v19 -= 12i64;
          *(_DWORD *)(v18 + a1[1] + 100) = *(_DWORD *)(v19 + *(_QWORD *)(*a1 + 24i64) + 12);
          a2 = a1[1];
          *(_DWORD *)(v18 + a2 + 104) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v19 + 16);
          *(_DWORD *)(v18 + a1[1] + 108) = *(_DWORD *)(*(_QWORD *)(*a1 + 24i64) + v19 + 20) ^ _xmm;
        }
        while ( v14 >= 0 );
      }
    }
    v20 = *(void **)(*a1 + 24i64);
    if ( v20 )
    {
      operator delete(v20, a2);
      *(_QWORD *)(*a1 + 24i64) = 0i64;
    }
  }
  result = *(unsigned int *)(*a1 + 216i64);
  if ( (_DWORD)result )
  {
    v22 = result - 1;
    v23 = v22;
    if ( v22 >= 0 )
    {
      if ( v22 + 1i64 >= 4 )
      {
        v24 = (unsigned __int64)(v22 + 1i64) >> 2;
        v25 = 88i64 * v22;
        v26 = 12i64 * v22;
        v23 = v22 - 4 * v24;
        do
        {
          v25 -= 352i64;
          v26 -= 48i64;
          *(_DWORD *)(v25 + a1[1] + 376) = *(_DWORD *)(v26 + *(_QWORD *)(*a1 + 208i64) + 48);
          *(_DWORD *)(v25 + a1[1] + 380) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 52);
          *(_DWORD *)(v25 + a1[1] + 384) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 56) ^ _xmm;
          *(_DWORD *)(v25 + a1[1] + 388) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 288) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 36);
          *(_DWORD *)(v25 + a1[1] + 292) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 40);
          *(_DWORD *)(v25 + a1[1] + 296) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 44) ^ _xmm;
          *(_DWORD *)(v25 + a1[1] + 300) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 200) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 24);
          *(_DWORD *)(v25 + a1[1] + 204) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 28);
          *(_DWORD *)(v25 + a1[1] + 208) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 32) ^ _xmm;
          *(_DWORD *)(v25 + a1[1] + 212) = 1065353216;
          *(_DWORD *)(v25 + a1[1] + 112) = *(_DWORD *)(v26 + *(_QWORD *)(*a1 + 208i64) + 12);
          a2 = a1[1];
          *(_DWORD *)(v25 + a2 + 116) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 16);
          *(_DWORD *)(v25 + a1[1] + 120) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v26 + 20) ^ _xmm;
          *(_DWORD *)(v25 + a1[1] + 124) = 1065353216;
          --v24;
        }
        while ( v24 );
      }
      if ( v23 >= 0 )
      {
        v27 = 88 * v23;
        v28 = 12 * v23;
        do
        {
          --v23;
          v27 -= 88i64;
          v28 -= 12i64;
          *(_DWORD *)(v27 + a1[1] + 112) = *(_DWORD *)(v28 + *(_QWORD *)(*a1 + 208i64) + 12);
          a2 = a1[1];
          *(_DWORD *)(v27 + a2 + 116) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v28 + 16);
          *(_DWORD *)(v27 + a1[1] + 120) = *(_DWORD *)(*(_QWORD *)(*a1 + 208i64) + v28 + 20) ^ _xmm;
          *(_DWORD *)(v27 + a1[1] + 124) = 1065353216;
        }
        while ( v23 >= 0 );
      }
    }
    result = *a1;
    v29 = *(void **)(*a1 + 208i64);
    if ( v29 )
    {
      operator delete(v29, a2);
      result = *a1;
      *(_QWORD *)(*a1 + 208i64) = 0i64;
    }
  }
  return result;
}

__int64 __fastcall std::_Pad::_Call_func(void *_Data)
{
  (**(void (__fastcall ***)(void *))_Data)(_Data);
  Cnd_do_broadcast_at_thread_exit();
  return 0i64;
}

// attributes: thunk
void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_1247ded54a2e5f087cbbad2046cfed3a_>>>::_Go(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> >> > *this)
{
  std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_1247ded54a2e5f087cbbad2046cfed3a_>>>::_Run(this);
}

// attributes: thunk
void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>>>::_Go(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_12b90ea9f2fd716190554ece8222dbaa> >> > *this)
{
  std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>>>::_Run(this);
}

// attributes: thunk
void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_230801668028c2b66e05f2ecff55509a_>>>::_Go(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_230801668028c2b66e05f2ecff55509a> >> > *this)
{
  std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_230801668028c2b66e05f2ecff55509a_>>>::_Run(this);
}

// attributes: thunk
void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_49e167d41e58ceaf27bb79ed79325610_>>>::_Go(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> > *this)
{
  std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_49e167d41e58ceaf27bb79ed79325610_>>>::_Run(this);
}

void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_1247ded54a2e5f087cbbad2046cfed3a_>>>::_Run(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> >> > *_Ln)
{
  std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> > *Myval2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // rdx

  Myval2 = _Ln->_MyTarget._Mypair._Myval2;
  _Ln->_MyTarget._Mypair._Myval2 = 0i64;
  v3 = Mtx_lock(_Ln->_Mtx);
  if ( v3 )
    std::_Throw_C_error(v3);
  _Ln->_Started = 1;
  v4 = Cnd_signal(_Ln->_Cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = Mtx_unlock(_Ln->_Mtx);
  if ( v5 )
    std::_Throw_C_error(v5);
  lambda_1247ded54a2e5f087cbbad2046cfed3a_::operator()(Myval2, v6);
  if ( Myval2 )
    operator delete(Myval2, 0x10ui64);
}

void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>>>::_Run(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_12b90ea9f2fd716190554ece8222dbaa> >> > *_Ln)
{
  std::tuple<<lambda_12b90ea9f2fd716190554ece8222dbaa> > *Myval2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // rdx

  Myval2 = _Ln->_MyTarget._Mypair._Myval2;
  _Ln->_MyTarget._Mypair._Myval2 = 0i64;
  v3 = Mtx_lock(_Ln->_Mtx);
  if ( v3 )
    std::_Throw_C_error(v3);
  _Ln->_Started = 1;
  v4 = Cnd_signal(_Ln->_Cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = Mtx_unlock(_Ln->_Mtx);
  if ( v5 )
    std::_Throw_C_error(v5);
  lambda_12b90ea9f2fd716190554ece8222dbaa_::operator()(Myval2, v6);
  if ( Myval2 )
    operator delete(Myval2, 0x10ui64);
}

void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_230801668028c2b66e05f2ecff55509a_>>>::_Run(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_230801668028c2b66e05f2ecff55509a> >> > *_Ln)
{
  std::tuple<<lambda_230801668028c2b66e05f2ecff55509a> > *Myval2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // rdx

  Myval2 = _Ln->_MyTarget._Mypair._Myval2;
  _Ln->_MyTarget._Mypair._Myval2 = 0i64;
  v3 = Mtx_lock(_Ln->_Mtx);
  if ( v3 )
    std::_Throw_C_error(v3);
  _Ln->_Started = 1;
  v4 = Cnd_signal(_Ln->_Cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = Mtx_unlock(_Ln->_Mtx);
  if ( v5 )
    std::_Throw_C_error(v5);
  lambda_230801668028c2b66e05f2ecff55509a_::operator()(Myval2, v6);
  if ( Myval2 )
    operator delete(Myval2, 0x10ui64);
}

void __fastcall std::_LaunchPad<std::unique_ptr<std::tuple<_lambda_49e167d41e58ceaf27bb79ed79325610_>>>::_Run(
        std::_LaunchPad<std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> > *_Ln)
{
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *Myval2; // rdi
  int v3; // eax
  int v4; // eax
  int v5; // eax
  unsigned __int64 v6; // rdx

  Myval2 = _Ln->_MyTarget._Mypair._Myval2;
  _Ln->_MyTarget._Mypair._Myval2 = 0i64;
  v3 = Mtx_lock(_Ln->_Mtx);
  if ( v3 )
    std::_Throw_C_error(v3);
  _Ln->_Started = 1;
  v4 = Cnd_signal(_Ln->_Cond);
  if ( v4 )
    std::_Throw_C_error(v4);
  v5 = Mtx_unlock(_Ln->_Mtx);
  if ( v5 )
    std::_Throw_C_error(v5);
  lambda_49e167d41e58ceaf27bb79ed79325610_::operator()(Myval2, v6);
  if ( Myval2 )
    operator delete(Myval2, 0x10ui64);
}

void __fastcall OGLFigure::calcTangentAndBinormal(
        OGLFigure *this,
        float *p0,
        float *uv0,
        float *p1,
        float *uv1,
        float *p2,
        float *uv2,
        float *outTangent)
{
  int v8; // xmm2_4
  int v9; // xmm1_4
  int v10; // xmm0_4
  int v11; // xmm2_4
  int v12; // xmm1_4
  int v13; // xmm0_4
  __int64 v14; // rcx
  int v15; // xmm2_4
  int v16; // xmm1_4
  __int64 v17; // rax
  float v18; // xmm6_4
  float v19; // xmm5_4
  float v20; // xmm4_4
  float v21; // xmm7_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  float v24; // xmm6_4
  float v25; // xmm2_4
  float v26; // xmm8_4
  float v27; // xmm7_4
  float v28; // xmm7_4
  float v29; // xmm8_4
  float v30; // xmm6_4
  float v31; // xmm0_4
  float v32; // xmm6_4
  float v33; // xmm7_4
  float v34; // xmm8_4
  __int64 v35; // [rsp+28h] [rbp-E0h]
  __int64 v36; // [rsp+30h] [rbp-D8h]
  __int64 v37; // [rsp+38h] [rbp-D0h]
  float v38; // [rsp+40h] [rbp-C8h]
  int v39; // [rsp+48h] [rbp-C0h]
  int v40; // [rsp+4Ch] [rbp-BCh]
  int v41[8]; // [rsp+50h] [rbp-B8h]
  int v42; // [rsp+70h] [rbp-98h]
  int v43; // [rsp+74h] [rbp-94h]
  int v44[8]; // [rsp+78h] [rbp-90h]
  int v45; // [rsp+98h] [rbp-70h]
  int v46; // [rsp+9Ch] [rbp-6Ch]
  int v47[8]; // [rsp+A0h] [rbp-68h]

  v8 = *(_DWORD *)uv0;
  v9 = *((_DWORD *)uv0 + 1);
  v42 = *(_DWORD *)p0;
  v44[1] = (int)p0[1];
  v44[4] = (int)p0[2];
  v39 = *(_DWORD *)p1;
  v41[1] = (int)p1[1];
  v41[4] = (int)p1[2];
  v10 = *(_DWORD *)p2;
  v43 = v8;
  v44[0] = v9;
  v44[2] = v8;
  v44[3] = v9;
  v44[5] = v8;
  v11 = *(_DWORD *)uv1;
  v44[6] = v9;
  v12 = *((_DWORD *)uv1 + 1);
  v45 = v10;
  v47[1] = (int)p2[1];
  v13 = *((_DWORD *)p2 + 2);
  v14 = 0i64;
  v40 = v11;
  v41[0] = v12;
  v41[2] = v11;
  v41[3] = v12;
  v41[5] = v11;
  v15 = *(_DWORD *)uv2;
  v41[6] = v12;
  v16 = *((_DWORD *)uv2 + 1);
  v17 = 0i64;
  v47[4] = v13;
  v46 = v15;
  v47[0] = v16;
  v47[2] = v15;
  v47[3] = v16;
  v47[5] = v15;
  v47[6] = v16;
  while ( 1 )
  {
    v18 = *(float *)((char *)&v39 + v17 * 4);
    v19 = *(float *)&v41[v17 - 1];
    v20 = *(float *)((char *)&v45 + v17 * 4) - v18;
    v21 = *(float *)&v47[v17 - 1] - v19;
    v22 = v19 - *(float *)&v44[v17 - 1];
    v23 = *(float *)&v41[v17] - *(float *)&v44[v17];
    v24 = v18 - *(float *)((char *)&v42 + v17 * 4);
    v25 = *(float *)&v47[v17] - *(float *)&v41[v17];
    v26 = (float)(v25 * v22) - (float)(v21 * v23);
    v27 = (float)(v21 * v24) - (float)(v20 * v22);
    if ( v26 == 0.0 )
      break;
    v17 += 3i64;
    *(_DWORD *)((char *)&v35 + v14) = COERCE_UNSIGNED_INT((float)((float)(v20 * v23) - (float)(v25 * v24)) / v26) ^ _xmm;
    *(_DWORD *)((char *)&v37 + v14) = COERCE_UNSIGNED_INT(v27 / v26) ^ _xmm;
    v14 += 4i64;
    if ( v17 >= 9 )
    {
      if ( outTangent )
      {
        v28 = *((float *)&v35 + 1);
        v29 = *(float *)&v35;
        v30 = *(float *)&v36;
        v37 = v35;
        v38 = *(float *)&v36;
        v31 = sqrtf((float)((float)(v28 * v28) + (float)(v29 * v29)) + (float)(v30 * v30));
        if ( v31 == 0.0 )
        {
          v32 = v38;
          v33 = *((float *)&v37 + 1);
          v34 = *(float *)&v37;
        }
        else
        {
          v34 = v29 / v31;
          v33 = v28 / v31;
          v32 = v30 / v31;
        }
        *outTangent = v34;
        outTangent[1] = v33;
        outTangent[2] = v32;
      }
      return;
    }
  }
  if ( outTangent )
  {
    *(_QWORD *)outTangent = 1065353216i64;
    outTangent[2] = 0.0;
  }
}

void __fastcall OGLFigure::copyParamaterGPU(OGLFigure *this, __int64 a2, unsigned __int64 a3)
{
  unsigned int m_uiStateFlg; // ecx
  __int64 m_usVertexColorCount; // rdx
  Framework::GLManager *v6; // r15
  void *v7; // rbx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r8
  float *m_pfVertexColor; // rcx
  unsigned int v11; // edi
  float **m_pfTexCoord; // rbx
  unsigned int *m_usTexCoordCount; // rbp
  void *v14; // r14
  unsigned __int64 v15; // rdx

  m_uiStateFlg = this->m_uiStateFlg;
  if ( (m_uiStateFlg & 1) == 0 )
  {
    m_usVertexColorCount = this->m_usVertexColorCount;
    this->m_uiStateFlg = m_uiStateFlg | 1;
    v6 = Framework::GLManager::glm;
    v7 = Framework::MemoryManager::allocate(
           &Framework::GLManager::glm->allocateStaticBuffers,
           16 * m_usVertexColorCount,
           a3);
    memmove(v7, this->m_pfVertexColor, 16i64 * this->m_usVertexColorCount);
    m_pfVertexColor = this->m_pfVertexColor;
    if ( m_pfVertexColor )
    {
      operator delete(m_pfVertexColor, v8);
      this->m_pfVertexColor = 0i64;
    }
    v11 = 0;
    this->m_pfVertexColor = (float *)v7;
    if ( this->m_uiMultiUvCount )
    {
      m_pfTexCoord = this->m_pfTexCoord;
      m_usTexCoordCount = this->m_usTexCoordCount;
      do
      {
        v14 = Framework::MemoryManager::allocate(&v6->allocateStaticBuffers, 8i64 * *m_usTexCoordCount, v9);
        memmove(v14, *m_pfTexCoord, 8i64 * *m_usTexCoordCount);
        if ( *m_pfTexCoord )
        {
          operator delete(*m_pfTexCoord, v15);
          *m_pfTexCoord = 0i64;
        }
        *m_pfTexCoord = (float *)v14;
        ++v11;
        ++m_pfTexCoord;
        ++m_usTexCoordCount;
      }
      while ( v11 < this->m_uiMultiUvCount );
    }
  }
}

OGLFigure *__fastcall OGLFigure::createFigure(
        unsigned __int8 *buf,
        int size,
        unsigned __int8 bMemoryTypeCPU,
        unsigned __int8 bNoMotion)
{
  OGLFigure *v8; // rax
  OGLFigure *v9; // rbx
  unsigned int v10; // edx
  OGLFigure *v12; // [rsp+20h] [rbp-18h]

  v12 = (OGLFigure *)operator new(0x108ui64);
  OGLFigure::OGLFigure(v12);
  v9 = v8;
  if ( v8 )
  {
    if ( bNoMotion )
      v8->m_uiStateFlg |= 8u;
    if ( bMemoryTypeCPU )
      v8->m_uiStateFlg |= 6u;
    if ( OGLFigure::loadObacData(v8, buf, size) )
      return v9;
    OGLFigure::`scalar deleting destructor'(v9, v10);
  }
  return 0i64;
}

void __fastcall OGLFigure::finalize(OGLFigure *this, unsigned __int64 a2)
{
  signed int i; // ebx
  signed int j; // ebx
  __int64 v5; // rcx
  float *m_pfVertexCoord; // rcx
  float *m_pfNormalCoord; // rcx
  float *m_pfTangentCoord; // rcx
  OGLMatrix *m_pBindPose; // rcx
  OGLBone *m_pBone; // rcx
  _QWORD *p_w; // rbx
  OGLMaterial *m_pMaterial; // rcx
  int *p_m_iRenderNo; // rbx
  Framework::GLManager *v14; // rbp
  void *m_pfVertexBuffer; // rcx
  float *m_pfVertexColor; // rdx
  void **m_pfTexCoord; // rsi
  __int64 v18; // rbx
  float *v19; // rcx
  void **v20; // rsi
  __int64 v21; // rbx
  unsigned int *m_pusIndex; // rdx
  unsigned __int16 *m_pussIndex; // rdx
  int *m_psMaterialIndex; // rcx
  int *m_psVertexCoordIndex; // rcx
  OGLVertexOptiInfo *m_pVerOptiInfo; // rcx
  unsigned __int16 *v27; // rbx
  unsigned __int8 *m_cBoneNames; // rcx
  unsigned __int8 *m_cMatreialNames; // rcx
  unsigned __int64 *m_iBoneHash; // rcx

  for ( i = 0; i < (signed int)this->m_uiBoneCount; ++i )
    OGLBone::finalize(&this->m_pBone[i]);
  for ( j = 0; j < (signed int)this->m_ucMaterialCount; ++j )
    OGLMaterial::finalize(&this->m_pMaterial[j]);
  if ( this->m_pVerOptiInfo )
  {
    a2 = 0i64;
    if ( (int)this->m_usVertexCoordCount > 0 )
    {
      v5 = 0i64;
      do
      {
        *(_QWORD *)&this->m_pVerOptiInfo[v5].VerCoordFlg = 0i64;
        a2 = (unsigned int)(a2 + 1);
        ++v5;
      }
      while ( (int)a2 < (signed int)this->m_usVertexCoordCount );
    }
  }
  m_pfVertexCoord = this->m_pfVertexCoord;
  if ( m_pfVertexCoord )
  {
    operator delete(m_pfVertexCoord, a2);
    this->m_pfVertexCoord = 0i64;
  }
  m_pfNormalCoord = this->m_pfNormalCoord;
  if ( m_pfNormalCoord )
  {
    operator delete(m_pfNormalCoord, a2);
    this->m_pfNormalCoord = 0i64;
  }
  m_pfTangentCoord = this->m_pfTangentCoord;
  if ( m_pfTangentCoord )
  {
    operator delete(m_pfTangentCoord, a2);
    this->m_pfTangentCoord = 0i64;
  }
  m_pBindPose = this->m_pBindPose;
  if ( m_pBindPose )
  {
    operator delete(m_pBindPose, a2);
    this->m_pBindPose = 0i64;
  }
  m_pBone = this->m_pBone;
  if ( m_pBone )
  {
    p_w = (_QWORD *)&m_pBone[-1].m_aBindPose.m_vPrevRot.w;
    `eh vector destructor iterator'(
      m_pBone,
      0xE8ui64,
      *(_QWORD *)&m_pBone[-1].m_aBindPose.m_vPrevRot.w,
      (void (__fastcall *)(void *))OGLBone::~OGLBone);
    operator delete[](p_w, 232i64 * *p_w + 8);
    this->m_pBone = 0i64;
  }
  m_pMaterial = this->m_pMaterial;
  if ( m_pMaterial )
  {
    p_m_iRenderNo = &m_pMaterial[-1].m_iRenderNo;
    `eh vector destructor iterator'(
      m_pMaterial,
      0x468ui64,
      *(_QWORD *)&m_pMaterial[-1].m_iRenderNo,
      (void (__fastcall *)(void *))OGLMaterial::~OGLMaterial);
    operator delete[](p_m_iRenderNo, 1128i64 * *(_QWORD *)p_m_iRenderNo + 8);
    this->m_pMaterial = 0i64;
  }
  v14 = Framework::GLManager::glm;
  if ( (this->m_uiStateFlg & 2) != 0 )
  {
    m_pfVertexBuffer = this->m_pfVertexBuffer;
    if ( !m_pfVertexBuffer )
      goto LABEL_27;
    operator delete(m_pfVertexBuffer, a2);
  }
  else
  {
    a2 = (unsigned __int64)this->m_pfVertexBuffer;
    if ( !a2 )
      goto LABEL_27;
    Framework::MemoryManager::release(&Framework::GLManager::glm->allocateStaticBuffers, (void *)a2);
  }
  this->m_pfVertexBuffer = 0i64;
LABEL_27:
  if ( this->m_pfIndexBuffer )
    this->m_pfIndexBuffer = 0i64;
  if ( (this->m_uiStateFlg & 1) != 0 )
  {
    m_pfVertexColor = this->m_pfVertexColor;
    if ( m_pfVertexColor )
    {
      Framework::MemoryManager::release(&v14->allocateStaticBuffers, m_pfVertexColor);
      this->m_pfVertexColor = 0i64;
    }
    m_pfTexCoord = (void **)this->m_pfTexCoord;
    v18 = 4i64;
    do
    {
      if ( *m_pfTexCoord )
      {
        Framework::MemoryManager::release(&v14->allocateStaticBuffers, *m_pfTexCoord);
        *m_pfTexCoord = 0i64;
      }
      ++m_pfTexCoord;
      --v18;
    }
    while ( v18 );
  }
  else
  {
    v19 = this->m_pfVertexColor;
    if ( v19 )
    {
      operator delete(v19, a2);
      this->m_pfVertexColor = 0i64;
    }
    v20 = (void **)this->m_pfTexCoord;
    v21 = 4i64;
    do
    {
      if ( *v20 )
      {
        operator delete(*v20, a2);
        *v20 = 0i64;
      }
      ++v20;
      --v21;
    }
    while ( v21 );
  }
  m_pusIndex = this->m_pusIndex;
  if ( m_pusIndex )
  {
    if ( (this->m_uiStateFlg & 4) != 0 )
      operator delete(this->m_pusIndex, (unsigned __int64)m_pusIndex);
    else
      Framework::MemoryManager::release(&v14->allocateStaticBuffers, m_pusIndex);
    this->m_pusIndex = 0i64;
  }
  m_pussIndex = this->m_pussIndex;
  if ( m_pussIndex )
  {
    if ( (this->m_uiStateFlg & 4) != 0 )
      operator delete(this->m_pussIndex, (unsigned __int64)m_pussIndex);
    else
      Framework::MemoryManager::release(&v14->allocateStaticBuffers, m_pussIndex);
    this->m_pussIndex = 0i64;
  }
  m_psMaterialIndex = this->m_psMaterialIndex;
  if ( m_psMaterialIndex )
  {
    operator delete(m_psMaterialIndex, (unsigned __int64)m_pussIndex);
    this->m_psMaterialIndex = 0i64;
  }
  m_psVertexCoordIndex = this->m_psVertexCoordIndex;
  if ( m_psVertexCoordIndex )
  {
    operator delete(m_psVertexCoordIndex, (unsigned __int64)m_pussIndex);
    this->m_psVertexCoordIndex = 0i64;
  }
  m_pVerOptiInfo = this->m_pVerOptiInfo;
  if ( m_pVerOptiInfo )
  {
    v27 = &m_pVerOptiInfo[-1].pBoneIdx[12];
    `eh vector destructor iterator'(
      m_pVerOptiInfo,
      0x68ui64,
      *(_QWORD *)&m_pVerOptiInfo[-1].pBoneIdx[12],
      (void (__fastcall *)(void *))OGLVertexOptiInfo::~OGLVertexOptiInfo);
    operator delete[](v27, 104i64 * *(_QWORD *)v27 + 8);
    this->m_pVerOptiInfo = 0i64;
  }
  if ( (this->m_iFormatType & 1) != 0 )
  {
    m_cBoneNames = this->m_cBoneNames;
    if ( m_cBoneNames )
    {
      operator delete(m_cBoneNames, (unsigned __int64)m_pussIndex);
      this->m_cBoneNames = 0i64;
    }
    m_cMatreialNames = this->m_cMatreialNames;
    if ( m_cMatreialNames )
    {
      operator delete(m_cMatreialNames, (unsigned __int64)m_pussIndex);
      this->m_cMatreialNames = 0i64;
    }
  }
  this->m_usIndexCount = 0;
  this->m_ucMaterialCount = 0;
  this->m_uiBoneCount = 0;
  *(_QWORD *)this->m_usTexCoordCount = 0i64;
  *(_QWORD *)&this->m_usTexCoordCount[2] = 0i64;
  this->m_usVertexColorCount = 0;
  this->m_usNormalCoordCount = 0;
  this->m_usVertexCoordCount = 0;
  this->m_uiStateFlg = 0;
  m_iBoneHash = this->m_iBoneHash;
  if ( m_iBoneHash )
  {
    operator delete(m_iBoneHash, (unsigned __int64)m_pussIndex);
    this->m_iBoneHash = 0i64;
  }
  if ( this->vertexBuffer )
  {
    _glewDeleteBuffers(1, &this->vertexBuffer);
    this->vertexBuffer = 0;
  }
}

__int64 __fastcall OGLFigure::loadBaseObacData(OGLFigure *this, unsigned __int8 *buffer, unsigned int size)
{
  unsigned int m_uiSize; // er14
  unsigned __int8 *m_pucData; // rsi
  unsigned int v6; // er9
  __int64 v7; // rbx
  int v8; // er12
  int v9; // edx
  __int64 v10; // rbx
  int v11; // edx
  bool v12; // cc
  int v13; // edx
  bool v14; // cc
  int v15; // edx
  int v16; // edx
  signed int m_uiMultiUvCount; // eax
  __int64 v18; // r8
  int v19; // edx
  unsigned int v20; // edx
  __int64 v21; // r15
  __int64 v22; // rax
  bool v23; // cf
  unsigned __int64 v24; // rax
  _QWORD *v25; // rax
  OGLBone *v26; // r12
  unsigned __int64 m_uiBoneCount; // r15
  OGLMatrix *v28; // rax
  unsigned __int64 v29; // rdx
  OGLMatrix *v30; // r12
  signed int v31; // er12
  __int64 v32; // r13
  OGLBone *v33; // r15
  unsigned __int8 *v34; // rax
  int v35; // er15
  unsigned __int64 v36; // rax
  __int64 v37; // r13
  signed int v38; // er10
  __int64 v39; // r8
  __int64 v40; // r9
  int v41; // edx
  signed int v42; // er15
  __int64 v43; // r12
  signed int v44; // er9
  __int64 v45; // r10
  OGLBone *m_pBone; // r8
  __int64 m_sParents; // rax
  __int64 m_sChild; // rdx
  OGLBone *i; // rax
  OGLBone *v50; // rdx
  __int64 v51; // rax
  int *p_m_iNo; // r8
  __int64 v53; // rax
  int v54; // eax
  __int64 v55; // rax
  __int64 v56; // rax
  signed int v57; // er11
  __int64 v58; // r15
  __int64 v59; // r10
  __int64 v60; // r12
  __int64 v61; // r13
  int v62; // er8
  OGLBone *v63; // r9
  int v64; // edx
  int v65; // er8
  unsigned __int8 *v66; // rcx
  OGLMatrix *v67; // rax
  OGLMatrix *m_pBindPose; // rax
  int v69; // edx
  __int64 v70; // rbx
  int v71; // edx
  bool v72; // cc
  int v73; // edx
  int v74; // edx
  signed int v75; // eax
  __int64 v76; // r8
  int v77; // edx
  unsigned int v78; // edx
  __int64 v79; // r15
  __int64 v80; // rax
  unsigned __int64 v81; // rax
  OGLBone *v82; // rax
  unsigned __int64 v83; // r15
  OGLMatrix *v84; // rax
  int v85; // er15
  unsigned __int64 v86; // rax
  signed int v87; // er12
  __int64 v88; // r13
  int v89; // er15
  signed int v90; // er9
  __int64 v91; // r10
  OGLBone *v92; // r8
  __int64 v93; // rax
  __int64 m_sBrother; // rdx
  OGLBone *j; // rax
  signed int v96; // er14
  __int64 v97; // rbx
  __int64 v98; // rsi
  OGLBone *v99; // rcx
  __int64 v100; // rdx
  OGLMatrix *v101; // rax
  OGLMatrix *v102; // rcx
  __int64 v103; // r9
  OGLMatrix *v104; // rax
  __int64 v106; // [rsp+30h] [rbp-49h]
  OGLInputStream format; // [rsp+40h] [rbp-39h] BYREF
  OGLMatrix In1; // [rsp+60h] [rbp-19h] BYREF
  int v109; // [rsp+E8h] [rbp+6Fh]
  unsigned int **p_m_pusIndex; // [rsp+E8h] [rbp+6Fh]
  OGLMatrix *v111; // [rsp+E8h] [rbp+6Fh]
  __int64 v112; // [rsp+E8h] [rbp+6Fh]
  signed int v113; // [rsp+F8h] [rbp+7Fh]

  m_uiSize = size;
  m_pucData = buffer;
  if ( buffer )
  {
    if ( this->m_usVertexCoordCount )
      return (unsigned int)-2;
    if ( *buffer != 83 || buffer[1] != 70 )
      return (unsigned int)-3;
    format.m_pucData = buffer;
    LODWORD(v7) = 0;
    format.m_uiSize = size;
    if ( size && (LODWORD(v7) = 2, size > 2) )
    {
      v8 = buffer[2] | ((buffer[3] | (*((unsigned __int16 *)buffer + 2) << 8)) << 8);
      LODWORD(v7) = 6;
    }
    else
    {
      v8 = 0;
    }
    format.m_uiVersion = v8;
    this->m_iFormatType = v8;
    if ( (v8 & 1) != 0 )
    {
      if ( size <= (unsigned int)v7 || (v7 = (unsigned int)(v7 + 4), size <= (unsigned int)v7) )
      {
        v9 = 0;
      }
      else
      {
        v9 = buffer[v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
        LODWORD(v7) = v7 + 4;
      }
      this->m_usVertexCoordCount = v9;
      v10 = (unsigned int)(12 * v9 + v7);
      if ( size >= (unsigned int)v10 )
      {
        if ( size > (unsigned int)v10 )
        {
          v11 = m_pucData[v10] | ((m_pucData[(unsigned int)(v10 + 1)] | ((m_pucData[(unsigned int)(v10 + 2)] | (m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
          LODWORD(v10) = v10 + 4;
LABEL_21:
          this->m_usNormalCoordCount = v11;
          if ( v11 )
          {
            LODWORD(v10) = 12 * v11 + v10;
            v12 = size <= (unsigned int)v10;
            if ( size < (unsigned int)v10 )
            {
              LODWORD(v10) = size;
              goto LABEL_26;
            }
          }
          else
          {
            v12 = size <= (unsigned int)v10;
          }
          if ( !v12 )
          {
            v13 = m_pucData[(unsigned int)v10] | ((m_pucData[(unsigned int)(v10 + 1)] | ((m_pucData[(unsigned int)(v10 + 2)] | (m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
            LODWORD(v10) = v10 + 4;
LABEL_28:
            this->m_usTangentCoordCount = v13;
            if ( v13 )
            {
              LODWORD(v10) = 12 * v13 + v10;
              v14 = size <= (unsigned int)v10;
              if ( size < (unsigned int)v10 )
              {
                LODWORD(v10) = size;
                goto LABEL_33;
              }
            }
            else
            {
              v14 = size <= (unsigned int)v10;
            }
            if ( !v14 )
            {
              v15 = m_pucData[(unsigned int)v10] | ((m_pucData[(unsigned int)(v10 + 1)] | ((m_pucData[(unsigned int)(v10 + 2)] | (m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
              LODWORD(v10) = v10 + 4;
              goto LABEL_35;
            }
LABEL_33:
            v15 = 0;
LABEL_35:
            this->m_usVertexColorCount = v15;
            if ( v15 )
            {
              LODWORD(v10) = 4 * v15 + v10;
              if ( (unsigned int)v10 > size )
                LODWORD(v10) = size;
            }
            if ( (v8 & 0x4000) != 0 )
            {
              if ( size > (unsigned int)v10 )
              {
                v16 = m_pucData[(unsigned int)v10] | ((m_pucData[(unsigned int)(v10 + 1)] | ((m_pucData[(unsigned int)(v10 + 2)] | (m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
                LODWORD(v10) = v10 + 4;
              }
              else
              {
                v16 = 0;
              }
              this->m_uiMultiUvCount = v16;
            }
            else
            {
              this->m_uiMultiUvCount = 1;
            }
            m_uiMultiUvCount = this->m_uiMultiUvCount;
            if ( m_uiMultiUvCount > 0 )
            {
              v18 = (unsigned int)m_uiMultiUvCount;
              do
              {
                if ( m_uiSize > (unsigned int)v10 )
                {
                  v19 = m_pucData[(unsigned int)v10] | ((m_pucData[(unsigned int)(v10 + 1)] | ((m_pucData[(unsigned int)(v10 + 2)] | (m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
                  LODWORD(v10) = v10 + 4;
                }
                else
                {
                  v19 = 0;
                }
                LODWORD(v10) = v10 + 8 * v19;
                if ( (unsigned int)v10 > m_uiSize )
                  LODWORD(v10) = m_uiSize;
                --v18;
              }
              while ( v18 );
            }
            if ( m_uiSize <= (unsigned int)v10 || (v10 = (unsigned int)(v10 + 4), m_uiSize <= (unsigned int)v10) )
            {
              v20 = 0;
            }
            else
            {
              v20 = m_pucData[v10] | ((m_pucData[(unsigned int)(v10 + 1)] | ((m_pucData[(unsigned int)(v10 + 2)] | (m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
              LODWORD(v10) = v10 + 4;
            }
            this->m_uiBoneCount = v20;
            v21 = v20;
            v22 = 232i64 * v20;
            if ( !is_mul_ok(v20, 0xE8ui64) )
              v22 = -1i64;
            v23 = __CFADD__(v22, 8i64);
            v24 = v22 + 8;
            if ( v23 )
              v24 = -1i64;
            v25 = operator new[](v24);
            if ( v25 )
            {
              *v25 = v21;
              v26 = (OGLBone *)(v25 + 1);
              `eh vector constructor iterator'(
                v25 + 1,
                0xE8ui64,
                (unsigned int)v21,
                (void (__fastcall *)(void *))OGLBone::OGLBone,
                (void (__fastcall *)(void *))OGLBone::~OGLBone);
            }
            else
            {
              v26 = 0i64;
            }
            this->m_pBone = v26;
            m_uiBoneCount = this->m_uiBoneCount;
            v28 = (OGLMatrix *)operator new[](saturated_mul(m_uiBoneCount, 0x40ui64));
            v30 = v28;
            if ( v28 )
            {
              if ( m_uiBoneCount )
                memset(v28, 0, m_uiBoneCount << 6);
            }
            else
            {
              v30 = 0i64;
            }
            this->m_pBindPose = v30;
            if ( this->m_pBone )
            {
              v31 = 0;
              if ( (int)this->m_uiBoneCount > 0 )
              {
                v32 = 0i64;
                do
                {
                  v33 = &this->m_pBone[v32];
                  OGLBone::finalize(v33, v29);
                  v33->m_iNo = v31;
                  v33->m_usIndexCount = 1;
                  if ( m_uiSize > (unsigned int)v10 )
                  {
                    v34 = &m_pucData[(unsigned int)v10];
                    *(_OWORD *)v33->m_mOffset.m = *(_OWORD *)v34;
                    *(_OWORD *)&v33->m_mOffset.m[4] = *((_OWORD *)v34 + 1);
                    *(_OWORD *)&v33->m_mOffset.m[8] = *((_OWORD *)v34 + 2);
                    *(_OWORD *)&v33->m_mOffset.m[12] = *((_OWORD *)v34 + 3);
                    *(_QWORD *)&v33->m_sParents = *((_QWORD *)v34 + 8);
                    LODWORD(v10) = v10 + 72;
                  }
                  v33->m_bNewFormat = 1;
                  ++v31;
                  ++v32;
                }
                while ( v31 < (signed int)this->m_uiBoneCount );
              }
              if ( m_uiSize > (unsigned int)v10 )
              {
                v35 = m_pucData[(unsigned int)v10] | ((m_pucData[(unsigned int)(v10 + 1)] | ((m_pucData[(unsigned int)(v10 + 2)] | (m_pucData[(unsigned int)(v10 + 3)] << 8)) << 8)) << 8);
                LODWORD(v10) = v10 + 4;
              }
              else
              {
                v35 = 0;
              }
              this->m_cBoneNames = (unsigned __int8 *)operator new[](v35);
              v36 = 8i64 * this->m_uiBoneCount;
              if ( !is_mul_ok(this->m_uiBoneCount, 8ui64) )
                v36 = -1i64;
              this->m_iBoneHash = (unsigned __int64 *)operator new[](v36);
              v37 = 0i64;
              v38 = 0;
              if ( (int)this->m_uiBoneCount > 0 )
              {
                v39 = 0i64;
                v40 = (unsigned int)(v10 + 2);
                do
                {
                  if ( m_uiSize > (unsigned int)v10 )
                  {
                    v41 = m_pucData[(unsigned int)v10] | ((m_pucData[(unsigned int)(v40 - 1)] | ((m_pucData[v40] | (m_pucData[(unsigned int)(v40 + 1)] << 8)) << 8)) << 8);
                    LODWORD(v10) = v10 + 4;
                    v40 = (unsigned int)(v40 + 4);
                  }
                  else
                  {
                    v41 = 0;
                  }
                  this->m_pBone[v39].m_cName = &this->m_cBoneNames[v41];
                  this->m_pBone[v39].m_bNewFormat = 1;
                  ++v38;
                  ++v39;
                }
                while ( v38 < (signed int)this->m_uiBoneCount );
              }
              if ( m_uiSize > (unsigned int)v10 )
              {
                memmove(this->m_cBoneNames, &m_pucData[(unsigned int)v10], v35);
                LODWORD(v10) = v35 + v10;
              }
              v42 = 0;
              if ( (int)this->m_uiBoneCount > 0 )
              {
                v43 = 0i64;
                do
                {
                  this->m_iBoneHash[v43] = getBoneHashCode((const char *)this->m_pBone[v37].m_cName);
                  ++v42;
                  ++v37;
                  ++v43;
                }
                while ( v42 < (signed int)this->m_uiBoneCount );
              }
              v44 = 0;
              if ( (int)this->m_uiBoneCount > 0 )
              {
                v45 = 0i64;
                do
                {
                  m_pBone = this->m_pBone;
                  m_sParents = m_pBone[v45].m_sParents;
                  if ( (_DWORD)m_sParents == -1 )
                  {
                    m_pBone[v45].m_iNodeLevel = 0;
                  }
                  else
                  {
                    m_sChild = m_pBone[m_sParents].m_sChild;
                    if ( (_DWORD)m_sChild == -1 )
                    {
                      m_pBone[m_sParents].m_sChild = v44;
                    }
                    else
                    {
                      for ( i = &m_pBone[m_sChild]; i->m_sBrother != -1; i = &m_pBone[m_sChild] )
                        m_sChild = i->m_sBrother;
                      m_pBone[(int)m_sChild].m_sBrother = v44;
                    }
                  }
                  ++v44;
                  ++v45;
                }
                while ( v44 < (signed int)this->m_uiBoneCount );
              }
              v6 = 1;
              if ( this->m_uiBoneCount > 1 )
              {
                this->m_iNodeLevelMax = 1;
                v50 = this->m_pBone;
                v51 = v50->m_sChild;
                if ( (int)v51 >= 0 )
                {
                  p_m_iNo = &v50[v51].m_iNo;
                  v53 = p_m_iNo[24];
                  if ( (int)v53 >= 0 )
                  {
                    v54 = v50[v53].m_iNodeLevel + 1;
                    p_m_iNo[46] = v54;
                    if ( v54 >= this->m_iNodeLevelMax )
                      this->m_iNodeLevelMax = v54 + 1;
                    v55 = p_m_iNo[26];
                    if ( (int)v55 >= 0 )
                      OGLFigure::setNodeLevel(this, &this->m_pBone[v55]);
                    v56 = p_m_iNo[27];
                    if ( (int)v56 >= 0 )
                      OGLFigure::setNodeLevel(this, &this->m_pBone[v56]);
                  }
                }
                v57 = 0;
                v113 = 0;
                if ( (int)this->m_uiBoneCount > 0 )
                {
                  v58 = 0i64;
                  v59 = 0i64;
                  v106 = 0i64;
                  v60 = (unsigned int)(v10 + 1);
                  v61 = (unsigned int)(v10 + 2);
                  v62 = v10 + 3;
                  v109 = v10 + 3;
                  do
                  {
                    v63 = this->m_pBone;
                    if ( m_uiSize > (unsigned int)v10 )
                    {
                      v64 = m_pucData[(unsigned int)v10] | ((m_pucData[v60] | ((m_pucData[v61] | (m_pucData[v62] << 8)) << 8)) << 8);
                      LODWORD(v10) = v10 + 4;
                      v62 += 4;
                      v109 = v62;
                      v61 = (unsigned int)(v61 + 4);
                      v60 = (unsigned int)(v60 + 4);
                    }
                    else
                    {
                      v64 = 0;
                    }
                    v63[v58].m_iNodeLevel = v64;
                    if ( m_uiSize > (unsigned int)v10 )
                    {
                      *(_OWORD *)&v63[v58].m_aBindPose.m_vPrevTrans.x = *(_OWORD *)&m_pucData[(unsigned int)v10];
                      *(_OWORD *)&v63[v58].m_aBindPose.m_vPrevScale.y = *(_OWORD *)&m_pucData[(unsigned int)v10 + 16];
                      *(_QWORD *)&v63[v58].m_aBindPose.m_vPrevRot.z = *(_QWORD *)&m_pucData[(unsigned int)v10 + 32];
                      LODWORD(v10) = v10 + 40;
                      v65 = v62 + 40;
                      v109 = v65;
                      v61 = (unsigned int)(v61 + 40);
                      v60 = (unsigned int)(v60 + 40);
                      if ( m_uiSize > (unsigned int)v10 )
                      {
                        v66 = &m_pucData[(unsigned int)v10];
                        v67 = &this->m_pBindPose[(__int64)v57];
                        *(_OWORD *)v67->m = *(_OWORD *)v66;
                        *(_OWORD *)&v67->m[4] = *((_OWORD *)v66 + 1);
                        *(_OWORD *)&v67->m[8] = *((_OWORD *)v66 + 2);
                        *(_OWORD *)&v67->m[12] = *((_OWORD *)v66 + 3);
                        LODWORD(v10) = v10 + 64;
                        v109 = v65 + 64;
                        v61 = (unsigned int)(v61 + 64);
                        v60 = (unsigned int)(v60 + 64);
                      }
                    }
                    m_pBindPose = this->m_pBindPose;
                    this->m_pBone[v58].m_mOffset.m[15] = sqrtf(
                                                           (float)((float)(*(float *)((char *)&m_pBindPose->m[13] + v59)
                                                                         * *(float *)((char *)&m_pBindPose->m[13] + v59))
                                                                 + (float)(*(float *)((char *)&m_pBindPose->m[12] + v59)
                                                                         * *(float *)((char *)&m_pBindPose->m[12] + v59)))
                                                         + (float)(*(float *)((char *)&m_pBindPose->m[14] + v59)
                                                                 * *(float *)((char *)&m_pBindPose->m[14] + v59)));
                    v57 = v113 + 1;
                    v113 = v57;
                    v59 = v106 + 64;
                    v106 += 64i64;
                    ++v58;
                    v62 = v109;
                  }
                  while ( v57 < (signed int)this->m_uiBoneCount );
                  return 1;
                }
              }
              return v6;
            }
$_ERROR_1:
            OGLFigure::finalize(this, v29);
            return 0xFFFFFFFFi64;
          }
LABEL_26:
          v13 = 0;
          goto LABEL_28;
        }
      }
      else
      {
        LODWORD(v10) = size;
      }
      v11 = 0;
      goto LABEL_21;
    }
    if ( size > (unsigned int)v7 )
    {
      v69 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
      LODWORD(v7) = v7 + 4;
    }
    else
    {
      v69 = 0;
    }
    this->m_usVertexCoordCount = v69;
    v70 = (unsigned int)(12 * v69 + v7);
    format.m_uiPoint = v70;
    if ( size >= (unsigned int)v70 )
    {
      if ( size > (unsigned int)v70 )
      {
        v71 = m_pucData[v70] | ((m_pucData[(unsigned int)(v70 + 1)] | ((m_pucData[(unsigned int)(v70 + 2)] | (m_pucData[(unsigned int)(v70 + 3)] << 8)) << 8)) << 8);
        LODWORD(v70) = v70 + 4;
        format.m_uiPoint = v70;
LABEL_126:
        this->m_usNormalCoordCount = v71;
        if ( v71 )
        {
          LODWORD(v70) = 12 * v71 + v70;
          format.m_uiPoint = v70;
          v72 = size <= (unsigned int)v70;
          if ( size < (unsigned int)v70 )
          {
            LODWORD(v70) = size;
            format.m_uiPoint = size;
            goto LABEL_131;
          }
        }
        else
        {
          v72 = size <= (unsigned int)v70;
        }
        if ( !v72 )
        {
          v73 = m_pucData[(unsigned int)v70] | ((m_pucData[(unsigned int)(v70 + 1)] | ((m_pucData[(unsigned int)(v70 + 2)] | (m_pucData[(unsigned int)(v70 + 3)] << 8)) << 8)) << 8);
          LODWORD(v70) = v70 + 4;
          format.m_uiPoint = v70;
LABEL_133:
          this->m_usVertexColorCount = v73;
          if ( v73 )
          {
            LODWORD(v70) = 4 * v73 + v70;
            if ( (unsigned int)v70 > size )
              LODWORD(v70) = size;
            format.m_uiPoint = v70;
          }
          if ( (v8 & 0x4000) != 0 )
          {
            if ( size > (unsigned int)v70 )
            {
              v74 = m_pucData[(unsigned int)v70] | ((m_pucData[(unsigned int)(v70 + 1)] | ((m_pucData[(unsigned int)(v70 + 2)] | (m_pucData[(unsigned int)(v70 + 3)] << 8)) << 8)) << 8);
              LODWORD(v70) = v70 + 4;
              format.m_uiPoint = v70;
            }
            else
            {
              v74 = 0;
            }
            this->m_uiMultiUvCount = v74;
          }
          else
          {
            this->m_uiMultiUvCount = 1;
          }
          v75 = this->m_uiMultiUvCount;
          if ( v75 > 0 )
          {
            v76 = (unsigned int)v75;
            do
            {
              if ( m_uiSize > (unsigned int)v70 )
              {
                v77 = m_pucData[(unsigned int)v70] | ((m_pucData[(unsigned int)(v70 + 1)] | ((m_pucData[(unsigned int)(v70 + 2)] | (m_pucData[(unsigned int)(v70 + 3)] << 8)) << 8)) << 8);
                LODWORD(v70) = v70 + 4;
              }
              else
              {
                v77 = 0;
              }
              LODWORD(v70) = v70 + 8 * v77;
              if ( (unsigned int)v70 > m_uiSize )
                LODWORD(v70) = m_uiSize;
              --v76;
            }
            while ( v76 );
            format.m_uiPoint = v70;
          }
          if ( m_uiSize > (unsigned int)v70 )
          {
            v78 = m_pucData[(unsigned int)v70] | ((m_pucData[(unsigned int)(v70 + 1)] | ((m_pucData[(unsigned int)(v70 + 2)] | (m_pucData[(unsigned int)(v70 + 3)] << 8)) << 8)) << 8);
            LODWORD(v70) = v70 + 4;
            format.m_uiPoint = v70;
          }
          else
          {
            v78 = 0;
          }
          this->m_uiBoneCount = v78;
          v79 = v78;
          v80 = 232i64 * v78;
          if ( !is_mul_ok(v78, 0xE8ui64) )
            v80 = -1i64;
          v23 = __CFADD__(v80, 8i64);
          v81 = v80 + 8;
          if ( v23 )
            v81 = -1i64;
          v82 = (OGLBone *)operator new[](v81);
          if ( v82 )
          {
            *(_QWORD *)&v82->m_iNo = v79;
            p_m_pusIndex = &v82->m_pusIndex;
            `eh vector constructor iterator'(
              &v82->m_pusIndex,
              0xE8ui64,
              (unsigned int)v79,
              (void (__fastcall *)(void *))OGLBone::OGLBone,
              (void (__fastcall *)(void *))OGLBone::~OGLBone);
            v82 = (OGLBone *)p_m_pusIndex;
          }
          this->m_pBone = v82;
          v83 = this->m_uiBoneCount;
          v84 = (OGLMatrix *)operator new[](saturated_mul(v83, 0x40ui64));
          v111 = v84;
          if ( v84 && v83 )
          {
            memset(v84, 0, v83 << 6);
            v84 = v111;
          }
          this->m_pBindPose = v84;
          if ( this->m_pBone )
          {
            v85 = 0;
            if ( (int)this->m_uiBoneCount <= 0 )
            {
LABEL_169:
              if ( (v8 & 0x800) != 0 )
              {
                v86 = 8i64 * this->m_uiBoneCount;
                if ( !is_mul_ok(this->m_uiBoneCount, 8ui64) )
                  v86 = -1i64;
                this->m_iBoneHash = (unsigned __int64 *)operator new[](v86);
                v87 = 0;
                if ( (int)this->m_uiBoneCount > 0 )
                {
                  v112 = 0i64;
                  v88 = 0i64;
                  do
                  {
                    if ( m_uiSize > (unsigned int)v70 )
                    {
                      v89 = m_pucData[(unsigned int)v70] | ((m_pucData[(unsigned int)(v70 + 1)] | ((m_pucData[(unsigned int)(v70 + 2)] | (m_pucData[(unsigned int)(v70 + 3)] << 8)) << 8)) << 8);
                      LODWORD(v70) = v70 + 4;
                    }
                    else
                    {
                      v89 = 0;
                    }
                    if ( m_uiSize > (unsigned int)v70 )
                    {
                      memmove(this->m_pBone[v87].m_cNameOrigin, &m_pucData[(unsigned int)v70], v89);
                      LODWORD(v70) = v89 + v70;
                    }
                    this->m_pBone[v88].m_cName = this->m_pBone[v87].m_cNameOrigin;
                    this->m_pBone[v88].m_cName[v89] = 0;
                    this->m_iBoneHash[v112] = getBoneHashCode((const char *)this->m_pBone[v88].m_cName);
                    ++v87;
                    ++v88;
                    ++v112;
                  }
                  while ( v87 < (signed int)this->m_uiBoneCount );
                }
              }
              v90 = 0;
              if ( (int)this->m_uiBoneCount > 0 )
              {
                v91 = 0i64;
                do
                {
                  v92 = this->m_pBone;
                  v93 = v92[v91].m_sParents;
                  if ( (_DWORD)v93 == -1 )
                  {
                    v92[v91].m_iNodeLevel = 0;
                  }
                  else
                  {
                    m_sBrother = v92[v93].m_sChild;
                    if ( (_DWORD)m_sBrother == -1 )
                    {
                      v92[v93].m_sChild = v90;
                    }
                    else
                    {
                      for ( j = &v92[m_sBrother]; j->m_sBrother != -1; j = &v92[m_sBrother] )
                        m_sBrother = j->m_sBrother;
                      v92[(int)m_sBrother].m_sBrother = v90;
                    }
                  }
                  ++v90;
                  ++v91;
                }
                while ( v90 < (signed int)this->m_uiBoneCount );
              }
              v96 = 0;
              if ( (int)this->m_uiBoneCount > 0 )
              {
                v97 = 0i64;
                v98 = 0i64;
                do
                {
                  v99 = this->m_pBone;
                  v100 = v99[v98].m_sParents;
                  v101 = this->m_pBindPose;
                  if ( (int)v100 < 0 )
                  {
                    *(_QWORD *)v101[v97].m = 1065353216i64;
                    v101[v97].m[4] = 0.0;
                    *(_QWORD *)&v101[v97].m[8] = 0i64;
                    *(_QWORD *)&v101[v97].m[12] = 0i64;
                    *(_QWORD *)&v101[v97].m[5] = 1065353216i64;
                    *(_QWORD *)&v101[v97].m[2] = 0i64;
                    *(_QWORD *)&v101[v97].m[10] = 1065353216i64;
                    v101[v97].m[14] = 0.0;
                    v101[v97].m[7] = 0.0;
                    v101[v97].m[15] = 1.0;
                  }
                  else
                  {
                    *(_OWORD *)v101[v97].m = *(_OWORD *)v99[v98].m_mOffset.m;
                    *(_OWORD *)&v101[v97].m[4] = *(_OWORD *)&v99[v98].m_mOffset.m[4];
                    *(_OWORD *)&v101[v97].m[8] = *(_OWORD *)&v99[v98].m_mOffset.m[8];
                    *(_OWORD *)&v101[v97].m[12] = *(_OWORD *)&v99[v98].m_mOffset.m[12];
                    In1 = this->m_pBone[v100].m_mOffset;
                    In1.m[15] = 1.0;
                    OGLMatrix::inverse(&In1);
                    v102 = &this->m_pBindPose[(__int64)v96];
                    OGLMatrix::multiply(v102, &In1, v102);
                    OGLMatrix::inverse((OGLMatrix *)((char *)this->m_pBindPose + v103));
                    v104 = this->m_pBindPose;
                    this->m_pBone[v98].m_mOffset.m[15] = sqrtf(
                                                           (float)((float)(v104[v97].m[13] * v104[v97].m[13])
                                                                 + (float)(v104[v97].m[12] * v104[v97].m[12]))
                                                         + (float)(v104[v97].m[14] * v104[v97].m[14]));
                  }
                  ++v96;
                  ++v98;
                  ++v97;
                }
                while ( v96 < (signed int)this->m_uiBoneCount );
              }
              return 1;
            }
            while ( OGLBone::loadFloat(&this->m_pBone[v85], &format, v85) )
            {
              if ( ++v85 >= (signed int)this->m_uiBoneCount )
              {
                m_uiSize = format.m_uiSize;
                LODWORD(v70) = format.m_uiPoint;
                m_pucData = format.m_pucData;
                goto LABEL_169;
              }
            }
          }
          goto $_ERROR_1;
        }
LABEL_131:
        v73 = 0;
        goto LABEL_133;
      }
    }
    else
    {
      LODWORD(v70) = size;
      format.m_uiPoint = size;
    }
    v71 = 0;
    goto LABEL_126;
  }
  return (unsigned int)-4;
}

__int64 __fastcall OGLFigure::loadObacData(OGLFigure *this, unsigned __int8 *buffer, unsigned int size)
{
  unsigned int m_uiSize; // er12
  _BYTE *m_pucData; // r14
  OGLFigure *v5; // rsi
  unsigned int v6; // edi
  __int64 v7; // rdi
  int v8; // er13
  int v9; // edx
  float *v10; // rax
  unsigned __int64 v11; // rdx
  unsigned int m_usVertexCoordCount; // ecx
  int v13; // ebx
  int v14; // edx
  float *v15; // rcx
  int v16; // ebx
  int v17; // edx
  float *v18; // rcx
  int v19; // ebx
  int v20; // edx
  float *v21; // rax
  int v22; // ebx
  int v23; // edx
  signed int v24; // er15
  _DWORD *m_usTexCoordCount; // rbx
  MeshVertexInfo **m_pfTexCoord; // r13
  int v27; // edx
  MeshVertexInfo *v28; // rax
  int v29; // er13
  unsigned int v30; // edx
  OGLFigure *v31; // rbx
  __int64 v32; // rax
  bool v33; // cf
  unsigned __int64 v34; // rax
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v35; // rax
  MeshVertexInfo **p_outV; // r15
  unsigned __int64 m_uiBoneCount; // rbx
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v38; // rax
  OGLMatrix *v39; // r15
  signed int v40; // er15
  __int64 v41; // r13
  OGLBone *v42; // rbx
  char *v43; // rax
  int v44; // ebx
  unsigned __int64 v45; // rax
  __int64 v46; // r11
  signed int v47; // er10
  __int64 v48; // r8
  __int64 v49; // r9
  int v50; // edx
  signed int v51; // er13
  __int64 v52; // rbx
  __int64 v53; // r15
  signed int v54; // er9
  __int64 v55; // r10
  OGLBone *m_pBone; // r8
  __int64 m_sParents; // rax
  __int64 m_sChild; // rdx
  OGLBone *i; // rax
  OGLBone *v60; // rcx
  __int64 v61; // rax
  signed int v62; // er15
  __int64 v63; // r8
  __int64 v64; // r9
  __int64 v65; // r10
  OGLBone *v66; // rbx
  int v67; // edx
  _OWORD *m; // rcx
  _OWORD *v69; // rax
  unsigned int v70; // edx
  OGLFigure *v71; // r15
  __int64 v72; // rax
  unsigned __int64 v73; // rax
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v74; // rax
  MeshVertexInfo **v75; // rbx
  int m_ucMaterialCount; // eax
  signed int v77; // ebx
  int v78; // ebx
  unsigned __int64 v79; // r8
  signed int v80; // er10
  __int64 v81; // r9
  int v82; // edx
  __int64 v83; // rbx
  unsigned int v84; // er15
  const MATERIAL_EFFECT_INFO *v85; // r13
  unsigned int v86; // er13
  int *p_flg; // r15
  char v88; // r15
  int v89; // er13
  int v90; // edx
  Framework::MemoryManager *v91; // r8
  __int64 v92; // r13
  __int64 v93; // rbx
  OGLMaterial *v94; // r15
  int v95; // edx
  void *v96; // rax
  signed int v97; // er13
  unsigned int v98; // eax
  Framework::MemoryManager *v99; // rcx
  __int64 v100; // r15
  OGLMaterial *v101; // rbx
  __int64 v102; // rdx
  void *v103; // rax
  unsigned int v104; // edx
  unsigned int *v105; // rcx
  unsigned __int64 v106; // r8
  __int64 v107; // rbx
  int v108; // er15
  __int64 v109; // r13
  signed int v110; // er15
  __int64 v111; // rbx
  signed int v112; // er15
  signed int v113; // ecx
  int v114; // edx
  size_t v115; // r8
  int v116; // er15
  unsigned __int16 *v117; // rdx
  void *v118; // rcx
  signed int v119; // er15
  int v120; // er9
  int v121; // edx
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v122; // r8
  __int64 v123; // r13
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v124; // rcx
  int v125; // edx
  int v126; // er13
  int v127; // edx
  Framework::MemoryManager *p_allocateStaticBuffers; // r8
  __int64 v129; // r13
  __int64 v130; // rbx
  OGLMaterial *m_pMaterial; // r15
  int v132; // edx
  void *v133; // rax
  signed int v134; // er13
  unsigned int Hnd; // eax
  Framework::MemoryManager *Myval2; // rcx
  __int64 v137; // r15
  OGLMaterial *v138; // rbx
  __int64 m_usIndexCount; // rdx
  void *v140; // rax
  unsigned int v141; // edx
  unsigned __int16 *v142; // rcx
  __int64 v143; // rbx
  int v144; // er15
  signed int v145; // er15
  __int64 v146; // rbx
  signed int v147; // er15
  signed int v148; // ecx
  int v149; // edx
  int v150; // er15
  signed int v151; // er15
  int v152; // er9
  int v153; // edx
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v154; // r8
  __int64 v155; // r13
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v156; // rcx
  __int16 v157; // dx
  __int16 v158; // r15
  int *v159; // rax
  int v160; // er10
  __int64 v161; // r9
  int v162; // edx
  int *v163; // rax
  signed int v164; // er9
  __int64 v165; // rdi
  __int64 v166; // r10
  int v167; // edx
  unsigned __int64 v168; // rbx
  __int64 v169; // rax
  unsigned __int64 v170; // rax
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v171; // rax
  MeshVertexInfo **v172; // r15
  int v173; // ebx
  int v174; // ecx
  __int64 v175; // r15
  OGLVertexOptiInfo *v176; // r10
  int v177; // edx
  unsigned __int8 v178; // al
  float *pWeights; // rdx
  int Count; // eax
  float v181; // xmm1_4
  __int64 v182; // r9
  unsigned __int16 *pBoneIdx; // r11
  float v184; // xmm0_4
  __int64 v185; // r9
  unsigned __int16 *v186; // r11
  __int16 v187; // r8
  float v188; // xmm0_4
  int v189; // edx
  float *v190; // rax
  int v191; // ebx
  int v192; // edx
  float *v193; // rax
  int v194; // ebx
  int v195; // edx
  float *v196; // rax
  unsigned int v197; // er11
  __int64 v198; // rcx
  unsigned __int8 v199; // r10
  unsigned __int8 v200; // r9
  unsigned __int8 v201; // r8
  unsigned __int8 v202; // dl
  int v203; // edx
  signed int v204; // er13
  _DWORD *v205; // rbx
  MeshVertexInfo **v206; // r15
  int v207; // edx
  MeshVertexInfo *v208; // rax
  int v209; // er15
  unsigned int v210; // edx
  OGLFigure *v211; // rbx
  __int64 v212; // rax
  unsigned __int64 v213; // rax
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v214; // rax
  MeshVertexInfo **v215; // r15
  unsigned __int64 v216; // r15
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v217; // rax
  OGLMatrix *v218; // rbx
  int v219; // ebx
  unsigned __int64 *v220; // rax
  __int64 v221; // r10
  int v222; // edx
  __int64 v223; // r15
  int v224; // ebx
  __int64 v225; // r13
  OGLBone *v226; // r8
  unsigned __int8 *m_cName; // r13
  __int64 v228; // rcx
  unsigned __int8 v229; // al
  signed int v230; // er9
  OGLBone *v231; // r8
  __int64 v232; // rax
  __int64 m_sBrother; // rdx
  OGLBone *j; // rax
  OGLBone *v235; // rcx
  __int64 v236; // rax
  int v237; // eax
  int v238; // edx
  __int64 v239; // r15
  __int64 v240; // rbx
  __int64 v241; // r14
  __int64 v242; // r13
  OGLBone *v243; // rcx
  __int64 v244; // r8
  OGLMatrix *m_pBindPose; // rax
  OGLBone *v246; // rax
  OGLMatrix *v247; // rax
  float v248; // xmm2_4
  float v249; // xmm1_4
  float v250; // xmm0_4
  OGLBone *v251; // rax
  OGLBone *v252; // rax
  OGLBone *v253; // rax
  unsigned int v254; // edx
  OGLFigure *v255; // r15
  __int64 v256; // rax
  unsigned __int64 v257; // rax
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v258; // rax
  MeshVertexInfo **v259; // rbx
  unsigned __int64 v260; // r8
  int v261; // eax
  signed int v262; // ebx
  int v263; // eax
  int v264; // edx
  __int64 v265; // rbx
  int v266; // er15
  __int64 v267; // r13
  unsigned int v268; // er15
  const MATERIAL_EFFECT_INFO *v269; // r13
  unsigned int v270; // er13
  int *v271; // r15
  int v272; // er15
  int v273; // edx
  unsigned int v274; // edx
  Framework::MemoryManager *v275; // r8
  __int64 v276; // r13
  __int64 v277; // rbx
  OGLMaterial *v278; // r15
  void *v279; // rax
  signed int v280; // er13
  unsigned int v281; // eax
  Framework::MemoryManager *v282; // rcx
  __int64 v283; // r15
  OGLMaterial *v284; // rbx
  __int64 v285; // rdx
  void *v286; // rax
  unsigned int *v287; // rcx
  __int64 v288; // rbx
  int v289; // ebx
  __int64 v290; // rbx
  signed int k; // er15
  int v292; // er15
  signed int v293; // er15
  signed int v294; // ecx
  int v295; // edx
  __int64 v296; // r13
  __int64 v297; // r8
  int v298; // er15
  signed int v299; // er15
  int v300; // er9
  int v301; // edx
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v302; // r8
  __int64 v303; // r13
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v304; // rcx
  int v305; // edx
  int *v306; // rax
  int v307; // er10
  __int64 v308; // r9
  int v309; // edx
  int *v310; // rax
  signed int v311; // er10
  __int64 v312; // r9
  int v313; // edx
  int v314; // er13
  unsigned __int64 v315; // rbx
  __int64 v316; // rax
  unsigned __int64 v317; // rax
  std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *v318; // rax
  MeshVertexInfo **v319; // r15
  int v320; // ebx
  int v321; // ecx
  __int64 v322; // r15
  OGLVertexOptiInfo *v323; // r10
  int v324; // edx
  unsigned __int8 v325; // al
  float *v326; // rdx
  int v327; // eax
  float v328; // xmm1_4
  __int64 v329; // r9
  unsigned __int16 *v330; // r11
  float v331; // xmm0_4
  __int64 v332; // r9
  unsigned __int16 *v333; // r11
  __int16 v334; // r8
  float v335; // xmm0_4
  int v336; // edx
  int v337; // eax
  unsigned __int8 v338; // cl
  int v339; // eax
  int v340; // edx
  float *v341; // rax
  unsigned int m_usNormalCoordCount; // eax
  unsigned __int64 v343; // rax
  unsigned __int64 v344; // kr110_8
  char *v345; // rcx
  unsigned int *v346; // rax
  int v347; // er9
  int v348; // er8
  int v349; // ecx
  __int64 v350; // r13
  __int64 v351; // r12
  float *v352; // rbx
  __int64 v353; // r15
  float *m_pfVertexCoord; // rdx
  __int64 v355; // r14
  __int64 v356; // rsi
  __int64 v357; // rdi
  MeshVertexInfo *v358; // rax
  __int64 v359; // rax
  unsigned __int64 v360; // rdx
  MeshVertexInfo *v361; // r12
  int m_iFormatType; // eax
  std::unique_ptr<std::tuple<<lambda_230801668028c2b66e05f2ecff55509a> >> *v363; // rax
  unsigned int v364; // eax
  int v365; // eax
  __int64 v366; // r14
  __int64 v367; // r15
  __int64 v368; // rbx
  OGLVertexOptiInfo *v369; // r11
  int v370; // er8
  __int64 v371; // rdi
  _DWORD *v372; // rdx
  unsigned __int16 *v373; // r9
  __int64 v374; // r10
  OGLVertexOptiInfo *m_pVerOptiInfo; // rcx
  unsigned __int16 *v376; // rbx
  int v377; // eax
  __int64 v378; // rcx
  _DWORD *v379; // rdx
  unsigned __int64 v380; // r8
  std::unique_ptr<std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> >> *v381; // rax
  unsigned int v382; // eax
  int v383; // eax
  __int64 v384; // r14
  __int64 v385; // r15
  __int64 v386; // rbx
  OGLVertexOptiInfo *v387; // r11
  int v388; // er8
  __int64 v389; // rdi
  _DWORD *v390; // rdx
  unsigned __int16 *v391; // r9
  __int64 v392; // r10
  OGLVertexOptiInfo *v393; // rcx
  unsigned __int16 *v394; // rbx
  int v395; // eax
  __int64 v396; // rcx
  _DWORD *v397; // rdx
  __int64 v398; // rdx
  Framework::MemoryManager *v399; // rcx
  std::unique_ptr<std::tuple<<lambda_12b90ea9f2fd716190554ece8222dbaa> >> *v400; // rax
  unsigned __int64 v401; // rdx
  unsigned int m_usVertexColorCount; // eax
  int v403; // eax
  __int64 v404; // r9
  _DWORD *p_y; // r8
  unsigned __int64 v406; // r10
  _DWORD *v407; // r8
  float *m_pfVertexColor; // rcx
  unsigned int v409; // edi
  void **v410; // rbx
  unsigned int *v411; // r14
  int v412; // eax
  signed __int64 v413; // rdx
  _DWORD *v414; // r8
  std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> *v415; // rax
  unsigned __int64 v416; // rdx
  unsigned int v417; // eax
  int v418; // eax
  __int64 v419; // r9
  _DWORD *v420; // r8
  unsigned __int64 v421; // r10
  _DWORD *v422; // r8
  float *v423; // rcx
  unsigned int v424; // edi
  void **v425; // rbx
  unsigned int *v426; // r14
  int v427; // eax
  signed __int64 v428; // rdx
  _DWORD *v429; // r8
  void *v430; // rax
  unsigned __int64 v431; // rdx
  unsigned int *m_pusIndex; // rcx
  void *v433; // rax
  __int64 v434; // r8
  unsigned __int64 v435; // rdx
  unsigned __int16 *m_pussIndex; // rcx
  DWORD CurrentThreadId; // eax
  Framework::GLManager *v438; // r14
  __int64 v439; // rdi
  AgPointer<AgDisplay> *DisplayByIndex; // rax
  AgDisplayPlatformImplementation *Log; // rax
  AgDisplay *m_ptr; // r14
  AgReferenceCount *m_ref; // rbx
  int v444; // er12
  __int64 v445; // rax
  __int64 v446; // rdx
  unsigned int v447; // er9
  __int64 *v448; // rax
  __int64 v449; // r12
  AgPointer<AgDisplay> *v450; // rax
  AgDisplayPlatformImplementation *v451; // rax
  AgDisplay *v452; // rdi
  AgReferenceCount *v453; // rbx
  int v454; // er14
  float *v456; // [rsp+40h] [rbp-C0h]
  float *v457; // [rsp+40h] [rbp-C0h]
  float *v458; // [rsp+40h] [rbp-C0h]
  std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> v459; // [rsp+50h] [rbp-B0h] BYREF
  std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> v460; // [rsp+58h] [rbp-A8h] BYREF
  OGLInputStream format; // [rsp+60h] [rbp-A0h] BYREF
  Framework::GLManager *v462; // [rsp+78h] [rbp-88h]
  _Thrd_imp_t _Thr; // [rsp+80h] [rbp-80h] BYREF
  std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> v464; // [rsp+90h] [rbp-70h] BYREF
  _Thrd_imp_t v465; // [rsp+A0h] [rbp-60h] BYREF
  _Thrd_imp_t v466; // [rsp+B0h] [rbp-50h] BYREF
  _Thrd_imp_t v467; // [rsp+C0h] [rbp-40h] BYREF
  AgPointer<AgDisplay> v468; // [rsp+D0h] [rbp-30h] BYREF
  AgPointer<AgDisplay> v469; // [rsp+E0h] [rbp-20h] BYREF
  OGLFigure::loadObacData::__l525::<lambda_49e167d41e58ceaf27bb79ed79325610> v470; // [rsp+F0h] [rbp-10h] BYREF
  OGLFigure::loadObacData::__l525::<lambda_49e167d41e58ceaf27bb79ed79325610> v471; // [rsp+100h] [rbp+0h] BYREF
  OGLFigure::loadObacData::__l525::<lambda_49e167d41e58ceaf27bb79ed79325610> v472; // [rsp+110h] [rbp+10h] BYREF
  OGLFigure::loadObacData::__l525::<lambda_49e167d41e58ceaf27bb79ed79325610> v473; // [rsp+120h] [rbp+20h] BYREF
  __int64 v474; // [rsp+130h] [rbp+30h]
  _Thrd_imp_t v475; // [rsp+140h] [rbp+40h] BYREF
  _Thrd_imp_t v476; // [rsp+150h] [rbp+50h] BYREF
  _Thrd_imp_t v477; // [rsp+160h] [rbp+60h] BYREF
  _Thrd_imp_t v478; // [rsp+170h] [rbp+70h] BYREF
  OGLMatrix In1; // [rsp+180h] [rbp+80h] BYREF
  int v481; // [rsp+208h] [rbp+108h]
  std::unique_ptr<std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> >> result; // [rsp+218h] [rbp+118h] BYREF

  v474 = -2i64;
  m_uiSize = size;
  m_pucData = buffer;
  v460._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)buffer;
  v5 = this;
  if ( buffer )
  {
    if ( this->m_usVertexCoordCount )
      return (unsigned int)-2;
    if ( *buffer != 83 || buffer[1] != 70 )
      return (unsigned int)-3;
    format.m_pucData = buffer;
    LODWORD(v7) = 0;
    format.m_uiPoint = 0;
    format.m_uiSize = size;
    if ( size && (LODWORD(v7) = 2, format.m_uiPoint = 2, size > 2) )
    {
      v8 = buffer[2] | ((buffer[3] | (*((unsigned __int16 *)buffer + 2) << 8)) << 8);
      v481 = v8;
      LODWORD(v7) = 6;
      format.m_uiPoint = 6;
    }
    else
    {
      v8 = 0;
      v481 = 0;
    }
    format.m_uiVersion = v8;
    this->m_iFormatType = v8;
    v462 = Framework::GLManager::glm;
    if ( (v8 & 1) != 0 )
    {
      if ( size <= (unsigned int)v7 || (v7 = (unsigned int)(v7 + 4), format.m_uiPoint = v7, size <= (unsigned int)v7) )
      {
        v9 = 0;
      }
      else
      {
        v9 = buffer[v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
        LODWORD(v7) = v7 + 4;
        format.m_uiPoint = v7;
      }
      this->m_usVertexCoordCount = v9;
      v10 = (float *)operator new[](saturated_mul((unsigned int)(3 * v9), 4ui64));
      v5->m_pfVertexCoord = v10;
      if ( !v10 )
        goto $_ERROR_0;
      m_usVertexCoordCount = v5->m_usVertexCoordCount;
      if ( m_usVertexCoordCount )
      {
        v13 = 12 * m_usVertexCoordCount;
        if ( m_uiSize <= (unsigned int)v7 )
          goto LABEL_21;
        memmove(v10, &m_pucData[(unsigned int)v7], v13);
        LODWORD(v7) = v13 + v7;
        format.m_uiPoint = v7;
      }
      if ( m_uiSize > (unsigned int)v7 )
      {
        v14 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
        LODWORD(v7) = v7 + 4;
        format.m_uiPoint = v7;
LABEL_23:
        v5->m_usNormalCoordCount = v14;
        if ( v14 )
        {
          v15 = (float *)operator new[](saturated_mul((unsigned int)(3 * v14), 4ui64));
          v5->m_pfNormalCoord = v15;
          if ( !v15 )
            goto $_ERROR_0;
          v16 = 12 * v5->m_usNormalCoordCount;
          if ( m_uiSize <= (unsigned int)v7 )
            goto LABEL_28;
          memmove(v15, &m_pucData[(unsigned int)v7], v16);
          LODWORD(v7) = v16 + v7;
          format.m_uiPoint = v7;
        }
        if ( m_uiSize > (unsigned int)v7 )
        {
          v17 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
          LODWORD(v7) = v7 + 4;
          format.m_uiPoint = v7;
LABEL_30:
          v5->m_usTangentCoordCount = v17;
          if ( v17 )
          {
            v18 = (float *)operator new[](saturated_mul((unsigned int)(3 * v17), 4ui64));
            v5->m_pfTangentCoord = v18;
            if ( !v18 )
              goto $_ERROR_0;
            v19 = 12 * v5->m_usTangentCoordCount;
            if ( m_uiSize <= (unsigned int)v7 )
              goto LABEL_35;
            memmove(v18, &m_pucData[(unsigned int)v7], v19);
            LODWORD(v7) = v19 + v7;
            format.m_uiPoint = v7;
          }
          if ( m_uiSize > (unsigned int)v7 )
          {
            v20 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
            LODWORD(v7) = v7 + 4;
            format.m_uiPoint = v7;
LABEL_37:
            v5->m_usVertexColorCount = v20;
            if ( v20 )
            {
              v21 = (float *)operator new[](saturated_mul((unsigned int)(4 * v20), 4ui64));
              v5->m_pfVertexColor = v21;
              if ( !v21 )
                goto $_ERROR_0;
              v22 = 16 * v5->m_usVertexColorCount;
              if ( m_uiSize > (unsigned int)v7 )
              {
                memmove(v21, &m_pucData[(unsigned int)v7], v22);
                LODWORD(v7) = v22 + v7;
                format.m_uiPoint = v7;
              }
              v5->m_iFormatType |= 0x100u;
            }
            if ( m_uiSize > (unsigned int)v7 )
            {
              v23 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
              LODWORD(v7) = v7 + 4;
              format.m_uiPoint = v7;
            }
            else
            {
              v23 = 0;
            }
            v5->m_uiMultiUvCount = v23;
            v24 = 0;
            if ( v23 > 0 )
            {
              m_usTexCoordCount = v5->m_usTexCoordCount;
              m_pfTexCoord = (MeshVertexInfo **)v5->m_pfTexCoord;
              result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v5->m_pfTexCoord;
              do
              {
                if ( m_uiSize > (unsigned int)v7 )
                {
                  v27 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
                  LODWORD(v7) = v7 + 4;
                  format.m_uiPoint = v7;
                }
                else
                {
                  v27 = 0;
                }
                *m_usTexCoordCount = v27;
                v28 = (MeshVertexInfo *)operator new[](saturated_mul((unsigned int)(2 * v27), 4ui64));
                *m_pfTexCoord = v28;
                if ( *m_usTexCoordCount )
                {
                  if ( !v28 )
                    goto $_ERROR_0;
                }
                v29 = 8 * *m_usTexCoordCount;
                if ( m_uiSize > (unsigned int)v7 )
                {
                  memmove(v28, &m_pucData[(unsigned int)v7], v29);
                  LODWORD(v7) = v29 + v7;
                  format.m_uiPoint = v7;
                }
                ++v24;
                m_pfTexCoord = &result._Mypair._Myval2->_Myfirst._Val.outV;
                result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)((char *)result._Mypair._Myval2
                                                                                                  + 8);
                ++m_usTexCoordCount;
              }
              while ( v24 < (signed int)v5->m_uiMultiUvCount );
            }
            if ( m_uiSize <= (unsigned int)v7
              || (v7 = (unsigned int)(v7 + 4), format.m_uiPoint = v7, m_uiSize <= (unsigned int)v7) )
            {
              v30 = 0;
            }
            else
            {
              v30 = (unsigned __int8)m_pucData[v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
              LODWORD(v7) = v7 + 4;
              format.m_uiPoint = v7;
            }
            v5->m_uiBoneCount = v30;
            v31 = (OGLFigure *)v30;
            result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v30;
            v32 = 232i64 * v30;
            if ( !is_mul_ok(v30, 0xE8ui64) )
              v32 = -1i64;
            v33 = __CFADD__(v32, 8i64);
            v34 = v32 + 8;
            if ( v33 )
              v34 = -1i64;
            v35 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)operator new[](v34);
            v464._Mypair._Myval2 = v35;
            if ( v35 )
            {
              v35->_Myfirst._Val.figure = v31;
              p_outV = &v35->_Myfirst._Val.outV;
              `eh vector constructor iterator'(
                &v35->_Myfirst._Val.outV,
                0xE8ui64,
                (unsigned int)v31,
                (void (__fastcall *)(void *))OGLBone::OGLBone,
                (void (__fastcall *)(void *))OGLBone::~OGLBone);
            }
            else
            {
              p_outV = 0i64;
            }
            v5->m_pBone = (OGLBone *)p_outV;
            m_uiBoneCount = v5->m_uiBoneCount;
            result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)m_uiBoneCount;
            v38 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)operator new[](saturated_mul(m_uiBoneCount, 0x40ui64));
            v39 = (OGLMatrix *)v38;
            result._Mypair._Myval2 = v38;
            if ( v38 )
            {
              if ( m_uiBoneCount )
                memset(v38, 0, m_uiBoneCount << 6);
              LODWORD(v38) = 0;
            }
            else
            {
              v39 = 0i64;
            }
            v5->m_pBindPose = v39;
            if ( v5->m_pBone )
            {
              v40 = 0;
              if ( (int)v5->m_uiBoneCount > 0 )
              {
                v41 = 0i64;
                do
                {
                  v42 = &v5->m_pBone[v41];
                  OGLBone::finalize(v42);
                  v42->m_iNo = v40;
                  v42->m_usIndexCount = 1;
                  if ( m_uiSize > (unsigned int)v7 )
                  {
                    v43 = &m_pucData[(unsigned int)v7];
                    *(_OWORD *)v42->m_mOffset.m = *(_OWORD *)v43;
                    *(_OWORD *)&v42->m_mOffset.m[4] = *((_OWORD *)v43 + 1);
                    *(_OWORD *)&v42->m_mOffset.m[8] = *((_OWORD *)v43 + 2);
                    *(_OWORD *)&v42->m_mOffset.m[12] = *((_OWORD *)v43 + 3);
                    *(_QWORD *)&v42->m_sParents = *((_QWORD *)v43 + 8);
                    LODWORD(v7) = v7 + 72;
                    format.m_uiPoint = v7;
                  }
                  v42->m_bNewFormat = 1;
                  ++v40;
                  ++v41;
                }
                while ( v40 < (signed int)v5->m_uiBoneCount );
                LODWORD(v38) = 0;
              }
              if ( m_uiSize > (unsigned int)v7 )
              {
                v44 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
                LODWORD(v7) = v7 + 4;
                format.m_uiPoint = v7;
              }
              else
              {
                v44 = (int)v38;
              }
              v5->m_cBoneNames = (unsigned __int8 *)operator new[](v44);
              v45 = 8i64 * v5->m_uiBoneCount;
              if ( !is_mul_ok(v5->m_uiBoneCount, 8ui64) )
                v45 = -1i64;
              v5->m_iBoneHash = (unsigned __int64 *)operator new[](v45);
              v46 = 0i64;
              v47 = 0;
              if ( (int)v5->m_uiBoneCount > 0 )
              {
                v48 = 0i64;
                v49 = (unsigned int)(v7 + 2);
                do
                {
                  if ( m_uiSize > (unsigned int)v7 )
                  {
                    v50 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v49 - 1)] | (((unsigned __int8)m_pucData[v49] | ((unsigned __int8)m_pucData[(unsigned int)(v49 + 1)] << 8)) << 8)) << 8);
                    LODWORD(v7) = v7 + 4;
                    format.m_uiPoint = v7;
                    v49 = (unsigned int)(v49 + 4);
                  }
                  else
                  {
                    v50 = 0;
                  }
                  v5->m_pBone[v48].m_cName = &v5->m_cBoneNames[v50];
                  v5->m_pBone[v48].m_bNewFormat = 1;
                  ++v47;
                  ++v48;
                }
                while ( v47 < (signed int)v5->m_uiBoneCount );
              }
              if ( m_uiSize > (unsigned int)v7 )
              {
                memmove(v5->m_cBoneNames, &m_pucData[(unsigned int)v7], v44);
                LODWORD(v7) = v44 + v7;
                format.m_uiPoint = v7;
                v46 = 0i64;
              }
              v51 = 0;
              if ( (int)v5->m_uiBoneCount > 0 )
              {
                v52 = 0i64;
                v53 = 0i64;
                do
                {
                  v5->m_iBoneHash[v52] = getBoneHashCode((const char *)v5->m_pBone[v53].m_cName);
                  ++v51;
                  ++v53;
                  ++v52;
                }
                while ( v51 < (signed int)v5->m_uiBoneCount );
                v46 = 0i64;
              }
              v54 = 0;
              if ( (int)v5->m_uiBoneCount > 0 )
              {
                v55 = 0i64;
                do
                {
                  m_pBone = v5->m_pBone;
                  m_sParents = m_pBone[v55].m_sParents;
                  if ( (_DWORD)m_sParents == -1 )
                  {
                    m_pBone[v55].m_iNodeLevel = 0;
                  }
                  else
                  {
                    m_sChild = m_pBone[m_sParents].m_sChild;
                    if ( (_DWORD)m_sChild == -1 )
                    {
                      m_pBone[m_sParents].m_sChild = v54;
                    }
                    else
                    {
                      for ( i = &m_pBone[m_sChild]; i->m_sBrother != -1; i = &m_pBone[m_sChild] )
                        m_sChild = i->m_sBrother;
                      m_pBone[(int)m_sChild].m_sBrother = v54;
                    }
                  }
                  ++v54;
                  ++v55;
                }
                while ( v54 < (signed int)v5->m_uiBoneCount );
              }
              if ( v5->m_uiBoneCount > 1 )
              {
                v5->m_iNodeLevelMax = 1;
                v60 = v5->m_pBone;
                v61 = v60->m_sChild;
                if ( (int)v61 >= 0 )
                  OGLFigure::setNodeLevel(v5, &v60[v61]);
                v62 = v46;
                if ( (int)v5->m_uiBoneCount > 0 )
                {
                  v63 = (unsigned int)(v7 + 1);
                  v64 = (unsigned int)(v7 + 2);
                  v65 = (unsigned int)(v7 + 3);
                  do
                  {
                    v66 = v5->m_pBone;
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      v67 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[v63] | (((unsigned __int8)m_pucData[v64] | ((unsigned __int8)m_pucData[v65] << 8)) << 8)) << 8);
                      LODWORD(v7) = v7 + 4;
                      format.m_uiPoint = v7;
                      v65 = (unsigned int)(v65 + 4);
                      v64 = (unsigned int)(v64 + 4);
                      v63 = (unsigned int)(v63 + 4);
                    }
                    else
                    {
                      v67 = 0;
                    }
                    *(_DWORD *)&v66->m_cNameOrigin[v46 + 64] = v67;
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      *(_OWORD *)((char *)&v66->m_aBindPose.m_vPrevTrans.x + v46) = *(_OWORD *)&m_pucData[(unsigned int)v7];
                      *(_OWORD *)((char *)&v66->m_aBindPose.m_vPrevScale.y + v46) = *(_OWORD *)&m_pucData[(unsigned int)v7 + 16];
                      *(_QWORD *)((char *)&v66->m_aBindPose.m_vPrevRot.z + v46) = *(_QWORD *)&m_pucData[(unsigned int)v7 + 32];
                      LODWORD(v7) = v7 + 40;
                      format.m_uiPoint = v7;
                      v65 = (unsigned int)(v65 + 40);
                      v64 = (unsigned int)(v64 + 40);
                      v63 = (unsigned int)(v63 + 40);
                    }
                    m = (_OWORD *)v5->m_pBindPose[(__int64)v62].m;
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      v69 = &m_pucData[(unsigned int)v7];
                      *m = *v69;
                      m[1] = v69[1];
                      m[2] = v69[2];
                      m[3] = v69[3];
                      LODWORD(v7) = v7 + 64;
                      format.m_uiPoint = v7;
                      v65 = (unsigned int)(v65 + 64);
                      v64 = (unsigned int)(v64 + 64);
                      v63 = (unsigned int)(v63 + 64);
                    }
                    ++v62;
                    v46 += 232i64;
                  }
                  while ( v62 < (signed int)v5->m_uiBoneCount );
                  LODWORD(v46) = 0;
                }
              }
              if ( m_uiSize <= (unsigned int)v7
                || (v7 = (unsigned int)(v7 + 4), format.m_uiPoint = v7, m_uiSize <= (unsigned int)v7) )
              {
                v70 = v46;
              }
              else
              {
                v70 = (unsigned __int8)m_pucData[v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
                LODWORD(v7) = v7 + 4;
                format.m_uiPoint = v7;
              }
              v5->m_ucMaterialCount = v70;
              v71 = (OGLFigure *)v70;
              result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v70;
              v72 = 1128i64 * v70;
              if ( !is_mul_ok(v70, 0x468ui64) )
                v72 = -1i64;
              v33 = __CFADD__(v72, 8i64);
              v73 = v72 + 8;
              if ( v33 )
                v73 = -1i64;
              v74 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)operator new[](v73);
              v464._Mypair._Myval2 = v74;
              if ( v74 )
              {
                v74->_Myfirst._Val.figure = v71;
                v75 = &v74->_Myfirst._Val.outV;
                `eh vector constructor iterator'(
                  &v74->_Myfirst._Val.outV,
                  0x468ui64,
                  (unsigned int)v71,
                  (void (__fastcall *)(void *))OGLMaterial::OGLMaterial,
                  (void (__fastcall *)(void *))OGLMaterial::~OGLMaterial);
              }
              else
              {
                v75 = 0i64;
              }
              v5->m_pMaterial = (OGLMaterial *)v75;
              m_ucMaterialCount = v5->m_ucMaterialCount;
              if ( !m_ucMaterialCount || v75 )
              {
                v77 = 0;
                if ( m_ucMaterialCount > 0 )
                {
                  do
                    OGLMaterial::loadMemcpy(&v5->m_pMaterial[v77++], &format);
                  while ( v77 < (signed int)v5->m_ucMaterialCount );
                  m_uiSize = format.m_uiSize;
                  LODWORD(v7) = format.m_uiPoint;
                  m_pucData = format.m_pucData;
                  v460._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)format.m_pucData;
                }
                if ( m_uiSize > (unsigned int)v7 )
                {
                  v78 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
                  LODWORD(v7) = v7 + 4;
                }
                else
                {
                  v78 = 0;
                }
                v5->m_cMatreialNames = (unsigned __int8 *)operator new[](v78);
                v80 = 0;
                if ( (int)v5->m_ucMaterialCount > 0 )
                {
                  v79 = 0i64;
                  v81 = (unsigned int)(v7 + 2);
                  do
                  {
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      v82 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v81 - 1)] | (((unsigned __int8)m_pucData[v81] | ((unsigned __int8)m_pucData[(unsigned int)(v81 + 1)] << 8)) << 8)) << 8);
                      LODWORD(v7) = v7 + 4;
                      v81 = (unsigned int)(v81 + 4);
                    }
                    else
                    {
                      v82 = 0;
                    }
                    v5->m_pMaterial[v79].m_cName = &v5->m_cMatreialNames[v82];
                    v5->m_pMaterial[v79].m_bNewFormat = 1;
                    v5->m_pMaterial[v79].m_ucEffectFlg = 0;
                    ++v80;
                    ++v79;
                  }
                  while ( v80 < (signed int)v5->m_ucMaterialCount );
                }
                if ( m_uiSize > (unsigned int)v7 )
                {
                  memmove(v5->m_cMatreialNames, &m_pucData[(unsigned int)v7], v78);
                  LODWORD(v7) = v78 + v7;
                }
                LODWORD(result._Mypair._Myval2) = 0;
                if ( (int)v5->m_ucMaterialCount > 0 )
                {
                  v83 = 0i64;
                  do
                  {
                    v84 = 0;
                    v459._Mypair._Myval2 = 0i64;
                    v85 = MaterialEffectInfo;
                    while ( !strstr((const char *)v5->m_pMaterial[v83].m_cName, v85->str) )
                    {
                      ++v84;
                      ++v459._Mypair._Myval2;
                      ++v85;
                      if ( v84 >= 7 )
                        goto LABEL_153;
                    }
                    v5->m_pMaterial[v83].m_uiBlendMode = MaterialEffectInfo[(__int64)v459._Mypair._Myval2].flg;
LABEL_153:
                    v86 = 0;
                    p_flg = &MaterialAddEffectInfo[0].flg;
                    do
                    {
                      if ( strstr((const char *)v5->m_pMaterial[v83].m_cName, *((const char **)p_flg - 1)) )
                        v5->m_pMaterial[v83].m_ucEffectFlg |= *p_flg;
                      ++v86;
                      p_flg += 4;
                    }
                    while ( v86 < 0x12 );
                    v5->m_pMaterial[v83].m_ucEffectFlg |= 0x20u;
                    ++LODWORD(result._Mypair._Myval2);
                    ++v83;
                  }
                  while ( SLODWORD(result._Mypair._Myval2) < (signed int)v5->m_ucMaterialCount );
                  m_pucData = v460._Mypair._Myval2;
                }
                v88 = v481;
                if ( (v481 & 0x80u) != 0 )
                {
                  v126 = v481 & 0x10000;
                  LODWORD(result._Mypair._Myval2) = v481 & 0x10000;
                  if ( (v481 & 0x10000) != 0 )
                  {
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      v127 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
                      LODWORD(v7) = v7 + 4;
                    }
                    else
                    {
                      v127 = 0;
                    }
                    v459._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v127;
                    v460._Mypair._Myval2 = 0i64;
                    if ( v127 > 0 )
                    {
                      p_allocateStaticBuffers = &v462->allocateStaticBuffers;
                      _Thr._Hnd = &v462->allocateStaticBuffers;
                      v129 = (unsigned int)(v7 + 2);
                      v130 = 0i64;
                      while ( 1 )
                      {
                        m_pMaterial = v5->m_pMaterial;
                        if ( m_uiSize > (unsigned int)v7 )
                        {
                          v132 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v129 - 1)] | (((unsigned __int8)m_pucData[v129] | ((unsigned __int8)m_pucData[(unsigned int)(v129 + 1)] << 8)) << 8)) << 8);
                          LODWORD(v7) = v7 + 4;
                          v129 = (unsigned int)(v129 + 4);
                        }
                        else
                        {
                          v132 = 0;
                        }
                        m_pMaterial[v130].m_usIndex = v132;
                        v133 = Framework::MemoryManager::allocate(
                                 p_allocateStaticBuffers,
                                 2i64 * m_pMaterial[v130].m_usIndexCount,
                                 (unsigned __int64)p_allocateStaticBuffers);
                        v5->m_pfIndexBuffer = v133;
                        m_pMaterial[v130].m_pssIndex = (unsigned __int16 *)v133;
                        if ( !v133 )
                          goto $_ERROR_0;
                        ++v460._Mypair._Myval2;
                        ++v130;
                        p_allocateStaticBuffers = (Framework::MemoryManager *)_Thr._Hnd;
                        if ( (__int64)v460._Mypair._Myval2 >= (__int64)v459._Mypair._Myval2 )
                          goto LABEL_223;
                      }
                    }
                  }
                  else
                  {
                    v134 = 0;
                    Hnd = 0;
                    if ( (int)v5->m_ucMaterialCount > 0 )
                    {
                      Myval2 = &v462->allocateStaticBuffers;
                      v460._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)&v462->allocateStaticBuffers;
                      v137 = 0i64;
                      do
                      {
                        v138 = v5->m_pMaterial;
                        v138[v137].m_usIndex = Hnd;
                        m_usIndexCount = v138[v137].m_usIndexCount;
                        LODWORD(_Thr._Hnd) = m_usIndexCount + Hnd;
                        v140 = Framework::MemoryManager::allocate(Myval2, 2 * m_usIndexCount, v79 * 1128);
                        v5->m_pfIndexBuffer = v140;
                        v138[v137].m_pssIndex = (unsigned __int16 *)v140;
                        if ( !v140 )
                          goto $_ERROR_0;
                        ++v134;
                        ++v137;
                        Hnd = (unsigned int)_Thr._Hnd;
                        Myval2 = (Framework::MemoryManager *)v460._Mypair._Myval2;
                      }
                      while ( v134 < (signed int)v5->m_ucMaterialCount );
LABEL_223:
                      v88 = v481;
                    }
                    v126 = (int)result._Mypair._Myval2;
                  }
                  if ( m_uiSize > (unsigned int)v7 )
                  {
                    v141 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
                    LODWORD(v7) = v7 + 4;
                  }
                  else
                  {
                    v141 = 0;
                  }
                  v5->m_usIndexCount = v141;
                  v142 = (unsigned __int16 *)operator new[](saturated_mul(v141, 2ui64));
                  v5->m_pussIndex = v142;
                  if ( !v142 )
                    goto $_ERROR_0;
                  v143 = (__int64)v5->m_pMaterial;
                  if ( (v88 & 0x10) != 0 )
                  {
                    LODWORD(v109) = 0;
                    v151 = 0;
                    v152 = 0;
                    v153 = 0;
                    LODWORD(result._Mypair._Myval2) = 0;
                    if ( (int)v5->m_usIndexCount > 0 )
                    {
                      v154 = 0i64;
                      v459._Mypair._Myval2 = 0i64;
                      v155 = (unsigned int)(v7 + 2);
                      v156 = 0i64;
                      v460._Mypair._Myval2 = 0i64;
                      do
                      {
                        if ( v152 >= *(_DWORD *)((char *)&v156[2]._Myfirst._Val.outV + (unsigned __int64)v5->m_pMaterial) )
                        {
                          memmove(*(void **)(v143 + 56), &v5->m_pussIndex[v151 - v152], 2i64 * v152);
                          v152 = 0;
                          v153 = ++LODWORD(result._Mypair._Myval2);
                          v460._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)((char *)v460._Mypair._Myval2 + 1128);
                          v154 = v459._Mypair._Myval2;
                        }
                        v143 = (__int64)&v5->m_pMaterial[v153];
                        if ( m_uiSize > (unsigned int)v7 )
                        {
                          v157 = (unsigned __int8)m_pucData[(unsigned int)v7] | (unsigned __int16)(((unsigned __int8)m_pucData[(unsigned int)(v155 - 1)] | (unsigned __int16)(((unsigned __int8)m_pucData[v155] | (unsigned __int16)((unsigned __int8)m_pucData[(unsigned int)(v155 + 1)] << 8)) << 8)) << 8);
                          LODWORD(v7) = v7 + 4;
                          v155 = (unsigned int)(v155 + 4);
                        }
                        else
                        {
                          v157 = 0;
                        }
                        *(_WORD *)((char *)&v154->_Myfirst._Val.figure + (unsigned __int64)v5->m_pussIndex) = v157;
                        ++v151;
                        v154 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)((char *)v154 + 2);
                        v459._Mypair._Myval2 = v154;
                        ++v152;
                        v156 = v460._Mypair._Myval2;
                        v153 = (int)result._Mypair._Myval2;
                      }
                      while ( v151 < (signed int)v5->m_usIndexCount );
                      LODWORD(v109) = 0;
                    }
                    v115 = 2i64 * v152;
                    v150 = v151 - v152;
                  }
                  else
                  {
                    v144 = 2 * v5->m_usIndexCount;
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      memmove(v142, &m_pucData[(unsigned int)v7], v144);
                      LODWORD(v7) = v144 + v7;
                    }
                    if ( v126 )
                    {
                      LODWORD(v109) = 0;
                      v145 = 0;
                      if ( (int)v5->m_ucMaterialCount > 0 )
                      {
                        v146 = 0i64;
                        do
                        {
                          memmove(
                            v5->m_pMaterial[v146].m_pssIndex,
                            &v5->m_pussIndex[v5->m_pMaterial[v146].m_usIndex],
                            2i64 * v5->m_pMaterial[v146].m_usIndexCount);
                          ++v145;
                          ++v146;
                        }
                        while ( v145 < (signed int)v5->m_ucMaterialCount );
                      }
LABEL_255:
                      v5->m_psMaterialIndex = 0i64;
                      LOBYTE(v158) = v481;
                      if ( (v481 & 0x20) != 0 )
                      {
                        v159 = (int *)operator new[](saturated_mul(2 * v5->m_ucMaterialCount, 4ui64));
                        v5->m_psMaterialIndex = v159;
                        if ( !v159 )
                          goto $_ERROR_0;
                        v160 = 0;
                        if ( (signed int)(2 * v5->m_ucMaterialCount) > 0 )
                        {
                          v161 = 0i64;
                          v106 = (unsigned int)(v7 + 2);
                          do
                          {
                            if ( m_uiSize > (unsigned int)v7 )
                            {
                              v162 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v106 - 1)] | (((unsigned __int8)m_pucData[v106] | ((unsigned __int8)m_pucData[(unsigned int)(v106 + 1)] << 8)) << 8)) << 8);
                              LODWORD(v7) = v7 + 4;
                              v106 = (unsigned int)(v106 + 4);
                            }
                            else
                            {
                              v162 = 0;
                            }
                            v5->m_psMaterialIndex[v161] = v162;
                            ++v160;
                            ++v161;
                          }
                          while ( v160 < (signed int)(2 * v5->m_ucMaterialCount) );
                        }
                      }
                      v5->m_psVertexCoordIndex = 0i64;
                      if ( (v481 & 0x40) == 0 )
                        goto LABEL_610;
                      if ( (v481 & 0x400) == 0 )
                      {
                        v163 = (int *)operator new[](saturated_mul(v5->m_usVertexCoordCount, 4ui64));
                        v5->m_psVertexCoordIndex = v163;
                        if ( !v163 )
                          goto $_ERROR_0;
                        v164 = 0;
                        if ( (int)v5->m_usVertexCoordCount > 0 )
                        {
                          v106 = 0i64;
                          v165 = (unsigned int)(v7 + 2);
                          do
                          {
                            v166 = (unsigned int)(v165 - 2);
                            if ( m_uiSize > (unsigned int)v166 )
                            {
                              v167 = (unsigned __int8)m_pucData[v166] | (((unsigned __int8)m_pucData[(unsigned int)(v165 - 1)] | (((unsigned __int8)m_pucData[v165] | ((unsigned __int8)m_pucData[(unsigned int)(v165 + 1)] << 8)) << 8)) << 8);
                              v165 = (unsigned int)(v165 + 4);
                            }
                            else
                            {
                              v167 = 0;
                            }
                            *(int *)((char *)v5->m_psVertexCoordIndex + v106) = v167;
                            ++v164;
                            v106 += 4i64;
                          }
                          while ( v164 < (signed int)v5->m_usVertexCoordCount );
                        }
                        goto LABEL_610;
                      }
                      if ( (v5->m_uiStateFlg & 8) != 0 )
                      {
                        v5->m_iInfluenceMax = 1;
                      }
                      else
                      {
                        v168 = v5->m_usVertexCoordCount;
                        result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v168;
                        v169 = 104 * v168;
                        if ( !is_mul_ok(v168, 0x68ui64) )
                          v169 = -1i64;
                        v33 = __CFADD__(v169, 8i64);
                        v170 = v169 + 8;
                        if ( v33 )
                          v170 = -1i64;
                        v171 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)operator new[](v170);
                        v464._Mypair._Myval2 = v171;
                        if ( v171 )
                        {
                          v171->_Myfirst._Val.figure = (OGLFigure *)v168;
                          v172 = &v171->_Myfirst._Val.outV;
                          `eh vector constructor iterator'(
                            &v171->_Myfirst._Val.outV,
                            0x68ui64,
                            (unsigned int)v168,
                            (void (__fastcall *)(void *))OGLVertexOptiInfo::OGLVertexOptiInfo,
                            (void (__fastcall *)(void *))OGLVertexOptiInfo::~OGLVertexOptiInfo);
                          v173 = 0;
                        }
                        else
                        {
                          v173 = 0;
                          v172 = 0i64;
                        }
                        v5->m_pVerOptiInfo = (OGLVertexOptiInfo *)v172;
                        LODWORD(result._Mypair._Myval2) = 0;
                        if ( (int)v5->m_usVertexCoordCount > 0 )
                        {
                          v174 = v481 & 0x8000;
                          LODWORD(_Thr._Hnd) = v174;
                          v175 = 0i64;
                          do
                          {
                            v176 = &v5->m_pVerOptiInfo[v175];
                            if ( m_uiSize > (unsigned int)v7 )
                            {
                              v177 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
                              LODWORD(v7) = v7 + 4;
                              v174 = (int)_Thr._Hnd;
                            }
                            else
                            {
                              v177 = 0;
                            }
                            v176->VerCoordFlg = v177;
                            if ( m_uiSize > (unsigned int)v7 )
                            {
                              v178 = m_pucData[(unsigned int)v7];
                              LODWORD(v7) = v7 + 1;
                            }
                            else
                            {
                              v178 = 0;
                            }
                            v176->Count = v178;
                            pWeights = v176->pWeights;
                            *(_QWORD *)v176->pWeights = 0i64;
                            *(_QWORD *)&v176->pWeights[2] = 0i64;
                            *(_QWORD *)&v176->pWeights[4] = 0i64;
                            *(_QWORD *)&v176->pWeights[6] = 0i64;
                            *(_QWORD *)&v176->pWeights[8] = 0i64;
                            *(_QWORD *)&v176->pWeights[10] = 0i64;
                            *(_QWORD *)&v176->pWeights[12] = 0i64;
                            *(_QWORD *)&v176->pWeights[14] = 0i64;
                            Count = v176->Count;
                            if ( (int)v109 < Count )
                              LODWORD(v109) = v176->Count;
                            v181 = 0.0;
                            if ( v174 )
                            {
                              if ( Count <= 0 )
                                goto LABEL_312;
                              v182 = (unsigned int)(v7 + 1);
                              pBoneIdx = v176->pBoneIdx;
                              do
                              {
                                if ( m_uiSize > (unsigned int)v7 )
                                {
                                  LODWORD(v459._Mypair._Myval2) = *(_DWORD *)&m_pucData[(unsigned int)v7];
                                  LODWORD(v7) = v7 + 4;
                                  v182 = (unsigned int)(v182 + 4);
                                  v184 = *(float *)&v459._Mypair._Myval2;
                                }
                                else
                                {
                                  v184 = 0.0;
                                }
                                *pWeights = v184;
                                v181 = v181 + v184;
                                if ( m_uiSize > (unsigned int)v7 )
                                {
                                  v106 = (unsigned __int8)m_pucData[v182];
                                  LOWORD(v106) = (unsigned __int8)m_pucData[(unsigned int)v7] | (unsigned __int16)((_WORD)v106 << 8);
                                  LODWORD(v7) = v7 + 2;
                                  v182 = (unsigned int)(v182 + 2);
                                }
                                else
                                {
                                  v106 = 0i64;
                                }
                                *pBoneIdx = v106;
                                ++v173;
                                ++pWeights;
                                ++pBoneIdx;
                              }
                              while ( v173 < v176->Count );
                            }
                            else
                            {
                              if ( Count <= 0 )
                                goto LABEL_312;
                              v185 = (unsigned int)(v7 + 1);
                              v186 = v176->pBoneIdx;
                              do
                              {
                                if ( m_uiSize > (unsigned int)v7 )
                                {
                                  v187 = (unsigned __int8)m_pucData[(unsigned int)v7] | ((unsigned __int8)m_pucData[v185] << 8);
                                  LODWORD(v7) = v7 + 2;
                                  v185 = (unsigned int)(v185 + 2);
                                }
                                else
                                {
                                  v187 = 0;
                                }
                                v188 = (float)v187 * 0.000099999997;
                                *pWeights = v188;
                                v181 = v181 + v188;
                                if ( m_uiSize > (unsigned int)v7 )
                                {
                                  v106 = (unsigned __int8)m_pucData[v185];
                                  LOWORD(v106) = (unsigned __int8)m_pucData[(unsigned int)v7] | (unsigned __int16)((_WORD)v106 << 8);
                                  LODWORD(v7) = v7 + 2;
                                  v185 = (unsigned int)(v185 + 2);
                                }
                                else
                                {
                                  v106 = 0i64;
                                }
                                *v186 = v106;
                                ++v173;
                                ++pWeights;
                                ++v186;
                              }
                              while ( v173 < v176->Count );
                            }
                            v5 = this;
                            if ( v181 != 1.0 )
LABEL_312:
                              v176->pWeights[v176->Count - 1] = (float)(1.0 - v181) + v176->pWeights[v176->Count - 1];
                            ++LODWORD(result._Mypair._Myval2);
                            ++v175;
                            v174 = (int)_Thr._Hnd;
                            v173 = 0;
                          }
                          while ( SLODWORD(result._Mypair._Myval2) < (signed int)v5->m_usVertexCoordCount );
                        }
                        v5->m_iInfluenceMax = v109;
                        LOBYTE(v158) = v481;
                      }
LABEL_610:
                      if ( (v5->m_uiStateFlg & 2) != 0 )
                      {
                        v358 = (MeshVertexInfo *)operator new[](saturated_mul(v5->m_usVertexCoordCount, 0x88ui64));
                      }
                      else
                      {
                        v359 = v5->m_usVertexCoordCount;
                        if ( (v5->m_uiStateFlg & 8) != 0 )
                          v360 = 88 * v359;
                        else
                          v360 = 136 * v359;
                        v358 = (MeshVertexInfo *)Framework::MemoryManager::allocate(
                                                   &v462->allocateStaticBuffers,
                                                   v360,
                                                   v106);
                      }
                      v5->m_pfVertexBuffer = v358;
                      v361 = v358;
                      if ( v358 )
                      {
                        m_iFormatType = v5->m_iFormatType;
                        if ( (v5->m_uiStateFlg & 8) != 0 )
                        {
                          if ( (m_iFormatType & 1) != 0 )
                          {
                            v472.figure = v5;
                            v472.outV = v361;
                            v400 = (std::unique_ptr<std::tuple<<lambda_12b90ea9f2fd716190554ece8222dbaa> >> *)std::make_unique<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>,_lambda_12b90ea9f2fd716190554ece8222dbaa_>(&v460, &v472);
                            std::_Launch<std::unique_ptr<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>>>(
                              &v466,
                              v400);
                            if ( v460._Mypair._Myval2 )
                              operator delete(v460._Mypair._Myval2, 0x10ui64);
                            m_usVertexColorCount = v5->m_usVertexColorCount;
                            if ( m_usVertexColorCount )
                            {
                              v403 = m_usVertexColorCount - 1;
                              v404 = v403;
                              if ( v403 >= 0 )
                              {
                                if ( v403 + 1i64 >= 4 )
                                {
                                  v401 = 4i64 * v403;
                                  p_y = (_DWORD *)&v361[v403].m_color.y;
                                  v406 = (unsigned __int64)(v403 + 1i64) >> 2;
                                  v404 = v403 - 4 * v406;
                                  do
                                  {
                                    *(p_y - 1) = LODWORD(v5->m_pfVertexColor[v401]);
                                    *p_y = LODWORD(v5->m_pfVertexColor[v401 + 1]);
                                    p_y[1] = LODWORD(v5->m_pfVertexColor[v401 + 2]);
                                    p_y[2] = LODWORD(v5->m_pfVertexColor[v401 + 3]);
                                    *(p_y - 23) = LODWORD(v5->m_pfVertexColor[v401 - 4]);
                                    *(p_y - 22) = LODWORD(v5->m_pfVertexColor[v401 - 3]);
                                    *(p_y - 21) = LODWORD(v5->m_pfVertexColor[v401 - 2]);
                                    *(p_y - 20) = LODWORD(v5->m_pfVertexColor[v401 - 1]);
                                    *(p_y - 45) = LODWORD(v5->m_pfVertexColor[v401 - 8]);
                                    *(p_y - 44) = LODWORD(v5->m_pfVertexColor[v401 - 7]);
                                    *(p_y - 43) = LODWORD(v5->m_pfVertexColor[v401 - 6]);
                                    *(p_y - 42) = LODWORD(v5->m_pfVertexColor[v401 - 5]);
                                    *(p_y - 67) = LODWORD(v5->m_pfVertexColor[v401 - 12]);
                                    *(p_y - 66) = LODWORD(v5->m_pfVertexColor[v401 - 11]);
                                    *(p_y - 65) = LODWORD(v5->m_pfVertexColor[v401 - 10]);
                                    *(p_y - 64) = LODWORD(v5->m_pfVertexColor[v401 - 9]);
                                    v401 -= 16i64;
                                    p_y -= 88;
                                    --v406;
                                  }
                                  while ( v406 );
                                }
                                if ( v404 >= 0 )
                                {
                                  v401 = 4 * v404;
                                  v407 = (_DWORD *)&v361[v404].m_color.y;
                                  do
                                  {
                                    *(v407 - 1) = LODWORD(v5->m_pfVertexColor[v401]);
                                    *v407 = LODWORD(v5->m_pfVertexColor[v401 + 1]);
                                    v407[1] = LODWORD(v5->m_pfVertexColor[v401 + 2]);
                                    v407[2] = LODWORD(v5->m_pfVertexColor[v401 + 3]);
                                    v401 -= 4i64;
                                    v407 -= 22;
                                    --v404;
                                  }
                                  while ( v404 >= 0 );
                                }
                              }
                              m_pfVertexColor = v5->m_pfVertexColor;
                              if ( m_pfVertexColor )
                              {
                                operator delete(m_pfVertexColor, v401 * 4);
                                v5->m_pfVertexColor = 0i64;
                              }
                            }
                            v409 = 0;
                            if ( v5->m_uiMultiUvCount )
                            {
                              v410 = (void **)v5->m_pfTexCoord;
                              v411 = v5->m_usTexCoordCount;
                              do
                              {
                                if ( *v411 )
                                {
                                  v412 = *v411 - 1;
                                  v413 = v412;
                                  if ( v412 >= 0 )
                                  {
                                    v414 = (_DWORD *)&v361[v412].m_texture3.y;
                                    do
                                    {
                                      if ( v409 )
                                      {
                                        switch ( v409 )
                                        {
                                          case 1u:
                                            *(v414 - 5) = *((_DWORD *)*v410 + 2 * v413);
                                            *(v414 - 4) = *((_DWORD *)*v410 + 2 * v413 + 1);
                                            break;
                                          case 2u:
                                            *(v414 - 3) = *((_DWORD *)*v410 + 2 * v413);
                                            *(v414 - 2) = *((_DWORD *)*v410 + 2 * v413 + 1);
                                            break;
                                          case 3u:
                                            *(v414 - 1) = *((_DWORD *)*v410 + 2 * v413);
                                            *v414 = *((_DWORD *)*v410 + 2 * v413 + 1);
                                            break;
                                        }
                                      }
                                      else
                                      {
                                        *(v414 - 7) = *((_DWORD *)*v410 + 2 * v413);
                                        *(v414 - 6) = *((_DWORD *)*v410 + 2 * v413 + 1);
                                      }
                                      v414 -= 22;
                                      --v413;
                                    }
                                    while ( v413 >= 0 );
                                  }
                                  if ( *v410 )
                                  {
                                    operator delete(*v410, v413);
                                    *v410 = 0i64;
                                  }
                                }
                                ++v409;
                                ++v411;
                                ++v410;
                              }
                              while ( v409 < v5->m_uiMultiUvCount );
                              LOBYTE(v158) = v481;
                            }
                            if ( !v466._Id )
                              std::_Throw_Cpp_error(1);
                            if ( v466._Id == Concurrency::details::platform::GetCurrentThreadId() )
                              std::_Throw_Cpp_error(5);
                            v477 = v466;
                            if ( Thrd_join(&v477, 0i64) )
                              std::_Throw_Cpp_error(2);
                            v466._Hnd = 0i64;
                            v466._Id = 0;
                          }
                          else
                          {
                            v473.figure = v5;
                            v473.outV = v361;
                            v415 = std::make_unique<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>,_lambda_12b90ea9f2fd716190554ece8222dbaa_>(
                                     &v459,
                                     &v473);
                            std::_Launch<std::unique_ptr<std::tuple<_lambda_49e167d41e58ceaf27bb79ed79325610_>>>(
                              &v467,
                              v415);
                            if ( v459._Mypair._Myval2 )
                              operator delete(v459._Mypair._Myval2, 0x10ui64);
                            v417 = v5->m_usVertexColorCount;
                            if ( v417 )
                            {
                              v418 = v417 - 1;
                              v419 = v418;
                              if ( v418 >= 0 )
                              {
                                if ( v418 + 1i64 >= 4 )
                                {
                                  v416 = 4i64 * v418;
                                  v420 = (_DWORD *)&v361[v418].m_color.y;
                                  v421 = (unsigned __int64)(v418 + 1i64) >> 2;
                                  v419 = v418 - 4 * v421;
                                  do
                                  {
                                    *(v420 - 1) = LODWORD(v5->m_pfVertexColor[v416]);
                                    *v420 = LODWORD(v5->m_pfVertexColor[v416 + 1]);
                                    v420[1] = LODWORD(v5->m_pfVertexColor[v416 + 2]);
                                    v420[2] = LODWORD(v5->m_pfVertexColor[v416 + 3]);
                                    *(v420 - 23) = LODWORD(v5->m_pfVertexColor[v416 - 4]);
                                    *(v420 - 22) = LODWORD(v5->m_pfVertexColor[v416 - 3]);
                                    *(v420 - 21) = LODWORD(v5->m_pfVertexColor[v416 - 2]);
                                    *(v420 - 20) = LODWORD(v5->m_pfVertexColor[v416 - 1]);
                                    *(v420 - 45) = LODWORD(v5->m_pfVertexColor[v416 - 8]);
                                    *(v420 - 44) = LODWORD(v5->m_pfVertexColor[v416 - 7]);
                                    *(v420 - 43) = LODWORD(v5->m_pfVertexColor[v416 - 6]);
                                    *(v420 - 42) = LODWORD(v5->m_pfVertexColor[v416 - 5]);
                                    *(v420 - 67) = LODWORD(v5->m_pfVertexColor[v416 - 12]);
                                    *(v420 - 66) = LODWORD(v5->m_pfVertexColor[v416 - 11]);
                                    *(v420 - 65) = LODWORD(v5->m_pfVertexColor[v416 - 10]);
                                    *(v420 - 64) = LODWORD(v5->m_pfVertexColor[v416 - 9]);
                                    v416 -= 16i64;
                                    v420 -= 88;
                                    --v421;
                                  }
                                  while ( v421 );
                                }
                                if ( v419 >= 0 )
                                {
                                  v416 = 4 * v419;
                                  v422 = (_DWORD *)&v361[v419].m_color.y;
                                  do
                                  {
                                    *(v422 - 1) = LODWORD(v5->m_pfVertexColor[v416]);
                                    *v422 = LODWORD(v5->m_pfVertexColor[v416 + 1]);
                                    v422[1] = LODWORD(v5->m_pfVertexColor[v416 + 2]);
                                    v422[2] = LODWORD(v5->m_pfVertexColor[v416 + 3]);
                                    v416 -= 4i64;
                                    v422 -= 22;
                                    --v419;
                                  }
                                  while ( v419 >= 0 );
                                }
                              }
                              v423 = v5->m_pfVertexColor;
                              if ( v423 )
                              {
                                operator delete(v423, v416 * 4);
                                v5->m_pfVertexColor = 0i64;
                              }
                            }
                            v424 = 0;
                            if ( v5->m_uiMultiUvCount )
                            {
                              v425 = (void **)v5->m_pfTexCoord;
                              v426 = v5->m_usTexCoordCount;
                              do
                              {
                                if ( *v426 )
                                {
                                  v427 = *v426 - 1;
                                  v428 = v427;
                                  if ( v427 >= 0 )
                                  {
                                    v429 = (_DWORD *)&v361[v427].m_texture3.y;
                                    do
                                    {
                                      if ( v424 )
                                      {
                                        switch ( v424 )
                                        {
                                          case 1u:
                                            *(v429 - 5) = *((_DWORD *)*v425 + 2 * v428);
                                            *(v429 - 4) = *((_DWORD *)*v425 + 2 * v428 + 1);
                                            break;
                                          case 2u:
                                            *(v429 - 3) = *((_DWORD *)*v425 + 2 * v428);
                                            *(v429 - 2) = *((_DWORD *)*v425 + 2 * v428 + 1);
                                            break;
                                          case 3u:
                                            *(v429 - 1) = *((_DWORD *)*v425 + 2 * v428);
                                            *v429 = *((_DWORD *)*v425 + 2 * v428 + 1);
                                            break;
                                        }
                                      }
                                      else
                                      {
                                        *(v429 - 7) = *((_DWORD *)*v425 + 2 * v428);
                                        *(v429 - 6) = *((_DWORD *)*v425 + 2 * v428 + 1);
                                      }
                                      v429 -= 22;
                                      --v428;
                                    }
                                    while ( v428 >= 0 );
                                  }
                                  if ( *v425 )
                                  {
                                    operator delete(*v425, v428);
                                    *v425 = 0i64;
                                  }
                                }
                                ++v424;
                                ++v426;
                                ++v425;
                              }
                              while ( v424 < v5->m_uiMultiUvCount );
                              LOBYTE(v158) = v481;
                            }
                            if ( !v467._Id )
                              std::_Throw_Cpp_error(1);
                            if ( v467._Id == Concurrency::details::platform::GetCurrentThreadId() )
                              std::_Throw_Cpp_error(5);
                            v478 = v467;
                            if ( Thrd_join(&v478, 0i64) )
                              std::_Throw_Cpp_error(2);
                            v467._Hnd = 0i64;
                            v467._Id = 0;
                          }
                          if ( (v5->m_uiStateFlg & 4) != 0 )
                            goto LABEL_747;
                          v398 = v5->m_usIndexCount;
                          v399 = &v462->allocateStaticBuffers;
                          if ( (v158 & 0x80u) == 0 )
                          {
LABEL_741:
                            v430 = Framework::MemoryManager::allocate(v399, 4 * v398, v380);
                            v5->m_pfIndexBuffer = v430;
                            memmove(v430, v5->m_pusIndex, 4i64 * v5->m_usIndexCount);
                            m_pusIndex = v5->m_pusIndex;
                            if ( m_pusIndex )
                            {
                              operator delete(m_pusIndex, v431);
                              v5->m_pusIndex = 0i64;
                            }
                            v5->m_pusIndex = (unsigned int *)v5->m_pfIndexBuffer;
LABEL_747:
                            CurrentThreadId = Concurrency::details::platform::GetCurrentThreadId();
                            v438 = v462;
                            if ( v462->mainGraphicsPthread != CurrentThreadId )
                            {
                              v439 = *(_QWORD *)NtCurrentTeb()->Reserved1[11];
                              if ( !*(_DWORD *)(v439 + 12) && *(int *)(v439 + 8) <= 0 )
                              {
                                DisplayByIndex = AgDisplayManager::getDisplayByIndex(
                                                   (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                                                   &v468,
                                                   0);
                                Log = Scaleform::GFx::Stream::GetLog(DisplayByIndex->m_ptr);
                                AgDisplayPlatformImplementation::loadingLock(Log, 0);
                                m_ptr = v468.m_ptr;
                                v468.m_ptr = 0i64;
                                m_ref = v468.m_ref;
                                if ( v468.m_ref )
                                {
                                  v468.m_ref = 0i64;
                                  v444 = 0;
                                  if ( !AgAtomicDecrement(&m_ref->m_strongCount) )
                                  {
                                    if ( !AgAtomicDecrement(&m_ref->m_weakCount) )
                                      v444 = 1;
                                    m_ref->m_data = 0i64;
                                    if ( m_ptr )
                                    {
                                      AgDisplay::~AgDisplay(m_ptr);
                                      operator delete(m_ptr, 0x70ui64);
                                    }
                                    if ( v444 )
                                      AgReferenceCount::operator delete(m_ref);
                                  }
                                }
                                *(_DWORD *)(v439 + 8) = 1;
                                v438 = v462;
                              }
                            }
                            v6 = 1;
                            _glewGenBuffers(1, &v5->vertexBuffer);
                            _glewBindBuffer(0x90D2u, v5->vertexBuffer);
                            v445 = v5->m_usVertexCoordCount;
                            if ( (v5->m_uiStateFlg & 8) != 0 )
                            {
                              v446 = 88 * v445;
                              v447 = 35044;
                            }
                            else
                            {
                              v446 = 136 * v445;
                              v447 = 35046;
                            }
                            _glewBufferData(0x90D2u, v446, v5->m_pfVertexBuffer, v447);
                            _glewBindBuffer(0x90D2u, 0);
                            if ( v438->mainGraphicsPthread != Concurrency::details::platform::GetCurrentThreadId() )
                            {
                              v448 = (__int64 *)NtCurrentTeb()->Reserved1[11];
                              v449 = *v448;
                              if ( *(_DWORD *)(*v448 + 8) == 1 )
                              {
                                glFlush();
                                v450 = AgDisplayManager::getDisplayByIndex(
                                         (AgDisplayManager *)AgSingleton<AgDisplayManager>::ms_instance,
                                         &v469,
                                         0);
                                v451 = Scaleform::GFx::Stream::GetLog(v450->m_ptr);
                                AgDisplayPlatformImplementation::loadingUnlock(v451, 0);
                                v452 = v469.m_ptr;
                                v469.m_ptr = 0i64;
                                v453 = v469.m_ref;
                                if ( v469.m_ref )
                                {
                                  v469.m_ref = 0i64;
                                  v454 = 0;
                                  if ( !AgAtomicDecrement(&v453->m_strongCount) )
                                  {
                                    if ( !AgAtomicDecrement(&v453->m_weakCount) )
                                      v454 = 1;
                                    v453->m_data = 0i64;
                                    if ( v452 )
                                    {
                                      AgDisplay::~AgDisplay(v452);
                                      operator delete(v452, 0x70ui64);
                                    }
                                    if ( v454 )
                                      AgReferenceCount::operator delete(v453);
                                  }
                                }
                                *(_DWORD *)(v449 + 8) = 0;
                                v6 = 1;
                              }
                            }
                            if ( (v5->m_uiStateFlg & 8) == 0 )
                              OGLFigure::copyParamaterGPU(v5);
                            return v6;
                          }
                        }
                        else
                        {
                          if ( (m_iFormatType & 1) != 0 )
                          {
                            v470.figure = v5;
                            v470.outV = v361;
                            v363 = (std::unique_ptr<std::tuple<<lambda_230801668028c2b66e05f2ecff55509a> >> *)std::make_unique<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>,_lambda_12b90ea9f2fd716190554ece8222dbaa_>(&result, &v470);
                            std::_Launch<std::unique_ptr<std::tuple<_lambda_230801668028c2b66e05f2ecff55509a_>>>(
                              &_Thr,
                              v363);
                            if ( result._Mypair._Myval2 )
                              operator delete(result._Mypair._Myval2, 0x10ui64);
                            v364 = v5->m_usVertexCoordCount;
                            if ( v5->m_uiBoneCount )
                            {
                              v365 = v364 - 1;
                              v366 = v365;
                              if ( v365 >= 0 )
                              {
                                v367 = v365;
                                v368 = (__int64)(&v361->m_texture2 + 17 * v365);
                                do
                                {
                                  v369 = &v5->m_pVerOptiInfo[v367];
                                  v370 = 0;
                                  v371 = 0i64;
                                  if ( v369->Count > 0 )
                                  {
                                    v372 = (_DWORD *)&v369->pWeights[1];
                                    v373 = &v369->pBoneIdx[1];
                                    v374 = v368 - (_QWORD)v369;
                                    do
                                    {
                                      *(_DWORD *)(v368 + 4 * ((__int64)v370 >> 1) - 32) = *v373 | (*(v373 - 1) << 16);
                                      *(_DWORD *)((char *)v372 + v374 - 12) = *(v372 - 1);
                                      *(_DWORD *)((char *)v372 + v374 - 8) = *v372;
                                      v370 += 2;
                                      v371 += 2i64;
                                      v373 += 2;
                                      v372 += 2;
                                    }
                                    while ( v370 < v369->Count );
                                  }
                                  *(_DWORD *)(v368 - 4) = v369->Count | *(_DWORD *)(v368 - 4) & 0xFFFF0000;
                                  --v367;
                                  v368 -= 136i64;
                                  --v366;
                                }
                                while ( v366 >= 0 );
                              }
                              m_pVerOptiInfo = v5->m_pVerOptiInfo;
                              if ( m_pVerOptiInfo )
                              {
                                v376 = &m_pVerOptiInfo[-1].pBoneIdx[12];
                                `eh vector destructor iterator'(
                                  m_pVerOptiInfo,
                                  0x68ui64,
                                  *(_QWORD *)&m_pVerOptiInfo[-1].pBoneIdx[12],
                                  (void (__fastcall *)(void *))OGLVertexOptiInfo::~OGLVertexOptiInfo);
                                operator delete[](v376, 104i64 * *(_QWORD *)v376 + 8);
                                v5->m_pVerOptiInfo = 0i64;
                              }
                            }
                            else
                            {
                              v377 = v364 - 1;
                              v378 = v377;
                              if ( v377 >= 0 )
                              {
                                v379 = (_DWORD *)(&v361->m_texture1.y + 34 * v377);
                                do
                                {
                                  *v379 = 0;
                                  v379 -= 34;
                                  --v378;
                                }
                                while ( v378 >= 0 );
                              }
                            }
                            if ( !_Thr._Id )
                              std::_Throw_Cpp_error(1);
                            if ( _Thr._Id == Concurrency::details::platform::GetCurrentThreadId() )
                              std::_Throw_Cpp_error(5);
                            v475 = _Thr;
                            if ( Thrd_join(&v475, 0i64) )
                              std::_Throw_Cpp_error(2);
                            _Thr._Hnd = 0i64;
                            _Thr._Id = 0;
                          }
                          else
                          {
                            v471.figure = v5;
                            v471.outV = v361;
                            v381 = (std::unique_ptr<std::tuple<<lambda_1247ded54a2e5f087cbbad2046cfed3a> >> *)std::make_unique<std::tuple<_lambda_12b90ea9f2fd716190554ece8222dbaa_>,_lambda_12b90ea9f2fd716190554ece8222dbaa_>(&v464, &v471);
                            std::_Launch<std::unique_ptr<std::tuple<_lambda_1247ded54a2e5f087cbbad2046cfed3a_>>>(
                              &v465,
                              v381);
                            if ( v464._Mypair._Myval2 )
                              operator delete(v464._Mypair._Myval2, 0x10ui64);
                            v382 = v5->m_usVertexCoordCount;
                            if ( v5->m_uiBoneCount )
                            {
                              v383 = v382 - 1;
                              v384 = v383;
                              if ( v383 >= 0 )
                              {
                                v385 = v383;
                                v386 = (__int64)(&v361->m_texture2 + 17 * v383);
                                do
                                {
                                  v387 = &v5->m_pVerOptiInfo[v385];
                                  v388 = 0;
                                  v389 = 0i64;
                                  if ( v387->Count > 0 )
                                  {
                                    v390 = (_DWORD *)&v387->pWeights[1];
                                    v391 = &v387->pBoneIdx[1];
                                    v392 = v386 - (_QWORD)v387;
                                    do
                                    {
                                      *(_DWORD *)(v386 + 4 * ((__int64)v388 >> 1) - 32) = *v391 | (*(v391 - 1) << 16);
                                      *(_DWORD *)((char *)v390 + v392 - 12) = *(v390 - 1);
                                      *(_DWORD *)((char *)v390 + v392 - 8) = *v390;
                                      v388 += 2;
                                      v389 += 2i64;
                                      v391 += 2;
                                      v390 += 2;
                                    }
                                    while ( v388 < v387->Count );
                                  }
                                  *(_DWORD *)(v386 - 4) = v387->Count | *(_DWORD *)(v386 - 4) & 0xFFFF0000;
                                  --v385;
                                  v386 -= 136i64;
                                  --v384;
                                }
                                while ( v384 >= 0 );
                              }
                              v393 = v5->m_pVerOptiInfo;
                              if ( v393 )
                              {
                                v394 = &v393[-1].pBoneIdx[12];
                                `eh vector destructor iterator'(
                                  v393,
                                  0x68ui64,
                                  *(_QWORD *)&v393[-1].pBoneIdx[12],
                                  (void (__fastcall *)(void *))OGLVertexOptiInfo::~OGLVertexOptiInfo);
                                operator delete[](v394, 104i64 * *(_QWORD *)v394 + 8);
                                v5->m_pVerOptiInfo = 0i64;
                              }
                            }
                            else
                            {
                              v395 = v382 - 1;
                              v396 = v395;
                              if ( v395 >= 0 )
                              {
                                v397 = (_DWORD *)(&v361->m_texture1.y + 34 * v395);
                                do
                                {
                                  *v397 = 0;
                                  v397 -= 34;
                                  --v396;
                                }
                                while ( v396 >= 0 );
                              }
                            }
                            if ( !v465._Id )
                              std::_Throw_Cpp_error(1);
                            if ( v465._Id == Concurrency::details::platform::GetCurrentThreadId() )
                              std::_Throw_Cpp_error(5);
                            v476 = v465;
                            if ( Thrd_join(&v476, 0i64) )
                              std::_Throw_Cpp_error(2);
                            v465._Hnd = 0i64;
                            v465._Id = 0;
                          }
                          if ( (v5->m_uiStateFlg & 4) != 0 )
                            goto LABEL_747;
                          v398 = v5->m_usIndexCount;
                          v399 = &v462->allocateStaticBuffers;
                          if ( (v481 & 0x80u) == 0 )
                            goto LABEL_741;
                        }
                        v433 = Framework::MemoryManager::allocate(v399, 2 * v398, v380);
                        v434 = v5->m_usIndexCount;
                        v5->m_pfIndexBuffer = v433;
                        memmove(v433, v5->m_pussIndex, 2 * v434);
                        m_pussIndex = v5->m_pussIndex;
                        if ( m_pussIndex )
                        {
                          operator delete(m_pussIndex, v435);
                          v5->m_pussIndex = 0i64;
                        }
                        v5->m_pussIndex = (unsigned __int16 *)v5->m_pfIndexBuffer;
                        goto LABEL_747;
                      }
                      goto $_ERROR_0;
                    }
                    v109 = 0i64;
                    v147 = 0;
                    v148 = 0;
                    v149 = 0;
                    LODWORD(result._Mypair._Myval2) = 0;
                    if ( (int)v5->m_usIndexCount > 0 )
                    {
                      do
                      {
                        if ( v148 >= *(signed int *)((char *)&v5->m_pMaterial->m_usIndexCount + v109) )
                        {
                          memmove(*(void **)(v143 + 56), &v5->m_pussIndex[v147 - v148], 2i64 * v148);
                          v148 = 0;
                          v149 = ++LODWORD(result._Mypair._Myval2);
                          v109 += 1128i64;
                        }
                        v143 = (__int64)&v5->m_pMaterial[v149];
                        v147 += 3;
                        v148 += 3;
                      }
                      while ( v147 < (signed int)v5->m_usIndexCount );
                      LODWORD(v109) = 0;
                    }
                    v115 = 2i64 * v148;
                    v150 = v147 - v148;
                  }
                  v117 = &v5->m_pussIndex[v150];
                  v118 = *(void **)(v143 + 56);
                }
                else
                {
                  v89 = v481 & 0x10000;
                  LODWORD(result._Mypair._Myval2) = v481 & 0x10000;
                  if ( (v481 & 0x10000) != 0 )
                  {
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      v90 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
                      LODWORD(v7) = v7 + 4;
                    }
                    else
                    {
                      v90 = 0;
                    }
                    v459._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v90;
                    v460._Mypair._Myval2 = 0i64;
                    if ( v90 > 0 )
                    {
                      v91 = &v462->allocateStaticBuffers;
                      _Thr._Hnd = &v462->allocateStaticBuffers;
                      v92 = (unsigned int)(v7 + 2);
                      v93 = 0i64;
                      while ( 1 )
                      {
                        v94 = v5->m_pMaterial;
                        if ( m_uiSize > (unsigned int)v7 )
                        {
                          v95 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v92 - 1)] | (((unsigned __int8)m_pucData[v92] | ((unsigned __int8)m_pucData[(unsigned int)(v92 + 1)] << 8)) << 8)) << 8);
                          LODWORD(v7) = v7 + 4;
                          v92 = (unsigned int)(v92 + 4);
                        }
                        else
                        {
                          v95 = 0;
                        }
                        v94[v93].m_usIndex = v95;
                        v96 = Framework::MemoryManager::allocate(
                                v91,
                                4i64 * v94[v93].m_usIndexCount,
                                (unsigned __int64)v91);
                        v5->m_pfIndexBuffer = v96;
                        v94[v93].m_psIndex = (unsigned int *)v96;
                        if ( !v96 )
                          goto $_ERROR_0;
                        ++v460._Mypair._Myval2;
                        ++v93;
                        v91 = (Framework::MemoryManager *)_Thr._Hnd;
                        if ( (__int64)v460._Mypair._Myval2 >= (__int64)v459._Mypair._Myval2 )
                          goto LABEL_176;
                      }
                    }
                  }
                  else
                  {
                    v97 = 0;
                    v98 = 0;
                    if ( (int)v5->m_ucMaterialCount > 0 )
                    {
                      v99 = &v462->allocateStaticBuffers;
                      v460._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)&v462->allocateStaticBuffers;
                      v100 = 0i64;
                      do
                      {
                        v101 = v5->m_pMaterial;
                        v101[v100].m_usIndex = v98;
                        v102 = v101[v100].m_usIndexCount;
                        LODWORD(_Thr._Hnd) = v102 + v98;
                        v103 = Framework::MemoryManager::allocate(v99, 4 * v102, v79 * 1128);
                        v5->m_pfIndexBuffer = v103;
                        v101[v100].m_psIndex = (unsigned int *)v103;
                        if ( !v103 )
                          goto $_ERROR_0;
                        ++v97;
                        ++v100;
                        v98 = (unsigned int)_Thr._Hnd;
                        v99 = (Framework::MemoryManager *)v460._Mypair._Myval2;
                      }
                      while ( v97 < (signed int)v5->m_ucMaterialCount );
LABEL_176:
                      v88 = v481;
                    }
                    v89 = (int)result._Mypair._Myval2;
                  }
                  if ( m_uiSize > (unsigned int)v7 )
                  {
                    v104 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
                    LODWORD(v7) = v7 + 4;
                  }
                  else
                  {
                    v104 = 0;
                  }
                  v5->m_usIndexCount = v104;
                  v105 = (unsigned int *)operator new[](saturated_mul(v104, 4ui64));
                  v5->m_pusIndex = v105;
                  if ( !v105 )
                    goto $_ERROR_0;
                  v107 = (__int64)v5->m_pMaterial;
                  if ( (v88 & 0x10) != 0 )
                  {
                    LODWORD(v109) = 0;
                    v119 = 0;
                    v120 = 0;
                    v121 = 0;
                    LODWORD(result._Mypair._Myval2) = 0;
                    if ( (int)v5->m_usIndexCount > 0 )
                    {
                      v122 = 0i64;
                      v459._Mypair._Myval2 = 0i64;
                      v123 = (unsigned int)(v7 + 2);
                      v124 = 0i64;
                      v460._Mypair._Myval2 = 0i64;
                      do
                      {
                        if ( v120 >= *(_DWORD *)((char *)&v124[2]._Myfirst._Val.outV + (unsigned __int64)v5->m_pMaterial) )
                        {
                          memmove(*(void **)(v107 + 48), &v5->m_pusIndex[v119 - v120], 4i64 * v120);
                          v120 = 0;
                          v121 = ++LODWORD(result._Mypair._Myval2);
                          v460._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)((char *)v460._Mypair._Myval2 + 1128);
                          v122 = v459._Mypair._Myval2;
                        }
                        v107 = (__int64)&v5->m_pMaterial[v121];
                        if ( m_uiSize > (unsigned int)v7 )
                        {
                          v125 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v123 - 1)] | (((unsigned __int8)m_pucData[v123] | ((unsigned __int8)m_pucData[(unsigned int)(v123 + 1)] << 8)) << 8)) << 8);
                          LODWORD(v7) = v7 + 4;
                          v123 = (unsigned int)(v123 + 4);
                        }
                        else
                        {
                          v125 = 0;
                        }
                        *(_DWORD *)((char *)&v122->_Myfirst._Val.figure + (unsigned __int64)v5->m_pusIndex) = v125;
                        ++v119;
                        v122 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)((char *)v122 + 4);
                        v459._Mypair._Myval2 = v122;
                        ++v120;
                        v124 = v460._Mypair._Myval2;
                        v121 = (int)result._Mypair._Myval2;
                      }
                      while ( v119 < (signed int)v5->m_usIndexCount );
                      LODWORD(v109) = 0;
                    }
                    v115 = 4i64 * v120;
                    v116 = v119 - v120;
                  }
                  else
                  {
                    v108 = 4 * v5->m_usIndexCount;
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      memmove(v105, &m_pucData[(unsigned int)v7], v108);
                      LODWORD(v7) = v108 + v7;
                    }
                    if ( v89 )
                    {
                      LODWORD(v109) = 0;
                      v110 = 0;
                      if ( (int)v5->m_ucMaterialCount > 0 )
                      {
                        v111 = 0i64;
                        do
                        {
                          memmove(
                            v5->m_pMaterial[v111].m_psIndex,
                            &v5->m_pusIndex[v5->m_pMaterial[v111].m_usIndex],
                            4i64 * v5->m_pMaterial[v111].m_usIndexCount);
                          ++v110;
                          ++v111;
                        }
                        while ( v110 < (signed int)v5->m_ucMaterialCount );
                      }
                      goto LABEL_255;
                    }
                    v109 = 0i64;
                    v112 = 0;
                    v113 = 0;
                    v114 = 0;
                    LODWORD(result._Mypair._Myval2) = 0;
                    if ( (int)v5->m_usIndexCount > 0 )
                    {
                      do
                      {
                        if ( v113 >= *(signed int *)((char *)&v5->m_pMaterial->m_usIndexCount + v109) )
                        {
                          memmove(*(void **)(v107 + 48), &v5->m_pusIndex[v112 - v113], 4i64 * v113);
                          v113 = 0;
                          v114 = ++LODWORD(result._Mypair._Myval2);
                          v109 += 1128i64;
                        }
                        v107 = (__int64)&v5->m_pMaterial[v114];
                        v112 += 3;
                        v113 += 3;
                      }
                      while ( v112 < (signed int)v5->m_usIndexCount );
                      LODWORD(v109) = 0;
                    }
                    v115 = 4i64 * v113;
                    v116 = v112 - v113;
                  }
                  v117 = (unsigned __int16 *)&v5->m_pusIndex[v116];
                  v118 = *(void **)(v107 + 48);
                }
                memmove(v118, v117, v115);
                goto LABEL_255;
              }
            }
$_ERROR_0:
            OGLFigure::finalize(v5, v11);
            return 0xFFFFFFFFi64;
          }
LABEL_35:
          v20 = 0;
          goto LABEL_37;
        }
LABEL_28:
        v17 = 0;
        goto LABEL_30;
      }
LABEL_21:
      v14 = 0;
      goto LABEL_23;
    }
    if ( size > (unsigned int)v7 )
    {
      v189 = buffer[(unsigned int)v7] | ((buffer[(unsigned int)(v7 + 1)] | ((buffer[(unsigned int)(v7 + 2)] | (buffer[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
      LODWORD(v7) = v7 + 4;
      format.m_uiPoint = v7;
    }
    else
    {
      v189 = 0;
    }
    this->m_usVertexCoordCount = v189;
    v190 = (float *)operator new[](saturated_mul((unsigned int)(3 * v189), 4ui64));
    v5->m_pfVertexCoord = v190;
    if ( !v190 )
      goto $_ERROR_0;
    v191 = 12 * v5->m_usVertexCoordCount;
    if ( m_uiSize <= (unsigned int)v7
      || (memmove(v190, &m_pucData[(unsigned int)v7], v191),
          v7 = (unsigned int)(v191 + v7),
          format.m_uiPoint = v7,
          m_uiSize <= (unsigned int)v7) )
    {
      v192 = 0;
    }
    else
    {
      v192 = (unsigned __int8)m_pucData[v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
      LODWORD(v7) = v7 + 4;
      format.m_uiPoint = v7;
    }
    v5->m_usNormalCoordCount = v192;
    if ( v192 )
    {
      v193 = (float *)operator new[](saturated_mul((unsigned int)(3 * v192), 4ui64));
      v5->m_pfNormalCoord = v193;
      if ( !v193 )
        goto $_ERROR_0;
      v194 = 12 * v5->m_usNormalCoordCount;
      if ( m_uiSize <= (unsigned int)v7 )
        goto LABEL_329;
      memmove(v193, &m_pucData[(unsigned int)v7], v194);
      LODWORD(v7) = v194 + v7;
      format.m_uiPoint = v7;
    }
    if ( m_uiSize > (unsigned int)v7 )
    {
      v195 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
      LODWORD(v7) = v7 + 4;
      format.m_uiPoint = v7;
LABEL_331:
      v5->m_usVertexColorCount = v195;
      if ( v195 )
      {
        v196 = (float *)operator new[](saturated_mul((unsigned int)(4 * v195), 4ui64));
        v5->m_pfVertexColor = v196;
        if ( !v196 )
          goto $_ERROR_0;
        v197 = 0;
        if ( 4 * v5->m_usVertexColorCount )
        {
          v198 = 0i64;
          do
          {
            if ( m_uiSize > (unsigned int)v7 )
            {
              v199 = m_pucData[(unsigned int)v7];
              LODWORD(v7) = v7 + 1;
              format.m_uiPoint = v7;
            }
            else
            {
              v199 = 0;
            }
            if ( m_uiSize > (unsigned int)v7 )
            {
              v200 = m_pucData[(unsigned int)v7];
              LODWORD(v7) = v7 + 1;
              format.m_uiPoint = v7;
            }
            else
            {
              v200 = 0;
            }
            if ( m_uiSize > (unsigned int)v7 )
            {
              v201 = m_pucData[(unsigned int)v7];
              LODWORD(v7) = v7 + 1;
              format.m_uiPoint = v7;
            }
            else
            {
              v201 = 0;
            }
            if ( m_uiSize > (unsigned int)v7 )
            {
              v202 = m_pucData[(unsigned int)v7];
              LODWORD(v7) = v7 + 1;
              format.m_uiPoint = v7;
            }
            else
            {
              v202 = 0;
            }
            v5->m_pfVertexColor[v198] = (float)v199 * 0.00390625;
            v5->m_pfVertexColor[v198 + 1] = (float)v200 * 0.00390625;
            v5->m_pfVertexColor[v198 + 2] = (float)v201 * 0.00390625;
            v5->m_pfVertexColor[v198 + 3] = (float)v202 * 0.00390625;
            v197 += 4;
            v198 += 4i64;
          }
          while ( v197 < 4 * v5->m_usVertexColorCount );
        }
        v5->m_iFormatType |= 0x100u;
      }
      if ( (v8 & 0x4000) != 0 )
      {
        if ( m_uiSize > (unsigned int)v7 )
        {
          v203 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
          LODWORD(v7) = v7 + 4;
          format.m_uiPoint = v7;
        }
        else
        {
          v203 = 0;
        }
        v5->m_uiMultiUvCount = v203;
      }
      else
      {
        v5->m_uiMultiUvCount = 1;
      }
      v204 = 0;
      if ( (int)v5->m_uiMultiUvCount > 0 )
      {
        v205 = v5->m_usTexCoordCount;
        v206 = (MeshVertexInfo **)v5->m_pfTexCoord;
        result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v5->m_pfTexCoord;
        do
        {
          if ( m_uiSize > (unsigned int)v7 )
          {
            v207 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
            LODWORD(v7) = v7 + 4;
            format.m_uiPoint = v7;
          }
          else
          {
            v207 = 0;
          }
          *v205 = v207;
          v208 = (MeshVertexInfo *)operator new[](saturated_mul((unsigned int)(2 * v207), 4ui64));
          *v206 = v208;
          if ( *v205 )
          {
            if ( !v208 )
              goto $_ERROR_0;
          }
          v209 = 8 * *v205;
          if ( m_uiSize > (unsigned int)v7 )
          {
            memmove(v208, &m_pucData[(unsigned int)v7], v209);
            LODWORD(v7) = v209 + v7;
            format.m_uiPoint = v7;
          }
          ++v204;
          v206 = &result._Mypair._Myval2->_Myfirst._Val.outV;
          result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)((char *)result._Mypair._Myval2
                                                                                            + 8);
          ++v205;
        }
        while ( v204 < (signed int)v5->m_uiMultiUvCount );
      }
      if ( m_uiSize > (unsigned int)v7 )
      {
        v210 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
        LODWORD(v7) = v7 + 4;
        format.m_uiPoint = v7;
      }
      else
      {
        v210 = 0;
      }
      v5->m_uiBoneCount = v210;
      v211 = (OGLFigure *)v210;
      result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v210;
      v212 = 232i64 * v210;
      if ( !is_mul_ok(v210, 0xE8ui64) )
        v212 = -1i64;
      v33 = __CFADD__(v212, 8i64);
      v213 = v212 + 8;
      if ( v33 )
        v213 = -1i64;
      v214 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)operator new[](v213);
      v464._Mypair._Myval2 = v214;
      if ( v214 )
      {
        v214->_Myfirst._Val.figure = v211;
        v215 = &v214->_Myfirst._Val.outV;
        `eh vector constructor iterator'(
          &v214->_Myfirst._Val.outV,
          0xE8ui64,
          (unsigned int)v211,
          (void (__fastcall *)(void *))OGLBone::OGLBone,
          (void (__fastcall *)(void *))OGLBone::~OGLBone);
      }
      else
      {
        v215 = 0i64;
      }
      v5->m_pBone = (OGLBone *)v215;
      v216 = v5->m_uiBoneCount;
      result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v216;
      v217 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)operator new[](saturated_mul(v216, 0x40ui64));
      v218 = (OGLMatrix *)v217;
      result._Mypair._Myval2 = v217;
      if ( v217 )
      {
        if ( v216 )
          memset(v217, 0, v216 << 6);
        LODWORD(v217) = 0;
      }
      else
      {
        v218 = 0i64;
      }
      v5->m_pBindPose = v218;
      if ( !v5->m_pBone || !v218 )
        goto $_ERROR_0;
      v219 = (int)v217;
      if ( (int)v5->m_uiBoneCount > 0 )
      {
        do
        {
          if ( !OGLBone::loadFloat(&v5->m_pBone[v219], &format, v219) )
            goto $_ERROR_0;
          ++v219;
        }
        while ( v219 < (signed int)v5->m_uiBoneCount );
        m_uiSize = format.m_uiSize;
        LODWORD(v7) = format.m_uiPoint;
        m_pucData = format.m_pucData;
        v460._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)format.m_pucData;
      }
      if ( (v481 & 0x800) != 0 )
      {
        v220 = (unsigned __int64 *)operator new[](saturated_mul(v5->m_uiBoneCount, 8ui64));
        v5->m_iBoneHash = v220;
        if ( !v220 )
          goto $_ERROR_0;
        v221 = 0i64;
        v222 = 0;
        LODWORD(result._Mypair._Myval2) = 0;
        if ( (int)v5->m_uiBoneCount > 0 )
        {
          v223 = 0i64;
          v459._Mypair._Myval2 = 0i64;
          do
          {
            if ( m_uiSize > (unsigned int)v7 )
            {
              v224 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
              LODWORD(v7) = v7 + 4;
              format.m_uiPoint = v7;
            }
            else
            {
              v224 = 0;
            }
            v225 = v222;
            if ( m_uiSize > (unsigned int)v7 )
            {
              memmove(v5->m_pBone[v225].m_cNameOrigin, &m_pucData[(unsigned int)v7], v224);
              LODWORD(v7) = v224 + v7;
              format.m_uiPoint = v7;
            }
            v5->m_pBone[v223].m_cName = v5->m_pBone[v225].m_cNameOrigin;
            v5->m_pBone[v223].m_cName[v224] = 0;
            *(OGLFigure **)((char *)&v459._Mypair._Myval2->_Myfirst._Val.figure + (unsigned __int64)v5->m_iBoneHash) = (OGLFigure *)getBoneHashCode((const char *)v5->m_pBone[v223].m_cName);
            if ( v224 >= 5 )
            {
              v226 = v5->m_pBone;
              _Thr._Hnd = v226;
              m_cName = v226[v223].m_cName;
              v221 = 0i64;
              v228 = 0i64;
              while ( 1 )
              {
                v229 = m_cName[v224 - 4 + v228++];
                if ( v229 != aSec_0[v228 - 1] )
                  break;
                if ( v228 == 5 )
                {
                  v226[v223].m_uiBoneInfoFlg |= 2u;
                  if ( *(_DWORD *)(m_cName + 1) == *(_DWORD *)"_Bust" && m_cName[5] == aBust[4] )
                    v5->m_pBone[v223].m_uiBoneInfoFlg |= 8u;
                  goto LABEL_411;
                }
              }
              if ( v224 < 10 )
                goto LABEL_411;
              if ( !strcmp((const char *)&m_cName[v224 - 9], "_Sec_Root") )
              {
                *(_DWORD *)((char *)_Thr._Hnd + v223 * 232 + 100) |= 4u;
                if ( *(_DWORD *)(m_cName + 1) == *(_DWORD *)"_Wing" && m_cName[5] == aWing[4] )
                  v5->m_pBone[v223].m_uiBoneInfoFlg |= 0x10u;
              }
              if ( *(_DWORD *)(m_cName + 1) == *(_DWORD *)"_Bust" && m_cName[5] == aBust[4] )
                v5->m_pBone[v223].m_uiBoneInfoFlg |= 8u;
            }
            v221 = 0i64;
LABEL_411:
            v222 = LODWORD(result._Mypair._Myval2) + 1;
            LODWORD(result._Mypair._Myval2) = v222;
            v459._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)((char *)v459._Mypair._Myval2
                                                                                            + 8);
            ++v223;
          }
          while ( v222 < (signed int)v5->m_uiBoneCount );
        }
      }
      else
      {
        v221 = 0i64;
      }
      v230 = 0;
      if ( (int)v5->m_uiBoneCount > 0 )
      {
        do
        {
          v231 = v5->m_pBone;
          v232 = *(int *)((char *)&v231->m_sParents + v221);
          if ( (_DWORD)v232 != -1 )
          {
            m_sBrother = v231[v232].m_sChild;
            if ( (_DWORD)m_sBrother == -1 )
            {
              v231[v232].m_sChild = v230;
            }
            else
            {
              for ( j = &v231[m_sBrother]; j->m_sBrother != -1; j = &v231[m_sBrother] )
                m_sBrother = j->m_sBrother;
              v231[(int)m_sBrother].m_sBrother = v230;
            }
          }
          ++v230;
          v221 += 232i64;
        }
        while ( v230 < (signed int)v5->m_uiBoneCount );
        LODWORD(v221) = 0;
      }
      if ( v5->m_uiBoneCount > 1 )
      {
        v5->m_iNodeLevelMax = 1;
        v235 = v5->m_pBone;
        v236 = v235->m_sChild;
        if ( (int)v236 >= 0 )
          OGLFigure::setNodeLevel(v5, &v235[v236]);
        v237 = v221;
        LODWORD(_Thr._Hnd) = v221;
        if ( v5->m_iNodeLevelMax > 0 )
        {
          do
          {
            v238 = v5->m_uiBoneCount - 1;
            LODWORD(result._Mypair._Myval2) = v238;
            if ( v238 >= 0 )
            {
              v239 = v238;
              v240 = (__int64)v238 << 6;
              v241 = v239 * 232;
              v242 = v240;
              do
              {
                v243 = v5->m_pBone;
                if ( v243[v239].m_iNodeLevel == v237 )
                {
                  v244 = v243[v239].m_sParents;
                  LODWORD(v459._Mypair._Myval2) = v244;
                  m_pBindPose = v5->m_pBindPose;
                  if ( (int)v244 < 0 )
                  {
                    *(_QWORD *)((char *)m_pBindPose->m + v240) = 1065353216i64;
                    *(_DWORD *)((char *)&m_pBindPose->m[4] + v240) = v221;
                    *(_QWORD *)((char *)&m_pBindPose->m[8] + v240) = 0i64;
                    *(_QWORD *)((char *)&m_pBindPose->m[12] + v240) = 0i64;
                    *(_QWORD *)((char *)&m_pBindPose->m[5] + v240) = 1065353216i64;
                    *(_QWORD *)((char *)&m_pBindPose->m[2] + v240) = 0i64;
                    *(_QWORD *)((char *)&m_pBindPose->m[10] + v240) = 1065353216i64;
                    *(_DWORD *)((char *)&m_pBindPose->m[14] + v240) = v221;
                    *(_DWORD *)((char *)&m_pBindPose->m[7] + v240) = v221;
                    *(float *)((char *)&m_pBindPose->m[15] + v240) = 1.0;
                  }
                  else
                  {
                    *(_OWORD *)((char *)m_pBindPose->m + v240) = *(_OWORD *)v243[v239].m_mOffset.m;
                    *(_OWORD *)((char *)&m_pBindPose->m[4] + v240) = *(_OWORD *)&v243[v239].m_mOffset.m[4];
                    *(_OWORD *)((char *)&m_pBindPose->m[8] + v240) = *(_OWORD *)&v243[v239].m_mOffset.m[8];
                    *(_OWORD *)((char *)&m_pBindPose->m[12] + v240) = *(_OWORD *)&v243[v239].m_mOffset.m[12];
                    In1 = v5->m_pBone[v244].m_mOffset;
                    OGLMatrix::inverse(&In1);
                    OGLMatrix::multiply(
                      (OGLMatrix *)((char *)v5->m_pBindPose + v242),
                      &In1,
                      (OGLMatrix *)((char *)v5->m_pBindPose + v242));
                    OGLMatrix::inverse((OGLMatrix *)((char *)v5->m_pBindPose + v242));
                    v238 = (int)result._Mypair._Myval2;
                    LODWORD(v244) = v459._Mypair._Myval2;
                    LODWORD(v221) = 0;
                  }
                  v246 = v5->m_pBone;
                  v246[v239].m_aBindPose.m_vPrevScale.x = 1.0;
                  v246[v239].m_aBindPose.m_vPrevScale.y = 1.0;
                  v246[v239].m_aBindPose.m_vPrevScale.z = 1.0;
                  if ( (int)v244 < 0 )
                  {
                    v252 = v5->m_pBone;
                    *(_QWORD *)&v252[v239].m_aBindPose.m_vPrevTrans.x = 0i64;
                    LODWORD(v252[v239].m_aBindPose.m_vPrevTrans.z) = v221;
                    v253 = v5->m_pBone;
                    *(_QWORD *)&v253[v239].m_aBindPose.m_vPrevRot.x = 0i64;
                    LODWORD(v253[v239].m_aBindPose.m_vPrevRot.z) = v221;
                    v253[v239].m_aBindPose.m_vPrevRot.w = 1.0;
                  }
                  else
                  {
                    v247 = v5->m_pBindPose;
                    v248 = *(float *)((char *)&v247->m[14] + v240);
                    v249 = *(float *)((char *)&v247->m[13] + v240);
                    v250 = *(float *)((char *)&v247->m[12] + v240);
                    v251 = v5->m_pBone;
                    v251[v239].m_aBindPose.m_vPrevTrans.x = v250;
                    v251[v239].m_aBindPose.m_vPrevTrans.y = v249;
                    v251[v239].m_aBindPose.m_vPrevTrans.z = v248;
                    OGLQuat::matrixToQuaternion(
                      (OGLQuat *)((char *)&v5->m_pBone->m_aBindPose.m_vPrevRot + v241),
                      (OGLMatrix *)((char *)v5->m_pBindPose + v242));
                    v238 = (int)result._Mypair._Myval2;
                    LODWORD(v221) = 0;
                  }
                  v237 = (int)_Thr._Hnd;
                }
                LODWORD(result._Mypair._Myval2) = --v238;
                v242 -= 64i64;
                v241 -= 232i64;
                v240 -= 64i64;
                --v239;
              }
              while ( v238 >= 0 );
            }
            LODWORD(_Thr._Hnd) = ++v237;
          }
          while ( v237 < v5->m_iNodeLevelMax );
          m_pucData = v460._Mypair._Myval2;
        }
      }
      if ( m_uiSize > (unsigned int)v7 )
      {
        v254 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
        LODWORD(v7) = v7 + 4;
        format.m_uiPoint = v7;
      }
      else
      {
        v254 = v221;
      }
      v5->m_ucMaterialCount = v254;
      v255 = (OGLFigure *)v254;
      result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v254;
      v256 = 1128i64 * v254;
      if ( !is_mul_ok(v254, 0x468ui64) )
        v256 = -1i64;
      v33 = __CFADD__(v256, 8i64);
      v257 = v256 + 8;
      if ( v33 )
        v257 = -1i64;
      v258 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)operator new[](v257);
      v464._Mypair._Myval2 = v258;
      if ( v258 )
      {
        v258->_Myfirst._Val.figure = v255;
        v259 = &v258->_Myfirst._Val.outV;
        `eh vector constructor iterator'(
          &v258->_Myfirst._Val.outV,
          0x468ui64,
          (unsigned int)v255,
          (void (__fastcall *)(void *))OGLMaterial::OGLMaterial,
          (void (__fastcall *)(void *))OGLMaterial::~OGLMaterial);
        v260 = 0i64;
      }
      else
      {
        v260 = 0i64;
        v259 = 0i64;
      }
      v5->m_pMaterial = (OGLMaterial *)v259;
      v261 = v5->m_ucMaterialCount;
      if ( v261 )
      {
        if ( !v259 )
          goto $_ERROR_0;
      }
      v262 = 0;
      if ( v261 > 0 )
      {
        do
          OGLMaterial::loadFloat(&v5->m_pMaterial[v262++], &format);
        while ( v262 < (signed int)v5->m_ucMaterialCount );
        m_uiSize = format.m_uiSize;
        LODWORD(v7) = format.m_uiPoint;
        m_pucData = format.m_pucData;
        v460._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)format.m_pucData;
        v260 = 0i64;
      }
      v263 = v481;
      if ( (v481 & 0x1000) != 0 )
      {
        v264 = 0;
        LODWORD(result._Mypair._Myval2) = 0;
        if ( (int)v5->m_ucMaterialCount > 0 )
        {
          v265 = 0i64;
          do
          {
            if ( m_uiSize > (unsigned int)v7 )
            {
              v266 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
              LODWORD(v7) = v7 + 4;
            }
            else
            {
              v266 = 0;
            }
            v267 = v264;
            if ( m_uiSize > (unsigned int)v7 )
            {
              memmove(v5->m_pMaterial[v267].m_cNameOrigin, &m_pucData[(unsigned int)v7], v266);
              LODWORD(v7) = v266 + v7;
            }
            v5->m_pMaterial[v265].m_cName = v5->m_pMaterial[v267].m_cNameOrigin;
            v5->m_pMaterial[v265].m_cName[v266] = 0;
            v268 = 0;
            v459._Mypair._Myval2 = 0i64;
            v269 = MaterialEffectInfo;
            while ( !strstr((const char *)v5->m_pMaterial[v265].m_cName, v269->str) )
            {
              ++v268;
              ++v459._Mypair._Myval2;
              ++v269;
              if ( v268 >= 7 )
                goto LABEL_468;
            }
            v5->m_pMaterial[v265].m_uiBlendMode = MaterialEffectInfo[(__int64)v459._Mypair._Myval2].flg;
LABEL_468:
            v270 = 0;
            v271 = &MaterialAddEffectInfo[0].flg;
            do
            {
              if ( strstr((const char *)v5->m_pMaterial[v265].m_cName, *((const char **)v271 - 1)) )
                v5->m_pMaterial[v265].m_ucEffectFlg |= *v271;
              ++v270;
              v271 += 4;
            }
            while ( v270 < 0x12 );
            v264 = LODWORD(result._Mypair._Myval2) + 1;
            LODWORD(result._Mypair._Myval2) = v264;
            ++v265;
          }
          while ( v264 < (signed int)v5->m_ucMaterialCount );
          v263 = v481;
        }
      }
      v272 = v263 & 0x10000;
      LODWORD(result._Mypair._Myval2) = v263 & 0x10000;
      if ( (v263 & 0x10000) != 0 )
      {
        if ( m_uiSize > (unsigned int)v7 )
        {
          v273 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
          LODWORD(v7) = v7 + 4;
        }
        else
        {
          v273 = 0;
        }
        _Thr._Hnd = (void *)v273;
        v274 = 0;
        v459._Mypair._Myval2 = 0i64;
        if ( (__int64)_Thr._Hnd > 0 )
        {
          v275 = &v462->allocateStaticBuffers;
          v464._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)&v462->allocateStaticBuffers;
          v276 = (unsigned int)(v7 + 2);
          v277 = 0i64;
          while ( 1 )
          {
            v278 = v5->m_pMaterial;
            if ( m_uiSize > (unsigned int)v7 )
            {
              v274 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v276 - 1)] | (((unsigned __int8)m_pucData[v276] | ((unsigned __int8)m_pucData[(unsigned int)(v276 + 1)] << 8)) << 8)) << 8);
              LODWORD(v7) = v7 + 4;
              v276 = (unsigned int)(v276 + 4);
            }
            v278[v277].m_usIndex = v274;
            v279 = Framework::MemoryManager::allocate(v275, 4i64 * v278[v277].m_usIndexCount, (unsigned __int64)v275);
            v5->m_pfIndexBuffer = v279;
            v278[v277].m_psIndex = (unsigned int *)v279;
            if ( !v279 )
              goto $_ERROR_0;
            ++v459._Mypair._Myval2;
            ++v277;
            v275 = (Framework::MemoryManager *)v464._Mypair._Myval2;
            v274 = 0;
            if ( (__int64)v459._Mypair._Myval2 >= (__int64)_Thr._Hnd )
              goto LABEL_490;
          }
        }
      }
      else
      {
        v274 = 0;
        v280 = 0;
        v281 = 0;
        if ( (int)v5->m_ucMaterialCount > 0 )
        {
          v282 = &v462->allocateStaticBuffers;
          v464._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)&v462->allocateStaticBuffers;
          v283 = 0i64;
          do
          {
            v284 = v5->m_pMaterial;
            v284[v283].m_usIndex = v281;
            v285 = v284[v283].m_usIndexCount;
            LODWORD(v459._Mypair._Myval2) = v285 + v281;
            v286 = Framework::MemoryManager::allocate(v282, 4 * v285, v260);
            v5->m_pfIndexBuffer = v286;
            v284[v283].m_psIndex = (unsigned int *)v286;
            if ( !v286 )
              goto $_ERROR_0;
            ++v280;
            ++v283;
            v281 = (unsigned int)v459._Mypair._Myval2;
            v282 = (Framework::MemoryManager *)v464._Mypair._Myval2;
          }
          while ( v280 < (signed int)v5->m_ucMaterialCount );
          v274 = 0;
LABEL_490:
          v272 = (int)result._Mypair._Myval2;
        }
      }
      if ( m_uiSize > (unsigned int)v7 )
      {
        v274 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
        LODWORD(v7) = v7 + 4;
      }
      v5->m_usIndexCount = v274;
      v287 = (unsigned int *)operator new[](saturated_mul(v274, 4ui64));
      v5->m_pusIndex = v287;
      if ( !v287 )
        goto $_ERROR_0;
      v288 = (__int64)v5->m_pMaterial;
      if ( (v481 & 0x10) != 0 )
      {
        v299 = 0;
        v300 = 0;
        v301 = 0;
        LODWORD(result._Mypair._Myval2) = 0;
        if ( (int)v5->m_usIndexCount > 0 )
        {
          v302 = 0i64;
          v459._Mypair._Myval2 = 0i64;
          v303 = (unsigned int)(v7 + 2);
          v304 = 0i64;
          v460._Mypair._Myval2 = 0i64;
          do
          {
            if ( v300 >= *(_DWORD *)((char *)&v304[2]._Myfirst._Val.outV + (unsigned __int64)v5->m_pMaterial) )
            {
              memmove(*(void **)(v288 + 48), &v5->m_pusIndex[v299 - v300], 4i64 * v300);
              v300 = 0;
              v301 = ++LODWORD(result._Mypair._Myval2);
              v460._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)((char *)v460._Mypair._Myval2
                                                                                              + 1128);
              v302 = v459._Mypair._Myval2;
            }
            v288 = (__int64)&v5->m_pMaterial[v301];
            if ( m_uiSize > (unsigned int)v7 )
            {
              v305 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v303 - 1)] | (((unsigned __int8)m_pucData[v303] | ((unsigned __int8)m_pucData[(unsigned int)(v303 + 1)] << 8)) << 8)) << 8);
              LODWORD(v7) = v7 + 4;
              v303 = (unsigned int)(v303 + 4);
            }
            else
            {
              v305 = 0;
            }
            *(_DWORD *)((char *)&v302->_Myfirst._Val.figure + (unsigned __int64)v5->m_pusIndex) = v305;
            ++v299;
            v302 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)((char *)v302 + 4);
            v459._Mypair._Myval2 = v302;
            ++v300;
            v304 = v460._Mypair._Myval2;
            v301 = (int)result._Mypair._Myval2;
          }
          while ( v299 < (signed int)v5->m_usIndexCount );
        }
        v297 = v300;
        v298 = v299 - v300;
      }
      else
      {
        if ( v272 )
        {
          v289 = 4 * v5->m_usIndexCount;
          if ( m_uiSize > (unsigned int)v7 )
          {
            memmove(v287, &m_pucData[(unsigned int)v7], v289);
            LODWORD(v7) = v289 + v7;
          }
          v290 = 0i64;
          for ( k = 0; k < (signed int)v5->m_ucMaterialCount; ++v290 )
          {
            memmove(
              v5->m_pMaterial[v290].m_psIndex,
              &v5->m_pusIndex[v5->m_pMaterial[v290].m_usIndex],
              4i64 * v5->m_pMaterial[v290].m_usIndexCount);
            ++k;
          }
LABEL_520:
          v5->m_psMaterialIndex = 0i64;
          v158 = v481;
          if ( (v481 & 0x20) != 0 )
          {
            v306 = (int *)operator new[](saturated_mul(2 * v5->m_ucMaterialCount, 4ui64));
            v5->m_psMaterialIndex = v306;
            if ( !v306 )
              goto $_ERROR_0;
            v307 = 0;
            if ( (signed int)(2 * v5->m_ucMaterialCount) > 0 )
            {
              v308 = 0i64;
              v106 = (unsigned int)(v7 + 2);
              do
              {
                if ( m_uiSize > (unsigned int)v7 )
                {
                  v309 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v106 - 1)] | (((unsigned __int8)m_pucData[v106] | ((unsigned __int8)m_pucData[(unsigned int)(v106 + 1)] << 8)) << 8)) << 8);
                  LODWORD(v7) = v7 + 4;
                  v106 = (unsigned int)(v106 + 4);
                }
                else
                {
                  v309 = 0;
                }
                v5->m_psMaterialIndex[v308] = v309;
                ++v307;
                ++v308;
              }
              while ( v307 < (signed int)(2 * v5->m_ucMaterialCount) );
            }
          }
          v5->m_psVertexCoordIndex = 0i64;
          if ( (v481 & 0x40) == 0 )
            goto LABEL_595;
          if ( (v481 & 0x400) == 0 )
          {
            v310 = (int *)operator new[](saturated_mul(v5->m_usVertexCoordCount, 4ui64));
            v5->m_psVertexCoordIndex = v310;
            if ( !v310 )
              goto $_ERROR_0;
            v311 = 0;
            if ( (int)v5->m_usVertexCoordCount > 0 )
            {
              v312 = 0i64;
              v106 = (unsigned int)(v7 + 2);
              do
              {
                if ( m_uiSize > (unsigned int)v7 )
                {
                  v313 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v106 - 1)] | (((unsigned __int8)m_pucData[v106] | ((unsigned __int8)m_pucData[(unsigned int)(v106 + 1)] << 8)) << 8)) << 8);
                  LODWORD(v7) = v7 + 4;
                  v106 = (unsigned int)(v106 + 4);
                }
                else
                {
                  v313 = 0;
                }
                v5->m_psVertexCoordIndex[v312] = v313;
                ++v311;
                ++v312;
              }
              while ( v311 < (signed int)v5->m_usVertexCoordCount );
            }
            goto LABEL_595;
          }
          if ( (v5->m_uiStateFlg & 8) != 0 )
          {
            v336 = 0;
            v337 = v5->m_usVertexCoordCount;
            if ( v337 > 0 )
            {
              v106 = (unsigned int)v337;
              do
              {
                if ( m_uiSize <= (unsigned int)v7 || (v7 = (unsigned int)(v7 + 4), m_uiSize <= (unsigned int)v7) )
                {
                  v338 = 0;
                }
                else
                {
                  v338 = m_pucData[v7];
                  LODWORD(v7) = v7 + 1;
                }
                v339 = v338;
                if ( v336 >= v338 )
                  v339 = v336;
                v336 = v339;
                if ( (v481 & 0x8000) != 0 )
                {
                  LODWORD(v7) = v7 + 6 * v338;
                  if ( (unsigned int)v7 > m_uiSize )
                    LODWORD(v7) = m_uiSize;
                }
                else
                {
                  LODWORD(v7) = v7 + 4 * v338;
                  if ( (unsigned int)v7 > m_uiSize )
                    LODWORD(v7) = m_uiSize;
                }
                --v106;
              }
              while ( v106 );
            }
            v5->m_iInfluenceMax = v336;
          }
          else
          {
            v314 = 0;
            v315 = v5->m_usVertexCoordCount;
            result._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)v315;
            v316 = 104 * v315;
            if ( !is_mul_ok(v315, 0x68ui64) )
              v316 = -1i64;
            v33 = __CFADD__(v316, 8i64);
            v317 = v316 + 8;
            if ( v33 )
              v317 = -1i64;
            v318 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)operator new[](v317);
            v464._Mypair._Myval2 = v318;
            if ( v318 )
            {
              v318->_Myfirst._Val.figure = (OGLFigure *)v315;
              v319 = &v318->_Myfirst._Val.outV;
              `eh vector constructor iterator'(
                &v318->_Myfirst._Val.outV,
                0x68ui64,
                (unsigned int)v315,
                (void (__fastcall *)(void *))OGLVertexOptiInfo::OGLVertexOptiInfo,
                (void (__fastcall *)(void *))OGLVertexOptiInfo::~OGLVertexOptiInfo);
              v320 = 0;
            }
            else
            {
              v320 = 0;
              v319 = 0i64;
            }
            v5->m_pVerOptiInfo = (OGLVertexOptiInfo *)v319;
            LODWORD(result._Mypair._Myval2) = 0;
            if ( (int)v5->m_usVertexCoordCount > 0 )
            {
              v321 = v481 & 0x8000;
              LODWORD(_Thr._Hnd) = v321;
              v322 = 0i64;
              do
              {
                v323 = &v5->m_pVerOptiInfo[v322];
                if ( m_uiSize > (unsigned int)v7 )
                {
                  v324 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
                  LODWORD(v7) = v7 + 4;
                  v321 = (int)_Thr._Hnd;
                }
                else
                {
                  v324 = 0;
                }
                v323->VerCoordFlg = v324;
                if ( m_uiSize > (unsigned int)v7 )
                {
                  v325 = m_pucData[(unsigned int)v7];
                  LODWORD(v7) = v7 + 1;
                }
                else
                {
                  v325 = 0;
                }
                v323->Count = v325;
                v326 = v323->pWeights;
                *(_QWORD *)v323->pWeights = 0i64;
                *(_QWORD *)&v323->pWeights[2] = 0i64;
                *(_QWORD *)&v323->pWeights[4] = 0i64;
                *(_QWORD *)&v323->pWeights[6] = 0i64;
                *(_QWORD *)&v323->pWeights[8] = 0i64;
                *(_QWORD *)&v323->pWeights[10] = 0i64;
                *(_QWORD *)&v323->pWeights[12] = 0i64;
                *(_QWORD *)&v323->pWeights[14] = 0i64;
                v327 = v323->Count;
                if ( v314 < v327 )
                  v314 = v323->Count;
                v328 = 0.0;
                if ( v321 )
                {
                  if ( v327 <= 0 )
                    goto LABEL_577;
                  v329 = (unsigned int)(v7 + 1);
                  v330 = v323->pBoneIdx;
                  do
                  {
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      LODWORD(v459._Mypair._Myval2) = *(_DWORD *)&m_pucData[(unsigned int)v7];
                      LODWORD(v7) = v7 + 4;
                      v329 = (unsigned int)(v329 + 4);
                      v331 = *(float *)&v459._Mypair._Myval2;
                    }
                    else
                    {
                      v331 = 0.0;
                    }
                    *v326 = v331;
                    v328 = v328 + v331;
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      v106 = (unsigned __int8)m_pucData[v329];
                      LOWORD(v106) = (unsigned __int8)m_pucData[(unsigned int)v7] | (unsigned __int16)((_WORD)v106 << 8);
                      LODWORD(v7) = v7 + 2;
                      v329 = (unsigned int)(v329 + 2);
                    }
                    else
                    {
                      v106 = 0i64;
                    }
                    *v330 = v106;
                    ++v320;
                    ++v326;
                    ++v330;
                  }
                  while ( v320 < v323->Count );
                }
                else
                {
                  if ( v327 <= 0 )
                    goto LABEL_577;
                  v332 = (unsigned int)(v7 + 1);
                  v333 = v323->pBoneIdx;
                  do
                  {
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      v334 = (unsigned __int8)m_pucData[(unsigned int)v7] | ((unsigned __int8)m_pucData[v332] << 8);
                      LODWORD(v7) = v7 + 2;
                      v332 = (unsigned int)(v332 + 2);
                    }
                    else
                    {
                      v334 = 0;
                    }
                    v335 = (float)v334 * 0.000099999997;
                    *v326 = v335;
                    v328 = v328 + v335;
                    if ( m_uiSize > (unsigned int)v7 )
                    {
                      v106 = (unsigned __int8)m_pucData[v332];
                      LOWORD(v106) = (unsigned __int8)m_pucData[(unsigned int)v7] | (unsigned __int16)((_WORD)v106 << 8);
                      LODWORD(v7) = v7 + 2;
                      v332 = (unsigned int)(v332 + 2);
                    }
                    else
                    {
                      v106 = 0i64;
                    }
                    *v333 = v106;
                    ++v320;
                    ++v326;
                    ++v333;
                  }
                  while ( v320 < v323->Count );
                }
                v5 = this;
                if ( v328 != 1.0 )
LABEL_577:
                  v323->pWeights[v323->Count - 1] = (float)(1.0 - v328) + v323->pWeights[v323->Count - 1];
                ++LODWORD(result._Mypair._Myval2);
                ++v322;
                v321 = (int)_Thr._Hnd;
                v320 = 0;
              }
              while ( SLODWORD(result._Mypair._Myval2) < (signed int)v5->m_usVertexCoordCount );
            }
            v5->m_iInfluenceMax = v314;
            v158 = v481;
          }
LABEL_595:
          if ( (v158 & 0x2000) != 0 )
          {
            if ( m_uiSize > (unsigned int)v7 )
            {
              v340 = (unsigned __int8)m_pucData[(unsigned int)v7] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 1)] | (((unsigned __int8)m_pucData[(unsigned int)(v7 + 2)] | ((unsigned __int8)m_pucData[(unsigned int)(v7 + 3)] << 8)) << 8)) << 8);
              LODWORD(v7) = v7 + 4;
            }
            else
            {
              v340 = 0;
            }
            v5->m_usTangentCoordCount = v340;
            if ( v340 )
            {
              v341 = (float *)operator new[](saturated_mul((unsigned int)(3 * v340), 4ui64));
              v5->m_pfTangentCoord = v341;
              if ( !v341 )
                goto $_ERROR_0;
              if ( m_uiSize > (unsigned int)v7 )
                memmove(v341, &m_pucData[(unsigned int)v7], 12 * v5->m_usTangentCoordCount);
            }
          }
          else
          {
            m_usNormalCoordCount = v5->m_usNormalCoordCount;
            v5->m_usTangentCoordCount = m_usNormalCoordCount;
            if ( m_usNormalCoordCount )
            {
              v344 = 3 * m_usNormalCoordCount;
              v343 = 4 * v344;
              if ( !is_mul_ok(v344, 4ui64) )
                v343 = -1i64;
              v5->m_pfTangentCoord = (float *)operator new[](v343);
              LODWORD(result._Mypair._Myval2) = 0;
              if ( (int)v5->m_usIndexCount > 0 )
              {
                v345 = 0i64;
                v460._Mypair._Myval2 = 0i64;
                do
                {
                  v346 = v5->m_pusIndex;
                  v347 = *(_DWORD *)&v345[(_QWORD)v346];
                  v348 = *(_DWORD *)&v345[(_QWORD)v346 + 4];
                  v349 = *(_DWORD *)&v345[(_QWORD)v346 + 8];
                  v350 = 3 * v347;
                  v351 = 2 * v349;
                  v352 = v5->m_pfTexCoord[0];
                  v353 = 3 * v349;
                  m_pfVertexCoord = v5->m_pfVertexCoord;
                  v355 = 2 * v348;
                  v356 = 3 * v348;
                  v357 = 2 * v347;
                  OGLFigure::calcTangentAndBinormal(
                    (OGLFigure *)&this->m_pfTangentCoord[v350],
                    &m_pfVertexCoord[v350],
                    &v352[v357],
                    &m_pfVertexCoord[v356],
                    &v352[v355],
                    &m_pfVertexCoord[v353],
                    &v352[v351],
                    &this->m_pfTangentCoord[v350],
                    v456);
                  OGLFigure::calcTangentAndBinormal(
                    (OGLFigure *)&this->m_pfTangentCoord[v356],
                    &this->m_pfVertexCoord[v356],
                    &this->m_pfTexCoord[0][v355],
                    &this->m_pfVertexCoord[v353],
                    &this->m_pfTexCoord[0][v351],
                    &this->m_pfVertexCoord[v350],
                    &this->m_pfTexCoord[0][v357],
                    &this->m_pfTangentCoord[v356],
                    v457);
                  OGLFigure::calcTangentAndBinormal(
                    (OGLFigure *)&this->m_pfTangentCoord[v353],
                    &this->m_pfVertexCoord[v353],
                    &this->m_pfTexCoord[0][v351],
                    &this->m_pfVertexCoord[v350],
                    &this->m_pfTexCoord[0][v357],
                    &this->m_pfVertexCoord[v356],
                    &this->m_pfTexCoord[0][v355],
                    &this->m_pfTangentCoord[v353],
                    v458);
                  LODWORD(result._Mypair._Myval2) += 3;
                  v345 = (char *)&v460._Mypair._Myval2->_Myfirst._Val.outV + 4;
                  v460._Mypair._Myval2 = (std::tuple<<lambda_49e167d41e58ceaf27bb79ed79325610> > *)((char *)v460._Mypair._Myval2
                                                                                                  + 12);
                  v5 = this;
                }
                while ( SLODWORD(result._Mypair._Myval2) < (signed int)this->m_usIndexCount );
                LOBYTE(v158) = v481;
              }
            }
          }
          goto LABEL_610;
        }
        v292 = 4 * v5->m_usIndexCount;
        if ( m_uiSize > (unsigned int)v7 )
        {
          memmove(v287, &m_pucData[(unsigned int)v7], v292);
          LODWORD(v7) = v292 + v7;
        }
        v293 = 0;
        v294 = 0;
        v295 = 0;
        LODWORD(result._Mypair._Myval2) = 0;
        if ( (int)v5->m_usIndexCount > 0 )
        {
          v296 = 0i64;
          do
          {
            if ( v294 >= (signed int)v5->m_pMaterial[v296].m_usIndexCount )
            {
              memmove(*(void **)(v288 + 48), &v5->m_pusIndex[v293 - v294], 4i64 * v294);
              v294 = 0;
              v295 = ++LODWORD(result._Mypair._Myval2);
              ++v296;
            }
            v288 = (__int64)&v5->m_pMaterial[v295];
            v293 += 3;
            v294 += 3;
          }
          while ( v293 < (signed int)v5->m_usIndexCount );
          m_pucData = v460._Mypair._Myval2;
        }
        v297 = v294;
        v298 = v293 - v294;
      }
      memmove(*(void **)(v288 + 48), &v5->m_pusIndex[v298], 4 * v297);
      goto LABEL_520;
    }
LABEL_329:
    v195 = 0;
    goto LABEL_331;
  }
  return (unsigned int)-4;
}

void __fastcall OGLFigure::setNodeLevel(OGLFigure *this, OGLBone *pBone)
{
  int m_sParents; // eax
  OGLBone *i; // rbx
  int v5; // eax
  __int64 m_sChild; // rax
  __int64 m_sBrother; // rax

  m_sParents = pBone->m_sParents;
  for ( i = pBone; m_sParents >= 0; m_sParents = i->m_sParents )
  {
    v5 = this->m_pBone[m_sParents].m_iNodeLevel + 1;
    i->m_iNodeLevel = v5;
    if ( v5 >= this->m_iNodeLevelMax )
      this->m_iNodeLevelMax = v5 + 1;
    m_sChild = i->m_sChild;
    if ( (int)m_sChild >= 0 )
      OGLFigure::setNodeLevel(this, &this->m_pBone[m_sChild]);
    m_sBrother = i->m_sBrother;
    if ( (int)m_sBrother < 0 )
      break;
    i = &this->m_pBone[m_sBrother];
  }
}

