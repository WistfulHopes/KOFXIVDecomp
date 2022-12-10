#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

long long Scaleform::UTF8Util::GetLength(const char * buf, long long buflen); // 0x14031E9E0
unsigned long Scaleform::UTF8Util::GetCharAt(long long index, const char * putf8str, long long length); // 0x14031E4E0
long long Scaleform::UTF8Util::GetByteIndex(long long index, const char * putf8str, long long length); // 0x14031E2F0
long Scaleform::UTF8Util::GetEncodeCharSize(unsigned long ucs_character); // 0x14031E8F0
unsigned long Scaleform::UTF8Util::DecodeNextChar_Advance0(const char * * putf8Buffer); // 0x14031D6A0
void Scaleform::UTF8Util::EncodeChar(char * pbuffer, long long * pindex, unsigned long ucs_character); // 0x14031DDD0
void Scaleform::UTF8Util::EncodeString(char * pbuff, const wchar_t * pchar, long long length); // 0x14031E020
void Scaleform::UTF8Util::EncodeCharSafe(char * pbuffer, unsigned long long buffLen, long long * pindex, unsigned long ucs_character); // 0x14031DEE0
long long Scaleform::UTF8Util::GetEncodeStringSize(const wchar_t * pchar, long long length); // 0x14031E950
void Scaleform::UTF8Util::EncodeStringSafe(char * pbuff, unsigned long long buffLen, const wchar_t * pchar, long long length); // 0x14031E230
unsigned long long Scaleform::UTF8Util::DecodeStringSafe(wchar_t * pbuff, unsigned long long buffLen, const char * putf8str, long long bytesLen); // 0x14031DA00__int64 __fastcall Scaleform::UTF8Util::DecodeNextChar_Advance0(const char **putf8Buffer)
{
  char v2; // dl
  const char *v3; // rcx
  __int64 result; // rax
  char v5; // r8
  char v6; // dl
  int v7; // er8
  unsigned int v8; // er8
  char v9; // r8
  char v10; // dl
  int v11; // er8
  const char *v12; // rcx
  int v13; // er8
  char v14; // dl
  unsigned int v15; // er8
  char v16; // r8
  char v17; // dl
  int v18; // er8
  const char *v19; // r10
  char v20; // cl
  int v21; // er8
  const char *v22; // r10
  int v23; // er8
  char v24; // dl
  unsigned int v25; // er8
  char v26; // r8
  char v27; // dl
  int v28; // er8
  const char *v29; // r10
  char v30; // cl
  int v31; // er8
  const char *v32; // r10
  int v33; // er8
  char v34; // cl
  const char *v35; // r10
  int v36; // er8
  char v37; // dl
  unsigned int v38; // er8
  char v39; // r8
  char v40; // dl
  int v41; // er8
  const char *v42; // r10
  char v43; // cl
  int v44; // er8
  const char *v45; // r10
  int v46; // er8
  char v47; // cl
  const char *v48; // r10
  int v49; // er8
  char v50; // cl
  const char *v51; // r10
  int v52; // er8
  char v53; // dl
  unsigned int v54; // er8

  v2 = **putf8Buffer;
  v3 = *putf8Buffer + 1;
  *putf8Buffer = v3;
  if ( !v2 )
    return 0i64;
  if ( v2 >= 0 )
    return (unsigned int)v2;
  if ( (v2 & 0xE0) == 0xC0 )
  {
    v5 = v2;
    v6 = *v3;
    v7 = (v5 & 0x1F) << 6;
    if ( *v3 )
    {
      result = 65533i64;
      if ( (v6 & 0xC0) == 0x80 )
      {
        *putf8Buffer = v3 + 1;
        v8 = v6 & 0x3F | v7;
        if ( v8 < 0x80 )
          return 65533;
        return v8;
      }
      return result;
    }
    return 0i64;
  }
  if ( (v2 & 0xF0) != 0xE0 )
  {
    if ( (v2 & 0xF8) == 0xF0 )
    {
      v16 = v2;
      v17 = *v3;
      v18 = (v16 & 7) << 18;
      if ( !*v3 )
        return 0i64;
      if ( (v17 & 0xC0) == 0x80 )
      {
        v19 = v3 + 1;
        *putf8Buffer = v3 + 1;
        v20 = v3[1];
        v21 = ((v17 & 0x3F) << 12) | v18;
        if ( !v20 )
          return 0i64;
        if ( (v20 & 0xC0) == 0x80 )
        {
          v22 = v19 + 1;
          *putf8Buffer = v22;
          v23 = ((v20 & 0x3F) << 6) | v21;
          v24 = *v22;
          if ( !*v22 )
            return 0i64;
          result = 65533i64;
          if ( (v24 & 0xC0) == 0x80 )
          {
            *putf8Buffer = v22 + 1;
            v25 = v24 & 0x3F | v23;
            if ( v25 < 0x10000 )
              return 65533;
            return v25;
          }
          return result;
        }
      }
    }
    else if ( (v2 & 0xFC) == 0xF8 )
    {
      v26 = v2;
      v27 = *v3;
      v28 = (v26 & 3) << 24;
      if ( !*v3 )
        return 0i64;
      if ( (v27 & 0xC0) == 0x80 )
      {
        v29 = v3 + 1;
        *putf8Buffer = v3 + 1;
        v30 = v3[1];
        v31 = ((v27 & 0x3F) << 18) | v28;
        if ( !v30 )
          return 0i64;
        if ( (v30 & 0xC0) == 0x80 )
        {
          v32 = v29 + 1;
          *putf8Buffer = v32;
          v33 = ((v30 & 0x3F) << 12) | v31;
          v34 = *v32;
          if ( !*v32 )
            return 0i64;
          if ( (v34 & 0xC0) == 0x80 )
          {
            v35 = v32 + 1;
            *putf8Buffer = v35;
            v36 = ((v34 & 0x3F) << 6) | v33;
            v37 = *v35;
            if ( !*v35 )
              return 0i64;
            result = 65533i64;
            if ( (v37 & 0xC0) == 0x80 )
            {
              *putf8Buffer = v35 + 1;
              v38 = v37 & 0x3F | v36;
              if ( v38 < 0x200000 )
                return 65533;
              return v38;
            }
            return result;
          }
        }
      }
    }
    else if ( (v2 & 0xFE) == 0xFC )
    {
      v39 = v2;
      v40 = *v3;
      v41 = (v39 & 1) << 30;
      if ( !*v3 )
        return 0i64;
      if ( (v40 & 0xC0) == 0x80 )
      {
        v42 = v3 + 1;
        *putf8Buffer = v3 + 1;
        v43 = v3[1];
        v44 = ((v40 & 0x3F) << 24) | v41;
        if ( !v43 )
          return 0i64;
        if ( (v43 & 0xC0) == 0x80 )
        {
          v45 = v42 + 1;
          *putf8Buffer = v45;
          v46 = ((v43 & 0x3F) << 18) | v44;
          v47 = *v45;
          if ( !*v45 )
            return 0i64;
          if ( (v47 & 0xC0) == 0x80 )
          {
            v48 = v45 + 1;
            *putf8Buffer = v48;
            v49 = ((v47 & 0x3F) << 12) | v46;
            v50 = *v48;
            if ( !*v48 )
              return 0i64;
            if ( (v50 & 0xC0) == 0x80 )
            {
              v51 = v48 + 1;
              *putf8Buffer = v51;
              v52 = ((v50 & 0x3F) << 6) | v49;
              v53 = *v51;
              if ( !*v51 )
                return 0i64;
              result = 65533i64;
              if ( (v53 & 0xC0) == 0x80 )
              {
                *putf8Buffer = v51 + 1;
                v54 = v53 & 0x3F | v52;
                if ( v54 < 0x4000000 )
                  return 65533;
                return v54;
              }
              return result;
            }
          }
        }
      }
    }
    return 65533i64;
  }
  v9 = v2;
  v10 = *v3;
  v11 = (v9 & 0xF) << 12;
  if ( !*v3 )
    return 0i64;
  if ( (v10 & 0xC0) != 0x80 )
    return 65533i64;
  v12 = v3 + 1;
  *putf8Buffer = v12;
  v13 = ((v10 & 0x3F) << 6) | v11;
  v14 = *v12;
  if ( !*v12 )
    return 0i64;
  result = 65533i64;
  if ( (v14 & 0xC0) == 0x80 )
  {
    *putf8Buffer = v12 + 1;
    v15 = v14 & 0x3F | v13;
    if ( v15 < 0x800 )
      return 65533;
    return v15;
  }
  return result;
}

__int64 __fastcall Scaleform::UTF8Util::DecodeStringSafe(
        wchar_t *pbuff,
        unsigned __int64 buffLen,
        const char *putf8str,
        __int64 bytesLen)
{
  const char *v5; // rbx
  wchar_t *v6; // r14
  wchar_t *v8; // rbp
  char v10; // cl
  unsigned int v11; // eax
  char v12; // dl
  bool v13; // cf
  char v14; // dl
  int v15; // eax
  char v16; // dl
  char v17; // dl
  int v18; // eax
  char v19; // dl
  int v20; // eax
  char v21; // dl
  char v22; // dl
  int v23; // eax
  char v24; // dl
  int v25; // eax
  char v26; // dl
  int v27; // eax
  char v28; // dl
  char v29; // dl
  int v30; // eax
  char v31; // dl
  int v32; // eax
  char v33; // dl
  int v34; // eax
  char v35; // dl
  int v36; // eax
  char v37; // dl
  unsigned int Char_Advance0; // eax
  char *putf8Buffer; // [rsp+48h] [rbp+10h] BYREF

  v5 = putf8str;
  v6 = pbuff;
  if ( !buffLen )
    return 0i64;
  v8 = &pbuff[buffLen];
  if ( bytesLen == -1 )
  {
    if ( pbuff < v8 )
    {
      while ( 1 )
      {
        v10 = *v5++;
        if ( !v10 )
          goto LABEL_61;
        if ( v10 >= 0 )
        {
          v11 = v10;
          goto LABEL_52;
        }
        if ( (v10 & 0xE0) == 0xC0 )
          break;
        if ( (v10 & 0xF0) == 0xE0 )
        {
          v14 = *v5;
          if ( !*v5 )
            goto LABEL_61;
          if ( (v14 & 0xC0) != 0x80 )
            goto LABEL_13;
          ++v5;
          v15 = ((v14 & 0x3F) << 6) | ((v10 & 0xF) << 12);
          v16 = *v5;
          if ( !*v5 )
            goto LABEL_61;
          if ( (v16 & 0xC0) != 0x80 )
            goto LABEL_13;
          ++v5;
          v11 = v16 & 0x3F | v15;
          v13 = v11 < 0x800;
          goto LABEL_12;
        }
        if ( (v10 & 0xF8) == 0xF0 )
        {
          v17 = *v5;
          if ( !*v5 )
            goto LABEL_61;
          if ( (v17 & 0xC0) != 0x80 )
            goto LABEL_13;
          ++v5;
          v18 = ((v17 & 0x3F) << 12) | ((v10 & 7) << 18);
          v19 = *v5;
          if ( !*v5 )
            goto LABEL_61;
          if ( (v19 & 0xC0) != 0x80 )
            goto LABEL_13;
          ++v5;
          v20 = ((v19 & 0x3F) << 6) | v18;
          v21 = *v5;
          if ( !*v5 )
            goto LABEL_61;
          if ( (v21 & 0xC0) != 0x80 )
            goto LABEL_13;
          ++v5;
          v11 = v21 & 0x3F | v20;
          v13 = v11 < 0x10000;
          goto LABEL_12;
        }
        if ( (v10 & 0xFC) == 0xF8 )
        {
          v22 = *v5;
          if ( !*v5 )
            goto LABEL_61;
          if ( (v22 & 0xC0) != 0x80 )
            goto LABEL_13;
          ++v5;
          v23 = ((v22 & 0x3F) << 18) | ((v10 & 3) << 24);
          v24 = *v5;
          if ( !*v5 )
            goto LABEL_61;
          if ( (v24 & 0xC0) != 0x80 )
            goto LABEL_13;
          ++v5;
          v25 = ((v24 & 0x3F) << 12) | v23;
          v26 = *v5;
          if ( !*v5 )
            goto LABEL_61;
          if ( (v26 & 0xC0) != 0x80 )
            goto LABEL_13;
          ++v5;
          v27 = ((v26 & 0x3F) << 6) | v25;
          v28 = *v5;
          if ( !*v5 )
            goto LABEL_61;
          if ( (v28 & 0xC0) != 0x80 )
            goto LABEL_13;
          ++v5;
          v11 = v28 & 0x3F | v27;
          v13 = v11 < 0x200000;
          goto LABEL_12;
        }
        if ( (v10 & 0xFE) != 0xFC )
          goto LABEL_13;
        v29 = *v5;
        if ( !*v5 )
          goto LABEL_61;
        if ( (v29 & 0xC0) != 0x80 )
          goto LABEL_13;
        ++v5;
        v30 = ((v29 & 0x3F) << 24) | ((v10 & 1) << 30);
        v31 = *v5;
        if ( !*v5 )
          goto LABEL_61;
        if ( (v31 & 0xC0) != 0x80 )
          goto LABEL_13;
        ++v5;
        v32 = ((v31 & 0x3F) << 18) | v30;
        v33 = *v5;
        if ( !*v5 )
          goto LABEL_61;
        if ( (v33 & 0xC0) != 0x80 )
          goto LABEL_13;
        ++v5;
        v34 = ((v33 & 0x3F) << 12) | v32;
        v35 = *v5;
        if ( !*v5 )
          goto LABEL_61;
        if ( (v35 & 0xC0) != 0x80 )
          goto LABEL_13;
        ++v5;
        v36 = ((v35 & 0x3F) << 6) | v34;
        v37 = *v5;
        if ( !*v5 )
          goto LABEL_61;
        if ( (v37 & 0xC0) != 0x80 || (++v5, v11 = v37 & 0x3F | v36, v11 < 0x4000000) )
        {
LABEL_13:
          LOWORD(v11) = -3;
          goto LABEL_14;
        }
LABEL_52:
        if ( !v11 )
          goto LABEL_61;
        if ( v11 >= 0xFFFF )
          LOWORD(v11) = -3;
LABEL_14:
        *v6++ = v11;
        if ( v6 >= v8 )
          goto LABEL_61;
      }
      v12 = *v5;
      if ( !*v5 )
        goto LABEL_61;
      if ( (v12 & 0xC0) != 0x80 )
        goto LABEL_13;
      ++v5;
      v11 = v12 & 0x3F | ((v10 & 0x1F) << 6);
      v13 = v11 < 0x80;
LABEL_12:
      if ( v13 )
        goto LABEL_13;
      goto LABEL_52;
    }
  }
  else
  {
    putf8Buffer = (char *)putf8str;
    if ( bytesLen > 0 )
    {
      do
      {
        if ( v6 >= v8 )
          break;
        Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
        if ( Char_Advance0 >= 0xFFFF )
          LOWORD(Char_Advance0) = -3;
        *v6++ = Char_Advance0;
      }
      while ( putf8Buffer - v5 < bytesLen );
    }
  }
LABEL_61:
  *v6 = 0;
  return v6 - pbuff;
}

void __fastcall Scaleform::UTF8Util::EncodeChar(char *pbuffer, __int64 *pindex, unsigned int ucs_character)
{
  if ( ucs_character <= 0x7F )
  {
    pbuffer[(*pindex)++] = ucs_character;
    return;
  }
  if ( ucs_character > 0x7FF )
  {
    if ( ucs_character > 0xFFFF )
    {
      if ( ucs_character > 0x1FFFFF )
      {
        if ( ucs_character > 0x3FFFFFF )
        {
          if ( ucs_character > 0x7FFFFFFF )
            return;
          pbuffer[(*pindex)++] = (ucs_character >> 30) | 0xFC;
          pbuffer[*pindex] = HIBYTE(ucs_character) & 0x3F | 0x80;
        }
        else
        {
          pbuffer[*pindex] = HIBYTE(ucs_character) | 0xF8;
        }
        pbuffer[++*pindex] = (ucs_character >> 18) & 0x3F | 0x80;
      }
      else
      {
        pbuffer[*pindex] = (ucs_character >> 18) | 0xF0;
      }
      pbuffer[++*pindex] = (ucs_character >> 12) & 0x3F | 0x80;
    }
    else
    {
      pbuffer[*pindex] = (ucs_character >> 12) | 0xE0;
    }
    pbuffer[++*pindex] = (ucs_character >> 6) & 0x3F | 0x80;
  }
  else
  {
    pbuffer[*pindex] = (ucs_character >> 6) | 0xC0;
  }
  pbuffer[++*pindex] = ucs_character & 0x3F | 0x80;
  ++*pindex;
}

void __fastcall Scaleform::UTF8Util::EncodeCharSafe(
        char *pbuffer,
        unsigned __int64 buffLen,
        __int64 *pindex,
        unsigned int ucs_character)
{
  if ( ucs_character <= 0x7F )
  {
    if ( buffLen )
      pbuffer[(*pindex)++] = ucs_character;
    return;
  }
  if ( ucs_character <= 0x7FF )
  {
    if ( buffLen < 2 )
      return;
    pbuffer[*pindex] = (ucs_character >> 6) | 0xC0;
    goto LABEL_22;
  }
  if ( ucs_character <= 0xFFFF )
  {
    if ( buffLen < 3 )
      return;
    pbuffer[*pindex] = (ucs_character >> 12) | 0xE0;
    goto LABEL_21;
  }
  if ( ucs_character <= 0x1FFFFF )
  {
    if ( buffLen < 4 )
      return;
    pbuffer[*pindex] = (ucs_character >> 18) | 0xF0;
    goto LABEL_20;
  }
  if ( ucs_character <= 0x3FFFFFF )
  {
    if ( buffLen < 5 )
      return;
    pbuffer[*pindex] = HIBYTE(ucs_character) | 0xF8;
    goto LABEL_19;
  }
  if ( ucs_character <= 0x7FFFFFFF && buffLen >= 6 )
  {
    pbuffer[(*pindex)++] = (ucs_character >> 30) | 0xFC;
    pbuffer[*pindex] = HIBYTE(ucs_character) & 0x3F | 0x80;
LABEL_19:
    pbuffer[++*pindex] = (ucs_character >> 18) & 0x3F | 0x80;
LABEL_20:
    pbuffer[++*pindex] = (ucs_character >> 12) & 0x3F | 0x80;
LABEL_21:
    pbuffer[++*pindex] = (ucs_character >> 6) & 0x3F | 0x80;
LABEL_22:
    pbuffer[++*pindex] = ucs_character & 0x3F | 0x80;
    ++*pindex;
  }
}

void __fastcall Scaleform::UTF8Util::EncodeString(char *pbuff, const wchar_t *pchar, __int64 length)
{
  __int64 v3; // rbx
  const wchar_t *v4; // rsi
  int v6; // edx
  unsigned int v7; // ecx
  wchar_t v8; // ax
  __int64 pindex; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0i64;
  v4 = pchar;
  pindex = 0i64;
  if ( length == -1 )
  {
    v8 = *pchar;
    if ( *pchar )
    {
      do
      {
        Scaleform::UTF8Util::EncodeChar(pbuff, &pindex, v8);
        v8 = v4[++v3];
      }
      while ( v8 );
      pbuff[pindex] = 0;
    }
    else
    {
      *pbuff = 0;
    }
  }
  else
  {
    v6 = 0;
    if ( length <= 0 )
    {
      *pbuff = 0;
    }
    else
    {
      do
      {
        v7 = *v4;
        if ( v7 > 0x7F )
        {
          if ( v7 > 0x7FF )
          {
            pbuff[v3] = (v7 >> 12) | 0xE0;
            pbuff[v3 + 1] = (v7 >> 6) & 0x3F | 0x80;
            pbuff[v3 + 2] = v7 & 0x3F | 0x80;
            v3 += 3i64;
          }
          else
          {
            pbuff[v3] = (v7 >> 6) | 0xC0;
            pbuff[v3 + 1] = v7 & 0x3F | 0x80;
            v3 += 2i64;
          }
        }
        else
        {
          pbuff[v3++] = v7;
        }
        ++v6;
        ++v4;
      }
      while ( v6 < length );
      pbuff[v3] = 0;
    }
  }
}

void __fastcall Scaleform::UTF8Util::EncodeStringSafe(
        char *pbuff,
        unsigned __int64 buffLen,
        const wchar_t *pchar,
        __int64 length)
{
  __int64 v4; // rax
  int i; // esi
  __int64 pindex; // [rsp+48h] [rbp+10h] BYREF

  if ( buffLen )
  {
    v4 = 0i64;
    pindex = 0i64;
    if ( length == -1 )
    {
      if ( (__int64)buffLen > 0 )
      {
        do
        {
          if ( !*pchar )
            break;
          Scaleform::UTF8Util::EncodeCharSafe(pbuff, buffLen - v4, &pindex, *pchar);
          v4 = pindex;
          ++pchar;
        }
        while ( pindex < (__int64)buffLen );
      }
    }
    else
    {
      for ( i = 0; i < length; v4 = pindex )
      {
        if ( v4 >= (__int64)buffLen )
          break;
        Scaleform::UTF8Util::EncodeCharSafe(pbuff, buffLen - v4, &pindex, *pchar);
        ++i;
        ++pchar;
      }
    }
    pbuff[v4] = 0;
  }
}

__int64 __fastcall Scaleform::UTF8Util::GetByteIndex(__int64 index, const char *putf8str, __int64 length)
{
  __int64 v4; // rbx
  const char *v5; // r9
  __int64 v6; // rax
  char v7; // dl
  char v8; // cl
  char v9; // cl
  char v10; // cl
  char *putf8Buffer; // [rsp+38h] [rbp+10h] BYREF

  putf8Buffer = (char *)putf8str;
  v4 = index;
  v5 = putf8str;
  if ( length != -1 )
  {
    if ( length > 0 )
    {
      v6 = 0i64;
      while ( 1 )
      {
        if ( v4 <= 0 )
          return v5 - putf8str;
        v7 = *v5;
        ++v6;
        ++v5;
        if ( v7 > -1 )
          goto LABEL_32;
        if ( (v7 & 0xE0) == 0xC0 )
          goto LABEL_29;
        if ( (v7 & 0xF0) == 0xE0 )
          goto LABEL_8;
        if ( (v7 & 0xF8) == 0xF0 )
          goto LABEL_12;
        if ( (v7 & 0xFC) == 0xF8 )
          break;
        if ( (v7 & 0xFE) == 0xFC )
        {
          if ( *v5 )
          {
            if ( (*v5 & 0xC0) == 0x80 )
            {
              v8 = *++v5;
              ++v6;
              if ( v8 )
              {
                if ( (v8 & 0xC0) == 0x80 )
                {
                  v9 = *++v5;
                  ++v6;
                  if ( v9 )
                  {
                    if ( (v9 & 0xC0) == 0x80 )
                    {
                      v10 = *++v5;
                      ++v6;
                      if ( v10 )
                      {
                        if ( (v10 & 0xC0) == 0x80 )
                        {
LABEL_28:
                          ++v5;
                          ++v6;
LABEL_29:
                          if ( *v5 )
                          {
                            if ( (*v5 & 0xC0) == 0x80 )
                            {
                              ++v5;
                              ++v6;
                            }
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
LABEL_32:
        --v4;
        if ( v6 >= length )
          return v5 - putf8str;
      }
      if ( !*v5 || (*v5 & 0xC0) != 0x80 )
        goto LABEL_32;
      ++v5;
      ++v6;
LABEL_12:
      if ( !*v5 || (*v5 & 0xC0) != 0x80 )
        goto LABEL_32;
      ++v5;
      ++v6;
LABEL_8:
      if ( *v5 && (*v5 & 0xC0) == 0x80 )
        goto LABEL_28;
      goto LABEL_32;
    }
    return v5 - putf8str;
  }
  if ( index <= 0 )
    return v5 - putf8str;
  while ( 1 )
  {
    --v4;
    if ( !(unsigned int)Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer) )
      break;
    if ( v4 <= 0 )
      return putf8Buffer - putf8str;
  }
  return putf8Buffer - putf8str;
}

__int64 __fastcall Scaleform::UTF8Util::GetCharAt(__int64 index, const char *putf8str, __int64 length)
{
  __int64 result; // rax
  __int64 v6; // r9
  char v7; // cl
  char v8; // r8
  char v9; // r8
  int v10; // eax
  char v11; // r8
  char v12; // r8
  int v13; // eax
  char v14; // r8
  int v15; // eax
  char v16; // r8
  char v17; // r8
  int v18; // eax
  char v19; // r8
  int v20; // eax
  char v21; // r8
  int v22; // eax
  char v23; // r8
  char v24; // r8
  int v25; // eax
  char v26; // r8
  int v27; // eax
  char v28; // r8
  int v29; // eax
  char v30; // r8
  int v31; // eax
  char v32; // r8
  char *putf8Buffer; // [rsp+38h] [rbp+10h] BYREF

  result = 0i64;
  putf8Buffer = (char *)putf8str;
  if ( length == -1 )
  {
    while ( 1 )
    {
      result = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
      --index;
      if ( !(_DWORD)result )
        break;
      if ( index < 0 )
        return result;
    }
    return 0i64;
  }
  else if ( length > 0 )
  {
    v6 = 0i64;
    while ( 1 )
    {
      v7 = *putf8str;
      ++v6;
      ++putf8str;
      if ( !v7 )
      {
        result = 0i64;
        goto LABEL_74;
      }
      if ( v7 >= 0 )
      {
        result = (unsigned int)v7;
        goto LABEL_74;
      }
      if ( (v7 & 0xE0) == 0xC0 )
      {
        v8 = *putf8str;
        if ( !*putf8str )
        {
          result = 0i64;
          goto LABEL_74;
        }
        if ( (v8 & 0xC0) == 0x80 )
        {
          ++putf8str;
          ++v6;
          result = v8 & 0x3F | ((unsigned __int8)(v7 & 0x1F) << 6);
          if ( (unsigned int)result < 0x80 )
            result = 65533i64;
          goto LABEL_74;
        }
      }
      else if ( (v7 & 0xF0) == 0xE0 )
      {
        v9 = *putf8str;
        if ( !*putf8str )
        {
          result = 0i64;
          goto LABEL_74;
        }
        if ( (v9 & 0xC0) == 0x80 )
        {
          ++putf8str;
          ++v6;
          v10 = ((v9 & 0x3F) << 6) | ((v7 & 0xF) << 12);
          v11 = *putf8str;
          if ( !*putf8str )
          {
            result = 0i64;
            goto LABEL_74;
          }
          if ( (v11 & 0xC0) == 0x80 )
          {
            ++putf8str;
            ++v6;
            result = v11 & 0x3F | (unsigned int)v10;
            if ( (unsigned int)result < 0x800 )
              result = 65533i64;
            goto LABEL_74;
          }
        }
      }
      else if ( (v7 & 0xF8) == 0xF0 )
      {
        v12 = *putf8str;
        if ( !*putf8str )
        {
          result = 0i64;
          goto LABEL_74;
        }
        if ( (v12 & 0xC0) == 0x80 )
        {
          ++putf8str;
          ++v6;
          v13 = ((v12 & 0x3F) << 12) | ((v7 & 7) << 18);
          v14 = *putf8str;
          if ( !*putf8str )
          {
            result = 0i64;
            goto LABEL_74;
          }
          if ( (v14 & 0xC0) == 0x80 )
          {
            ++putf8str;
            ++v6;
            v15 = ((v14 & 0x3F) << 6) | v13;
            v16 = *putf8str;
            if ( !*putf8str )
            {
              result = 0i64;
              goto LABEL_74;
            }
            if ( (v16 & 0xC0) == 0x80 )
            {
              ++putf8str;
              ++v6;
              result = v16 & 0x3F | (unsigned int)v15;
              if ( (unsigned int)result < 0x10000 )
                result = 65533i64;
              goto LABEL_74;
            }
          }
        }
      }
      else if ( (v7 & 0xFC) == 0xF8 )
      {
        v17 = *putf8str;
        if ( !*putf8str )
        {
          result = 0i64;
          goto LABEL_74;
        }
        if ( (v17 & 0xC0) == 0x80 )
        {
          ++putf8str;
          ++v6;
          v18 = ((v17 & 0x3F) << 18) | ((v7 & 3) << 24);
          v19 = *putf8str;
          if ( !*putf8str )
          {
            result = 0i64;
            goto LABEL_74;
          }
          if ( (v19 & 0xC0) == 0x80 )
          {
            ++putf8str;
            ++v6;
            v20 = ((v19 & 0x3F) << 12) | v18;
            v21 = *putf8str;
            if ( !*putf8str )
            {
              result = 0i64;
              goto LABEL_74;
            }
            if ( (v21 & 0xC0) == 0x80 )
            {
              ++putf8str;
              ++v6;
              v22 = ((v21 & 0x3F) << 6) | v20;
              v23 = *putf8str;
              if ( !*putf8str )
              {
                result = 0i64;
                goto LABEL_74;
              }
              if ( (v23 & 0xC0) == 0x80 )
              {
                ++putf8str;
                ++v6;
                result = v23 & 0x3F | (unsigned int)v22;
                if ( (unsigned int)result < 0x200000 )
                  result = 65533i64;
                goto LABEL_74;
              }
            }
          }
        }
      }
      else if ( (v7 & 0xFE) == 0xFC )
      {
        v24 = *putf8str;
        if ( !*putf8str )
        {
          result = 0i64;
          goto LABEL_74;
        }
        if ( (v24 & 0xC0) == 0x80 )
        {
          ++putf8str;
          ++v6;
          v25 = ((v24 & 0x3F) << 24) | ((v7 & 1) << 30);
          v26 = *putf8str;
          if ( !*putf8str )
          {
            result = 0i64;
            goto LABEL_74;
          }
          if ( (v26 & 0xC0) == 0x80 )
          {
            ++putf8str;
            ++v6;
            v27 = ((v26 & 0x3F) << 18) | v25;
            v28 = *putf8str;
            if ( !*putf8str )
            {
              result = 0i64;
              goto LABEL_74;
            }
            if ( (v28 & 0xC0) == 0x80 )
            {
              ++putf8str;
              ++v6;
              v29 = ((v28 & 0x3F) << 12) | v27;
              v30 = *putf8str;
              if ( !*putf8str )
              {
                result = 0i64;
                goto LABEL_74;
              }
              if ( (v30 & 0xC0) == 0x80 )
              {
                ++putf8str;
                ++v6;
                v31 = ((v30 & 0x3F) << 6) | v29;
                v32 = *putf8str;
                if ( !*putf8str )
                {
                  result = 0i64;
                  goto LABEL_74;
                }
                if ( (v32 & 0xC0) == 0x80 )
                {
                  ++putf8str;
                  ++v6;
                  result = v32 & 0x3F | (unsigned int)v31;
                  if ( (unsigned int)result < 0x4000000 )
                    result = 65533i64;
                  goto LABEL_74;
                }
              }
            }
          }
        }
      }
      result = 65533i64;
LABEL_74:
      if ( index )
      {
        --index;
        if ( v6 < length )
          continue;
      }
      return result;
    }
  }
  return result;
}

__int64 __fastcall Scaleform::UTF8Util::GetEncodeCharSize(unsigned int ucs_character)
{
  __int64 result; // rax

  if ( ucs_character <= 0x7F )
    return 1i64;
  if ( ucs_character <= 0x7FF )
    return 2i64;
  if ( ucs_character <= 0xFFFF )
    return 3i64;
  if ( ucs_character <= 0x1FFFFF )
    return 4i64;
  if ( ucs_character <= 0x3FFFFFF )
    return 5i64;
  result = 0i64;
  if ( ucs_character <= 0x7FFFFFFF )
    return 6i64;
  return result;
}

__int64 __fastcall Scaleform::UTF8Util::GetEncodeStringSize(const wchar_t *pchar, __int64 length)
{
  __int64 v2; // r8
  const wchar_t *v3; // r9
  int v4; // er10
  unsigned int v5; // ecx
  __int64 v6; // rax
  wchar_t v8; // ax
  __int64 v9; // rdx
  __int64 v10; // rax

  v2 = 0i64;
  v3 = pchar;
  if ( length == -1 )
  {
    v8 = *pchar;
    if ( *pchar )
    {
      v9 = 0i64;
      do
      {
        if ( v8 > 0x7Fu )
          v10 = (v8 > 0x7FFu) + 2i64;
        else
          v10 = 1i64;
        ++v9;
        v2 += v10;
        v8 = pchar[v9];
      }
      while ( v8 );
    }
    return v2;
  }
  v4 = 0;
  if ( length <= 0 )
    return v2;
  do
  {
    v5 = *v3;
    if ( v5 > 0x7F )
      v6 = (v5 > 0x7FF) + 2i64;
    else
      v6 = 1i64;
    ++v4;
    v2 += v6;
    ++v3;
  }
  while ( v4 < length );
  return v2;
}

__int64 __fastcall Scaleform::UTF8Util::GetLength(const char *buf, __int64 buflen)
{
  __int64 v2; // rbx
  const char *v4; // r8
  __int64 result; // rax
  char v6; // dl
  char v7; // cl
  char v8; // cl
  char v9; // cl
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0i64;
  putf8Buffer = (char *)buf;
  v4 = buf;
  if ( buflen != -1 )
  {
    result = 0i64;
    if ( buflen <= 0 )
      return result;
    while ( 1 )
    {
      v6 = *v4;
      ++result;
      ++v4;
      if ( v6 > -1 )
        goto LABEL_30;
      if ( (v6 & 0xE0) == 0xC0 )
        goto LABEL_27;
      if ( (v6 & 0xF0) == 0xE0 )
        goto LABEL_6;
      if ( (v6 & 0xF8) == 0xF0 )
        goto LABEL_10;
      if ( (v6 & 0xFC) == 0xF8 )
        break;
      if ( (v6 & 0xFE) == 0xFC )
      {
        if ( *v4 )
        {
          if ( (*v4 & 0xC0) == 0x80 )
          {
            v7 = *++v4;
            ++result;
            if ( v7 )
            {
              if ( (v7 & 0xC0) == 0x80 )
              {
                v8 = *++v4;
                ++result;
                if ( v8 )
                {
                  if ( (v8 & 0xC0) == 0x80 )
                  {
                    v9 = *++v4;
                    ++result;
                    if ( v9 )
                    {
                      if ( (v9 & 0xC0) == 0x80 )
                      {
LABEL_26:
                        ++v4;
                        ++result;
LABEL_27:
                        if ( *v4 )
                        {
                          if ( (*v4 & 0xC0) == 0x80 )
                          {
                            ++v4;
                            ++result;
                          }
                        }
                      }
                    }
                  }
                }
              }
            }
          }
        }
      }
LABEL_30:
      ++v2;
      if ( result >= buflen )
        return v2;
    }
    if ( !*v4 || (*v4 & 0xC0) != 0x80 )
      goto LABEL_30;
    ++v4;
    ++result;
LABEL_10:
    if ( !*v4 || (*v4 & 0xC0) != 0x80 )
      goto LABEL_30;
    ++v4;
    ++result;
LABEL_6:
    if ( *v4 && (*v4 & 0xC0) == 0x80 )
      goto LABEL_26;
    goto LABEL_30;
  }
  for ( ; (unsigned int)Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer); ++v2 )
    ;
  return v2;
}

