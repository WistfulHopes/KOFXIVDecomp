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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

struct Scaleform::Render::Render_States_ForceLinkClass
{
	Render_States_ForceLinkClass();
};
Scaleform::Render::StateData::Interface::Interface(Scaleform::Render::StateType type); // 0x14032A880
class Scaleform::AtomicOps<int>
{
	struct Ops;
	typedef long T;
	typedef volatile long PT;
	union C2T_union;
public:
	static long Exchange_Sync(volatile long *, long);
	static long Exchange_Release(volatile long *, long);
	static long Exchange_Acquire(volatile long *, long);
	static long Exchange_NoSync(volatile long *, long);
	static long ExchangeAdd_Sync(volatile long *, long);
	static long ExchangeAdd_Release(volatile long *, long);
	static long ExchangeAdd_Acquire(volatile long *, long);
	static long ExchangeAdd_NoSync(volatile long *, long);
	static bool CompareAndSet_Sync(volatile long *, long, long);
	static bool CompareAndSet_Release(volatile long *, long, long);
	static bool CompareAndSet_Acquire(volatile long *, long, long);
	static bool CompareAndSet_NoSync(volatile long *, long, long);
	static void Store_Release(volatile long *, long);
	static long Load_Acquire(const long *);
};
Scaleform::Render::Render_States_ForceLinkClass Scaleform::Render::Render_States_ForceLinkClassInstance; // 0x140A722E0
void(*Scaleform::Render::Render_States_ForceLinkClassInstance$initializer$)(); // 0x140739CB0
Scaleform::Render::StateData::Interface * Scaleform::Render::StateType_Interfaces[11]; // 0x140A722F0
void Scaleform::Render::StateData::ArrayData::Release(unsigned long long count); // 0x14032A9B0
void Scaleform::Render::StateData::destroyBag_NotEmpty(); // 0x14032AFF0
void Scaleform::Render::StateData::assignBag(const Scaleform::Render::StateData & src); // 0x14032AF50
const Scaleform::Render::State * Scaleform::Render::StateBag::GetState(Scaleform::Render::StateType type); // 0x14032A950
void Scaleform::Render::StateBag::SetStateVoid(Scaleform::Render::StateData::Interface * pi, void * data); // 0x14032AC60
bool Scaleform::Render::StateBag::RemoveState(Scaleform::Render::StateType type); // 0x14032AAA0
const Scaleform::Render::State & Scaleform::Render::StateBag::GetAt(unsigned long long index); // 0x14032A930
void Scaleform::Render::StateBag::ReleaseNodes(); // 0x14032AA20
Scaleform::Render::StateData::ArrayData * Scaleform::Render::StateBag::allocData(Scaleform::Render::State * source, unsigned long long count, unsigned long long extra); // 0x14032AE90
Scaleform::Render::StateBag::StateBag(const Scaleform::Render::StateBag & src); // 0x14032A8A0//decompilation failure at 140A722E0!
//decompilation failure at 140739CB0!
//decompilation failure at 140A722F0!
void __fastcall Scaleform::Render::StateData::Interface::Interface(
        Scaleform::Render::StateData::Interface *this,
        Scaleform::Render::StateType type)
{
  this->Type = type;
  this->__vftable = (Scaleform::Render::StateData::Interface_vtbl *)&Scaleform::Render::StateData::Interface::`vftable';
  Scaleform::Render::StateType_Interfaces[type] = this;
}

void __fastcall Scaleform::Render::StateBag::StateBag(
        Scaleform::Render::StateBag *this,
        const Scaleform::Render::StateBag *src)
{
  unsigned __int64 ArraySize; // rcx
  char *pData; // rdx

  this->ArraySize = 0i64;
  this->DataValue = 0i64;
  ArraySize = src->ArraySize;
  if ( src->ArraySize )
  {
    pData = (char *)src->pData;
    if ( (ArraySize & 1) != 0 )
    {
      (*(void (__fastcall **)(unsigned __int64, char *, __int64))(*(_QWORD *)(ArraySize & 0xFFFFFFFFFFFFFFFEui64) + 8i64))(
        ArraySize & 0xFFFFFFFFFFFFFFFEui64,
        pData,
        1i64);
      this->ArraySize = src->ArraySize;
      this->DataValue = src->DataValue;
    }
    else
    {
      this->DataValue = (unsigned __int64)Scaleform::Render::StateBag::allocData(
                                            this,
                                            (Scaleform::Render::State *)(pData + 4),
                                            ArraySize >> 1,
                                            0i64);
      this->ArraySize = src->ArraySize;
    }
  }
}

Scaleform::Render::StateBag *__fastcall Scaleform::Render::StateBag::GetAt(
        Scaleform::Render::StateBag *this,
        unsigned __int64 index)
{
  if ( ((__int64)this->pInterface & 1) != 0 )
    return this;
  else
    return (Scaleform::Render::StateBag *)(16 * index + this->DataValue + 4);
}

Scaleform::Render::StateBag *__fastcall Scaleform::Render::StateBag::GetState(
        Scaleform::Render::StateBag *this,
        Scaleform::Render::StateType type)
{
  unsigned __int64 ArraySize; // r8
  Scaleform::Render::StateBag *v3; // r9
  Scaleform::Render::StateData::Interface *v4; // rdx
  Scaleform::Render::StateBag *result; // rax
  unsigned __int64 v6; // r8
  char *pData; // rax
  __int64 v8; // rcx

  ArraySize = this->ArraySize;
  v3 = this;
  if ( !this->ArraySize )
    return 0i64;
  v4 = Scaleform::Render::StateType_Interfaces[type];
  if ( (ArraySize & 1) != 0 )
  {
    if ( (Scaleform::Render::StateData::Interface *)(ArraySize & 0xFFFFFFFFFFFFFFFEui64) != v4 )
      return 0i64;
    return v3;
  }
  v6 = ArraySize >> 1;
  pData = (char *)this->pData;
  v8 = 0i64;
  if ( !v6 )
    return 0i64;
  for ( result = (Scaleform::Render::StateBag *)(pData + 4); result->pInterface != v4; ++result )
  {
    if ( ++v8 >= v6 )
      return 0i64;
  }
  return result;
}

void __fastcall Scaleform::Render::StateData::ArrayData::Release(
        Scaleform::Render::StateData::ArrayData *this,
        unsigned __int64 count)
{
  Scaleform::Render::StateData::ArrayData *i; // rbx

  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&this->RefCount, -1) == 1 )
  {
    for ( i = this + 1; count; --count )
    {
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)&i->RefCount + 16i64))(
        *(_QWORD *)&i->RefCount,
        *(_QWORD *)&i[2].RefCount,
        1i64);
      i += 4;
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this);
  }
}

void __fastcall Scaleform::Render::StateBag::ReleaseNodes(Scaleform::Render::StateBag *this)
{
  unsigned __int64 ArraySize; // rbx
  _QWORD *v2; // rdi
  unsigned __int64 i; // rbx

  ArraySize = this->ArraySize;
  if ( this->ArraySize )
  {
    if ( (ArraySize & 1) != 0 )
    {
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)(ArraySize & 0xFFFFFFFFFFFFFFFEui64)
                                                                          + 16i64))(
        ArraySize & 0xFFFFFFFFFFFFFFFEui64,
        this->DataValue,
        2i64);
    }
    else
    {
      v2 = (_QWORD *)(this->DataValue + 4);
      for ( i = ArraySize >> 1; i; --i )
      {
        (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(*(_QWORD *)*v2 + 16i64))(*v2, v2[1], 2i64);
        v2 += 2;
      }
    }
  }
}

bool __fastcall Scaleform::Render::StateBag::RemoveState(
        Scaleform::Render::StateBag *this,
        Scaleform::Render::StateType type)
{
  unsigned __int64 ArraySize; // rbx
  Scaleform::Render::StateData::ArrayData *v4; // rax
  Scaleform::Render::StateData::Interface *v5; // rcx
  unsigned __int64 v6; // rbx
  unsigned __int64 v7; // r10
  char *pData; // r14
  Scaleform::Render::StateData::Interface **v9; // rax
  __int64 v10; // r15
  __int64 v11; // r10
  unsigned __int64 v12; // rcx
  unsigned __int64 v13; // rbp
  unsigned __int64 v14; // r12
  char *v15; // rsi
  signed __int64 v16; // r13
  __int64 v17; // rcx
  __int64 v18; // rax

  ArraySize = this->ArraySize;
  if ( !this->ArraySize )
  {
LABEL_2:
    LOBYTE(v4) = 0;
    return (char)v4;
  }
  v5 = Scaleform::Render::StateType_Interfaces[type];
  if ( (ArraySize & 1) != 0 )
  {
    if ( (Scaleform::Render::StateData::Interface *)(ArraySize & 0xFFFFFFFFFFFFFFFEui64) == v5 )
    {
      v5->Release(v5, this->pData, Ref_All);
      LOBYTE(v4) = 1;
      this->ArraySize = 0i64;
      this->DataValue = 0i64;
      return (char)v4;
    }
    goto LABEL_2;
  }
  v6 = ArraySize >> 1;
  v7 = 0i64;
  pData = (char *)this->pData;
  if ( v6 )
  {
    v9 = (Scaleform::Render::StateData::Interface **)(pData + 4);
    do
    {
      if ( *v9 == v5 )
        break;
      ++v7;
      v9 += 2;
    }
    while ( v7 < v6 );
  }
  if ( v7 != v6 )
  {
    v10 = 2 * v7;
    if ( v6 == 2 )
    {
      v11 = 2 * (v7 ^ 1);
      v12 = *(_QWORD *)&pData[8 * v11 + 12];
      this->ArraySize = *(_QWORD *)&pData[8 * v11 + 4] | 1i64;
      this->DataValue = v12;
      (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)&pData[8 * v11 + 4] + 8i64))(
        *(_QWORD *)&pData[8 * v11 + 4],
        *(_QWORD *)&pData[8 * v11 + 12],
        1i64);
    }
    else
    {
      v13 = v6 - v7 - 1;
      v4 = Scaleform::Render::StateBag::allocData(this, (Scaleform::Render::State *)(pData + 4), v7, v13);
      v14 = (unsigned __int64)v4;
      if ( !v4 )
        return (char)v4;
      v15 = &pData[8 * v10 + 20];
      if ( v13 )
      {
        v16 = (char *)v4 - pData;
        do
        {
          v17 = *(_QWORD *)v15;
          v18 = *((_QWORD *)v15 + 1);
          *(_QWORD *)&v15[v16 - 16] = *(_QWORD *)v15;
          *(_QWORD *)&v15[v16 - 8] = v18;
          (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v17 + 8i64))(v17, *((_QWORD *)v15 + 1), 1i64);
          v15 += 16;
          --v13;
        }
        while ( v13 );
      }
      this->ArraySize = 2 * v6 - 2;
      this->DataValue = v14;
    }
    (*(void (__fastcall **)(_QWORD, _QWORD, __int64))(**(_QWORD **)&pData[8 * v10 + 4] + 16i64))(
      *(_QWORD *)&pData[8 * v10 + 4],
      *(_QWORD *)&pData[8 * v10 + 12],
      2i64);
    Scaleform::Render::StateData::ArrayData::Release((Scaleform::Render::StateData::ArrayData *)pData, v6);
    LOBYTE(v4) = 1;
    return (char)v4;
  }
  LOBYTE(v4) = 0;
  return (char)v4;
}

void __fastcall Scaleform::Render::StateBag::SetStateVoid(
        Scaleform::Render::StateBag *this,
        Scaleform::Render::StateData::Interface *pi,
        void *data)
{
  unsigned __int64 ArraySize; // rsi
  __int64 v7; // rax
  unsigned __int64 v8; // rdi
  void *pData; // rdx
  unsigned __int64 v10; // rdi
  unsigned __int64 v11; // r15
  unsigned __int64 v12; // rsi
  Scaleform::Render::StateData::Interface **v13; // rax
  __int64 v14; // rdi
  _DWORD *v15; // rax
  unsigned __int64 v16; // r13
  unsigned __int64 v17; // r12
  _QWORD *v18; // rdi
  __int64 v19; // r15
  __int64 v20; // rcx
  __int64 v21; // rax
  __int64 v22; // rdi

  ArraySize = this->ArraySize;
  if ( this->ArraySize )
  {
    if ( ((__int64)this->pInterface & 1) != 0 )
    {
      if ( (Scaleform::Render::StateData::Interface *)(ArraySize & 0xFFFFFFFFFFFFFFFEui64) == pi )
      {
        pi->AddRef(pi, data, Ref_All);
        pi->Release(pi, (void *)this->DataValue, Ref_All);
        this->DataValue = (unsigned __int64)data;
      }
      else
      {
        v7 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::StateBag *, __int64))Scaleform::Memory::pGlobalHeap->AllocAutoHeap)(
               Scaleform::Memory::pGlobalHeap,
               this,
               36i64);
        v8 = v7;
        if ( v7 )
        {
          *(_DWORD *)v7 = 1;
          pData = this->pData;
          *(_QWORD *)(v7 + 4) = this->ArraySize & 0xFFFFFFFFFFFFFFFEui64;
          *(_QWORD *)(v7 + 12) = pData;
          *(_QWORD *)(v7 + 20) = pi;
          *(_QWORD *)(v7 + 28) = data;
          pi->AddRef(pi, data, Ref_All);
          this->DataValue = v8;
          this->ArraySize = 4i64;
        }
      }
    }
    else
    {
      v10 = 0i64;
      v11 = this->DataValue + 4;
      v12 = ArraySize >> 1;
      if ( v12 )
      {
        v13 = (Scaleform::Render::StateData::Interface **)(this->DataValue + 4);
        while ( *v13 != pi )
        {
          ++v10;
          v13 += 2;
          if ( v10 >= v12 )
            goto LABEL_12;
        }
        pi->AddRef(pi, data, Ref_All);
        v22 = 2 * v10;
        pi->Release(pi, *(void **)(v11 + 8 * v22 + 8), Ref_All);
        *(_QWORD *)(v11 + 8 * v22 + 8) = data;
      }
      else
      {
LABEL_12:
        v14 = 16 * v12;
        v15 = Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 16 * v12 + 20, 0i64);
        v16 = (unsigned __int64)v15;
        if ( v15 )
        {
          v17 = v12;
          *v15 = 1;
          if ( v12 )
          {
            v18 = (_QWORD *)(v11 + 8);
            v19 = (__int64)v15 - v11 - 4;
            do
            {
              v20 = *(v18 - 1);
              v21 = *v18;
              *(_QWORD *)((char *)v18 + v19) = v20;
              *(_QWORD *)((char *)v18 + v19 + 8) = v21;
              (*(void (__fastcall **)(__int64, _QWORD, __int64))(*(_QWORD *)v20 + 8i64))(v20, *v18, 1i64);
              v18 += 2;
              --v17;
            }
            while ( v17 );
            v14 = 16 * v12;
          }
          *(_QWORD *)(v14 + v16 + 4) = pi;
          *(_QWORD *)(v14 + v16 + 12) = data;
          pi->AddRef(pi, data, Ref_All);
          Scaleform::Render::StateData::ArrayData::Release(this->pArray, v12);
          this->ArraySize = 2 * v12 + 2;
          this->DataValue = v16;
        }
      }
    }
  }
  else
  {
    this->DataValue = (unsigned __int64)data;
    this->ArraySize = (unsigned __int64)pi | 1;
    pi->AddRef(pi, data, Ref_All);
  }
}

Scaleform::Render::StateData::ArrayData *__fastcall Scaleform::Render::StateBag::allocData(
        Scaleform::Render::StateBag *this,
        Scaleform::Render::State *source,
        unsigned __int64 count,
        unsigned __int64 extra)
{
  unsigned __int64 v4; // rdi
  Scaleform::Render::StateData::ArrayData *result; // rax
  Scaleform::Render::StateData::ArrayData *v7; // r14
  $0A80611A2A1C6DBB18978C5F46CA3F30 *v8; // rbx
  signed __int64 v9; // rsi
  void *pData; // rcx
  unsigned __int64 DataValue; // rax

  v4 = count;
  result = (Scaleform::Render::StateData::ArrayData *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                        Scaleform::Memory::pGlobalHeap,
                                                        this,
                                                        16 * (extra + count) + 4,
                                                        0i64);
  v7 = result;
  if ( result )
  {
    result->RefCount = 1;
    if ( v4 )
    {
      v8 = &source->8;
      v9 = (char *)result - (char *)source - 4;
      do
      {
        pData = v8[-1].pData;
        DataValue = v8->DataValue;
        *(unsigned __int64 *)((char *)&v8->DataValue + v9) = (unsigned __int64)pData;
        *(unsigned __int64 *)((char *)&v8[1].DataValue + v9) = DataValue;
        (*(void (__fastcall **)(void *, unsigned __int64, __int64))(*(_QWORD *)pData + 8i64))(
          pData,
          v8->DataValue,
          1i64);
        v8 += 2;
        --v4;
      }
      while ( v4 );
    }
    return v7;
  }
  return result;
}

void __fastcall Scaleform::Render::StateData::assignBag(
        Scaleform::Render::StateData *this,
        const Scaleform::Render::StateData *src)
{
  unsigned __int64 ArraySize; // rcx
  unsigned __int64 v5; // rcx

  ArraySize = src->ArraySize;
  if ( src->ArraySize )
  {
    if ( (ArraySize & 1) != 0 )
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)(ArraySize & 0xFFFFFFFFFFFFFFFEui64)
                                                                          + 8i64))(
        ArraySize & 0xFFFFFFFFFFFFFFFEui64,
        src->DataValue,
        1i64);
    else
      Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync((volatile int *)src->pData, 1);
  }
  v5 = this->ArraySize;
  if ( this->ArraySize )
  {
    if ( (v5 & 1) != 0 )
      (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)(v5 & 0xFFFFFFFFFFFFFFFEui64)
                                                                          + 16i64))(
        v5 & 0xFFFFFFFFFFFFFFFEui64,
        this->DataValue,
        1i64);
    else
      Scaleform::Render::StateData::ArrayData::Release(this->pArray, v5 >> 1);
    this->ArraySize = 0i64;
    this->DataValue = 0i64;
  }
  this->ArraySize = src->ArraySize;
  this->DataValue = src->DataValue;
}

void __fastcall Scaleform::Render::StateData::destroyBag_NotEmpty(Scaleform::Render::StateData *this)
{
  if ( ((__int64)this->pInterface & 1) != 0 )
    (*(void (__fastcall **)(unsigned __int64, unsigned __int64, __int64))(*(_QWORD *)(this->ArraySize & 0xFFFFFFFFFFFFFFFEui64)
                                                                        + 16i64))(
      this->ArraySize & 0xFFFFFFFFFFFFFFFEui64,
      this->DataValue,
      1i64);
  else
    Scaleform::Render::StateData::ArrayData::Release(this->pArray, this->ArraySize >> 1);
  this->DataValue = 0i64;
  this->ArraySize = 0i64;
}

