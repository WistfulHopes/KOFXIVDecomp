#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agstring.h"
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
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/silverware/git/sdk/agstringref.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"

AgStringRef::AgStringRef(); // 0x14065F320
AgStringRef::AgStringRef(const char * base); // 0x14065F2E0
AgStringRef::AgStringRef(const char * base, unsigned long length); // 0x14065F310
AgStringRef::AgStringRef(const AgString & str); // 0x14065F2A0
const char * AgStringRef::getCString(); // 0x1406FD390
unsigned long AgStringRef::getLength(); // 0x140030600
AgStringRef AgStringRef::getSubString(unsigned long start, long length); // 0x14065F3C0
long AgStringRef::getLastIndexOf(char query, unsigned long offset); // 0x14065F3A0
const char & AgStringRef::operator[](unsigned long index); // 0x14065F370
bool operator==(const AgStringRef & s1, const AgStringRef & s2); // 0x14065F340
bool operator<(const AgStringRef & s1, const AgStringRef & s2); // 0x14065F380void __fastcall AgStringRef::AgStringRef(AgStringRef *this, const AgString *str)
{
  this->m_text = AgString::getCString((AgString *)str);
  this->m_length = AgString::getLength((AgString *)str);
}

void __fastcall AgStringRef::AgStringRef(AgStringRef *this, const char *base)
{
  __int64 v2; // rax

  this->m_text = base;
  if ( base )
  {
    v2 = -1i64;
    do
      ++v2;
    while ( base[v2] );
    this->m_length = v2;
  }
  else
  {
    this->m_length = 0;
  }
}

void __fastcall AgStringRef::AgStringRef(AgStringRef *this, const char *base, unsigned int length)
{
  this->m_text = base;
  this->m_length = length;
}

void __fastcall AgStringRef::AgStringRef(AgStringRef *this)
{
  this->m_length = 0;
  this->m_text = &pnewText;
}

bool __fastcall operator==(const AgStringRef *s1, const AgStringRef *s2)
{
  return AgStringUtils::equal(s1->m_text, s1->m_length, s2->m_text, s2->m_length) == 1;
}

const char *__fastcall AgStringRef::operator[](AgStringRef *this, unsigned int index)
{
  return &this->m_text[index];
}

bool __fastcall operator<(const AgStringRef *s1, const AgStringRef *s2)
{
  return AgStringUtils::compare(s1->m_text, s1->m_length, s2->m_text, s2->m_length) < 0;
}

__ExceptionPtr *__fastcall AgStringRef::getCString(std::shared_ptr<__ExceptionPtr> *this)
{
  return this->_Ptr;
}

int __fastcall AgStringRef::getLastIndexOf(AgStringRef *this, char query, unsigned int offset)
{
  return AgStringUtils::getLastIndexOf(this->m_text, this->m_length, query, offset);
}

__int64 __fastcall AgSimpleThreadHost::getThreadIsStopping(
        Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *this)
{
  return this->m_executionResourceTlsIndex;
}

AgStringRef *__fastcall AgStringRef::getSubString(
        AgStringRef *this,
        AgStringRef *result,
        unsigned int start,
        int length)
{
  AgStringUtils::getSubString(result, this->m_text, this->m_length, start, length);
  return result;
}

