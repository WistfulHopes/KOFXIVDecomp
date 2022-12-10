#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iterator"
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
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"

long AgStringUtils::getFirstIndexOf(const char * string, unsigned long stringLength, char query, unsigned long offset); // 0x140678060
long AgStringUtils::getFirstIndexOf(const char * string, unsigned long stringLength, const char * query, unsigned long queryLength, unsigned long offset); // 0x140677FB0
long AgStringUtils::getLastIndexOf(const char * string, unsigned long stringLength, char query, unsigned long offset); // 0x140678090
AgStringRef AgStringUtils::getSubString(const char * string, unsigned long stringLength, unsigned long start, long length); // 0x1406780C0
long AgStringUtils::compare(const char * left, unsigned long leftLength, const char * right, unsigned long rightLength); // 0x140677F30
long AgStringUtils::equal(const char * left, unsigned long leftLength, const char * right, unsigned long rightLength); // 0x140677F80
long AgStringUtils::caselessCompare(const char * left, unsigned long leftLength, const char * right, unsigned long rightLength); // 0x140677EE0
AgString AgStringUtils::replace(const char * string, unsigned long length, unsigned long startIndex, long replaceLength, const char * replaceValue, unsigned long replaceValueLength); // 0x140678120
AgString AgStringUtils::append(const char * string1, unsigned long length1, const char * string2, unsigned long length2); // 0x140677E30AgString *__fastcall AgStringUtils::append(
        AgString *result,
        const char *string1,
        unsigned int length1,
        const char *string2,
        unsigned int length2)
{
  __int64 v6; // rbx
  int v9; // ebp
  char *v10; // r14
  unsigned __int64 v11; // rdx

  v6 = length1;
  v9 = length1 + length2;
  v10 = (char *)operator new[](length1 + length2);
  memmove(v10, string1, (unsigned int)v6);
  memmove(&v10[v6], string2, length2);
  AgString::AgString(result, v10, v9);
  operator delete(v10, v11);
  return result;
}

int __fastcall AgStringUtils::caselessCompare(
        const char *left,
        unsigned int leftLength,
        const char *right,
        unsigned int rightLength)
{
  unsigned __int64 v5; // r8
  int result; // eax

  v5 = rightLength;
  if ( leftLength < rightLength )
    v5 = leftLength;
  result = strnicmp(left, right, v5);
  if ( !result && leftLength != rightLength )
  {
    result = -1;
    if ( leftLength > rightLength )
      return 1;
  }
  return result;
}

int __fastcall AgStringUtils::compare(
        const char *left,
        unsigned int leftLength,
        const char *right,
        unsigned int rightLength)
{
  size_t v5; // r8
  int result; // eax

  v5 = rightLength;
  if ( leftLength < rightLength )
    v5 = leftLength;
  result = strncmp(left, right, v5);
  if ( !result && leftLength != rightLength )
  {
    result = -1;
    if ( leftLength > rightLength )
      return 1;
  }
  return result;
}

_BOOL8 __fastcall AgStringUtils::equal(
        const char *left,
        unsigned int leftLength,
        const char *right,
        unsigned int rightLength)
{
  return leftLength == rightLength && strncmp(left, right, leftLength) == 0;
}

__int64 __fastcall AgStringUtils::getFirstIndexOf(
        const char *string,
        unsigned int stringLength,
        const char *query,
        unsigned int queryLength,
        unsigned int offset)
{
  unsigned int v8; // er9
  char v9; // si
  const char *v10; // r8
  __int64 v11; // rax

  if ( !queryLength )
    return 0xFFFFFFFFi64;
  v8 = offset;
  if ( offset < stringLength )
  {
    v9 = *query;
    do
    {
      if ( string[v8] == v9 )
      {
        if ( queryLength <= 1 )
          return v8;
        v10 = query + 1;
        v11 = v8 + 1;
        while ( (unsigned int)v11 < stringLength && string[v11] == *v10 )
        {
          v11 = (unsigned int)(v11 + 1);
          ++v10;
          if ( (unsigned int)v11 - v8 >= queryLength )
            return v8;
        }
      }
      ++v8;
    }
    while ( v8 < stringLength );
  }
  return 0xFFFFFFFFi64;
}

__int64 __fastcall AgStringUtils::getFirstIndexOf(
        const char *string,
        unsigned int stringLength,
        char query,
        unsigned int offset)
{
  const char *i; // rcx

  if ( offset >= stringLength )
    return 0xFFFFFFFFi64;
  for ( i = &string[offset]; *i != query; ++i )
  {
    if ( ++offset >= stringLength )
      return 0xFFFFFFFFi64;
  }
  return offset;
}

__int64 __fastcall AgStringUtils::getLastIndexOf(
        const char *string,
        unsigned int stringLength,
        char query,
        unsigned int offset)
{
  __int64 v4; // rax

  if ( offset >= stringLength )
    offset = stringLength - 1;
  v4 = (int)offset;
  if ( (offset & 0x80000000) != 0 )
    return 0xFFFFFFFFi64;
  while ( string[v4] != query )
  {
    --offset;
    if ( --v4 < 0 )
      return 0xFFFFFFFFi64;
  }
  return offset;
}

AgStringRef *__fastcall AgStringUtils::getSubString(
        AgStringRef *result,
        const char *string,
        unsigned int stringLength,
        unsigned int start,
        int length)
{
  int v6; // er8

  v6 = length;
  if ( length == -1 )
    v6 = stringLength - start;
  if ( v6 && stringLength )
  {
    AgStringRef::AgStringRef(result, &string[start], v6);
    return result;
  }
  else
  {
    AgStringRef::AgStringRef(result, &pnewText, 0);
    return result;
  }
}

AgString *__fastcall AgStringUtils::replace(
        AgString *result,
        const char *string,
        unsigned int length,
        unsigned int startIndex,
        int replaceLength,
        const char *replaceValue,
        unsigned int replaceValueLength)
{
  unsigned int v8; // ebx
  const char *v9; // rbp
  int v11; // edi
  unsigned int v12; // er8
  const char *v13; // rdx
  int IsStopping; // ebx
  int v15; // eax
  char *v16; // rbp
  unsigned int v17; // ebx
  __ExceptionPtr *CString; // rax
  int v19; // eax
  unsigned int v20; // edi
  __ExceptionPtr *v21; // rbx
  unsigned int v22; // eax
  int v23; // eax
  unsigned __int64 v24; // rdx
  _BYTE v26[56]; // [rsp+30h] [rbp-38h] BYREF

  v8 = length;
  v9 = string;
  v11 = replaceLength;
  if ( replaceLength == -1 )
    v11 = length - startIndex;
  if ( startIndex != -1 )
    length = startIndex;
  if ( !length || !v8 )
  {
    length = 0;
    string = &pnewText;
  }
  AgStringRef::AgStringRef((AgStringRef *)v26, string, length);
  v12 = v8 - (startIndex + v11);
  if ( v8 == startIndex + v11 || !v8 )
  {
    v12 = 0;
    v13 = &pnewText;
  }
  else
  {
    v13 = &v9[startIndex + v11];
  }
  AgStringRef::AgStringRef((AgStringRef *)&v26[16], v13, v12);
  IsStopping = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)&v26[16]);
  v15 = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)v26);
  v16 = (char *)operator new[](v15 + replaceValueLength + IsStopping);
  v17 = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)v26);
  CString = AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)v26);
  memmove(v16, CString, v17);
  v19 = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)v26);
  memmove(&v16[v19], replaceValue, replaceValueLength);
  v20 = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)&v26[16]);
  v21 = AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)&v26[16]);
  v22 = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)v26);
  memmove(&v16[replaceValueLength + (unsigned __int64)v22], v21, v20);
  LODWORD(v21) = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)&v26[16]);
  v23 = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)v26);
  AgString::AgString(result, v16, v23 + replaceValueLength + (_DWORD)v21);
  operator delete(v16, v24);
  return result;
}

