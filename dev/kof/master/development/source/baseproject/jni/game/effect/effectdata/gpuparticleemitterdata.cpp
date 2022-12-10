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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/emitterdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/particleemitterdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E377
void GPUParticleEmitterData::initialize(); // 0x14012D1E0
void GPUParticleEmitterData::terminate(); // 0x14012AB50
void GPUParticleEmitterData::initDialogData(); // 0x14012D240
void GPUParticleEmitterData::initDialogData(long type, long textSize, long editSize, long comboSize, long buttonSize); // 0x14012D450
void GPUParticleEmitterData::initChartData(long type, long size); // 0x14012D7E0
void GPUParticleEmitterData::setDialogData(); // 0x14012B550
long GPUParticleEmitterData::getDeleteTime(long parentGenerateEnd, long parentLifeEnd); // 0x14012D840//decompilation failure at 14089E377!
void __fastcall std::_Uninitialized_default_fill_n1<ChartData *,unsigned __int64,std::allocator<ChartData>>(
        ChartData *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<ChartData> > *_Al,
        std::integral_constant<bool,0> __formal)
{
  float *p_z; // rax

  if ( _Count )
  {
    p_z = &_First->RenderColor.z;
    do
    {
      if ( _First )
      {
        *(_QWORD *)&_First->RenderFlag = 0i64;
        _First->RenderColor.__vftable = 0i64;
        *(_QWORD *)&_First->RenderColor.x = 0i64;
        *(_QWORD *)&_First->RenderColor.z = 0i64;
        _First->keyData._Mypair._Myval2._Myfirst = 0i64;
        _First->keyData._Mypair._Myval2._Mylast = 0i64;
        _First->keyData._Mypair._Myval2._Myend = 0i64;
        *((_QWORD *)p_z - 1) = 0i64;
        *p_z = 0.0;
        *((_QWORD *)p_z - 2) = &OGLEffectVec3::`vftable';
        *((_QWORD *)p_z + 1) = 0i64;
        *((_QWORD *)p_z + 2) = 0i64;
        *((_QWORD *)p_z + 3) = 0i64;
      }
      ++_First;
      p_z += 14;
      --_Count;
    }
    while ( _Count );
  }
}

void __fastcall std::_Uninitialized_default_fill_n1<std::string *,unsigned __int64,std::allocator<std::string>>(
        std::string *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<std::string > > *_Al,
        std::integral_constant<bool,0> __formal)
{
  for ( ; _Count; --_Count )
  {
    if ( _First )
    {
      _First->_Mypair._Myval2._Myres = 15i64;
      _First->_Mypair._Myval2._Mysize = 0i64;
      _First->_Mypair._Myval2._Bx._Buf[0] = 0;
    }
    ++_First;
  }
}

__int64 __fastcall GPUParticleEmitterData::getDeleteTime(
        ParticleEmitterData *this,
        int parentGenerateEnd,
        int parentLifeEnd)
{
  DialogData *Myfirst; // r10
  DialogData *v7; // rbx
  int *v8; // rcx
  int *v9; // rcx
  float *v10; // rcx
  unsigned __int64 v11; // rax
  unsigned int v12; // ebp
  DialogData *v13; // rax
  float *v14; // rcx
  unsigned __int64 v15; // rax
  float v16; // xmm0_4
  EffectData *child; // rcx
  signed int v18; // edi
  int v19; // esi
  signed int v20; // ebx
  EffectData *siblingFront; // rcx

  Myfirst = this->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(this->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v7 = this->AllDialogData._Mypair._Myval2._Myfirst;
  if ( (unsigned __int64)(this->AllDialogData._Mypair._Myval2._Mylast - Myfirst) <= 2 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v8 = Myfirst[1].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[1].allButtonIndexData._Mypair._Myval2._Mylast - v8) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v8 )
    return 0xFFFFFFFFi64;
  v9 = Myfirst[2].allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst[2].allButtonIndexData._Mypair._Myval2._Mylast - v9) )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( *v9 )
    return 0xFFFFFFFFi64;
  v10 = Myfirst[1].allEditNumData._Mypair._Myval2._Myfirst;
  v11 = Myfirst[1].allEditNumData._Mypair._Myval2._Mylast - v10;
  if ( !v11 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v11 <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v12 = (int)(float)(v10[1] + *v10);
  if ( parentGenerateEnd )
  {
    v13 = std::vector<DialogData>::at(&this->AllDialogData, 8ui64);
    if ( !(v13->allEditNumData._Mypair._Myval2._Mylast - v13->allEditNumData._Mypair._Myval2._Myfirst) )
      std::_Xout_of_range("invalid vector<T> subscript");
    v12 += (int)(float)((float)((float)((float)parentLifeEnd * *v13->allEditNumData._Mypair._Myval2._Myfirst) / 100.0)
                      + (float)parentGenerateEnd);
  }
  v14 = v7[2].allEditNumData._Mypair._Myval2._Myfirst;
  v15 = v7[2].allEditNumData._Mypair._Myval2._Mylast - v14;
  if ( !v15 )
    std::_Xout_of_range("invalid vector<T> subscript");
  if ( v15 <= 1 )
    std::_Xout_of_range("invalid vector<T> subscript");
  v16 = v14[1] + *v14;
  child = this->child;
  v18 = 0;
  v19 = 0;
  v20 = (int)v16 + v12;
  if ( child )
  {
    v18 = ((__int64 (__fastcall *)(EffectData *, _QWORD))child->getDeleteTime)(child, v12);
    if ( v18 == -1 )
      return 0xFFFFFFFFi64;
  }
  siblingFront = this->siblingFront;
  if ( siblingFront )
  {
    v19 = siblingFront->getDeleteTime(siblingFront, parentGenerateEnd, parentLifeEnd);
    if ( v19 == -1 )
      return 0xFFFFFFFFi64;
  }
  if ( v18 <= v19 )
  {
    if ( v19 > v20 )
      return (unsigned int)v19;
  }
  else if ( v18 > v20 )
  {
    return (unsigned int)v18;
  }
  return (unsigned int)v20;
}

void __fastcall ParticleEmitterData::initChartData(TurbulenceData *this, int type, int size)
{
  DialogChartData *Myfirst; // r10

  Myfirst = this->AllDialogChartData._Mypair._Myval2._Myfirst;
  if ( this->AllDialogChartData._Mypair._Myval2._Mylast - Myfirst <= (unsigned __int64)type )
    std::_Xout_of_range("invalid vector<T> subscript");
  std::vector<ChartData>::resize(&Myfirst[type].dialogChartData, size);
}

void __fastcall GPUParticleEmitterData::initDialogData(
        TurbulenceData *this,
        int type,
        int textSize,
        int editSize,
        int comboSize,
        int buttonSize)
{
  unsigned __int64 v6; // rbx
  DialogData *Myfirst; // rcx
  signed __int64 v9; // rbp
  __int64 v11; // rsi
  DialogData *v12; // r8
  DialogData *v13; // r8
  DialogData *v14; // r8
  int i; // esi
  DialogData *v16; // r8
  std::string *v17; // r9
  unsigned __int64 j; // r8
  DialogData *v19; // r9
  float *v20; // rcx
  unsigned __int64 k; // r8
  DialogData *v22; // r9
  int *v23; // rdx
  unsigned __int64 m; // r8
  DialogData *v25; // r9
  int *v26; // rdx

  v6 = type;
  Myfirst = this->AllDialogData._Mypair._Myval2._Myfirst;
  v9 = editSize;
  if ( this->AllDialogData._Mypair._Myval2._Mylast - Myfirst <= (unsigned __int64)type )
    std::_Xout_of_range("invalid vector<T> subscript");
  v11 = type;
  std::vector<std::string>::resize(&Myfirst[v11].allTextData, textSize);
  v12 = this->AllDialogData._Mypair._Myval2._Myfirst;
  if ( this->AllDialogData._Mypair._Myval2._Mylast - v12 <= v6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  std::vector<float>::resize(&v12[v11].allEditNumData, v9);
  v13 = this->AllDialogData._Mypair._Myval2._Myfirst;
  if ( this->AllDialogData._Mypair._Myval2._Mylast - v13 <= v6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  std::vector<float>::resize((std::vector<float> *)&v13[v11].allComboIndexData, comboSize);
  v14 = this->AllDialogData._Mypair._Myval2._Myfirst;
  if ( this->AllDialogData._Mypair._Myval2._Mylast - v14 <= v6 )
    std::_Xout_of_range("invalid vector<T> subscript");
  std::vector<float>::resize((std::vector<float> *)&v14[v6].allButtonIndexData, buttonSize);
  for ( i = 0; i < textSize; ++i )
  {
    v16 = this->AllDialogData._Mypair._Myval2._Myfirst;
    if ( this->AllDialogData._Mypair._Myval2._Mylast - v16 <= v6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v17 = v16[v6].allTextData._Mypair._Myval2._Myfirst;
    if ( v16[v6].allTextData._Mypair._Myval2._Mylast - v17 <= (unsigned __int64)i )
      std::_Xout_of_range("invalid vector<T> subscript");
    std::string::assign(&v17[i], &pnewText, 0i64);
  }
  for ( j = 0i64; (__int64)j < v9; ++j )
  {
    v19 = this->AllDialogData._Mypair._Myval2._Myfirst;
    if ( this->AllDialogData._Mypair._Myval2._Mylast - v19 <= v6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v20 = v19[v6].allEditNumData._Mypair._Myval2._Myfirst;
    if ( v19[v6].allEditNumData._Mypair._Myval2._Mylast - v20 <= j )
      std::_Xout_of_range("invalid vector<T> subscript");
    v20[j] = 0.0;
  }
  for ( k = 0i64; (__int64)k < comboSize; ++k )
  {
    v22 = this->AllDialogData._Mypair._Myval2._Myfirst;
    if ( this->AllDialogData._Mypair._Myval2._Mylast - v22 <= v6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v23 = v22[v6].allComboIndexData._Mypair._Myval2._Myfirst;
    if ( v22[v6].allComboIndexData._Mypair._Myval2._Mylast - v23 <= k )
      std::_Xout_of_range("invalid vector<T> subscript");
    v23[k] = 0;
  }
  for ( m = 0i64; (__int64)m < buttonSize; ++m )
  {
    v25 = this->AllDialogData._Mypair._Myval2._Myfirst;
    if ( this->AllDialogData._Mypair._Myval2._Mylast - v25 <= v6 )
      std::_Xout_of_range("invalid vector<T> subscript");
    v26 = v25[v6].allButtonIndexData._Mypair._Myval2._Myfirst;
    if ( v25[v6].allButtonIndexData._Mypair._Myval2._Mylast - v26 <= m )
      std::_Xout_of_range("invalid vector<T> subscript");
    v26[m] = 0;
  }
}

void __fastcall GPUParticleEmitterData::initDialogData(GPUParticleEmitterData *this)
{
  _Mtx_internal_imp_t *p_allDataMutex; // rbx
  int v3; // eax
  int v4; // eax

  p_allDataMutex = (_Mtx_internal_imp_t *)&EffectAppData::getInstance()->allDataMutex;
  v3 = Mtx_lock(p_allDataMutex);
  if ( v3 )
    std::_Throw_C_error(v3);
  ((void (__fastcall *)(GPUParticleEmitterData *, _QWORD, __int64, __int64, int, int, __int64))this->initDialogData)(
    this,
    0i64,
    3i64,
    21i64,
    5,
    9,
    -2i64);
  ((void (__fastcall *)(GPUParticleEmitterData *, __int64, _QWORD))this->initDialogData)(this, 1i64, 0i64);
  ((void (__fastcall *)(GPUParticleEmitterData *, __int64, _QWORD))this->initDialogData)(this, 2i64, 0i64);
  this->initDialogData(this, 3, 0, 4, 1, 0);
  this->initDialogData(this, 5, 0, 4, 0, 1);
  this->initDialogData(this, 6, 0, 18, 3, 2);
  this->initDialogData(this, 7, 0, 19, 3, 1);
  this->initDialogData(this, 8, 0, 7, 0, 3);
  this->initChartData(this, 0, 9);
  this->initChartData(this, 1, 6);
  this->initChartData(this, 2, 1);
  this->initChartData(this, 3, 0);
  this->initChartData(this, 5, 4);
  this->initChartData(this, 6, 6);
  this->initChartData(this, 7, 3);
  this->initChartData(this, 8, 0);
  v4 = Mtx_unlock(p_allDataMutex);
  if ( v4 )
    std::_Throw_C_error(v4);
}

void __fastcall GPUParticleEmitterData::initialize(
        ParticleEmitterData *this,
        __int64 a2,
        __int64 a3,
        std::integral_constant<bool,0> a4)
{
  ParticleEmitterData_vtbl *v5; // rax

  this->parent = 0i64;
  this->child = 0i64;
  this->siblingFront = 0i64;
  this->siblingBack = 0i64;
  std::vector<DialogData>::resize(&this->AllDialogData, 9ui64, a3, a4);
  std::vector<DialogChartData>::resize(&this->AllDialogChartData, 9ui64);
  v5 = this->__vftable;
  this->EffectType = 0;
  v5->initDialogData(this);
  this->setDialogData(this);
}

void __fastcall std::vector<float>::resize(std::vector<float> *this, unsigned __int64 _Newsize)
{
  float *Mylast; // r8
  float *Myfirst; // r10
  unsigned __int64 v6; // rcx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  unsigned __int64 v9; // r9
  unsigned __int64 v10; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v6 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( _Newsize >= v6 )
  {
    if ( v6 < _Newsize )
    {
      v7 = _Newsize - v6;
      if ( this->_Mypair._Myval2._Myend - Mylast < v7 )
      {
        if ( 0x3FFFFFFFFFFFFFFFi64 - v6 < v7 )
          std::_Xlength_error("vector<T> too long");
        v8 = v6 + v7;
        v9 = this->_Mypair._Myval2._Myend - Myfirst;
        v10 = 0i64;
        if ( 0x3FFFFFFFFFFFFFFFi64 - (v9 >> 1) >= v9 )
          v10 = v9 + (v9 >> 1);
        if ( v10 >= v8 )
          v8 = v10;
        std::vector<int>::_Reallocate(this, v8);
      }
      memset(
        this->_Mypair._Myval2._Mylast,
        0,
        4 * (_Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst)));
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    this->_Mypair._Myval2._Mylast = &Mylast[_Newsize - v6];
  }
}

void __fastcall std::vector<ChartData>::resize(std::vector<ChartData> *this, unsigned __int64 _Newsize)
{
  ChartData *Mylast; // r9
  signed __int64 v5; // r8
  __int64 v6; // rcx
  ChartData *v7; // rbx
  std::_Wrap_alloc<std::allocator<ChartData> > *v8; // r8
  std::integral_constant<bool,0> v9; // r9

  Mylast = this->_Mypair._Myval2._Mylast;
  v5 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  v6 = v5 / 56;
  if ( v5 / 56 <= _Newsize )
  {
    if ( v5 / 56 < _Newsize )
    {
      std::vector<ChartData>::_Reserve(this, _Newsize - v6);
      v8 = (std::_Wrap_alloc<std::allocator<ChartData> > *)(this->_Mypair._Myval2._Mylast
                                                          - this->_Mypair._Myval2._Myfirst);
      std::_Uninitialized_default_fill_n1<ChartData *,unsigned __int64,std::allocator<ChartData>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (_QWORD)v8,
        v8,
        v9);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    v7 = &Mylast[_Newsize - v6];
    std::_Destroy_range1<std::allocator<ChartData>,ChartData *>(
      v7,
      Mylast,
      (std::_Wrap_alloc<std::allocator<ChartData> > *)v5,
      (std::integral_constant<bool,0>)Mylast);
    this->_Mypair._Myval2._Mylast = v7;
  }
}

void __fastcall std::vector<std::string>::resize(
        std::vector<std::string> *this,
        unsigned __int64 _Newsize,
        std::_Wrap_alloc<std::allocator<std::string > > *a3,
        std::integral_constant<bool,0> a4)
{
  std::string *Mylast; // rdx
  std::string *Myfirst; // r11
  unsigned __int64 v8; // rcx
  std::string *v9; // rbx
  std::_Wrap_alloc<std::allocator<std::string > > *v10; // r8
  std::string *Myend; // r9
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // r9
  unsigned __int64 v14; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v8 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( v8 <= _Newsize )
  {
    if ( v8 < _Newsize )
    {
      v10 = (std::_Wrap_alloc<std::allocator<std::string > > *)(_Newsize - v8);
      Myend = this->_Mypair._Myval2._Myend;
      if ( Myend - Mylast < _Newsize - v8 )
      {
        if ( 0x7FFFFFFFFFFFFFFi64 - v8 < (unsigned __int64)v10 )
          std::_Xlength_error("vector<T> too long");
        v12 = _Newsize;
        v13 = Myend - Myfirst;
        v14 = 0i64;
        if ( 0x7FFFFFFFFFFFFFFi64 - (v13 >> 1) >= v13 )
          v14 = v13 + (v13 >> 1);
        if ( v14 >= _Newsize )
          v12 = v14;
        std::vector<std::string>::_Reallocate(this, v12);
      }
      std::_Uninitialized_default_fill_n1<std::string *,unsigned __int64,std::allocator<std::string>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst),
        v10,
        (std::integral_constant<bool,0>)Myend);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    v9 = &Mylast[_Newsize - v8];
    std::_Destroy_range1<std::allocator<std::string>,std::string *>(v9, Mylast, a3, a4);
    this->_Mypair._Myval2._Mylast = v9;
  }
}

void __fastcall TurbulenceData::setDialogData(TurbulenceData *this)
{
  _Mtx_internal_imp_t *p_allDataMutex; // rbx
  int v2; // eax
  int v3; // eax

  p_allDataMutex = (_Mtx_internal_imp_t *)&EffectAppData::getInstance()->allDataMutex;
  v2 = Mtx_lock(p_allDataMutex);
  if ( v2 )
    std::_Throw_C_error(v2);
  v3 = Mtx_unlock(p_allDataMutex);
  if ( v3 )
    std::_Throw_C_error(v3);
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

