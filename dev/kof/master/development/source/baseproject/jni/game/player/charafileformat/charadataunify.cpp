#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xxatomic"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/fixmemory.h"
#include "dev/silverware/git/sdk/input/agsdlmappingparser.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/matrix4unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/quat_aos.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogllight.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglcurve.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglsprite.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglrender.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/physicalheapmemory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglfog.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/boolinvec.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/jobmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector3unaligned.h"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/ogleffect.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglshader.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/list"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/boolinvec.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.h"
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
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
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
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector4unaligned.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/atomic"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.h"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/kof/master/development/source/ps4project/baseproject/pcutil/pcdummy.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/quat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglbone.h"
#include "dev/silverware/git/sdk/agvector2.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_vec64.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/silverware/git/sdk/input/agcontroller.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadataunify.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmirror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaprojectdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/cpusequencedataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/soundgroupdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/commanddataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charadamagesettingformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaattackdataformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charahitrectformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charabasestatusformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A02BE
void CharaDataUnify::ReleaseData(); // 0x140180400
long CharaDataUnify::LoadData(const CharaProjectData * pProj, long id, CharaDataUnify::DATA_TYPE type, IBinaryDataLoadListener & loadListener); // 0x140180510//decompilation failure at 1408A02BE!
__int64 __fastcall CharaDataUnify::_binaryDataLoad<CharaActionData>(
        CharaDataUnify *this,
        CharaActionData **pDat,
        CharaProjectData::NAME_INDEX nameIndex,
        IBinaryDataLoadListener *listener)
{
  unsigned __int8 *v8; // rbx
  std::string *DataFilePathIndex; // rax
  char *Ptr; // rcx
  char *v11; // rax
  std::string *v12; // rdx
  CharaActionData *v13; // rax
  unsigned __int64 v14; // rdx
  unsigned __int8 v15; // di
  std::string *v16; // rax
  char *v17; // rcx
  char *v18; // rax
  unsigned int v20; // [rsp+30h] [rbp-49h] BYREF
  void *block; // [rsp+38h] [rbp-41h] BYREF
  void *v22; // [rsp+40h] [rbp-39h]
  __int64 v23; // [rsp+48h] [rbp-31h]
  CharaActionData *v24; // [rsp+50h] [rbp-29h]
  std::string v25; // [rsp+58h] [rbp-21h] BYREF
  std::string result; // [rsp+78h] [rbp-1h] BYREF

  v23 = -2i64;
  v25._Mypair._Myval2._Myres = 15i64;
  v25._Mypair._Myval2._Mysize = 0i64;
  v25._Mypair._Myval2._Bx._Buf[0] = 0;
  v8 = 0i64;
  v22 = 0i64;
  block = 0i64;
  DataFilePathIndex = CharaProjectData::GetDataFilePathIndex(
                        (CharaProjectData *)this->pProjData,
                        &result,
                        this->iProjDataIndex,
                        nameIndex);
  std::string::assign(&v25, DataFilePathIndex);
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v11 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v11 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v11) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v11) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  if ( !v25._Mypair._Myval2._Mysize )
    goto LABEL_41;
  v12 = &v25;
  if ( v25._Mypair._Myval2._Myres >= 0x10 )
    v12 = (std::string *)v25._Mypair._Myval2._Bx._Ptr;
  listener->ReceiveBinaryLoad(listener, (const char *)v12, (unsigned __int8 **)&block, &v20);
  if ( !block )
    goto LABEL_41;
  v8 = (unsigned __int8 *)block;
  v22 = block;
  v13 = (CharaActionData *)operator new(0x50ui64);
  v24 = v13;
  v13->fileHeader = 0i64;
  v13->iReadErrorID = 0;
  v13->__vftable = (CharaActionData_vtbl *)&CharaActionData::`vftable';
  v13->dataHeader = 0i64;
  v13->pActData = 0i64;
  v13->pActNames = 0i64;
  v13->transKeyData.iDataCount = 0;
  v13->transKeyData.pKeys = 0i64;
  v13->soundDataHeader = 0i64;
  v13->pSoundAct = 0i64;
  *pDat = v13;
  if ( v13->ReadBuffer(v13, v8, v20) == 1 )
  {
    v15 = 1;
  }
  else
  {
LABEL_41:
    if ( *pDat )
    {
      ((void (__fastcall *)(CharaActionData *, __int64))(*pDat)->~CharaFileBase)(*pDat, 1i64);
      *pDat = 0i64;
    }
    v16 = &v25;
    if ( v25._Mypair._Myval2._Myres >= 0x10 )
      v16 = (std::string *)v25._Mypair._Myval2._Bx._Ptr;
    _DummyLogging(
      "CharaDataUnify::%s Load error!! [CharaID:%03d] [NameIndex:%d] [File path:%s]",
      "CharaDataUnify::_binaryDataLoad",
      (unsigned int)this->iCharaID,
      (unsigned int)nameIndex,
      v16->_Mypair._Myval2._Bx._Buf);
    v15 = 0;
  }
  if ( v8 )
    operator delete(v8, v14);
  if ( v25._Mypair._Myval2._Myres >= 0x10 )
  {
    v17 = v25._Mypair._Myval2._Bx._Ptr;
    if ( v25._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v25._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v18 = (char *)*((_QWORD *)v25._Mypair._Myval2._Bx._Ptr - 1);
      if ( v18 >= v25._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v25._Mypair._Myval2._Bx._Ptr - v18) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v25._Mypair._Myval2._Bx._Ptr - v18) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v17 = (char *)*((_QWORD *)v25._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v17);
  }
  return v15;
}

__int64 __fastcall CharaDataUnify::_binaryDataLoad<CharaAttackData>(
        CharaDataUnify *this,
        CharaAttackData **pDat,
        CharaProjectData::NAME_INDEX nameIndex,
        IBinaryDataLoadListener *listener)
{
  unsigned __int8 *v6; // rbx
  std::string *DataFilePathIndex; // rax
  char *Ptr; // rcx
  char *v9; // rax
  std::string *v10; // rdx
  CharaAttackData *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // di
  char *v14; // rcx
  char *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  void *block; // [rsp+38h] [rbp-31h] BYREF
  void *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  CharaAttackData *v21; // [rsp+50h] [rbp-19h]
  std::string v22; // [rsp+58h] [rbp-11h] BYREF
  std::string result; // [rsp+78h] [rbp+Fh] BYREF

  v20 = -2i64;
  v22._Mypair._Myval2._Myres = 15i64;
  v22._Mypair._Myval2._Mysize = 0i64;
  v22._Mypair._Myval2._Bx._Buf[0] = 0;
  v6 = 0i64;
  v19 = 0i64;
  block = 0i64;
  DataFilePathIndex = CharaProjectData::GetDataFilePathIndex(
                        (CharaProjectData *)this->pProjData,
                        &result,
                        this->iProjDataIndex,
                        ATTACK_FILE);
  std::string::assign(&v22, DataFilePathIndex);
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  if ( !v22._Mypair._Myval2._Mysize )
    goto LABEL_39;
  v10 = &v22;
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
    v10 = (std::string *)v22._Mypair._Myval2._Bx._Ptr;
  listener->ReceiveBinaryLoad(listener, (const char *)v10, (unsigned __int8 **)&block, &v17);
  if ( !block )
    goto LABEL_39;
  v6 = (unsigned __int8 *)block;
  v19 = block;
  v11 = (CharaAttackData *)operator new(0x30ui64);
  v21 = v11;
  v11->fileHeader = 0i64;
  v11->iReadErrorID = 0;
  v11->__vftable = (CharaAttackData_vtbl *)&CharaAttackData::`vftable';
  v11->dataHeader = 0i64;
  v11->pAtkData = 0i64;
  v11->pAtkNames = 0i64;
  *pDat = v11;
  if ( v11->ReadBuffer(v11, v6, v17) == 1 )
  {
    v13 = 1;
  }
  else
  {
LABEL_39:
    if ( *pDat )
    {
      ((void (__fastcall *)(CharaAttackData *, __int64))(*pDat)->~CharaFileBase)(*pDat, 1i64);
      *pDat = 0i64;
    }
    _DummyLogging("CharaDataUnify::%s Load error!! [CharaID:%03d] [NameIndex:%d] [File path:%s]");
    v13 = 0;
  }
  if ( v6 )
    operator delete(v6, v12);
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = v22._Mypair._Myval2._Bx._Ptr;
    if ( v22._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v22._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= v22._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
  return v13;
}

__int64 __fastcall CharaDataUnify::_binaryDataLoad<CharaBaseStatus>(
        CharaDataUnify *this,
        CharaBaseStatus **pDat,
        CharaProjectData::NAME_INDEX nameIndex,
        IBinaryDataLoadListener *listener)
{
  unsigned __int8 *v6; // rbx
  std::string *DataFilePathIndex; // rax
  char *Ptr; // rcx
  char *v9; // rax
  std::string *v10; // rdx
  CharaBaseStatus *v11; // rdi
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // di
  char *v14; // rcx
  char *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  void *block; // [rsp+38h] [rbp-31h] BYREF
  void *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  CharaBaseStatus *v21; // [rsp+50h] [rbp-19h]
  std::string v22; // [rsp+58h] [rbp-11h] BYREF
  std::string result; // [rsp+78h] [rbp+Fh] BYREF

  v20 = -2i64;
  v22._Mypair._Myval2._Myres = 15i64;
  v22._Mypair._Myval2._Mysize = 0i64;
  v22._Mypair._Myval2._Bx._Buf[0] = 0;
  v6 = 0i64;
  v19 = 0i64;
  block = 0i64;
  DataFilePathIndex = CharaProjectData::GetDataFilePathIndex(
                        (CharaProjectData *)this->pProjData,
                        &result,
                        this->iProjDataIndex,
                        STATUS_FILE);
  std::string::assign(&v22, DataFilePathIndex);
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  if ( !v22._Mypair._Myval2._Mysize )
    goto LABEL_39;
  v10 = &v22;
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
    v10 = (std::string *)v22._Mypair._Myval2._Bx._Ptr;
  listener->ReceiveBinaryLoad(listener, (const char *)v10, (unsigned __int8 **)&block, &v17);
  if ( !block )
    goto LABEL_39;
  v6 = (unsigned __int8 *)block;
  v19 = block;
  v11 = (CharaBaseStatus *)operator new(0xF8ui64);
  v21 = v11;
  v11->fileHeader = 0i64;
  v11->iReadErrorID = 0;
  v11->__vftable = (CharaBaseStatus_vtbl *)&CharaBaseStatus::`vftable';
  memset(&v11->dataHeader, 0, 0xD4ui64);
  v11->pCommonAct = 0i64;
  *pDat = v11;
  if ( v11->ReadBuffer(v11, v6, v17) == 1 )
  {
    v13 = 1;
  }
  else
  {
LABEL_39:
    if ( *pDat )
    {
      ((void (__fastcall *)(CharaBaseStatus *, __int64))(*pDat)->~CharaFileBase)(*pDat, 1i64);
      *pDat = 0i64;
    }
    _DummyLogging("CharaDataUnify::%s Load error!! [CharaID:%03d] [NameIndex:%d] [File path:%s]");
    v13 = 0;
  }
  if ( v6 )
    operator delete(v6, v12);
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = v22._Mypair._Myval2._Bx._Ptr;
    if ( v22._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v22._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= v22._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
  return v13;
}

__int64 __fastcall CharaDataUnify::_binaryDataLoad<CharaDamageSetting>(
        CharaDataUnify *this,
        CharaDamageSetting **pDat,
        CharaProjectData::NAME_INDEX nameIndex,
        IBinaryDataLoadListener *listener)
{
  unsigned __int8 *v6; // rbx
  std::string *DataFilePathIndex; // rax
  char *Ptr; // rcx
  char *v9; // rax
  std::string *v10; // rdx
  CharaDamageSetting *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // di
  char *v14; // rcx
  char *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  void *block; // [rsp+38h] [rbp-31h] BYREF
  void *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  CharaDamageSetting *v21; // [rsp+50h] [rbp-19h]
  std::string v22; // [rsp+58h] [rbp-11h] BYREF
  std::string result; // [rsp+78h] [rbp+Fh] BYREF

  v20 = -2i64;
  v22._Mypair._Myval2._Myres = 15i64;
  v22._Mypair._Myval2._Mysize = 0i64;
  v22._Mypair._Myval2._Bx._Buf[0] = 0;
  v6 = 0i64;
  v19 = 0i64;
  block = 0i64;
  DataFilePathIndex = CharaProjectData::GetDataFilePathIndex(
                        (CharaProjectData *)this->pProjData,
                        &result,
                        this->iProjDataIndex,
                        DAMAGE_FILE);
  std::string::assign(&v22, DataFilePathIndex);
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  if ( !v22._Mypair._Myval2._Mysize )
    goto LABEL_39;
  v10 = &v22;
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
    v10 = (std::string *)v22._Mypair._Myval2._Bx._Ptr;
  listener->ReceiveBinaryLoad(listener, (const char *)v10, (unsigned __int8 **)&block, &v17);
  if ( !block )
    goto LABEL_39;
  v6 = (unsigned __int8 *)block;
  v19 = block;
  v11 = (CharaDamageSetting *)operator new(0x30ui64);
  v21 = v11;
  v11->fileHeader = 0i64;
  v11->iReadErrorID = 0;
  v11->__vftable = (CharaDamageSetting_vtbl *)&CharaDamageSetting::`vftable';
  v11->dataHeader = 0i64;
  v11->pSetting = 0i64;
  v11->pDamageNames = 0i64;
  *pDat = v11;
  if ( v11->ReadBuffer(v11, v6, v17) == 1 )
  {
    v13 = 1;
  }
  else
  {
LABEL_39:
    if ( *pDat )
    {
      ((void (__fastcall *)(CharaDamageSetting *, __int64))(*pDat)->~CharaFileBase)(*pDat, 1i64);
      *pDat = 0i64;
    }
    _DummyLogging("CharaDataUnify::%s Load error!! [CharaID:%03d] [NameIndex:%d] [File path:%s]");
    v13 = 0;
  }
  if ( v6 )
    operator delete(v6, v12);
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = v22._Mypair._Myval2._Bx._Ptr;
    if ( v22._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v22._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= v22._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
  return v13;
}

__int64 __fastcall CharaDataUnify::_binaryDataLoad<CharaHitRect>(
        CharaDataUnify *this,
        CharaHitRect **pDat,
        CharaProjectData::NAME_INDEX nameIndex,
        IBinaryDataLoadListener *listener)
{
  unsigned __int8 *v6; // rbx
  std::string *DataFilePathIndex; // rax
  char *Ptr; // rcx
  char *v9; // rax
  std::string *v10; // rdx
  CharaHitRect *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // di
  char *v14; // rcx
  char *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  void *block; // [rsp+38h] [rbp-31h] BYREF
  void *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  CharaHitRect *v21; // [rsp+50h] [rbp-19h]
  std::string v22; // [rsp+58h] [rbp-11h] BYREF
  std::string result; // [rsp+78h] [rbp+Fh] BYREF

  v20 = -2i64;
  v22._Mypair._Myval2._Myres = 15i64;
  v22._Mypair._Myval2._Mysize = 0i64;
  v22._Mypair._Myval2._Bx._Buf[0] = 0;
  v6 = 0i64;
  v19 = 0i64;
  block = 0i64;
  DataFilePathIndex = CharaProjectData::GetDataFilePathIndex(
                        (CharaProjectData *)this->pProjData,
                        &result,
                        this->iProjDataIndex,
                        RECT_FILE);
  std::string::assign(&v22, DataFilePathIndex);
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  if ( !v22._Mypair._Myval2._Mysize )
    goto LABEL_39;
  v10 = &v22;
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
    v10 = (std::string *)v22._Mypair._Myval2._Bx._Ptr;
  listener->ReceiveBinaryLoad(listener, (const char *)v10, (unsigned __int8 **)&block, &v17);
  if ( !block )
    goto LABEL_39;
  v6 = (unsigned __int8 *)block;
  v19 = block;
  v11 = (CharaHitRect *)operator new(0x28ui64);
  v21 = v11;
  v11->fileHeader = 0i64;
  v11->iReadErrorID = 0;
  v11->__vftable = (CharaHitRect_vtbl *)&CharaHitRect::`vftable';
  v11->dataHeader = 0i64;
  v11->pRect = 0i64;
  *pDat = v11;
  if ( v11->ReadBuffer(v11, v6, v17) == 1 )
  {
    v13 = 1;
  }
  else
  {
LABEL_39:
    if ( *pDat )
    {
      ((void (__fastcall *)(CharaHitRect *, __int64))(*pDat)->~CharaFileBase)(*pDat, 1i64);
      *pDat = 0i64;
    }
    _DummyLogging("CharaDataUnify::%s Load error!! [CharaID:%03d] [NameIndex:%d] [File path:%s]");
    v13 = 0;
  }
  if ( v6 )
    operator delete(v6, v12);
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = v22._Mypair._Myval2._Bx._Ptr;
    if ( v22._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v22._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= v22._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
  return v13;
}

__int64 __fastcall CharaDataUnify::_binaryDataLoad<CharaMaterialSetting>(
        CharaDataUnify *this,
        CharaMaterialSetting **pDat,
        CharaProjectData::NAME_INDEX nameIndex,
        IBinaryDataLoadListener *listener)
{
  unsigned __int8 *v6; // rbx
  std::string *DataFilePathIndex; // rax
  char *Ptr; // rcx
  char *v9; // rax
  std::string *v10; // rdx
  CharaMaterialSetting *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // di
  char *v14; // rcx
  char *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  void *block; // [rsp+38h] [rbp-31h] BYREF
  void *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  CharaMaterialSetting *v21; // [rsp+50h] [rbp-19h]
  std::string v22; // [rsp+58h] [rbp-11h] BYREF
  std::string result; // [rsp+78h] [rbp+Fh] BYREF

  v20 = -2i64;
  v22._Mypair._Myval2._Myres = 15i64;
  v22._Mypair._Myval2._Mysize = 0i64;
  v22._Mypair._Myval2._Bx._Buf[0] = 0;
  v6 = 0i64;
  v19 = 0i64;
  block = 0i64;
  DataFilePathIndex = CharaProjectData::GetDataFilePathIndex(
                        (CharaProjectData *)this->pProjData,
                        &result,
                        this->iProjDataIndex,
                        VERSION_7_MAX);
  std::string::assign(&v22, DataFilePathIndex);
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  if ( !v22._Mypair._Myval2._Mysize )
    goto LABEL_39;
  v10 = &v22;
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
    v10 = (std::string *)v22._Mypair._Myval2._Bx._Ptr;
  listener->ReceiveBinaryLoad(listener, (const char *)v10, (unsigned __int8 **)&block, &v17);
  if ( !block )
    goto LABEL_39;
  v6 = (unsigned __int8 *)block;
  v19 = block;
  v11 = (CharaMaterialSetting *)operator new(0x28ui64);
  v21 = v11;
  v11->fileHeader = 0i64;
  v11->iReadErrorID = 0;
  v11->__vftable = (CharaMaterialSetting_vtbl *)&CharaMaterialSetting::`vftable';
  v11->dataHeader = 0i64;
  v11->pMaterialData = 0i64;
  *pDat = v11;
  if ( v11->ReadBuffer(v11, v6, v17) == 1 )
  {
    v13 = 1;
  }
  else
  {
LABEL_39:
    if ( *pDat )
    {
      ((void (__fastcall *)(CharaMaterialSetting *, __int64))(*pDat)->~CharaFileBase)(*pDat, 1i64);
      *pDat = 0i64;
    }
    _DummyLogging("CharaDataUnify::%s Load error!! [CharaID:%03d] [NameIndex:%d] [File path:%s]");
    v13 = 0;
  }
  if ( v6 )
    operator delete(v6, v12);
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = v22._Mypair._Myval2._Bx._Ptr;
    if ( v22._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v22._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= v22._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
  return v13;
}

__int64 __fastcall CharaDataUnify::_binaryDataLoad<CommandData>(
        CharaDataUnify *this,
        CommandData **pDat,
        CharaProjectData::NAME_INDEX nameIndex,
        IBinaryDataLoadListener *listener)
{
  unsigned __int8 *v6; // rbx
  std::string *DataFilePathIndex; // rax
  char *Ptr; // rcx
  char *v9; // rax
  std::string *v10; // rdx
  CommandData *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // di
  char *v14; // rcx
  char *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  void *block; // [rsp+38h] [rbp-31h] BYREF
  void *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  CommandData *v21; // [rsp+50h] [rbp-19h]
  std::string v22; // [rsp+58h] [rbp-11h] BYREF
  std::string result; // [rsp+78h] [rbp+Fh] BYREF

  v20 = -2i64;
  v22._Mypair._Myval2._Myres = 15i64;
  v22._Mypair._Myval2._Mysize = 0i64;
  v22._Mypair._Myval2._Bx._Buf[0] = 0;
  v6 = 0i64;
  v19 = 0i64;
  block = 0i64;
  DataFilePathIndex = CharaProjectData::GetDataFilePathIndex(
                        (CharaProjectData *)this->pProjData,
                        &result,
                        this->iProjDataIndex,
                        COMMAND_FILE);
  std::string::assign(&v22, DataFilePathIndex);
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  if ( !v22._Mypair._Myval2._Mysize )
    goto LABEL_39;
  v10 = &v22;
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
    v10 = (std::string *)v22._Mypair._Myval2._Bx._Ptr;
  listener->ReceiveBinaryLoad(listener, (const char *)v10, (unsigned __int8 **)&block, &v17);
  if ( !block )
    goto LABEL_39;
  v6 = (unsigned __int8 *)block;
  v19 = block;
  v11 = (CommandData *)operator new(0x50ui64);
  v21 = v11;
  v11->fileHeader = 0i64;
  v11->iReadErrorID = 0;
  v11->__vftable = (CommandData_vtbl *)&CommandData::`vftable';
  *(_QWORD *)&v11->dataHeader.uiDataVersion = 0i64;
  v11->dataHeader.iInputDataCount = 0;
  v11->pSetting = 0i64;
  v11->pCmdData = 0i64;
  v11->pAiCmdInfo = 0i64;
  v11->pSettingNames = 0i64;
  v11->pCmdDataNames = 0i64;
  *pDat = v11;
  if ( v11->ReadBuffer(v11, v6, v17) == 1 )
  {
    v13 = 1;
  }
  else
  {
LABEL_39:
    if ( *pDat )
    {
      ((void (__fastcall *)(CommandData *, __int64))(*pDat)->~CharaFileBase)(*pDat, 1i64);
      *pDat = 0i64;
    }
    _DummyLogging("CharaDataUnify::%s Load error!! [CharaID:%03d] [NameIndex:%d] [File path:%s]");
    v13 = 0;
  }
  if ( v6 )
    operator delete(v6, v12);
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = v22._Mypair._Myval2._Bx._Ptr;
    if ( v22._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v22._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= v22._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
  return v13;
}

__int64 __fastcall CharaDataUnify::_binaryDataLoad<CpuSequenceData>(
        CharaDataUnify *this,
        CpuSequenceData **pDat,
        CharaProjectData::NAME_INDEX nameIndex,
        IBinaryDataLoadListener *listener)
{
  unsigned __int8 *v6; // rbx
  std::string *DataFilePathIndex; // rax
  char *Ptr; // rcx
  char *v9; // rax
  std::string *v10; // rdx
  CpuSequenceData *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // di
  char *v14; // rcx
  char *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  void *block; // [rsp+38h] [rbp-31h] BYREF
  void *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  CpuSequenceData *v21; // [rsp+50h] [rbp-19h]
  std::string v22; // [rsp+58h] [rbp-11h] BYREF
  std::string result; // [rsp+78h] [rbp+Fh] BYREF

  v20 = -2i64;
  v22._Mypair._Myval2._Myres = 15i64;
  v22._Mypair._Myval2._Mysize = 0i64;
  v22._Mypair._Myval2._Bx._Buf[0] = 0;
  v6 = 0i64;
  v19 = 0i64;
  block = 0i64;
  DataFilePathIndex = CharaProjectData::GetDataFilePathIndex(
                        (CharaProjectData *)this->pProjData,
                        &result,
                        this->iProjDataIndex,
                        VERSION_5_MAX);
  std::string::assign(&v22, DataFilePathIndex);
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  if ( !v22._Mypair._Myval2._Mysize )
    goto LABEL_39;
  v10 = &v22;
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
    v10 = (std::string *)v22._Mypair._Myval2._Bx._Ptr;
  listener->ReceiveBinaryLoad(listener, (const char *)v10, (unsigned __int8 **)&block, &v17);
  if ( !block )
    goto LABEL_39;
  v6 = (unsigned __int8 *)block;
  v19 = block;
  v11 = (CpuSequenceData *)operator new(0x68ui64);
  v21 = v11;
  v11->fileHeader = 0i64;
  v11->iReadErrorID = 0;
  v11->__vftable = (CpuSequenceData_vtbl *)&CpuSequenceData::`vftable';
  v11->dataHeader = 0i64;
  *(_QWORD *)&v11->charaFeatureData.fLikeRangeMin = 0i64;
  *(_QWORD *)&v11->charaFeatureData.iChargeRangeFlag = 0i64;
  *(_QWORD *)&v11->charaFeatureData.uiThrowLevel = 0i64;
  *(_QWORD *)&v11->charaFeatureData.iReserveArr[1] = 0i64;
  *(_QWORD *)&v11->charaFeatureData.iReserveArr[3] = 0i64;
  *(_QWORD *)&v11->charaFeatureData.iReserveArr[5] = 0i64;
  v11->charaFeatureData.iReserveArr[7] = 0;
  v11->pSeqData = 0i64;
  v11->pSequenceNames = 0i64;
  *pDat = v11;
  if ( v11->ReadBuffer(v11, v6, v17) == 1 )
  {
    v13 = 1;
  }
  else
  {
LABEL_39:
    if ( *pDat )
    {
      ((void (__fastcall *)(CpuSequenceData *, __int64))(*pDat)->~CharaFileBase)(*pDat, 1i64);
      *pDat = 0i64;
    }
    _DummyLogging("CharaDataUnify::%s Load error!! [CharaID:%03d] [NameIndex:%d] [File path:%s]");
    v13 = 0;
  }
  if ( v6 )
    operator delete(v6, v12);
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = v22._Mypair._Myval2._Bx._Ptr;
    if ( v22._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v22._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= v22._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
  return v13;
}

__int64 __fastcall CharaDataUnify::_binaryDataLoad<SoundGroupData>(
        CharaDataUnify *this,
        SoundGroupData **pDat,
        CharaProjectData::NAME_INDEX nameIndex,
        IBinaryDataLoadListener *listener)
{
  unsigned __int8 *v6; // rbx
  std::string *DataFilePathIndex; // rax
  char *Ptr; // rcx
  char *v9; // rax
  std::string *v10; // rdx
  SoundGroupData *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int8 v13; // di
  char *v14; // rcx
  char *v15; // rax
  unsigned int v17; // [rsp+30h] [rbp-39h] BYREF
  void *block; // [rsp+38h] [rbp-31h] BYREF
  void *v19; // [rsp+40h] [rbp-29h]
  __int64 v20; // [rsp+48h] [rbp-21h]
  SoundGroupData *v21; // [rsp+50h] [rbp-19h]
  std::string v22; // [rsp+58h] [rbp-11h] BYREF
  std::string result; // [rsp+78h] [rbp+Fh] BYREF

  v20 = -2i64;
  v22._Mypair._Myval2._Myres = 15i64;
  v22._Mypair._Myval2._Mysize = 0i64;
  v22._Mypair._Myval2._Bx._Buf[0] = 0;
  v6 = 0i64;
  v19 = 0i64;
  block = 0i64;
  DataFilePathIndex = CharaProjectData::GetDataFilePathIndex(
                        (CharaProjectData *)this->pProjData,
                        &result,
                        this->iProjDataIndex,
                        VERSION_4_MAX);
  std::string::assign(&v22, DataFilePathIndex);
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  if ( !v22._Mypair._Myval2._Mysize )
    goto LABEL_39;
  v10 = &v22;
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
    v10 = (std::string *)v22._Mypair._Myval2._Bx._Ptr;
  listener->ReceiveBinaryLoad(listener, (const char *)v10, (unsigned __int8 **)&block, &v17);
  if ( !block )
    goto LABEL_39;
  v6 = (unsigned __int8 *)block;
  v19 = block;
  v11 = (SoundGroupData *)operator new(0x40ui64);
  v21 = v11;
  v11->fileHeader = 0i64;
  v11->iReadErrorID = 0;
  v11->__vftable = (SoundGroupData_vtbl *)&SoundGroupData::`vftable';
  *(_QWORD *)&v11->dataHeader.uiDataVersion = 0i64;
  *(_QWORD *)&v11->dataHeader.iReserve[1] = 0i64;
  v11->dataHeader.iDataCount = 0;
  v11->pContData = 0i64;
  v11->pContNames = 0i64;
  *pDat = v11;
  if ( v11->ReadBuffer(v11, v6, v17) == 1 )
  {
    v13 = 1;
  }
  else
  {
LABEL_39:
    if ( *pDat )
    {
      ((void (__fastcall *)(SoundGroupData *, __int64))(*pDat)->~CharaFileBase)(*pDat, 1i64);
      *pDat = 0i64;
    }
    _DummyLogging("CharaDataUnify::%s Load error!! [CharaID:%03d] [NameIndex:%d] [File path:%s]");
    v13 = 0;
  }
  if ( v6 )
    operator delete(v6, v12);
  if ( v22._Mypair._Myval2._Myres >= 0x10 )
  {
    v14 = v22._Mypair._Myval2._Bx._Ptr;
    if ( v22._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v22._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v15 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
      if ( v15 >= v22._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v22._Mypair._Myval2._Bx._Ptr - v15) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v14 = (char *)*((_QWORD *)v22._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v14);
  }
  return v13;
}

__int64 __fastcall CharaDataUnify::_binarySoundActionDataLoad<CharaActionData>(
        CharaDataUnify *this,
        CharaActionData **pDat,
        IBinaryDataLoadListener *listener)
{
  unsigned __int8 *v6; // rbx
  std::string *DirectoryPathIndex; // rax
  char *Ptr; // rcx
  char *v9; // rax
  __int64 iProjDataIndex; // rax
  const CharaProjectData *pProjData; // rdx
  const char *v12; // rdx
  unsigned __int64 v13; // r8
  std::string *v14; // rdx
  unsigned __int64 v15; // rdx
  unsigned __int8 v16; // di
  char *v17; // rcx
  char *v18; // rax
  unsigned int size; // [rsp+20h] [rbp-39h] BYREF
  unsigned __int8 *pBuffer; // [rsp+28h] [rbp-31h] BYREF
  unsigned __int8 *v22; // [rsp+30h] [rbp-29h]
  __int64 v23; // [rsp+38h] [rbp-21h]
  std::string v24; // [rsp+40h] [rbp-19h] BYREF
  std::string result; // [rsp+60h] [rbp+7h] BYREF

  v23 = -2i64;
  v24._Mypair._Myval2._Myres = 15i64;
  v6 = 0i64;
  v24._Mypair._Myval2._Mysize = 0i64;
  v24._Mypair._Myval2._Bx._Buf[0] = 0;
  v22 = 0i64;
  pBuffer = 0i64;
  if ( !*pDat )
    goto LABEL_29;
  DirectoryPathIndex = CharaProjectData::GetDirectoryPathIndex(
                         (CharaProjectData *)this->pProjData,
                         &result,
                         this->iProjDataIndex);
  std::string::assign(&v24, DirectoryPathIndex);
  if ( result._Mypair._Myval2._Myres >= 0x10 )
  {
    Ptr = result._Mypair._Myval2._Bx._Ptr;
    if ( result._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (result._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v9 = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
      if ( v9 >= result._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(result._Mypair._Myval2._Bx._Ptr - v9) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      Ptr = (char *)*((_QWORD *)result._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(Ptr);
  }
  if ( !v24._Mypair._Myval2._Mysize )
    goto LABEL_29;
  iProjDataIndex = this->iProjDataIndex;
  pProjData = this->pProjData;
  if ( pProjData->iReadErrorID == 1
    && (int)iProjDataIndex >= 0
    && (unsigned int)iProjDataIndex < pProjData->dataHeader.uiCharaCount )
  {
    v12 = pProjData->pCharaData[iProjDataIndex].pNameData[2];
  }
  else
  {
    v12 = 0i64;
  }
  if ( *v12 )
  {
    v13 = -1i64;
    do
      ++v13;
    while ( v12[v13] );
  }
  else
  {
    v13 = 0i64;
  }
  std::string::append(&v24, v12, v13);
  std::string::append(&v24, ".csac", 5ui64);
  v14 = &v24;
  if ( v24._Mypair._Myval2._Myres >= 0x10 )
    v14 = (std::string *)v24._Mypair._Myval2._Bx._Ptr;
  listener->ReceiveBinaryLoad(listener, (const char *)v14, &pBuffer, &size);
  if ( pBuffer
    && (v6 = pBuffer, v22 = pBuffer, (unsigned int)CharaActionData::ReadSoundActionBuffer(*pDat, pBuffer, size) == 1) )
  {
    v16 = 1;
  }
  else
  {
LABEL_29:
    _DummyLogging("CharaDataUnify::%s Load warning!! [CharaID:%03d] [File path:%s]");
    v16 = 0;
  }
  if ( v6 )
    operator delete(v6, v15);
  if ( v24._Mypair._Myval2._Myres >= 0x10 )
  {
    v17 = v24._Mypair._Myval2._Bx._Ptr;
    if ( v24._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v24._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v18 = (char *)*((_QWORD *)v24._Mypair._Myval2._Bx._Ptr - 1);
      if ( v18 >= v24._Mypair._Myval2._Bx._Ptr )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v24._Mypair._Myval2._Bx._Ptr - v18) < (char *)8 )
        invalid_parameter_noinfo_noreturn();
      if ( (char *)(v24._Mypair._Myval2._Bx._Ptr - v18) > (char *)0x27 )
        invalid_parameter_noinfo_noreturn();
      v17 = (char *)*((_QWORD *)v24._Mypair._Myval2._Bx._Ptr - 1);
    }
    operator delete(v17);
  }
  return v16;
}

void __fastcall BattleSystem::ComboMissionJudge::TermClearInfo::~TermClearInfo(
        std::unique_ptr<unsigned char [0]> *this,
        unsigned __int64 a2)
{
  unsigned __int8 *Myval2; // rcx

  Myval2 = this->_Mypair._Myval2;
  if ( Myval2 )
    operator delete(Myval2, a2);
}

bool __fastcall CharaActionData::IsReadSuccess(SoundGroupData *this)
{
  return this->iReadErrorID == 1;
}

__int64 __fastcall CharaDataUnify::LoadData(
        CharaDataUnify *this,
        const CharaProjectData *pProj,
        int id,
        CharaDataUnify::DATA_TYPE type,
        IBinaryDataLoadListener *loadListener)
{
  int CharaDataIndex; // eax
  __int32 v11; // ebx
  CharaProjectData::NAME_INDEX v12; // er8
  const CharaProjectData *pProjData; // r8
  __int64 iProjDataIndex; // rax
  CharaProjectData::NAME_INDEX v15; // er8
  CharaProjectData::NAME_INDEX v16; // er8
  int BaseCharaID; // eax
  CharaProjectData::NAME_INDEX v18; // er8
  CharaProjectData::NAME_INDEX v19; // er8
  CharaProjectData::NAME_INDEX v20; // er8
  CharaProjectData::NAME_INDEX v21; // er8
  CharaProjectData::NAME_INDEX v22; // er8
  CharaProjectData::NAME_INDEX v23; // er8

  CharaDataUnify::ReleaseData(this);
  if ( pProj->iReadErrorID != 1 )
  {
    this->iReadErrorID = 2;
    return 2i64;
  }
  this->iCharaID = id;
  this->dataType = type;
  CharaDataIndex = CharaProjectData::GetCharaDataIndex((CharaProjectData *)pProj, id);
  this->iProjDataIndex = CharaDataIndex;
  if ( CharaDataIndex < 0 )
  {
    this->iReadErrorID = 3;
    return 3i64;
  }
  this->pProjData = pProj;
  if ( type )
  {
    v11 = type - 1;
    if ( v11 )
    {
      if ( v11 == 1
        && !(unsigned __int8)CharaDataUnify::_binaryDataLoad<CharaActionData>(
                               this,
                               &this->pActData,
                               ACTION_FILE,
                               loadListener) )
      {
        goto LABEL_9;
      }
      goto LABEL_32;
    }
    CharaDataUnify::_binaryDataLoad<CharaActionData>(this, &this->pEffectAct, VERSION_2_MAX, loadListener);
    if ( !(unsigned __int8)CharaDataUnify::_binaryDataLoad<CommandData>(this, &this->pCmdData, v12, loadListener) )
    {
LABEL_11:
      this->iReadErrorID = 10;
      return 10i64;
    }
  }
  else
  {
    if ( !(unsigned __int8)CharaDataUnify::_binaryDataLoad<CharaActionData>(
                             this,
                             &this->pActData,
                             ACTION_FILE,
                             loadListener) )
    {
LABEL_9:
      this->iReadErrorID = 4;
      return 4i64;
    }
    pProjData = this->pProjData;
    iProjDataIndex = this->iProjDataIndex;
    if ( pProjData->iReadErrorID == 1
      && (int)iProjDataIndex >= 0
      && (unsigned int)iProjDataIndex < pProjData->dataHeader.uiCharaCount
      && (pProjData->pCharaData[iProjDataIndex].uiBaseDataFlag & 0x800000) != 0 )
    {
      CharaDataUnify::_binarySoundActionDataLoad<CharaActionData>(this, &this->pActData, loadListener);
    }
    CharaDataUnify::_binaryDataLoad<CharaActionData>(this, &this->pEffectAct, VERSION_2_MAX, loadListener);
    if ( !(unsigned __int8)CharaDataUnify::_binaryDataLoad<CharaBaseStatus>(this, &this->pBaseStatus, v15, loadListener) )
    {
      this->iReadErrorID = 6;
      return 6i64;
    }
    if ( (unsigned int)(this->iCharaID - 148) > 1 )
    {
      BaseCharaID = CharaProjectData::GetBaseCharaID((CharaProjectData *)pProj, this->iCharaID);
      CharaBaseStatus::SetCharacterVitalStatusOverwrite(this->pBaseStatus, BaseCharaID);
    }
    if ( !(unsigned __int8)CharaDataUnify::_binaryDataLoad<CharaMaterialSetting>(
                             this,
                             &this->pMaterialSetting,
                             v16,
                             loadListener) )
    {
      this->iReadErrorID = 13;
      return 13i64;
    }
    if ( !(unsigned __int8)CharaDataUnify::_binaryDataLoad<CharaHitRect>(this, &this->pHitRectData, v18, loadListener) )
    {
      this->iReadErrorID = 7;
      return 7i64;
    }
    if ( !(unsigned __int8)CharaDataUnify::_binaryDataLoad<CharaAttackData>(this, &this->pAtkData, v19, loadListener) )
    {
      this->iReadErrorID = 8;
      return 8i64;
    }
    if ( !(unsigned __int8)CharaDataUnify::_binaryDataLoad<CharaDamageSetting>(
                             this,
                             &this->pDmgSetting,
                             v20,
                             loadListener) )
    {
      this->iReadErrorID = 9;
      return 9i64;
    }
    if ( !(unsigned __int8)CharaDataUnify::_binaryDataLoad<CommandData>(this, &this->pCmdData, v21, loadListener) )
      goto LABEL_11;
    CharaDataUnify::_binaryDataLoad<SoundGroupData>(this, &this->pSoundGroup, v22, loadListener);
    CharaDataUnify::_binaryDataLoad<CpuSequenceData>(this, &this->pCpuSeqData, v23, loadListener);
  }
LABEL_32:
  this->iReadErrorID = 1;
  return 1i64;
}

void __fastcall CharaDataUnify::ReleaseData(CharaDataUnify *this)
{
  CharaActionData *pActData; // rcx
  CharaActionData *pEffectAct; // rcx
  CharaBaseStatus *pBaseStatus; // rcx
  CharaHitRect *pHitRectData; // rcx
  CharaAttackData *pAtkData; // rcx
  CharaDamageSetting *pDmgSetting; // rcx
  CommandData *pCmdData; // rcx
  SoundGroupData *pSoundGroup; // rcx
  CpuSequenceData *pCpuSeqData; // rcx
  CharaMaterialSetting *pMaterialSetting; // rcx

  this->pProjData = 0i64;
  this->iReadErrorID = 0;
  pActData = this->pActData;
  if ( pActData )
  {
    ((void (__fastcall *)(CharaActionData *, __int64))pActData->~CharaFileBase)(pActData, 1i64);
    this->pActData = 0i64;
  }
  pEffectAct = this->pEffectAct;
  if ( pEffectAct )
  {
    ((void (__fastcall *)(CharaActionData *, __int64))pEffectAct->~CharaFileBase)(pEffectAct, 1i64);
    this->pEffectAct = 0i64;
  }
  pBaseStatus = this->pBaseStatus;
  if ( pBaseStatus )
  {
    ((void (__fastcall *)(CharaBaseStatus *, __int64))pBaseStatus->~CharaFileBase)(pBaseStatus, 1i64);
    this->pBaseStatus = 0i64;
  }
  pHitRectData = this->pHitRectData;
  if ( pHitRectData )
  {
    ((void (__fastcall *)(CharaHitRect *, __int64))pHitRectData->~CharaFileBase)(pHitRectData, 1i64);
    this->pHitRectData = 0i64;
  }
  pAtkData = this->pAtkData;
  if ( pAtkData )
  {
    ((void (__fastcall *)(CharaAttackData *, __int64))pAtkData->~CharaFileBase)(pAtkData, 1i64);
    this->pAtkData = 0i64;
  }
  pDmgSetting = this->pDmgSetting;
  if ( pDmgSetting )
  {
    ((void (__fastcall *)(CharaDamageSetting *, __int64))pDmgSetting->~CharaFileBase)(pDmgSetting, 1i64);
    this->pDmgSetting = 0i64;
  }
  pCmdData = this->pCmdData;
  if ( pCmdData )
  {
    ((void (__fastcall *)(CommandData *, __int64))pCmdData->~CharaFileBase)(pCmdData, 1i64);
    this->pCmdData = 0i64;
  }
  pSoundGroup = this->pSoundGroup;
  if ( pSoundGroup )
  {
    ((void (__fastcall *)(SoundGroupData *, __int64))pSoundGroup->~CharaFileBase)(pSoundGroup, 1i64);
    this->pSoundGroup = 0i64;
  }
  pCpuSeqData = this->pCpuSeqData;
  if ( pCpuSeqData )
  {
    ((void (__fastcall *)(CpuSequenceData *, __int64))pCpuSeqData->~CharaFileBase)(pCpuSeqData, 1i64);
    this->pCpuSeqData = 0i64;
  }
  pMaterialSetting = this->pMaterialSetting;
  if ( pMaterialSetting )
  {
    ((void (__fastcall *)(CharaMaterialSetting *, __int64))pMaterialSetting->~CharaFileBase)(pMaterialSetting, 1i64);
    this->pMaterialSetting = 0i64;
  }
}

