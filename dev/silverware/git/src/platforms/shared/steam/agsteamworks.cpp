#include "dev/silverware/git/sdk/3rdparty/steam/isteamhtmlsurface.h"
#include "dev/silverware/git/sdk/3rdparty/steam/matchmakingtypes.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api_internal.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steamclientpublic.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/3rdparty/steam/steam_api.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

long AgSteamworks::ms_isAvailable; // 0x140A94074
long AgSteamworks::onSingletonInit(); // 0x1406874F0
long AgSteamworks::onSingletonExit(); // 0x1406874D0
long AgSteamworks::isAvailable(); // 0x1406874C0//decompilation failure at 140A94074!
__int64 __fastcall AgSteamworks::isAvailable()
{
  return (unsigned int)AgSteamworks::ms_isAvailable;
}

__int64 __fastcall AgSteamworks::onSingletonExit(AgSteamworks *this)
{
  SteamAPI_Shutdown(this);
  return 1i64;
}

__int64 __fastcall AgSteamworks::onSingletonInit(AgSteamworks *this)
{
  __int64 v1; // rdx
  __int64 result; // rax
  __int64 v3; // rdx
  __int64 v4; // rax

  AgSteamworks::ms_isAvailable = 1;
  if ( (unsigned __int8)SteamAPI_Init(this) )
  {
    if ( AgSteamworks::ms_isAvailable == 1 )
    {
      if ( *(_QWORD *)(SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v1)
                     + 40) )
      {
        v4 = SteamInternal_ContextInit(&`SteamInternal_ModuleContext'::`2'::s_CallbackCounterAndContext, v3);
        (***(void (__fastcall ****)(_QWORD))(v4 + 40))(*(_QWORD *)(v4 + 40));
      }
    }
    return 1i64;
  }
  else
  {
    AgTrace("[steam] Warning: failed to init Steam API");
    result = 1i64;
    AgSteamworks::ms_isAvailable = 0;
  }
  return result;
}

