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
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec2.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/oglinheritance/ogleffectvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec3.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/fielddata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglvec2.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x14089E371
DialogData::DialogData(DialogData & __that); // 0x14012C930
ChartData::~ChartData(); // 0x14012B520
DialogData::~DialogData(); // 0x14012AA30
void AttractionFieldData::initialize(); // 0x14012A950
void AttractionFieldData::terminate(); // 0x14012AB50
void AttractionFieldData::initDialogData(); // 0x14012ABB0
void AttractionFieldData::initDialogData(long type, long textSize, long editSize, long comboSize, long buttonSize); // 0x14012AC40
void AttractionFieldData::setinitDialogData(); // 0x14012B180
void AttractionFieldData::initChartData(long type, long size); // 0x14012B250
void AttractionFieldData::setDialogData(); // 0x14012B550//decompilation failure at 14089E371!
void __fastcall std::_Destroy_range1<std::allocator<ChartData>,ChartData *>(
        ChartData *_First,
        ChartData *_Last,
        std::_Wrap_alloc<std::allocator<ChartData> > *_Al,
        std::integral_constant<bool,0> __formal)
{
  std::vector<KeyData> *p_keyData; // rbx
  KeyData *Myfirst; // rax
  KeyData *i; // rcx
  KeyData *v8; // rcx
  unsigned __int64 v9; // rax
  KeyData *v10; // rax
  unsigned __int64 v11; // rcx

  if ( _First != _Last )
  {
    p_keyData = &_First->keyData;
    do
    {
      Myfirst = p_keyData->_Mypair._Myval2._Myfirst;
      if ( p_keyData->_Mypair._Myval2._Myfirst )
      {
        for ( i = p_keyData->_Mypair._Myval2._Mylast; Myfirst != i; ++Myfirst )
        {
          Myfirst->BezierPosBack.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
          Myfirst->BezierPosFront.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
          Myfirst->Pos.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
        }
        v8 = p_keyData->_Mypair._Myval2._Myfirst;
        v9 = p_keyData->_Mypair._Myval2._Myend - p_keyData->_Mypair._Myval2._Myfirst;
        if ( v9 > 0x3FFFFFFFFFFFFFFi64 )
          invalid_parameter_noinfo_noreturn();
        if ( v9 << 6 >= 0x1000 )
        {
          if ( ((unsigned __int8)v8 & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v10 = (KeyData *)v8[-1].BezierPosBack.OGLVec2;
          if ( v10 >= v8 )
            invalid_parameter_noinfo_noreturn();
          v11 = (char *)v8 - (char *)v10;
          if ( v11 < 8 )
            invalid_parameter_noinfo_noreturn();
          if ( v11 > 0x27 )
            invalid_parameter_noinfo_noreturn();
          v8 = v10;
        }
        operator delete(v8);
        p_keyData->_Mypair._Myval2._Myfirst = 0i64;
        p_keyData->_Mypair._Myval2._Mylast = 0i64;
        p_keyData->_Mypair._Myval2._Myend = 0i64;
      }
      p_keyData[-1]._Mypair._Myval2._Myfirst = (KeyData *)&OGLEffectVec3::`vftable';
      p_keyData = (std::vector<KeyData> *)((char *)p_keyData + 56);
    }
    while ( &p_keyData[-2]._Mypair._Myval2._Myend != (KeyData **)_Last );
  }
}

void __fastcall std::_Destroy_range1<std::allocator<DialogChartData>,DialogChartData *>(
        DialogChartData *_First,
        DialogChartData *_Last,
        std::_Wrap_alloc<std::allocator<DialogChartData> > *_Al,
        std::integral_constant<bool,0> __formal)
{
  DialogChartData *v5; // rbx
  KeyData *Myfirst; // rcx
  unsigned __int64 v7; // rdx
  KeyData *v8; // rax
  unsigned __int64 v9; // rcx

  if ( _First != _Last )
  {
    v5 = _First;
    do
    {
      if ( v5->dialogChartData._Mypair._Myval2._Myfirst )
      {
        std::_Destroy_range1<std::allocator<ChartData>,ChartData *>(
          v5->dialogChartData._Mypair._Myval2._Myfirst,
          v5->dialogChartData._Mypair._Myval2._Mylast,
          (std::_Wrap_alloc<std::allocator<ChartData> > *)_Al,
          __formal);
        Myfirst = (KeyData *)v5->dialogChartData._Mypair._Myval2._Myfirst;
        v7 = v5->dialogChartData._Mypair._Myval2._Myend - v5->dialogChartData._Mypair._Myval2._Myfirst;
        if ( v7 > 0x492492492492492i64 )
          invalid_parameter_noinfo_noreturn();
        if ( 56 * v7 >= 0x1000 )
        {
          if ( ((unsigned __int8)Myfirst & 0x1F) != 0 )
            invalid_parameter_noinfo_noreturn();
          v8 = (KeyData *)Myfirst[-1].BezierPosBack.OGLVec2;
          if ( v8 >= Myfirst )
            invalid_parameter_noinfo_noreturn();
          v9 = (char *)Myfirst - (char *)v8;
          if ( v9 < 8 )
            invalid_parameter_noinfo_noreturn();
          if ( v9 > 0x27 )
            invalid_parameter_noinfo_noreturn();
          Myfirst = v8;
        }
        operator delete(Myfirst);
        v5->dialogChartData._Mypair._Myval2._Myfirst = 0i64;
        v5->dialogChartData._Mypair._Myval2._Mylast = 0i64;
        v5->dialogChartData._Mypair._Myval2._Myend = 0i64;
      }
      ++v5;
    }
    while ( v5 != _Last );
  }
}

ChartData *__fastcall std::_Uninitialized_copy_al_unchecked1<ChartData const *,ChartData *,std::allocator<ChartData>>(
        const ChartData *_First,
        const ChartData *_Last,
        ChartData *_Dest,
        std::_Wrap_alloc<std::allocator<ChartData> > *_Al)
{
  OGLVec3 *v7; // rcx

  while ( _First != _Last )
  {
    if ( _Dest )
    {
      _Dest->RenderFlag = _First->RenderFlag;
      v7 = &_First->RenderColor.OGLVec3;
      if ( _First == (const ChartData *)-8i64 )
        v7 = 0i64;
      _Dest->RenderColor.x = v7->x;
      _Dest->RenderColor.y = v7->y;
      _Dest->RenderColor.z = v7->z;
      _Dest->RenderColor.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
      std::vector<KeyData>::vector<KeyData>(&_Dest->keyData, &_First->keyData);
    }
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

KeyData *__fastcall std::_Uninitialized_copy_al_unchecked1<KeyData const *,KeyData *,std::allocator<KeyData>>(
        const KeyData *_First,
        const KeyData *_Last,
        KeyData *_Dest,
        std::_Wrap_alloc<std::allocator<KeyData> > *_Al)
{
  OGLVec2 *v4; // r10
  OGLEffectVec2 *p_Pos; // r9
  OGLVec2 *v6; // rax
  OGLEffectVec2 *v7; // rcx
  OGLEffectVec2 *v8; // rcx

  if ( _First != _Last )
  {
    v4 = &_Dest->BezierPosFront.OGLVec2;
    p_Pos = &_First->Pos;
    do
    {
      if ( _Dest )
      {
        _Dest->selectFlag = LOBYTE(p_Pos[-1].x);
        v6 = &p_Pos->OGLVec2;
        if ( !p_Pos )
          v6 = 0i64;
        v4[-3] = *v6;
        v4[-4] = (OGLVec2)&OGLEffectVec2::`vftable';
        v4[-2].x = *(float *)&p_Pos[1].__vftable;
        v7 = p_Pos + 2;
        if ( p_Pos == (OGLEffectVec2 *)-24i64 )
          v7 = 0i64;
        *v4 = (OGLVec2)v7->__vftable;
        v4[-1] = (OGLVec2)&OGLEffectVec2::`vftable';
        v8 = p_Pos + 3;
        if ( p_Pos == (OGLEffectVec2 *)-40i64 )
          v8 = 0i64;
        v4[2] = (OGLVec2)v8->__vftable;
        v4[1] = (OGLVec2)&OGLEffectVec2::`vftable';
      }
      ++_Dest;
      v4 += 8;
      p_Pos += 4;
    }
    while ( &p_Pos[-1].OGLVec2 != (OGLVec2 *)_Last );
  }
  return _Dest;
}

std::string *__fastcall std::_Uninitialized_copy_al_unchecked1<std::string const *,std::string *,std::allocator<std::string>>(
        const std::string *_First,
        const std::string *_Last,
        std::string *_Dest,
        std::_Wrap_alloc<std::allocator<std::string > > *_Al)
{
  std::string *Ptr; // rax

  while ( _First != _Last )
  {
    if ( _Dest )
    {
      _Dest->_Mypair._Myval2._Myres = 15i64;
      _Dest->_Mypair._Myval2._Mysize = 0i64;
      if ( _Dest->_Mypair._Myval2._Myres < 0x10 )
        Ptr = _Dest;
      else
        Ptr = (std::string *)_Dest->_Mypair._Myval2._Bx._Ptr;
      Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
      std::string::assign(_Dest, _First, 0i64, 0xFFFFFFFFFFFFFFFFui64);
    }
    ++_Dest;
    ++_First;
  }
  return _Dest;
}

ChartData *__fastcall std::_Uninitialized_move_al_unchecked1<ChartData *,ChartData *,std::allocator<ChartData>>(
        ChartData *_First,
        ChartData *_Last,
        ChartData *_Dest,
        std::_Wrap_alloc<std::allocator<ChartData> > *_Al)
{
  KeyData **p_Mylast; // r9
  float *p_z; // r10
  float *v6; // rcx

  if ( _First != _Last )
  {
    p_Mylast = &_First->keyData._Mypair._Myval2._Mylast;
    p_z = &_Dest->RenderColor.z;
    do
    {
      if ( _Dest )
      {
        _Dest->RenderFlag = *((_BYTE *)p_Mylast - 40);
        v6 = (float *)(p_Mylast - 3);
        if ( p_Mylast == (KeyData **)32 )
          v6 = 0i64;
        *(p_z - 2) = *v6;
        *(p_z - 1) = v6[1];
        *p_z = v6[2];
        *((_QWORD *)p_z - 2) = &OGLEffectVec3::`vftable';
        *((_QWORD *)p_z + 1) = 0i64;
        *((_QWORD *)p_z + 2) = 0i64;
        *((_QWORD *)p_z + 3) = 0i64;
        *((_QWORD *)p_z + 1) = *(p_Mylast - 1);
        *((_QWORD *)p_z + 2) = *p_Mylast;
        *((_QWORD *)p_z + 3) = p_Mylast[1];
        *(p_Mylast - 1) = 0i64;
        *p_Mylast = 0i64;
        p_Mylast[1] = 0i64;
      }
      ++_Dest;
      p_z += 14;
      p_Mylast += 7;
    }
    while ( p_Mylast - 5 != (KeyData **)_Last );
  }
  return _Dest;
}

DialogChartData *__fastcall std::_Uninitialized_move_al_unchecked1<DialogChartData *,DialogChartData *,std::allocator<DialogChartData>>(
        DialogChartData *_First,
        DialogChartData *_Last,
        DialogChartData *_Dest,
        std::_Wrap_alloc<std::allocator<DialogChartData> > *_Al)
{
  ChartData **p_Myend; // rcx

  if ( _First != _Last )
  {
    p_Myend = &_First->dialogChartData._Mypair._Myval2._Myend;
    do
    {
      if ( _Dest )
      {
        _Dest->dialogChartData._Mypair._Myval2._Myfirst = 0i64;
        _Dest->dialogChartData._Mypair._Myval2._Mylast = 0i64;
        _Dest->dialogChartData._Mypair._Myval2._Myend = 0i64;
        *_Dest = *(DialogChartData *)(p_Myend - 2);
        *(p_Myend - 2) = 0i64;
        *(p_Myend - 1) = 0i64;
        *p_Myend = 0i64;
      }
      ++_Dest;
      p_Myend += 3;
    }
    while ( p_Myend - 2 != (ChartData **)_Last );
  }
  return _Dest;
}

DialogData *__fastcall std::_Uninitialized_move_al_unchecked1<DialogData *,DialogData *,std::allocator<DialogData>>(
        DialogData *_First,
        DialogData *_Last,
        DialogData *_Dest,
        std::_Wrap_alloc<std::allocator<DialogData> > *_Al)
{
  DialogData *v4; // r9
  DialogData *v5; // r10
  DialogData *i; // rdx

  v4 = _Dest;
  v5 = _Last;
  for ( i = _First; i != v5; ++i )
  {
    if ( v4 )
      DialogData::DialogData(v4, i);
    ++v4;
  }
  return v4;
}

void __fastcall std::vector<int>::vector<int>(std::vector<float> *this, const std::vector<float> *_Right)
{
  unsigned __int64 v4; // rbx
  float *v5; // rax
  float *Myfirst; // rax
  float *v7; // rbx
  size_t v8; // rdi

  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  v4 = _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v5 = std::_Wrap_alloc<std::allocator<float>>::allocate((std::_Wrap_alloc<std::allocator<float> > *)this, v4);
    this->_Mypair._Myval2._Myfirst = v5;
    this->_Mypair._Myval2._Mylast = v5;
    Myfirst = this->_Mypair._Myval2._Myfirst;
    this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[v4];
    v7 = Myfirst;
    v8 = (char *)_Right->_Mypair._Myval2._Mylast - (char *)_Right->_Mypair._Myval2._Myfirst;
    memmove(Myfirst, _Right->_Mypair._Myval2._Myfirst, v8);
    this->_Mypair._Myval2._Mylast = (float *)((char *)v7 + v8);
  }
}

void __fastcall std::vector<ChartData>::vector<ChartData>(
        std::vector<ChartData> *this,
        const std::vector<ChartData> *_Right)
{
  signed __int64 v4; // r8
  unsigned __int64 v5; // rdi
  ChartData *v6; // rax
  std::_Wrap_alloc<std::allocator<ChartData> > *v7; // r9

  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  v4 = (char *)_Right->_Mypair._Myval2._Mylast - (char *)_Right->_Mypair._Myval2._Myfirst;
  v5 = v4 / 56;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( v4 / 56 )
  {
    if ( v5 > 0x492492492492492i64 )
      std::_Xlength_error("vector<T> too long");
    v6 = std::_Wrap_alloc<std::allocator<ChartData>>::allocate(0i64, v4 / 56);
    this->_Mypair._Myval2._Myfirst = v6;
    this->_Mypair._Myval2._Mylast = v6;
    this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[v5];
    this->_Mypair._Myval2._Mylast = std::_Uninitialized_copy_al_unchecked1<ChartData const *,ChartData *,std::allocator<ChartData>>(
                                      _Right->_Mypair._Myval2._Myfirst,
                                      _Right->_Mypair._Myval2._Mylast,
                                      this->_Mypair._Myval2._Myfirst,
                                      v7);
  }
}

void __fastcall std::vector<KeyData>::vector<KeyData>(std::vector<KeyData> *this, const std::vector<KeyData> *_Right)
{
  unsigned __int64 v4; // rdi
  KeyData *v5; // rax
  std::_Wrap_alloc<std::allocator<KeyData> > *v6; // r9

  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  v4 = _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( v4 )
  {
    if ( v4 > 0x3FFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v5 = std::_Wrap_alloc<std::allocator<KeyData>>::allocate((std::_Wrap_alloc<std::allocator<KeyData> > *)this, v4);
    this->_Mypair._Myval2._Myfirst = v5;
    this->_Mypair._Myval2._Mylast = v5;
    this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[v4];
    this->_Mypair._Myval2._Mylast = std::_Uninitialized_copy_al_unchecked1<KeyData const *,KeyData *,std::allocator<KeyData>>(
                                      _Right->_Mypair._Myval2._Myfirst,
                                      _Right->_Mypair._Myval2._Mylast,
                                      v5,
                                      v6);
  }
}

void __fastcall std::vector<std::string>::vector<std::string>(
        std::vector<std::string> *this,
        const std::vector<std::string> *_Right)
{
  unsigned __int64 v4; // rdi
  std::string *v5; // rax
  std::_Wrap_alloc<std::allocator<std::string > > *v6; // r9

  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  v4 = _Right->_Mypair._Myval2._Mylast - _Right->_Mypair._Myval2._Myfirst;
  this->_Mypair._Myval2._Myfirst = 0i64;
  this->_Mypair._Myval2._Mylast = 0i64;
  this->_Mypair._Myval2._Myend = 0i64;
  if ( v4 )
  {
    if ( v4 > 0x7FFFFFFFFFFFFFFi64 )
      std::_Xlength_error("vector<T> too long");
    v5 = std::_Wrap_alloc<std::allocator<std::string>>::allocate(
           (std::_Wrap_alloc<std::allocator<std::string > > *)this,
           v4);
    this->_Mypair._Myval2._Myfirst = v5;
    this->_Mypair._Myval2._Mylast = v5;
    this->_Mypair._Myval2._Myend = &this->_Mypair._Myval2._Myfirst[v4];
    this->_Mypair._Myval2._Mylast = std::_Uninitialized_copy_al_unchecked1<std::string const *,std::string *,std::allocator<std::string>>(
                                      _Right->_Mypair._Myval2._Myfirst,
                                      _Right->_Mypair._Myval2._Mylast,
                                      v5,
                                      v6);
  }
}

void __fastcall DialogData::DialogData(DialogData *this, DialogData *__that)
{
  this->allEditNumData._Mypair._Myval2._Myfirst = 0i64;
  this->allEditNumData._Mypair._Myval2._Mylast = 0i64;
  this->allEditNumData._Mypair._Myval2._Myend = 0i64;
  this->allEditNumData._Mypair._Myval2._Myfirst = __that->allEditNumData._Mypair._Myval2._Myfirst;
  this->allEditNumData._Mypair._Myval2._Mylast = __that->allEditNumData._Mypair._Myval2._Mylast;
  this->allEditNumData._Mypair._Myval2._Myend = __that->allEditNumData._Mypair._Myval2._Myend;
  __that->allEditNumData._Mypair._Myval2._Myfirst = 0i64;
  __that->allEditNumData._Mypair._Myval2._Mylast = 0i64;
  __that->allEditNumData._Mypair._Myval2._Myend = 0i64;
  this->allTextData._Mypair._Myval2._Myfirst = 0i64;
  this->allTextData._Mypair._Myval2._Mylast = 0i64;
  this->allTextData._Mypair._Myval2._Myend = 0i64;
  this->allTextData = __that->allTextData;
  __that->allTextData._Mypair._Myval2._Myfirst = 0i64;
  __that->allTextData._Mypair._Myval2._Mylast = 0i64;
  __that->allTextData._Mypair._Myval2._Myend = 0i64;
  this->allComboIndexData._Mypair._Myval2._Myfirst = 0i64;
  this->allComboIndexData._Mypair._Myval2._Mylast = 0i64;
  this->allComboIndexData._Mypair._Myval2._Myend = 0i64;
  this->allComboIndexData = __that->allComboIndexData;
  __that->allComboIndexData._Mypair._Myval2._Myfirst = 0i64;
  __that->allComboIndexData._Mypair._Myval2._Mylast = 0i64;
  __that->allComboIndexData._Mypair._Myval2._Myend = 0i64;
  this->allButtonIndexData._Mypair._Myval2._Myfirst = 0i64;
  this->allButtonIndexData._Mypair._Myval2._Mylast = 0i64;
  this->allButtonIndexData._Mypair._Myval2._Myend = 0i64;
  this->allButtonIndexData = __that->allButtonIndexData;
  __that->allButtonIndexData._Mypair._Myval2._Myfirst = 0i64;
  __that->allButtonIndexData._Mypair._Myval2._Mylast = 0i64;
  __that->allButtonIndexData._Mypair._Myval2._Myend = 0i64;
}

void __fastcall std::vector<unsigned int>::_Tidy(std::vector<unsigned int> *this)
{
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      (AgKeyboardButton *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall ChartData::~ChartData(ChartData *this)
{
  std::vector<KeyData>::_Tidy(&this->keyData);
  this->RenderColor.__vftable = (OGLEffectVec3_vtbl *)&OGLEffectVec3::`vftable';
}

void __fastcall DialogChartData::~DialogChartData(
        std::vector<ChartData> *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<ChartData> > *a3,
        std::integral_constant<bool,0> a4)
{
  ChartData *Myfirst; // rcx
  std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *v6; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Destroy_range1<std::allocator<ChartData>,ChartData *>(Myfirst, this->_Mypair._Myval2._Mylast, a3, a4);
    std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition>>::deallocate(
      v6,
      (extension::exsound_detail::SoundBankMediaDefinition *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall DialogData::~DialogData(
        DialogData *this,
        __int64 a2,
        std::_Wrap_alloc<std::allocator<std::string > > *a3,
        std::integral_constant<bool,0> a4)
{
  int *Myfirst; // rdx
  int *v6; // rdx
  std::string *v7; // rcx
  std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry> > *v8; // rcx

  Myfirst = this->allButtonIndexData._Mypair._Myval2._Myfirst;
  if ( Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      (AgKeyboardButton *)Myfirst,
      this->allButtonIndexData._Mypair._Myval2._Myend - Myfirst);
    this->allButtonIndexData._Mypair._Myval2._Myfirst = 0i64;
    this->allButtonIndexData._Mypair._Myval2._Mylast = 0i64;
    this->allButtonIndexData._Mypair._Myval2._Myend = 0i64;
  }
  v6 = this->allComboIndexData._Mypair._Myval2._Myfirst;
  if ( v6 )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)this,
      (AgKeyboardButton *)v6,
      this->allComboIndexData._Mypair._Myval2._Myend - v6);
    this->allComboIndexData._Mypair._Myval2._Myfirst = 0i64;
    this->allComboIndexData._Mypair._Myval2._Mylast = 0i64;
    this->allComboIndexData._Mypair._Myval2._Myend = 0i64;
  }
  v7 = this->allTextData._Mypair._Myval2._Myfirst;
  if ( v7 )
  {
    std::_Destroy_range1<std::allocator<std::string>,std::string *>(
      v7,
      this->allTextData._Mypair._Myval2._Mylast,
      a3,
      a4);
    std::_Wrap_alloc<std::allocator<AgDirectory::DirectoryEntry>>::deallocate(
      v8,
      (AgDirectory::DirectoryEntry *)this->allTextData._Mypair._Myval2._Myfirst,
      this->allTextData._Mypair._Myval2._Myend - this->allTextData._Mypair._Myval2._Myfirst);
    this->allTextData._Mypair._Myval2._Myfirst = 0i64;
    this->allTextData._Mypair._Myval2._Mylast = 0i64;
    this->allTextData._Mypair._Myval2._Myend = 0i64;
  }
  if ( this->allEditNumData._Mypair._Myval2._Myfirst )
  {
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      (std::allocator<enum AgKeyboardButton> *)v7,
      (AgKeyboardButton *)this->allEditNumData._Mypair._Myval2._Myfirst,
      this->allEditNumData._Mypair._Myval2._Myend - this->allEditNumData._Mypair._Myval2._Myfirst);
    this->allEditNumData._Mypair._Myval2._Myfirst = 0i64;
    this->allEditNumData._Mypair._Myval2._Mylast = 0i64;
    this->allEditNumData._Mypair._Myval2._Myend = 0i64;
  }
}

void __fastcall std::vector<int>::_Reallocate(std::vector<float> *this, unsigned __int64 _Count)
{
  float *v4; // rsi
  std::allocator<enum AgKeyboardButton> *v5; // rcx
  signed __int64 v6; // rdi

  v4 = std::_Wrap_alloc<std::allocator<float>>::allocate((std::_Wrap_alloc<std::allocator<float> > *)this, _Count);
  memmove(
    v4,
    this->_Mypair._Myval2._Myfirst,
    (char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst);
  v6 = this->_Mypair._Myval2._Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
    std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
      v5,
      (AgKeyboardButton *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v6];
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<ChartData>::_Reallocate(std::vector<ChartData> *this, unsigned __int64 _Count)
{
  ChartData *v4; // rdi
  std::_Wrap_alloc<std::allocator<ChartData> > *v5; // r9
  ChartData *Mylast; // r9
  signed __int64 v7; // rsi

  v4 = std::_Wrap_alloc<std::allocator<ChartData>>::allocate(
         (std::_Wrap_alloc<std::allocator<ChartData> > *)this,
         _Count);
  std::_Uninitialized_move_al_unchecked1<ChartData *,ChartData *,std::allocator<ChartData>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v4,
    v5);
  Mylast = this->_Mypair._Myval2._Mylast;
  v7 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Destroy_range1<std::allocator<ChartData>,ChartData *>(
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Mylast,
      (std::_Wrap_alloc<std::allocator<ChartData> > *)((unsigned __int64)((unsigned __int128)(((char *)this->_Mypair._Myval2._Mylast
                                                                                             - (char *)this->_Mypair._Myval2._Myfirst)
                                                                                            * (__int128)0x4924924924924925i64) >> 64) >> 63),
      (std::integral_constant<bool,0>)Mylast);
    std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition>>::deallocate(
      (std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *)((char *)this->_Mypair._Myval2._Myend
                                                                                               - (char *)this->_Mypair._Myval2._Myfirst),
      (extension::exsound_detail::SoundBankMediaDefinition *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v4[_Count];
  this->_Mypair._Myval2._Mylast = &v4[v7];
  this->_Mypair._Myval2._Myfirst = v4;
}

void __fastcall std::vector<DialogChartData>::_Reallocate(
        std::vector<DialogChartData> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<DialogChartData> > *a4)
{
  DialogChartData *v6; // rbx
  unsigned __int64 v7; // rcx
  ChartData *v8; // rax
  DialogChartData *Mylast; // r9
  signed __int64 v10; // r14

  if ( _Count )
  {
    if ( _Count > 0xAAAAAAAAAAAAAAAi64 )
      std::_Xbad_alloc();
    v7 = 24 * _Count;
    if ( 24 * _Count < 0x1000 )
    {
      v6 = (DialogChartData *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (ChartData *)operator new(v7 + 39);
      v6 = (DialogChartData *)(((unsigned __int64)&v8->keyData._Mypair._Myval2._Myfirst + 7) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].dialogChartData._Mypair._Myval2._Myend = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<DialogChartData *,DialogChartData *,std::allocator<DialogChartData>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  v10 = Mylast - this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    std::_Destroy_range1<std::allocator<DialogChartData>,DialogChartData *>(
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Mylast,
      (std::_Wrap_alloc<std::allocator<DialogChartData> > *)((unsigned __int64)((unsigned __int128)(((char *)this->_Mypair._Myval2._Mylast - (char *)this->_Mypair._Myval2._Myfirst)
                                                                                                  * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64) >> 63),
      (std::integral_constant<bool,0>)Mylast);
    std::allocator<AgJsonNode>::deallocate(
      (std::allocator<AgJsonNode> *)((char *)this->_Mypair._Myval2._Myend - (char *)this->_Mypair._Myval2._Myfirst),
      (AgJsonNode *)this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = &v6[v10];
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<DialogData>::_Reallocate(
        std::vector<DialogData> *this,
        unsigned __int64 _Count,
        __int64 a3,
        std::_Wrap_alloc<std::allocator<DialogData> > *a4)
{
  DialogData *v6; // rdi
  unsigned __int64 v7; // rcx
  int *v8; // rax
  std::_Wrap_alloc<std::allocator<std::string > > *v9; // r8
  std::integral_constant<bool,0> v10; // r9
  DialogData *Mylast; // r15
  DialogData *Myfirst; // rbx
  signed __int64 v13; // rcx
  __int64 v14; // rdx
  __int64 v15; // r12

  if ( _Count )
  {
    if ( _Count > 0x2AAAAAAAAAAAAAAi64 )
      std::_Xbad_alloc();
    v7 = 96 * _Count;
    if ( 96 * _Count < 0x1000 )
    {
      v6 = (DialogData *)operator new(v7);
    }
    else
    {
      if ( v7 + 39 <= v7 )
        std::_Xbad_alloc();
      v8 = (int *)operator new(v7 + 39);
      v6 = (DialogData *)(((unsigned __int64)v8 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
      v6[-1].allButtonIndexData._Mypair._Myval2._Myend = v8;
    }
  }
  else
  {
    v6 = 0i64;
  }
  std::_Uninitialized_move_al_unchecked1<DialogData *,DialogData *,std::allocator<DialogData>>(
    this->_Mypair._Myval2._Myfirst,
    this->_Mypair._Myval2._Mylast,
    v6,
    a4);
  Mylast = this->_Mypair._Myval2._Mylast;
  Myfirst = this->_Mypair._Myval2._Myfirst;
  v13 = (char *)Mylast - (char *)this->_Mypair._Myval2._Myfirst;
  v14 = (unsigned __int128)(v13 * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
  v15 = v13 / 96;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( ; Myfirst != Mylast; ++Myfirst )
      DialogData::~DialogData(Myfirst, v14, v9, v10);
    std::_Wrap_alloc<std::allocator<DialogData>>::deallocate(
      (std::_Wrap_alloc<std::allocator<DialogData> > *)((char *)this->_Mypair._Myval2._Myend
                                                      - (char *)this->_Mypair._Myval2._Myfirst),
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
  }
  this->_Mypair._Myval2._Myend = &v6[_Count];
  this->_Mypair._Myval2._Mylast = &v6[v15];
  this->_Mypair._Myval2._Myfirst = v6;
}

void __fastcall std::vector<int>::_Reserve(std::vector<int> *this, unsigned __int64 _Count)
{
  int *Myend; // r10
  int *Mylast; // r8
  int *Myfirst; // rcx
  __int64 v6; // r8
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // rcx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    Myfirst = this->_Mypair._Myval2._Myfirst;
    v6 = Mylast - Myfirst;
    if ( 0x3FFFFFFFFFFFFFFFi64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = Myend - Myfirst;
    v9 = 0i64;
    if ( 0x3FFFFFFFFFFFFFFFi64 - (v8 >> 1) >= v8 )
      v9 = v8 + (v8 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<int>::_Reallocate((std::vector<float> *)this, v7);
  }
}

void __fastcall std::vector<ChartData>::_Reserve(std::vector<ChartData> *this, unsigned __int64 _Count)
{
  ChartData *Myend; // rcx
  ChartData *Mylast; // r9
  signed __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    v6 = Mylast - this->_Mypair._Myval2._Myfirst;
    if ( 0x492492492492492i64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = (unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x4924924924924925i64) >> 64;
    v9 = 0i64;
    v10 = ((unsigned __int64)v8 >> 63) + (v8 >> 4);
    if ( 0x492492492492492i64 - (v10 >> 1) >= v10 )
      v9 = v10 + (v10 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<ChartData>::_Reallocate(this, v7);
  }
}

void __fastcall std::vector<DialogChartData>::_Reserve(std::vector<DialogChartData> *this, unsigned __int64 _Count)
{
  DialogChartData *Myend; // rcx
  DialogChartData *Mylast; // r9
  signed __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  std::_Wrap_alloc<std::allocator<DialogChartData> > *v11; // r9

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    v6 = Mylast - this->_Mypair._Myval2._Myfirst;
    if ( 0xAAAAAAAAAAAAAAAi64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = (unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v9 = 0i64;
    v10 = ((unsigned __int64)v8 >> 63) + (v8 >> 2);
    v11 = (std::_Wrap_alloc<std::allocator<DialogChartData> > *)(0xAAAAAAAAAAAAAAAi64 - (v10 >> 1));
    if ( (unsigned __int64)v11 >= v10 )
      v9 = v10 + (v10 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<DialogChartData>::_Reallocate(this, v7, v7, v11);
  }
}

void __fastcall std::vector<DialogData>::_Reserve(std::vector<DialogData> *this, unsigned __int64 _Count)
{
  DialogData *Myend; // rcx
  DialogData *Mylast; // r9
  signed __int64 v6; // rdx
  unsigned __int64 v7; // r8
  __int64 v8; // rdx
  unsigned __int64 v9; // rcx
  unsigned __int64 v10; // rdx
  std::_Wrap_alloc<std::allocator<DialogData> > *v11; // r9

  Myend = this->_Mypair._Myval2._Myend;
  Mylast = this->_Mypair._Myval2._Mylast;
  if ( Myend - Mylast < _Count )
  {
    v6 = Mylast - this->_Mypair._Myval2._Myfirst;
    if ( 0x2AAAAAAAAAAAAAAi64 - v6 < _Count )
      std::_Xlength_error("vector<T> too long");
    v7 = v6 + _Count;
    v8 = (unsigned __int128)(((char *)Myend - (char *)this->_Mypair._Myval2._Myfirst) * (__int128)0x2AAAAAAAAAAAAAABi64) >> 64;
    v9 = 0i64;
    v10 = ((unsigned __int64)v8 >> 63) + (v8 >> 4);
    v11 = (std::_Wrap_alloc<std::allocator<DialogData> > *)(0x2AAAAAAAAAAAAAAi64 - (v10 >> 1));
    if ( (unsigned __int64)v11 >= v10 )
      v9 = v10 + (v10 >> 1);
    if ( v9 >= v7 )
      v7 = v9;
    std::vector<DialogData>::_Reallocate(this, v7, v7, v11);
  }
}

void __fastcall std::vector<KeyData>::_Tidy(std::vector<KeyData> *this)
{
  KeyData *Myfirst; // rax
  std::_Wrap_alloc<std::allocator<KeyData> > *i; // rcx

  Myfirst = this->_Mypair._Myval2._Myfirst;
  if ( this->_Mypair._Myval2._Myfirst )
  {
    for ( i = (std::_Wrap_alloc<std::allocator<KeyData> > *)this->_Mypair._Myval2._Mylast;
          Myfirst != (KeyData *)i;
          ++Myfirst )
    {
      Myfirst->BezierPosBack.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
      Myfirst->BezierPosFront.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
      Myfirst->Pos.__vftable = (OGLEffectVec2_vtbl *)&OGLEffectVec2::`vftable';
    }
    std::_Wrap_alloc<std::allocator<KeyData>>::deallocate(
      i,
      this->_Mypair._Myval2._Myfirst,
      this->_Mypair._Myval2._Myend - this->_Mypair._Myval2._Myfirst);
    this->_Mypair._Myval2._Myfirst = 0i64;
    this->_Mypair._Myval2._Mylast = 0i64;
    this->_Mypair._Myval2._Myend = 0i64;
  }
}

float *__fastcall std::_Wrap_alloc<std::allocator<float>>::allocate(
        std::_Wrap_alloc<std::allocator<float> > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rcx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x3FFFFFFFFFFFFFFFi64 )
    std::_Xbad_alloc();
  v3 = 4 * _Count;
  if ( 4 * _Count < 0x1000 )
    return (float *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (float *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

ChartData *__fastcall std::_Wrap_alloc<std::allocator<ChartData>>::allocate(
        std::_Wrap_alloc<std::allocator<ChartData> > *this,
        unsigned __int64 _Count)
{
  unsigned __int64 v3; // rcx
  void *v4; // rax

  if ( !_Count )
    return 0i64;
  if ( _Count > 0x492492492492492i64 )
    std::_Xbad_alloc();
  v3 = 56 * _Count;
  if ( 56 * _Count < 0x1000 )
    return (ChartData *)operator new(v3);
  if ( v3 + 39 <= v3 )
    std::_Xbad_alloc();
  v4 = operator new(v3 + 39);
  *(_QWORD *)((((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64) - 8) = v4;
  return (ChartData *)(((unsigned __int64)v4 + 39) & 0xFFFFFFFFFFFFFFE0ui64);
}

void __fastcall std::_Wrap_alloc<std::allocator<enum extension::SoundConstants::LoadSpec>>::deallocate(
        std::allocator<enum AgKeyboardButton> *this,
        AgKeyboardButton *_Ptr,
        unsigned __int64 _Count)
{
  AgKeyboardButton *v3; // rax
  char *v4; // rdx

  if ( _Count > 0x3FFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 4 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (AgKeyboardButton *)*((_QWORD *)_Ptr - 1);
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

void __fastcall std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition>>::deallocate(
        std::_Wrap_alloc<std::allocator<extension::exsound_detail::SoundBankMediaDefinition> > *this,
        extension::exsound_detail::SoundBankMediaDefinition *_Ptr,
        unsigned __int64 _Count)
{
  extension::exsound_detail::SoundBankMediaDefinition *v3; // rax
  char *v4; // rdx

  if ( _Count > 0x492492492492492i64 )
    invalid_parameter_noinfo_noreturn();
  if ( 56 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = *(extension::exsound_detail::SoundBankMediaDefinition **)&_Ptr[-1].m_bankElementLoopCount;
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

void __fastcall std::allocator<AgJsonNode>::deallocate(
        std::allocator<AgJsonNode> *this,
        AgJsonNode *_Ptr,
        unsigned __int64 _Count)
{
  AgJsonNodeData *m_ptr; // rax
  char *v4; // rdx

  if ( _Count > 0xAAAAAAAAAAAAAAAi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 24 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    m_ptr = _Ptr[-1].m_data.m_ptr;
    if ( m_ptr >= (AgJsonNodeData *)_Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)m_ptr);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (AgJsonNode *)m_ptr;
  }
  operator delete(_Ptr);
}

void __fastcall std::_Wrap_alloc<std::allocator<DialogData>>::deallocate(
        std::_Wrap_alloc<std::allocator<DialogData> > *this,
        DialogData *_Ptr,
        unsigned __int64 _Count)
{
  int *Myend; // rax
  char *v4; // rdx

  if ( _Count > 0x2AAAAAAAAAAAAAAi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 96 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    Myend = _Ptr[-1].allButtonIndexData._Mypair._Myval2._Myend;
    if ( Myend >= (int *)_Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)Myend);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = (DialogData *)Myend;
  }
  operator delete(_Ptr);
}

char *__fastcall Scaleform::GFx::FontDataCompactedGfx::GetName(Scaleform::GFx::FontDataCompactedGfx *this)
{
  return this->CompactedFontValue.Name.Data;
}

__int64 __fastcall EffectData::getEffectType(EffectData *this)
{
  return (unsigned int)this->EffectType;
}

unsigned __int64 __fastcall Scaleform::GFx::AS3::IntervalTimer::GetNextInvokeTime(AgAsyncStreamReader *this)
{
  return this->m_readPosition;
}

EffectData *__fastcall EffectData::getSiblingBack(EffectData *this)
{
  return this->siblingBack;
}

Scaleform::Render::Texture *__fastcall EffectData::getSiblingFront(
        Scaleform::Render::RBGenericImpl::RenderTarget *this)
{
  return this->pTexture.pObject;
}

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

void __fastcall AttractionFieldData::initDialogData(AttractionFieldData *this)
{
  _Mtx_internal_imp_t *p_allDataMutex; // rbx
  int v3; // eax
  int v4; // eax

  p_allDataMutex = (_Mtx_internal_imp_t *)&EffectAppData::getInstance()->allDataMutex;
  v3 = Mtx_lock(p_allDataMutex);
  if ( v3 )
    std::_Throw_C_error(v3);
  ((void (__fastcall *)(AttractionFieldData *, _QWORD, __int64, __int64, int, int, __int64))this->initDialogData)(
    this,
    0i64,
    1i64,
    12i64,
    4,
    3,
    -2i64);
  this->initChartData(this, 0, 5);
  v4 = Mtx_unlock(p_allDataMutex);
  if ( v4 )
    std::_Throw_C_error(v4);
}

void __fastcall AttractionFieldData::initialize(AttractionFieldData *this)
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
  this->EffectType = 5;
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

void __fastcall std::vector<int>::push_back(std::vector<int> *this, int *_Val)
{
  int *Mylast; // rax
  int *Myfirst; // rcx
  __int64 v6; // rdi
  int *v7; // rdx
  int *v8; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || (Myfirst = this->_Mypair._Myval2._Myfirst, Myfirst > _Val) )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<int>::_Reserve(this, 1ui64);
    v8 = this->_Mypair._Myval2._Mylast;
    if ( v8 )
      *v8 = *_Val;
  }
  else
  {
    v6 = _Val - Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<int>::_Reserve(this, 1ui64);
    v7 = this->_Mypair._Myval2._Mylast;
    if ( v7 )
    {
      *v7 = this->_Mypair._Myval2._Myfirst[v6];
      ++this->_Mypair._Myval2._Mylast;
      return;
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall std::vector<DialogChartData>::push_back(
        std::vector<DialogChartData> *this,
        const DialogChartData *_Val)
{
  DialogChartData *Mylast; // rcx
  signed __int64 v5; // rdi
  DialogChartData *v6; // rcx
  DialogChartData *v7; // rcx

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || this->_Mypair._Myval2._Myfirst > _Val )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<DialogChartData>::_Reserve(this, 1ui64);
    v7 = this->_Mypair._Myval2._Mylast;
    if ( v7 )
      std::vector<ChartData>::vector<ChartData>(&v7->dialogChartData, &_Val->dialogChartData);
  }
  else
  {
    v5 = _Val - this->_Mypair._Myval2._Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<DialogChartData>::_Reserve(this, 1ui64);
    v6 = this->_Mypair._Myval2._Mylast;
    if ( v6 )
      std::vector<ChartData>::vector<ChartData>(
        &v6->dialogChartData,
        &this->_Mypair._Myval2._Myfirst[v5].dialogChartData);
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall std::vector<DialogData>::push_back(std::vector<DialogData> *this, const DialogData *_Val)
{
  DialogData *Mylast; // rcx
  signed __int64 v5; // rdi
  DialogData *v6; // rsi
  DialogData *v7; // rdi
  DialogData *v8; // rdi

  Mylast = this->_Mypair._Myval2._Mylast;
  if ( _Val >= Mylast || this->_Mypair._Myval2._Myfirst > _Val )
  {
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<DialogData>::_Reserve(this, 1ui64);
    v8 = this->_Mypair._Myval2._Mylast;
    if ( v8 )
    {
      std::vector<int>::vector<int>(&v8->allEditNumData, &_Val->allEditNumData);
      std::vector<std::string>::vector<std::string>(&v8->allTextData, &_Val->allTextData);
      std::vector<int>::vector<int>(
        (std::vector<float> *)&v8->allComboIndexData,
        (const std::vector<float> *)&_Val->allComboIndexData);
      std::vector<int>::vector<int>(
        (std::vector<float> *)&v8->allButtonIndexData,
        (const std::vector<float> *)&_Val->allButtonIndexData);
    }
  }
  else
  {
    v5 = _Val - this->_Mypair._Myval2._Myfirst;
    if ( Mylast == this->_Mypair._Myval2._Myend )
      std::vector<DialogData>::_Reserve(this, 1ui64);
    v6 = this->_Mypair._Myval2._Mylast;
    v7 = &this->_Mypair._Myval2._Myfirst[v5];
    if ( v6 )
    {
      std::vector<int>::vector<int>(&v6->allEditNumData, &v7->allEditNumData);
      std::vector<std::string>::vector<std::string>(&v6->allTextData, &v7->allTextData);
      std::vector<int>::vector<int>(
        (std::vector<float> *)&v6->allComboIndexData,
        (const std::vector<float> *)&v7->allComboIndexData);
      std::vector<int>::vector<int>(
        (std::vector<float> *)&v6->allButtonIndexData,
        (const std::vector<float> *)&v7->allButtonIndexData);
    }
  }
  ++this->_Mypair._Myval2._Mylast;
}

void __fastcall EffectData::setChild(EffectData *this, EffectData *effectData)
{
  this->child = effectData;
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

void __fastcall EffectData::setEffectType(EffectData *this, int effectType)
{
  this->EffectType = effectType;
}

void __fastcall EffectData::setParent(EffectData *this, EffectData *effectData)
{
  this->parent = effectData;
}

void __fastcall EffectData::setSiblingBack(EffectData *this, EffectData *effectData)
{
  this->siblingBack = effectData;
}

void __fastcall EffectData::setSiblingFront(EffectData *this, EffectData *effectData)
{
  this->siblingFront = effectData;
}

void __fastcall AttractionFieldData::setinitDialogData(AttractionFieldData *this)
{
  _Mtx_internal_imp_t *p_allDataMutex; // rbx
  int v3; // eax
  DialogData *Myfirst; // r8
  std::string *v5; // rcx
  int v6; // eax

  p_allDataMutex = (_Mtx_internal_imp_t *)&EffectAppData::getInstance()->allDataMutex;
  v3 = Mtx_lock(p_allDataMutex);
  if ( v3 )
    std::_Throw_C_error(v3);
  Myfirst = this->AllDialogData._Mypair._Myval2._Myfirst;
  if ( !(this->AllDialogData._Mypair._Myval2._Mylast - Myfirst) )
    std::_Xout_of_range("invalid vector<T> subscript");
  v5 = Myfirst->allTextData._Mypair._Myval2._Myfirst;
  if ( !(Myfirst->allTextData._Mypair._Myval2._Mylast - v5) )
    std::_Xout_of_range("invalid vector<T> subscript");
  std::string::assign(v5, "AttractionField", 0xFui64);
  v6 = Mtx_unlock(p_allDataMutex);
  if ( v6 )
    std::_Throw_C_error(v6);
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

