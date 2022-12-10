#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_rect.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_stdinc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/silverware/git/src/platforms/pc/sdl/include/sdl_endian.h"

long AgRenderTypeConverter::getNumMSAASamples(AgMultisampleType type); // 0x140696660__int64 __fastcall AgRenderTypeConverter::getNumMSAASamples(AgMultisampleType type)
{
  __int32 v1; // ecx
  __int32 v2; // ecx
  __int32 v3; // ecx

  if ( type )
  {
    v1 = type - 1;
    if ( !v1 )
      return 2i64;
    v2 = v1 - 1;
    if ( !v2 )
      return 4i64;
    v3 = v2 - 1;
    if ( !v3 )
      return 8i64;
    if ( v3 == 1 )
      return 16i64;
  }
  return 0i64;
}

