#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asutils.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

bool Scaleform::GFx::ASUtils::IsWhiteSpace(unsigned long c); // 0x1403314E0
unsigned long Scaleform::GFx::ASUtils::SkipWhiteSpace(const Scaleform::String & str); // 0x140331660
const char * Scaleform::GFx::ASUtils::SkipWhiteSpace(const char * str, unsigned long long len); // 0x140331700
void Scaleform::GFx::ASUtils::EscapeWithMask(const char * psrc, unsigned long long length, Scaleform::String * pescapedStr, const unsigned long * escapeMask); // 0x140330FE0
void Scaleform::GFx::ASUtils::Unescape(const char * psrc, unsigned long long length, Scaleform::String * punescapedStr); // 0x140331E90
void Scaleform::GFx::ASUtils::Escape(const char * psrc, unsigned long long length, Scaleform::String * pescapedStr); // 0x140330FD0
class Scaleform::GFx::ASUtils::AS3::Formatter
{
public:
	static void EscapeWithMask(const char *, unsigned long long, Scaleform::StringBuffer &, const unsigned long *, bool);
	static bool EscapeWithMaskURI(const char *, unsigned long long, Scaleform::StringBuffer &, bool);
	static bool Unescape(const char *, unsigned long long, Scaleform::StringBuffer &, bool);
	static bool DecodeURI(const char *, unsigned long long, Scaleform::StringBuffer &, bool);
private:
	static bool InMask(long, const unsigned long *);
	static void WriteHexNibble(Scaleform::StringBuffer &, unsigned char);
	static unsigned char ReadHexNibble(const char * &, const char *);
	static void WriteHexByte(Scaleform::StringBuffer &, unsigned char);
	static void WriteHexWord(Scaleform::StringBuffer &, unsigned short);
	static bool IsHexDigit(char);
	static unsigned short ReadHex(const char * &, const char *, unsigned char);
};
unsigned long Scaleform::GFx::ASUtils::AS3::uriUnescaped[4]; // 0x1409F9530
unsigned long Scaleform::GFx::ASUtils::AS3::uriReservedPlusPound[4]; // 0x1409F9540
unsigned long Scaleform::GFx::ASUtils::AS3::unescaped_mask[4]; // 0x1409F9550
unsigned long Scaleform::GFx::ASUtils::AS3::unescaped_mask_VAR[4]; // 0x1409F9560
unsigned long Scaleform::GFx::ASUtils::AS3::unescaped_mask_URIComponent[4]; // 0x1409F9570
const unsigned char Scaleform::GFx::GFxNaN_Bytes[8]; // 0x1407483F8
const unsigned char Scaleform::GFx::GFxPOSITIVE_INFINITY_Bytes[8]; // 0x140748400
const unsigned char Scaleform::GFx::GFxNEGATIVE_INFINITY_Bytes[8]; // 0x140748408
const unsigned char Scaleform::GFx::GFxMIN_VALUE_Bytes[8]; // 0x140748410
const unsigned char Scaleform::GFx::GFxMAX_VALUE_Bytes[8]; // 0x140748418
const unsigned char Scaleform::GFx::GFxNEGATIVE_ZERO_Bytes[8]; // 0x140748420
const unsigned char Scaleform::GFx::GFxPOSITIVE_ZERO_Bytes[8]; // 0x140748428
void Scaleform::GFx::ASUtils::AS3::Formatter::WriteHexWord(Scaleform::StringBuffer & b, unsigned short v); // 0x1403320F0
unsigned short Scaleform::GFx::ASUtils::AS3::Formatter::ReadHex(const char * & pStr, const char * end, unsigned char max_chars); // 0x1403315A0
void Scaleform::GFx::ASUtils::AS3::Formatter::EscapeWithMask(const char * psrc, unsigned long long length, Scaleform::StringBuffer & b, const unsigned long * escapeMask, bool useUtf8); // 0x140331130
bool Scaleform::GFx::ASUtils::AS3::Formatter::EscapeWithMaskURI(const char * psrc, unsigned long long length, Scaleform::StringBuffer & b, bool isComp); // 0x1403312B0
bool Scaleform::GFx::ASUtils::AS3::Formatter::Unescape(const char * psrc, unsigned long long length, Scaleform::StringBuffer & b, bool useUtf8); // 0x140331FB0
bool Scaleform::GFx::ASUtils::AS3::Formatter::DecodeURI(const char * psrc, unsigned long long length, Scaleform::StringBuffer & b, bool isComp); // 0x140330C60
void Scaleform::GFx::ASUtils::AS3::Escape(const char * psrc, unsigned long long length, Scaleform::StringBuffer & b, bool useUtf8); // 0x140330FB0
void Scaleform::GFx::ASUtils::AS3::EncodeVar(const char * psrc, unsigned long long length, Scaleform::StringBuffer & b, bool useUtf8); // 0x140330F90
bool Scaleform::GFx::ASUtils::AS3::EncodeURI(const char * psrc, unsigned long long length, Scaleform::StringBuffer & escapedStr, bool isComp); // 0x140330F60
void Scaleform::GFx::ASUtils::AS3::EncodeURIComponent(const char * psrc, unsigned long long length, Scaleform::StringBuffer & b, bool useUtf8); // 0x140330F70
bool Scaleform::GFx::ASUtils::AS3::Unescape(const char * psrc, unsigned long long length, Scaleform::StringBuffer & b, bool useUtf8); // 0x140331E80
bool Scaleform::GFx::ASUtils::AS3::DecodeURI(const char * psrc, unsigned long long length, Scaleform::StringBuffer & b, bool isComp); // 0x140330C50
double Scaleform::GFx::NumberUtil::NaN(); // 0x140331540
double Scaleform::GFx::NumberUtil::POSITIVE_INFINITY(); // 0x140331560
double Scaleform::GFx::NumberUtil::NEGATIVE_INFINITY(); // 0x140331520
double Scaleform::GFx::NumberUtil::POSITIVE_ZERO(); // 0x140331580
bool Scaleform::GFx::NumberUtil::IsPOSITIVE_ZERO(double v); // 0x1403314C0
bool Scaleform::GFx::NumberUtil::IsNEGATIVE_ZERO(double v); // 0x1403314A0
double Scaleform::GFx::NumberUtil::StringToInt(const char * str, unsigned long strLen, long radix, unsigned long * endIndex); // 0x140331990
double Scaleform::GFx::NumberUtil::StringToDouble(const char * str, unsigned long strLen, unsigned long * endIndex); // 0x1403317A0//decompilation failure at 1409F9530!
//decompilation failure at 1409F9540!
//decompilation failure at 1409F9550!
//decompilation failure at 1409F9560!
//decompilation failure at 1409F9570!
//decompilation failure at 1407483F8!
//decompilation failure at 140748400!
//decompilation failure at 140748408!
//decompilation failure at 140748410!
//decompilation failure at 140748418!
//decompilation failure at 140748420!
//decompilation failure at 140748428!
// attributes: thunk
bool __fastcall Scaleform::GFx::ASUtils::AS3::DecodeURI(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::StringBuffer *b,
        bool isComp)
{
  return Scaleform::GFx::ASUtils::AS3::Formatter::DecodeURI(psrc, length, b, isComp);
}

char __fastcall Scaleform::GFx::ASUtils::AS3::Formatter::DecodeURI(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::StringBuffer *b,
        bool isComp)
{
  const char *v4; // r14
  unsigned __int64 v5; // rbp
  const char *v9; // rbx
  unsigned int v10; // eax
  const char *v11; // rdx
  unsigned __int64 v12; // rsi
  const char *v13; // r8
  char v14; // cl
  const char *v15; // rbx
  char v16; // cl
  char v17; // r9
  const char *v18; // rdx
  const char *v19; // r8
  char v20; // cl
  char v21; // cl
  unsigned __int8 v22; // r9
  int Char_Advance0; // edi
  int v24; // edx
  __int64 v25; // r10
  __int64 i; // r11
  int v27; // eax
  const char *v28; // rbx
  const char *v29; // rdx
  const char *v30; // r9
  char v31; // cl
  const char *v32; // rbx
  char v33; // cl
  char v34; // dl
  const char *v35; // r8
  const char *v36; // r9
  char v37; // cl
  char v38; // cl
  char v39; // dl
  unsigned int v40; // eax
  unsigned int v41; // edx
  char v43[8]; // [rsp+60h] [rbp+8h] BYREF
  char *putf8Buffer; // [rsp+68h] [rbp+10h] BYREF

  v4 = &psrc[length];
  v5 = 0i64;
  v9 = psrc;
  if ( psrc >= &psrc[length] )
    return 1;
  while ( 1 )
  {
    v10 = *v9++;
    v11 = v9;
    if ( v10 != 37 )
    {
      v41 = v10;
      goto LABEL_62;
    }
    v12 = v5;
    v13 = v9;
    if ( v9 >= v4 )
    {
LABEL_10:
      v16 = 0;
      v15 = v11;
      goto LABEL_11;
    }
    v14 = *v9;
    v15 = v9 + 1;
    if ( (unsigned __int8)(v14 - 48) > 9u )
    {
      if ( (unsigned __int8)(v14 - 65) > 5u )
      {
        if ( (unsigned __int8)(v14 - 97) > 5u )
          goto LABEL_10;
        v16 = v14 - 87;
      }
      else
      {
        v16 = v14 - 55;
      }
    }
    else
    {
      v16 = v14 - 48;
    }
LABEL_11:
    v17 = v16;
    v18 = v15;
    if ( v15 == v13 )
      return 0;
    v19 = v15;
    if ( v15 >= v4 )
      goto LABEL_19;
    v20 = *v15;
    v9 = v15 + 1;
    if ( (unsigned __int8)(v20 - 48) <= 9u )
    {
      v21 = v20 - 48;
      goto LABEL_20;
    }
    if ( (unsigned __int8)(v20 - 65) <= 5u )
    {
      v21 = v20 - 55;
      goto LABEL_20;
    }
    if ( (unsigned __int8)(v20 - 97) > 5u )
    {
LABEL_19:
      v21 = 0;
      v9 = v18;
    }
    else
    {
      v21 = v20 - 87;
    }
LABEL_20:
    if ( v9 == v19 )
      return 0;
    v5 += 2i64;
    v22 = v21 | (16 * v17);
    if ( (v22 & 0x80u) == 0 )
    {
      Char_Advance0 = v22;
      goto LABEL_51;
    }
    v24 = 1;
    if ( (v22 & 0x40) == 0 )
      return 0;
    do
      ++v24;
    while ( ((v22 << v24) & 0x80u) != 0 );
    if ( v24 == 1 )
      return 0;
    if ( v24 > 4 )
      return 0;
    v43[0] = v22;
    if ( v5 + 3 * (v24 - 1) >= length )
      return 0;
    v25 = 1i64;
    for ( i = v24; v25 < i; ++v25 )
    {
      v27 = *v9;
      v28 = v9 + 1;
      v29 = v28;
      if ( v27 != 37 )
        return 0;
      v30 = v28;
      if ( v28 >= v4 )
        goto LABEL_37;
      v31 = *v28;
      v32 = v28 + 1;
      if ( (unsigned __int8)(v31 - 48) <= 9u )
      {
        v33 = v31 - 48;
        goto LABEL_38;
      }
      if ( (unsigned __int8)(v31 - 65) <= 5u )
      {
        v33 = v31 - 55;
        goto LABEL_38;
      }
      if ( (unsigned __int8)(v31 - 97) > 5u )
      {
LABEL_37:
        v33 = 0;
        v32 = v29;
      }
      else
      {
        v33 = v31 - 87;
      }
LABEL_38:
      v34 = v33;
      v35 = v32;
      if ( v32 == v30 )
        return 0;
      v36 = v32;
      if ( v32 >= v4 )
      {
LABEL_46:
        v38 = 0;
        v9 = v35;
        goto LABEL_47;
      }
      v37 = *v32;
      v9 = v32 + 1;
      if ( (unsigned __int8)(v37 - 48) > 9u )
      {
        if ( (unsigned __int8)(v37 - 65) > 5u )
        {
          if ( (unsigned __int8)(v37 - 97) > 5u )
            goto LABEL_46;
          v38 = v37 - 87;
        }
        else
        {
          v38 = v37 - 55;
        }
      }
      else
      {
        v38 = v37 - 48;
      }
LABEL_47:
      if ( v9 == v36 )
        return 0;
      v39 = v38 | (16 * v34);
      if ( (v39 & 0xC0) != 0x80 )
        return 0;
      v43[v25] = v39;
      v5 += 3i64;
    }
    putf8Buffer = v43;
    Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    if ( Char_Advance0 == 65533 )
      return 0;
LABEL_51:
    if ( (unsigned int)Char_Advance0 >= 0x10000 )
      break;
    if ( !isComp && Char_Advance0 < 128 )
    {
      v40 = Scaleform::GFx::ASUtils::AS3::uriReservedPlusPound[Char_Advance0 >> 5];
      if ( _bittest((const int *)&v40, Char_Advance0 & 0x1F) )
      {
        for ( ; v12 <= v5; ++v12 )
          Scaleform::StringBuffer::AppendChar(b, v9[v12]);
        goto LABEL_63;
      }
    }
    v41 = Char_Advance0;
LABEL_62:
    Scaleform::StringBuffer::AppendChar(b, v41);
LABEL_63:
    ++v5;
    if ( v9 >= v4 )
      return 1;
  }
  if ( (unsigned int)Char_Advance0 <= 0x10FFFF )
  {
    Scaleform::StringBuffer::AppendChar(b, (((unsigned int)(Char_Advance0 - 0x10000) >> 10) & 0x3FF) + 55296);
    v41 = (Char_Advance0 & 0x3FF) + 56320;
    goto LABEL_62;
  }
  return 0;
}

// attributes: thunk
bool __fastcall Scaleform::GFx::ASUtils::AS3::EncodeURI(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::StringBuffer *escapedStr,
        bool isComp)
{
  return Scaleform::GFx::ASUtils::AS3::Formatter::EscapeWithMaskURI(psrc, length, escapedStr, isComp);
}

void __fastcall Scaleform::GFx::ASUtils::AS3::EncodeURIComponent(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::StringBuffer *b,
        bool useUtf8)
{
  Scaleform::GFx::ASUtils::AS3::Formatter::EscapeWithMask(
    psrc,
    length,
    b,
    Scaleform::GFx::ASUtils::AS3::unescaped_mask_URIComponent,
    useUtf8);
}

void __fastcall Scaleform::GFx::ASUtils::AS3::EncodeVar(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::StringBuffer *b,
        bool useUtf8)
{
  Scaleform::GFx::ASUtils::AS3::Formatter::EscapeWithMask(
    psrc,
    length,
    b,
    Scaleform::GFx::ASUtils::AS3::unescaped_mask_VAR,
    useUtf8);
}

void __fastcall Scaleform::GFx::ASUtils::AS3::Escape(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::StringBuffer *b,
        bool useUtf8)
{
  Scaleform::GFx::ASUtils::AS3::Formatter::EscapeWithMask(
    psrc,
    length,
    b,
    Scaleform::GFx::ASUtils::AS3::unescaped_mask,
    useUtf8);
}

void __fastcall Scaleform::GFx::ASUtils::Escape(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::String *pescapedStr)
{
  Scaleform::GFx::ASUtils::EscapeWithMask(psrc, length, pescapedStr, mask);
}

void __fastcall Scaleform::GFx::ASUtils::EscapeWithMask(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::String *pescapedStr,
        const unsigned int *escapeMask)
{
  unsigned int v4; // edi
  char *v6; // r8
  __int64 v10; // rax
  int v11; // ebx
  unsigned int v12; // eax
  char v13; // cl
  int v14; // eax
  char v15; // dl
  char putf8str[255]; // [rsp+20h] [rbp-138h] BYREF
  char v17; // [rsp+11Fh] [rbp-39h] BYREF

  v4 = 0;
  v6 = putf8str;
  if ( length )
  {
    v10 = 0i64;
    do
    {
      v11 = (unsigned __int8)psrc[v10];
      if ( v6 + 4 >= &v17 )
      {
        *v6 = 0;
        Scaleform::String::AppendString(pescapedStr, putf8str, -1i64);
        v6 = putf8str;
      }
      if ( v11 < 128 && (v12 = escapeMask[v11 >> 5], _bittest((const int *)&v12, v11 & 0x1F)) )
      {
        *v6 = v11;
      }
      else
      {
        *v6 = 37;
        v13 = 55;
        v14 = v11 % 16;
        v15 = 55;
        if ( v11 / 16 <= 9 )
          v13 = 48;
        v6[1] = v11 / 16 + v13;
        v6 += 2;
        if ( v14 <= 9 )
          v15 = 48;
        *v6 = v14 + v15;
      }
      ++v4;
      ++v6;
      v10 = v4;
    }
    while ( v4 < length );
  }
  *v6 = 0;
  Scaleform::String::AppendString(pescapedStr, putf8str, -1i64);
}

void __fastcall Scaleform::GFx::ASUtils::AS3::Formatter::EscapeWithMask(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::StringBuffer *b,
        const unsigned int *escapeMask,
        bool useUtf8)
{
  const char *v5; // rbp
  bool v8; // r14
  char *v9; // rsi
  int Char_Advance0; // eax
  unsigned __int16 v11; // bx
  int v12; // ecx
  unsigned int v13; // eax
  unsigned int v14; // edx
  char v15; // bl
  unsigned __int8 v16; // al
  unsigned __int8 v17; // al
  unsigned __int8 v18; // bl
  unsigned __int8 v19; // bl
  char v20; // al
  unsigned __int8 v21; // al
  unsigned __int8 v22; // bl
  unsigned __int8 v23; // bl
  char *putf8Buffer; // [rsp+40h] [rbp+8h] BYREF

  putf8Buffer = (char *)psrc;
  v5 = &psrc[length];
  if ( psrc < &psrc[length] )
  {
    v8 = useUtf8;
    do
    {
      v9 = putf8Buffer;
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
      v11 = Char_Advance0;
      if ( Char_Advance0 >= 128 )
        goto LABEL_8;
      v12 = Char_Advance0 & 0x1F;
      if ( Char_Advance0 < 0 )
      {
        Char_Advance0 += 31;
        v12 -= 32;
      }
      v13 = escapeMask[Char_Advance0 >> 5];
      if ( _bittest((const int *)&v13, v12) )
      {
        v14 = (char)v11;
      }
      else
      {
LABEL_8:
        if ( (v11 & 0xFF00) != 0 )
        {
          if ( v8 )
          {
            for ( ; v9 < putf8Buffer; ++v9 )
            {
              Scaleform::StringBuffer::AppendChar(b, 0x25u);
              v15 = *v9;
              v16 = (unsigned __int8)*v9 >> 4;
              if ( v16 >= 0xAu )
                v17 = v16 + 55;
              else
                v17 = v16 + 48;
              Scaleform::StringBuffer::AppendChar(b, v17);
              v18 = v15 & 0xF;
              if ( v18 >= 0xAu )
                v19 = v18 + 55;
              else
                v19 = v18 + 48;
              Scaleform::StringBuffer::AppendChar(b, v19);
            }
          }
          else
          {
            Scaleform::StringBuffer::AppendChar(b, 0x25u);
            Scaleform::StringBuffer::AppendChar(b, 0x75u);
            Scaleform::GFx::ASUtils::AS3::Formatter::WriteHexWord(b, v11);
          }
          continue;
        }
        Scaleform::StringBuffer::AppendChar(b, 0x25u);
        v20 = (unsigned __int8)v11 >> 4;
        if ( (unsigned __int8)((unsigned __int8)v11 >> 4) >= 0xAu )
          v21 = v20 + 55;
        else
          v21 = v20 + 48;
        Scaleform::StringBuffer::AppendChar(b, v21);
        v22 = v11 & 0xF;
        if ( v22 >= 0xAu )
          v23 = v22 + 55;
        else
          v23 = v22 + 48;
        v14 = v23;
      }
      Scaleform::StringBuffer::AppendChar(b, v14);
    }
    while ( putf8Buffer < v5 );
  }
}

char __fastcall Scaleform::GFx::ASUtils::AS3::Formatter::EscapeWithMaskURI(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::StringBuffer *b,
        bool isComp)
{
  const char *v4; // r14
  __int64 v7; // r12
  __int64 v8; // rbp
  int Char_Advance0; // eax
  signed int v10; // ebx
  int v11; // ecx
  unsigned int v12; // eax
  int v13; // eax
  int v14; // ecx
  unsigned int v15; // eax
  unsigned int v16; // eax
  __int64 i; // rdi
  unsigned __int8 v18; // bl
  char v19; // al
  unsigned __int8 v20; // al
  unsigned __int8 v21; // bl
  unsigned __int8 v22; // bl
  char *putf8Buffer; // [rsp+20h] [rbp-58h] BYREF
  __int64 pindex; // [rsp+28h] [rbp-50h] BYREF
  char pbuffer[8]; // [rsp+30h] [rbp-48h] BYREF

  v4 = &psrc[length];
  putf8Buffer = (char *)psrc;
  v7 = Scaleform::UTF8Util::GetLength(psrc, -1i64);
  v8 = 0i64;
  if ( putf8Buffer >= v4 )
    return 1;
  while ( 1 )
  {
    Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    ++v8;
    v10 = Char_Advance0;
    if ( Char_Advance0 < 128 )
    {
      v11 = Char_Advance0 & 0x1F;
      if ( Char_Advance0 < 0 )
      {
        Char_Advance0 += 31;
        v11 -= 32;
      }
      v12 = Scaleform::GFx::ASUtils::AS3::uriUnescaped[Char_Advance0 >> 5];
      if ( _bittest((const int *)&v12, v11) )
        goto LABEL_11;
    }
    if ( !isComp && v10 < 128 )
    {
      v13 = v10;
      v14 = v10 & 0x1F;
      if ( v10 < 0 )
      {
        v13 = v10 + 31;
        v14 -= 32;
      }
      v15 = Scaleform::GFx::ASUtils::AS3::uriReservedPlusPound[v13 >> 5];
      if ( _bittest((const int *)&v15, v14) )
      {
LABEL_11:
        Scaleform::StringBuffer::AppendChar(b, (char)v10);
        goto LABEL_26;
      }
    }
    if ( (unsigned int)(v10 - 56320) <= 0x3FF )
      return 0;
    if ( (unsigned int)(v10 - 55296) <= 0x3FF )
      break;
LABEL_17:
    pindex = 0i64;
    Scaleform::UTF8Util::EncodeCharSafe(pbuffer, 6ui64, &pindex, v10);
    if ( !pindex )
      return 0;
    for ( i = 0i64; i < pindex; ++i )
    {
      v18 = pbuffer[i];
      Scaleform::StringBuffer::AppendChar(b, 0x25u);
      v19 = v18 >> 4;
      if ( (unsigned __int8)(v18 >> 4) >= 0xAu )
        v20 = v19 + 55;
      else
        v20 = v19 + 48;
      Scaleform::StringBuffer::AppendChar(b, v20);
      v21 = v18 & 0xF;
      if ( v21 >= 0xAu )
        v22 = v21 + 55;
      else
        v22 = v21 + 48;
      Scaleform::StringBuffer::AppendChar(b, v22);
    }
LABEL_26:
    if ( putf8Buffer >= v4 )
      return 1;
  }
  if ( ++v8 != v7 )
  {
    v16 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    if ( v16 - 56320 <= 0x3FF )
    {
      v10 = v16 + ((v10 - 55287) << 10);
      goto LABEL_17;
    }
  }
  return 0;
}

bool __fastcall Scaleform::GFx::NumberUtil::IsNEGATIVE_ZERO(long double v)
{
  return *(_QWORD *)&v == *(_QWORD *)Scaleform::GFx::GFxNEGATIVE_ZERO_Bytes;
}

bool __fastcall Scaleform::GFx::NumberUtil::IsPOSITIVE_ZERO(long double v)
{
  return *(_QWORD *)&v == *(_QWORD *)Scaleform::GFx::GFxPOSITIVE_ZERO_Bytes;
}

bool __fastcall Scaleform::GFx::ASUtils::IsWhiteSpace(unsigned int c)
{
  unsigned __int64 v1; // rax
  __int64 v2; // rdx
  bool result; // al

  result = c == 32
        || c - 9 <= 4
        || (v1 = c - 0x2000, (unsigned int)v1 <= 0x29) && (v2 = 0x30000000FFFi64, _bittest64(&v2, v1))
        || c == 8287
        || c == 12288;
  return result;
}

long double __fastcall Scaleform::GFx::NumberUtil::NEGATIVE_INFINITY()
{
  return *(double *)Scaleform::GFx::GFxNEGATIVE_INFINITY_Bytes;
}

long double __fastcall Scaleform::GFx::NumberUtil::NaN()
{
  return *(double *)Scaleform::GFx::GFxNaN_Bytes;
}

long double __fastcall Scaleform::GFx::NumberUtil::POSITIVE_INFINITY()
{
  return *(double *)Scaleform::GFx::GFxPOSITIVE_INFINITY_Bytes;
}

long double __fastcall Scaleform::GFx::NumberUtil::POSITIVE_ZERO()
{
  return *(double *)Scaleform::GFx::GFxPOSITIVE_ZERO_Bytes;
}

__int64 __fastcall Scaleform::GFx::ASUtils::AS3::Formatter::ReadHex(
        const char **pStr,
        const char *end,
        unsigned __int8 max_chars)
{
  const char *v3; // rdi
  unsigned __int16 v4; // r9
  int v6; // er11
  int v7; // ebx
  const char *v8; // r8
  char v9; // al
  const char *v10; // r8
  unsigned __int8 v11; // al
  __int64 result; // rax

  v3 = *pStr;
  v4 = 0;
  v6 = 0;
  v7 = max_chars;
  if ( max_chars )
  {
    do
    {
      v8 = *pStr;
      if ( *pStr >= end )
        break;
      v9 = *v8;
      if ( (unsigned __int8)(*v8 - 48) > 9u && (unsigned __int8)(v9 - 65) > 5u && (unsigned __int8)(v9 - 97) > 5u )
        break;
      v10 = v8 + 1;
      *pStr = v10;
      if ( (unsigned __int8)(v9 - 48) > 9u )
      {
        if ( (unsigned __int8)(v9 - 65) > 5u )
        {
          if ( (unsigned __int8)(v9 - 97) > 5u )
          {
            *pStr = v10 - 1;
            v11 = 0;
          }
          else
          {
            v11 = v9 - 87;
          }
        }
        else
        {
          v11 = v9 - 55;
        }
      }
      else
      {
        v11 = v9 - 48;
      }
      ++v6;
      v4 = v11 | (unsigned __int16)(16 * v4);
    }
    while ( v6 < v7 );
  }
  result = v4;
  if ( *pStr - v3 < max_chars )
    *pStr = v3;
  return result;
}

__int64 __fastcall Scaleform::GFx::ASUtils::SkipWhiteSpace(const Scaleform::String *str)
{
  unsigned int v2; // ebx
  unsigned int Length; // edi
  __int64 v4; // rbp
  unsigned int CharAt; // eax
  unsigned int v6; // ecx
  unsigned __int64 v7; // rax

  v2 = 0;
  Length = Scaleform::String::GetLength((Scaleform::String *)str);
  if ( !Length )
    return 0i64;
  v4 = 0x30000000FFFi64;
  do
  {
    CharAt = Scaleform::String::GetCharAt((Scaleform::String *)str, v2);
    v6 = CharAt;
    if ( CharAt != 32 && CharAt - 9 > 4 )
    {
      v7 = CharAt - 0x2000;
      if ( ((unsigned int)v7 > 0x29 || !_bittest64(&v4, v7)) && v6 != 8287 && v6 != 12288 )
        break;
    }
    ++v2;
  }
  while ( v2 < Length );
  return v2;
}

const char *__fastcall Scaleform::GFx::ASUtils::SkipWhiteSpace(const char *str, unsigned __int64 len)
{
  const char *v2; // rdi
  void *v3; // rbx
  __int64 v4; // rsi
  unsigned int Char_Advance0; // eax
  unsigned __int64 v6; // rcx
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  putf8Buffer = (char *)str;
  v2 = &str[len];
  v3 = (void *)str;
  if ( str >= &str[len] )
    return str;
  v4 = 0x30000000FFFi64;
  do
  {
    Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    if ( Char_Advance0 != 32 && Char_Advance0 - 9 > 4 )
    {
      v6 = Char_Advance0 - 0x2000;
      if ( ((unsigned int)v6 > 0x29 || !_bittest64(&v4, v6)) && Char_Advance0 != 8287 && Char_Advance0 != 12288 )
        break;
    }
    v3 = putf8Buffer;
  }
  while ( putf8Buffer < v2 );
  return (const char *)v3;
}

long double __fastcall Scaleform::GFx::NumberUtil::StringToDouble(
        const char *str,
        unsigned int strLen,
        unsigned int *endIndex)
{
  __int64 v3; // r14
  unsigned int v6; // ebx
  unsigned int Length; // ebp
  __int64 v8; // r15
  unsigned int CharAt; // eax
  unsigned __int64 v10; // rcx
  unsigned int ByteIndex; // eax
  volatile int *v12; // rbx
  __int64 v13; // rax
  unsigned int v14; // er14
  long double result; // xmm0_8
  const char *v16; // rsi
  char v17; // al
  char *v18; // rcx
  Scaleform::String v19; // [rsp+60h] [rbp+18h] BYREF
  char *tailptr; // [rsp+68h] [rbp+20h] BYREF

  v3 = strLen;
  *endIndex = 0;
  Scaleform::String::String(&v19, str);
  v6 = 0;
  Length = Scaleform::String::GetLength(&v19);
  if ( Length )
  {
    v8 = 0x30000000FFFi64;
    do
    {
      CharAt = Scaleform::String::GetCharAt(&v19, v6);
      if ( CharAt != 32 && CharAt - 9 > 4 )
      {
        v10 = CharAt - 0x2000;
        if ( ((unsigned int)v10 > 0x29 || !_bittest64(&v8, v10)) && CharAt != 8287 && CharAt != 12288 )
          break;
      }
      ++v6;
    }
    while ( v6 < Length );
  }
  ByteIndex = Scaleform::UTF8Util::GetByteIndex(v6, str, v3);
  v12 = (volatile int *)(v19.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  *endIndex = ByteIndex;
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v12 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v12);
  v13 = *endIndex;
  v14 = v3 - v13;
  if ( !v14 )
  {
    v19.pData = *(Scaleform::String::DataDesc **)Scaleform::GFx::GFxNaN_Bytes;
    return *(double *)Scaleform::GFx::GFxNaN_Bytes;
  }
  v16 = &str[v13];
  tailptr = 0i64;
  if ( v14 > 1 )
  {
    v17 = *v16;
    if ( *v16 == 43 )
    {
      if ( !strncmp(v16, "+Infinity", 9ui64) )
      {
        *endIndex += 9;
        goto LABEL_20;
      }
    }
    else if ( v17 == 45 )
    {
      if ( !strncmp(v16, "-Infinity", 9ui64) )
      {
        *endIndex += 9;
        v19.pData = *(Scaleform::String::DataDesc **)Scaleform::GFx::GFxNEGATIVE_INFINITY_Bytes;
        return *(double *)Scaleform::GFx::GFxNEGATIVE_INFINITY_Bytes;
      }
    }
    else if ( v17 == 73 && !strncmp(v16, "Infinity", 8ui64) )
    {
      *endIndex += 8;
LABEL_20:
      v19.pData = *(Scaleform::String::DataDesc **)Scaleform::GFx::GFxPOSITIVE_INFINITY_Bytes;
      return *(double *)Scaleform::GFx::GFxPOSITIVE_INFINITY_Bytes;
    }
  }
  result = Scaleform::SFstrtod(v16, &tailptr);
  v18 = tailptr;
  *endIndex += (_DWORD)tailptr - (_DWORD)v16;
  if ( v18 == v16 )
    return *(double *)Scaleform::GFx::GFxNaN_Bytes;
  return result;
}

double __fastcall Scaleform::GFx::NumberUtil::StringToInt(
        const char *str,
        unsigned int strLen,
        int radix,
        unsigned int *endIndex)
{
  char v4; // r13
  int v6; // er14
  unsigned int v7; // er15
  bool v9; // bp
  unsigned int v10; // ebx
  unsigned int Length; // esi
  __int64 v12; // r15
  unsigned int CharAt; // eax
  unsigned __int64 v14; // rcx
  unsigned int ByteIndex; // eax
  volatile int *v16; // rbx
  __int64 v17; // rcx
  char v19; // dl
  int v20; // esi
  __int64 v21; // rdx
  __int64 v22; // rdx
  double v23; // xmm3_8
  double v24; // xmm2_8
  int v25; // ecx
  __int64 v26; // r8
  char v27; // cl
  int v28; // eax
  int v29; // ebx
  const char *v30; // r8
  int v31; // er9
  unsigned int v32; // er8
  char v33; // cl
  char v34; // r10
  char v35; // r9
  char v36; // r11
  char v37; // cl
  int v38; // eax
  char v39; // cl
  int v40; // eax
  char v41; // cl
  unsigned int v42; // edx
  const char *v43; // r8
  char v44; // cl
  int v45; // eax
  Scaleform::String v47; // [rsp+78h] [rbp+20h] BYREF

  v4 = 0;
  *endIndex = 0;
  v6 = radix;
  v7 = strLen;
  v9 = 1;
  if ( !radix )
  {
    v6 = 10;
    goto LABEL_5;
  }
  if ( (unsigned int)(radix - 2) <= 0x22 )
  {
    v9 = radix == 16;
LABEL_5:
    Scaleform::String::String(&v47, str);
    v10 = 0;
    Length = Scaleform::String::GetLength(&v47);
    if ( Length )
    {
      v12 = 0x30000000FFFi64;
      do
      {
        CharAt = Scaleform::String::GetCharAt(&v47, v10);
        if ( CharAt != 32 && CharAt - 9 > 4 )
        {
          v14 = CharAt - 0x2000;
          if ( ((unsigned int)v14 > 0x29 || !_bittest64(&v12, v14)) && CharAt != 8287 && CharAt != 12288 )
            break;
        }
        ++v10;
      }
      while ( v10 < Length );
      v7 = strLen;
    }
    ByteIndex = Scaleform::UTF8Util::GetByteIndex(v10, str, v7);
    v16 = (volatile int *)(v47.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    *endIndex = ByteIndex;
    if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v16 + 2, -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v16);
    v17 = *endIndex;
    if ( (_DWORD)v17 == v7 )
      return 0.0;
    v19 = str[v17];
    if ( v19 == 45 )
    {
      v20 = -1;
    }
    else
    {
      v20 = 1;
      if ( v19 != 43 )
        goto LABEL_23;
    }
    *endIndex = v17 + 1;
LABEL_23:
    if ( v9 )
    {
      v21 = *endIndex;
      if ( v7 - (unsigned int)v21 > 1 && str[v21] == 48 && ((str[(unsigned int)(v21 + 1)] - 88) & 0xDF) == 0 )
      {
        v6 = 16;
        *endIndex = v21 + 2;
        if ( v7 == (_DWORD)v21 + 2 )
          goto LABEL_40;
      }
    }
    v22 = *endIndex;
    v23 = 0.0;
    v24 = 0.0;
    LOBYTE(v25) = 0;
    if ( (unsigned int)v22 < v7 )
    {
      do
      {
        v26 = *endIndex;
        v27 = str[v26];
        if ( (unsigned __int8)(v27 - 48) > 9u )
        {
          if ( (unsigned __int8)(v27 - 97) > 0x19u )
          {
            if ( (unsigned __int8)(v27 - 65) > 0x19u )
              v25 = -1;
            else
              v25 = v27 - 55;
          }
          else
          {
            v25 = v27 - 87;
          }
        }
        else
        {
          v25 = v27 - 48;
        }
        if ( v25 >= v6 )
          break;
        if ( v25 < 0 )
          break;
        *endIndex = v26 + 1;
        v24 = (double)v6 * v24 + (double)v25;
      }
      while ( (int)v26 + 1 < v7 );
    }
    if ( *endIndex == (_DWORD)v22 )
    {
LABEL_40:
      v47.pData = *(Scaleform::String::DataDesc **)Scaleform::GFx::GFxNaN_Bytes;
      return *(double *)Scaleform::GFx::GFxNaN_Bytes;
    }
    if ( v24 < 9.007199254740992e15 )
      return (double)v20 * v24;
    if ( (unsigned int)v6 > 0x10 )
      return (double)v20 * v24;
    v28 = 65796;
    if ( !_bittest(&v28, v6) )
      return (double)v20 * v24;
    v29 = 1;
    if ( v6 == 8 )
    {
      v29 = 3;
    }
    else if ( v6 == 16 )
    {
      v29 = 4;
    }
    if ( (unsigned int)v22 < v7 )
    {
      v30 = &str[v22];
      do
      {
        if ( *v30 != 48 )
          break;
        v22 = (unsigned int)(v22 + 1);
        ++v30;
      }
      while ( (unsigned int)v22 < v7 );
    }
    v24 = 0.0;
    v31 = 0;
    if ( (unsigned int)v22 < v7 )
    {
      v32 = 0;
      while ( v32 <= 0x34 )
      {
        v33 = str[v22];
        if ( (unsigned __int8)(v33 - 48) > 9u )
        {
          if ( (unsigned __int8)(v33 - 97) > 0x19u )
          {
            if ( (unsigned __int8)(v33 - 65) > 0x19u )
              v25 = -1;
            else
              v25 = v33 - 55;
          }
          else
          {
            v25 = v33 - 87;
          }
        }
        else
        {
          v25 = v33 - 48;
        }
        v22 = (unsigned int)(v22 + 1);
        if ( v25 >= v6 || v25 < 0 )
        {
          LOBYTE(v25) = 0;
          break;
        }
        ++v31;
        v32 += v29;
        v24 = (double)v6 * v24 + (double)v25;
        if ( (unsigned int)v22 >= v7 )
          break;
      }
    }
    if ( (unsigned int)(v29 * v31) <= 0x34 )
      return (double)v20 * v24;
    v34 = 0;
    v35 = 0;
    v36 = 0;
    if ( v6 != 2 )
    {
      if ( v6 != 8 )
      {
        if ( v6 != 16 )
          goto LABEL_104;
        v35 = v25 & 1;
        v34 = v25 & 1;
        if ( (unsigned int)v22 >= v7 )
          goto LABEL_104;
        v37 = str[v22];
        if ( (unsigned __int8)(v37 - 48) > 9u )
        {
          if ( (unsigned __int8)(v37 - 97) > 0x19u )
          {
            if ( (unsigned __int8)(v37 - 65) > 0x19u )
            {
LABEL_104:
              v42 = v22 + 1;
              if ( v42 < v7 )
              {
                v43 = &str[v42];
                do
                {
                  v44 = *v43;
                  if ( (unsigned __int8)(*v43 - 48) > 9u )
                  {
                    if ( (unsigned __int8)(v44 - 97) > 0x19u )
                    {
                      if ( (unsigned __int8)(v44 - 65) > 0x19u )
                        break;
                      v45 = v44 - 55;
                    }
                    else
                    {
                      v45 = v44 - 87;
                    }
                  }
                  else
                  {
                    v45 = v44 - 48;
                  }
                  if ( v45 == -1 )
                    break;
                  if ( v45 >= v6 )
                    break;
                  v4 += v29;
                  v34 |= v45 != 0;
                  ++v42;
                  ++v43;
                }
                while ( v42 < v7 );
              }
              if ( v36 && (v35 || v34) )
                v23 = DOUBLE_1_0;
              v24 = (v23 + v24) * (double)(1 << v4);
              return (double)v20 * v24;
            }
            v38 = v37 - 55;
          }
          else
          {
            v38 = v37 - 87;
          }
        }
        else
        {
          v38 = v37 - 48;
        }
        if ( v38 == -1 || v38 >= 16 )
          goto LABEL_104;
        v36 = (v38 & 8) != 0;
        v34 = (v38 & 3) != 0;
LABEL_103:
        v4 = v29;
        goto LABEL_104;
      }
      if ( (unsigned int)v22 < v7 )
      {
        v39 = str[v22];
        if ( (unsigned __int8)(v39 - 48) <= 9u )
        {
          v40 = v39 - 48;
LABEL_88:
          if ( v40 != -1 && v40 < 8 )
            goto LABEL_91;
          goto LABEL_90;
        }
        if ( (unsigned __int8)(v39 - 97) <= 0x19u )
        {
          v40 = v39 - 87;
          goto LABEL_88;
        }
        if ( (unsigned __int8)(v39 - 65) <= 0x19u )
        {
          v40 = v39 - 55;
          goto LABEL_88;
        }
      }
LABEL_90:
      LOBYTE(v40) = 0;
LABEL_91:
      v35 = (v40 & 2) != 0;
LABEL_102:
      v36 = v40 & 1;
      goto LABEL_103;
    }
    v35 = v25 & 1;
    if ( (unsigned int)v22 < v7 )
    {
      v41 = str[v22];
      if ( (unsigned __int8)(v41 - 48) <= 9u )
      {
        v40 = v41 - 48;
LABEL_99:
        if ( v40 != -1 && v40 < 2 )
          goto LABEL_102;
        goto LABEL_101;
      }
      if ( (unsigned __int8)(v41 - 97) <= 0x19u )
      {
        v40 = v41 - 87;
        goto LABEL_99;
      }
      if ( (unsigned __int8)(v41 - 65) <= 0x19u )
      {
        v40 = v41 - 55;
        goto LABEL_99;
      }
    }
LABEL_101:
    LOBYTE(v40) = 0;
    goto LABEL_102;
  }
  return *(double *)Scaleform::GFx::GFxNaN_Bytes;
}

// attributes: thunk
bool __fastcall Scaleform::GFx::ASUtils::AS3::Unescape(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::StringBuffer *b,
        bool useUtf8)
{
  return Scaleform::GFx::ASUtils::AS3::Formatter::Unescape(psrc, length, b, useUtf8);
}

void __fastcall Scaleform::GFx::ASUtils::Unescape(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::String *punescapedStr)
{
  const char *v3; // rbx
  const char *v4; // rsi
  char *v5; // rcx
  int v7; // edi
  int v8; // edx
  int v9; // er8
  int v10; // eax
  int v11; // edx
  int v12; // edx
  int v13; // er8
  char putf8str[255]; // [rsp+20h] [rbp-118h] BYREF
  char v15; // [rsp+11Fh] [rbp-19h] BYREF

  v3 = psrc;
  v4 = &psrc[length];
  v5 = putf8str;
  while ( v3 < v4 )
  {
    v7 = *(unsigned __int8 *)v3++;
    if ( v5 + 1 >= &v15 )
    {
      *v5 = 0;
      Scaleform::String::AppendString(punescapedStr, putf8str, -1i64);
      v5 = putf8str;
    }
    if ( v7 == 37 )
    {
      v8 = *(unsigned __int8 *)v3;
      if ( (unsigned int)(v8 - 97) <= 0x19 )
        v8 -= 32;
      v9 = *((unsigned __int8 *)v3 + 1);
      if ( (unsigned int)(v9 - 97) <= 0x19 )
        v9 -= 32;
      v10 = v8 - 48;
      v3 += 2;
      v11 = v8 - 55;
      if ( v10 > 9 )
        v10 = v11;
      v12 = v9 - 48;
      v13 = v9 - 55;
      if ( v12 > 9 )
        v12 = v13;
      if ( v10 >= 16 || v12 >= 16 )
        continue;
      *v5 = v12 + 16 * v10;
    }
    else
    {
      *v5 = v7;
    }
    ++v5;
  }
  *v5 = 0;
  Scaleform::String::AppendString(punescapedStr, putf8str, -1i64);
}

char __fastcall Scaleform::GFx::ASUtils::AS3::Formatter::Unescape(
        const char *psrc,
        unsigned __int64 length,
        Scaleform::StringBuffer *b,
        bool useUtf8)
{
  const char *v4; // rdi
  char *v7; // rbx
  unsigned int v8; // eax
  char *v9; // r14
  bool v10; // si
  unsigned int v11; // edx
  char *v12; // r9
  int i; // er8
  char v14; // al
  unsigned __int8 v15; // al
  unsigned __int16 Hex; // ax
  Scaleform::StringBuffer *v17; // rcx
  char *pStr; // [rsp+50h] [rbp+8h] BYREF

  v4 = &psrc[length];
  v7 = (char *)psrc;
  if ( psrc >= &psrc[length] )
    return 1;
  while ( 1 )
  {
    v8 = *v7++;
    pStr = v7;
    if ( v8 == 37 )
      break;
    v11 = v8;
    v17 = b;
LABEL_29:
    Scaleform::StringBuffer::AppendChar(v17, v11);
    if ( v7 >= v4 )
      return 1;
  }
  v9 = v7;
  v10 = useUtf8 && *v7 != 117;
  if ( *v7 == 117 )
  {
    LOWORD(v11) = 0;
    v12 = v7;
    for ( i = 0; i < 4; ++i )
    {
      if ( v7 >= v4 )
        break;
      v14 = *v7;
      if ( (unsigned __int8)(*v7 - 48) > 9u && (unsigned __int8)(v14 - 65) > 5u && (unsigned __int8)(v14 - 97) > 5u )
        break;
      ++v7;
      if ( (unsigned __int8)(v14 - 48) > 9u )
      {
        if ( (unsigned __int8)(v14 - 65) > 5u )
        {
          if ( (unsigned __int8)(v14 - 97) > 5u )
          {
            --v7;
            v15 = 0;
          }
          else
          {
            v15 = v14 - 87;
          }
        }
        else
        {
          v15 = v14 - 55;
        }
      }
      else
      {
        v15 = v14 - 48;
      }
      LOWORD(v11) = v15 | (unsigned __int16)(16 * v11);
    }
    v11 = (unsigned __int16)v11;
    if ( v7 - v12 < 4 )
      v7 = v12;
  }
  else
  {
    Hex = Scaleform::GFx::ASUtils::AS3::Formatter::ReadHex((const char **)&pStr, v4, 2u);
    v7 = pStr;
    v11 = Hex;
  }
  if ( v7 != v9 )
  {
    v17 = b;
    if ( v10 )
      v11 = (char)v11;
    goto LABEL_29;
  }
  return 0;
}

void __fastcall Scaleform::GFx::ASUtils::AS3::Formatter::WriteHexWord(Scaleform::StringBuffer *b, unsigned __int16 v)
{
  unsigned __int8 v2; // bl
  __int16 v3; // di
  char v5; // al
  unsigned __int8 v6; // al
  unsigned __int8 v7; // di
  unsigned __int8 v8; // di
  char v9; // al
  unsigned __int8 v10; // al
  unsigned __int8 v11; // bl
  unsigned __int8 v12; // bl

  v2 = v;
  v3 = HIBYTE(v);
  v5 = HIBYTE(v) >> 4;
  if ( (unsigned __int8)(HIBYTE(v) >> 4) >= 0xAu )
    v6 = v5 + 55;
  else
    v6 = v5 + 48;
  Scaleform::StringBuffer::AppendChar(b, v6);
  v7 = v3 & 0xF;
  if ( v7 >= 0xAu )
    v8 = v7 + 55;
  else
    v8 = v7 + 48;
  Scaleform::StringBuffer::AppendChar(b, v8);
  v9 = v2 >> 4;
  if ( (unsigned __int8)(v2 >> 4) >= 0xAu )
    v10 = v9 + 55;
  else
    v10 = v9 + 48;
  Scaleform::StringBuffer::AppendChar(b, v10);
  v11 = v2 & 0xF;
  if ( v11 >= 0xAu )
    v12 = v11 + 55;
  else
    v12 = v11 + 48;
  Scaleform::StringBuffer::AppendChar(b, v12);
}

