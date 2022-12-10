#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_index.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/as3_stringmanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc_constpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc_type.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"

long Scaleform::GFx::AS3::Abc::ReadS24<unsigned char>(const unsigned char * data, unsigned long long & cp); // 0x14058BC10
long Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(const unsigned char * data, unsigned long long & cp); // 0x14058BCC0
long Scaleform::GFx::AS3::Abc::Read16<unsigned char>(const unsigned char * & cp); // 0x14058BB80
long Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(const unsigned char * & cp); // 0x14058BC70
double Scaleform::GFx::AS3::Abc::ReadDouble<unsigned char>(const unsigned char * & cp); // 0x14058BBA0
union Scaleform::GFx::AS3::Abc::ReadDouble::__l2::<unnamed-type-$S2>
{
	struct
	{
		double v; // 0x0
		struct <unnamed-type-w>;
	};
public:
	Scaleform::GFx::AS3::Abc::ReadDouble::__l2::<unnamed-type-$S2>::<unnamed-type-w> w; // 0x0
};
const Scaleform::GFx::AS3::TypeInfo * Scaleform::GFx::AS3::TypeInfo::None[0]; // 0x140A8A0B0
const Scaleform::GFx::AS3::Abc::Code::ByteCodeInfo Scaleform::GFx::AS3::Abc::Code::opcode_info[128]; // 0x1407976D0
struct Scaleform::GFx::AS3::Abc::ReadDouble::__l2::<unnamed-type-$S2>::<unnamed-type-w>
{
	unsigned long lo; // 0x0
	unsigned long hi; // 0x4
};
Scaleform::StringDataPtr Scaleform::GFx::AS3::Abc::ReadStringPtr<unsigned char>(const unsigned char * & cp, unsigned long long size); // 0x14058BC50
bool Scaleform::GFx::AS3::Abc::IsValidValueKind(unsigned char vk); // 0x14058BF00
Scaleform::GFx::AS3::Abc::MethodBodyInfo::ExceptionInfo::ExceptionInfo(); // 0x14058BD10
Scaleform::GFx::AS3::Abc::ConstPool::~ConstPool(); // 0x14058BD20
Scaleform::GFx::AS3::Abc::File::~File(); // 0x14058BDA0
Scaleform::GFx::AS3::Abc::MiInd Scaleform::GFx::AS3::Abc::File::GetMiInd(Scaleform::GFx::AS3::Abc::MbiInd ind); // 0x14058BE70
unsigned long Scaleform::GFx::AS3::Abc::File::GetParamNum(Scaleform::GFx::AS3::Abc::MiInd mi_ind); // 0x14058BED0//decompilation failure at 140A8A0B0!
//decompilation failure at 1407976D0!
__int64 __fastcall Scaleform::GFx::AS3::Abc::Read16<unsigned char>(const unsigned __int8 **cp)
{
  __int64 result; // rax

  result = *(unsigned __int16 *)*cp;
  *cp += 2;
  return result;
}

double __fastcall Scaleform::GFx::AS3::Abc::ReadDouble<unsigned char>(const unsigned __int8 **cp)
{
  const unsigned __int8 *v1; // r8
  double result; // xmm0_8
  double v3; // [rsp+8h] [rbp+8h]

  v1 = *cp;
  LODWORD(v3) = *v1 | ((v1[1] | (((*cp)[2] | ((*cp)[3] << 8)) << 8)) << 8);
  HIDWORD(v3) = v1[4] | ((v1[5] | (*((unsigned __int16 *)*cp + 3) << 8)) << 8);
  result = v3;
  *cp += 8;
  return result;
}

__int64 __fastcall Scaleform::GFx::AS3::Abc::ReadS24<unsigned char>(const unsigned __int8 *data, unsigned __int64 *cp)
{
  int v2; // er10
  int v3; // er9
  int v4; // er8
  __int64 result; // rax

  v2 = data[*cp + 2];
  v3 = data[*cp];
  v4 = data[*cp + 1];
  *cp += 3i64;
  result = v3 | ((v4 | (unsigned int)(v2 << 8)) << 8);
  if ( (v2 & 0x80u) != 0 )
    return ~((unsigned int)result ^ 0xFFFFFF);
  return result;
}

Scaleform::StringDataPtr *__fastcall Scaleform::GFx::AS3::Abc::ReadStringPtr<unsigned char>(
        Scaleform::StringDataPtr *result,
        const unsigned __int8 **cp,
        unsigned __int64 size)
{
  const unsigned __int8 *v3; // rax
  Scaleform::StringDataPtr *v4; // rax

  v3 = *cp;
  result->pStr = (const char *)*cp;
  *cp = &v3[size];
  v4 = result;
  result->Size = size;
  return v4;
}

__int64 __fastcall Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(const unsigned __int8 **cp)
{
  unsigned int v1; // er9
  char v2; // dl
  __int64 result; // rax
  char v4; // r8
  int v5; // edx

  v1 = 7;
  v2 = *(*cp)++;
  result = v2 & 0x7F;
  if ( v2 < 0 )
  {
    do
    {
      if ( v1 >= 0x20 )
        break;
      v4 = *(*cp)++;
      v5 = (v4 & 0x7F) << v1;
      v1 += 7;
      result = v5 | (unsigned int)result;
    }
    while ( v4 < 0 );
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(const unsigned __int8 *data, unsigned __int64 *cp)
{
  unsigned int v3; // er9
  char v4; // r8
  __int64 result; // rax
  char v6; // r8
  int v7; // edx

  v3 = 7;
  v4 = data[(*cp)++];
  result = v4 & 0x7F;
  if ( v4 < 0 )
  {
    do
    {
      if ( v3 >= 0x20 )
        break;
      v6 = data[(*cp)++];
      v7 = (v6 & 0x7F) << v3;
      v3 += 7;
      result = v7 | (unsigned int)result;
    }
    while ( v6 < 0 );
  }
  return result;
}

void __fastcall Scaleform::GFx::AS3::Abc::MethodBodyInfo::ExceptionInfo::ExceptionInfo(
        Scaleform::GFx::AS3::Abc::MethodBodyInfo::ExceptionInfo *this)
{
  *(_QWORD *)&this->from = 0i64;
  *(_QWORD *)&this->target = 0i64;
  this->var_name_ind = 0;
}

void __fastcall Scaleform::GFx::AS3::Abc::ConstPool::~ConstPool(Scaleform::GFx::AS3::Abc::ConstPool *this)
{
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->const_multiname.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->const_ns_set.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ConstNamespace.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ConstStr.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ConstUInt.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ConstInt.Data.Data);
}

void __fastcall Scaleform::GFx::AS3::Abc::File::~File(Scaleform::GFx::AS3::Abc::File *this)
{
  volatile int *v2; // rbx

  this->__vftable = (Scaleform::GFx::AS3::Abc::File_vtbl *)&Scaleform::GFx::AS3::Abc::File::`vftable';
  Scaleform::GFx::AS3::Abc::ConstPool::~ConstPool(&this->Const_Pool);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Mi2Mbi.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->MethodBodyOffsets.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->InstOffsets.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->ClassOffsets.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->MetadataOffsets.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->MethodOffsets.Data.Data);
  v2 = (volatile int *)(this->Source.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

Scaleform::GFx::AS3::Abc::MiInd *__fastcall Scaleform::GFx::AS3::Abc::File::GetMiInd(
        Scaleform::GFx::AS3::Abc::File *this,
        Scaleform::GFx::AS3::Abc::MiInd *result,
        Scaleform::GFx::AS3::Abc::MbiInd ind)
{
  const unsigned __int8 **Data; // rax
  unsigned int v5; // ecx
  const unsigned __int8 *v6; // r10
  char *v7; // r10
  int v8; // er8
  char v9; // dl
  int v10; // eax

  Data = this->MethodBodyOffsets.Data.Data;
  v5 = 7;
  v6 = Data[ind.Ind];
  LOBYTE(Data) = *v6;
  v7 = (char *)(v6 + 1);
  v8 = (unsigned __int8)Data & 0x7F;
  if ( (char)Data >= 0 )
  {
    result->Ind = v8;
    return result;
  }
  else
  {
    do
    {
      if ( v5 >= 0x20 )
        break;
      v9 = *v7++;
      v10 = (v9 & 0x7F) << v5;
      v5 += 7;
      v8 |= v10;
    }
    while ( v9 < 0 );
    result->Ind = v8;
    return result;
  }
}

__int64 __fastcall Scaleform::GFx::AS3::Abc::File::GetParamNum(
        Scaleform::GFx::AS3::Abc::File *this,
        Scaleform::GFx::AS3::Abc::MiInd mi_ind)
{
  unsigned __int8 *ptr; // [rsp+30h] [rbp+8h] BYREF
  Scaleform::GFx::AS3::Abc::MethodInfoSmallHeader obj; // [rsp+40h] [rbp+18h] BYREF

  ptr = (unsigned __int8 *)this->MethodOffsets.Data.Data[mi_ind.Ind];
  Scaleform::GFx::AS3::Abc::ReadMethodInfoSmallHeader((const unsigned __int8 **)&ptr, &obj);
  return obj.ParamNum;
}

bool __fastcall Scaleform::GFx::AS3::Abc::IsValidValueKind(unsigned __int8 vk)
{
  bool result; // al

  switch ( vk )
  {
    case 0u:
    case 1u:
    case 3u:
    case 4u:
    case 5u:
    case 6u:
    case 8u:
    case 0xAu:
    case 0xBu:
    case 0xCu:
    case 0x16u:
    case 0x17u:
    case 0x18u:
    case 0x19u:
    case 0x1Au:
      result = 1;
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

