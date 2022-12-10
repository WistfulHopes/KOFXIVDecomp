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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charaactiondataformat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charafilebase.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/materialshowcontrol.h"
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
#include "dev/kof/master/development/source/baseproject/jni/game/player/charafileformat/charamaterialsettingformat.h"
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
#include "dev/kof/master/development/source/baseproject/jni/framework/ogl/oglmodel.cpp"

std::piecewise_construct_t std::piecewise_construct; // 0x1408A05BF
void MaterialShowControl::SetDefaultMaterialData(const CharaActionData::Setting::Type::Material & data); // 0x14019BF40
void MaterialShowControl::SetDefaultMaterialAll(long iCAngle); // 0x14019C030
void MaterialShowControl::CreateBaseModelShadow(); // 0x14019C130
void MaterialShowControl::ChangeMaterialVisible(bool bVisible, OGLModel * pModel, long iCAngle, long flag); // 0x14019C400
void MaterialShowControl::SetMianMaskChange(OGLModel * pModel, long iCAngle, const CharaActionData::Exclusive::Type::Mian & mianMaskData); // 0x14019C4A0
void MaterialShowControl::CreateMaterialIndex(long modelID, OGLModel * pModel, const CharaMaterialSetting * pData); // 0x14019C5F0
void MaterialShowControl::SetMaterialVisible(const CharaActionData::Setting::Type::Material & material, long iCAngle); // 0x14019C710
void MaterialShowControl::CheckMaterialGroupData(const CharaActionData::Setting::Type::Material & material, long iCAngle); // 0x14019C8D0//decompilation failure at 1408A05BF!
void __fastcall MaterialShowControl::ChangeMaterialVisible(
        MaterialShowControl *this,
        bool bVisible,
        OGLModel *pModel,
        int iCAngle)
{
  int v4; // er11
  unsigned __int8 *p_uiMaterialID_L; // r10
  unsigned __int8 v8; // al
  MaterialShowControl::MaterialIndexList *v9; // rcx
  __int64 iModelID; // rax
  __int64 iIndex; // rdx

  if ( pModel )
  {
    v4 = 0;
    if ( this->iDataCount > 0 )
    {
      p_uiMaterialID_L = &this->defaultMaterialData[0].uiMaterialID_L;
      do
      {
        if ( (p_uiMaterialID_L[3] & 4) != 0 )
        {
          if ( iCAngle )
            v8 = *p_uiMaterialID_L;
          else
            v8 = p_uiMaterialID_L[1];
          if ( v8 < 0x40u )
          {
            v9 = &this->ListData[v8];
            if ( v9 )
            {
              iModelID = v9->iModelID;
              if ( (int)iModelID >= 0 )
              {
                iIndex = v9->iIndex;
                if ( (int)iIndex >= 0 && pModel == this->pModelList[iModelID] && pModel->m_ucMaterialCount > (int)iIndex )
                  pModel->m_bMaterialVisible[iIndex] = bVisible;
              }
            }
          }
        }
        ++v4;
        p_uiMaterialID_L += 12;
      }
      while ( v4 < this->iDataCount );
    }
  }
}

void __fastcall MaterialShowControl::CheckMaterialGroupData(
        MaterialShowControl *this,
        const CharaActionData::Setting::Type::Material *material,
        int iCAngle)
{
  int iDataCount; // er10
  int v4; // ebx
  unsigned __int8 *p_uiMaterialID_L; // r9
  unsigned __int8 v9; // al
  MaterialShowControl::MaterialIndexList *v10; // rcx
  __int64 iModelID; // r8
  __int64 iIndex; // r10
  bool v13; // dl
  __int64 iMianMaskType; // rax
  OGLModel *v15; // r8

  iDataCount = this->iDataCount;
  v4 = 0;
  if ( this->iDataCount > 0 )
  {
    p_uiMaterialID_L = &this->defaultMaterialData[0].uiMaterialID_L;
    do
    {
      if ( material->iGroupID == *(_DWORD *)(p_uiMaterialID_L + 7) && v4 < iDataCount )
      {
        v9 = iCAngle ? *p_uiMaterialID_L : p_uiMaterialID_L[1];
        if ( v9 < 0x40u )
        {
          v10 = &this->ListData[v9];
          if ( v10 )
          {
            iModelID = v10->iModelID;
            iIndex = v10->iIndex;
            v13 = *(p_uiMaterialID_L - 1) != 2;
            if ( (p_uiMaterialID_L[3] & 2) != 0 )
            {
              iMianMaskType = this->iMianMaskType;
              v13 = (int)iMianMaskType >= 0 && this->iMianMaskCount > 0 && v4 == this->iMianMaskIndex[iMianMaskType];
            }
            if ( (int)iModelID >= 0 && (int)iIndex >= 0 )
            {
              v15 = this->pModelList[iModelID];
              if ( v15 )
              {
                if ( material->uiShow )
                  v13 = material->uiShow != 2;
                if ( v15->m_ucMaterialCount > (int)iIndex )
                  v15->m_bMaterialVisible[iIndex] = v13;
              }
            }
          }
        }
      }
      iDataCount = this->iDataCount;
      ++v4;
      p_uiMaterialID_L += 12;
    }
    while ( v4 < this->iDataCount );
  }
}

void __fastcall MaterialShowControl::CreateBaseModelShadow(MaterialShowControl *this)
{
  __int64 v2; // rsi
  OGLModel **v3; // r13
  OGLModel *v4; // rdi
  unsigned __int8 v5; // al
  unsigned __int8 *v6; // rbx
  unsigned __int8 j; // al
  __int64 v8; // rcx
  int v9; // ebp
  unsigned __int8 *v10; // rsi
  __int64 v11; // r14
  OGLMaterial *v12; // r15
  unsigned __int64 v13; // rdx
  OGLModel **pModelList; // rsi
  __int64 v15; // r14
  int v16; // er12
  OGLModel *v17; // rdi
  unsigned __int8 m_ucMaterialCount; // al
  unsigned __int8 *v19; // rax
  unsigned __int8 v20; // cl
  unsigned __int8 *i; // rbx
  __int64 v22; // rax
  int v23; // er8
  unsigned __int8 *p_uiMaterialID_R; // rdx
  __int64 v25; // rax
  MaterialShowControl::MaterialIndexList *v26; // rcx
  __int64 iIndex; // rcx
  __int64 v28; // rax
  MaterialShowControl::MaterialIndexList *v29; // rcx
  __int64 v30; // rcx
  int v31; // ebp
  unsigned __int8 *v32; // rsi
  __int64 v33; // r14
  OGLMaterial *m_pMaterial; // r15
  unsigned __int64 v35; // rdx
  __int64 v36; // [rsp+60h] [rbp+8h]
  __int64 v37; // [rsp+60h] [rbp+8h]
  OGLModel **v38; // [rsp+68h] [rbp+10h]

  if ( this->iDataCount > 0 )
  {
    pModelList = this->pModelList;
    v15 = 24i64;
    v38 = this->pModelList;
    v37 = 24i64;
    v16 = 0;
    do
    {
      v17 = *pModelList;
      if ( *pModelList )
      {
        m_ucMaterialCount = v17->m_ucMaterialCount;
        if ( m_ucMaterialCount )
        {
          v19 = (unsigned __int8 *)operator new[](m_ucMaterialCount);
          v20 = 0;
          for ( i = v19; v20 < v17->m_ucMaterialCount; i[v22] = 1 )
            v22 = v20++;
          v23 = 0;
          if ( this->iDataCount > 0 )
          {
            p_uiMaterialID_R = &this->defaultMaterialData[0].uiMaterialID_R;
            do
            {
              v25 = *(p_uiMaterialID_R - 1);
              if ( (unsigned int)v25 < 0x40 )
              {
                v26 = &this->ListData[v25];
                if ( v26 )
                {
                  if ( v26->iModelID == v16 )
                  {
                    iIndex = v26->iIndex;
                    if ( (int)iIndex >= 0 && (int)iIndex < v17->m_ucMaterialCount )
                      i[iIndex] = 0;
                  }
                }
              }
              v28 = *p_uiMaterialID_R;
              if ( (unsigned int)v28 < 0x40 )
              {
                v29 = &this->ListData[v28];
                if ( v29 )
                {
                  if ( v29->iModelID == v16 )
                  {
                    v30 = v29->iIndex;
                    if ( (int)v30 >= 0 && (int)v30 < v17->m_ucMaterialCount )
                      i[v30] = 0;
                  }
                }
              }
              ++v23;
              p_uiMaterialID_R += 12;
            }
            while ( v23 < this->iDataCount );
          }
          v31 = 0;
          if ( v17->m_ucMaterialCount )
          {
            v32 = i;
            v33 = 0i64;
            do
            {
              m_pMaterial = v17->m_pMaterial;
              if ( strstr((const char *)m_pMaterial[v33].m_cName, "_HIR_")
                || strstr((const char *)m_pMaterial[v33].m_cName, "_ALP_") )
              {
                *v32 = 0;
              }
              ++v31;
              ++v33;
              ++v32;
            }
            while ( v31 < v17->m_ucMaterialCount );
            pModelList = v38;
            v15 = v37;
          }
          OGLModel::createBaseModelShadow(v17, i);
          if ( i )
            operator delete(i, v35);
        }
      }
      ++pModelList;
      ++v16;
      --v15;
      v38 = pModelList;
      v37 = v15;
    }
    while ( v15 );
  }
  else
  {
    v2 = 24i64;
    v3 = this->pModelList;
    v36 = 24i64;
    do
    {
      v4 = *v3;
      if ( *v3 )
      {
        v5 = v4->m_ucMaterialCount;
        if ( v5 )
        {
          v6 = (unsigned __int8 *)operator new[](v5);
          for ( j = 0; j < v4->m_ucMaterialCount; v6[v8] = 1 )
            v8 = j++;
          v9 = 0;
          if ( v4->m_ucMaterialCount )
          {
            v10 = v6;
            v11 = 0i64;
            do
            {
              v12 = v4->m_pMaterial;
              if ( strstr((const char *)v12[v11].m_cName, "_HIR_") || strstr((const char *)v12[v11].m_cName, "_ALP_") )
                *v10 = 0;
              ++v9;
              ++v11;
              ++v10;
            }
            while ( v9 < v4->m_ucMaterialCount );
            v2 = v36;
          }
          OGLModel::createBaseModelShadow(v4, v6);
          if ( v6 )
            operator delete(v6, v13);
        }
      }
      ++v3;
      v36 = --v2;
    }
    while ( v2 );
  }
}

void __fastcall MaterialShowControl::CreateMaterialIndex(
        MaterialShowControl *this,
        int modelID,
        OGLModel *pModel,
        const CharaMaterialSetting *pData)
{
  int v7; // edi
  int *p_iIndex; // r11
  __int64 v9; // rbp
  CharaMaterialSetting::MaterialSettingData *pMaterialData; // rax
  const char *cMaterialName; // rbx
  unsigned __int8 m_ucMaterialCount; // r10
  unsigned __int8 v13; // r9

  if ( (unsigned int)modelID <= 0x17 )
  {
    if ( pModel )
    {
      if ( pData )
      {
        if ( pModel->m_pMaterial )
        {
          v7 = 0;
          this->pModelList[modelID] = pModel;
          if ( pData->dataHeader.iDataCount > 0 )
          {
            p_iIndex = &this->ListData[0].iIndex;
            v9 = 0i64;
            do
            {
              pMaterialData = pData->pMaterialData;
              if ( pMaterialData[v9].iModelID == modelID )
              {
                cMaterialName = pMaterialData[v9].cMaterialName;
                if ( cMaterialName )
                {
                  m_ucMaterialCount = pModel->m_ucMaterialCount;
                  v13 = 0;
                  if ( m_ucMaterialCount )
                  {
                    while ( strcmp(cMaterialName, (const char *)pModel->m_pMaterial[v13].m_cName) )
                    {
                      if ( ++v13 >= m_ucMaterialCount )
                        goto LABEL_14;
                    }
                    *p_iIndex = v13;
                    *(p_iIndex - 1) = modelID;
                  }
                }
              }
LABEL_14:
              ++v7;
              ++v9;
              p_iIndex += 2;
            }
            while ( v7 < pData->dataHeader.iDataCount );
          }
        }
      }
    }
  }
}

void __fastcall MaterialShowControl::SetDefaultMaterialAll(MaterialShowControl *this, int iCAngle)
{
  int iDataCount; // eax
  int v3; // er10
  unsigned __int8 *p_uiMaterialID_R; // r9
  int iModelID; // er11
  bool v8; // dl
  unsigned __int8 v9; // al
  MaterialShowControl::MaterialIndexList *v10; // rcx
  __int64 iMianMaskType; // rax
  OGLModel *v12; // r11
  MaterialShowControl::MaterialIndexList v13; // [rsp+0h] [rbp-18h]

  iDataCount = this->iDataCount;
  v3 = 0;
  if ( this->iDataCount > 0 )
  {
    p_uiMaterialID_R = &this->defaultMaterialData[0].uiMaterialID_R;
    do
    {
      iModelID = -1;
      v8 = 0;
      v13.iIndex = -1;
      if ( v3 < iDataCount )
      {
        v9 = iCAngle ? *(p_uiMaterialID_R - 1) : *p_uiMaterialID_R;
        if ( v9 < 0x40u )
        {
          v10 = &this->ListData[v9];
          if ( v10 )
          {
            iModelID = v10->iModelID;
            v8 = *(p_uiMaterialID_R - 2) != 2;
            v13 = *v10;
            if ( (p_uiMaterialID_R[2] & 2) != 0 )
            {
              iMianMaskType = this->iMianMaskType;
              v8 = (int)iMianMaskType >= 0 && this->iMianMaskCount > 0 && v3 == this->iMianMaskIndex[iMianMaskType];
            }
          }
        }
      }
      if ( v13.iIndex >= 0 && iModelID >= 0 )
      {
        v12 = this->pModelList[iModelID];
        if ( v12 )
        {
          if ( v12->m_ucMaterialCount > v13.iIndex )
            v12->m_bMaterialVisible[v13.iIndex] = v8;
        }
      }
      iDataCount = this->iDataCount;
      ++v3;
      p_uiMaterialID_R += 12;
    }
    while ( v3 < this->iDataCount );
  }
}

void __fastcall MaterialShowControl::SetDefaultMaterialData(
        MaterialShowControl *this,
        const CharaActionData::Setting::Type::Material *data)
{
  int iDataCount; // er11
  int v3; // er10
  int v4; // er9
  unsigned __int8 *p_uiMaterialID_R; // rcx
  __int64 v7; // xmm0_8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 iMianMaskCount; // rax

  iDataCount = this->iDataCount;
  v3 = -1;
  v4 = 0;
  if ( this->iDataCount > 0 )
  {
    p_uiMaterialID_R = &this->defaultMaterialData[0].uiMaterialID_R;
    while ( *(p_uiMaterialID_R - 1) != data->uiMaterialID_L || *p_uiMaterialID_R != data->uiMaterialID_R )
    {
      ++v4;
      p_uiMaterialID_R += 12;
      if ( v4 >= iDataCount )
        goto LABEL_8;
    }
    v3 = v4;
  }
LABEL_8:
  v7 = *(_QWORD *)&data->uiShow;
  if ( v3 >= 0 )
  {
    v9 = v3;
    *(_QWORD *)&this->defaultMaterialData[v9].uiShow = v7;
    this->defaultMaterialData[v9].iGroupID = data->iGroupID;
  }
  else
  {
    v3 = iDataCount;
    if ( iDataCount >= 40 )
      v3 = 39;
    v8 = v3;
    *(_QWORD *)&this->defaultMaterialData[v8].uiShow = v7;
    this->defaultMaterialData[v8].iGroupID = data->iGroupID;
    if ( ++this->iDataCount > 40 )
      this->iDataCount = 40;
  }
  if ( (data->iOptionFlag & 2) != 0 )
  {
    iMianMaskCount = this->iMianMaskCount;
    if ( (int)iMianMaskCount < 10 )
    {
      if ( this->iMianMaskType < 0 && !(_DWORD)iMianMaskCount )
        this->iMianMaskType = 0;
      this->iMianMaskIndex[iMianMaskCount] = v3;
      ++this->iMianMaskCount;
    }
    else
    {
      this->iMianMaskIndex[9] = v3;
      this->iMianMaskCount = 10;
    }
  }
}

void __fastcall MaterialShowControl::SetMaterialVisible(
        MaterialShowControl *this,
        const CharaActionData::Setting::Type::Material *material,
        int iCAngle)
{
  int v5; // er8
  __int64 iDataCount; // rdi
  __int64 v7; // r10
  unsigned __int8 *p_uiMaterialID_R; // rcx
  bool v9; // r10
  unsigned __int8 uiMaterialID_R; // al
  char *v11; // r10
  __int64 v12; // rax
  MaterialShowControl::MaterialIndexList *v13; // rcx
  __int64 iMianMaskType; // rax
  int iIndex; // ecx
  int iModelID; // eax
  MaterialShowControl::MaterialIndexList *v17; // rcx
  OGLModel *v18; // r8
  __int64 v19; // [rsp+20h] [rbp-28h]
  bool v20; // [rsp+28h] [rbp-20h]

  if ( material->iGroupID > 0 && (material->iOptionFlag & 1) == 0 )
  {
    MaterialShowControl::CheckMaterialGroupData(this, material, iCAngle);
    return;
  }
  if ( material->uiShow )
  {
    v9 = material->uiShow != 2;
    if ( !iCAngle )
    {
      uiMaterialID_R = material->uiMaterialID_R;
      goto LABEL_28;
    }
  }
  else
  {
    v5 = 0;
    if ( this->iDataCount > 0 )
    {
      iDataCount = this->iDataCount;
      v7 = 0i64;
      p_uiMaterialID_R = &this->defaultMaterialData[0].uiMaterialID_R;
      while ( *(p_uiMaterialID_R - 1) != material->uiMaterialID_L || *p_uiMaterialID_R != material->uiMaterialID_R )
      {
        ++v5;
        ++v7;
        p_uiMaterialID_R += 12;
        if ( v7 >= iDataCount )
          goto LABEL_10;
      }
      if ( v5 >= 0 )
      {
        v19 = -1i64;
        v20 = 0;
        if ( v5 < this->iDataCount )
        {
          v11 = (char *)this + 12 * v5;
          LOBYTE(v12) = iCAngle ? v11[5] : v11[6];
          v12 = (unsigned __int8)v12;
          if ( (unsigned __int8)v12 < 0x40u )
          {
            v13 = &this->ListData[v12];
            if ( v13 )
            {
              v20 = v11[4] != 2;
              v19 = (__int64)*v13;
              if ( (v11[8] & 2) != 0 )
              {
                iMianMaskType = this->iMianMaskType;
                if ( (int)iMianMaskType < 0
                  || this->iMianMaskCount <= 0
                  || (v20 = 1, v5 != this->iMianMaskIndex[iMianMaskType]) )
                {
                  v20 = 0;
                }
              }
            }
          }
        }
        v9 = v20;
        iIndex = HIDWORD(v19);
        iModelID = v19;
        goto LABEL_31;
      }
    }
LABEL_10:
    v9 = 1;
    if ( !iCAngle )
    {
      uiMaterialID_R = material->uiMaterialID_R;
      goto LABEL_28;
    }
  }
  uiMaterialID_R = material->uiMaterialID_L;
LABEL_28:
  if ( uiMaterialID_R >= 0x40u )
    return;
  v17 = &this->ListData[uiMaterialID_R];
  if ( !v17 )
    return;
  iModelID = v17->iModelID;
  iIndex = v17->iIndex;
LABEL_31:
  if ( iIndex >= 0 && iModelID >= 0 )
  {
    v18 = this->pModelList[iModelID];
    if ( v18 )
    {
      if ( v18->m_ucMaterialCount > iIndex )
        v18->m_bMaterialVisible[iIndex] = v9;
      if ( (material->iOptionFlag & 1) != 0 )
        MaterialShowControl::SetDefaultMaterialData(this, material);
    }
  }
}

void __fastcall MaterialShowControl::SetMianMaskChange(
        MaterialShowControl *this,
        OGLModel *pModel,
        int iCAngle,
        const CharaActionData::Exclusive::Type::Mian *mianMaskData)
{
  int iMianMaskCount; // ecx
  char v7; // bp
  int iMianMaskType; // esi
  int v9; // er11
  int v10; // eax
  int v11; // eax
  int *iMianMaskIndex; // r9
  __int64 v13; // rax
  MaterialShowControl::MaterialIndexList *v14; // rcx
  __int64 iModelID; // rax
  __int64 iIndex; // r8

  if ( !pModel )
    return;
  iMianMaskCount = this->iMianMaskCount;
  if ( iMianMaskCount <= 0 )
    return;
  v7 = 0;
  iMianMaskType = this->iMianMaskType;
  if ( !mianMaskData->iMaskSetting )
    return;
  v9 = 0;
  switch ( mianMaskData->iMaskSetting )
  {
    case 1:
      v11 = iMianMaskType + 1;
      if ( iMianMaskType + 1 >= iMianMaskCount )
        v11 = 0;
      break;
    case 2:
      this->iMianMaskType = iMianMaskType - 1;
      if ( iMianMaskType - 1 >= 0 )
        goto LABEL_15;
      v11 = iMianMaskCount - 1;
      break;
    case 3:
      v7 = 1;
      this->iMianMaskType = -1;
      goto LABEL_15;
    default:
      v10 = mianMaskData->iMaskSetting - 4;
      this->iMianMaskType = v10;
      if ( v10 < iMianMaskCount )
        goto LABEL_15;
      v11 = iMianMaskCount - 1;
      break;
  }
  this->iMianMaskType = v11;
LABEL_15:
  iMianMaskIndex = this->iMianMaskIndex;
  do
  {
    v13 = *iMianMaskIndex;
    if ( iCAngle )
      LOBYTE(v13) = this->defaultMaterialData[v13].uiMaterialID_L;
    else
      LOBYTE(v13) = this->defaultMaterialData[v13].uiMaterialID_R;
    v13 = (unsigned __int8)v13;
    if ( (unsigned __int8)v13 < 0x40u )
    {
      v14 = &this->ListData[v13];
      if ( v14 )
      {
        iModelID = v14->iModelID;
        if ( (int)iModelID >= 0 )
        {
          iIndex = v14->iIndex;
          if ( (int)iIndex >= 0 && pModel == this->pModelList[iModelID] && pModel->m_ucMaterialCount > (int)iIndex )
            pModel->m_bMaterialVisible[iIndex] = this->iMianMaskType == v9;
        }
      }
    }
    ++v9;
    ++iMianMaskIndex;
  }
  while ( v9 < this->iMianMaskCount );
  if ( v7 )
    this->iMianMaskType = iMianMaskType;
}

