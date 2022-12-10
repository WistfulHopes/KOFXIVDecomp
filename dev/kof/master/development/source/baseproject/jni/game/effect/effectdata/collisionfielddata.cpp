#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/collisionfielddata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/fielddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E372
void CollisionFieldData::initialize(); // 0x14012CA40
void CollisionFieldData::terminate(); // 0x14012AB50
void CollisionFieldData::initDialogData(); // 0x14012CB20
void CollisionFieldData::initDialogData(long type, long textSize, long editSize, long comboSize, long buttonSize); // 0x14012AC40
void CollisionFieldData::initChartData(long type, long size); // 0x14012B250
void CollisionFieldData::setDialogData(); // 0x14002E7C0//decompilation failure at 14089E372!
void __fastcall AttractionFieldData::initChartData(LightParticleEmitterData *this, int type, int size)
{
  KeyData *Myend; // rsi
  int v6; // ebp
  unsigned __int64 v7; // r14
  DialogChartData *Myfirst; // r8
  std::vector<ChartData> *p_dialogChartData; // rbx
  ChartData *Mylast; // r8
  __int64 v11; // rdi
  ChartData *v12; // r8
  __int64 v13; // rdx
  float *v14; // rcx
  ChartData *v15; // rcx
  KeyData *v16; // rdx
  KeyData *v17; // r8
  OGLEffectVec2 *p_BezierPosFront; // rcx
  unsigned __int64 v19; // rsi
  KeyData *v20; // rax
  unsigned __int64 v21; // rdx
  char v22[8]; // [rsp+30h] [rbp-68h] BYREF
  void **v23; // [rsp+38h] [rbp-60h]
  __int64 v24; // [rsp+40h] [rbp-58h]
  float v25; // [rsp+48h] [rbp-50h]
  std::vector<KeyData> _Right; // [rsp+50h] [rbp-48h] BYREF

  v24 = 0i64;
  v25 = 0.0;
  v23 = &OGLEffectVec3::`vftable';
  memset(&_Right, 0, sizeof(_Right));
  Myend = 0i64;
  v6 = 0;
  if ( size > 0 )
  {
    v7 = type;
    do
    {
      Myfirst = this->AllDialogChartData._Mypair._Myval2._Myfirst;
      if ( this->AllDialogChartData._Mypair._Myval2._Mylast - Myfirst <= v7 )
        std::_Xout_of_range("invalid vector<T> subscript");
      p_dialogChartData = &Myfirst[v7].dialogChartData;
      Mylast = p_dialogChartData->_Mypair._Myval2._Mylast;
      if ( v22 >= (char *)Mylast || p_dialogChartData->_Mypair._Myval2._Myfirst > (ChartData *)v22 )
      {
        if ( Mylast == p_dialogChartData->_Mypair._Myval2._Myend )
          std::vector<ChartData>::_Reserve(p_dialogChartData, 1ui64);
        v15 = p_dialogChartData->_Mypair._Myval2._Mylast;
        if ( v15 )
        {
          v15->RenderFlag = v22[0];
          *(_QWORD *)&v15->RenderColor.x = v24;
          v15->RenderColor.z = v25;
          v15->RenderColor.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
          std::vector<KeyData>::vector<KeyData>(&v15->keyData, &_Right);
        }
      }
      else
      {
        v11 = (v22 - (char *)p_dialogChartData->_Mypair._Myval2._Myfirst) / 56;
        if ( Mylast == p_dialogChartData->_Mypair._Myval2._Myend )
          std::vector<ChartData>::_Reserve(p_dialogChartData, 1ui64);
        v12 = p_dialogChartData->_Mypair._Myval2._Mylast;
        v13 = (__int64)&p_dialogChartData->_Mypair._Myval2._Myfirst[v11];
        if ( v12 )
        {
          v12->RenderFlag = *(_BYTE *)v13;
          v14 = (float *)(v13 + 16);
          if ( v13 == -8 )
            v14 = 0i64;
          v12->RenderColor.x = *v14;
          v12->RenderColor.y = v14[1];
          v12->RenderColor.z = v14[2];
          v12->RenderColor.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
          std::vector<KeyData>::vector<KeyData>(&v12->keyData, (const std::vector<KeyData> *)(v13 + 32));
        }
      }
      ++p_dialogChartData->_Mypair._Myval2._Mylast;
      ++v6;
    }
    while ( v6 < size );
    Myend = _Right._Mypair._Myval2._Myend;
  }
  v16 = _Right._Mypair._Myval2._Myfirst;
  if ( _Right._Mypair._Myval2._Myfirst )
  {
    v17 = _Right._Mypair._Myval2._Mylast;
    if ( _Right._Mypair._Myval2._Myfirst != _Right._Mypair._Myval2._Mylast )
    {
      p_BezierPosFront = &_Right._Mypair._Myval2._Myfirst->BezierPosFront;
      do
      {
        p_BezierPosFront[1].__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
        p_BezierPosFront->__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
        p_BezierPosFront[-2].OGLVec2 = (OGLVec2)&OGLEffectVec2::`vftable';
        p_BezierPosFront += 4;
      }
      while ( &p_BezierPosFront[-2] != (OGLEffectVec2 *)v17 );
    }
    v19 = Myend - v16;
    if ( v19 > 0x3FFFFFFFFFFFFFFi64 )
      invalid_parameter_noinfo_noreturn();
    if ( v19 << 6 >= 0x1000 )
    {
      if ( ((__int64)_Right._Mypair._Myval2._Myfirst & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v20 = (KeyData *)v16[-1].BezierPosBack.OGLVec2;
      if ( v20 >= v16 )
        invalid_parameter_noinfo_noreturn();
      v21 = (char *)v16 - (char *)v20;
      if ( v21 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v21 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v16 = v20;
    }
    operator delete(v16);
  }
}

void __fastcall LightParticleEmitterData::initDialogData(
        LightParticleEmitterData *this,
        int type,
        int textSize,
        int editSize,
        int comboSize,
        int buttonSize)
{
  int v9; // ebp
  unsigned __int64 i; // rsi
  DialogData *Myfirst; // r8
  std::vector<std::string> *v12; // rbx
  std::string *Mylast; // rax
  std::string *v14; // rcx
  unsigned __int64 v15; // rdi
  unsigned __int64 v16; // rdi
  std::string *v17; // rcx
  std::string *Ptr; // rax
  std::string *p_Right; // rdx
  char *v20; // rcx
  char *v21; // rax
  int v22; // ebp
  DialogData *v23; // r8
  std::vector<float> *p_allEditNumData; // rbx
  float *v25; // rdx
  float *v26; // rcx
  __int64 v27; // rdi
  float *v28; // r9
  __int64 v29; // rdx
  unsigned __int64 v30; // rdx
  unsigned __int64 v31; // r9
  unsigned __int64 v32; // r8
  float *v33; // rdx
  float *v34; // rax
  float *Myend; // r9
  __int64 v36; // rdx
  unsigned __int64 v37; // rdx
  unsigned __int64 v38; // r9
  unsigned __int64 v39; // r8
  float *v40; // rax
  int v41; // ebp
  DialogData *v42; // r8
  std::vector<int> *v43; // rbx
  int *v44; // rax
  int *v45; // rcx
  __int64 v46; // rdi
  int *v47; // rdx
  int *v48; // rax
  int j; // ebx
  DialogData *v50; // r8
  int _Val; // [rsp+20h] [rbp-78h] BYREF
  __int64 v52; // [rsp+28h] [rbp-70h]
  std::string _Right; // [rsp+30h] [rbp-68h] BYREF

  v52 = -2i64;
  v9 = 0;
  for ( i = type; v9 < textSize; ++v9 )
  {
    _Right._Mypair._Myval2._Myres = 15i64;
    _Right._Mypair._Myval2._Mysize = 0i64;
    _Right._Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::assign(&_Right, &pnewText, 0i64);
    Myfirst = this->AllDialogData._Mypair._Myval2._Myfirst;
    if ( this->AllDialogData._Mypair._Myval2._Mylast - Myfirst <= i )
      std::_Xout_of_range("invalid vector<T> subscript");
    v12 = (std::vector<std::string> *)&Myfirst[i];
    Mylast = v12[1]._Mypair._Myval2._Mylast;
    if ( &_Right >= Mylast || (v14 = v12[1]._Mypair._Myval2._Myfirst, v14 > &_Right) )
    {
      if ( Mylast == v12[1]._Mypair._Myval2._Myend )
        std::vector<std::string>::_Reserve(v12 + 1, 1ui64);
      v17 = v12[1]._Mypair._Myval2._Mylast;
      if ( !v17 )
        goto LABEL_20;
      v17->_Mypair._Myval2._Myres = 15i64;
      v17->_Mypair._Myval2._Mysize = 0i64;
      if ( v17->_Mypair._Myval2._Myres < 0x10 )
        Ptr = v17;
      else
        Ptr = (std::string *)v17->_Mypair._Myval2._Bx._Ptr;
      p_Right = &_Right;
    }
    else
    {
      v15 = (char *)&_Right - (char *)v14;
      if ( Mylast == v12[1]._Mypair._Myval2._Myend )
        std::vector<std::string>::_Reserve(v12 + 1, 1ui64);
      v16 = (unsigned __int64)v12[1]._Mypair._Myval2._Myfirst + (v15 & 0xFFFFFFFFFFFFFFE0ui64);
      v17 = v12[1]._Mypair._Myval2._Mylast;
      if ( !v17 )
        goto LABEL_20;
      v17->_Mypair._Myval2._Myres = 15i64;
      v17->_Mypair._Myval2._Mysize = 0i64;
      if ( v17->_Mypair._Myval2._Myres < 0x10 )
        Ptr = v17;
      else
        Ptr = (std::string *)v17->_Mypair._Myval2._Bx._Ptr;
      p_Right = (std::string *)v16;
    }
    Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
    std::string::_Assign_rv(v17, p_Right);
LABEL_20:
    ++v12[1]._Mypair._Myval2._Mylast;
    if ( _Right._Mypair._Myval2._Myres >= 0x10 )
    {
      v20 = _Right._Mypair._Myval2._Bx._Ptr;
      if ( _Right._Mypair._Myval2._Myres + 1 >= 0x1000 )
      {
        if ( (_Right._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
          invalid_parameter_noinfo_noreturn();
        v21 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
        if ( v21 >= _Right._Mypair._Myval2._Bx._Ptr )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v21) < (char *)8 )
          invalid_parameter_noinfo_noreturn();
        if ( (char *)(_Right._Mypair._Myval2._Bx._Ptr - v21) > (char *)0x27 )
          invalid_parameter_noinfo_noreturn();
        v20 = (char *)*((_QWORD *)_Right._Mypair._Myval2._Bx._Ptr - 1);
      }
      operator delete(v20);
    }
  }
  v22 = 0;
  if ( editSize > 0 )
  {
    _Val = 0;
    do
    {
      v23 = this->AllDialogData._Mypair._Myval2._Myfirst;
      if ( this->AllDialogData._Mypair._Myval2._Mylast - v23 <= i )
        std::_Xout_of_range("invalid vector<T> subscript");
      p_allEditNumData = &v23[i].allEditNumData;
      v25 = p_allEditNumData->_Mypair._Myval2._Mylast;
      if ( &_Val >= (int *)v25
        || (v26 = p_allEditNumData->_Mypair._Myval2._Myfirst, p_allEditNumData->_Mypair._Myval2._Myfirst > (float *)&_Val) )
      {
        Myend = p_allEditNumData->_Mypair._Myval2._Myend;
        if ( v25 == Myend && !(Myend - v25) )
        {
          v36 = v25 - p_allEditNumData->_Mypair._Myval2._Myfirst;
          if ( v36 == 0x3FFFFFFFFFFFFFFFi64 )
            std::_Xlength_error("vector<T> too long");
          v37 = v36 + 1;
          v38 = Myend - p_allEditNumData->_Mypair._Myval2._Myfirst;
          v39 = 0i64;
          if ( 0x3FFFFFFFFFFFFFFFi64 - (v38 >> 1) >= v38 )
            v39 = v38 + (v38 >> 1);
          if ( v39 >= v37 )
            v37 = v39;
          std::vector<int>::_Reallocate(p_allEditNumData, v37);
        }
        v40 = p_allEditNumData->_Mypair._Myval2._Mylast;
        if ( v40 )
          *v40 = 0.0;
        v34 = v40 + 1;
      }
      else
      {
        v27 = ((char *)&_Val - (char *)v26) >> 2;
        v28 = p_allEditNumData->_Mypair._Myval2._Myend;
        if ( v25 == v28 && !(v28 - v25) )
        {
          v29 = v25 - v26;
          if ( v29 == 0x3FFFFFFFFFFFFFFFi64 )
            std::_Xlength_error("vector<T> too long");
          v30 = v29 + 1;
          v31 = v28 - v26;
          v32 = 0i64;
          if ( 0x3FFFFFFFFFFFFFFFi64 - (v31 >> 1) >= v31 )
            v32 = v31 + (v31 >> 1);
          if ( v32 >= v30 )
            v30 = v32;
          std::vector<int>::_Reallocate(p_allEditNumData, v30);
        }
        v33 = p_allEditNumData->_Mypair._Myval2._Mylast;
        if ( v33 )
          *v33 = p_allEditNumData->_Mypair._Myval2._Myfirst[v27];
        v34 = v33 + 1;
      }
      p_allEditNumData->_Mypair._Myval2._Mylast = v34;
      ++v22;
    }
    while ( v22 < editSize );
  }
  v41 = 0;
  if ( comboSize > 0 )
  {
    _Val = 0;
    do
    {
      v42 = this->AllDialogData._Mypair._Myval2._Myfirst;
      if ( this->AllDialogData._Mypair._Myval2._Mylast - v42 <= i )
        std::_Xout_of_range("invalid vector<T> subscript");
      v43 = (std::vector<int> *)&v42[i];
      v44 = v43[2]._Mypair._Myval2._Mylast;
      if ( &_Val >= v44 || (v45 = v43[2]._Mypair._Myval2._Myfirst, v45 > &_Val) )
      {
        if ( v44 == v43[2]._Mypair._Myval2._Myend )
          std::vector<int>::_Reserve(v43 + 2, 1ui64);
        v48 = v43[2]._Mypair._Myval2._Mylast;
        if ( v48 )
          *v48 = 0;
      }
      else
      {
        v46 = &_Val - v45;
        if ( v44 == v43[2]._Mypair._Myval2._Myend )
          std::vector<int>::_Reserve(v43 + 2, 1ui64);
        v47 = v43[2]._Mypair._Myval2._Mylast;
        if ( v47 )
          *v47 = v43[2]._Mypair._Myval2._Myfirst[v46];
      }
      ++v43[2]._Mypair._Myval2._Mylast;
      ++v41;
    }
    while ( v41 < comboSize );
  }
  for ( j = 0; j < buttonSize; ++j )
  {
    _Val = 0;
    v50 = this->AllDialogData._Mypair._Myval2._Myfirst;
    if ( this->AllDialogData._Mypair._Myval2._Mylast - v50 <= i )
      std::_Xout_of_range("invalid vector<T> subscript");
    std::vector<int>::push_back(&v50[i].allButtonIndexData, &_Val);
  }
}

void __fastcall CollisionFieldData::initDialogData(CollisionFieldData *this)
{
  this->initDialogData(this, 0, 1, 21, 7, 3);
  this->initChartData(this, 0, 3);
}

void __fastcall CollisionFieldData::initialize(CollisionFieldData *this)
{
  __int64 v2; // rdx
  std::_Wrap_alloc<std::allocator<ChartData> > *v3; // r8
  std::integral_constant<bool,0> v4; // r9
  ChartData *Myfirst; // rbx
  DialogChartData _Val; // [rsp+20h] [rbp-88h] BYREF
  __int64 v7; // [rsp+38h] [rbp-70h]
  DialogData v8; // [rsp+40h] [rbp-68h] BYREF

  v7 = -2i64;
  memset(&v8, 0, sizeof(v8));
  memset(&_Val, 0, sizeof(_Val));
  std::vector<DialogData>::push_back(&this->AllDialogData, &v8);
  std::vector<DialogChartData>::push_back(&this->AllDialogChartData, &_Val);
  this->EffectType = 7;
  this->initDialogData(this);
  this->setinitDialogData(this);
  Myfirst = _Val.dialogChartData._Mypair._Myval2._Myfirst;
  if ( _Val.dialogChartData._Mypair._Myval2._Myfirst )
  {
    std::_Destroy_range1<std::allocator<ChartData>,ChartData *>(
      _Val.dialogChartData._Mypair._Myval2._Myfirst,
      _Val.dialogChartData._Mypair._Myval2._Mylast,
      v3,
      v4);
    std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition>>::deallocate(
      (std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *)((char *)_Val.dialogChartData._Mypair._Myval2._Myend
                                                                                               - (char *)Myfirst),
      (extension::exsound_detail::SoundBankMediaDefinition *)Myfirst,
      _Val.dialogChartData._Mypair._Myval2._Myend - Myfirst);
  }
  DialogData::~DialogData(&v8, v2, (std::_Wrap_alloc<std::allocator<std::string > > *)v3, v4);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall TurbulenceData::terminate(
        TurbulenceData *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<std::string > > *a3,
        std::integral_constant<bool,0> a4)
{
  DialogData *Mylast; // rdi
  DialogData *i; // rbx

  Mylast = this->AllDialogData._Mypair._Myval2._Mylast;
  for ( i = this->AllDialogData._Mypair._Myval2._Myfirst; i != Mylast; ++i )
    DialogData::~DialogData(i, a2, a3, a4);
  this->AllDialogData._Mypair._Myval2._Mylast = this->AllDialogData._Mypair._Myval2._Myfirst;
  std::_Destroy_range1<std::allocator<DialogChartData>,DialogChartData *>(
    this->AllDialogChartData._Mypair._Myval2._Myfirst,
    this->AllDialogChartData._Mypair._Myval2._Mylast,
    (std::_Wrap_alloc<std::allocator<DialogChartData> > *)a3,
    a4);
  this->AllDialogChartData._Mypair._Myval2._Mylast = this->AllDialogChartData._Mypair._Myval2._Myfirst;
}

