#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::Render::Color Scaleform::Render::Color::Blend(Scaleform::Render::Color c1, Scaleform::Render::Color c2, float f); // 0x1403E6CC0Scaleform::Render::Color *__fastcall Scaleform::Render::Color::Blend(
        Scaleform::Render::Color *result,
        unsigned __int8 *c1,
        unsigned __int8 *c2,
        float f)
{
  result->Channels.Red = (int)((float)((float)((float)((float)c2[2] - (float)c1[2]) * f) + (float)c1[2]) + 0.5);
  result->Channels.Green = (int)((float)((float)((float)((float)c2[1] - (float)c1[1]) * f) + (float)c1[1]) + 0.5);
  result->Channels.Blue = (int)((float)((float)((float)((float)*c2 - (float)*c1) * f) + (float)*c1) + 0.5);
  result->Channels.Alpha = (int)((float)((float)((float)((float)c2[3] - (float)c1[3]) * f) + (float)c1[3]) + 0.5);
  return result;
}

