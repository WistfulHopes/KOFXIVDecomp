#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/globalheapmemory.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/stage/tween.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/filetkn.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndatas.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_sse.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/lib/etc/math.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/variableheapmemorybase.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/kof/master/development/source/ps4project/toolkit/geommath/vector2unaligned.h"
#include "dev/silverware/git/sdk/agmemorystream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/internal/internal_functions.h"
#include "dev/silverware/git/sdk/input/agcontrollerbuttoncomponent.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/deque"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/resourcemanager.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
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
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/vecidx_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/floatinvec.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "dev/silverware/git/sdk/input/agcontrollercomponent.h"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tkndata.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/kof/master/development/source/baseproject/jni/framework/libcommon.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/scalar_cpp/vec_aos.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/kof/master/development/source/baseproject/jni/framework/ag/3rdparty/vectormath/cpp/mat_aos.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/debug/logging.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/memory/heapmemory.h"
#include "dev/kof/master/development/source/baseproject/jni/framework/thread/mutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "dev/kof/master/development/source/baseproject/jni/framework/util/cfile.cpp"
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglinputstream.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/fileutil.cpp"
#include "dev/kof/master/development/source/baseproject/jni/game/stage/fileformat/tknfileutil.cpp"

const char FILE_IDENTIFIER[4]; // 0x1408A0B40
std::piecewise_construct_t std::piecewise_construct; // 0x1408A0B3E
bool loadFileToTkn(const char * filePath, TknFileDataDesc * pOutDesc); // 0x140220FC0
void deleteTknDataDesc(TknFileDataDesc * pTarget); // 0x1402224A0
TknFileDataDesc::TknFileDataDesc(); // 0x140222CE0//decompilation failure at 1408A0B40!
//decompilation failure at 1408A0B3E!
void __fastcall TknFileDataDesc::TknFileDataDesc(TknFileDataDesc *this)
{
  *(_QWORD *)&this->dataVersion = 0i64;
  this->sceneCount = 0;
  this->pScenes = 0i64;
  this->conditionCount = 0;
  this->pConditions = 0i64;
  this->modelCount = 0;
  this->pModels = 0i64;
  this->uvAnimationCount = 0;
  this->pUVAnimations = 0i64;
  this->motionCount = 0;
  this->pMotions = 0i64;
  this->objectCount = 0;
  this->pObjects = 0i64;
  this->eventCount = 0;
  this->pEvents = 0i64;
  this->eventAnimationCount = 0;
  this->pEventAnimations = 0i64;
  this->eventEffectAnimationCount = 0;
  this->pEventEffectAnimations = 0i64;
  this->eventTransCount = 0;
  this->pEventTranslations = 0i64;
  this->eventScriptCount = 0;
  this->pEventScripts = 0i64;
  this->lightCount = 0;
  this->pLights = 0i64;
  this->effectCount = 0;
  this->pEffects = 0i64;
  this->billboardCount = 0;
  this->pBillboard = 0i64;
  this->eventBillboardAnimationCount = 0;
  this->pEventBillboardAnimations = 0i64;
  this->eventSoundActionCount = 0;
  this->pEventSoundActions = 0i64;
  this->bUseReflectionTexture = 0;
  this->pReflectionTextureFilename = 0i64;
  this->pStageModelFilename = 0i64;
  this->pModelFilenames = 0i64;
  this->modelFilenameCount = 0;
  this->pMotionFilenames = 0i64;
  this->motionFilenameCount = 0;
  this->pTextureFilenames = 0i64;
  this->textureFilenameCount = 0;
  this->pEffectFilenames = 0i64;
  this->effectFilenameCount = 0;
  this->pAnotherSettingTextures = 0i64;
  this->anotherSettingTextureCount = 0;
}

void __fastcall deleteTknDataDesc(TknFileDataDesc *pTarget, unsigned __int64 a2)
{
  int v3; // esi
  __int64 v4; // rdi
  TknDataScene *v5; // rcx
  TknDataScene **pScenes; // rcx
  int v7; // esi
  __int64 v8; // rdi
  TknDataEventConditions *v9; // rcx
  TknDataEventConditions **pConditions; // rcx
  int v11; // esi
  __int64 v12; // rdi
  TknDataModel *v13; // rcx
  TknDataModel **pModels; // rcx
  int v15; // esi
  __int64 v16; // rdi
  TknDataUVAnimation *v17; // rcx
  TknDataUVAnimation **pUVAnimations; // rcx
  int v19; // esi
  __int64 v20; // rdi
  TknDataMotion *v21; // rcx
  TknDataMotion **pMotions; // rcx
  int v23; // esi
  __int64 v24; // rdi
  TknDataObject *v25; // rcx
  TknDataObject **pObjects; // rcx
  int v27; // esi
  __int64 v28; // rdi
  TknDataEvent *v29; // rcx
  TknDataEvent **pEvents; // rcx
  int v31; // esi
  __int64 v32; // rdi
  TknDataEventModelAnimation *v33; // rcx
  TknDataEventModelAnimation **pEventAnimations; // rcx
  int v35; // esi
  __int64 v36; // rdi
  TknDataEventEffectAnimation *v37; // rcx
  TknDataEventEffectAnimation **pEventEffectAnimations; // rcx
  int v39; // esi
  __int64 v40; // rdi
  TknDataEventTranslation *v41; // rcx
  TknDataEventTranslation **pEventTranslations; // rcx
  int v43; // esi
  __int64 v44; // rdi
  TknDataEventScript *v45; // rcx
  TknDataEventScript **pEventScripts; // rcx
  int v47; // esi
  __int64 v48; // rdi
  TknDataLight *v49; // rcx
  TknDataLight **pLights; // rcx
  int v51; // esi
  __int64 v52; // rdi
  TknDataEffect *v53; // rcx
  TknDataEffect **pEffects; // rcx
  int v55; // esi
  __int64 v56; // rdi
  TknDataBillboard *v57; // rcx
  TknDataBillboard **pBillboard; // rcx
  int v59; // esi
  __int64 v60; // rdi
  TknDataEventBillboardAnimation *v61; // rcx
  TknDataEventBillboardAnimation **pEventBillboardAnimations; // rcx
  int v63; // esi
  __int64 v64; // rdi
  TknDataEventSound *v65; // rcx
  TknDataEventSound **pEventSoundActions; // rcx
  char *pStageModelFilename; // rcx
  int v68; // esi
  __int64 v69; // rdi
  char *v70; // rcx
  const char **pModelFilenames; // rcx
  int v72; // esi
  __int64 v73; // rdi
  char *v74; // rcx
  const char **pMotionFilenames; // rcx
  int v76; // esi
  __int64 v77; // rdi
  char *v78; // rcx
  const char **pTextureFilenames; // rcx
  int v80; // esi
  __int64 v81; // rdi
  char *v82; // rcx
  const char **pEffectFilenames; // rcx
  int v84; // esi
  __int64 v85; // rdi
  char *textureName; // rcx
  TknFileAnotherSettingTexture *pAnotherSettingTextures; // rcx

  if ( pTarget )
  {
    if ( pTarget->pScenes )
    {
      v3 = 0;
      if ( pTarget->sceneCount > 0 )
      {
        v4 = 0i64;
        do
        {
          v5 = pTarget->pScenes[v4];
          if ( v5 )
          {
            ((void (__fastcall *)(TknDataScene *, __int64))v5->~TknData)(v5, 1i64);
            pTarget->pScenes[v4] = 0i64;
          }
          ++v3;
          ++v4;
        }
        while ( v3 < pTarget->sceneCount );
      }
      pScenes = pTarget->pScenes;
      if ( pScenes )
      {
        operator delete(pScenes, a2);
        pTarget->pScenes = 0i64;
      }
    }
    if ( pTarget->pConditions )
    {
      v7 = 0;
      if ( pTarget->conditionCount > 0 )
      {
        v8 = 0i64;
        do
        {
          v9 = pTarget->pConditions[v8];
          if ( v9 )
          {
            ((void (__fastcall *)(TknDataEventConditions *, __int64))v9->~TknData)(v9, 1i64);
            pTarget->pConditions[v8] = 0i64;
          }
          ++v7;
          ++v8;
        }
        while ( v7 < pTarget->conditionCount );
      }
      pConditions = pTarget->pConditions;
      if ( pConditions )
      {
        operator delete(pConditions, a2);
        pTarget->pConditions = 0i64;
      }
    }
    if ( pTarget->pModels )
    {
      v11 = 0;
      if ( pTarget->modelCount > 0 )
      {
        v12 = 0i64;
        do
        {
          v13 = pTarget->pModels[v12];
          if ( v13 )
          {
            ((void (__fastcall *)(TknDataModel *, __int64))v13->~TknData)(v13, 1i64);
            pTarget->pModels[v12] = 0i64;
          }
          ++v11;
          ++v12;
        }
        while ( v11 < pTarget->modelCount );
      }
      pModels = pTarget->pModels;
      if ( pModels )
      {
        operator delete(pModels, a2);
        pTarget->pModels = 0i64;
      }
    }
    if ( pTarget->pUVAnimations )
    {
      v15 = 0;
      if ( pTarget->uvAnimationCount > 0 )
      {
        v16 = 0i64;
        do
        {
          v17 = pTarget->pUVAnimations[v16];
          if ( v17 )
          {
            ((void (__fastcall *)(TknDataUVAnimation *, __int64))v17->~TknData)(v17, 1i64);
            pTarget->pUVAnimations[v16] = 0i64;
          }
          ++v15;
          ++v16;
        }
        while ( v15 < pTarget->uvAnimationCount );
      }
      pUVAnimations = pTarget->pUVAnimations;
      if ( pUVAnimations )
      {
        operator delete(pUVAnimations, a2);
        pTarget->pUVAnimations = 0i64;
      }
    }
    if ( pTarget->pMotions )
    {
      v19 = 0;
      if ( pTarget->motionCount > 0 )
      {
        v20 = 0i64;
        do
        {
          v21 = pTarget->pMotions[v20];
          if ( v21 )
          {
            ((void (__fastcall *)(TknDataMotion *, __int64))v21->~TknData)(v21, 1i64);
            pTarget->pMotions[v20] = 0i64;
          }
          ++v19;
          ++v20;
        }
        while ( v19 < pTarget->motionCount );
      }
      pMotions = pTarget->pMotions;
      if ( pMotions )
      {
        operator delete(pMotions, a2);
        pTarget->pMotions = 0i64;
      }
    }
    if ( pTarget->pObjects )
    {
      v23 = 0;
      if ( pTarget->objectCount > 0 )
      {
        v24 = 0i64;
        do
        {
          v25 = pTarget->pObjects[v24];
          if ( v25 )
          {
            ((void (__fastcall *)(TknDataObject *, __int64))v25->~TknData)(v25, 1i64);
            pTarget->pObjects[v24] = 0i64;
          }
          ++v23;
          ++v24;
        }
        while ( v23 < pTarget->objectCount );
      }
      pObjects = pTarget->pObjects;
      if ( pObjects )
      {
        operator delete(pObjects, a2);
        pTarget->pObjects = 0i64;
      }
    }
    if ( pTarget->pEvents )
    {
      v27 = 0;
      if ( pTarget->eventCount > 0 )
      {
        v28 = 0i64;
        do
        {
          v29 = pTarget->pEvents[v28];
          if ( v29 )
          {
            ((void (__fastcall *)(TknDataEvent *, __int64))v29->~TknData)(v29, 1i64);
            pTarget->pEvents[v28] = 0i64;
          }
          ++v27;
          ++v28;
        }
        while ( v27 < pTarget->eventCount );
      }
      pEvents = pTarget->pEvents;
      if ( pEvents )
      {
        operator delete(pEvents, a2);
        pTarget->pEvents = 0i64;
      }
    }
    if ( pTarget->pEventAnimations )
    {
      v31 = 0;
      if ( pTarget->eventAnimationCount > 0 )
      {
        v32 = 0i64;
        do
        {
          v33 = pTarget->pEventAnimations[v32];
          if ( v33 )
          {
            ((void (__fastcall *)(TknDataEventModelAnimation *, __int64))v33->~TknData)(v33, 1i64);
            pTarget->pEventAnimations[v32] = 0i64;
          }
          ++v31;
          ++v32;
        }
        while ( v31 < pTarget->eventAnimationCount );
      }
      pEventAnimations = pTarget->pEventAnimations;
      if ( pEventAnimations )
      {
        operator delete(pEventAnimations, a2);
        pTarget->pEventAnimations = 0i64;
      }
    }
    if ( pTarget->pEventEffectAnimations )
    {
      v35 = 0;
      if ( pTarget->eventEffectAnimationCount > 0 )
      {
        v36 = 0i64;
        do
        {
          v37 = pTarget->pEventEffectAnimations[v36];
          if ( v37 )
          {
            ((void (__fastcall *)(TknDataEventEffectAnimation *, __int64))v37->~TknData)(v37, 1i64);
            pTarget->pEventEffectAnimations[v36] = 0i64;
          }
          ++v35;
          ++v36;
        }
        while ( v35 < pTarget->eventEffectAnimationCount );
      }
      pEventEffectAnimations = pTarget->pEventEffectAnimations;
      if ( pEventEffectAnimations )
      {
        operator delete(pEventEffectAnimations, a2);
        pTarget->pEventEffectAnimations = 0i64;
      }
    }
    if ( pTarget->pEventTranslations )
    {
      v39 = 0;
      if ( pTarget->eventTransCount > 0 )
      {
        v40 = 0i64;
        do
        {
          v41 = pTarget->pEventTranslations[v40];
          if ( v41 )
          {
            ((void (__fastcall *)(TknDataEventTranslation *, __int64))v41->~TknData)(v41, 1i64);
            pTarget->pEventTranslations[v40] = 0i64;
          }
          ++v39;
          ++v40;
        }
        while ( v39 < pTarget->eventTransCount );
      }
      pEventTranslations = pTarget->pEventTranslations;
      if ( pEventTranslations )
      {
        operator delete(pEventTranslations, a2);
        pTarget->pEventTranslations = 0i64;
      }
    }
    if ( pTarget->pEventScripts )
    {
      v43 = 0;
      if ( pTarget->eventScriptCount > 0 )
      {
        v44 = 0i64;
        do
        {
          v45 = pTarget->pEventScripts[v44];
          if ( v45 )
          {
            ((void (__fastcall *)(TknDataEventScript *, __int64))v45->~TknData)(v45, 1i64);
            pTarget->pEventScripts[v44] = 0i64;
          }
          ++v43;
          ++v44;
        }
        while ( v43 < pTarget->eventScriptCount );
      }
      pEventScripts = pTarget->pEventScripts;
      if ( pEventScripts )
      {
        operator delete(pEventScripts, a2);
        pTarget->pEventScripts = 0i64;
      }
    }
    if ( pTarget->pLights )
    {
      v47 = 0;
      if ( pTarget->lightCount > 0 )
      {
        v48 = 0i64;
        do
        {
          v49 = pTarget->pLights[v48];
          if ( v49 )
          {
            ((void (__fastcall *)(TknDataLight *, __int64))v49->~TknData)(v49, 1i64);
            pTarget->pLights[v48] = 0i64;
          }
          ++v47;
          ++v48;
        }
        while ( v47 < pTarget->lightCount );
      }
      pLights = pTarget->pLights;
      if ( pLights )
      {
        operator delete(pLights, a2);
        pTarget->pLights = 0i64;
      }
    }
    if ( pTarget->pEffects )
    {
      v51 = 0;
      if ( pTarget->effectCount > 0 )
      {
        v52 = 0i64;
        do
        {
          v53 = pTarget->pEffects[v52];
          if ( v53 )
          {
            ((void (__fastcall *)(TknDataEffect *, __int64))v53->~TknData)(v53, 1i64);
            pTarget->pEffects[v52] = 0i64;
          }
          ++v51;
          ++v52;
        }
        while ( v51 < pTarget->effectCount );
      }
      pEffects = pTarget->pEffects;
      if ( pEffects )
      {
        operator delete(pEffects, a2);
        pTarget->pEffects = 0i64;
      }
    }
    if ( pTarget->pBillboard )
    {
      v55 = 0;
      if ( pTarget->billboardCount > 0 )
      {
        v56 = 0i64;
        do
        {
          v57 = pTarget->pBillboard[v56];
          if ( v57 )
          {
            ((void (__fastcall *)(TknDataBillboard *, __int64))v57->~TknData)(v57, 1i64);
            pTarget->pBillboard[v56] = 0i64;
          }
          ++v55;
          ++v56;
        }
        while ( v55 < pTarget->billboardCount );
      }
      pBillboard = pTarget->pBillboard;
      if ( pBillboard )
      {
        operator delete(pBillboard, a2);
        pTarget->pBillboard = 0i64;
      }
    }
    if ( pTarget->pEventBillboardAnimations )
    {
      v59 = 0;
      if ( pTarget->eventBillboardAnimationCount > 0 )
      {
        v60 = 0i64;
        do
        {
          v61 = pTarget->pEventBillboardAnimations[v60];
          if ( v61 )
          {
            ((void (__fastcall *)(TknDataEventBillboardAnimation *, __int64))v61->~TknData)(v61, 1i64);
            pTarget->pEventBillboardAnimations[v60] = 0i64;
          }
          ++v59;
          ++v60;
        }
        while ( v59 < pTarget->eventBillboardAnimationCount );
      }
      pEventBillboardAnimations = pTarget->pEventBillboardAnimations;
      if ( pEventBillboardAnimations )
      {
        operator delete(pEventBillboardAnimations, a2);
        pTarget->pEventBillboardAnimations = 0i64;
      }
    }
    if ( pTarget->pEventSoundActions )
    {
      v63 = 0;
      if ( pTarget->eventSoundActionCount > 0 )
      {
        v64 = 0i64;
        do
        {
          v65 = pTarget->pEventSoundActions[v64];
          if ( v65 )
          {
            ((void (__fastcall *)(TknDataEventSound *, __int64))v65->~TknData)(v65, 1i64);
            pTarget->pEventSoundActions[v64] = 0i64;
          }
          ++v63;
          ++v64;
        }
        while ( v63 < pTarget->eventSoundActionCount );
      }
      pEventSoundActions = pTarget->pEventSoundActions;
      if ( pEventSoundActions )
      {
        operator delete(pEventSoundActions, a2);
        pTarget->pEventSoundActions = 0i64;
      }
    }
    pStageModelFilename = (char *)pTarget->pStageModelFilename;
    if ( pStageModelFilename )
    {
      operator delete(pStageModelFilename, a2);
      pTarget->pStageModelFilename = 0i64;
    }
    if ( pTarget->pModelFilenames )
    {
      v68 = 0;
      if ( pTarget->modelFilenameCount > 0 )
      {
        v69 = 0i64;
        do
        {
          v70 = (char *)pTarget->pModelFilenames[v69];
          if ( v70 )
          {
            operator delete(v70, a2);
            pTarget->pModelFilenames[v69] = 0i64;
          }
          ++v68;
          ++v69;
        }
        while ( v68 < pTarget->modelFilenameCount );
      }
      pModelFilenames = pTarget->pModelFilenames;
      if ( pModelFilenames )
      {
        operator delete(pModelFilenames, a2);
        pTarget->pModelFilenames = 0i64;
      }
    }
    if ( pTarget->pMotionFilenames )
    {
      v72 = 0;
      if ( pTarget->motionFilenameCount > 0 )
      {
        v73 = 0i64;
        do
        {
          v74 = (char *)pTarget->pMotionFilenames[v73];
          if ( v74 )
          {
            operator delete(v74, a2);
            pTarget->pMotionFilenames[v73] = 0i64;
          }
          ++v72;
          ++v73;
        }
        while ( v72 < pTarget->motionFilenameCount );
      }
      pMotionFilenames = pTarget->pMotionFilenames;
      if ( pMotionFilenames )
      {
        operator delete(pMotionFilenames, a2);
        pTarget->pMotionFilenames = 0i64;
      }
    }
    if ( pTarget->pTextureFilenames )
    {
      v76 = 0;
      if ( pTarget->textureFilenameCount > 0 )
      {
        v77 = 0i64;
        do
        {
          v78 = (char *)pTarget->pTextureFilenames[v77];
          if ( v78 )
          {
            operator delete(v78, a2);
            pTarget->pTextureFilenames[v77] = 0i64;
          }
          ++v76;
          ++v77;
        }
        while ( v76 < pTarget->textureFilenameCount );
      }
      pTextureFilenames = pTarget->pTextureFilenames;
      if ( pTextureFilenames )
      {
        operator delete(pTextureFilenames, a2);
        pTarget->pTextureFilenames = 0i64;
      }
    }
    if ( pTarget->pEffectFilenames )
    {
      v80 = 0;
      if ( pTarget->effectFilenameCount > 0 )
      {
        v81 = 0i64;
        do
        {
          v82 = (char *)pTarget->pEffectFilenames[v81];
          if ( v82 )
          {
            operator delete(v82, a2);
            pTarget->pEffectFilenames[v81] = 0i64;
          }
          ++v80;
          ++v81;
        }
        while ( v80 < pTarget->effectFilenameCount );
      }
      pEffectFilenames = pTarget->pEffectFilenames;
      if ( pEffectFilenames )
      {
        operator delete(pEffectFilenames, a2);
        pTarget->pEffectFilenames = 0i64;
      }
    }
    if ( pTarget->pAnotherSettingTextures )
    {
      v84 = 0;
      if ( pTarget->anotherSettingTextureCount > 0 )
      {
        v85 = 0i64;
        do
        {
          textureName = (char *)pTarget->pAnotherSettingTextures[v85].textureName;
          if ( textureName )
          {
            operator delete(textureName, a2);
            pTarget->pAnotherSettingTextures[v85].textureName = 0i64;
          }
          ++v84;
          ++v85;
        }
        while ( v84 < pTarget->anotherSettingTextureCount );
      }
      pAnotherSettingTextures = pTarget->pAnotherSettingTextures;
      if ( pAnotherSettingTextures )
      {
        operator delete(pAnotherSettingTextures, a2);
        pTarget->pAnotherSettingTextures = 0i64;
      }
    }
    memset(pTarget, 0, sizeof(TknFileDataDesc));
  }
}

char __fastcall loadFileToTkn(const char *filePath, TknFileDataDesc *pOutDesc)
{
  int v4; // edx
  int v5; // er8
  int v6; // er9
  unsigned int v7; // eax
  unsigned __int8 *v8; // rdi
  unsigned __int64 v10; // rdx
  __int64 m_uiPoint; // rdi
  unsigned int m_uiSize; // er14
  unsigned __int8 *m_pucData; // rsi
  int v14; // er15
  int v15; // edx
  int v16; // edx
  unsigned __int64 v17; // rax
  int v18; // er12
  __int64 v19; // rdi
  int v20; // edx
  unsigned __int64 v21; // rax
  int v22; // er12
  __int64 v23; // rdi
  int v24; // edx
  unsigned __int64 v25; // rax
  int v26; // er12
  __int64 v27; // rdi
  int v28; // edx
  unsigned __int64 v29; // rax
  int v30; // er12
  __int64 v31; // rdi
  int v32; // edx
  unsigned __int64 v33; // rax
  int v34; // er12
  __int64 v35; // rdi
  int v36; // edx
  unsigned __int64 v37; // rax
  int v38; // er12
  __int64 v39; // rdi
  int v40; // edx
  unsigned __int64 v41; // rax
  int v42; // er12
  __int64 v43; // rdi
  int v44; // edx
  unsigned __int64 v45; // rax
  int v46; // er12
  __int64 v47; // rdi
  int v48; // edx
  unsigned __int64 v49; // rax
  int v50; // er12
  __int64 v51; // rdi
  int v52; // edx
  unsigned __int64 v53; // rax
  int v54; // er12
  __int64 v55; // rdi
  int v56; // edx
  unsigned __int64 v57; // rax
  int v58; // er12
  __int64 v59; // rdi
  int v60; // edx
  unsigned __int64 v61; // rax
  int v62; // er12
  __int64 v63; // rdi
  int v64; // edx
  unsigned __int64 v65; // rax
  int v66; // er12
  __int64 v67; // rdi
  int v68; // edx
  unsigned __int64 v69; // rax
  int v70; // er12
  __int64 v71; // rdi
  int v72; // edx
  unsigned __int64 v73; // rax
  int v74; // er12
  __int64 v75; // rdi
  int v76; // edx
  unsigned __int64 v77; // rax
  int v78; // er12
  __int64 v79; // rdi
  int v80; // edx
  __int64 v81; // rax
  int v82; // er13
  int v83; // er13
  char *v84; // rax
  const char *v85; // r12
  __int64 v86; // rax
  int v87; // er13
  int v88; // er13
  char *v89; // rax
  const char *v90; // r12
  int v91; // edx
  const char **v92; // rax
  int v93; // edx
  FileUtil::Header v94; // rcx
  __int64 v95; // rax
  int v96; // er13
  int v97; // er13
  char *v98; // rax
  const char *v99; // r12
  unsigned __int64 v100; // rdx
  const char **v101; // rax
  FileUtil::Header v102; // rcx
  __int64 v103; // rax
  int v104; // er13
  int v105; // er13
  char *v106; // rax
  const char *v107; // r12
  const char **v108; // rax
  FileUtil::Header v109; // rcx
  __int64 v110; // rax
  int v111; // er13
  int v112; // er13
  char *v113; // rax
  const char *v114; // r12
  TknFileAnotherSettingTexture *v115; // rax
  bool v116; // cc
  FileUtil::Header v117; // rcx
  char *v118; // r13
  int v119; // edx
  int v120; // edx
  int v121; // edx
  int v122; // eax
  int v123; // edx
  __int64 v124; // rax
  int v125; // er15
  int v126; // er15
  _BYTE *v127; // rax
  _BYTE *v128; // r12
  OGLInputStream pStream; // [rsp+30h] [rbp-19h] BYREF
  int v130; // [rsp+48h] [rbp-1h]
  unsigned __int8 *buf; // [rsp+50h] [rbp+7h] BYREF
  FileUtil::Header pOutHeader; // [rsp+58h] [rbp+Fh] BYREF

  memset(pOutDesc, 0, sizeof(TknFileDataDesc));
  buf = 0i64;
  v7 = CFile::ResourceDataLoaderNew(filePath, v4, v5, v6, &buf);
  v8 = buf;
  if ( !buf )
    return 0;
  pStream.m_pucData = buf;
  pStream.m_uiPoint = 0;
  pStream.m_uiSize = v7;
  pStream.m_uiVersion = 0;
  FileUtil::readHeader(&pStream, &pOutHeader);
  if ( *(_DWORD *)pOutHeader.fileIdentifier == *(_DWORD *)FILE_IDENTIFIER )
  {
    m_uiPoint = pStream.m_uiPoint;
    m_uiSize = pStream.m_uiSize;
    m_pucData = pStream.m_pucData;
    if ( pStream.m_uiSize > pStream.m_uiPoint )
    {
      v14 = pStream.m_pucData[pStream.m_uiPoint] | ((pStream.m_pucData[pStream.m_uiPoint + 1] | ((pStream.m_pucData[pStream.m_uiPoint + 2] | (pStream.m_pucData[pStream.m_uiPoint + 3] << 8)) << 8)) << 8);
      m_uiPoint = pStream.m_uiPoint + 4;
      pStream.m_uiPoint += 4;
    }
    else
    {
      v14 = 0;
    }
    pOutDesc->dataVersion = v14;
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v15 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      m_uiPoint = (unsigned int)(m_uiPoint + 4);
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v15 = 0;
    }
    pOutDesc->idMaxNumber = v15;
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v16 = m_pucData[m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v16 = 0;
    }
    pOutDesc->sceneCount = v16;
    if ( v16 > 0 )
    {
      v17 = 8i64 * v16;
      if ( !is_mul_ok(v16, 8ui64) )
        v17 = -1i64;
      v18 = 0;
      pOutDesc->pScenes = (TknDataScene **)operator new[](v17);
      if ( pOutDesc->sceneCount > 0 )
      {
        v19 = 0i64;
        do
        {
          pOutDesc->pScenes[v19] = TknDataScene::create(&pStream, v14);
          if ( !pOutDesc->pScenes[v19] )
            return 0;
          ++v18;
          ++v19;
        }
        while ( v18 < pOutDesc->sceneCount );
        m_uiSize = pStream.m_uiSize;
        LODWORD(m_uiPoint) = pStream.m_uiPoint;
        m_pucData = pStream.m_pucData;
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v20 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v20 = 0;
    }
    pOutDesc->conditionCount = v20;
    if ( v20 > 0 )
    {
      v21 = 8i64 * v20;
      if ( !is_mul_ok(v20, 8ui64) )
        v21 = -1i64;
      v22 = 0;
      pOutDesc->pConditions = (TknDataEventConditions **)operator new[](v21);
      if ( pOutDesc->conditionCount > 0 )
      {
        v23 = 0i64;
        do
        {
          pOutDesc->pConditions[v23] = TknDataEventConditions::create(&pStream, v14);
          if ( !pOutDesc->pConditions[v23] )
            return 0;
          ++v22;
          ++v23;
        }
        while ( v22 < pOutDesc->conditionCount );
        m_uiSize = pStream.m_uiSize;
        LODWORD(m_uiPoint) = pStream.m_uiPoint;
        m_pucData = pStream.m_pucData;
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v24 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v24 = 0;
    }
    pOutDesc->modelCount = v24;
    if ( v24 > 0 )
    {
      v25 = 8i64 * v24;
      if ( !is_mul_ok(v24, 8ui64) )
        v25 = -1i64;
      v26 = 0;
      pOutDesc->pModels = (TknDataModel **)operator new[](v25);
      if ( pOutDesc->modelCount > 0 )
      {
        v27 = 0i64;
        do
        {
          pOutDesc->pModels[v27] = TknDataModel::create(&pStream, v14);
          if ( !pOutDesc->pModels[v27] )
            return 0;
          ++v26;
          ++v27;
        }
        while ( v26 < pOutDesc->modelCount );
        m_uiSize = pStream.m_uiSize;
        LODWORD(m_uiPoint) = pStream.m_uiPoint;
        m_pucData = pStream.m_pucData;
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v28 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v28 = 0;
    }
    pOutDesc->uvAnimationCount = v28;
    if ( v28 > 0 )
    {
      v29 = 8i64 * v28;
      if ( !is_mul_ok(v28, 8ui64) )
        v29 = -1i64;
      v30 = 0;
      pOutDesc->pUVAnimations = (TknDataUVAnimation **)operator new[](v29);
      if ( pOutDesc->uvAnimationCount > 0 )
      {
        v31 = 0i64;
        do
        {
          pOutDesc->pUVAnimations[v31] = TknDataUVAnimation::create(&pStream, v14);
          if ( !pOutDesc->pUVAnimations[v31] )
            return 0;
          ++v30;
          ++v31;
        }
        while ( v30 < pOutDesc->uvAnimationCount );
        m_uiSize = pStream.m_uiSize;
        LODWORD(m_uiPoint) = pStream.m_uiPoint;
        m_pucData = pStream.m_pucData;
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v32 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v32 = 0;
    }
    pOutDesc->motionCount = v32;
    if ( v32 > 0 )
    {
      v33 = 8i64 * v32;
      if ( !is_mul_ok(v32, 8ui64) )
        v33 = -1i64;
      v34 = 0;
      pOutDesc->pMotions = (TknDataMotion **)operator new[](v33);
      if ( pOutDesc->motionCount > 0 )
      {
        v35 = 0i64;
        do
        {
          pOutDesc->pMotions[v35] = TknDataMotion::create(&pStream, v14);
          if ( !pOutDesc->pMotions[v35] )
            return 0;
          ++v34;
          ++v35;
        }
        while ( v34 < pOutDesc->motionCount );
        m_uiSize = pStream.m_uiSize;
        LODWORD(m_uiPoint) = pStream.m_uiPoint;
        m_pucData = pStream.m_pucData;
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v36 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v36 = 0;
    }
    pOutDesc->objectCount = v36;
    if ( v36 > 0 )
    {
      v37 = 8i64 * v36;
      if ( !is_mul_ok(v36, 8ui64) )
        v37 = -1i64;
      v38 = 0;
      pOutDesc->pObjects = (TknDataObject **)operator new[](v37);
      if ( pOutDesc->objectCount > 0 )
      {
        v39 = 0i64;
        do
        {
          pOutDesc->pObjects[v39] = TknDataObject::create(&pStream, v14);
          if ( !pOutDesc->pObjects[v39] )
            return 0;
          ++v38;
          ++v39;
        }
        while ( v38 < pOutDesc->objectCount );
        m_uiSize = pStream.m_uiSize;
        LODWORD(m_uiPoint) = pStream.m_uiPoint;
        m_pucData = pStream.m_pucData;
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v40 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v40 = 0;
    }
    pOutDesc->eventCount = v40;
    if ( v40 > 0 )
    {
      v41 = 8i64 * v40;
      if ( !is_mul_ok(v40, 8ui64) )
        v41 = -1i64;
      v42 = 0;
      pOutDesc->pEvents = (TknDataEvent **)operator new[](v41);
      if ( pOutDesc->eventCount > 0 )
      {
        v43 = 0i64;
        do
        {
          pOutDesc->pEvents[v43] = TknDataEvent::create(&pStream, v14);
          if ( !pOutDesc->pEvents[v43] )
            return 0;
          ++v42;
          ++v43;
        }
        while ( v42 < pOutDesc->eventCount );
        m_uiSize = pStream.m_uiSize;
        LODWORD(m_uiPoint) = pStream.m_uiPoint;
        m_pucData = pStream.m_pucData;
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v44 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v44 = 0;
    }
    pOutDesc->eventAnimationCount = v44;
    if ( v44 > 0 )
    {
      v45 = 8i64 * v44;
      if ( !is_mul_ok(v44, 8ui64) )
        v45 = -1i64;
      v46 = 0;
      pOutDesc->pEventAnimations = (TknDataEventModelAnimation **)operator new[](v45);
      if ( pOutDesc->eventAnimationCount > 0 )
      {
        v47 = 0i64;
        do
        {
          pOutDesc->pEventAnimations[v47] = TknDataEventModelAnimation::create(&pStream, v14);
          if ( !pOutDesc->pEventAnimations[v47] )
            return 0;
          ++v46;
          ++v47;
        }
        while ( v46 < pOutDesc->eventAnimationCount );
        m_uiSize = pStream.m_uiSize;
        LODWORD(m_uiPoint) = pStream.m_uiPoint;
        m_pucData = pStream.m_pucData;
      }
    }
    if ( v14 >= 102 )
    {
      if ( m_uiSize > (unsigned int)m_uiPoint )
      {
        v48 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
        LODWORD(m_uiPoint) = m_uiPoint + 4;
        pStream.m_uiPoint = m_uiPoint;
      }
      else
      {
        v48 = 0;
      }
      pOutDesc->eventEffectAnimationCount = v48;
      if ( v48 > 0 )
      {
        v49 = 8i64 * v48;
        if ( !is_mul_ok(v48, 8ui64) )
          v49 = -1i64;
        v50 = 0;
        pOutDesc->pEventEffectAnimations = (TknDataEventEffectAnimation **)operator new[](v49);
        if ( pOutDesc->eventEffectAnimationCount > 0 )
        {
          v51 = 0i64;
          do
          {
            pOutDesc->pEventEffectAnimations[v51] = TknDataEventEffectAnimation::create(&pStream, v14);
            if ( !pOutDesc->pEventEffectAnimations[v51] )
              return 0;
            ++v50;
            ++v51;
          }
          while ( v50 < pOutDesc->eventEffectAnimationCount );
          m_uiSize = pStream.m_uiSize;
          LODWORD(m_uiPoint) = pStream.m_uiPoint;
          m_pucData = pStream.m_pucData;
        }
      }
    }
    if ( v14 >= 111 )
    {
      if ( m_uiSize > (unsigned int)m_uiPoint )
      {
        v52 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
        LODWORD(m_uiPoint) = m_uiPoint + 4;
        pStream.m_uiPoint = m_uiPoint;
      }
      else
      {
        v52 = 0;
      }
      pOutDesc->eventBillboardAnimationCount = v52;
      if ( v52 > 0 )
      {
        v53 = 8i64 * v52;
        if ( !is_mul_ok(v52, 8ui64) )
          v53 = -1i64;
        v54 = 0;
        pOutDesc->pEventBillboardAnimations = (TknDataEventBillboardAnimation **)operator new[](v53);
        if ( pOutDesc->eventBillboardAnimationCount > 0 )
        {
          v55 = 0i64;
          do
          {
            pOutDesc->pEventBillboardAnimations[v55] = TknDataEventBillboardAnimation::create(&pStream, v14);
            if ( !pOutDesc->pEventBillboardAnimations[v55] )
              return 0;
            ++v54;
            ++v55;
          }
          while ( v54 < pOutDesc->eventBillboardAnimationCount );
          m_uiSize = pStream.m_uiSize;
          LODWORD(m_uiPoint) = pStream.m_uiPoint;
          m_pucData = pStream.m_pucData;
        }
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v56 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v56 = 0;
    }
    pOutDesc->eventTransCount = v56;
    if ( v56 > 0 )
    {
      v57 = 8i64 * v56;
      if ( !is_mul_ok(v56, 8ui64) )
        v57 = -1i64;
      v58 = 0;
      pOutDesc->pEventTranslations = (TknDataEventTranslation **)operator new[](v57);
      if ( pOutDesc->eventTransCount > 0 )
      {
        v59 = 0i64;
        do
        {
          pOutDesc->pEventTranslations[v59] = TknDataEventTranslation::create(&pStream, v14);
          if ( !pOutDesc->pEventTranslations[v59] )
            return 0;
          ++v58;
          ++v59;
        }
        while ( v58 < pOutDesc->eventTransCount );
        m_uiSize = pStream.m_uiSize;
        LODWORD(m_uiPoint) = pStream.m_uiPoint;
        m_pucData = pStream.m_pucData;
      }
    }
    if ( v14 >= 119 )
    {
      if ( m_uiSize > (unsigned int)m_uiPoint )
      {
        v60 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
        LODWORD(m_uiPoint) = m_uiPoint + 4;
        pStream.m_uiPoint = m_uiPoint;
      }
      else
      {
        v60 = 0;
      }
      pOutDesc->eventScriptCount = v60;
      if ( v60 > 0 )
      {
        v61 = 8i64 * v60;
        if ( !is_mul_ok(v60, 8ui64) )
          v61 = -1i64;
        v62 = 0;
        pOutDesc->pEventScripts = (TknDataEventScript **)operator new[](v61);
        if ( pOutDesc->eventScriptCount > 0 )
        {
          v63 = 0i64;
          do
          {
            pOutDesc->pEventScripts[v63] = TknDataEventScript::create(&pStream, v14);
            if ( !pOutDesc->pEventScripts[v63] )
              return 0;
            ++v62;
            ++v63;
          }
          while ( v62 < pOutDesc->eventScriptCount );
          m_uiSize = pStream.m_uiSize;
          LODWORD(m_uiPoint) = pStream.m_uiPoint;
          m_pucData = pStream.m_pucData;
        }
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v64 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
      pStream.m_uiPoint = m_uiPoint;
    }
    else
    {
      v64 = 0;
    }
    pOutDesc->lightCount = v64;
    if ( v64 > 0 )
    {
      v65 = 8i64 * v64;
      if ( !is_mul_ok(v64, 8ui64) )
        v65 = -1i64;
      v66 = 0;
      pOutDesc->pLights = (TknDataLight **)operator new[](v65);
      if ( pOutDesc->lightCount > 0 )
      {
        v67 = 0i64;
        do
        {
          pOutDesc->pLights[v67] = TknDataLight::create(&pStream, v14);
          if ( !pOutDesc->pLights[v67] )
            return 0;
          ++v66;
          ++v67;
        }
        while ( v66 < pOutDesc->lightCount );
        m_uiSize = pStream.m_uiSize;
        LODWORD(m_uiPoint) = pStream.m_uiPoint;
        m_pucData = pStream.m_pucData;
      }
    }
    if ( v14 >= 102 )
    {
      if ( m_uiSize > (unsigned int)m_uiPoint )
      {
        v68 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
        LODWORD(m_uiPoint) = m_uiPoint + 4;
        pStream.m_uiPoint = m_uiPoint;
      }
      else
      {
        v68 = 0;
      }
      pOutDesc->effectCount = v68;
      if ( v68 > 0 )
      {
        v69 = 8i64 * v68;
        if ( !is_mul_ok(v68, 8ui64) )
          v69 = -1i64;
        v70 = 0;
        pOutDesc->pEffects = (TknDataEffect **)operator new[](v69);
        if ( pOutDesc->effectCount > 0 )
        {
          v71 = 0i64;
          do
          {
            pOutDesc->pEffects[v71] = TknDataEffect::create(&pStream, v14);
            if ( !pOutDesc->pEffects[v71] )
              return 0;
            ++v70;
            ++v71;
          }
          while ( v70 < pOutDesc->effectCount );
          m_uiSize = pStream.m_uiSize;
          LODWORD(m_uiPoint) = pStream.m_uiPoint;
          m_pucData = pStream.m_pucData;
        }
      }
    }
    if ( v14 >= 111 )
    {
      if ( m_uiSize > (unsigned int)m_uiPoint )
      {
        v72 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
        LODWORD(m_uiPoint) = m_uiPoint + 4;
        pStream.m_uiPoint = m_uiPoint;
      }
      else
      {
        v72 = 0;
      }
      pOutDesc->billboardCount = v72;
      if ( v72 > 0 )
      {
        v73 = 8i64 * v72;
        if ( !is_mul_ok(v72, 8ui64) )
          v73 = -1i64;
        v74 = 0;
        pOutDesc->pBillboard = (TknDataBillboard **)operator new[](v73);
        if ( pOutDesc->billboardCount > 0 )
        {
          v75 = 0i64;
          do
          {
            pOutDesc->pBillboard[v75] = TknDataBillboard::create(&pStream, v14);
            if ( !pOutDesc->pBillboard[v75] )
              return 0;
            ++v74;
            ++v75;
          }
          while ( v74 < pOutDesc->billboardCount );
          m_uiSize = pStream.m_uiSize;
          LODWORD(m_uiPoint) = pStream.m_uiPoint;
          m_pucData = pStream.m_pucData;
        }
      }
    }
    if ( v14 >= 125 )
    {
      if ( m_uiSize > (unsigned int)m_uiPoint )
      {
        v76 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
        LODWORD(m_uiPoint) = m_uiPoint + 4;
        pStream.m_uiPoint = m_uiPoint;
      }
      else
      {
        v76 = 0;
      }
      pOutDesc->eventSoundActionCount = v76;
      if ( v76 > 0 )
      {
        v77 = 8i64 * v76;
        if ( !is_mul_ok(v76, 8ui64) )
          v77 = -1i64;
        v78 = 0;
        pOutDesc->pEventSoundActions = (TknDataEventSound **)operator new[](v77);
        if ( pOutDesc->eventSoundActionCount > 0 )
        {
          v79 = 0i64;
          do
          {
            pOutDesc->pEventSoundActions[v79] = TknDataEventSound::create(&pStream, v14);
            if ( !pOutDesc->pEventSoundActions[v79] )
              return 0;
            ++v78;
            ++v79;
          }
          while ( v78 < pOutDesc->eventSoundActionCount );
          m_uiSize = pStream.m_uiSize;
          LODWORD(m_uiPoint) = pStream.m_uiPoint;
          m_pucData = pStream.m_pucData;
        }
      }
    }
    if ( v14 >= 105 )
    {
      if ( m_uiSize > (unsigned int)m_uiPoint )
      {
        v80 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
        LODWORD(m_uiPoint) = m_uiPoint + 4;
      }
      else
      {
        v80 = 0;
      }
      pOutDesc->bUseReflectionTexture = v80 != 0;
      if ( v80 )
      {
        if ( m_uiSize > (unsigned int)m_uiPoint
          && (v81 = (unsigned int)m_uiPoint,
              v82 = (m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8,
              LODWORD(m_uiPoint) = m_uiPoint + 4,
              (v83 = m_pucData[v81] | v82) != 0) )
        {
          v84 = (char *)operator new[](v83 + 1);
          v85 = v84;
          if ( m_uiSize > (unsigned int)m_uiPoint )
          {
            memmove(v84, &m_pucData[(unsigned int)m_uiPoint], v83);
            LODWORD(m_uiPoint) = v83 + m_uiPoint;
          }
          v85[v83] = 0;
        }
        else
        {
          v85 = 0i64;
        }
        pOutDesc->pReflectionTextureFilename = v85;
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint
      && (v86 = (unsigned int)m_uiPoint,
          v87 = (m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8,
          LODWORD(m_uiPoint) = m_uiPoint + 4,
          (v88 = m_pucData[v86] | v87) != 0) )
    {
      v89 = (char *)operator new[](v88 + 1);
      v90 = v89;
      if ( m_uiSize > (unsigned int)m_uiPoint )
      {
        memmove(v89, &m_pucData[(unsigned int)m_uiPoint], v88);
        LODWORD(m_uiPoint) = v88 + m_uiPoint;
      }
      v90[v88] = 0;
    }
    else
    {
      v90 = 0i64;
    }
    pOutDesc->pStageModelFilename = v90;
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v91 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
    }
    else
    {
      v91 = 0;
    }
    pOutDesc->modelFilenameCount = v91;
    if ( v91 > 0 )
    {
      v92 = (const char **)operator new[](saturated_mul(v91, 8ui64));
      v93 = 0;
      pOutDesc->pModelFilenames = v92;
      v130 = 0;
      if ( pOutDesc->modelFilenameCount > 0 )
      {
        v94 = 0i64;
        pOutHeader = 0i64;
        do
        {
          if ( m_uiSize > (unsigned int)m_uiPoint )
          {
            v95 = (unsigned int)m_uiPoint;
            v96 = (m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8;
            LODWORD(m_uiPoint) = m_uiPoint + 4;
            v97 = m_pucData[v95] | v96;
            if ( v97 )
            {
              v98 = (char *)operator new[](v97 + 1);
              v99 = v98;
              if ( m_uiSize > (unsigned int)m_uiPoint )
              {
                memmove(v98, &m_pucData[(unsigned int)m_uiPoint], v97);
                LODWORD(m_uiPoint) = v97 + m_uiPoint;
              }
              v93 = v130;
              v99[v97] = 0;
              v94 = pOutHeader;
              goto LABEL_225;
            }
            v94 = pOutHeader;
          }
          v99 = 0i64;
LABEL_225:
          *(const char **)((char *)pOutDesc->pModelFilenames + *(_QWORD *)&v94) = v99;
          if ( !*(const char **)((char *)pOutDesc->pModelFilenames + *(_QWORD *)&v94) )
            return 0;
          ++v93;
          *(_QWORD *)&v94 += 8i64;
          v130 = v93;
          pOutHeader = v94;
        }
        while ( v93 < pOutDesc->modelFilenameCount );
      }
    }
    if ( m_uiSize > (unsigned int)m_uiPoint )
    {
      v100 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
      LODWORD(m_uiPoint) = m_uiPoint + 4;
    }
    else
    {
      v100 = 0i64;
    }
    pOutDesc->motionFilenameCount = v100;
    if ( (int)v100 > 0 )
    {
      v101 = (const char **)operator new[](saturated_mul((int)v100, 8ui64));
      v100 = 0i64;
      pOutDesc->pMotionFilenames = v101;
      v130 = 0;
      if ( pOutDesc->motionFilenameCount > 0 )
      {
        v102 = 0i64;
        pOutHeader = 0i64;
        do
        {
          if ( m_uiSize > (unsigned int)m_uiPoint )
          {
            v103 = (unsigned int)m_uiPoint;
            v104 = (m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8;
            LODWORD(m_uiPoint) = m_uiPoint + 4;
            v105 = m_pucData[v103] | v104;
            if ( v105 )
            {
              v106 = (char *)operator new[](v105 + 1);
              v107 = v106;
              if ( m_uiSize > (unsigned int)m_uiPoint )
              {
                memmove(v106, &m_pucData[(unsigned int)m_uiPoint], v105);
                LODWORD(m_uiPoint) = v105 + m_uiPoint;
              }
              LODWORD(v100) = v130;
              v107[v105] = 0;
              v102 = pOutHeader;
              goto LABEL_240;
            }
            v102 = pOutHeader;
          }
          v107 = 0i64;
LABEL_240:
          *(const char **)((char *)pOutDesc->pMotionFilenames + *(_QWORD *)&v102) = v107;
          if ( !*(const char **)((char *)pOutDesc->pMotionFilenames + *(_QWORD *)&v102) )
            return 0;
          v100 = (unsigned int)(v100 + 1);
          *(_QWORD *)&v102 += 8i64;
          v130 = v100;
          pOutHeader = v102;
        }
        while ( (int)v100 < pOutDesc->motionFilenameCount );
      }
    }
    if ( v14 < 102
      || (m_uiSize > (unsigned int)m_uiPoint ? (v100 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8),
                                                LODWORD(m_uiPoint) = m_uiPoint + 4) : (v100 = 0i64),
          (pOutDesc->effectFilenameCount = v100, (int)v100 <= 0)
       || (v108 = (const char **)operator new[](saturated_mul((int)v100, 8ui64)),
           v100 = 0i64,
           pOutDesc->pEffectFilenames = v108,
           v130 = 0,
           pOutDesc->effectFilenameCount <= 0)) )
    {
LABEL_258:
      if ( v14 < 200 )
      {
        if ( m_uiSize > (unsigned int)m_uiPoint )
        {
          v100 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
          LODWORD(m_uiPoint) = m_uiPoint + 4;
        }
        else
        {
          v100 = 0i64;
        }
        pOutDesc->anotherSettingTextureCount = v100;
        if ( (int)v100 > 0 )
        {
          v115 = (TknFileAnotherSettingTexture *)operator new[](saturated_mul((int)v100, 0x18ui64));
          v116 = pOutDesc->anotherSettingTextureCount <= 0;
          pOutDesc->pAnotherSettingTextures = v115;
          v130 = 0;
          if ( !v116 )
          {
            v117 = 0i64;
            pOutHeader = 0i64;
            do
            {
              v118 = (char *)pOutDesc->pAnotherSettingTextures + *(_QWORD *)&v117;
              if ( m_uiSize > (unsigned int)m_uiPoint )
              {
                v119 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
                LODWORD(m_uiPoint) = m_uiPoint + 4;
              }
              else
              {
                v119 = 0;
              }
              *(_DWORD *)v118 = v119;
              if ( m_uiSize > (unsigned int)m_uiPoint )
              {
                v120 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
                LODWORD(m_uiPoint) = m_uiPoint + 4;
              }
              else
              {
                v120 = 0;
              }
              *((_DWORD *)v118 + 1) = v120;
              if ( m_uiSize > (unsigned int)m_uiPoint )
              {
                v121 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
                LODWORD(m_uiPoint) = m_uiPoint + 4;
              }
              else
              {
                v121 = 0;
              }
              switch ( v121 )
              {
                case 1:
                  v122 = 5;
                  break;
                case 2:
                  v122 = 3;
                  break;
                case 3:
                  v122 = 4;
                  break;
                case 4:
                  v122 = 9;
                  break;
                case 5:
                  v122 = 1;
                  break;
                case 6:
                  v122 = 2;
                  break;
                case 7:
                  v122 = 6;
                  break;
                case 8:
                  v122 = 7;
                  break;
                case 9:
                  v122 = 8;
                  break;
                default:
                  v122 = 0;
                  break;
              }
              *((_DWORD *)v118 + 2) = v122;
              if ( m_uiSize > (unsigned int)m_uiPoint )
              {
                v123 = m_pucData[(unsigned int)m_uiPoint] | ((m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8);
                LODWORD(m_uiPoint) = m_uiPoint + 4;
              }
              else
              {
                v123 = 0;
              }
              *((_DWORD *)v118 + 3) = v123;
              if ( m_uiSize > (unsigned int)m_uiPoint
                && (v124 = (unsigned int)m_uiPoint,
                    v125 = (m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8,
                    LODWORD(m_uiPoint) = m_uiPoint + 4,
                    (v126 = m_pucData[v124] | v125) != 0) )
              {
                v127 = operator new[](v126 + 1);
                v128 = v127;
                if ( m_uiSize > (unsigned int)m_uiPoint )
                {
                  memmove(v127, &m_pucData[(unsigned int)m_uiPoint], v126);
                  LODWORD(m_uiPoint) = v126 + m_uiPoint;
                }
                v128[v126] = 0;
              }
              else
              {
                v128 = 0i64;
              }
              v100 = (unsigned int)(v130 + 1);
              v117 = (FileUtil::Header)(*(_QWORD *)&pOutHeader + 24i64);
              *((_QWORD *)v118 + 2) = v128;
              v130 = v100;
              pOutHeader = v117;
            }
            while ( (int)v100 < pOutDesc->anotherSettingTextureCount );
          }
        }
      }
      operator delete(buf, v100);
      return 1;
    }
    v109 = 0i64;
    pOutHeader = 0i64;
    while ( 1 )
    {
      if ( m_uiSize > (unsigned int)m_uiPoint )
      {
        v110 = (unsigned int)m_uiPoint;
        v111 = (m_pucData[(unsigned int)(m_uiPoint + 1)] | ((m_pucData[(unsigned int)(m_uiPoint + 2)] | (m_pucData[(unsigned int)(m_uiPoint + 3)] << 8)) << 8)) << 8;
        LODWORD(m_uiPoint) = m_uiPoint + 4;
        v112 = m_pucData[v110] | v111;
        if ( v112 )
        {
          v113 = (char *)operator new[](v112 + 1);
          v114 = v113;
          if ( m_uiSize > (unsigned int)m_uiPoint )
          {
            memmove(v113, &m_pucData[(unsigned int)m_uiPoint], v112);
            LODWORD(m_uiPoint) = v112 + m_uiPoint;
          }
          LODWORD(v100) = v130;
          v114[v112] = 0;
          v109 = pOutHeader;
          goto LABEL_256;
        }
        v109 = pOutHeader;
      }
      v114 = 0i64;
LABEL_256:
      *(const char **)((char *)pOutDesc->pEffectFilenames + *(_QWORD *)&v109) = v114;
      if ( !*(const char **)((char *)pOutDesc->pEffectFilenames + *(_QWORD *)&v109) )
        return 0;
      v100 = (unsigned int)(v100 + 1);
      *(_QWORD *)&v109 += 8i64;
      v130 = v100;
      pOutHeader = v109;
      if ( (int)v100 >= pOutDesc->effectFilenameCount )
        goto LABEL_258;
    }
  }
  operator delete(v8, v10);
  return 0;
}

