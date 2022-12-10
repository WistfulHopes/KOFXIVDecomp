#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/algorithm"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"

std::string extension::utility::PathNormalize(const std::string & path_str); // 0x140247FA0
std::string extension::utility::PathNormalize(const char * path_str); // 0x140247FD0
std::string extension::utility::PathExtractDirectory(const std::string & path_str); // 0x140248440
std::string extension::utility::PathExtractDirectory(const char * path_str); // 0x140248470
std::string extension::utility::PathExtractFileName(const char * path_str); // 0x140248520
std::string extension::utility::PathExtractBaseName(const std::string & path_str); // 0x1402485C0
std::string extension::utility::PathExtractBaseName(const char * path_str); // 0x1402485F0
std::string extension::utility::PathExtractSuffix(const char * path_str); // 0x1402486B0std::string *__fastcall extension::utility::PathExtractBaseName(std::string *result, const std::string *path_str)
{
  if ( path_str->_Mypair._Myval2._Myres >= 0x10 )
    path_str = (const std::string *)path_str->_Mypair._Myval2._Bx._Ptr;
  extension::utility::PathExtractBaseName(result, path_str->_Mypair._Myval2._Bx._Buf);
  return result;
}

std::string *__fastcall extension::utility::PathExtractBaseName(std::string *result, const char *path_str)
{
  unsigned __int64 Myres; // r9
  std::string *Ptr; // rdx
  std::string *v5; // rax
  unsigned __int64 Mysize; // r8
  std::string *v7; // rax
  std::string *v8; // rcx
  std::string *v9; // rcx
  std::string *v10; // rcx
  char *v11; // r8
  char *v12; // rdx
  std::string *v13; // rax

  extension::utility::PathExtractFileName(result, path_str);
  Myres = result->_Mypair._Myval2._Myres;
  if ( Myres < 0x10 )
    Ptr = result;
  else
    Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  if ( Myres < 0x10 )
    v5 = result;
  else
    v5 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  Mysize = result->_Mypair._Myval2._Mysize;
  v7 = (std::string *)((char *)v5 + Mysize);
  if ( v7 != Ptr )
  {
    do
    {
      v8 = (std::string *)((char *)v7 - 1);
      if ( HIBYTE(v7[-1]._Mypair._Myval2._Myres) == 46 )
        break;
      v7 = (std::string *)((char *)v7 - 1);
    }
    while ( v8 != Ptr );
  }
  if ( Myres < 0x10 )
    v9 = result;
  else
    v9 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  if ( v7 != v9 )
  {
    if ( Myres < 0x10 )
      v10 = result;
    else
      v10 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
    v11 = &v10->_Mypair._Myval2._Bx._Buf[Mysize];
    v12 = (char *)&v7[-1]._Mypair._Myval2._Myres + 7;
    if ( Myres < 0x10 )
      v13 = result;
    else
      v13 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
    std::string::erase(result, v12 - (char *)v13, v11 - v12);
  }
  return result;
}

std::string *__fastcall extension::utility::PathExtractDirectory(std::string *result, const std::string *path_str)
{
  if ( path_str->_Mypair._Myval2._Myres >= 0x10 )
    path_str = (const std::string *)path_str->_Mypair._Myval2._Bx._Ptr;
  extension::utility::PathExtractDirectory(result, path_str->_Mypair._Myval2._Bx._Buf);
  return result;
}

std::string *__fastcall extension::utility::PathExtractDirectory(std::string *result, const char *path_str)
{
  unsigned __int64 Myres; // r9
  std::string *Ptr; // rax
  unsigned __int64 Mysize; // rdx
  char *v6; // r8
  std::string *v7; // rcx
  std::string *v8; // rax
  std::string *v9; // rdx
  std::string *v10; // rax
  std::string *v11; // rax

  extension::utility::PathNormalize(result, path_str);
  Myres = result->_Mypair._Myval2._Myres;
  if ( Myres < 0x10 )
    Ptr = result;
  else
    Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  Mysize = result->_Mypair._Myval2._Mysize;
  v6 = &Ptr->_Mypair._Myval2._Bx._Buf[Mysize];
  if ( Myres < 0x10 )
    v7 = result;
  else
    v7 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  if ( Myres < 0x10 )
    v8 = result;
  else
    v8 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v9 = (std::string *)((char *)v8 + Mysize);
  if ( v9 != v7 )
  {
    do
    {
      v10 = (std::string *)((char *)v9 - 1);
      if ( HIBYTE(v9[-1]._Mypair._Myval2._Myres) == 47 )
        break;
      v9 = (std::string *)((char *)v9 - 1);
    }
    while ( v10 != v7 );
  }
  if ( Myres < 0x10 )
    v11 = result;
  else
    v11 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  std::string::erase(result, (char *)v9 - (char *)v11, v6 - (char *)v9);
  return result;
}

std::string *__fastcall extension::utility::PathExtractFileName(std::string *result, const char *path_str)
{
  unsigned __int64 Myres; // r9
  std::string *Ptr; // rcx
  std::string *v5; // rdx
  std::string *v6; // r8
  std::string *v7; // rax
  std::string *v8; // rdx
  std::string *v9; // rax

  extension::utility::PathNormalize(result, path_str);
  Myres = result->_Mypair._Myval2._Myres;
  if ( Myres < 0x10 )
    Ptr = result;
  else
    Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  if ( Myres < 0x10 )
    v5 = result;
  else
    v5 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v6 = (std::string *)((char *)v5 + result->_Mypair._Myval2._Mysize);
  if ( v6 != Ptr )
  {
    do
    {
      v7 = (std::string *)((char *)v6 - 1);
      if ( HIBYTE(v6[-1]._Mypair._Myval2._Myres) == 47 )
        break;
      v6 = (std::string *)((char *)v6 - 1);
    }
    while ( v7 != Ptr );
  }
  if ( Myres < 0x10 )
    v8 = result;
  else
    v8 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  if ( Myres < 0x10 )
    v9 = result;
  else
    v9 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  std::string::erase(result, (char *)v8 - (char *)v9, (char *)v6 - (char *)v8);
  return result;
}

std::string *__fastcall extension::utility::PathExtractSuffix(std::string *result, const char *path_str)
{
  unsigned __int64 Myres; // r9
  std::string *Ptr; // rdx
  std::string *v5; // rcx
  std::string *v6; // rax
  std::string *v7; // rcx
  std::string *v8; // rcx
  char *v9; // r8
  std::string *v10; // rdx
  std::string *v11; // rax

  extension::utility::PathExtractFileName(result, path_str);
  Myres = result->_Mypair._Myval2._Myres;
  if ( Myres < 0x10 )
    Ptr = result;
  else
    Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  if ( Myres < 0x10 )
    v5 = result;
  else
    v5 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v6 = (std::string *)((char *)v5 + result->_Mypair._Myval2._Mysize);
  if ( v6 != Ptr )
  {
    do
    {
      v7 = (std::string *)((char *)v6 - 1);
      if ( HIBYTE(v6[-1]._Mypair._Myval2._Myres) == 46 )
        break;
      v6 = (std::string *)((char *)v6 - 1);
    }
    while ( v7 != Ptr );
  }
  if ( Myres < 0x10 )
    v8 = result;
  else
    v8 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  if ( v6 == v8 )
  {
    std::string::assign(result, &pnewText, 0i64);
  }
  else
  {
    v9 = (char *)&v6[-1]._Mypair._Myval2._Myres + 7;
    if ( Myres < 0x10 )
      v10 = result;
    else
      v10 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
    if ( Myres < 0x10 )
      v11 = result;
    else
      v11 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
    std::string::erase(result, (char *)v10 - (char *)v11, v9 - (char *)v10);
  }
  return result;
}

std::string *__fastcall extension::utility::PathNormalize(std::string *result, const std::string *path_str)
{
  if ( path_str->_Mypair._Myval2._Myres >= 0x10 )
    path_str = (const std::string *)path_str->_Mypair._Myval2._Bx._Ptr;
  extension::utility::PathNormalize(result, path_str->_Mypair._Myval2._Bx._Buf);
  return result;
}

std::string *__fastcall extension::utility::PathNormalize(std::string *result, const char *path_str)
{
  std::string *Ptr; // rax
  unsigned __int64 v5; // rbx
  __int64 v6; // rdx
  std::string *v7; // rax
  char *v8; // r10
  unsigned __int64 Myres; // rdx
  unsigned __int64 Mysize; // r8
  std::string *v11; // rax
  std::string *v12; // rcx
  std::string *v13; // r9
  __int64 v14; // rdx
  std::string *v15; // rax
  std::string *v16; // rcx
  std::string *v17; // rbx
  std::string *v18; // rcx
  unsigned __int64 v19; // rcx
  unsigned __int64 v20; // rcx
  std::string *v21; // rax
  std::string *v22; // rdi
  char *v23; // rdx
  std::string *v24; // rcx
  unsigned __int64 v25; // rax
  std::string *v26; // rcx
  std::string *v27; // rdx
  const char *v28; // rbx
  std::string *v29; // rax
  unsigned __int64 v30; // rdx
  std::string *v31; // rcx
  std::string *v32; // rax
  char v33; // dl
  unsigned __int64 v34; // rax
  std::string *v35; // rcx
  char *v36; // rax
  unsigned __int64 v37; // rdx
  std::string v39; // [rsp+38h] [rbp-28h] BYREF

  v39._Mypair._Myval2._Myres = 15i64;
  v39._Mypair._Myval2._Mysize = 0i64;
  v39._Mypair._Myval2._Bx._Buf[0] = 0;
  result->_Mypair._Myval2._Myres = 15i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    Ptr = result;
  else
    Ptr = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  Ptr->_Mypair._Myval2._Bx._Buf[0] = 0;
  v5 = -1i64;
  v6 = -1i64;
  do
    ++v6;
  while ( path_str[v6] );
  std::string::reserve(&v39, v6 + 1);
  if ( *path_str )
  {
    do
      ++v5;
    while ( path_str[v5] );
  }
  else
  {
    v5 = 0i64;
  }
  std::string::assign(&v39, path_str, v5);
  v7 = &v39;
  v8 = v39._Mypair._Myval2._Bx._Ptr;
  Myres = v39._Mypair._Myval2._Myres;
  if ( v39._Mypair._Myval2._Myres >= 0x10 )
    v7 = (std::string *)v39._Mypair._Myval2._Bx._Ptr;
  Mysize = v39._Mypair._Myval2._Mysize;
  v11 = (std::string *)((char *)v7 + v39._Mypair._Myval2._Mysize);
  v12 = &v39;
  if ( v39._Mypair._Myval2._Myres >= 0x10 )
    v12 = (std::string *)v39._Mypair._Myval2._Bx._Ptr;
  v13 = (std::string *)((char *)v11 - (char *)v12);
  if ( v12 > v11 )
    v13 = 0i64;
  if ( v13 )
  {
    v14 = -(__int64)v12;
    do
    {
      if ( v12->_Mypair._Myval2._Bx._Buf[0] == 92 )
        v12->_Mypair._Myval2._Bx._Buf[0] = 47;
      v12 = (std::string *)((char *)v12 + 1);
    }
    while ( (std::string *)((char *)v12 + v14) != v13 );
    Myres = v39._Mypair._Myval2._Myres;
    Mysize = v39._Mypair._Myval2._Mysize;
    v8 = v39._Mypair._Myval2._Bx._Ptr;
  }
  if ( Mysize != Myres )
    goto LABEL_31;
  if ( Mysize == -2i64 )
    std::_Xlength_error("string too long");
  if ( Myres < Mysize + 1 )
  {
    std::string::_Copy(&v39, Mysize + 1, Mysize);
LABEL_30:
    v8 = v39._Mypair._Myval2._Bx._Ptr;
    Mysize = v39._Mypair._Myval2._Mysize;
    Myres = v39._Mypair._Myval2._Myres;
    goto LABEL_31;
  }
  if ( Mysize == -1i64 )
  {
    v39._Mypair._Myval2._Mysize = 0i64;
    v15 = &v39;
    if ( Myres >= 0x10 )
      v15 = (std::string *)v8;
    v15->_Mypair._Myval2._Bx._Buf[0] = 0;
    goto LABEL_30;
  }
LABEL_31:
  v16 = &v39;
  if ( Myres >= 0x10 )
    v16 = (std::string *)v8;
  v16->_Mypair._Myval2._Bx._Buf[Mysize] = 0;
  v16->_Mypair._Myval2._Bx._Buf[++v39._Mypair._Myval2._Mysize] = 0;
  std::string::reserve(result, v39._Mypair._Myval2._Mysize);
  v17 = &v39;
  if ( v39._Mypair._Myval2._Myres >= 0x10 )
    v17 = (std::string *)v39._Mypair._Myval2._Bx._Ptr;
  while ( 1 )
  {
    v18 = &v39;
    if ( v39._Mypair._Myval2._Myres >= 0x10 )
      v18 = (std::string *)v39._Mypair._Myval2._Bx._Ptr;
    if ( v17 >= (std::string *)((char *)v18 + v39._Mypair._Myval2._Mysize) )
      break;
    if ( v17->_Mypair._Myval2._Bx._Buf[0] != 47 )
    {
      if ( !strncmp(v17->_Mypair._Myval2._Bx._Buf, "./", 2ui64)
        && (!result->_Mypair._Myval2._Mysize || *std::string::back(result) == 47) )
      {
        v17 = (std::string *)((char *)v17 + 1);
        goto LABEL_47;
      }
LABEL_46:
      std::string::push_back(result, v17->_Mypair._Myval2._Bx._Buf[0]);
      goto LABEL_47;
    }
    if ( !result->_Mypair._Myval2._Mysize || *std::string::back(result) != 47 )
      goto LABEL_46;
LABEL_47:
    v17 = (std::string *)((char *)v17 + 1);
  }
  if ( &v39 != result )
  {
    std::string::_Swap_bx(&v39, result);
    v19 = v39._Mypair._Myval2._Mysize;
    v39._Mypair._Myval2._Mysize = result->_Mypair._Myval2._Mysize;
    result->_Mypair._Myval2._Mysize = v19;
    v20 = v39._Mypair._Myval2._Myres;
    v39._Mypair._Myval2._Myres = result->_Mypair._Myval2._Myres;
    result->_Mypair._Myval2._Myres = v20;
  }
  result->_Mypair._Myval2._Mysize = 0i64;
  if ( result->_Mypair._Myval2._Myres < 0x10 )
    v21 = result;
  else
    v21 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
  v21->_Mypair._Myval2._Bx._Buf[0] = 0;
  std::string::reserve(result, v39._Mypair._Myval2._Mysize);
  v22 = &v39;
  v23 = v39._Mypair._Myval2._Bx._Ptr;
  if ( v39._Mypair._Myval2._Myres >= 0x10 )
    v22 = (std::string *)v39._Mypair._Myval2._Bx._Ptr;
  while ( 1 )
  {
    v24 = &v39;
    if ( v39._Mypair._Myval2._Myres >= 0x10 )
      v24 = (std::string *)v23;
    if ( v22 == (std::string *)((char *)v24 + v39._Mypair._Myval2._Mysize) )
      break;
    if ( !result->_Mypair._Myval2._Mysize
      || *std::string::back(result) != 47
      || strncmp(v22->_Mypair._Myval2._Bx._Buf, "../", 3ui64) )
    {
      goto LABEL_79;
    }
    v25 = result->_Mypair._Myval2._Myres;
    if ( v25 < 0x10 )
      v26 = result;
    else
      v26 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
    if ( v25 < 0x10 )
      v27 = result;
    else
      v27 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
    v28 = &v27->_Mypair._Myval2._Bx._Buf[result->_Mypair._Myval2._Mysize - 1];
    if ( v28 != (const char *)v26 )
    {
      do
      {
        v29 = (std::string *)(v28 - 1);
        if ( *(v28 - 1) == 47 )
          break;
        --v28;
      }
      while ( v29 != v26 );
    }
    if ( *v28 != 47 && strncmp(v28, "../", 3ui64) )
    {
      v30 = result->_Mypair._Myval2._Myres;
      if ( v30 < 0x10 )
        v31 = result;
      else
        v31 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
      if ( v30 < 0x10 )
        v32 = result;
      else
        v32 = (std::string *)result->_Mypair._Myval2._Bx._Ptr;
      std::string::erase(result, v28 - (const char *)v32, (char *)v31 + result->_Mypair._Myval2._Mysize - v28);
      v22 = (std::string *)((char *)v22 + 3);
      v23 = v39._Mypair._Myval2._Bx._Ptr;
    }
    else
    {
LABEL_79:
      v33 = v22->_Mypair._Myval2._Bx._Buf[0];
      v22 = (std::string *)((char *)v22 + 1);
      std::string::push_back(result, v33);
      v23 = v39._Mypair._Myval2._Bx._Ptr;
    }
  }
  if ( result->_Mypair._Myval2._Mysize )
  {
    do
    {
      if ( *std::string::back(result) )
        break;
      v34 = result->_Mypair._Myval2._Mysize - 1;
      if ( result->_Mypair._Myval2._Mysize < v34 )
        std::_Xout_of_range("invalid string position");
      result->_Mypair._Myval2._Mysize = v34;
      v35 = result->_Mypair._Myval2._Myres < 0x10 ? result : (std::string *)result->_Mypair._Myval2._Bx._Ptr;
      v35->_Mypair._Myval2._Bx._Buf[v34] = 0;
    }
    while ( result->_Mypair._Myval2._Mysize );
    v23 = v39._Mypair._Myval2._Bx._Ptr;
  }
  if ( v39._Mypair._Myval2._Myres >= 0x10 )
  {
    if ( v39._Mypair._Myval2._Myres + 1 >= 0x1000 )
    {
      if ( (v39._Mypair._Myval2._Bx._Buf[0] & 0x1F) != 0 )
        invalid_parameter_noinfo_noreturn();
      v36 = (char *)*((_QWORD *)v23 - 1);
      if ( v36 >= v23 )
        invalid_parameter_noinfo_noreturn();
      v37 = v23 - v36;
      if ( v37 < 8 )
        invalid_parameter_noinfo_noreturn();
      if ( v37 > 0x27 )
        invalid_parameter_noinfo_noreturn();
      v23 = v36;
    }
    operator delete(v23);
  }
  return result;
}

void __fastcall std::string::_Swap_bx(std::string *this, std::string *_Right)
{
  std::string *v3; // rbx
  char *v4; // rcx
  char *v5; // rsi
  __int64 v6; // rdx
  __int64 v7; // r8
  signed __int64 v8; // rdi
  char v9; // cl
  char *Ptr; // rsi

  v3 = this;
  if ( this->_Mypair._Myval2._Myres < 0x10 )
  {
    if ( _Right->_Mypair._Myval2._Myres >= 0x10 )
    {
      Ptr = _Right->_Mypair._Myval2._Bx._Ptr;
      if ( this->_Mypair._Myval2._Mysize != -1i64 )
        memmove(_Right, this, this->_Mypair._Myval2._Mysize + 1);
      v3->_Mypair._Myval2._Bx._Ptr = Ptr;
    }
    else if ( this != _Right )
    {
      v6 = 16i64;
      if ( this > (std::string *)&this->_Mypair._Myval2._Mysize )
        v6 = 0i64;
      if ( this <= (std::string *)&this->_Mypair._Myval2._Mysize )
      {
        v7 = -(__int64)this;
        v8 = (char *)_Right - (char *)this;
        do
        {
          v9 = v3->_Mypair._Myval2._Bx._Buf[0];
          v3->_Mypair._Myval2._Bx._Buf[0] = v3->_Mypair._Myval2._Bx._Buf[v8];
          v3->_Mypair._Myval2._Bx._Buf[v8] = v9;
          v3 = (std::string *)((char *)v3 + 1);
        }
        while ( (std::string *)((char *)v3 + v7) != (std::string *)v6 );
      }
    }
  }
  else if ( _Right->_Mypair._Myval2._Myres < 0x10 )
  {
    v5 = this->_Mypair._Myval2._Bx._Ptr;
    if ( _Right->_Mypair._Myval2._Mysize != -1i64 )
      memmove(this, _Right, _Right->_Mypair._Myval2._Mysize + 1);
    _Right->_Mypair._Myval2._Bx._Ptr = v5;
  }
  else
  {
    v4 = this->_Mypair._Myval2._Bx._Ptr;
    v3->_Mypair._Myval2._Bx._Ptr = _Right->_Mypair._Myval2._Bx._Ptr;
    _Right->_Mypair._Myval2._Bx._Ptr = v4;
  }
}

