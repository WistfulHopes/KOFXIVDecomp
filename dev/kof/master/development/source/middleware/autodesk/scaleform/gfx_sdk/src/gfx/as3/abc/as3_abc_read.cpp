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

bool Scaleform::GFx::AS3::Abc::Reader::Read(Scaleform::GFx::AS3::Abc::File & obj); // 0x14058CCF0
bool Scaleform::GFx::AS3::Abc::Reader::Read(const Scaleform::GFx::AS3::Abc::ConstPool & cp, Scaleform::GFx::AS3::Abc::NamespaceInfo & obj); // 0x14058D030
bool Scaleform::GFx::AS3::Abc::Reader::Read(const Scaleform::GFx::AS3::Abc::ConstPool & cp, Scaleform::GFx::AS3::Abc::Multiname & obj, bool & reread); // 0x14058CDE0
bool Scaleform::GFx::AS3::Abc::Reader::Read(Scaleform::GFx::AS3::Abc::ConstPool & obj); // 0x14058C520
struct Scaleform::Pair<unsigned __int64,unsigned char const *>
{
	typedef unsigned long long FirstType;
	typedef const unsigned char SecondType;
	Pair<unsigned __int64,unsigned char const *>(const unsigned long long &, const unsigned char * &);
	unsigned long long First; // 0x0
	const unsigned char * Second; // 0x8
};
class Scaleform::ArrayDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::Pair<unsigned __int64,unsigned char const *>,Scaleform::AllocatorDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2,Scaleform::ArrayDefaultPolicy>();
};
bool Scaleform::GFx::AS3::Abc::Read(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::ValueDetail & obj); // 0x14058C240
bool Scaleform::GFx::AS3::Abc::ReadMethodInfoSmallHeader(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::MethodInfoSmallHeader & obj); // 0x14058D890
bool Scaleform::GFx::AS3::Abc::Read(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::MethodInfoHeader & obj); // 0x14058C070
bool Scaleform::GFx::AS3::Abc::Reader::ReadMethodInfo(Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> & offsets, Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> & mi2mbi); // 0x14058D6D0
bool Scaleform::GFx::AS3::Abc::Reader::ReadMetadata(Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> & offsets, const Scaleform::GFx::AS3::Abc::ConstPool & cp); // 0x14058D5B0
bool Scaleform::GFx::AS3::Abc::ReadTraitInfoSmallHeader(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::TraitInfoSmallHeader & obj); // 0x14058D9D0
bool Scaleform::GFx::AS3::Abc::ReadTraitInfoHeader(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::TraitInfoHeader & obj); // 0x14058D950
bool Scaleform::GFx::AS3::Abc::Read(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::TraitInfo & obj); // 0x14058C170
bool Scaleform::GFx::AS3::Abc::ReadMetaInfo(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::TraitInfo & obj); // 0x14058D570
bool Scaleform::GFx::AS3::Abc::Read(const unsigned char * & ptr, const Scaleform::GFx::AS3::Abc::ConstPool & cp, Scaleform::GFx::AS3::Abc::MetadataHeader & obj); // 0x14058C280
bool Scaleform::GFx::AS3::Abc::ReadHasTraits(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::HasTraits & obj); // 0x14058D400
bool Scaleform::GFx::AS3::Abc::ReadHasCode(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::HasCode & obj); // 0x14058D3B0
bool Scaleform::GFx::AS3::Abc::SkipInterfaces(const unsigned char * & ptr); // 0x14058DE30
bool Scaleform::GFx::AS3::Abc::ReadInstanceHeader(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::InstanceHeader & obj); // 0x14058D4F0
bool Scaleform::GFx::AS3::Abc::Reader::ReadClasses(Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> & cl_offsets, Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> & inst_offsets); // 0x14058D1A0
bool Scaleform::GFx::AS3::Abc::Reader::ReadScripts(const unsigned char * & ss); // 0x14058D8C0
bool Scaleform::GFx::AS3::Abc::Read(const unsigned char * & ptr, Scaleform::GFx::AS3::Abc::MethodBodyInfoHeader & obj); // 0x14058C120
bool Scaleform::GFx::AS3::Abc::Reader::Read(Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> & offsets, Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> & mi2mbi); // 0x14058C2F0char __fastcall Scaleform::GFx::AS3::Abc::Read(
        const unsigned __int8 **ptr,
        Scaleform::GFx::AS3::Abc::MethodBodyInfo::ExceptionInfo *obj)
{
  obj->from = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  obj->to = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  obj->target = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  obj->exc_type_ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  obj->var_name_ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  return 1;
}

char __fastcall Scaleform::GFx::AS3::Abc::Read(
        const unsigned __int8 **ptr,
        Scaleform::GFx::AS3::Abc::MethodInfoHeader *obj)
{
  __int64 ParamNum; // rdi
  unsigned __int8 v5; // cl
  unsigned int v6; // eax
  unsigned int v7; // edi

  obj->ParamNum = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  obj->RetTypeInd = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  obj->ParamTypes = *ptr;
  if ( obj->ParamNum )
  {
    ParamNum = obj->ParamNum;
    do
    {
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
      --ParamNum;
    }
    while ( ParamNum );
  }
  Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  v5 = *(*ptr)++;
  obj->Flags = v5;
  if ( (v5 & 8) != 0 )
  {
    v6 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
    obj->OptParamNum = v6;
    v7 = 0;
    for ( obj->OptParams = *ptr; v7 < obj->OptParamNum; ++v7 )
    {
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
      ++*ptr;
    }
  }
  if ( obj->Flags >= 0x80u )
    obj->ParamNames = *ptr;
  return 1;
}

bool __fastcall Scaleform::GFx::AS3::Abc::Read(const unsigned __int8 **ptr, Scaleform::GFx::AS3::Abc::TraitInfo *obj)
{
  bool result; // al
  bool IsValidValueKind; // r8
  int v6; // ebp
  unsigned __int8 v7; // bl
  Scaleform::GFx::AS3::Abc::ValueDetail v8; // [rsp+50h] [rbp+18h]

  result = Scaleform::GFx::AS3::Abc::ReadTraitInfoHeader(ptr, obj);
  IsValidValueKind = result;
  if ( !result )
    return result;
  if ( (obj->kind & 0xF) != 0 && (obj->kind & 0xF) != 6 )
    goto LABEL_6;
  v6 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  IsValidValueKind = 1;
  if ( v6 )
  {
    v7 = *(*ptr)++;
    v8.Kind = v7;
    IsValidValueKind = Scaleform::GFx::AS3::Abc::IsValidValueKind(v7);
    v8.ValueIndex = v6;
    obj->default_value = v8;
LABEL_6:
    if ( !IsValidValueKind )
      return 0;
  }
  if ( (obj->kind & 0x40) != 0 )
    return Scaleform::GFx::AS3::Abc::ReadMetaInfo(ptr, obj);
  return IsValidValueKind;
}

bool __fastcall Scaleform::GFx::AS3::Abc::Read(const unsigned __int8 **ptr, Scaleform::GFx::AS3::Abc::ValueDetail *obj)
{
  unsigned __int8 v4; // r8
  bool result; // al

  obj->ValueIndex = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  v4 = *(*ptr)++;
  result = obj->ValueIndex >= 0;
  obj->Kind = v4;
  return result;
}

char __fastcall Scaleform::GFx::AS3::Abc::Read(
        const unsigned __int8 **ptr,
        const Scaleform::GFx::AS3::Abc::ConstPool *cp,
        Scaleform::GFx::AS3::Abc::MetadataHeader *obj)
{
  int v6; // eax
  Scaleform::StringDataPtr result; // [rsp+20h] [rbp-18h] BYREF

  result.pStr = 0i64;
  result.Size = 0i64;
  v6 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  if ( v6 )
    Scaleform::GFx::AS3::Abc::StringView::ToStringDataPtr(&cp->ConstStr.Data.Data[v6], &result);
  obj->Name = result;
  obj->Num = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  return 1;
}

bool __fastcall Scaleform::GFx::AS3::Abc::Reader::Read(
        Scaleform::GFx::AS3::Abc::Reader *this,
        Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> *offsets,
        Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> *mi2mbi)
{
  const unsigned __int8 **p_CP; // rbx
  int v5; // edi
  int v6; // er12
  unsigned __int64 Size; // rax
  const unsigned __int8 *v8; // rsi
  unsigned __int64 v9; // rdi
  unsigned __int64 v10; // r8
  const unsigned __int8 **Data; // rax
  __int64 v12; // r13
  unsigned int v13; // esi
  unsigned int i; // edi
  unsigned int v15; // er15
  unsigned int j; // ebp
  bool result; // al
  int v18; // eax
  char v19; // si
  int v20; // edi
  int v21; // eax
  unsigned __int8 v22; // cl
  unsigned int v23; // eax
  __int64 v24; // rdi
  Scaleform::GFx::AS3::Abc::MethodBodyInfo::ExceptionInfo v25; // [rsp+20h] [rbp-58h] BYREF
  int v26; // [rsp+88h] [rbp+10h]

  p_CP = &this->CP;
  v5 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(&this->CP);
  v26 = v5;
  if ( v5 > offsets->Data.Policy.Capacity )
    Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &offsets->Data,
      offsets,
      v5);
  v6 = 0;
  if ( v5 > 0 )
  {
    while ( 1 )
    {
      Size = offsets->Data.Size;
      v8 = *p_CP;
      v9 = Size + 1;
      if ( Size + 1 >= Size )
      {
        if ( v9 > offsets->Data.Policy.Capacity )
        {
          v10 = v9 + (v9 >> 2);
          goto LABEL_9;
        }
      }
      else if ( v9 < offsets->Data.Policy.Capacity >> 1 )
      {
        v10 = Size + 1;
LABEL_9:
        Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &offsets->Data,
          offsets,
          v10);
      }
      Data = offsets->Data.Data;
      offsets->Data.Size = v9;
      Data[v9 - 1] = v8;
      v12 = (unsigned int)Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      *p_CP += (unsigned int)Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      v13 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      for ( i = 0; i < v13; ++i )
      {
        Scaleform::GFx::AS3::Abc::MethodBodyInfo::ExceptionInfo::ExceptionInfo(&v25);
        v25.from = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
        v25.to = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
        v25.target = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
        v25.exc_type_ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
        Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      }
      v15 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      for ( j = 0; ; ++j )
      {
        result = 1;
        if ( j >= v15 )
          break;
        v18 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
        v19 = *(*p_CP)++;
        if ( v18 < 0
          || (v20 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP),
              v21 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP),
              v20 < 0)
          || v21 < 0
          || ((v19 & 0xF) == 0 || (v19 & 0xF) == 6)
          && (unsigned int)Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP)
          && (v22 = **p_CP, ++*p_CP, !Scaleform::GFx::AS3::Abc::IsValidValueKind(v22)) )
        {
          result = 0;
          goto LABEL_29;
        }
        if ( (v19 & 0x40) != 0 )
        {
          v23 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
          if ( v23 )
          {
            v24 = v23;
            do
            {
              Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
              --v24;
            }
            while ( v24 );
          }
        }
      }
      mi2mbi->Data.Data[v12] = v6;
LABEL_29:
      if ( ++v6 >= v26 )
        return result;
    }
  }
  return 1;
}

bool __fastcall Scaleform::GFx::AS3::Abc::Reader::Read(
        Scaleform::GFx::AS3::Abc::Reader *this,
        Scaleform::GFx::AS3::Abc::ConstPool *obj)
{
  const unsigned __int8 **p_CP; // r14
  unsigned int v4; // esi
  unsigned __int64 Size; // rax
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  int *Data; // rax
  unsigned __int64 Capacity; // r12
  __int64 i; // rsi
  int v11; // er15
  unsigned __int64 v12; // rdi
  unsigned __int64 v13; // r8
  int *v14; // rax
  unsigned int v15; // esi
  unsigned __int64 v16; // rax
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  unsigned int *v19; // rax
  __int64 j; // rsi
  unsigned int v21; // er15
  unsigned __int64 v22; // rdi
  unsigned __int64 v23; // r8
  unsigned int *v24; // rax
  unsigned int v25; // eax
  unsigned int v26; // esi
  unsigned __int64 v27; // rax
  unsigned __int64 v28; // rbx
  unsigned __int64 v29; // r8
  Scaleform::GFx::AS3::Abc::StringView *v30; // rcx
  Scaleform::GFx::AS3::Abc::StringView *v31; // rcx
  unsigned int v32; // er15
  unsigned int v33; // er12
  const unsigned __int8 *v34; // rbx
  unsigned __int64 v35; // rsi
  unsigned __int64 v36; // r8
  Scaleform::GFx::AS3::Abc::StringView *v37; // rcx
  Scaleform::GFx::AS3::Abc::StringView *v38; // rcx
  unsigned int v39; // er15
  bool v40; // si
  unsigned __int64 v41; // rax
  unsigned __int64 v42; // rdi
  unsigned __int64 v43; // r8
  Scaleform::GFx::AS3::Abc::NamespaceInfo *v44; // rax
  Scaleform::GFx::AS3::Abc::NamespaceInfo *v45; // rdx
  unsigned __int64 v46; // xmm1_8
  __int64 v47; // r15
  unsigned __int64 v48; // rdi
  unsigned __int64 v49; // r8
  Scaleform::GFx::AS3::Abc::NamespaceInfo *v50; // rax
  Scaleform::GFx::AS3::Abc::NamespaceInfo *v51; // rdx
  unsigned __int64 v52; // xmm1_8
  char v53; // r15
  Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy> *p_const_ns_set; // rsi
  unsigned int v55; // er13
  unsigned __int64 v56; // rax
  unsigned __int64 v57; // rdi
  unsigned __int64 v58; // r8
  Scaleform::GFx::AS3::Abc::StringView *v59; // rax
  const unsigned __int8 *v60; // rbx
  __int64 v61; // r12
  unsigned int v62; // er15
  unsigned int k; // edi
  unsigned __int64 v64; // rdi
  unsigned __int64 v65; // r8
  Scaleform::GFx::AS3::Abc::StringView *v66; // rax
  unsigned int v68; // er13
  const unsigned __int8 *v69; // rdx
  bool v70; // si
  unsigned __int64 v71; // r15
  Scaleform::MemoryHeap *v72; // rax
  unsigned __int64 v73; // r8
  Scaleform::ArrayLH<Scaleform::GFx::AS3::Abc::Multiname,340,Scaleform::ArrayDefaultPolicy> *p_const_multiname; // rdi
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rbx
  unsigned __int64 v77; // r8
  Scaleform::GFx::AS3::Abc::Multiname *v78; // rax
  Scaleform::GFx::AS3::Abc::Multiname *v79; // rcx
  const unsigned __int8 *v80; // r13
  unsigned __int64 v81; // rbx
  unsigned __int64 v82; // r8
  Scaleform::GFx::AS3::Abc::Multiname *v83; // rcx
  Scaleform::GFx::AS3::Abc::Multiname *v84; // rcx
  unsigned __int64 v85; // rbx
  unsigned __int64 v86; // r8
  Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *v87; // rax
  const unsigned __int8 *v88; // r12
  Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *v89; // rbx
  unsigned __int64 m; // r13
  Scaleform::GFx::AS3::Abc::Multiname si128; // [rsp+20h] [rbp-49h] BYREF
  Scaleform::GFx::AS3::Abc::NamespaceInfo obja; // [rsp+30h] [rbp-39h] BYREF
  Scaleform::ArrayDataBase<Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long>,Scaleform::AllocatorDH<Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long>,2>,Scaleform::ArrayDefaultPolicy> v93; // [rsp+48h] [rbp-21h] BYREF
  void *pheapAddr; // [rsp+60h] [rbp-9h]
  const unsigned __int8 **reread; // [rsp+E0h] [rbp+77h] BYREF
  __int64 v98; // [rsp+E8h] [rbp+7Fh]

  p_CP = &this->CP;
  reread = &this->CP;
  v4 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(&this->CP);
  if ( v4 > obj->ConstInt.Data.Policy.Capacity )
    Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy> *)&obj->ConstInt,
      &obj->ConstInt,
      v4);
  Size = obj->ConstInt.Data.Size;
  v6 = Size + 1;
  if ( Size + 1 >= Size )
  {
    if ( v6 <= obj->ConstInt.Data.Policy.Capacity )
      goto LABEL_9;
    v7 = v6 + (v6 >> 2);
  }
  else
  {
    if ( v6 >= obj->ConstInt.Data.Policy.Capacity >> 1 )
      goto LABEL_9;
    v7 = Size + 1;
  }
  Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
    (Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy> *)&obj->ConstInt,
    &obj->ConstInt,
    v7);
LABEL_9:
  Data = obj->ConstInt.Data.Data;
  Capacity = 0i64;
  obj->ConstInt.Data.Size = v6;
  Data[v6 - 1] = 0;
  if ( v4 > 1 )
  {
    for ( i = v4 - 1; i; --i )
    {
      v11 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      v12 = obj->ConstInt.Data.Size + 1;
      if ( v12 >= obj->ConstInt.Data.Size )
      {
        if ( v12 > obj->ConstInt.Data.Policy.Capacity )
        {
          v13 = v12 + (v12 >> 2);
          goto LABEL_16;
        }
      }
      else if ( v12 < obj->ConstInt.Data.Policy.Capacity >> 1 )
      {
        v13 = obj->ConstInt.Data.Size + 1;
LABEL_16:
        Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
          (Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy> *)&obj->ConstInt,
          &obj->ConstInt,
          v13);
      }
      v14 = obj->ConstInt.Data.Data;
      obj->ConstInt.Data.Size = v12;
      v14[v12 - 1] = v11;
    }
  }
  v15 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
  if ( v15 > obj->ConstUInt.Data.Policy.Capacity )
    Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &obj->ConstUInt.Data,
      &obj->ConstUInt,
      v15);
  v16 = obj->ConstUInt.Data.Size;
  v17 = v16 + 1;
  if ( v16 + 1 >= v16 )
  {
    if ( v17 <= obj->ConstUInt.Data.Policy.Capacity )
      goto LABEL_26;
    v18 = v17 + (v17 >> 2);
  }
  else
  {
    if ( v17 >= obj->ConstUInt.Data.Policy.Capacity >> 1 )
      goto LABEL_26;
    v18 = v16 + 1;
  }
  Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &obj->ConstUInt.Data,
    &obj->ConstUInt,
    v18);
LABEL_26:
  v19 = obj->ConstUInt.Data.Data;
  obj->ConstUInt.Data.Size = v17;
  v19[v17 - 1] = 0;
  if ( v15 > 1 )
  {
    for ( j = v15 - 1; j; --j )
    {
      v21 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      v22 = obj->ConstUInt.Data.Size + 1;
      if ( v22 >= obj->ConstUInt.Data.Size )
      {
        if ( v22 > obj->ConstUInt.Data.Policy.Capacity )
        {
          v23 = v22 + (v22 >> 2);
          goto LABEL_33;
        }
      }
      else if ( v22 < obj->ConstUInt.Data.Policy.Capacity >> 1 )
      {
        v23 = obj->ConstUInt.Data.Size + 1;
LABEL_33:
        Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &obj->ConstUInt.Data,
          &obj->ConstUInt,
          v23);
      }
      v24 = obj->ConstUInt.Data.Data;
      obj->ConstUInt.Data.Size = v22;
      v24[v22 - 1] = v21;
    }
  }
  obj->DoubleCount = 0;
  obj->Doubles = 0i64;
  v25 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
  obj->DoubleCount = v25;
  obj->Doubles = *p_CP;
  if ( v25 )
    *p_CP += 8 * v25 - 8;
  v26 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
  if ( v26 > obj->ConstStr.Data.Policy.Capacity )
    Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &obj->ConstStr.Data,
      &obj->ConstStr,
      v26);
  v27 = obj->ConstStr.Data.Size;
  v28 = v27 + 1;
  if ( v27 + 1 >= v27 )
  {
    if ( v28 <= obj->ConstStr.Data.Policy.Capacity )
      goto LABEL_45;
    v29 = v28 + (v28 >> 2);
  }
  else
  {
    if ( v28 >= obj->ConstStr.Data.Policy.Capacity >> 1 )
      goto LABEL_45;
    v29 = v27 + 1;
  }
  Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
    &obj->ConstStr.Data,
    &obj->ConstStr,
    v29);
LABEL_45:
  v30 = obj->ConstStr.Data.Data - 1;
  obj->ConstStr.Data.Size = v28;
  v31 = &v30[v28];
  if ( v31 )
    v31->Data = &Scaleform::GFx::AS3::Abc::StringView::Empty;
  v32 = 0;
  if ( v26 )
  {
    v33 = v26 - 1;
    while ( 1 )
    {
      if ( v32 >= v33 )
      {
        Capacity = 0i64;
        break;
      }
      v34 = *p_CP;
      v35 = obj->ConstStr.Data.Size + 1;
      if ( v35 >= obj->ConstStr.Data.Size )
      {
        if ( v35 <= obj->ConstStr.Data.Policy.Capacity )
          goto LABEL_56;
        v36 = v35 + (v35 >> 2);
      }
      else
      {
        if ( v35 >= obj->ConstStr.Data.Policy.Capacity >> 1 )
          goto LABEL_56;
        v36 = obj->ConstStr.Data.Size + 1;
      }
      Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &obj->ConstStr.Data,
        &obj->ConstStr,
        v36);
LABEL_56:
      v37 = obj->ConstStr.Data.Data - 1;
      obj->ConstStr.Data.Size = v35;
      v38 = &v37[v35];
      if ( v38 )
        v38->Data = v34;
      *p_CP += (int)Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      ++v32;
    }
  }
  v39 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
  v40 = 1;
  if ( v39 > obj->ConstNamespace.Data.Policy.Capacity )
    Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::NamespaceInfo,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &obj->ConstNamespace.Data,
      &obj->ConstNamespace,
      v39);
  v41 = obj->ConstNamespace.Data.Size;
  *(_QWORD *)&si128.Ind = &pnewText;
  *(_QWORD *)&si128.NameIndex = 0i64;
  v42 = v41 + 1;
  obja.Kind = NS_Public;
  obja.NameURI = (Scaleform::StringDataPtr)(unsigned __int64)&pnewText;
  if ( v41 + 1 >= v41 )
  {
    if ( v42 > obj->ConstNamespace.Data.Policy.Capacity )
    {
      v43 = v42 + (v42 >> 2);
      goto LABEL_67;
    }
  }
  else if ( v42 < obj->ConstNamespace.Data.Policy.Capacity >> 1 )
  {
    v43 = v41 + 1;
LABEL_67:
    Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::NamespaceInfo,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &obj->ConstNamespace.Data,
      &obj->ConstNamespace,
      v43);
  }
  v44 = obj->ConstNamespace.Data.Data;
  obj->ConstNamespace.Data.Size = v42;
  v45 = &v44[v42 - 1];
  if ( v45 )
  {
    v46 = obja.NameURI.Size;
    *(_OWORD *)&v45->Kind = *(_OWORD *)&obja.Kind;
    v45->NameURI.Size = v46;
  }
  if ( v39 <= 1 )
    goto LABEL_86;
  v47 = v39 - 1;
  *(_QWORD *)&si128.Ind = &pnewText;
  *(_QWORD *)&si128.NameIndex = 0i64;
  do
  {
    obja.Kind = NS_Public;
    obja.NameURI = (Scaleform::StringDataPtr)(unsigned __int64)&pnewText;
    v40 = v40 && Scaleform::GFx::AS3::Abc::Reader::Read(this, obj, &obja);
    v48 = obj->ConstNamespace.Data.Size + 1;
    if ( v48 >= obj->ConstNamespace.Data.Size )
    {
      if ( v48 <= obj->ConstNamespace.Data.Policy.Capacity )
        goto LABEL_82;
      v49 = v48 + (v48 >> 2);
    }
    else
    {
      if ( v48 >= obj->ConstNamespace.Data.Policy.Capacity >> 1 )
        goto LABEL_82;
      v49 = obj->ConstNamespace.Data.Size + 1;
    }
    Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::NamespaceInfo,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &obj->ConstNamespace.Data,
      &obj->ConstNamespace,
      v49);
LABEL_82:
    v50 = obj->ConstNamespace.Data.Data;
    obj->ConstNamespace.Data.Size = v48;
    v51 = &v50[v48 - 1];
    if ( v51 )
    {
      v52 = obja.NameURI.Size;
      *(_OWORD *)&v51->Kind = *(_OWORD *)&obja.Kind;
      v51->NameURI.Size = v52;
    }
    --v47;
  }
  while ( v47 );
  p_CP = reread;
  if ( !v40 )
    return 0;
LABEL_86:
  v53 = 1;
  p_const_ns_set = (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy> *)&obj->const_ns_set;
  v55 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
  if ( v55 > obj->const_ns_set.Data.Policy.Capacity )
    Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy> *)&obj->const_ns_set,
      &obj->const_ns_set,
      v55);
  v56 = obj->const_ns_set.Data.Size;
  v57 = v56 + 1;
  if ( v56 + 1 >= v56 )
  {
    if ( v57 > obj->const_ns_set.Data.Policy.Capacity )
    {
      v58 = v57 + (v57 >> 2);
LABEL_93:
      Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
        p_const_ns_set,
        p_const_ns_set,
        v58);
    }
  }
  else if ( v57 < obj->const_ns_set.Data.Policy.Capacity >> 1 )
  {
    v58 = v56 + 1;
    goto LABEL_93;
  }
  v59 = p_const_ns_set->Data;
  obj->const_ns_set.Data.Size = v57;
  v59[v57 - 1].Data = 0i64;
  obj->const_ns_set.Data.Data[obj->const_ns_set.Data.Size - 1].Data = 0i64;
  if ( v55 <= 1 )
    goto LABEL_113;
  v60 = (const unsigned __int8 *)obj;
  v61 = v55 - 1;
  while ( 2 )
  {
    if ( v53 )
    {
      v60 = *p_CP;
      v62 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      for ( k = 0; k < v62; ++k )
      {
        if ( !(unsigned int)Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP) )
          goto LABEL_102;
      }
      v53 = 1;
    }
    else
    {
LABEL_102:
      v53 = 0;
    }
    v64 = obj->const_ns_set.Data.Size + 1;
    if ( v64 >= obj->const_ns_set.Data.Size )
    {
      if ( v64 > obj->const_ns_set.Data.Policy.Capacity )
      {
        v65 = v64 + (v64 >> 2);
LABEL_108:
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
          p_const_ns_set,
          p_const_ns_set,
          v65);
      }
    }
    else if ( v64 < obj->const_ns_set.Data.Policy.Capacity >> 1 )
    {
      v65 = obj->const_ns_set.Data.Size + 1;
      goto LABEL_108;
    }
    v66 = p_const_ns_set->Data;
    obj->const_ns_set.Data.Size = v64;
    v66[v64 - 1].Data = v60;
    if ( --v61 )
      continue;
    break;
  }
  if ( !v53 )
    return 0;
  Capacity = 0i64;
LABEL_113:
  v68 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
  v69 = *p_CP;
  v70 = 1;
  memset(&v93, 0, sizeof(v93));
  v71 = 0i64;
  v72 = Scaleform::Memory::pGlobalHeap->GetAllocHeapOrNULL(Scaleform::Memory::pGlobalHeap, v69);
  v73 = v68 + 1;
  p_const_multiname = &obj->const_multiname;
  pheapAddr = v72;
  LOBYTE(reread) = 0;
  if ( v73 > obj->const_multiname.Data.Policy.Capacity )
    Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::Multiname,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::Multiname,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &obj->const_multiname.Data,
      &obj->const_multiname,
      v73);
  v75 = obj->const_multiname.Data.Size;
  v76 = v75 + 1;
  if ( v75 + 1 >= v75 )
  {
    if ( v76 > obj->const_multiname.Data.Policy.Capacity )
    {
      v77 = v76 + (v76 >> 2);
LABEL_120:
      Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::Multiname,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::Multiname,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &p_const_multiname->Data,
        p_const_multiname,
        v77);
    }
  }
  else if ( v76 < obj->const_multiname.Data.Policy.Capacity >> 1 )
  {
    v77 = v75 + 1;
    goto LABEL_120;
  }
  v78 = p_const_multiname->Data.Data;
  obj->const_multiname.Data.Size = v76;
  v79 = &v78[v76 - 1];
  if ( v79 )
    *v79 = Scaleform::GFx::AS3::Abc::Multiname::AnyType;
  if ( v68 <= 1 )
    goto LABEL_156;
  v98 = v68 - 1;
  while ( 2 )
  {
    v80 = *p_CP;
    si128 = (Scaleform::GFx::AS3::Abc::Multiname)_mm_load_si128((const __m128i *)&_xmm);
    v70 = v70 && Scaleform::GFx::AS3::Abc::Reader::Read(this, obj, &si128, (bool *)&reread);
    v81 = obj->const_multiname.Data.Size + 1;
    if ( v81 >= obj->const_multiname.Data.Size )
    {
      if ( v81 > obj->const_multiname.Data.Policy.Capacity )
      {
        v82 = v81 + (v81 >> 2);
LABEL_134:
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::Multiname,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::Multiname,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &p_const_multiname->Data,
          p_const_multiname,
          v82);
      }
    }
    else if ( v81 < obj->const_multiname.Data.Policy.Capacity >> 1 )
    {
      v82 = obj->const_multiname.Data.Size + 1;
      goto LABEL_134;
    }
    v83 = p_const_multiname->Data.Data;
    obj->const_multiname.Data.Size = v81;
    v84 = &v83[v81 - 1];
    if ( v84 )
      *v84 = si128;
    if ( (_BYTE)reread )
    {
      v85 = v71 + 1;
      obja.NameURI.pStr = (const char *)v80;
      *(_QWORD *)&obja.Kind = obj->const_multiname.Data.Size - 1;
      if ( v71 + 1 >= v71 )
      {
        if ( v85 > Capacity )
        {
          v86 = v85 + (v85 >> 2);
LABEL_143:
          Scaleform::ArrayDataBase<Scaleform::Pair<unsigned __int64,unsigned char const *>,Scaleform::AllocatorDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
            &v93,
            pheapAddr,
            v86);
          Capacity = v93.Policy.Capacity;
        }
      }
      else if ( v85 < Capacity >> 1 )
      {
        v86 = v71 + 1;
        goto LABEL_143;
      }
      v87 = v93.Data;
      ++v71;
      v93.Size = v85;
      v93.Data[v85 - 1] = *(Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *)&obja.Kind;
    }
    else
    {
      v87 = v93.Data;
    }
    if ( --v98 )
      continue;
    break;
  }
  if ( v71 )
  {
    v88 = *p_CP;
    if ( v70 )
    {
      v89 = v87;
      for ( m = 0i64; m < v71; ++m )
      {
        *p_CP = *(const unsigned __int8 **)&v89->Second;
        if ( !Scaleform::GFx::AS3::Abc::Reader::Read(
                this,
                obj,
                &p_const_multiname->Data.Data[(__int64)v89->First],
                (bool *)&reread) )
        {
          v70 = 0;
          break;
        }
        v70 = 1;
        ++v89;
      }
    }
    *p_CP = v88;
  }
LABEL_156:
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v93.Data);
  return v70;
}

bool __fastcall Scaleform::GFx::AS3::Abc::Reader::Read(
        Scaleform::GFx::AS3::Abc::Reader *this,
        Scaleform::GFx::AS3::Abc::File *obj)
{
  unsigned __int16 v4; // ax

  obj->MinorVersion = Scaleform::GFx::AS3::Abc::Read16<unsigned char>(&this->CP);
  v4 = Scaleform::GFx::AS3::Abc::Read16<unsigned char>(&this->CP);
  obj->MajorVersion = v4;
  return v4 == 46
      && obj->MinorVersion == 16
      && Scaleform::GFx::AS3::Abc::Reader::Read(this, &obj->Const_Pool)
      && Scaleform::GFx::AS3::Abc::Reader::ReadMethodInfo(this, &obj->MethodOffsets, &obj->Mi2Mbi)
      && Scaleform::GFx::AS3::Abc::Reader::ReadMetadata(this, &obj->MetadataOffsets, &obj->Const_Pool)
      && Scaleform::GFx::AS3::Abc::Reader::ReadClasses(this, &obj->ClassOffsets, &obj->InstOffsets)
      && Scaleform::GFx::AS3::Abc::Reader::ReadScripts(this, &obj->ScriptSection)
      && Scaleform::GFx::AS3::Abc::Reader::Read(this, &obj->MethodBodyOffsets, &obj->Mi2Mbi);
}

bool __fastcall Scaleform::GFx::AS3::Abc::Reader::Read(
        Scaleform::GFx::AS3::Abc::Reader *this,
        const Scaleform::GFx::AS3::Abc::ConstPool *cp,
        Scaleform::GFx::AS3::Abc::Multiname *obj,
        bool *reread)
{
  const unsigned __int8 **p_CP; // rdi
  const unsigned __int8 *v5; // rax
  bool v9; // r10
  int v10; // ecx
  Scaleform::GFx::AS3::Abc::MultinameKind v11; // eax
  bool result; // al
  int v13; // eax

  p_CP = &this->CP;
  *reread = 0;
  v5 = this->CP;
  v9 = 1;
  v10 = *v5;
  *p_CP = v5 + 1;
  switch ( v10 )
  {
    case 7:
      v11 = MN_QName;
      break;
    case 9:
      v11 = MN_Multiname;
      break;
    case 13:
      v11 = MN_QNameA;
      break;
    case 14:
      v11 = MN_MultinameA;
      break;
    case 15:
      v11 = MN_RTQName;
      break;
    case 16:
      v11 = MN_RTQNameA;
      break;
    case 17:
      v11 = MN_RTQNameL;
      break;
    case 18:
      v11 = MN_RTQNameLA;
      break;
    case 27:
      v11 = MN_MultinameL;
      break;
    case 28:
      v11 = MN_MultinameLA;
      break;
    case 29:
      v11 = MN_Typename;
      break;
    default:
      v11 = MN_Invalid;
      v9 = 0;
      break;
  }
  obj->Kind = v11;
  switch ( v11 )
  {
    case MN_QName:
    case MN_QNameA:
      if ( !v9 )
        goto LABEL_17;
      obj->Ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      obj->NameIndex = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      result = 1;
      break;
    case MN_RTQName:
    case MN_RTQNameA:
      if ( !v9 )
        goto LABEL_17;
      obj->NameIndex = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      result = 1;
      break;
    case MN_Multiname:
    case MN_MultinameA:
      if ( !v9 )
        goto LABEL_17;
      obj->NameIndex = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      obj->Ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      result = 1;
      break;
    case MN_MultinameL:
    case MN_MultinameLA:
      if ( !v9 )
        goto LABEL_17;
      obj->Ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      result = 1;
      break;
    case MN_Typename:
      if ( !v9
        || ((v13 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP), v13 < SLODWORD(cp->const_multiname.Data.Size)) ? (*obj = cp->const_multiname.Data.Data[v13]) : (*reread = 1),
            (unsigned int)Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP) != 1) )
      {
LABEL_17:
        v9 = 0;
        goto LABEL_31;
      }
      obj->NextIndex = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      result = 1;
      break;
    default:
      if ( !v9 )
LABEL_31:
        obj->Kind = MN_Invalid;
      result = v9;
      break;
  }
  return result;
}

bool __fastcall Scaleform::GFx::AS3::Abc::Reader::Read(
        Scaleform::GFx::AS3::Abc::Reader *this,
        const Scaleform::GFx::AS3::Abc::ConstPool *cp,
        Scaleform::GFx::AS3::Abc::NamespaceInfo *obj)
{
  const unsigned __int8 *v3; // rax
  const unsigned __int8 **p_CP; // rcx
  unsigned __int8 v7; // di
  int v8; // eax
  bool v9; // al
  Scaleform::StringDataPtr result; // [rsp+20h] [rbp-18h] BYREF

  v3 = this->CP;
  p_CP = &this->CP;
  result.Size = 0i64;
  v7 = *v3;
  *p_CP = v3 + 1;
  result.pStr = &pnewText;
  v8 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
  if ( v8 )
    Scaleform::GFx::AS3::Abc::StringView::ToStringDataPtr(&cp->ConstStr.Data.Data[v8], &result);
  obj->NameURI = result;
  switch ( v7 )
  {
    case 5u:
      obj->Kind = NS_Private;
      v9 = 1;
      break;
    case 8u:
    case 0x16u:
      obj->Kind = NS_Public;
      v9 = 1;
      break;
    case 0x17u:
      obj->Kind = NS_PackageInternal;
      v9 = 1;
      break;
    case 0x18u:
      obj->Kind = NS_Protected;
      v9 = 1;
      break;
    case 0x19u:
      obj->Kind = NS_Explicit;
      v9 = 1;
      break;
    case 0x1Au:
      obj->Kind = NS_StaticProtected;
      v9 = 1;
      break;
    default:
      v9 = 0;
      break;
  }
  return v9;
}

_BOOL8 __fastcall Scaleform::GFx::AS3::Abc::Reader::ReadClasses(
        Scaleform::GFx::AS3::Abc::Reader *this,
        Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> *cl_offsets,
        Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> *inst_offsets)
{
  const unsigned __int8 **p_CP; // rdi
  int v4; // er15
  int v7; // eax
  unsigned __int64 v8; // r13
  bool v9; // bl
  int i; // er12
  unsigned __int64 Size; // rax
  const unsigned __int8 *v12; // rbp
  unsigned __int64 v13; // rbx
  unsigned __int64 v14; // r8
  const unsigned __int8 **Data; // rax
  int v16; // ebx
  int v17; // eax
  char v18; // dl
  bool v19; // al
  unsigned int v20; // ebp
  unsigned int j; // ebx
  unsigned __int64 v22; // rax
  const unsigned __int8 *v23; // rbp
  unsigned __int64 v24; // rbx
  unsigned __int64 v25; // r8
  const unsigned __int8 **v26; // rax
  Scaleform::GFx::AS3::Abc::HasTraits obj; // [rsp+20h] [rbp-48h] BYREF
  int v29; // [rsp+30h] [rbp-38h]

  p_CP = &this->CP;
  v29 = -1;
  v4 = 0;
  obj.TraitsNum = 0;
  obj.TraitsOffset = 0i64;
  v7 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(&this->CP);
  v8 = v7;
  v9 = 1;
  if ( v7 > cl_offsets->Data.Policy.Capacity )
    Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &cl_offsets->Data,
      cl_offsets,
      v7);
  if ( v8 > inst_offsets->Data.Policy.Capacity )
    Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &inst_offsets->Data,
      inst_offsets,
      v8);
  for ( i = 0; i < (int)v8; ++i )
  {
    Size = inst_offsets->Data.Size;
    v12 = *p_CP;
    v13 = Size + 1;
    if ( Size + 1 >= Size )
    {
      if ( v13 > inst_offsets->Data.Policy.Capacity )
      {
        v14 = v13 + (v13 >> 2);
        goto LABEL_12;
      }
    }
    else if ( v13 < inst_offsets->Data.Policy.Capacity >> 1 )
    {
      v14 = Size + 1;
LABEL_12:
      Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &inst_offsets->Data,
        inst_offsets,
        v14);
    }
    Data = inst_offsets->Data.Data;
    inst_offsets->Data.Size = v13;
    Data[v13 - 1] = v12;
    v16 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    v17 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    v18 = *(*p_CP)++;
    v19 = v16 >= 0 && v17 >= 0;
    if ( (v18 & 8) != 0 )
    {
      if ( !v19 )
        goto LABEL_27;
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    }
    else if ( !v19 )
    {
      goto LABEL_27;
    }
    v20 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    for ( j = 0; j < v20; ++j )
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    v29 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    if ( !Scaleform::GFx::AS3::Abc::ReadHasTraits(p_CP, &obj) || v29 < 0 )
    {
LABEL_27:
      v9 = 0;
      break;
    }
    v9 = 1;
  }
  while ( v9 )
  {
    if ( v4 >= (int)v8 )
      return v9;
    v22 = cl_offsets->Data.Size;
    v23 = *p_CP;
    v24 = v22 + 1;
    if ( v22 + 1 >= v22 )
    {
      if ( v24 <= cl_offsets->Data.Policy.Capacity )
        goto LABEL_36;
      v25 = v24 + (v24 >> 2);
    }
    else
    {
      if ( v24 >= cl_offsets->Data.Policy.Capacity >> 1 )
        goto LABEL_36;
      v25 = v22 + 1;
    }
    Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &cl_offsets->Data,
      cl_offsets,
      v25);
LABEL_36:
    v26 = cl_offsets->Data.Data;
    cl_offsets->Data.Size = v24;
    v26[v24 - 1] = v23;
    v29 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    v9 = Scaleform::GFx::AS3::Abc::ReadHasTraits(p_CP, &obj) && v29 >= 0;
    ++v4;
  }
  return v9;
}

bool __fastcall Scaleform::GFx::AS3::Abc::ReadHasCode(
        const unsigned __int8 **ptr,
        Scaleform::GFx::AS3::Abc::HasCode *obj)
{
  obj->method_info_ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  return Scaleform::GFx::AS3::Abc::ReadHasTraits(ptr, obj) && obj->method_info_ind >= 0;
}

char __fastcall Scaleform::GFx::AS3::Abc::ReadHasTraits(
        const unsigned __int8 **ptr,
        Scaleform::GFx::AS3::Abc::HasTraits *obj)
{
  unsigned int v4; // er14
  unsigned int v5; // esi
  int v6; // eax
  char v7; // bp
  int v8; // edi
  int v9; // eax
  unsigned __int8 v10; // cl
  unsigned int v11; // eax
  __int64 v12; // rdi

  v4 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  obj->TraitsNum = v4;
  v5 = 0;
  obj->TraitsOffset = *ptr;
  while ( v5 < v4 )
  {
    v6 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
    v7 = *(*ptr)++;
    if ( v6 < 0 )
      return 0;
    v8 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
    v9 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
    if ( v8 < 0 || v9 < 0 )
      return 0;
    if ( (v7 & 0xF) == 0 || (v7 & 0xF) == 6 )
    {
      if ( (unsigned int)Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr) )
      {
        v10 = *(*ptr)++;
        if ( !Scaleform::GFx::AS3::Abc::IsValidValueKind(v10) )
          return 0;
      }
    }
    if ( (v7 & 0x40) != 0 )
    {
      v11 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
      if ( v11 )
      {
        v12 = v11;
        do
        {
          Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
          --v12;
        }
        while ( v12 );
      }
    }
    ++v5;
  }
  return 1;
}

bool __fastcall Scaleform::GFx::AS3::Abc::ReadInstanceHeader(
        const unsigned __int8 **ptr,
        Scaleform::GFx::AS3::Abc::InstanceHeader *obj)
{
  unsigned __int8 v4; // cl
  bool v5; // sf
  bool result; // al

  obj->name_ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  obj->super_name_ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  v4 = *(*ptr)++;
  v5 = obj->name_ind < 0;
  obj->flags = v4;
  result = !v5 && obj->super_name_ind >= 0;
  if ( (v4 & 8) != 0 )
  {
    if ( result )
    {
      obj->protected_namespace_ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
      return 1;
    }
    else
    {
      return 0;
    }
  }
  return result;
}

char __fastcall Scaleform::GFx::AS3::Abc::ReadMetaInfo(
        const unsigned __int8 **ptr,
        Scaleform::GFx::AS3::Abc::TraitInfo *obj)
{
  unsigned int v4; // eax
  __int64 v5; // rbx

  v4 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  obj->MetaDataNum = v4;
  obj->MetaDataOffset = *ptr;
  if ( v4 )
  {
    v5 = v4;
    do
    {
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
      --v5;
    }
    while ( v5 );
  }
  return 1;
}

char __fastcall Scaleform::GFx::AS3::Abc::Reader::ReadMetadata(
        Scaleform::GFx::AS3::Abc::Reader *this,
        Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> *offsets,
        const Scaleform::GFx::AS3::Abc::ConstPool *cp)
{
  const unsigned __int8 **p_CP; // rsi
  unsigned int v6; // er15
  unsigned int i; // ebp
  unsigned __int64 Size; // rax
  const unsigned __int8 *v9; // rdi
  unsigned __int64 v10; // rbx
  unsigned __int64 v11; // r8
  const unsigned __int8 **Data; // rax
  int v13; // eax
  unsigned int v14; // edi
  unsigned int j; // ebx
  unsigned int k; // ebx
  Scaleform::StringDataPtr result; // [rsp+20h] [rbp-28h] BYREF

  p_CP = &this->CP;
  v6 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(&this->CP);
  if ( v6 > offsets->Data.Policy.Capacity )
    Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &offsets->Data,
      offsets,
      v6);
  for ( i = 0; i < v6; ++i )
  {
    Size = offsets->Data.Size;
    v9 = *p_CP;
    v10 = Size + 1;
    if ( Size + 1 >= Size )
    {
      if ( v10 <= offsets->Data.Policy.Capacity )
        goto LABEL_11;
      v11 = v10 + (v10 >> 2);
    }
    else
    {
      if ( v10 >= offsets->Data.Policy.Capacity >> 1 )
        goto LABEL_11;
      v11 = Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &offsets->Data,
      offsets,
      v11);
LABEL_11:
    Data = offsets->Data.Data;
    offsets->Data.Size = v10;
    Data[v10 - 1] = v9;
    v13 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    if ( v13 )
      Scaleform::GFx::AS3::Abc::StringView::ToStringDataPtr(&cp->ConstStr.Data.Data[v13], &result);
    v14 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    for ( j = 0; j < v14; ++j )
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    for ( k = 0; k < v14; ++k )
      Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
  }
  return 1;
}

char __fastcall Scaleform::GFx::AS3::Abc::Reader::ReadMethodInfo(
        Scaleform::GFx::AS3::Abc::Reader *this,
        Scaleform::ArrayLH_POD<unsigned char const *,339,Scaleform::ArrayDefaultPolicy> *offsets,
        Scaleform::ArrayLH_POD<long,339,Scaleform::ArrayDefaultPolicy> *mi2mbi)
{
  const unsigned __int8 **p_CP; // rbx
  unsigned int v6; // eax
  unsigned __int64 v7; // rsi
  __int64 v8; // r12
  __int64 i; // rbp
  unsigned __int64 Size; // rax
  unsigned __int64 v11; // rsi
  unsigned __int64 v12; // r8
  int *Data; // rax
  int j; // er15
  unsigned __int64 v15; // rax
  const unsigned __int8 *v16; // rsi
  unsigned __int64 v17; // rdi
  unsigned __int64 v18; // r8
  const unsigned __int8 **v19; // rax
  unsigned int v20; // esi
  __int64 v21; // rdi
  char v22; // bp
  unsigned int v23; // eax
  __int64 v24; // rdi
  unsigned int k; // edi

  p_CP = &this->CP;
  v6 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(&this->CP);
  v7 = (int)v6;
  v8 = v6;
  if ( (int)v6 > offsets->Data.Policy.Capacity )
    Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &offsets->Data,
      offsets,
      (int)v6);
  if ( v7 > mi2mbi->Data.Policy.Capacity )
    Scaleform::ArrayDataBase<long,Scaleform::AllocatorLH_POD<long,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &mi2mbi->Data,
      mi2mbi,
      v7);
  if ( (int)v8 > 0 )
  {
    for ( i = v8; i; --i )
    {
      Size = mi2mbi->Data.Size;
      v11 = Size + 1;
      if ( Size + 1 >= Size )
      {
        if ( v11 > mi2mbi->Data.Policy.Capacity )
        {
          v12 = v11 + (v11 >> 2);
          goto LABEL_12;
        }
      }
      else if ( v11 < mi2mbi->Data.Policy.Capacity >> 1 )
      {
        v12 = Size + 1;
LABEL_12:
        Scaleform::ArrayDataBase<long,Scaleform::AllocatorLH_POD<long,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &mi2mbi->Data,
          mi2mbi,
          v12);
      }
      Data = mi2mbi->Data.Data;
      mi2mbi->Data.Size = v11;
      Data[v11 - 1] = -1;
    }
  }
  for ( j = 0; j < (int)v8; ++j )
  {
    v15 = offsets->Data.Size;
    v16 = *p_CP;
    v17 = v15 + 1;
    if ( v15 + 1 >= v15 )
    {
      if ( v17 <= offsets->Data.Policy.Capacity )
        goto LABEL_22;
      v18 = v17 + (v17 >> 2);
    }
    else
    {
      if ( v17 >= offsets->Data.Policy.Capacity >> 1 )
        goto LABEL_22;
      v18 = v15 + 1;
    }
    Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &offsets->Data,
      offsets,
      v18);
LABEL_22:
    v19 = offsets->Data.Data;
    offsets->Data.Size = v17;
    v19[v17 - 1] = v16;
    v20 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    if ( v20 )
    {
      v21 = v20;
      do
      {
        Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
        --v21;
      }
      while ( v21 );
    }
    Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    v22 = *(*p_CP)++;
    if ( (v22 & 8) != 0 )
    {
      v23 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
      if ( v23 )
      {
        v24 = v23;
        do
        {
          Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
          ++*p_CP;
          --v24;
        }
        while ( v24 );
      }
    }
    if ( v22 < 0 )
    {
      for ( k = 0; k < v20; ++k )
        Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    }
  }
  return 1;
}

char __fastcall Scaleform::GFx::AS3::Abc::ReadMethodInfoSmallHeader(
        const unsigned __int8 **ptr,
        Scaleform::GFx::AS3::Abc::MethodInfoSmallHeader *obj)
{
  obj->ParamNum = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  obj->RetTypeInd = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  return 1;
}

bool __fastcall Scaleform::GFx::AS3::Abc::Reader::ReadScripts(
        Scaleform::GFx::AS3::Abc::Reader *this,
        const unsigned __int8 **ss)
{
  const unsigned __int8 **p_CP; // rdi
  int v3; // ebx
  int v4; // esi
  bool result; // al
  Scaleform::GFx::AS3::Abc::HasTraits obj; // [rsp+20h] [rbp-28h] BYREF
  int v7; // [rsp+30h] [rbp-18h]

  p_CP = &this->CP;
  *ss = this->CP;
  v3 = 0;
  v7 = -1;
  v4 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(&this->CP);
  obj.TraitsNum = 0;
  obj.TraitsOffset = 0i64;
  result = 1;
  do
  {
    if ( v3 >= v4 )
      break;
    v7 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(p_CP);
    result = Scaleform::GFx::AS3::Abc::ReadHasTraits(p_CP, &obj) && v7 >= 0;
    ++v3;
  }
  while ( result );
  return result;
}

bool __fastcall Scaleform::GFx::AS3::Abc::ReadTraitInfoHeader(
        const unsigned __int8 **ptr,
        Scaleform::GFx::AS3::Abc::TraitInfoHeader *obj)
{
  unsigned __int8 v4; // r8
  bool v5; // sf
  int v7; // eax

  obj->name_ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  v4 = *(*ptr)++;
  v5 = obj->name_ind < 0;
  obj->kind = v4;
  if ( v5 )
    return 0;
  obj->SlotId = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  v7 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  v5 = obj->SlotId < 0;
  obj->Ind = v7;
  return !v5 && v7 >= 0;
}

_BOOL8 __fastcall Scaleform::GFx::AS3::Abc::ReadTraitInfoSmallHeader(
        const unsigned __int8 **ptr,
        Scaleform::GFx::AS3::Abc::TraitInfoSmallHeader *obj)
{
  unsigned __int8 v4; // r8
  _BOOL8 result; // rax

  obj->name_ind = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  v4 = *(*ptr)++;
  result = obj->name_ind >= 0;
  obj->kind = v4;
  return result;
}

void __fastcall Scaleform::ArrayDataBase<long,Scaleform::AllocatorLH_POD<long,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<long,Scaleform::AllocatorLH_POD<long,339>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  int *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  int *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 4 * v6;
      if ( Data )
      {
        v8 = (int *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 339;
      this->Data = (int *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                            Scaleform::Memory::pGlobalHeap,
                            pheapAddr,
                            v7,
                            &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned long,Scaleform::AllocatorLH_POD<unsigned long,340>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned int *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned int *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 4 * v6;
      if ( Data )
      {
        v8 = (unsigned int *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 340;
      this->Data = (unsigned int *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                     Scaleform::Memory::pGlobalHeap,
                                     pheapAddr,
                                     v7,
                                     &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned char const *,Scaleform::AllocatorLH_POD<unsigned char const *,339>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  const unsigned __int8 **Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  const unsigned __int8 **v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 8 * v6;
      if ( Data )
      {
        v8 = (const unsigned __int8 **)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 339;
      this->Data = (const unsigned __int8 **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                               Scaleform::Memory::pGlobalHeap,
                                               pheapAddr,
                                               v7,
                                               &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Pair<unsigned __int64,unsigned char const *>,Scaleform::AllocatorDH_POD<Scaleform::Pair<unsigned __int64,unsigned char const *>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long>,Scaleform::AllocatorDH<Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long>,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *Data; // rdx
  unsigned __int64 v6; // rdi
  Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *, unsigned __int64, const void *))Scaleform::Memory::pGlobalHeap->Realloc)(
                                                                                    Scaleform::Memory::pGlobalHeap,
                                                                                    Data,
                                                                                    16 * v6,
                                                                                    pheapAddr);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = *(_QWORD *)pheapAddr;
      v9 = 2;
      this->Data = (Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *)(*(__int64 (__fastcall **)(const void *, unsigned __int64, int *))(v8 + 80))(
                                                                                          pheapAddr,
                                                                                          16 * v6,
                                                                                          &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Pair<Scaleform::GFx::AS3::Value const *,unsigned long> *, _QWORD, const void *))Scaleform::Memory::pGlobalHeap->Free)(
          Scaleform::Memory::pGlobalHeap,
          Data,
          0i64,
          pheapAddr);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::Multiname,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::Multiname,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::Multiname,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::Multiname,340>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::Abc::Multiname *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::AS3::Abc::Multiname *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 16 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::AS3::Abc::Multiname *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                      Scaleform::Memory::pGlobalHeap,
                                                      Data,
                                                      v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 340;
      this->Data = (Scaleform::GFx::AS3::Abc::Multiname *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                            Scaleform::Memory::pGlobalHeap,
                                                            pheapAddr,
                                                            v7,
                                                            &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::NamespaceInfo,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::NamespaceInfo,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::NamespaceInfo,340>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::Abc::NamespaceInfo *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::AS3::Abc::NamespaceInfo *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 24 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::AS3::Abc::NamespaceInfo *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          Data,
                                                          v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 340;
      this->Data = (Scaleform::GFx::AS3::Abc::NamespaceInfo *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                Scaleform::Memory::pGlobalHeap,
                                                                pheapAddr,
                                                                v7,
                                                                &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::AS3::Abc::StringView,Scaleform::AllocatorLH<Scaleform::GFx::AS3::Abc::StringView,340>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::AS3::Abc::StringView *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::GFx::AS3::Abc::StringView *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 8 * v6;
      if ( Data )
      {
        v8 = (Scaleform::GFx::AS3::Abc::StringView *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       Data,
                                                       v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 340;
      this->Data = (Scaleform::GFx::AS3::Abc::StringView *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                             Scaleform::Memory::pGlobalHeap,
                                                             pheapAddr,
                                                             v7,
                                                             &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

char __fastcall Scaleform::GFx::AS3::Abc::SkipInterfaces(const unsigned __int8 **ptr)
{
  unsigned int v2; // esi
  unsigned int i; // ebx

  v2 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  for ( i = 0; i < v2; ++i )
    Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>(ptr);
  return 1;
}

