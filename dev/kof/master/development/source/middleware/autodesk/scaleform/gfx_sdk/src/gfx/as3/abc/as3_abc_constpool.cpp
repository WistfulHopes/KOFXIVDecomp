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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc_constpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/as3/abc/as3_abc_type.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::GFx::AS3::Abc::Multiname Scaleform::GFx::AS3::Abc::Multiname::AnyType; // 0x1407978D0
const unsigned char Scaleform::GFx::AS3::Abc::StringView::Empty; // 0x1407978E0
Scaleform::GFx::AS3::Abc::ConstPool::ConstPool(); // 0x14058BF50
Scaleform::StringDataPtr Scaleform::GFx::AS3::Abc::StringView::ToStringDataPtr(); // 0x14058C010
double Scaleform::GFx::AS3::Abc::ConstPool::GetDouble(unsigned long long ind); // 0x14058BFE0//decompilation failure at 1407978D0!
//decompilation failure at 1407978E0!
void __fastcall Scaleform::GFx::AS3::Abc::ConstPool::ConstPool(Scaleform::GFx::AS3::Abc::ConstPool *this)
{
  this->ConstInt.Data.Data = 0i64;
  this->ConstInt.Data.Size = 0i64;
  this->ConstInt.Data.Policy.Capacity = 0i64;
  this->ConstUInt.Data.Data = 0i64;
  this->ConstUInt.Data.Size = 0i64;
  this->ConstUInt.Data.Policy.Capacity = 0i64;
  this->ConstStr.Data.Data = 0i64;
  this->ConstStr.Data.Size = 0i64;
  this->ConstStr.Data.Policy.Capacity = 0i64;
  this->ConstNamespace.Data.Data = 0i64;
  this->ConstNamespace.Data.Size = 0i64;
  this->ConstNamespace.Data.Policy.Capacity = 0i64;
  this->const_ns_set.Data.Data = 0i64;
  this->const_ns_set.Data.Size = 0i64;
  this->const_ns_set.Data.Policy.Capacity = 0i64;
  this->const_multiname.Data.Data = 0i64;
  this->const_multiname.Data.Size = 0i64;
  this->const_multiname.Data.Policy.Capacity = 0i64;
  this->any_namespace.Kind = NS_Public;
  this->any_namespace.NameURI = (Scaleform::StringDataPtr)(unsigned __int64)&pnewText;
}

long double __fastcall Scaleform::GFx::AS3::Abc::ConstPool::GetDouble(
        Scaleform::GFx::AS3::Abc::ConstPool *this,
        unsigned __int64 ind)
{
  unsigned __int8 *cp; // [rsp+38h] [rbp+10h] BYREF

  if ( !ind )
    return 0.0;
  cp = (unsigned __int8 *)&this->Doubles[8 * ind - 8];
  return Scaleform::GFx::AS3::Abc::ReadDouble<unsigned char>((const unsigned __int8 **)&cp);
}

Scaleform::StringDataPtr *__fastcall Scaleform::GFx::AS3::Abc::StringView::ToStringDataPtr(
        Scaleform::GFx::AS3::Abc::StringView *this,
        Scaleform::StringDataPtr *result)
{
  int v4; // eax
  unsigned __int8 *cp; // [rsp+30h] [rbp+8h] BYREF

  cp = (unsigned __int8 *)this->Data;
  if ( cp )
  {
    v4 = Scaleform::GFx::AS3::Abc::ReadU30<unsigned char>((const unsigned __int8 **)&cp);
    Scaleform::GFx::AS3::Abc::ReadStringPtr<unsigned char>(result, (const unsigned __int8 **)&cp, v4);
    return result;
  }
  else
  {
    result->Size = 0i64;
    result->pStr = &pnewText;
    return result;
  }
}

