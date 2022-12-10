#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/streambuf"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
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
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/istream"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

StdCompatMemStreamBuf::~StdCompatMemStreamBuf(); // 0x1400FB810
bool StdCompatMemStreamBuf::readOpen(const char * bg, const char * en); // 0x140241860
std::fpos<_Mbstatet> StdCompatMemStreamBuf::seekoff(long long off, long way, long mode); // 0x1402418F0
std::fpos<_Mbstatet> StdCompatMemStreamBuf::seekpos(std::fpos<_Mbstatet> pos, long mode); // 0x140241980
StdCompatMemoryIStream::StdCompatMemoryIStream(const char * bg, const char * en); // 0x140241A60void __fastcall StdCompatMemoryIStream::StdCompatMemoryIStream(
        StdCompatMemoryIStream *this,
        const char *bg,
        const char *en)
{
  _BYTE *v6; // rbx
  bool Open; // al
  __int64 v8; // rcx
  std::ios_base *v9; // rcx
  int v10; // edx

  *(_QWORD *)this->gap0 = &StdCompatMemoryIStream::`vbtable';
  *(_QWORD *)&this->gap78[8] = &std::ios::`vftable';
  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)] = &std::istream::`vftable';
  *(_DWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) - 4] = *(_DWORD *)(*(_QWORD *)this->gap0 + 4i64) - 24;
  this->_Chcount = 0i64;
  v6 = this->gap10;
  std::ios::init((std::ios *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)], (std::streambuf *)this->gap10, 0);
  *(_QWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64)] = &StdCompatMemoryIStream::`vftable';
  *(_DWORD *)&this->gap0[*(int *)(*(_QWORD *)this->gap0 + 4i64) - 4] = *(_DWORD *)(*(_QWORD *)this->gap0 + 4i64) - 128;
  std::streambuf::streambuf((std::streambuf *)this->gap10);
  *(_QWORD *)v6 = &StdCompatMemStreamBuf::`vftable';
  Open = StdCompatMemStreamBuf::readOpen((StdCompatMemStreamBuf *)this->gap10, bg, en);
  v8 = *(int *)(*(_QWORD *)this->gap0 + 4i64);
  if ( Open )
  {
    v9 = (std::ios_base *)&this->gap0[v8];
    v10 = 4;
    if ( v9[1].__vftable )
      v10 = 0;
  }
  else
  {
    v9 = (std::ios_base *)&this->gap0[v8];
    v10 = v9->_Mystate | 6;
    if ( v9[1].__vftable )
      v10 = v9->_Mystate | 2;
  }
  std::ios_base::clear(v9, v10, 0);
}

void __fastcall std::streambuf::~streambuf<char,std::char_traits<char>>(StdCompatMemStreamBuf *this)
{
  std::locale *Plocale; // rbx
  std::locale::_Locimp *Ptr; // rcx
  std::_Facet_base *v3; // rax

  this->__vftable = (StdCompatMemStreamBuf_vtbl *)&std::streambuf::`vftable';
  Plocale = this->_Plocale;
  if ( Plocale )
  {
    Ptr = Plocale->_Ptr;
    if ( Ptr )
    {
      v3 = Ptr->_Decref(Ptr);
      if ( v3 )
        ((void (__fastcall *)(std::_Facet_base *, __int64))v3->~_Facet_base)(v3, 1i64);
    }
    operator delete(Plocale, 0x10ui64);
  }
}

bool __fastcall StdCompatMemStreamBuf::readOpen(StdCompatMemStreamBuf *this, const char *bg, const char *en)
{
  bool result; // al

  if ( bg && en && bg <= en )
  {
    *this->_IGfirst = (char *)bg;
    *this->_IGnext = (char *)bg;
    *this->_IGcount = (_DWORD)en - (_DWORD)bg;
    *this->_IPfirst = 0i64;
    *this->_IPnext = 0i64;
    *this->_IPcount = 0;
  }
  else
  {
    *this->_IGfirst = 0i64;
    *this->_IGnext = 0i64;
    *this->_IGcount = 0;
    *this->_IPfirst = 0i64;
    *this->_IPnext = 0i64;
    *this->_IPcount = 0;
  }
  if ( *this->_IGnext )
    return 1;
  result = 0;
  if ( *this->_IPnext )
    return 1;
  return result;
}

std::fpos<_Mbstatet> *__fastcall StdCompatMemStreamBuf::seekoff(
        StdCompatMemStreamBuf *this,
        std::fpos<_Mbstatet> *result,
        __int64 off,
        int way,
        int mode)
{
  StdCompatMemStreamBuf_vtbl *v6; // rax
  __int128 v8; // [rsp+20h] [rbp-28h] BYREF
  __int64 v9; // [rsp+30h] [rbp-18h]

  if ( way == 1 )
  {
    off += *this->_IGnext - *this->_IGfirst;
  }
  else if ( way == 2 )
  {
    off += (__int64)&(*this->_IGnext)[*this->_IGcount - (unsigned __int64)*this->_IGfirst];
  }
  v6 = this->__vftable;
  v8 = (unsigned __int64)off;
  v9 = *(_OWORD *)&_mm_unpackhi_pd((__m128d)0i64, (__m128d)0i64);
  ((void (__fastcall *)(StdCompatMemStreamBuf *, std::fpos<_Mbstatet> *, __int128 *, _QWORD))v6->seekpos)(
    this,
    result,
    &v8,
    (unsigned int)mode);
  return result;
}

std::fpos<_Mbstatet> *__fastcall StdCompatMemStreamBuf::seekpos(
        StdCompatMemStreamBuf *this,
        std::fpos<_Mbstatet> *result,
        std::fpos<_Mbstatet> *pos,
        int mode)
{
  __int64 v5; // r10
  char **IGnext; // r9
  char *v7; // rbx
  char *v8; // rcx

  v5 = pos->_Myoff + pos->_Fpos;
  if ( (mode & 1) != 0
    && (IGnext = this->_IGnext, *IGnext)
    && (v7 = *this->_IGfirst, v8 = &(*IGnext)[*this->_IGcount], v5 >= 0)
    && v5 <= v8 - v7 )
  {
    *IGnext = &v7[v5];
    *this->_IGcount = (_DWORD)v8 - ((_DWORD)v7 + v5);
  }
  else
  {
    v5 = -1i64;
  }
  result->_Myoff = v5;
  result->_Fpos = 0i64;
  result->_Mystate = 0i64;
  return result;
}

