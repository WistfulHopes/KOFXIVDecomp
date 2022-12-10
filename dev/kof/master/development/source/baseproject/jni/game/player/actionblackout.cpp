#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectdata.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/chartdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effect/effect.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exthread.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/bilinkable.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vectormath_aos.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/randommt.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/colorholder.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdata/effectappdata.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/mat_aos.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/array"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pccontrolsmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/input/aginputmanager.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/refcountable.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/particledata.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xhash"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exlockable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/asyncjob.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/atomic_int.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actor.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/effect/actoreffect.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectdatalistmanager.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/actionblackout.h"
#include "dev/kof/master/development/source/baseproject/jni/game/effect/effectcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/game/util/fix32.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/bitset"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/kof/master/development/source/ps4project/baseproject/extension/threading/exwaitcondition.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/agstream.h"

const long ciTargetID[2]; // 0x14089FE70
const long ciEffectTargetID[2]; // 0x14089FE78
std::piecewise_construct_t std::piecewise_construct; // 0x14089E3AD
void ActionBlackout::Main(Fix32 addTime); // 0x140173630
void ActionBlackout::RequestBlackout(long targetID, const ActionBlackout::BlackoutReq & req); // 0x1401738B0
void ActionBlackout::ResetRequest(long targetID, long fadeFrame); // 0x140173990
void ActionBlackout::RequestBlackout(const Actor & actor, const CharaActionData::Blackout & data); // 0x140173A10
void ActionBlackout::RequestAkebono(ActionBlackout::BLACKOUT_TYPE type); // 0x140173B90//decompilation failure at 14089FE70!
//decompilation failure at 14089FE78!
//decompilation failure at 14089E3AD!
void __fastcall ActionBlackout::Main(ActionBlackout *this, Fix32 addTime)
{
  Fix32 *p_xNowFrame; // rbx
  int v3; // ebp
  int v4; // er14
  int *p_fadeFrame; // rsi
  Fix32 *v6; // rdi
  int v8; // eax
  __int128 v9; // xmm0
  char v10; // al
  int value; // eax
  int v12; // ecx
  int v13; // ecx
  ActionBlackout::BLACKOUT_TYPE *p_type; // rax
  int v15; // edx
  int v16; // edx
  char v17; // cl
  int v18; // er8
  float v19; // xmm2_4

  p_xNowFrame = &this->data[0].xNowFrame;
  v3 = 0;
  this->iPriTarget = 0;
  v4 = 0;
  p_fadeFrame = &this->reqData[0].fadeFrame;
  v6 = &this->data[0].xNowFrame;
  do
  {
    v8 = *(p_fadeFrame - 7);
    if ( v8 )
    {
      v6[-3].value = v8;
      v6[-2].value = *(p_fadeFrame - 6);
      v6[-1].value = *(p_fadeFrame - 5) << 16;
      v6->value = *(p_fadeFrame - 5) << 16;
      v6[1].value = *p_fadeFrame << 16;
      v6[2].value = *p_fadeFrame << 16;
      v9 = *((_OWORD *)p_fadeFrame - 1);
      LOBYTE(v6[8].value) = 0;
      *(_OWORD *)&v6[3].value = v9;
      v10 = *((_BYTE *)p_fadeFrame + 4);
      BYTE1(v6[8].value) = v10;
      if ( v10 )
      {
        v6[7].value = v6[6].value;
      }
      else if ( v6[1].value )
      {
        v6[7].value = 0;
      }
      else
      {
        v6[7].value = v6[6].value;
      }
      *(p_fadeFrame - 7) = 0;
      *(p_fadeFrame - 5) = 0;
      *((_BYTE *)p_fadeFrame + 4) = 0;
      if ( !v4 )
      {
        value = v6[-2].value;
        if ( value == 7 )
        {
          v12 = 0;
        }
        else
        {
          if ( value != 8 )
            goto LABEL_14;
          v12 = 1;
        }
        ActorEffect::CreateActorEffectAkebono(v12);
      }
    }
LABEL_14:
    ++v4;
    p_fadeFrame += 9;
    v6 += 12;
  }
  while ( v4 < 6 );
  v13 = 0;
  p_type = &this->data[0].type;
  do
  {
    if ( *((_BYTE *)p_type + 41) )
    {
      if ( *((_DWORD *)p_type + 4) )
        goto LABEL_22;
      *(_QWORD *)(p_type - 1) = 0i64;
      *((_DWORD *)p_type + 2) = 0;
    }
    else
    {
      if ( *((_DWORD *)p_type + 2) )
        goto LABEL_22;
      *(_QWORD *)(p_type - 1) = 0i64;
      *((_DWORD *)p_type + 4) = 0;
    }
    *((_BYTE *)p_type + 41) = 0;
LABEL_22:
    if ( v3 < *((_DWORD *)p_type - 1) )
    {
      v3 = *((_DWORD *)p_type - 1);
      this->iPriTarget = v13;
    }
    ++v13;
    p_type += 12;
  }
  while ( v13 < 6 );
  if ( this != (ActionBlackout *)this->reqData )
  {
    do
    {
      v15 = p_xNowFrame[-3].value;
      LOBYTE(p_xNowFrame[8].value) = 1;
      if ( v3 <= v15 || v15 < 4 )
      {
        if ( v15 )
        {
          if ( ((v15 - 1) & 0xFFFFFFF7) != 0 )
          {
            if ( v15 == 7 )
            {
              p_xNowFrame[-3].value = 8;
              v3 = 8;
            }
            p_xNowFrame->value -= addTime.value;
            p_xNowFrame[2].value -= addTime.value;
          }
          else
          {
            p_xNowFrame->value -= 0x10000;
            p_xNowFrame[2].value -= 0x10000;
          }
          if ( p_xNowFrame->value < 0 )
            p_xNowFrame->value = 0;
          if ( p_xNowFrame[2].value < 0 )
            p_xNowFrame[2].value = 0;
          v16 = p_xNowFrame[-3].value;
          if ( v16 == 2 )
          {
            if ( v3 < 5 )
              LOBYTE(p_xNowFrame[8].value) = 0;
          }
          else
          {
            v17 = p_xNowFrame[8].value;
            if ( v16 != 4 )
              v17 = 0;
            LOBYTE(p_xNowFrame[8].value) = v17;
          }
          v18 = p_xNowFrame[1].value;
          if ( v18 )
          {
            v19 = (float)((float)((float)(unsigned __int16)p_xNowFrame[2].value * 0.000015258789)
                        + (float)(p_xNowFrame[2].value >> 16))
                / (float)((float)((float)(unsigned __int16)v18 * 0.000015258789) + (float)(v18 >> 16));
            if ( BYTE1(p_xNowFrame[8].value) )
              *(float *)&p_xNowFrame[7].value = v19 * *(float *)&p_xNowFrame[6].value;
            else
              *(float *)&p_xNowFrame[7].value = *(float *)&p_xNowFrame[6].value
                                              - (float)(v19 * *(float *)&p_xNowFrame[6].value);
          }
        }
        else if ( v3 < 5 )
        {
          LOBYTE(p_xNowFrame[8].value) = 0;
        }
      }
      p_xNowFrame += 12;
    }
    while ( &p_xNowFrame[-3] != (Fix32 *)this->reqData );
  }
}

void __fastcall ActionBlackout::RequestAkebono(ActionBlackout *this, ActionBlackout::BLACKOUT_TYPE type)
{
  ActionBlackout::BlackoutReq req; // [rsp+20h] [rbp-38h] BYREF

  if ( (unsigned int)(this->data[0].type - 7) > 1 )
  {
    req.type = type;
    memset(&req.frame, 0, 25);
    req.attr = COUNTER_HIT;
    ActionBlackout::RequestBlackout(this, 0, &req);
  }
}

void __fastcall ActionBlackout::RequestBlackout(
        ActionBlackout *this,
        const Actor *actor,
        const CharaActionData::Blackout *data)
{
  int iAttr; // er9
  const CharaActionData::Blackout *v4; // r10
  int v7; // er9
  int v8; // er9
  int v9; // er9
  unsigned __int64 v10; // r11
  unsigned __int8 a; // al
  unsigned __int8 b; // r9
  unsigned __int8 g; // r8
  unsigned __int8 r; // dl
  __int64 iPlayerID; // rax
  ActionBlackout::BlackoutReq req; // [rsp+30h] [rbp-38h] BYREF

  iAttr = data->iAttr;
  v4 = data;
  req.color = 0i64;
  if ( iAttr )
  {
    v7 = iAttr - 1;
    if ( v7 )
    {
      v8 = v7 - 1;
      if ( v8 )
      {
        v9 = v8 - 1;
        if ( v9 )
        {
          if ( v9 != 1 )
            return;
          req.attr = THROW_ESCAPE;
        }
        else
        {
          req.attr = CLIMAX_CANCEL;
        }
      }
      else
      {
        req.attr = ADVANCED_CANCEL;
      }
    }
    else
    {
      req.attr = REVERSAL;
    }
    v10 = 0x140000000ui64;
    switch ( data->iType )
    {
      case 0:
        req.type = NONE;
        goto LABEL_18;
      case 1:
        req.type = COUNTER_HIT;
        goto LABEL_18;
      case 2:
        req.type = GUARD_CRASH;
        goto LABEL_18;
      case 3:
        req.type = REVERSAL;
        goto LABEL_18;
      case 4:
        req.type = SUPER_CANCEL;
        goto LABEL_18;
      case 5:
        a = data->rgba.a;
        b = data->rgba.b;
        g = data->rgba.g;
        r = v4->rgba.r;
        req.type = ADVANCED_CANCEL;
        ColorHolder::SetColor(&req.color, r, g, b, a);
        goto LABEL_18;
      case 6:
        req.type = CLIMAX_CANCEL;
LABEL_18:
        req.frame = v4->iFrame;
        req.fadeFrame = v4->iFadeFrame;
        iPlayerID = actor->iPlayerID;
        req.bFadeOut = 0;
        ActionBlackout::RequestBlackout(this, *(_DWORD *)(v10 + 4 * iPlayerID + 9043568), &req);
        break;
      default:
        return;
    }
  }
  else
  {
    ActionBlackout::ResetRequest(this, ciTargetID[actor->iPlayerID], data->iFadeFrame);
  }
}

void __fastcall ActionBlackout::RequestBlackout(
        ActionBlackout *this,
        int targetID,
        const ActionBlackout::BlackoutReq *req)
{
  __int64 v3; // r9
  __int64 v4; // rdx

  v3 = targetID;
  v4 = targetID;
  *(_OWORD *)&this->reqData[v4].attr = *(_OWORD *)&req->attr;
  *(_OWORD *)&this->reqData[v4].color.g = *(_OWORD *)&req->color.g;
  *(_DWORD *)&this->reqData[v4].bFadeOut = *(_DWORD *)&req->bFadeOut;
  if ( (unsigned int)(req->frame - 1) > 0x270E )
    this->reqData[v3].frame = 9999;
  switch ( this->reqData[v3].type )
  {
    case COUNTER_HIT:
      goto LABEL_10;
    case GUARD_CRASH:
LABEL_9:
      this->reqData[v3].color.r = 1.0;
      this->reqData[v3].color.g = 1.0;
      this->reqData[v3].color.b = 1.0;
      this->reqData[v3].color.a = 1.0;
      return;
    case REVERSAL:
LABEL_10:
      *(_QWORD *)&this->reqData[v3].color.r = 0i64;
      this->reqData[v3].color.a = 1.0;
      this->reqData[v3].color.b = 0.0;
      return;
    case SUPER_CANCEL:
      goto LABEL_9;
    case CLIMAX_CANCEL:
      *(_QWORD *)&this->reqData[v3].color.r = 1065353216i64;
      this->reqData[v3].color.a = 1.0;
      this->reqData[v3].color.b = 0.0;
      break;
  }
}

void __fastcall ActionBlackout::ResetRequest(ActionBlackout *this, int targetID, int fadeFrame)
{
  __int64 v3; // r9
  ActionBlackout::BlackoutData *v4; // rdx
  char *v5; // rcx
  ColorHolder color; // xmm0

  v3 = targetID;
  v4 = &this->data[targetID];
  if ( v4->attr && v4->xNowFrame.value )
  {
    if ( fadeFrame > 0 && (unsigned int)(v4->type - 5) <= 1 )
    {
      this->reqData[v3].attr = GUARD_CRASH;
      v5 = (char *)this + 36 * v3;
      *(_QWORD *)(v5 + 292) = (unsigned int)v4->type;
      *((_DWORD *)v5 + 79) = fadeFrame;
      color = v4->color;
      v5[320] = 1;
      *(ColorHolder *)(v5 + 300) = color;
    }
    v4->xNowFrame.value = 0;
  }
}

void __fastcall ColorHolder::SetColor(
        ColorHolder *this,
        unsigned __int8 r,
        unsigned __int8 g,
        unsigned __int8 b,
        unsigned __int8 a)
{
  float v5; // xmm0_4
  float v6; // xmm0_4
  float v7; // xmm0_4

  if ( r )
  {
    if ( r == 0xFF )
      v5 = *(float *)&FLOAT_1_0;
    else
      v5 = (float)r * 0.0039215689;
  }
  else
  {
    v5 = 0.0;
  }
  this->r = v5;
  if ( g )
  {
    if ( g == 0xFF )
      v6 = *(float *)&FLOAT_1_0;
    else
      v6 = (float)g * 0.0039215689;
  }
  else
  {
    v6 = 0.0;
  }
  this->g = v6;
  if ( b )
  {
    if ( b == 0xFF )
      v7 = *(float *)&FLOAT_1_0;
    else
      v7 = (float)b * 0.0039215689;
  }
  else
  {
    v7 = 0.0;
  }
  this->b = v7;
  if ( a )
  {
    if ( a == 0xFF )
      LODWORD(this->a) = FLOAT_1_0;
    else
      this->a = (float)a * 0.0039215689;
  }
  else
  {
    this->a = 0.0;
  }
}

