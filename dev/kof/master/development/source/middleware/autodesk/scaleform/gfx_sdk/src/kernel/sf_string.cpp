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

Scaleform::String::DataDesc Scaleform::String::NullData; // 0x1409F9000
Scaleform::StringDataPtr Scaleform::StringDataPtr::Null; // 0x1409F9010
Scaleform::String::String(); // 0x1402D9960
Scaleform::String::String(const char * pdata); // 0x1402D97E0
Scaleform::String::String(const char * pdata1, const char * pdata2, const char * pdata3); // 0x1402D9710
Scaleform::String::String(const char * pdata, unsigned long long size); // 0x1402D9880
Scaleform::String::String(const Scaleform::String & src); // 0x1402D95B0
Scaleform::String::String(const Scaleform::StringBuffer & src); // 0x1402D9670
Scaleform::String::String(const wchar_t * data); // 0x1402D9910
Scaleform::String::DataDesc * Scaleform::String::AllocDataCopy1(Scaleform::MemoryHeap * pheap, unsigned long long size, unsigned long long lengthIsSize, const char * pdata, unsigned long long copySize); // 0x1402DA0C0
Scaleform::String::DataDesc * Scaleform::String::AllocDataCopy2(Scaleform::MemoryHeap * pheap, unsigned long long size, unsigned long long lengthIsSize, const char * pdata1, unsigned long long copySize1, const char * pdata2, unsigned long long copySize2); // 0x1402DA150
unsigned long long Scaleform::String::GetLength(); // 0x1402DACE0
unsigned long Scaleform::String::GetCharAt(unsigned long long index); // 0x1402DAC90
void Scaleform::String::AppendChar(unsigned long ch); // 0x1402DA1F0
void Scaleform::String::AppendString(const wchar_t * pstr, long long len); // 0x1402DA4D0
void Scaleform::String::AppendString(const char * putf8str, long long utf8StrSz); // 0x1402DA3C0
void Scaleform::String::AssignString(const Scaleform::String::InitStruct & src, unsigned long long size); // 0x1402DA6D0
void Scaleform::String::AssignString(const char * putf8str, unsigned long long size); // 0x1402DA7D0
void Scaleform::String::operator=(const char * pstr); // 0x1402D9D90
void Scaleform::String::operator=(const wchar_t * pwstr); // 0x1402D9DC0
void Scaleform::String::operator=(const Scaleform::String & src); // 0x1402D9B40
void Scaleform::String::operator=(const Scaleform::StringBuffer & src); // 0x1402D9C80
void Scaleform::String::operator+=(const Scaleform::String & src); // 0x1402D9FC0
Scaleform::String Scaleform::String::operator+(const char * str); // 0x1402D9F70
Scaleform::String Scaleform::String::operator+(const Scaleform::String & src); // 0x1402D9F30
Scaleform::String Scaleform::String::Substring(unsigned long long start, unsigned long long end); // 0x1402DAFD0
void Scaleform::String::Clear(); // 0x1402DA940
Scaleform::String Scaleform::String::ToUpper(); // 0x1402DB1F0
Scaleform::String Scaleform::String::ToLower(); // 0x1402DB0F0
long Scaleform::String::CompareNoCase(const char * a, const char * b); // 0x1402DA9C0
long Scaleform::String::CompareNoCase(const char * a, const char * b, long long len); // 0x1402DA9D0
unsigned long long Scaleform::String::BernsteinHashFunction(const void * pdataIn, unsigned long long size, unsigned long long seed); // 0x1402DA8D0
unsigned long long Scaleform::String::BernsteinHashFunctionCIS(const void * pdataIn, unsigned long long size, unsigned long long seed); // 0x1402DA900
Scaleform::StringLH::StringLH(); // 0x1402D9AE0
Scaleform::StringLH::StringLH(const char * pdata); // 0x1402D9A30
void Scaleform::StringLH::CopyConstructHelper(const Scaleform::String & src); // 0x1402DAB70
Scaleform::StringDH::StringDH(Scaleform::MemoryHeap * pheap); // 0x1402D99F0
void Scaleform::StringDH::CopyConstructHelper(const Scaleform::String & src, Scaleform::MemoryHeap * pheap); // 0x1402DAA90
Scaleform::StringBuffer::StringBuffer(Scaleform::MemoryHeap * pheap); // 0x1402D9990
Scaleform::StringBuffer::StringBuffer(const char * data, unsigned long long dataSize, Scaleform::MemoryHeap * pheap); // 0x1402D99B0
Scaleform::StringBuffer::~StringBuffer(); // 0x1402D9B20
unsigned long long Scaleform::StringBuffer::GetLength(); // 0x1402DAD40
void Scaleform::StringBuffer::Reserve(unsigned long long _size); // 0x1402DAEF0
void Scaleform::StringBuffer::Resize(unsigned long long _size); // 0x1402DAF50
void Scaleform::StringBuffer::Clear(); // 0x1402DA9B0
void Scaleform::StringBuffer::AppendChar(unsigned long ch); // 0x1402DA340
void Scaleform::StringBuffer::AppendString(const wchar_t * pstr, long long len); // 0x1402DA650
void Scaleform::StringBuffer::AppendString(const char * putf8str, long long utf8StrSz); // 0x1402DA5E0
void Scaleform::StringBuffer::operator=(const char * pstr); // 0x1402D9ED0
Scaleform::StringDataPtr Scaleform::StringDataPtr::GetTruncateWhitespace(); // 0x1402DADC0
long long Scaleform::StringDataPtr::FindLastChar(char c, unsigned long long init_ind); // 0x1402DAC50
Scaleform::StringDataPtr Scaleform::StringDataPtr::GetNextToken(char separator); // 0x1402DAD80//decompilation failure at 1409F9000!
//decompilation failure at 1409F9010!
void __fastcall Scaleform::String::String(Scaleform::String *this, const Scaleform::String *src)
{
  Scaleform::MemoryHeap *pData; // r9
  unsigned __int64 v3; // rbx

  pData = 0i64;
  v3 = src->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  switch ( (__int64)src->pData & 3 )
  {
    case 0i64:
      goto LABEL_8;
    case 1i64:
      pData = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, const Scaleform::String *, _QWORD, _QWORD))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(
                                         Scaleform::Memory::pGlobalHeap,
                                         src,
                                         ((__int64)src->pData & 3) - 1,
                                         0i64);
      break;
    case 2i64:
      pData = (Scaleform::MemoryHeap *)src[1].pData;
      break;
  }
  if ( pData == Scaleform::Memory::pGlobalHeap )
  {
LABEL_8:
    this->HeapTypeBits = v3;
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((volatile int *)(v3 + 8), 1);
  }
  else
  {
    this->HeapTypeBits = (unsigned __int64)Scaleform::String::AllocDataCopy1(
                                             this,
                                             Scaleform::Memory::pGlobalHeap,
                                             *(_QWORD *)v3 & 0x7FFFFFFFFFFFFFFFi64,
                                             *(_QWORD *)v3 & 0x8000000000000000ui64,
                                             (const char *)(v3 + 12),
                                             *(_QWORD *)v3 & 0x7FFFFFFFFFFFFFFFi64);
  }
}

void __fastcall Scaleform::String::String(Scaleform::String *this, const Scaleform::StringBuffer *src)
{
  char *pData; // rsi
  unsigned __int64 Size; // rdi
  Scaleform::String::DataDesc *v5; // rbx

  pData = (char *)&pnewText;
  Size = src->Size;
  if ( src->pData )
    pData = src->pData;
  if ( Size )
  {
    v5 = (Scaleform::String::DataDesc *)Scaleform::Memory::pGlobalHeap->Alloc(
                                          Scaleform::Memory::pGlobalHeap,
                                          Size + 16,
                                          0i64);
    v5->Data[Size] = 0;
    v5->RefCount = 1;
    v5->Size = Size;
  }
  else
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v5 = &Scaleform::String::NullData;
  }
  memmove(v5->Data, pData, Size);
  this->HeapTypeBits = (unsigned __int64)v5;
}

void __fastcall Scaleform::String::String(
        Scaleform::String *this,
        const char *pdata1,
        const char *pdata2,
        const char *pdata3)
{
  size_t v4; // rdi
  unsigned __int64 copySize1; // rsi
  unsigned __int64 copySize2; // rbp
  Scaleform::String::DataDesc *v9; // rbx

  v4 = -1i64;
  if ( pdata1 )
  {
    copySize1 = -1i64;
    do
      ++copySize1;
    while ( pdata1[copySize1] );
  }
  else
  {
    copySize1 = 0i64;
  }
  if ( pdata2 )
  {
    copySize2 = -1i64;
    do
      ++copySize2;
    while ( pdata2[copySize2] );
  }
  else
  {
    copySize2 = 0i64;
  }
  if ( pdata3 )
  {
    do
      ++v4;
    while ( pdata3[v4] );
  }
  else
  {
    v4 = 0i64;
  }
  v9 = Scaleform::String::AllocDataCopy2(
         this,
         Scaleform::Memory::pGlobalHeap,
         copySize1 + v4 + copySize2,
         0i64,
         pdata1,
         copySize1,
         pdata2,
         copySize2);
  memmove(&v9->Data[copySize2 + copySize1], pdata3, v4);
  this->HeapTypeBits = (unsigned __int64)v9;
}

void __fastcall Scaleform::String::String(Scaleform::String *this, const char *pdata)
{
  size_t v4; // rbx
  Scaleform::String::DataDesc *v5; // rsi

  if ( !pdata )
  {
    v4 = 0i64;
LABEL_7:
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v5 = &Scaleform::String::NullData;
    goto LABEL_8;
  }
  v4 = -1i64;
  do
    ++v4;
  while ( pdata[v4] );
  if ( !v4 )
    goto LABEL_7;
  v5 = (Scaleform::String::DataDesc *)Scaleform::Memory::pGlobalHeap->Alloc(
                                        Scaleform::Memory::pGlobalHeap,
                                        v4 + 16,
                                        0i64);
  v5->Data[v4] = 0;
  v5->RefCount = 1;
  v5->Size = v4;
LABEL_8:
  memmove(v5->Data, pdata, v4);
  this->HeapTypeBits = (unsigned __int64)v5;
}

void __fastcall Scaleform::String::String(Scaleform::String *this, const char *pdata, unsigned __int64 size)
{
  Scaleform::String::DataDesc *v6; // rbx

  if ( size )
  {
    v6 = (Scaleform::String::DataDesc *)Scaleform::Memory::pGlobalHeap->Alloc(
                                          Scaleform::Memory::pGlobalHeap,
                                          size + 16,
                                          0i64);
    v6->Data[size] = 0;
    v6->RefCount = 1;
    v6->Size = size;
  }
  else
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v6 = &Scaleform::String::NullData;
  }
  memmove(v6->Data, pdata, size);
  this->HeapTypeBits = (unsigned __int64)v6;
}

void __fastcall Scaleform::String::String(Scaleform::String *this, const wchar_t *data)
{
  this->HeapTypeBits = (unsigned __int64)&Scaleform::String::NullData;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
  if ( data )
    Scaleform::String::operator=(this, data);
}

void __fastcall Scaleform::String::String(Scaleform::String *this)
{
  this->HeapTypeBits = (unsigned __int64)&Scaleform::String::NullData;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
}

void __fastcall Scaleform::StringBuffer::StringBuffer(Scaleform::StringBuffer *this, Scaleform::MemoryHeap *pheap)
{
  this->GrowSize = 512i64;
  this->pData = 0i64;
  this->Size = 0i64;
  this->BufferSize = 0i64;
  this->LengthIsSize = 0;
  this->pHeap = pheap;
}

void __fastcall Scaleform::StringBuffer::StringBuffer(
        Scaleform::StringBuffer *this,
        const char *data,
        unsigned __int64 dataSize,
        Scaleform::MemoryHeap *pheap)
{
  this->GrowSize = 512i64;
  this->pData = 0i64;
  this->Size = 0i64;
  this->BufferSize = 0i64;
  this->LengthIsSize = 0;
  this->pHeap = pheap;
  Scaleform::StringBuffer::AppendString(this, data, dataSize);
}

void __fastcall Scaleform::StringDH::StringDH(Scaleform::StringDH *this, Scaleform::MemoryHeap *pheap)
{
  this->pHeap = pheap;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
  this->HeapTypeBits = (unsigned __int64)&Scaleform::String::NullData.Size + 2;
}

void __fastcall Scaleform::StringLH::StringLH(Scaleform::StringLH *this, const char *pdata)
{
  size_t v4; // rbx
  Scaleform::MemoryHeap *v5; // rax
  unsigned __int64 v6; // rsi

  if ( pdata )
  {
    v4 = -1i64;
    do
      ++v4;
    while ( pdata[v4] );
  }
  else
  {
    v4 = 0i64;
  }
  v5 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  if ( v4 )
  {
    v6 = (unsigned __int64)v5->Alloc(v5, v4 + 16, 0i64);
    *(_BYTE *)(v6 + v4 + 12) = 0;
    *(_DWORD *)(v6 + 8) = 1;
    *(_QWORD *)v6 = v4;
  }
  else
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v6 = (unsigned __int64)&Scaleform::String::NullData;
  }
  memmove((void *)(v6 + 12), pdata, v4);
  this->HeapTypeBits = v6 | 1;
}

void __fastcall Scaleform::StringLH::StringLH(Scaleform::StringLH *this)
{
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
  this->HeapTypeBits = (unsigned __int64)&Scaleform::String::NullData.Size + 1;
}

void __fastcall Scaleform::StringBuffer::~StringBuffer(Scaleform::StringBuffer *this)
{
  if ( this->pData )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
}

void __fastcall Scaleform::String::operator=(Scaleform::String *this, const Scaleform::String *src)
{
  Scaleform::MemoryHeap *v2; // rdi
  Scaleform::MemoryHeap *pData; // rsi
  unsigned __int64 v6; // r14
  volatile int *v7; // rbp

  v2 = 0i64;
  pData = 0i64;
  if ( ((__int64)this->pData & 3) != 0 )
  {
    if ( ((__int64)this->pData & 3) == 1 )
    {
      pData = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    }
    else if ( ((__int64)this->pData & 3) == 2 )
    {
      pData = (Scaleform::MemoryHeap *)this[1].pData;
    }
  }
  else
  {
    pData = Scaleform::Memory::pGlobalHeap;
  }
  v6 = src->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  v7 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( ((__int64)src->pData & 3) != 0 )
  {
    if ( ((__int64)src->pData & 3) == 1 )
    {
      v2 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, src);
    }
    else if ( ((__int64)src->pData & 3) == 2 )
    {
      v2 = (Scaleform::MemoryHeap *)src[1].pData;
    }
  }
  else
  {
    v2 = Scaleform::Memory::pGlobalHeap;
  }
  if ( pData == v2 )
  {
    this->HeapTypeBits = v6 | (__int64)this->pData & 3;
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((volatile int *)(v6 + 8), 1);
  }
  else
  {
    this->HeapTypeBits = (unsigned __int64)Scaleform::String::AllocDataCopy1(
                                             this,
                                             pData,
                                             *(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFFi64,
                                             *(_QWORD *)v6 & 0x8000000000000000ui64,
                                             (const char *)(v6 + 12),
                                             *(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFFi64) | (__int64)this->pData & 3;
  }
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v7 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v7);
}

void __fastcall Scaleform::String::operator=(Scaleform::String *this, const Scaleform::StringBuffer *src, __int64 a3)
{
  char *v3; // r14
  volatile int *v4; // rbp
  unsigned __int64 Size; // rsi
  int pData; // ecx
  Scaleform::String::DataDesc *v8; // r9
  int v9; // ecx
  int v10; // ecx
  unsigned __int64 v11; // rbx

  v3 = (char *)&pnewText;
  v4 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  Size = src->Size;
  pData = (int)this->pData;
  if ( src->pData )
    v3 = src->pData;
  v8 = 0i64;
  v9 = pData & 3;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
        v8 = this[1].pData;
    }
    else
    {
      v8 = (Scaleform::String::DataDesc *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::String *, __int64, _QWORD))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(
                                            Scaleform::Memory::pGlobalHeap,
                                            this,
                                            a3,
                                            0i64);
    }
  }
  else
  {
    v8 = (Scaleform::String::DataDesc *)Scaleform::Memory::pGlobalHeap;
  }
  if ( Size )
  {
    v11 = (*(__int64 (__fastcall **)(Scaleform::String::DataDesc *, unsigned __int64, _QWORD))(v8->Size + 80))(
            v8,
            Size + 16,
            0i64);
    *(_BYTE *)(v11 + Size + 12) = 0;
    *(_DWORD *)(v11 + 8) = 1;
    *(_QWORD *)v11 = Size;
  }
  else
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v11 = (unsigned __int64)&Scaleform::String::NullData;
  }
  memmove((void *)(v11 + 12), v3, Size);
  this->HeapTypeBits = v11 | (__int64)this->pData & 3;
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
}

void __fastcall Scaleform::String::operator=(Scaleform::String *this, const char *pstr)
{
  unsigned __int64 v2; // r8

  if ( pstr )
  {
    v2 = -1i64;
    do
      ++v2;
    while ( pstr[v2] );
  }
  else
  {
    v2 = 0i64;
  }
  Scaleform::String::AssignString(this, pstr, v2);
}

void __fastcall Scaleform::String::operator=(Scaleform::String *this, const wchar_t *pwstr)
{
  Scaleform::MemoryHeap *pData; // rbx
  volatile int *v3; // rbp
  __int64 EncodeStringSize; // rsi
  unsigned __int64 v7; // rbx

  pData = 0i64;
  v3 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( pwstr )
    EncodeStringSize = Scaleform::UTF8Util::GetEncodeStringSize(pwstr, -1i64);
  else
    EncodeStringSize = 0i64;
  if ( ((__int64)this->pData & 3) != 0 )
  {
    if ( ((__int64)this->pData & 3) == 1 )
    {
      pData = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    }
    else if ( ((__int64)this->pData & 3) == 2 )
    {
      pData = (Scaleform::MemoryHeap *)this[1].pData;
    }
  }
  else
  {
    pData = Scaleform::Memory::pGlobalHeap;
  }
  if ( EncodeStringSize )
  {
    v7 = (unsigned __int64)pData->Alloc(pData, EncodeStringSize + 16, 0i64);
    *(_BYTE *)(v7 + EncodeStringSize + 12) = 0;
    *(_DWORD *)(v7 + 8) = 1;
    *(_QWORD *)v7 = EncodeStringSize;
  }
  else
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v7 = (unsigned __int64)&Scaleform::String::NullData;
  }
  Scaleform::UTF8Util::EncodeStringSafe((char *)(v7 + 12), EncodeStringSize + 1, pwstr, -1i64);
  this->HeapTypeBits = v7 | (__int64)this->pData & 3;
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
}

void __fastcall Scaleform::StringBuffer::operator=(Scaleform::StringBuffer *this, const char *pstr)
{
  const char *v2; // rdi
  unsigned __int64 v4; // rbx

  v2 = &pnewText;
  if ( pstr )
    v2 = pstr;
  v4 = -1i64;
  do
    ++v4;
  while ( v2[v4] );
  Scaleform::StringBuffer::Resize(this, v4);
  memmove(this->pData, v2, v4);
}

Scaleform::String *__fastcall Scaleform::String::operator+(
        Scaleform::String *this,
        Scaleform::String *result,
        const Scaleform::String *src)
{
  Scaleform::String::String(result, this);
  Scaleform::String::operator+=(result, src);
  return result;
}

Scaleform::String *__fastcall Scaleform::String::operator+(
        Scaleform::String *this,
        Scaleform::String *result,
        const char *str)
{
  const char *v5; // rdx

  Scaleform::String::String(result, this);
  v5 = &pnewText;
  if ( str )
    v5 = str;
  Scaleform::String::AppendString(result, v5, -1i64);
  return result;
}

void __fastcall Scaleform::String::operator+=(Scaleform::String *this, const Scaleform::String *src)
{
  volatile int *v3; // rdi
  unsigned __int64 v4; // r15
  Scaleform::MemoryHeap *pData; // rdx
  __int64 copySize1; // rbp
  __int64 copySize2; // r14
  unsigned __int64 v8; // rsi
  int v9; // ecx
  int v10; // ecx

  v3 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v4 = src->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  pData = 0i64;
  copySize1 = *(_QWORD *)v3 & 0x7FFFFFFFFFFFFFFFi64;
  copySize2 = *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFFi64;
  v8 = *(_QWORD *)v3 & *(_QWORD *)v4 & 0x8000000000000000ui64;
  v9 = (__int64)this->pData & 3;
  if ( v9 )
  {
    v10 = v9 - 1;
    if ( v10 )
    {
      if ( v10 == 1 )
        pData = (Scaleform::MemoryHeap *)this[1].pData;
    }
    else
    {
      pData = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    }
  }
  else
  {
    pData = Scaleform::Memory::pGlobalHeap;
  }
  this->HeapTypeBits = (unsigned __int64)Scaleform::String::AllocDataCopy2(
                                           this,
                                           pData,
                                           copySize2 + copySize1,
                                           v8,
                                           (const char *)v3 + 12,
                                           copySize1,
                                           (const char *)(v4 + 12),
                                           copySize2) | (__int64)this->pData & 3;
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
}

Scaleform::String::DataDesc *__fastcall Scaleform::String::AllocDataCopy1(
        Scaleform::String *this,
        Scaleform::MemoryHeap *pheap,
        unsigned __int64 size,
        unsigned __int64 lengthIsSize,
        const char *pdata,
        unsigned __int64 copySize)
{
  Scaleform::String::DataDesc *v8; // rbx

  if ( size )
  {
    v8 = (Scaleform::String::DataDesc *)pheap->Alloc(pheap, size + 16, 0i64);
    v8->Data[size] = 0;
    v8->Size = lengthIsSize | size;
    v8->RefCount = 1;
  }
  else
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v8 = &Scaleform::String::NullData;
  }
  memmove(v8->Data, pdata, copySize);
  return v8;
}

Scaleform::String::DataDesc *__fastcall Scaleform::String::AllocDataCopy2(
        Scaleform::String *this,
        Scaleform::MemoryHeap *pheap,
        unsigned __int64 size,
        unsigned __int64 lengthIsSize,
        const char *pdata1,
        unsigned __int64 copySize1,
        const char *pdata2,
        unsigned __int64 copySize2)
{
  Scaleform::String::DataDesc *v10; // rdi

  if ( size )
  {
    v10 = (Scaleform::String::DataDesc *)pheap->Alloc(pheap, size + 16, 0i64);
    v10->Data[size] = 0;
    v10->Size = lengthIsSize | size;
    v10->RefCount = 1;
  }
  else
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v10 = &Scaleform::String::NullData;
  }
  memmove(v10->Data, pdata1, copySize1);
  memmove(&v10->Data[copySize1], pdata2, copySize2);
  return v10;
}

void __fastcall Scaleform::String::AppendChar(Scaleform::String *this, unsigned int ch)
{
  Scaleform::MemoryHeap *pData; // rbx
  volatile int *v4; // r14
  __int64 v5; // rbp
  __int64 v6; // r15
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // rbx
  __int64 pindex; // [rsp+20h] [rbp-48h] BYREF
  char pbuffer[8]; // [rsp+28h] [rbp-40h] BYREF

  pData = 0i64;
  v4 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v5 = *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFFi64;
  pindex = 0i64;
  Scaleform::UTF8Util::EncodeCharSafe(pbuffer, 8ui64, &pindex, ch);
  if ( ((__int64)this->pData & 3) != 0 )
  {
    if ( ((__int64)this->pData & 3) == 1 )
    {
      pData = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    }
    else if ( ((__int64)this->pData & 3) == 2 )
    {
      pData = (Scaleform::MemoryHeap *)this[1].pData;
    }
  }
  else
  {
    pData = Scaleform::Memory::pGlobalHeap;
  }
  v6 = pindex;
  v7 = pindex + v5;
  if ( pindex + v5 )
  {
    v8 = (unsigned __int64)pData->Alloc(pData, v7 + 16, 0i64);
    *(_BYTE *)(v8 + v7 + 12) = 0;
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)v8 = v7;
  }
  else
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v8 = (unsigned __int64)&Scaleform::String::NullData;
  }
  memmove((void *)(v8 + 12), (const void *)(v4 + 3), v5);
  memmove((void *)(v8 + v5 + 12), pbuffer, v6);
  this->HeapTypeBits = v8 | (__int64)this->pData & 3;
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
}

void __fastcall Scaleform::StringBuffer::AppendChar(Scaleform::StringBuffer *this, unsigned int ch)
{
  unsigned __int64 Size; // rbx
  __int64 pindex; // [rsp+20h] [rbp-28h] BYREF
  char pbuffer[8]; // [rsp+28h] [rbp-20h] BYREF

  Size = this->Size;
  pindex = 0i64;
  Scaleform::UTF8Util::EncodeCharSafe(pbuffer, 8ui64, &pindex, ch);
  Scaleform::StringBuffer::Resize(this, Size + pindex);
  memmove(&this->pData[Size], pbuffer, pindex);
}

void __fastcall Scaleform::String::AppendString(Scaleform::String *this, const char *putf8str, __int64 utf8StrSz)
{
  __int64 copySize2; // rbx
  volatile int *v6; // r14
  Scaleform::MemoryHeap *pData; // rdx
  __int64 copySize1; // r15
  int v9; // ecx
  int v10; // ecx

  if ( putf8str )
  {
    copySize2 = utf8StrSz;
    if ( utf8StrSz )
    {
      if ( utf8StrSz == -1 )
      {
        copySize2 = -1i64;
        do
          ++copySize2;
        while ( putf8str[copySize2] );
      }
      v6 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      pData = 0i64;
      copySize1 = *(_QWORD *)v6 & 0x7FFFFFFFFFFFFFFFi64;
      v9 = (__int64)this->pData & 3;
      if ( v9 )
      {
        v10 = v9 - 1;
        if ( v10 )
        {
          if ( v10 == 1 )
            pData = (Scaleform::MemoryHeap *)this[1].pData;
        }
        else
        {
          pData = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
        }
      }
      else
      {
        pData = Scaleform::Memory::pGlobalHeap;
      }
      this->HeapTypeBits = (unsigned __int64)Scaleform::String::AllocDataCopy2(
                                               this,
                                               pData,
                                               copySize1 + copySize2,
                                               0i64,
                                               (const char *)v6 + 12,
                                               copySize1,
                                               putf8str,
                                               copySize2) | (__int64)this->pData & 3;
      if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v6 + 2, -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v6);
    }
  }
}

void __fastcall Scaleform::String::AppendString(Scaleform::String *this, const wchar_t *pstr, __int64 len)
{
  volatile int *v5; // r14
  __int64 copySize; // r15
  __int64 EncodeStringSize; // rax
  Scaleform::MemoryHeap *pData; // r10
  __int64 v10; // rbx
  __int64 v11; // rdi
  unsigned __int64 v12; // rbx

  if ( pstr )
  {
    v5 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    copySize = *(_QWORD *)v5 & 0x7FFFFFFFFFFFFFFFi64;
    EncodeStringSize = Scaleform::UTF8Util::GetEncodeStringSize(pstr, len);
    pData = 0i64;
    v10 = EncodeStringSize;
    if ( ((__int64)this->pData & 3) != 0 )
    {
      if ( ((__int64)this->pData & 3) == 1 )
      {
        pData = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
      }
      else if ( ((__int64)this->pData & 3) == 2 )
      {
        pData = (Scaleform::MemoryHeap *)this[1].pData;
      }
    }
    else
    {
      pData = Scaleform::Memory::pGlobalHeap;
    }
    v11 = v10 + copySize;
    v12 = (unsigned __int64)Scaleform::String::AllocDataCopy1(
                              this,
                              pData,
                              v10 + copySize,
                              0i64,
                              (const char *)v5 + 12,
                              copySize);
    Scaleform::UTF8Util::EncodeStringSafe((char *)(v12 + copySize + 12), v11 + 1, pstr, len);
    this->HeapTypeBits = v12 | (__int64)this->pData & 3;
    if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v5 + 2, -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v5);
  }
}

void __fastcall Scaleform::StringBuffer::AppendString(
        Scaleform::StringBuffer *this,
        const char *putf8str,
        __int64 utf8StrSz)
{
  __int64 v3; // rbx
  unsigned __int64 Size; // rdi

  if ( putf8str )
  {
    v3 = utf8StrSz;
    if ( utf8StrSz )
    {
      if ( utf8StrSz == -1 )
      {
        v3 = -1i64;
        do
          ++v3;
        while ( putf8str[v3] );
      }
      Size = this->Size;
      Scaleform::StringBuffer::Resize(this, Size + v3);
      memmove(&this->pData[Size], putf8str, v3);
    }
  }
}

void __fastcall Scaleform::StringBuffer::AppendString(Scaleform::StringBuffer *this, const wchar_t *pstr, __int64 len)
{
  __int64 EncodeStringSize; // rax
  unsigned __int64 Size; // rdi
  __int64 v8; // rbx

  if ( pstr )
  {
    EncodeStringSize = Scaleform::UTF8Util::GetEncodeStringSize(pstr, len);
    Size = this->Size;
    v8 = EncodeStringSize;
    Scaleform::StringBuffer::Resize(this, Size + EncodeStringSize);
    Scaleform::UTF8Util::EncodeStringSafe(&this->pData[Size], v8 + 1, pstr, len);
  }
}

void __fastcall Scaleform::String::AssignString(
        Scaleform::String *this,
        const Scaleform::String::InitStruct *src,
        unsigned __int64 size)
{
  volatile int *v4; // rbp
  Scaleform::MemoryHeap *pData; // rcx
  unsigned __int64 v8; // rdi

  v4 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  pData = 0i64;
  if ( ((__int64)this->pData & 3) != 0 )
  {
    if ( ((__int64)this->pData & 3) == 1 )
    {
      pData = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    }
    else if ( ((__int64)this->pData & 3) == 2 )
    {
      pData = (Scaleform::MemoryHeap *)this[1].pData;
    }
  }
  else
  {
    pData = Scaleform::Memory::pGlobalHeap;
  }
  if ( size )
  {
    v8 = (unsigned __int64)pData->Alloc(pData, size + 16, 0i64);
    *(_BYTE *)(v8 + size + 12) = 0;
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)v8 = size;
  }
  else
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v8 = (unsigned __int64)&Scaleform::String::NullData;
  }
  src->InitString((Scaleform::String::InitStruct *)src, (char *)(v8 + 12), size);
  this->HeapTypeBits = v8 | (__int64)this->pData & 3;
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
}

void __fastcall Scaleform::String::AssignString(Scaleform::String *this, const char *putf8str, unsigned __int64 size)
{
  volatile int *v4; // rbp
  Scaleform::MemoryHeap *pData; // rcx
  unsigned __int64 v8; // rdi

  v4 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  pData = 0i64;
  if ( ((__int64)this->pData & 3) != 0 )
  {
    if ( ((__int64)this->pData & 3) == 1 )
    {
      pData = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
    }
    else if ( ((__int64)this->pData & 3) == 2 )
    {
      pData = (Scaleform::MemoryHeap *)this[1].pData;
    }
  }
  else
  {
    pData = Scaleform::Memory::pGlobalHeap;
  }
  if ( size )
  {
    v8 = (unsigned __int64)pData->Alloc(pData, size + 16, 0i64);
    *(_BYTE *)(v8 + size + 12) = 0;
    *(_DWORD *)(v8 + 8) = 1;
    *(_QWORD *)v8 = size;
  }
  else
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
    v8 = (unsigned __int64)&Scaleform::String::NullData;
  }
  memmove((void *)(v8 + 12), putf8str, size);
  this->HeapTypeBits = v8 | (__int64)this->pData & 3;
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v4 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v4);
}

unsigned __int64 __fastcall Scaleform::String::BernsteinHashFunction(
        const void *pdataIn,
        unsigned __int64 size,
        unsigned __int64 seed)
{
  unsigned __int64 result; // rax
  __int64 v4; // r8

  for ( result = seed; size; result = v4 ^ (33 * result) )
    v4 = (unsigned __int8)*((char *)pdataIn + --size);
  return result;
}

unsigned __int64 __fastcall Scaleform::String::BernsteinHashFunctionCIS(
        const void *pdataIn,
        unsigned __int64 size,
        unsigned __int64 seed)
{
  unsigned int v4; // eax

  for ( ; size; seed = v4 ^ (33 * seed) )
  {
    v4 = (unsigned __int8)*((char *)pdataIn + --size);
    if ( v4 - 65 <= 0x19 )
      v4 += 32;
  }
  return seed;
}

void __fastcall Scaleform::String::Clear(Scaleform::String *this)
{
  volatile int *v2; // rbx

  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
  v2 = (volatile int *)(this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  this->HeapTypeBits = (unsigned __int64)&Scaleform::String::NullData | (__int64)this->pData & 3;
}

void __fastcall Scaleform::StringBuffer::Clear(Scaleform::StringBuffer *this)
{
  Scaleform::StringBuffer::Resize(this, 0i64);
}

// attributes: thunk
int __fastcall Scaleform::String::CompareNoCase(const char *a, const char *b)
{
  return Scaleform::SFstricmp(a, b);
}

__int64 __fastcall Scaleform::String::CompareNoCase(const char *a, const char *b, __int64 len)
{
  __int64 v3; // r10
  const char *v5; // rbx
  int v6; // er9
  int v7; // ecx
  __int64 v8; // rax
  __int64 v10; // rax

  v3 = len;
  if ( len )
  {
    v5 = b;
    do
    {
      v6 = *a;
      if ( (unsigned int)(v6 - 65) <= 0x19 )
        v6 += 32;
      v7 = *b;
      ++a;
      if ( (unsigned int)(v7 - 65) <= 0x19 )
        v7 += 32;
      ++b;
      if ( !--v3 || !v6 )
        break;
      if ( v6 != (__int64)v7 )
        return (unsigned int)(v6 - v7);
    }
    while ( *b );
    if ( v6 != (__int64)v7 || !v3 && !*b )
      return (unsigned int)(v6 - v7);
    v8 = -1i64;
    do
      ++v8;
    while ( v5[v8] );
    return (unsigned int)(len - v8);
  }
  else
  {
    v10 = -1i64;
    do
      ++v10;
    while ( b[v10] );
    return (unsigned int)-(int)v10;
  }
}

void __fastcall Scaleform::StringDH::CopyConstructHelper(
        Scaleform::StringDH *this,
        const Scaleform::String *src,
        Scaleform::MemoryHeap *pheap)
{
  unsigned __int64 v4; // rbx
  Scaleform::MemoryHeap *pData; // r9

  v4 = src->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  pData = 0i64;
  if ( ((__int64)src->pData & 3) != 0 )
  {
    if ( ((__int64)src->pData & 3) == 1 )
    {
      pData = (Scaleform::MemoryHeap *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, const Scaleform::String *, _QWORD, _QWORD))Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL)(
                                         Scaleform::Memory::pGlobalHeap,
                                         src,
                                         ((__int64)src->pData & 3) - 1,
                                         0i64);
    }
    else if ( ((__int64)src->pData & 3) == 2 )
    {
      pData = (Scaleform::MemoryHeap *)src[1].pData;
    }
  }
  else
  {
    pData = Scaleform::Memory::pGlobalHeap;
  }
  if ( !pheap )
    pheap = pData;
  this->pHeap = pheap;
  if ( pData == pheap )
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((volatile int *)(v4 + 8), 1);
    this->HeapTypeBits = v4 | 2;
  }
  else
  {
    this->HeapTypeBits = (unsigned __int64)Scaleform::String::AllocDataCopy1(
                                             this,
                                             pheap,
                                             *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFFi64,
                                             *(_QWORD *)v4 & 0x8000000000000000ui64,
                                             (const char *)(v4 + 12),
                                             *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFFi64) | 2;
  }
}

void __fastcall Scaleform::StringLH::CopyConstructHelper(Scaleform::StringLH *this, const Scaleform::String *src)
{
  unsigned __int64 v4; // rbx
  Scaleform::MemoryHeap *v5; // rbp
  Scaleform::MemoryHeap *pData; // rax

  v4 = src->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  v5 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, this);
  pData = 0i64;
  if ( ((__int64)src->pData & 3) != 0 )
  {
    if ( ((__int64)src->pData & 3) == 1 )
    {
      pData = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, src);
    }
    else if ( ((__int64)src->pData & 3) == 2 )
    {
      pData = (Scaleform::MemoryHeap *)src[1].pData;
    }
  }
  else
  {
    pData = Scaleform::Memory::pGlobalHeap;
  }
  if ( pData == v5 )
  {
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((volatile int *)(v4 + 8), 1);
    this->HeapTypeBits = v4 | 1;
  }
  else
  {
    this->HeapTypeBits = (unsigned __int64)Scaleform::String::AllocDataCopy1(
                                             this,
                                             v5,
                                             *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFFi64,
                                             *(_QWORD *)v4 & 0x8000000000000000ui64,
                                             (const char *)(v4 + 12),
                                             *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFFi64) | 1;
  }
}

unsigned __int64 __fastcall Scaleform::StringDataPtr::FindLastChar(
        Scaleform::StringDataPtr *this,
        char c,
        unsigned __int64 init_ind)
{
  unsigned __int64 Size; // r8

  if ( init_ind == -1i64 || init_ind > this->Size )
    Size = this->Size;
  else
    Size = init_ind + 1;
  if ( !Size )
    return -1i64;
  while ( this->pStr[Size - 1] != c )
  {
    if ( !--Size )
      return -1i64;
  }
  return Size - 1;
}

unsigned int __fastcall Scaleform::String::GetCharAt(Scaleform::String *this, unsigned __int64 index)
{
  unsigned __int64 v3; // rax
  const char *v4; // rdx
  char *putf8Buffer; // [rsp+30h] [rbp+8h] BYREF

  v3 = this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  v4 = (const char *)(v3 + 12);
  putf8Buffer = (char *)(v3 + 12);
  if ( *(__int64 *)v3 >= 0 )
    return Scaleform::UTF8Util::GetCharAt(index, v4, *(_QWORD *)v3 & 0x7FFFFFFFFFFFFFFFi64);
  putf8Buffer = (char *)&v4[index];
  return Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
}

__int64 __fastcall Scaleform::String::GetLength(Scaleform::String *this)
{
  unsigned __int64 v1; // rbx
  __int64 v2; // rdi
  __int64 result; // rax

  v1 = this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  v2 = *(_QWORD *)v1 & 0x7FFFFFFFFFFFFFFFi64;
  if ( *(__int64 *)v1 < 0 )
    return *(_QWORD *)v1 & 0x7FFFFFFFFFFFFFFFi64;
  result = Scaleform::UTF8Util::GetLength((const char *)(v1 + 12), *(_QWORD *)v1 & 0x7FFFFFFFFFFFFFFFi64);
  if ( result == v2 )
    *(_QWORD *)v1 |= 0x8000000000000000ui64;
  return result;
}

unsigned __int64 __fastcall Scaleform::StringBuffer::GetLength(Scaleform::StringBuffer *this)
{
  unsigned __int64 result; // rax

  if ( this->LengthIsSize )
    return this->Size;
  result = Scaleform::UTF8Util::GetLength(this->pData, this->Size);
  if ( result == this->Size )
    this->LengthIsSize = 1;
  return result;
}

Scaleform::StringDataPtr *__fastcall Scaleform::StringDataPtr::GetNextToken(
        Scaleform::StringDataPtr *this,
        Scaleform::StringDataPtr *result,
        char separator)
{
  unsigned __int64 Size; // r10
  unsigned __int64 v4; // rax
  const char *i; // r9
  char v6; // cl
  Scaleform::StringDataPtr *v7; // rax

  Size = this->Size;
  v4 = 0i64;
  for ( i = this->pStr; v4 < Size; ++v4 )
  {
    v6 = i[v4];
    if ( !v6 )
      break;
    if ( v6 == separator )
      break;
  }
  result->Size = v4;
  v7 = result;
  result->pStr = i;
  return v7;
}

Scaleform::StringDataPtr *__fastcall Scaleform::StringDataPtr::GetTruncateWhitespace(
        Scaleform::StringDataPtr *this,
        Scaleform::StringDataPtr *result)
{
  char *pStr; // rbx
  char v3; // r14
  const char *v5; // rsi
  const char *v7; // rbp
  __int64 v8; // r12
  bool v9; // zf
  unsigned int Char_Advance0; // eax
  unsigned __int64 v11; // rcx
  unsigned int v12; // eax
  unsigned int v13; // edx
  unsigned int v14; // eax
  char *putf8Buffer; // [rsp+50h] [rbp+8h] BYREF
  char *v17; // [rsp+60h] [rbp+18h] BYREF

  pStr = (char *)this->pStr;
  v3 = 0;
  v5 = &this->pStr[this->Size];
  putf8Buffer = pStr;
  v7 = pStr;
  v8 = 0x30000000FFFi64;
  v9 = pStr == v5;
  if ( pStr < v5 )
  {
    while ( 1 )
    {
      v7 = pStr;
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
      if ( Char_Advance0 != 32 && Char_Advance0 - 9 > 4 )
      {
        v11 = Char_Advance0 - 0x2000;
        if ( ((unsigned int)v11 > 0x29 || !_bittest64(&v8, v11)) && Char_Advance0 != 8287 && Char_Advance0 != 12288 )
          break;
      }
      pStr = putf8Buffer;
      if ( putf8Buffer >= v5 )
        goto LABEL_11;
    }
    pStr = putf8Buffer;
    v3 = 1;
LABEL_11:
    v9 = pStr == v5;
  }
  if ( !v9 || v3 )
  {
    v17 = pStr;
    while ( v17 < v5 )
    {
      v12 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&v17);
      v13 = v12;
      if ( v12 != 8287 )
      {
        v14 = v12 - 0x2000;
        if ( (v14 > 0x29 || !_bittest64(&v8, v14)) && v13 != 32 && v13 - 9 > 4 && v13 != 12288 )
          pStr = v17;
      }
    }
    if ( v7 == this->pStr && pStr == v5 )
    {
      *result = *this;
    }
    else
    {
      result->pStr = v7;
      result->Size = pStr - v7;
    }
  }
  else
  {
    result->pStr = 0i64;
    result->Size = 0i64;
  }
  return result;
}

void __fastcall Scaleform::StringBuffer::Reserve(Scaleform::StringBuffer *this, unsigned __int64 _size)
{
  char *pData; // r9
  unsigned __int64 v3; // rdx

  if ( _size >= this->BufferSize )
  {
    pData = this->pData;
    v3 = ~(this->GrowSize - 1) & (this->GrowSize + _size);
    this->BufferSize = v3;
    if ( pData )
      this->pData = (char *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, pData, v3);
    else
      this->pData = (char *)this->pHeap->Alloc(this->pHeap, v3, 0i64);
  }
}

void __fastcall Scaleform::StringBuffer::Resize(Scaleform::StringBuffer *this, unsigned __int64 _size)
{
  char *pData; // r9
  unsigned __int64 v5; // rdx
  char *v6; // rax
  char *v7; // rax

  if ( _size >= this->BufferSize )
  {
    pData = this->pData;
    v5 = ~(this->GrowSize - 1) & (this->GrowSize + _size);
    this->BufferSize = v5;
    if ( pData )
      v6 = (char *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, pData, v5);
    else
      v6 = (char *)this->pHeap->Alloc(this->pHeap, v5, 0i64);
    this->pData = v6;
  }
  v7 = this->pData;
  this->LengthIsSize = 0;
  this->Size = _size;
  if ( v7 )
    v7[_size] = 0;
}

Scaleform::String *__fastcall Scaleform::String::Substring(
        Scaleform::String *this,
        Scaleform::String *result,
        unsigned __int64 start,
        unsigned __int64 end)
{
  unsigned __int64 v4; // rdi
  unsigned __int64 v9; // rbx
  __int64 Length; // rax
  unsigned __int64 v11; // rbx
  __int64 ByteIndex; // rax
  __int64 v13; // r8
  unsigned __int64 v14; // rbx
  unsigned __int64 v15; // rax

  v4 = this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  v9 = *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFFi64;
  if ( *(__int64 *)v4 >= 0 )
  {
    Length = Scaleform::UTF8Util::GetLength((const char *)(v4 + 12), *(_QWORD *)v4 & 0x7FFFFFFFFFFFFFFFi64);
    if ( Length == v9 )
      *(_QWORD *)v4 |= 0x8000000000000000ui64;
    v9 = Length;
  }
  if ( start >= v9 || start >= end )
  {
    result->HeapTypeBits = (unsigned __int64)&Scaleform::String::NullData;
    Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
  }
  else
  {
    v11 = this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
    if ( *(__int64 *)v11 >= 0 )
    {
      ByteIndex = Scaleform::UTF8Util::GetByteIndex(
                    start,
                    (const char *)(v11 + 12),
                    *(_QWORD *)v11 & 0x7FFFFFFFFFFFFFFFi64);
      v13 = *(_QWORD *)v11;
      v14 = ByteIndex + v11;
      v15 = Scaleform::UTF8Util::GetByteIndex(
              end - start,
              (const char *)(v14 + 12),
              (v13 & 0x7FFFFFFFFFFFFFFFi64) - ByteIndex);
      Scaleform::String::String(result, (const char *)(v14 + 12), v15);
    }
    else
    {
      Scaleform::String::String(result, (const char *)(v11 + start + 12), end - start);
    }
  }
  return result;
}

Scaleform::String *__fastcall Scaleform::String::ToLower(Scaleform::String *this, Scaleform::String *result)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  wchar_t Char_Advance0; // ax
  unsigned int v7; // eax
  char *putf8Buffer; // [rsp+20h] [rbp-228h] BYREF
  __int64 pindex; // [rsp+28h] [rbp-220h] BYREF
  char pbuffer[512]; // [rsp+30h] [rbp-218h] BYREF

  v3 = this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  putf8Buffer = (char *)(v3 + 12);
  v4 = *(_QWORD *)v3 & 0x7FFFFFFFFFFFFFFFi64;
  result->HeapTypeBits = (unsigned __int64)&Scaleform::String::NullData;
  v5 = v3 + 12 + v4;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
  for ( pindex = 0i64; (unsigned __int64)putf8Buffer < v5; pindex = 0i64 )
  {
    do
    {
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
      v7 = Scaleform::SFtowlower(Char_Advance0);
      Scaleform::UTF8Util::EncodeCharSafe(pbuffer, 0x200ui64, &pindex, v7);
    }
    while ( (unsigned __int64)putf8Buffer < v5 && pindex < 504 );
    Scaleform::String::AppendString(result, pbuffer, pindex);
  }
  return result;
}

Scaleform::String *__fastcall Scaleform::String::ToUpper(Scaleform::String *this, Scaleform::String *result)
{
  unsigned __int64 v3; // rax
  __int64 v4; // rbx
  unsigned __int64 v5; // rbx
  wchar_t Char_Advance0; // ax
  unsigned int v7; // eax
  char *putf8Buffer; // [rsp+20h] [rbp-228h] BYREF
  __int64 pindex; // [rsp+28h] [rbp-220h] BYREF
  char pbuffer[512]; // [rsp+30h] [rbp-218h] BYREF

  v3 = this->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64;
  putf8Buffer = (char *)(v3 + 12);
  v4 = *(_QWORD *)v3 & 0x7FFFFFFFFFFFFFFFi64;
  result->HeapTypeBits = (unsigned __int64)&Scaleform::String::NullData;
  v5 = v3 + 12 + v4;
  Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&Scaleform::String::NullData.RefCount, 1);
  for ( pindex = 0i64; (unsigned __int64)putf8Buffer < v5; pindex = 0i64 )
  {
    do
    {
      Char_Advance0 = Scaleform::UTF8Util::DecodeNextChar_Advance0((const char **)&putf8Buffer);
      v7 = Scaleform::SFtowupper(Char_Advance0);
      Scaleform::UTF8Util::EncodeCharSafe(pbuffer, 0x200ui64, &pindex, v7);
    }
    while ( (unsigned __int64)putf8Buffer < v5 && pindex < 504 );
    Scaleform::String::AppendString(result, pbuffer, pindex);
  }
  return result;
}

