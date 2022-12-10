#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"

const char * Scaleform::ScanPathProtocol(const char * url); // 0x140369FD0
bool Scaleform::String::HasAbsolutePath(const char * url); // 0x1402EF3A0
bool Scaleform::String::HasExtension(const char * path); // 0x140369F50
Scaleform::String Scaleform::String::GetPath(); // 0x140369E40
Scaleform::String Scaleform::String::GetProtocol(); // 0x140369EF0
Scaleform::String Scaleform::String::GetExtension(); // 0x140369DB0
Scaleform::String & Scaleform::String::StripExtension(); // 0x14036A060Scaleform::String *__fastcall Scaleform::String::GetExtension(Scaleform::String *this, Scaleform::String *result)
{
  const char *v3; // rbx
  unsigned int Char_Advance0; // eax
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  v3 = 0i64;
  putf8Buffer = (char *)((this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
  if ( Char_Advance0 )
  {
    do
    {
      if ( Char_Advance0 == 47 || Char_Advance0 == 92 )
      {
        v3 = 0i64;
      }
      else if ( Char_Advance0 == 46 )
      {
        v3 = putf8Buffer - 1;
      }
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    }
    while ( Char_Advance0 );
    --putf8Buffer;
  }
  else
  {
    --putf8Buffer;
  }
  Scaleform::String::String(result, v3);
  return result;
}

Scaleform::String *__fastcall Scaleform::String::GetPath(Scaleform::String *this, Scaleform::String *result)
{
  char *v3; // rbx
  unsigned int Char_Advance0; // eax
  unsigned __int64 v6; // rdx
  __int64 v7; // rbx
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  v3 = (char *)((this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  putf8Buffer = v3;
  Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
  if ( Char_Advance0 )
  {
    do
    {
      if ( Char_Advance0 == 47 || Char_Advance0 == 92 )
        v3 = putf8Buffer;
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    }
    while ( Char_Advance0 );
    --putf8Buffer;
  }
  else
  {
    --putf8Buffer;
  }
  v6 = this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  if ( v3 )
    v7 = (__int64)&v3[-v6 - 12];
  else
    v7 = *(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFFi64;
  Scaleform::String::String(result, (const char *)(v6 + 12), v7);
  return result;
}

Scaleform::String *__fastcall Scaleform::String::GetProtocol(Scaleform::String *this, Scaleform::String *result)
{
  const char *v4; // rax

  v4 = Scaleform::ScanPathProtocol((const char *)((this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12));
  if ( v4 )
    v4 = &v4[-(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - 12];
  Scaleform::String::String(
    result,
    (const char *)((this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    (unsigned __int64)v4);
  return result;
}

char __fastcall Scaleform::GFx::URLBuilder::IsPathAbsolute(const char *url)
{
  unsigned int Char_Advance0; // eax
  unsigned int v2; // eax
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  putf8Buffer = (char *)url;
  if ( !url || !*url )
    return 1;
  Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
  if ( !Char_Advance0 )
    --putf8Buffer;
  if ( Char_Advance0 == 47 || Char_Advance0 == 92 )
    return 1;
  while ( Char_Advance0 )
  {
    do
    {
      if ( Char_Advance0 == 58 )
      {
        v2 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
        if ( v2 )
        {
          if ( v2 == 47 || v2 == 92 )
            return 1;
        }
        else
        {
          --putf8Buffer;
        }
      }
      else if ( Char_Advance0 == 47 || Char_Advance0 == 92 )
      {
        return 0;
      }
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    }
    while ( Char_Advance0 );
    --putf8Buffer;
  }
  return 0;
}

bool __fastcall Scaleform::String::HasExtension(const char *path)
{
  char *v1; // rbx
  unsigned int Char_Advance0; // eax
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  putf8Buffer = (char *)path;
  v1 = 0i64;
  Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
  if ( Char_Advance0 )
  {
    do
    {
      if ( Char_Advance0 == 47 || Char_Advance0 == 92 )
      {
        v1 = 0i64;
      }
      else if ( Char_Advance0 == 46 )
      {
        v1 = putf8Buffer - 1;
      }
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    }
    while ( Char_Advance0 );
    --putf8Buffer;
  }
  else
  {
    --putf8Buffer;
  }
  return v1 != 0i64;
}

char *__fastcall Scaleform::ScanPathProtocol(const char *url)
{
  unsigned int Char_Advance0; // eax
  unsigned int v2; // ebx
  unsigned int v3; // eax
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  putf8Buffer = (char *)url;
  Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
  if ( !Char_Advance0 )
    --putf8Buffer;
  if ( !Char_Advance0 )
    return 0i64;
  while ( Char_Advance0 != 58 )
  {
LABEL_11:
    Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    if ( !Char_Advance0 )
    {
      --putf8Buffer;
      return 0i64;
    }
  }
  v2 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
  if ( !v2 )
    --putf8Buffer;
  v3 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
  if ( !v3 )
  {
    --putf8Buffer;
    goto LABEL_11;
  }
  if ( v3 != 47 || v2 != 47 )
    goto LABEL_11;
  return putf8Buffer;
}

Scaleform::String *__fastcall Scaleform::String::StripExtension(Scaleform::String *this)
{
  char *v2; // rbx
  unsigned int Char_Advance0; // eax
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0i64;
  putf8Buffer = (char *)((this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
  Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
  if ( Char_Advance0 )
  {
    do
    {
      if ( Char_Advance0 == 47 || Char_Advance0 == 92 )
      {
        v2 = 0i64;
      }
      else if ( Char_Advance0 == 46 )
      {
        v2 = putf8Buffer - 1;
      }
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
    }
    while ( Char_Advance0 );
    --putf8Buffer;
    if ( v2 )
      Scaleform::String::AssignString(
        this,
        (const char *)((this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
        (unsigned __int64)&v2[-(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) - 12]);
  }
  else
  {
    --putf8Buffer;
  }
  return this;
}

