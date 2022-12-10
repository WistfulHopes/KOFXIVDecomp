#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agstringutils.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "dev/silverware/git/sdk/agstring.h"
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

typedef const wchar_t * LPCWCH;
typedef long * LPBOOL;
AgString::AgString(); // 0x1400FE240
AgString::AgString(const AgStringRef & copy); // 0x140656850
AgString::AgString(const char text); // 0x1406568E0
AgString::AgString(const char * text, long length); // 0x140656A00
AgString::AgString(const AgString & copy); // 0x140656770
AgString::AgString(AgString & move); // 0x140656750
AgString::AgString(long integer); // 0x140656930
AgString::AgString(long long integer); // 0x140656B80
AgString::AgString(double float64); // 0x140656990
AgString::AgString(const std::string & copy); // 0x1406567E0
AgString::AgString(const wchar_t * text, long length); // 0x140656A80
AgString::~AgString(); // 0x140656C30
void AgString::operator=(const char * copy); // 0x140656D90
void AgString::operator=(const AgString & copy); // 0x140656C60
void AgString::operator=(const AgStringRef & copy); // 0x140656CE0
void AgString::_copy(const char * text, long length); // 0x1406570A0
unsigned long AgString::getLength(); // 0x140657380
void AgString::setLength(unsigned long length); // 0x140657460
long AgString::getFirstIndexOf(char query, unsigned long offset); // 0x140657340
long AgString::getLastIndexOf(char query, unsigned long offset); // 0x140657360
AgStringRef AgString::getSubString(unsigned long start, long length); // 0x140657390
const char * AgString::getCString(); // 0x140657320
AgString AgString::fromUInt64(unsigned long long value, long radix); // 0x140657250
bool operator==(const AgString & s1, const AgString & s2); // 0x140656E10
bool operator<(const AgString & s1, const AgString & s2); // 0x140657010
AgString operator+(const AgString & s1, const AgString & s2); // 0x140656EA0
void AgString::operator+=(const AgString & s); // 0x140657050
long AgString::caselessCompare(const AgStringRef & left, const AgStringRef & right); // 0x140657110
long AgString::find(AgStringRef substr, unsigned long startPos); // 0x1406571F0
AgString & AgString::replace(unsigned long startPos, long length, AgStringRef replaceValue); // 0x1406573C0
char & AgString::operator[](unsigned long index); // 0x140656E90
AgString operator+(const AgString & s1, const char * s2); // 0x140656FA0
bool operator!=(const AgString & s1, const char * s2); // 0x140656E50
AgString operator+(const AgString & s1, const AgStringRef & s2); // 0x140656F10void __fastcall AgString::AgString(AgString *this, AgString *move)
{
  this->m_length = move->m_length;
  this->m_text = move->m_text;
  move->m_text = 0i64;
  move->m_length = 0;
}

void __fastcall AgString::AgString(AgString *this, const AgString *copy)
{
  size_t m_length; // rbx
  char *v5; // rax
  char *m_text; // rdx

  this->m_length = 0;
  this->m_text = 0i64;
  m_length = copy->m_length;
  v5 = (char *)operator new[]((int)m_length + 1);
  this->m_text = v5;
  m_text = (char *)&pnewText;
  this->m_length = m_length;
  if ( copy->m_text )
    m_text = copy->m_text;
  memmove(v5, m_text, m_length);
  this->m_text[this->m_length] = 0;
}

void __fastcall AgString::AgString(AgString *this, const std::string *copy)
{
  const std::string *Ptr; // rbx
  unsigned __int64 Mysize; // rsi
  char *v5; // rax

  this->m_length = 0;
  Ptr = copy;
  this->m_text = 0i64;
  Mysize = copy->_Mypair._Myval2._Mysize;
  v5 = (char *)operator new[]((int)Mysize + 1);
  this->m_text = v5;
  this->m_length = Mysize;
  if ( Ptr->_Mypair._Myval2._Myres >= 0x10 )
    Ptr = (const std::string *)Ptr->_Mypair._Myval2._Bx._Ptr;
  memmove(v5, Ptr, (int)Mysize);
  this->m_text[this->m_length] = 0;
}

void __fastcall AgString::AgString(AgString *this, const AgStringRef *copy)
{
  __int64 v4; // rbx
  __ExceptionPtr *CString; // rax
  __ExceptionPtr *v6; // rdi
  char *v7; // rax

  this->m_length = 0;
  this->m_text = 0i64;
  LODWORD(v4) = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)copy);
  CString = AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)copy);
  v6 = CString;
  if ( (int)v4 < 0 )
  {
    v4 = -1i64;
    do
      ++v4;
    while ( *((_BYTE *)&CString->m_Record.ExceptionCode + v4) );
  }
  v7 = (char *)operator new[]((int)v4 + 1);
  this->m_text = v7;
  this->m_length = v4;
  memmove(v7, v6, (int)v4);
  this->m_text[this->m_length] = 0;
}

void __fastcall AgString::AgString(AgString *this, const char text)
{
  char *v4; // rax

  this->m_length = 1;
  this->m_text = 0i64;
  v4 = (char *)operator new[](2ui64);
  this->m_text = v4;
  *v4 = text;
  this->m_text[1] = 0;
}

void __fastcall AgString::AgString(AgString *this, int integer)
{
  char *v4; // rax
  __int64 v5; // rbx
  int v6; // [rsp+20h] [rbp-18h]

  this->m_length = 0;
  this->m_text = 0i64;
  v4 = (char *)operator new[](0x21ui64);
  v6 = integer;
  v5 = -1i64;
  this->m_text = v4;
  snprintf_s(v4, 0x21ui64, 0xFFFFFFFFFFFFFFFFui64, "%d", v6);
  do
    ++v5;
  while ( this->m_text[v5] );
  this->m_length = v5;
}

void __fastcall AgString::AgString(AgString *this, long double float64)
{
  char *v3; // rax
  __int64 v4; // rbx

  this->m_length = 0;
  this->m_text = 0i64;
  v3 = (char *)operator new[](0x21ui64);
  v4 = -1i64;
  this->m_text = v3;
  snprintf_s(v3, 0x10ui64, 0xFFFFFFFFFFFFFFFFui64, "%.15g", (double)float64);
  do
    ++v4;
  while ( this->m_text[v4] );
  this->m_length = v4;
}

void __fastcall AgString::AgString(AgString *this, const char *text, int length)
{
  __int64 v3; // rbx
  char *v6; // rax

  this->m_text = 0i64;
  LODWORD(v3) = length;
  this->m_length = length;
  if ( length < 0 )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( text[v3] );
  }
  v6 = (char *)operator new[]((int)v3 + 1);
  this->m_text = v6;
  this->m_length = v3;
  memmove(v6, text, (int)v3);
  this->m_text[this->m_length] = 0;
}

void __fastcall AgString::AgString(AgString *this, const wchar_t *text, int length)
{
  __int64 v3; // rbx
  int cbMultiByte; // er14
  char *lpMultiByteStr; // rbp
  unsigned __int64 v8; // rdx

  LODWORD(v3) = length;
  this->m_length = 0;
  this->m_text = 0i64;
  if ( length < 0 )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( text[v3] );
  }
  if ( (int)v3 <= 0 )
  {
    this->m_length = 0;
  }
  else
  {
    cbMultiByte = WideCharToMultiByte(0xFDE9u, 0, text, v3, 0i64, 0, 0i64, 0i64);
    lpMultiByteStr = (char *)operator new[](cbMultiByte);
    if ( WideCharToMultiByte(0xFDE9u, 0, text, v3, lpMultiByteStr, cbMultiByte, 0i64, 0i64) )
      AgString::_copy(this, lpMultiByteStr, cbMultiByte);
    operator delete(lpMultiByteStr, v8);
  }
}

void __fastcall AgString::AgString(AgString *this)
{
  this->m_length = 0;
  this->m_text = 0i64;
}

void __fastcall AgString::AgString(AgString *this, __int64 integer)
{
  char *v4; // rax
  __int64 v5; // rbx
  __int64 v6; // [rsp+20h] [rbp-18h]

  this->m_length = 0;
  this->m_text = 0i64;
  v4 = (char *)operator new[](0x21ui64);
  v6 = integer;
  v5 = -1i64;
  this->m_text = v4;
  snprintf_s(v4, 0x21ui64, 0xFFFFFFFFFFFFFFFFui64, "%I64d", v6);
  do
    ++v5;
  while ( this->m_text[v5] );
  this->m_length = v5;
}

void __fastcall std::wstring::~wstring(std::wstring *this)
{
  unsigned __int64 Myres; // r8

  Myres = this->_Mypair._Myval2._Myres;
  if ( Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)this,
      this->_Mypair._Myval2._Bx._Ptr,
      Myres + 1);
  this->_Mypair._Myval2._Myres = 7i64;
  this->_Mypair._Myval2._Mysize = 0i64;
  if ( this->_Mypair._Myval2._Myres < 8 )
    this->_Mypair._Myval2._Bx._Buf[0] = 0;
  else
    *this->_Mypair._Myval2._Bx._Ptr = 0;
}

void __fastcall AgString::~AgString(AgString *this, unsigned __int64 a2)
{
  this->m_length = 0;
  operator delete(this->m_text, a2);
  this->m_text = 0i64;
}

void __fastcall AgString::operator=(AgString *this, const AgString *copy)
{
  char *m_text; // rcx
  size_t m_length; // rbx
  char *v6; // rax
  char *v7; // rdx

  m_text = this->m_text;
  if ( copy->m_text != m_text )
  {
    this->m_length = 0;
    operator delete(m_text, (unsigned __int64)copy);
    this->m_text = 0i64;
    m_length = copy->m_length;
    v6 = (char *)operator new[]((int)m_length + 1);
    this->m_text = v6;
    v7 = (char *)&pnewText;
    this->m_length = m_length;
    if ( copy->m_text )
      v7 = copy->m_text;
    memmove(v6, v7, m_length);
    this->m_text[this->m_length] = 0;
  }
}

void __fastcall AgString::operator=(AgString *this, const AgStringRef *copy)
{
  char *m_text; // rbp
  __int64 v5; // rbx
  __ExceptionPtr *CString; // rax
  __ExceptionPtr *v7; // rdi
  char *v8; // rax
  unsigned __int64 m_length; // rdx

  if ( AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)copy) != (__ExceptionPtr *)this->m_text
    || (unsigned int)AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)copy) != this->m_length )
  {
    m_text = this->m_text;
    LODWORD(v5) = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)copy);
    CString = AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)copy);
    v7 = CString;
    if ( (int)v5 < 0 )
    {
      v5 = -1i64;
      do
        ++v5;
      while ( *((_BYTE *)&CString->m_Record.ExceptionCode + v5) );
    }
    v8 = (char *)operator new[]((int)v5 + 1);
    this->m_text = v8;
    this->m_length = v5;
    memmove(v8, v7, (int)v5);
    m_length = this->m_length;
    this->m_text[m_length] = 0;
    operator delete(m_text, m_length);
  }
}

void __fastcall AgString::operator=(AgString *this, const char *copy)
{
  char *m_text; // rcx
  __int64 v5; // rbx
  char *v6; // rax

  m_text = this->m_text;
  if ( copy != m_text )
  {
    this->m_length = 0;
    operator delete(m_text, (unsigned __int64)copy);
    this->m_text = 0i64;
    v5 = -1i64;
    do
      ++v5;
    while ( copy[v5] );
    v6 = (char *)operator new[]((int)v5 + 1);
    this->m_text = v6;
    this->m_length = v5;
    memmove(v6, copy, (int)v5);
    this->m_text[this->m_length] = 0;
  }
}

bool __fastcall operator==(const AgString *s1, const AgString *s2)
{
  char *v2; // r10
  char *m_text; // r8

  v2 = (char *)&pnewText;
  m_text = (char *)&pnewText;
  if ( s2->m_text )
    m_text = s2->m_text;
  if ( s1->m_text )
    v2 = s1->m_text;
  return AgStringUtils::equal(v2, s1->m_length, m_text, s2->m_length) == 1;
}

bool __fastcall operator!=(const AgString *s1, const char *s2)
{
  char *m_text; // rax
  int m_length; // er10
  const char *v4; // rcx
  __int64 v5; // r9

  m_text = s1->m_text;
  m_length = s1->m_length;
  v4 = &pnewText;
  if ( m_text )
    v4 = m_text;
  v5 = -1i64;
  do
    ++v5;
  while ( s2[v5] );
  return AgStringUtils::equal(v4, m_length, s2, v5) == 0;
}

char *__fastcall AgString::operator[](AgString *this, unsigned int index)
{
  return &this->m_text[index];
}

AgString *__fastcall operator+(AgString *result, const AgString *s1, const AgString *s2)
{
  char *v4; // r11
  char *m_text; // r9

  v4 = (char *)&pnewText;
  m_text = (char *)&pnewText;
  if ( s2->m_text )
    m_text = s2->m_text;
  if ( s1->m_text )
    v4 = s1->m_text;
  AgStringUtils::append(result, v4, s1->m_length, m_text, s2->m_length);
  return result;
}

AgString *__fastcall operator+(AgString *result, const AgString *s1, const AgStringRef *s2)
{
  int m_length; // esi
  char *m_text; // rdi
  unsigned int length2; // ebx
  const char *CString; // rax

  m_length = s1->m_length;
  m_text = (char *)&pnewText;
  if ( s1->m_text )
    m_text = s1->m_text;
  length2 = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)s2);
  CString = (const char *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)s2);
  AgStringUtils::append(result, m_text, m_length, CString, length2);
  return result;
}

AgString *__fastcall operator+(AgString *result, const AgString *s1, const char *s2)
{
  int m_length; // ecx
  char *m_text; // rax
  const char *v6; // rdx
  __int64 length2; // rax

  m_length = s1->m_length;
  m_text = s1->m_text;
  v6 = &pnewText;
  if ( m_text )
    v6 = m_text;
  length2 = -1i64;
  do
    ++length2;
  while ( s2[length2] );
  AgStringUtils::append(result, v6, m_length, s2, length2);
  return result;
}

bool __fastcall operator<(const AgString *s1, const AgString *s2)
{
  char *v2; // r10
  char *m_text; // r8

  v2 = (char *)&pnewText;
  m_text = (char *)&pnewText;
  if ( s2->m_text )
    m_text = s2->m_text;
  if ( s1->m_text )
    v2 = s1->m_text;
  return AgStringUtils::compare(v2, s1->m_length, m_text, s2->m_length) < 0;
}

void __fastcall AgString::operator+=(AgString *this, const AgString *s)
{
  const AgString *v3; // rax
  unsigned __int64 v4; // rdx
  AgString result; // [rsp+28h] [rbp-20h] BYREF

  v3 = operator+(&result, this, s);
  AgString::operator=(this, v3);
  result.m_length = 0;
  operator delete(result.m_text, v4);
}

void __fastcall AgString::_copy(AgString *this, const char *text, int length)
{
  __int64 v3; // rbx
  char *v6; // rax

  LODWORD(v3) = length;
  if ( length < 0 )
  {
    v3 = -1i64;
    do
      ++v3;
    while ( text[v3] );
  }
  v6 = (char *)operator new[]((int)v3 + 1);
  this->m_text = v6;
  this->m_length = v3;
  memmove(v6, text, (int)v3);
  this->m_text[this->m_length] = 0;
}

int __fastcall AgString::caselessCompare(const AgStringRef *left, const AgStringRef *right)
{
  std::shared_ptr<__ExceptionPtr> *v3; // rbx
  unsigned int IsStopping; // esi
  const char *CString; // rdi
  const char *v6; // rax

  v3 = (std::shared_ptr<__ExceptionPtr> *)right;
  IsStopping = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)right);
  CString = (const char *)AgStringRef::getCString(v3);
  LODWORD(v3) = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)left);
  v6 = (const char *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)left);
  return AgStringUtils::caselessCompare(v6, (unsigned int)v3, CString, IsStopping);
}

void __fastcall std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
        std::_Wrap_alloc<std::allocator<wchar_t> > *this,
        wchar_t *_Ptr,
        unsigned __int64 _Count)
{
  wchar_t *v3; // rax
  char *v4; // rdx

  if ( _Count > 0x7FFFFFFFFFFFFFFFi64 )
    invalid_parameter_noinfo_noreturn();
  if ( 2 * _Count >= 0x1000 )
  {
    if ( ((unsigned __int8)_Ptr & 0x1F) != 0 )
      invalid_parameter_noinfo_noreturn();
    v3 = (wchar_t *)*((_QWORD *)_Ptr - 1);
    if ( v3 >= _Ptr )
      invalid_parameter_noinfo_noreturn();
    v4 = (char *)((char *)_Ptr - (char *)v3);
    if ( (unsigned __int64)v4 < 8 )
      invalid_parameter_noinfo_noreturn();
    if ( (unsigned __int64)v4 > 0x27 )
      invalid_parameter_noinfo_noreturn();
    _Ptr = v3;
  }
  operator delete(_Ptr);
}

int __fastcall AgString::find(AgString *this, AgStringRef *substr, unsigned int startPos)
{
  unsigned int IsStopping; // ebx
  const char *CString; // rax

  IsStopping = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)substr);
  CString = (const char *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)substr);
  return AgStringUtils::getFirstIndexOf(this->m_text, this->m_length, CString, IsStopping, startPos);
}

AgString *__fastcall AgString::fromUInt64(AgString *result, unsigned __int64 value, int radix)
{
  __int64 v4; // rbx
  char *v5; // rax
  char buffer[256]; // [rsp+40h] [rbp-118h] BYREF

  i64toa(value, buffer, radix);
  v4 = -1i64;
  result->m_length = -1;
  result->m_text = 0i64;
  do
    ++v4;
  while ( buffer[v4] );
  v5 = (char *)operator new[]((int)v4 + 1);
  result->m_text = v5;
  result->m_length = v4;
  memmove(v5, buffer, (int)v4);
  result->m_text[result->m_length] = 0;
  return result;
}

char *__fastcall AgString::getCString(AgString *this)
{
  char *result; // rax

  result = (char *)&pnewText;
  if ( this->m_text )
    return this->m_text;
  return result;
}

int __fastcall AgString::getFirstIndexOf(AgString *this, char query, unsigned int offset)
{
  return AgStringUtils::getFirstIndexOf(this->m_text, this->m_length, query, offset);
}

int __fastcall AgString::getLastIndexOf(AgString *this, char query, unsigned int offset)
{
  return AgStringUtils::getLastIndexOf(this->m_text, this->m_length, query, offset);
}

__int64 __fastcall AgString::getLength(AgString *this)
{
  return (unsigned int)this->m_length;
}

AgStringRef *__fastcall AgString::getSubString(AgString *this, AgStringRef *result, unsigned int start, int length)
{
  AgStringUtils::getSubString(result, this->m_text, this->m_length, start, length);
  return result;
}

AgString *__fastcall AgString::replace(AgString *this, unsigned int startPos, int length, AgStringRef *replaceValue)
{
  unsigned int replaceValueLength; // ebx
  const char *CString; // rax
  const AgString *v10; // rax
  unsigned __int64 v11; // rdx
  AgString result; // [rsp+48h] [rbp-20h] BYREF

  replaceValueLength = AgSimpleThreadHost::getThreadIsStopping((Concurrency::details::ThreadProxyFactory<Concurrency::details::FreeThreadProxy> *)replaceValue);
  CString = (const char *)AgStringRef::getCString((std::shared_ptr<__ExceptionPtr> *)replaceValue);
  v10 = AgStringUtils::replace(&result, this->m_text, this->m_length, startPos, length, CString, replaceValueLength);
  AgString::operator=(this, v10);
  result.m_length = 0;
  operator delete(result.m_text, v11);
  return this;
}

void __fastcall AgString::setLength(AgString *this, unsigned int length)
{
  char *m_text; // rsi
  __int64 v4; // rdi
  char *v5; // rax
  int m_length; // er9
  unsigned __int64 v7; // rdx
  char *v8; // rax

  m_text = this->m_text;
  v4 = (int)length;
  v5 = (char *)operator new[]((int)(length + 1));
  this->m_text = v5;
  if ( m_text )
  {
    m_length = v4;
    if ( this->m_length < (int)v4 )
      m_length = this->m_length;
    memmove(v5, m_text, m_length);
    operator delete(m_text, v7);
  }
  v8 = this->m_text;
  this->m_length = v4;
  v8[v4] = 0;
}

int snprintf_s(
        char *const _Buffer,
        const unsigned __int64 _BufferCount,
        const unsigned __int64 _MaxCount,
        const char *const _Format,
        ...)
{
  unsigned __int64 *v8; // rax
  int result; // eax
  va_list va; // [rsp+90h] [rbp+28h] BYREF

  va_start(va, _Format);
  v8 = _local_stdio_printf_options();
  result = _stdio_common_vsnprintf_s(*v8, _Buffer, _BufferCount, _MaxCount, _Format, 0i64, va);
  if ( result < 0 )
    return -1;
  return result;
}

