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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E374
EffectData::~EffectData(); // 0x14012CC40
void EffectData::initialize(); // 0x14012CCC0
void EffectData::terminate(); // 0x14012AB50
long EffectData::getDeleteTime(); // 0x14012CD40
long EffectData::getDeleteTime(long parentGenerateEnd, long parentLifeEnd); // 0x14012CD50//decompilation failure at 14089E374!
void __fastcall std::_Uninitialized_default_fill_n1<DialogChartData *,unsigned __int64,std::allocator<DialogChartData>>(
        DialogChartData *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<DialogChartData> > *_Al,
        std::integral_constant<bool,0> __formal)
{
  for ( ; _Count; --_Count )
  {
    if ( _First )
    {
      _First->dialogChartData._Mypair._Myval2._Myfirst = 0i64;
      _First->dialogChartData._Mypair._Myval2._Mylast = 0i64;
      _First->dialogChartData._Mypair._Myval2._Myend = 0i64;
    }
    ++_First;
  }
}

void __fastcall std::_Uninitialized_default_fill_n1<DialogData *,unsigned __int64,std::allocator<DialogData>>(
        DialogData *_First,
        unsigned __int64 _Count,
        std::_Wrap_alloc<std::allocator<DialogData> > *_Al,
        std::integral_constant<bool,0> __formal)
{
  unsigned __int64 v4; // rsi
  DialogData *v5; // rdi
  std::string **p_Myend; // rbx

  v4 = _Count;
  v5 = _First;
  if ( _Count )
  {
    p_Myend = &_First->allTextData._Mypair._Myval2._Myend;
    do
    {
      if ( v5 )
      {
        memset(v5, 0, sizeof(DialogData));
        v5->allEditNumData._Mypair._Myval2._Myfirst = 0i64;
        *(p_Myend - 4) = 0i64;
        *(p_Myend - 3) = 0i64;
        *(p_Myend - 2) = 0i64;
        *(p_Myend - 1) = 0i64;
        *p_Myend = 0i64;
        p_Myend[1] = 0i64;
        p_Myend[2] = 0i64;
        p_Myend[3] = 0i64;
        p_Myend[4] = 0i64;
        p_Myend[5] = 0i64;
        p_Myend[6] = 0i64;
      }
      ++v5;
      p_Myend += 12;
      --v4;
    }
    while ( v4 );
  }
}

void __fastcall EffectData::~EffectData(
        EffectData *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<DialogChartData> > *a3,
        std::integral_constant<bool,0> a4)
{
  DialogChartData *Myfirst; // rcx
  signed __int64 v6; // rcx

  this->__vftable = (EffectData_vtbl *)&EffectData::`vftable';
  this->blurUV2.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
  this->blurUV1.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
  Myfirst = this->AllDialogChartData._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range1<std::allocator<DialogChartData>,DialogChartData *>(
      Myfirst,
      this->AllDialogChartData._Mypair._Myval2._Mylast,
      a3,
      a4);
    v6 = (char *)this->AllDialogChartData._Mypair._Myval2._Myend
       - (char *)this->AllDialogChartData._Mypair._Myval2._Myfirst;
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)v6,
      (AgJsonNode *)this->AllDialogChartData._Mypair._Myval2._Myfirst,
      v6 / 24);
    this->AllDialogChartData._Mypair._Myval2._Myfirst = 0i64;
    this->AllDialogChartData._Mypair._Myval2._Mylast = 0i64;
    this->AllDialogChartData._Mypair._Myval2._Myend = 0i64;
  }
  std::vector<DialogData>::_Tidy(&this->AllDialogData);
}

void __fastcall std::vector<DialogChartData>::_Tidy(
        std::vector<DialogChartData> *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<DialogChartData> > *a3,
        std::integral_constant<bool,0> a4)
{
  DialogChartData *Myfirst; // rcx
  std::allocator<AgJsonNode> *v6; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range1<std::allocator<DialogChartData>,DialogChartData *>(
      Myfirst,
      this->_Mypair._Myval2._Mylast,
      a3,
      a4);
    std::allocator<AgJsonNode>::deallocate(
      v6,
      (AgJsonNode *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<DialogData>::_Tidy(
        std::vector<DialogData> *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<std::string > > *a3,
        std::integral_constant<bool,0> a4)
{
  DialogData *Myfirst; // rbx
  DialogData *i; // rdi

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = this->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
      DialogData::~DialogData(Myfirst, a2, a3, a4);
    std::_Wrap_alloc<std::allocator<DialogData>>::deallocate(
      (std::_Wrap_alloc<std::allocator<DialogData> > *)((char *)this->_Mypair._Myval2._Myend
                                                      - (char *)this->_Mypair._Myval2._Myfirst),
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

__int64 __fastcall EffectData::getDeleteTime(EffectData *this, int parentGenerateEnd, int parentLifeEnd)
{
  unsigned int v3; // ebx
  EffectData *child; // rcx
  int v6; // edi
  int v7; // esi
  EffectData *siblingFront; // rcx

  v3 = 0;
  child = this->child;
  v6 = 0;
  v7 = 0;
  if ( child )
  {
    v6 = child->getDeleteTime(child, 0, 0);
    if ( v6 == -1 )
      return 0xFFFFFFFFi64;
  }
  siblingFront = this->siblingFront;
  if ( siblingFront )
  {
    v7 = siblingFront->getDeleteTime(siblingFront, 0, 0);
    if ( v7 == -1 )
      return 0xFFFFFFFFi64;
  }
  if ( v6 <= v7 )
  {
    if ( v7 > 0 )
      return (unsigned int)v7;
  }
  else if ( v6 > 0 )
  {
    return (unsigned int)v6;
  }
  return v3;
}

__int64 __fastcall EffectData::getDeleteTime(EffectData *this)
{
  return ((__int64 (__fastcall *)(EffectData *, _QWORD, _QWORD))this->getDeleteTime)(this, 0i64, 0i64);
}

void __fastcall EffectData::initialize(EffectData *this)
{
  __int64 v2; // rdx
  std::_Wrap_alloc<std::allocator<std::string > > *v3; // r8
  std::integral_constant<bool,0> v4; // r9
  DialogData v5; // [rsp+40h] [rbp-68h] BYREF

  memset(&v5, 0, sizeof(v5));
  std::vector<DialogData>::resize(&this->AllDialogData, 0xAui64);
  std::vector<DialogChartData>::resize(&this->AllDialogChartData, 0xAui64);
  DialogData::~DialogData(&v5, v2, v3, v4);
}

void __fastcall std::vector<DialogChartData>::resize(std::vector<DialogChartData> *this, unsigned __int64 _Newsize)
{
  DialogChartData *Mylast; // r9
  signed __int64 v5; // r8
  __int64 v6; // rcx
  DialogChartData *v7; // rbx
  std::_Wrap_alloc<std::allocator<DialogChartData> > *v8; // r8
  std::integral_constant<bool,0> v9; // r9

  Mylast = this->_Mypair._Myval2._Mylast;
  v5 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  v6 = v5 / 24;
  if ( v5 / 24 <= _Newsize )
  {
    if ( v5 / 24 < _Newsize )
    {
      std::vector<DialogChartData>::_Reserve(this, _Newsize - v6);
      v8 = (std::_Wrap_alloc<std::allocator<DialogChartData> > *)(this->_Mypair._Myval2._Mylast
                                                                - this->_Mypair._Myval2._Myfirst);
      std::_Uninitialized_default_fill_n1<DialogChartData *,unsigned __int64,std::allocator<DialogChartData>>(
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
    std::_Destroy_range1<std::allocator<DialogChartData>,DialogChartData *>(
      v7,
      Mylast,
      (std::_Wrap_alloc<std::allocator<DialogChartData> > *)v5,
      (std::integral_constant<bool,0>)Mylast);
    this->_Mypair._Myval2._Mylast = v7;
  }
}

void __fastcall std::vector<DialogData>::resize(
        std::vector<DialogData> *this,
        unsigned __int64 _Newsize,
        __int64 a3,
        std::integral_constant<bool,0> a4)
{
  DialogData *Mylast; // rdi
  signed __int64 v7; // r8
  __int64 v8; // rdx
  __int64 v9; // rcx
  DialogData *v10; // rsi
  DialogData *i; // rbx
  std::_Wrap_alloc<std::allocator<DialogData> > *v12; // r8
  std::integral_constant<bool,0> v13; // r9

  Mylast = this->_Mypair._Myval2._Mylast;
  v7 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  v8 = (unsigned __int128)(v7 * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
  v9 = v7 / 96;
  if ( v7 / 96 <= _Newsize )
  {
    if ( v7 / 96 < _Newsize )
    {
      std::vector<DialogData>::_Reserve(this, _Newsize - v9);
      v12 = (std::_Wrap_alloc<std::allocator<DialogData> > *)(this->_Mypair._Myval2._Mylast
                                                            - this->_Mypair._Myval2._Myfirst);
      std::_Uninitialized_default_fill_n1<DialogData *,unsigned __int64,std::allocator<DialogData>>(
        this->_Mypair._Myval2._Mylast,
        _Newsize - (_QWORD)v12,
        v12,
        v13);
      this->_Mypair._Myval2._Mylast += _Newsize - (this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst);
    }
  }
  else
  {
    v10 = &Mylast[_Newsize - v9];
    for ( i = v10; i != Mylast; ++i )
      DialogData::~DialogData(i, v8, (std::_Wrap_alloc<std::allocator<std::string > > *)v7, a4);
    this->_Mypair._Myval2._Mylast = v10;
  }
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

