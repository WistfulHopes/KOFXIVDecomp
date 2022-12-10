#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::WStringBuffer::~WStringBuffer(); // 0x140386EA0
bool Scaleform::WStringBuffer::Resize(unsigned long long size); // 0x140386EC0
void Scaleform::WStringBuffer::SetString(const char * putf8str, unsigned long long utf8Sz); // 0x140386F90
void Scaleform::WStringBuffer::SetString(const wchar_t * pstr, unsigned long long length); // 0x140387010
void Scaleform::WStringBuffer::StripTrailingNewLines(); // 0x140387070void __fastcall Scaleform::WStringBuffer::~WStringBuffer(Scaleform::WStringBuffer *this)
{
  if ( this->pText != this->Reserved.pBuffer )
  {
    if ( this->pText )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  }
}

bool __fastcall Scaleform::WStringBuffer::Resize(Scaleform::WStringBuffer *this, unsigned __int64 size)
{
  wchar_t *v4; // rax
  wchar_t *v5; // rsi
  wchar_t *pText; // rcx

  if ( size <= this->Length || size < this->Reserved.Size )
  {
    pText = this->pText;
    if ( pText )
      pText[size] = 0;
    this->Length = size;
    LOBYTE(v4) = 1;
  }
  else
  {
    v4 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 2 * size + 2, 0i64);
    v5 = v4;
    if ( v4 )
    {
      if ( this->pText )
        memmove(v4, this->pText, 2 * this->Length + 2);
      v5[size] = 0;
      if ( this->pText != this->Reserved.pBuffer && this->pText )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      this->pText = v5;
      LOBYTE(v4) = 1;
      this->Length = size;
    }
  }
  return (char)v4;
}

void __fastcall Scaleform::WStringBuffer::SetString(
        Scaleform::WStringBuffer *this,
        const char *putf8str,
        unsigned __int64 utf8Sz)
{
  __int64 v3; // rbx
  unsigned __int64 Length; // rsi

  v3 = utf8Sz;
  if ( utf8Sz == -1i64 )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( putf8str[v3] );
  }
  Length = Scaleform::UTF8Util::GetLength(putf8str, v3);
  if ( Scaleform::WStringBuffer::Resize(this, Length) )
  {
    if ( v3 )
      Scaleform::UTF8Util::DecodeStringSafe(this->pText, Length + 1, putf8str, v3);
  }
}

void __fastcall Scaleform::WStringBuffer::SetString(
        Scaleform::WStringBuffer *this,
        const wchar_t *pstr,
        unsigned __int64 length)
{
  unsigned __int64 v3; // rbx

  v3 = length;
  if ( length == -1i64 )
    v3 = Scaleform::SFwcslen(pstr);
  if ( Scaleform::WStringBuffer::Resize(this, v3) )
  {
    if ( v3 )
      memmove(this->pText, pstr, 2 * v3 + 2);
  }
}

void __fastcall Scaleform::WStringBuffer::StripTrailingNewLines(Scaleform::WStringBuffer *this)
{
  signed __int64 Length; // rdx
  __int64 i; // rdx
  wchar_t *v3; // r8

  Length = this->Length;
  if ( Length > 0 && !this->pText[Length - 1] )
    --Length;
  for ( i = Length - 1; i >= 0; *v3 = 0 )
  {
    v3 = &this->pText[i];
    if ( *v3 != 10 && *v3 != 13 )
      break;
    --this->Length;
    --i;
  }
}

