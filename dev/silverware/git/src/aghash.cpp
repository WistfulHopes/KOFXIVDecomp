#include "dev/silverware/git/sdk/agstringutils.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agendian.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/aghash.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"

unsigned long AgHash::_hashfunc(const unsigned char * data, unsigned long datasize); // 0x14065F190__int64 __fastcall AgHash::_hashfunc(const unsigned __int8 *data, unsigned int datasize)
{
  const unsigned __int8 *v2; // r8
  unsigned int v3; // er10
  unsigned int v4; // er9
  unsigned int i; // eax
  unsigned int v6; // eax
  int v7; // edx
  unsigned int v8; // er9
  unsigned int v9; // er9
  unsigned int v10; // eax
  unsigned int v11; // ecx
  unsigned int v12; // eax
  unsigned int v13; // eax

  v2 = data;
  if ( datasize && data )
  {
    v3 = datasize >> 2;
    v4 = datasize & 3;
    for ( i = datasize; v3; --v3 )
    {
      v6 = *(unsigned __int16 *)v2 + i;
      v7 = *((unsigned __int16 *)v2 + 1) << 11;
      v2 += 4;
      i = (((v6 << 16) ^ v7 ^ v6) >> 11) + ((v6 << 16) ^ v7 ^ v6);
    }
    v8 = v4 - 1;
    if ( v8 )
    {
      v9 = v8 - 1;
      if ( v9 )
      {
        if ( v9 != 1 )
        {
LABEL_12:
          v12 = (((8 * i) ^ i) >> 5) + ((8 * i) ^ i);
          v13 = (((16 * v12) ^ v12) >> 17) + ((16 * v12) ^ v12);
          return (((v13 << 25) ^ v13) >> 6) + ((v13 << 25) ^ v13);
        }
        v10 = ((*(unsigned __int16 *)v2 + i) << 16) ^ (v2[2] << 18) ^ (*(unsigned __int16 *)v2 + i);
        v11 = v10 >> 11;
      }
      else
      {
        v10 = ((*(unsigned __int16 *)v2 + i) << 11) ^ (*(unsigned __int16 *)v2 + i);
        v11 = v10 >> 17;
      }
    }
    else
    {
      v10 = ((*v2 + i) << 10) ^ (*v2 + i);
      v11 = v10 >> 1;
    }
    i = v11 + v10;
    goto LABEL_12;
  }
  return 0i64;
}

