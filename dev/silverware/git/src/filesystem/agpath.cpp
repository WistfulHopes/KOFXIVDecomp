#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"

AgPath AgPathInvalid; // 0x140A8FE00
void(*AgPathInvalid$initializer$)(); // 0x1407406B0
AgPath AgPath::getRoot(); // 0x140660200
AgPath AgPath::getParent(); // 0x1406600B0
AgPath AgPath::getRelative(); // 0x140660170
AgStringRef AgPath::getRootName(); // 0x140660280
void AgPath::setExtension(AgStringRef ext); // 0x1406602E0
void AgPath::clean(); // 0x14065FEA0//decompilation failure at 140A8FE00!
//decompilation failure at 1407406B0!
void __fastcall AgPath::clean(AgPath *this)
{
  AgStringRef *v2; // rax
  signed int i; // edi
  AgStringRef *v4; // rax
  const AgString *v5; // rax
  AgStringRef *v6; // rax
  AgStringRef *v7; // rax
  signed int j; // edi
  AgStringRef *v9; // rax
  const AgString *v10; // rax
  AgStringRef *v11; // rax
  AgStringRef *v12; // rax
  signed int k; // edi
  AgStringRef *v14; // rax
  const AgString *v15; // rax
  AgStringRef *v16; // rax
  AgStringRef v17; // [rsp+20h] [rbp-30h] BYREF
  AgStringRef v18; // [rsp+30h] [rbp-20h] BYREF
  AgStringRef v19; // [rsp+40h] [rbp-10h] BYREF

  AgStringRef::AgStringRef(&v18, "\\");
  v17 = *v2;
  for ( i = AgString::find(&this->m_path, &v17, 0); i >= 0; i = AgString::find(&this->m_path, &v17, 0) )
  {
    AgStringRef::AgStringRef(&v18, "/");
    v17 = *v4;
    v5 = AgString::replace(&this->m_path, i, 1, &v17);
    AgString::operator=(&this->m_path, v5);
    AgStringRef::AgStringRef(&v19, "\\");
    v17 = *v6;
  }
  AgStringRef::AgStringRef(&v19, "//");
  v17 = *v7;
  for ( j = AgString::find(&this->m_path, &v17, 1u); j > 0; j = AgString::find(&this->m_path, &v17, 1u) )
  {
    AgStringRef::AgStringRef(&v19, "/");
    v17 = *v9;
    v10 = AgString::replace(&this->m_path, j, 2, &v17);
    AgString::operator=(&this->m_path, v10);
    AgStringRef::AgStringRef(&v18, "//");
    v17 = *v11;
  }
  AgStringRef::AgStringRef(&v19, "/./");
  v17 = *v12;
  for ( k = AgString::find(&this->m_path, &v17, 0); k > 0; k = AgString::find(&this->m_path, &v17, 0) )
  {
    AgStringRef::AgStringRef(&v19, "/");
    v17 = *v14;
    v15 = AgString::replace(&this->m_path, k, 3, &v17);
    AgString::operator=(&this->m_path, v15);
    AgStringRef::AgStringRef(&v18, "/./");
    v17 = *v16;
  }
}

AgPath *__fastcall AgPath::getParent(AgPath *this, AgPath *result)
{
  int LastIndexOf; // eax
  const AgStringRef *v5; // rax
  int FirstIndexOf; // eax
  const AgStringRef *SubString; // rax
  AgStringRef resulta; // [rsp+30h] [rbp-18h] BYREF

  LastIndexOf = AgString::getLastIndexOf(&this->m_path, 47, 0xFFFFFFFF);
  if ( LastIndexOf == -1 )
  {
    FirstIndexOf = AgString::getFirstIndexOf(&this->m_path, 58, 0);
    if ( FirstIndexOf == -1 )
    {
      AgString::AgString(&result->m_path);
    }
    else
    {
      SubString = AgString::getSubString(&this->m_path, &resulta, 0, FirstIndexOf + 1);
      AgString::AgString(&result->m_path, SubString);
      AgPath::clean(result);
    }
  }
  else
  {
    v5 = AgString::getSubString(&this->m_path, &resulta, 0, LastIndexOf);
    AgString::AgString(&result->m_path, v5);
    AgPath::clean(result);
  }
  return result;
}

AgPath *__fastcall AgPath::getRelative(AgPath *this, AgPath *result)
{
  int FirstIndexOf; // eax
  const AgStringRef *SubString; // rax
  AgStringRef resulta; // [rsp+30h] [rbp-18h] BYREF

  FirstIndexOf = AgString::getFirstIndexOf(&this->m_path, 58, 0);
  if ( FirstIndexOf == -1 )
  {
    AgString::AgString(&result->m_path, &this->m_path);
  }
  else
  {
    SubString = AgString::getSubString(&this->m_path, &resulta, FirstIndexOf + 1, -1);
    AgString::AgString(&result->m_path, SubString);
    AgPath::clean(result);
  }
  return result;
}

AgPath *__fastcall AgPath::getRoot(AgPath *this, AgPath *result)
{
  int FirstIndexOf; // eax
  const AgStringRef *SubString; // rax
  AgStringRef resulta; // [rsp+30h] [rbp-18h] BYREF

  FirstIndexOf = AgString::getFirstIndexOf(&this->m_path, 58, 0);
  if ( FirstIndexOf == -1 )
  {
    AgString::AgString(&result->m_path);
  }
  else
  {
    SubString = AgString::getSubString(&this->m_path, &resulta, 0, FirstIndexOf + 1);
    AgString::AgString(&result->m_path, SubString);
    AgPath::clean(result);
  }
  return result;
}

AgStringRef *__fastcall AgPath::getRootName(AgPath *this, AgStringRef *result)
{
  int FirstIndexOf; // eax

  FirstIndexOf = AgString::getFirstIndexOf(&this->m_path, 58, 0);
  if ( FirstIndexOf == -1 )
    AgStringRef::AgStringRef(result);
  else
    AgString::getSubString(&this->m_path, result, 0, FirstIndexOf);
  return result;
}

void __fastcall AgPath::setExtension(AgPath *this, AgStringRef *ext)
{
  signed int LastIndexOf; // eax
  AgStringRef v5; // [rsp+20h] [rbp-18h] BYREF

  LastIndexOf = AgString::getLastIndexOf(&this->m_path, 46, 0xFFFFFFFF);
  if ( LastIndexOf >= 0 )
  {
    v5 = *ext;
    AgString::replace(&this->m_path, LastIndexOf, -1, &v5);
  }
}

