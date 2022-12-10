#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"

Scaleform::Render::Text::WordWrapHelper::CharBreakInfo Scaleform::Render::Text::WordWrapHelper::CharBreakInfoArray[112]; // 0x1409F9A00
bool Scaleform::Render::Text::WordWrapHelper::FindCharWithFlags(unsigned long wwMode, wchar_t c, unsigned long charBreakFlags); // 0x14038E450//decompilation failure at 1409F9A00!
bool __fastcall Scaleform::Render::Text::WordWrapHelper::FindCharWithFlags(
        unsigned int wwMode,
        wchar_t c,
        unsigned int charBreakFlags)
{
  unsigned __int8 v3; // r10
  __int64 v5; // rcx
  __int64 v6; // r8
  __int64 v7; // rax
  wchar_t Char; // dx

  v3 = charBreakFlags;
  if ( (wwMode & 2) == 0 )
    return 0;
  v5 = 0i64;
  v6 = 112i64;
  while ( 1 )
  {
    v7 = v5 + (v6 - v5) / 2;
    Char = Scaleform::Render::Text::WordWrapHelper::CharBreakInfoArray[v7].Char;
    if ( c == Char )
      break;
    if ( c >= Char )
      v5 = v7 + 1;
    else
      v6 = v7 - 1;
    if ( v5 > v6 )
      return 0;
  }
  return (v3 & Scaleform::Render::Text::WordWrapHelper::CharBreakInfoArray[v7].Flags) != 0;
}

