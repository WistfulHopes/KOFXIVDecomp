#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

long Scaleform::SFstricmp(const char * a, const char * b); // 0x140323650
unsigned long long Scaleform::SFwcslen(const wchar_t * str); // 0x140323850
double Scaleform::SFstrtod(const char * string, char * * tailptr); // 0x140323660
struct Scaleform::GUnicodePairType
{
	unsigned short Key; // 0x0
	unsigned short Value; // 0x2
};
const unsigned short Scaleform::UnicodeAlnumBits[0]; // 0x140744F90
const unsigned short Scaleform::UnicodeSpaceBits[0]; // 0x140746090
typedef void(*Scaleform::GFx::TagLoaderFunctionType)(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &);
typedef Scaleform::Render::Point3<float> Scaleform::Render::Point3F;
typedef Scaleform::Render::Rect<double> Scaleform::Render::RectD;
const unsigned short Scaleform::UnicodeAlphaBits[0]; // 0x140745630
const unsigned short Scaleform::UnicodeDigitBits[0]; // 0x140745CD0
const unsigned short Scaleform::UnicodeXDigitBits[0]; // 0x140746330
typedef Scaleform::HashUncachedLH<Scaleform::GFx::Text::StyleKey,Scaleform::Render::Text::Style *,Scaleform::GFx::Text::StyleHashFunc<Scaleform::GFx::Text::StyleKey>,325> Scaleform::GFx::Text::StyleHash;
const unsigned short Scaleform::UnicodeDirectionNeutralBits[0]; // 0x140746B90
const unsigned short Scaleform::UnicodeRightToLeftBits[0]; // 0x140747270
const unsigned short Scaleform::UnicodeToUpperBits[432]; // 0x140743400
const unsigned short Scaleform::UnicodeToLowerBits[448]; // 0x140743760
const Scaleform::GUnicodePairType Scaleform::UnicodeToUpperTable[641]; // 0x140743AE0
const Scaleform::GUnicodePairType Scaleform::UnicodeToLowerTable[677]; // 0x1407444F0
const unsigned short Scaleform::UnicodeNonSpacingMarksBits[784]; // 0x140746570
long Scaleform::SFtowupper(wchar_t charCode); // 0x1403237B0
long Scaleform::SFtowlower(wchar_t charCode); // 0x140323710//decompilation failure at 140744F90!
//decompilation failure at 140746090!
//decompilation failure at 140745630!
//decompilation failure at 140745CD0!
//decompilation failure at 140746330!
//decompilation failure at 140746B90!
//decompilation failure at 140747270!
//decompilation failure at 140743400!
//decompilation failure at 140743760!
//decompilation failure at 140743AE0!
//decompilation failure at 1407444F0!
//decompilation failure at 140746570!
// attributes: thunk
int __fastcall Scaleform::SFstricmp(const char *a, const char *b)
{
  return stricmp(a, b);
}

long double __fastcall Scaleform::SFstrtod(const char *string, char **tailptr)
{
  char v4; // si
  char *v5; // rax
  const char *v6; // rcx
  char destination[352]; // [rsp+20h] [rbp-178h] BYREF

  v4 = *localeconv()->decimal_point;
  if ( v4 == 46 )
  {
    v6 = string;
  }
  else
  {
    strcpy_s(destination, 0x15Cui64, string);
    v5 = destination;
    if ( destination[0] )
    {
      while ( *v5 != 46 )
      {
        if ( !*++v5 )
        {
          v6 = destination;
          return strtod(v6, tailptr);
        }
      }
      *v5 = v4;
    }
    v6 = destination;
  }
  return strtod(v6, tailptr);
}

__int64 __fastcall Scaleform::SFtowlower(wchar_t charCode)
{
  unsigned __int64 v2; // rax
  int v3; // er10
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = (unsigned __int64)charCode >> 8;
  v3 = Scaleform::UnicodeToLowerBits[v2];
  if ( !Scaleform::UnicodeToLowerBits[v2] )
    return charCode;
  v4 = 0i64;
  if ( v3 != 1 )
  {
    v5 = Scaleform::UnicodeToLowerBits[v3 + ((charCode >> 4) & 0xF)];
    if ( !_bittest(&v5, charCode & 0xF) )
      return charCode;
  }
  v6 = 676i64;
  do
  {
    v7 = (v6 >> 1) + v4;
    if ( Scaleform::UnicodeToLowerTable[v7].Key >= charCode )
    {
      v6 >>= 1;
    }
    else
    {
      v4 = v7 + 1;
      v6 += -1 - (v6 >> 1);
    }
  }
  while ( v6 > 0 );
  return Scaleform::UnicodeToLowerTable[v4].Value;
}

__int64 __fastcall Scaleform::SFtowupper(wchar_t charCode)
{
  unsigned __int64 v2; // rax
  int v3; // er10
  __int64 v4; // r8
  int v5; // eax
  __int64 v6; // rax
  __int64 v7; // rcx

  v2 = (unsigned __int64)charCode >> 8;
  v3 = Scaleform::UnicodeToUpperBits[v2];
  if ( !Scaleform::UnicodeToUpperBits[v2] )
    return charCode;
  v4 = 0i64;
  if ( v3 != 1 )
  {
    v5 = Scaleform::UnicodeToUpperBits[v3 + ((charCode >> 4) & 0xF)];
    if ( !_bittest(&v5, charCode & 0xF) )
      return charCode;
  }
  v6 = 640i64;
  do
  {
    v7 = (v6 >> 1) + v4;
    if ( Scaleform::UnicodeToUpperTable[v7].Key >= charCode )
    {
      v6 >>= 1;
    }
    else
    {
      v4 = v7 + 1;
      v6 += -1 - (v6 >> 1);
    }
  }
  while ( v6 > 0 );
  return Scaleform::UnicodeToUpperTable[v4].Value;
}

unsigned __int64 __fastcall Scaleform::SFwcslen(const wchar_t *str)
{
  unsigned __int64 result; // rax

  result = -1i64;
  do
    ++result;
  while ( str[result] );
  return result;
}

