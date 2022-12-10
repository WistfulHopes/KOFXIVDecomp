#include "dev/silverware/git/sdk/agcondition.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/windows kits/8.1/include/um/shlobj.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/agthread.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "program files (x86)/windows kits/8.1/include/um/shobjidl.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/8.1/include/um/propkeydef.h"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/8.1/include/um/propsys.h"
#include "program files (x86)/windows kits/8.1/include/um/commctrl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "program files (x86)/windows kits/8.1/include/um/combaseapi.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "dev/silverware/git/src/platforms/pc/filesystem/agpcstoragemount.h"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "dev/silverware/git/sdk/agclock.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"

typedef AgPointer<AgPCStorageMount> AgPCStorageMountPtr;
void AgPCStorageMount::mount(); // 0x140699F20
AgPointer<AgFile> AgPCStorageMount::open(const AgPath & path, unsigned long accessMode); // 0x14069A090
AgPointer<AgDirectory> AgPCStorageMount::openDirectory(const AgPath & path, AgStringRef filter, unsigned long filterMask); // 0x14069A1A0
long AgPCStorageMount::createDirectory(const AgPath & path, long recursive); // 0x140699980
long AgPCStorageMount::removeDirectory(const AgPath & path); // 0x14069A380
long AgPCStorageMount::directoryExists(const AgPath & path); // 0x140699D00
long AgPCStorageMount::exists(const AgPath & path); // 0x140699DF0
long AgPCStorageMount::move(const AgPath & src, const AgPath & dst, long overwrite); // 0x140699F30
long AgPCStorageMount::remove(const AgPath & path); // 0x14069A2A0
AgPath AgPCStorageMount::expandPath(const AgPath & path); // 0x140699EE0
std::basic_string<wchar_t,std::char_traits<wchar_t>,std::allocator<wchar_t> > AgPCStorageMount::convertToWidePath(const AgPath & path); // 0x140699860
long AgPCStorageMount::createDirectoryRecursive(const AgPath & path); // 0x140699BB0void __fastcall AgPointer<AgPCStorageMount>::AgPointer<AgPCStorageMount>(
        AgPointer<AgPCStorageMount> *this,
        AgPCStorageMount *t)
{
  AgReferenceCount *v4; // rax
  int v5; // ecx
  AgReferenceCount *m_refCount; // rsi

  this->m_ref = 0i64;
  this->m_ptr = 0i64;
  if ( t )
  {
    if ( t->m_refCount )
    {
      v5 = 0;
    }
    else
    {
      v4 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
      v5 = 1;
      if ( v4 )
      {
        v4->m_strongCount = 1;
        v4->m_weakCount = 1;
        v4->m_data = t;
      }
      else
      {
        v4 = 0i64;
      }
      t->m_refCount = v4;
    }
    m_refCount = t->m_refCount;
    if ( !v5 )
      AgReferenceCount::incRef(t->m_refCount);
    this->m_ref = m_refCount;
    this->m_ptr = t;
  }
}

void __fastcall AgPointer<AgDirectory>::AgPointer<AgDirectory>(AgPointer<AgDirectory> *this, AgDirectory *t)
{
  AgReferenceCount *v4; // rax
  int v5; // ecx
  AgReferenceCount *m_refCount; // rsi

  this->m_ref = 0i64;
  this->m_ptr = 0i64;
  if ( t )
  {
    if ( t->m_refCount )
    {
      v5 = 0;
    }
    else
    {
      v4 = (AgReferenceCount *)AgReferenceCount::operator new(0x10ui64);
      v5 = 1;
      if ( v4 )
      {
        v4->m_strongCount = 1;
        v4->m_weakCount = 1;
        v4->m_data = t;
      }
      else
      {
        v4 = 0i64;
      }
      t->m_refCount = v4;
    }
    m_refCount = t->m_refCount;
    if ( !v5 )
      AgReferenceCount::incRef(t->m_refCount);
    this->m_ref = m_refCount;
    this->m_ptr = t;
  }
}

void __fastcall AgPointer<AgPCStorageMount>::~AgPointer<AgPCStorageMount>(AgPointer<AgPCStorageMount> *this)
{
  AgPCStorageMount *m_ptr; // rdi
  AgReferenceCount *m_ref; // rbx
  int v3; // esi

  m_ptr = this->m_ptr;
  this->m_ptr = 0i64;
  m_ref = this->m_ref;
  if ( this->m_ref )
  {
    this->m_ref = 0i64;
    v3 = 0;
    if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_strongCount) )
    {
      if ( !(unsigned int)AgAtomicDecrement(&m_ref->m_weakCount) )
        v3 = 1;
      m_ref->m_data = 0i64;
      if ( m_ptr )
        ((void (__fastcall *)(AgPCStorageMount *, __int64))m_ptr->~AgMount)(m_ptr, 1i64);
      if ( v3 )
        AgReferenceCount::operator delete(m_ref);
    }
  }
}

std::wstring *__fastcall AgPCStorageMount::convertToWidePath(std::wstring *result, const AgPath *path)
{
  unsigned __int64 v4; // rbx
  int Length; // edi
  char *CString; // rax
  int v7; // eax
  __int64 cchWideChar; // rbp
  wchar_t *lpWideCharStr; // r14
  int v10; // edi
  char *v11; // rax
  unsigned __int64 v12; // rdx

  v4 = 0i64;
  result->_Mypair._Myval2._Myres = 7i64;
  result->_Mypair._Myval2._Mysize = 0i64;
  result->_Mypair._Myval2._Bx._Buf[0] = 0;
  Length = AgString::getLength(&path->m_path);
  CString = AgString::getCString(&path->m_path);
  v7 = MultiByteToWideChar(0xFDE9u, 0, CString, Length, 0i64, 0);
  cchWideChar = v7;
  lpWideCharStr = (wchar_t *)operator new[](saturated_mul(v7 + 1, 2ui64));
  v10 = AgString::getLength(&path->m_path);
  v11 = AgString::getCString(&path->m_path);
  if ( MultiByteToWideChar(0xFDE9u, 0, v11, v10, lpWideCharStr, cchWideChar) )
  {
    lpWideCharStr[cchWideChar] = 0;
    if ( *lpWideCharStr )
    {
      v4 = -1i64;
      do
        ++v4;
      while ( lpWideCharStr[v4] );
    }
    std::wstring::assign(result, lpWideCharStr, v4);
  }
  operator delete(lpWideCharStr, v12);
  return result;
}

__int64 __fastcall AgPCStorageMount::createDirectory(AgPCStorageMount *this, const AgPath *path, int recursive)
{
  const AgPath *Relative; // rax
  unsigned __int64 v6; // rdx
  int v7; // edi
  unsigned __int64 v8; // rdx
  unsigned int v9; // ebx
  const AgStringRef *SubString; // rax
  AgPath *v11; // rax
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  std::wstring *Ptr; // rcx
  BOOL DirectoryW; // eax
  char *CString; // rax
  AgPath other; // [rsp+20h] [rbp-E0h] BYREF
  AgPath result; // [rsp+30h] [rbp-D0h] BYREF
  AgStringRef v20; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v21; // [rsp+50h] [rbp-B0h]
  std::wstring v22; // [rsp+58h] [rbp-A8h] BYREF
  char Buffer[272]; // [rsp+80h] [rbp-80h] BYREF

  v21 = -2i64;
  Relative = AgPath::getRelative((AgPath *)path, &result);
  AgPath::operator/(&this->m_systemPath, &other, Relative);
  AgString::~AgString(&result.m_path, v6);
  v7 = 0;
  if ( (unsigned int)AgString::getLength(&other.m_path) )
  {
    if ( (unsigned int)AgString::getLength(&other.m_path) && AgString::getCString(&other.m_path)[1] != 58 )
      v7 = 1;
    if ( (unsigned int)AgString::getLength(&other.m_path) <= 2
      || (AgStringRef::AgStringRef((AgStringRef *)&result, "\\\\"),
          SubString = AgString::getSubString(&other.m_path, &v20, 0, 2),
          !operator==(SubString, (const AgStringRef *)&result)) )
    {
      if ( v7 == 1 )
      {
        GetCurrentDirectoryA(0x104u, Buffer);
        AgString::AgString(&result.m_path, Buffer, -1);
        AgPath::clean(&result);
        v11 = AgPath::operator/(&result, (AgPath *)&v20, &other);
        AgString::operator=(&other.m_path, &v11->m_path);
        AgString::~AgString((AgString *)&v20, v12);
        AgString::~AgString(&result.m_path, v13);
      }
    }
    if ( recursive )
    {
      v9 = AgPCStorageMount::createDirectoryRecursive(this, &other);
    }
    else
    {
      AgPCStorageMount::convertToWidePath(&v22, &other);
      if ( v22._Mypair._Myval2._Mysize )
      {
        Ptr = &v22;
        if ( v22._Mypair._Myval2._Myres >= 8 )
          Ptr = (std::wstring *)v22._Mypair._Myval2._Bx._Ptr;
        DirectoryW = CreateDirectoryW(Ptr->_Mypair._Myval2._Bx._Buf, 0i64);
      }
      else
      {
        CString = AgString::getCString(&other.m_path);
        DirectoryW = CreateDirectoryA(CString, 0i64);
      }
      v9 = DirectoryW;
      if ( v22._Mypair._Myval2._Myres >= 8 )
        std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
          (std::_Wrap_alloc<std::allocator<wchar_t> > *)&v22,
          v22._Mypair._Myval2._Bx._Ptr,
          v22._Mypair._Myval2._Myres + 1);
      v22._Mypair._Myval2._Myres = 7i64;
      v22._Mypair._Myval2._Mysize = 0i64;
      v22._Mypair._Myval2._Bx._Buf[0] = 0;
    }
  }
  else
  {
    v9 = 1;
  }
  AgString::~AgString(&other.m_path, v8);
  return v9;
}

_BOOL8 __fastcall AgPCStorageMount::createDirectoryRecursive(AgPCStorageMount *this, const AgPath *path)
{
  std::wstring *Ptr; // rax
  DWORD FileAttributesW; // edi
  std::wstring *v6; // rcx
  BOOL DirectoryW; // eax
  unsigned __int64 v8; // rdx
  char *CString; // rax
  BOOL v10; // ebx
  AgPath result; // [rsp+20h] [rbp-78h] BYREF
  __int64 v13; // [rsp+30h] [rbp-68h]
  std::wstring v14; // [rsp+38h] [rbp-60h] BYREF
  std::wstring v15; // [rsp+58h] [rbp-40h] BYREF

  v13 = -2i64;
  AgPath::getParent((AgPath *)path, &result);
  Ptr = AgPCStorageMount::convertToWidePath(&v15, &result);
  if ( Ptr->_Mypair._Myval2._Myres >= 8 )
    Ptr = (std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
  FileAttributesW = GetFileAttributesW(Ptr->_Mypair._Myval2._Bx._Buf);
  if ( v15._Mypair._Myval2._Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)&v15,
      v15._Mypair._Myval2._Bx._Ptr,
      v15._Mypair._Myval2._Myres + 1);
  v15._Mypair._Myval2._Myres = 7i64;
  v15._Mypair._Myval2._Mysize = 0i64;
  v15._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( FileAttributesW == -1 )
    AgPCStorageMount::createDirectoryRecursive(this, &result);
  AgPCStorageMount::convertToWidePath(&v14, path);
  if ( v14._Mypair._Myval2._Mysize )
  {
    v6 = &v14;
    if ( v14._Mypair._Myval2._Myres >= 8 )
      v6 = (std::wstring *)v14._Mypair._Myval2._Bx._Ptr;
    DirectoryW = CreateDirectoryW(v6->_Mypair._Myval2._Bx._Buf, 0i64);
  }
  else
  {
    CString = AgString::getCString(&path->m_path);
    DirectoryW = CreateDirectoryA(CString, 0i64);
  }
  v10 = DirectoryW;
  if ( v14._Mypair._Myval2._Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)&v14,
      v14._Mypair._Myval2._Bx._Ptr,
      v14._Mypair._Myval2._Myres + 1);
  v14._Mypair._Myval2._Myres = 7i64;
  v14._Mypair._Myval2._Mysize = 0i64;
  v14._Mypair._Myval2._Bx._Buf[0] = 0;
  AgString::~AgString(&result.m_path, v8);
  return v10;
}

__int64 __fastcall AgPCStorageMount::directoryExists(AgPCStorageMount *this, const AgPath *path)
{
  const AgPath *Relative; // rax
  unsigned __int64 v4; // rdx
  std::wstring *Ptr; // rax
  unsigned __int64 v6; // rdx
  DWORD FileAttributesW; // edi
  unsigned int v8; // ebx
  AgPath patha; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  std::wstring result; // [rsp+38h] [rbp-30h] BYREF

  v11 = -2i64;
  Relative = AgPath::getRelative((AgPath *)path, (AgPath *)&result);
  AgPath::operator/(&this->m_systemPath, &patha, Relative);
  AgString::~AgString((AgString *)&result, v4);
  Ptr = AgPCStorageMount::convertToWidePath(&result, &patha);
  if ( Ptr->_Mypair._Myval2._Myres >= 8 )
    Ptr = (std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
  FileAttributesW = GetFileAttributesW(Ptr->_Mypair._Myval2._Bx._Buf);
  if ( result._Mypair._Myval2._Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)&result,
      result._Mypair._Myval2._Bx._Ptr,
      result._Mypair._Myval2._Myres + 1);
  result._Mypair._Myval2._Myres = 7i64;
  v8 = 0;
  result._Mypair._Myval2._Mysize = 0i64;
  result._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( FileAttributesW != -1 && (FileAttributesW & 0x10) != 0 )
    v8 = 1;
  AgString::~AgString(&patha.m_path, v6);
  return v8;
}

__int64 __fastcall AgPCStorageMount::exists(AgPCStorageMount *this, const AgPath *path)
{
  const AgPath *Relative; // rax
  unsigned __int64 v4; // rdx
  std::wstring *Ptr; // rax
  unsigned __int64 v6; // rdx
  DWORD FileAttributesW; // edi
  unsigned int v8; // ebx
  AgPath patha; // [rsp+20h] [rbp-48h] BYREF
  __int64 v11; // [rsp+30h] [rbp-38h]
  std::wstring result; // [rsp+38h] [rbp-30h] BYREF

  v11 = -2i64;
  Relative = AgPath::getRelative((AgPath *)path, (AgPath *)&result);
  AgPath::operator/(&this->m_systemPath, &patha, Relative);
  AgString::~AgString((AgString *)&result, v4);
  Ptr = AgPCStorageMount::convertToWidePath(&result, &patha);
  if ( Ptr->_Mypair._Myval2._Myres >= 8 )
    Ptr = (std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
  FileAttributesW = GetFileAttributesW(Ptr->_Mypair._Myval2._Bx._Buf);
  if ( result._Mypair._Myval2._Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)&result,
      result._Mypair._Myval2._Bx._Ptr,
      result._Mypair._Myval2._Myres + 1);
  result._Mypair._Myval2._Myres = 7i64;
  v8 = 0;
  result._Mypair._Myval2._Mysize = 0i64;
  result._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( FileAttributesW != -1 && (FileAttributesW & 0x10) == 0 )
    v8 = 1;
  AgString::~AgString(&patha.m_path, v6);
  return v8;
}

AgPath *__fastcall AgPCStorageMount::expandPath(AgPCStorageMount *this, AgPath *result, const AgPath *path)
{
  AgPath::operator/(&this->m_systemPath, result, path);
  return result;
}

void __fastcall AgPCStorageMount::mount(AgSteamRemoteMount *this)
{
  AgMount::setMounted(this, 1);
}

__int64 __fastcall AgPCStorageMount::move(AgPCStorageMount *this, const AgPath *src, const AgPath *dst, int overwrite)
{
  const AgPath *Relative; // rax
  unsigned __int64 v8; // rdx
  const AgPath *v9; // rax
  unsigned __int64 v10; // rdx
  std::wstring *Ptr; // rbx
  std::wstring *v12; // rax
  unsigned __int64 v13; // rdx
  unsigned int v14; // ebx
  unsigned __int64 v15; // rdx
  AgPath path; // [rsp+20h] [rbp-39h] BYREF
  AgPath v18; // [rsp+30h] [rbp-29h] BYREF
  __int64 v19; // [rsp+40h] [rbp-19h]
  std::wstring result; // [rsp+48h] [rbp-11h] BYREF
  std::wstring v21; // [rsp+68h] [rbp+Fh] BYREF

  v19 = -2i64;
  Relative = AgPath::getRelative((AgPath *)src, (AgPath *)&result);
  AgPath::operator/(&this->m_systemPath, &v18, Relative);
  AgString::~AgString((AgString *)&result, v8);
  v9 = AgPath::getRelative((AgPath *)dst, (AgPath *)&result);
  AgPath::operator/(&this->m_systemPath, &path, v9);
  AgString::~AgString((AgString *)&result, v10);
  Ptr = AgPCStorageMount::convertToWidePath(&v21, &path);
  v12 = AgPCStorageMount::convertToWidePath(&result, &v18);
  if ( Ptr->_Mypair._Myval2._Myres >= 8 )
    Ptr = (std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
  if ( v12->_Mypair._Myval2._Myres >= 8 )
    v12 = (std::wstring *)v12->_Mypair._Myval2._Bx._Ptr;
  v14 = MoveFileExW(v12->_Mypair._Myval2._Bx._Buf, Ptr->_Mypair._Myval2._Bx._Buf, overwrite != 0);
  if ( result._Mypair._Myval2._Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)&result,
      result._Mypair._Myval2._Bx._Ptr,
      result._Mypair._Myval2._Myres + 1);
  result._Mypair._Myval2._Myres = 7i64;
  result._Mypair._Myval2._Mysize = 0i64;
  result._Mypair._Myval2._Bx._Buf[0] = 0;
  if ( v21._Mypair._Myval2._Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)&v21,
      v21._Mypair._Myval2._Bx._Ptr,
      v21._Mypair._Myval2._Myres + 1);
  v21._Mypair._Myval2._Myres = 7i64;
  v21._Mypair._Myval2._Mysize = 0i64;
  v21._Mypair._Myval2._Bx._Buf[0] = 0;
  AgString::~AgString(&path.m_path, v13);
  AgString::~AgString(&v18.m_path, v15);
  return v14;
}

AgPointer<AgFile> *__fastcall AgPCStorageMount::open(
        AgPCStorageMount *this,
        AgPointer<AgFile> *result,
        const AgPath *path,
        unsigned int accessMode)
{
  AgMutex *p_m_mutex; // rsi
  const AgPath *Relative; // rax
  unsigned __int64 v10; // rdx
  AgUser *v11; // rax
  AgPCStorageStream *v12; // rbx
  AgPointer<AgPCStorageMount> *v13; // rax
  unsigned __int64 v14; // rdx
  AgPath resulta; // [rsp+30h] [rbp-58h] BYREF
  int v17; // [rsp+40h] [rbp-48h]
  AgMutex *v18; // [rsp+48h] [rbp-40h]
  AgPath v19; // [rsp+50h] [rbp-38h] BYREF
  AgPointer<AgPCStorageMount> v20; // [rsp+60h] [rbp-28h] BYREF

  p_m_mutex = &this->m_mutex;
  v18 = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v17 = 1;
  Relative = AgPath::getRelative((AgPath *)path, &resulta);
  AgPath::operator/(&this->m_systemPath, &v19, Relative);
  AgString::~AgString(&resulta.m_path, v10);
  v11 = (AgUser *)operator new(0xA0ui64);
  v12 = (AgPCStorageStream *)v11;
  if ( v11 )
  {
    *(_QWORD *)&resulta.m_path.m_length = &v20;
    AgPointer<AgPCStorageMount>::AgPointer<AgPCStorageMount>(&v20, this);
    AgPCStorageStream::AgPCStorageStream(v12, v13, &v19, accessMode);
  }
  AgPointer<AgUser>::AgPointer<AgUser>((AgPointer<AgUser> *)result, v11);
  AgString::~AgString(&v19.m_path, v14);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  return result;
}

AgPointer<AgDirectory> *__fastcall AgPCStorageMount::openDirectory(
        AgPCStorageMount *this,
        AgPointer<AgDirectory> *result,
        const AgPath *path,
        AgStringRef *filter,
        unsigned int filterMask)
{
  AgMutex *p_m_mutex; // rdi
  AgDirectory *v10; // rax
  AgPCStorageDirectory *v11; // rsi
  AgPointer<AgPCStorageMount> *v12; // rax
  AgPointer<AgPCStorageMount> v14; // [rsp+58h] [rbp-50h] BYREF
  AgStringRef v15; // [rsp+70h] [rbp-38h] BYREF

  p_m_mutex = &this->m_mutex;
  EnterCriticalSection((LPCRITICAL_SECTION)&this->m_mutex);
  v10 = (AgDirectory *)operator new(0xA0ui64);
  v11 = (AgPCStorageDirectory *)v10;
  if ( v10 )
  {
    v15 = *filter;
    AgPointer<AgPCStorageMount>::AgPointer<AgPCStorageMount>(&v14, this);
    AgPCStorageDirectory::AgPCStorageDirectory(v11, v12, path, &this->m_systemPath, &v15, filterMask);
  }
  AgPointer<AgDirectory>::AgPointer<AgDirectory>(result, v10);
  LeaveCriticalSection((LPCRITICAL_SECTION)p_m_mutex);
  return result;
}

__int64 __fastcall AgPCStorageMount::remove(AgPCStorageMount *this, const AgPath *path)
{
  const AgPath *Relative; // rax
  unsigned __int64 v4; // rdx
  std::wstring *Ptr; // rax
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  AgPath patha; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  std::wstring result; // [rsp+38h] [rbp-30h] BYREF

  v10 = -2i64;
  Relative = AgPath::getRelative((AgPath *)path, (AgPath *)&result);
  AgPath::operator/(&this->m_systemPath, &patha, Relative);
  AgString::~AgString((AgString *)&result, v4);
  Ptr = AgPCStorageMount::convertToWidePath(&result, &patha);
  if ( Ptr->_Mypair._Myval2._Myres >= 8 )
    Ptr = (std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
  v7 = DeleteFileW(Ptr->_Mypair._Myval2._Bx._Buf);
  if ( result._Mypair._Myval2._Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)&result,
      result._Mypair._Myval2._Bx._Ptr,
      result._Mypair._Myval2._Myres + 1);
  result._Mypair._Myval2._Myres = 7i64;
  result._Mypair._Myval2._Mysize = 0i64;
  result._Mypair._Myval2._Bx._Buf[0] = 0;
  AgString::~AgString(&patha.m_path, v6);
  return v7;
}

__int64 __fastcall AgPCStorageMount::removeDirectory(AgPCStorageMount *this, const AgPath *path)
{
  const AgPath *Relative; // rax
  unsigned __int64 v4; // rdx
  std::wstring *Ptr; // rax
  unsigned __int64 v6; // rdx
  unsigned int v7; // ebx
  AgPath patha; // [rsp+20h] [rbp-48h] BYREF
  __int64 v10; // [rsp+30h] [rbp-38h]
  std::wstring result; // [rsp+38h] [rbp-30h] BYREF

  v10 = -2i64;
  Relative = AgPath::getRelative((AgPath *)path, (AgPath *)&result);
  AgPath::operator/(&this->m_systemPath, &patha, Relative);
  AgString::~AgString((AgString *)&result, v4);
  Ptr = AgPCStorageMount::convertToWidePath(&result, &patha);
  if ( Ptr->_Mypair._Myval2._Myres >= 8 )
    Ptr = (std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
  v7 = RemoveDirectoryW(Ptr->_Mypair._Myval2._Bx._Buf);
  if ( result._Mypair._Myval2._Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)&result,
      result._Mypair._Myval2._Bx._Ptr,
      result._Mypair._Myval2._Myres + 1);
  result._Mypair._Myval2._Myres = 7i64;
  result._Mypair._Myval2._Mysize = 0i64;
  result._Mypair._Myval2._Bx._Buf[0] = 0;
  AgString::~AgString(&patha.m_path, v6);
  return v7;
}

