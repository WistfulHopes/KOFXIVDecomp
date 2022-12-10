#include "dev/silverware/git/sdk/agstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thr/xthread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/string"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_typeinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/ios"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocnum"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/functional"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/stdexcept"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/exception"
#include "dev/silverware/git/sdk/agreferencecount.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/type_traits"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/silverware/git/sdk/filesystem/agfile.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstddef"
#include "dev/silverware/git/sdk/util/agservicecommand.h"
#include "dev/silverware/git/sdk/system/aguser.h"
#include "dev/silverware/git/sdk/agpointer.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xatomic0.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/system_error"
#include "dev/silverware/git/sdk/agstream.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/thread"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/memory"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/silverware/git/sdk/agmutex.h"
#include "dev/silverware/git/sdk/agsemaphore.inl"
#include "dev/silverware/git/sdk/agscopedlock.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/tuple"
#include "dev/silverware/git/sdk/filesystem/agpath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xutility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/utility"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/iosfwd"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocinfo"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xiosbase"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xlocale"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/silverware/git/sdk/filesystem/agmount.h"
#include "dev/silverware/git/sdk/agreferencecountinl.h"
#include "dev/silverware/git/sdk/memory/agallocators.h"
#include "dev/silverware/git/sdk/util/agdebugchannels.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/mutex"
#include "dev/silverware/git/sdk/util/agperformancecounter.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/chrono"
#include "dev/silverware/git/sdk/agclock.h"
#include "dev/silverware/git/sdk/system/agsysteminfo.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vector"
#include "dev/silverware/git/sdk/agmutex.inl"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/silverware/git/src/platforms/pc/filesystem/agpcstoragemount.h"
#include "dev/silverware/git/sdk/agcondition.inl"
#include "dev/silverware/git/sdk/system/agusermanager.h"
#include "dev/silverware/git/sdk/util/agdelegate.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/silverware/git/sdk/platforms/pc/system/agpcsysteminfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/silverware/git/sdk/agpointerinl.h"
#include "dev/silverware/git/sdk/agcondition.h"
#include "dev/silverware/git/sdk/agconditionvariable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/condition_variable"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xstring"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory0"
#include "dev/silverware/git/sdk/agsingleton.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/silverware/git/sdk/agthreadpool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_new.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/silverware/git/sdk/util/agservice.h"
#include "dev/silverware/git/sdk/agsemaphore.h"
#include "dev/silverware/git/sdk/agmath.h"
#include "dev/silverware/git/sdk/agthread.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vcruntime_exception.h"
#include "dev/silverware/git/sdk/agmemorypool.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/limits"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/silverware/git/sdk/agreferencedobjectinl.h"
#include "dev/silverware/git/sdk/agreferenceinl.h"
#include "dev/silverware/git/src/platforms/pc/filesystem/agpcstoragedirectory.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/silverware/git/sdk/filesystem/agdirectory.h"
#include "dev/silverware/git/sdk/agreferencedobject.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xfacet"
#include "dev/silverware/git/sdk/agconditionvariable.inl"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/map"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xmemory"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtree"

struct AgPCStorageDirectory::AgPCStorageDirectoryInternalData
{
	AgPCStorageDirectoryInternalData();
	void * m_handle; // 0x0
};
typedef _WIN32_FIND_DATAW WIN32_FIND_DATAW;
typedef AgPointer<AgPCStorageMount> AgPCStorageMountPtr;
typedef _WIN32_FIND_DATAW * LPWIN32_FIND_DATAW;
AgPCStorageDirectory::AgPCStorageDirectory(AgPointer<AgPCStorageMount> mountPtr, const AgPath & path, const AgPath & systemPath, AgStringRef filter, unsigned long filterMask); // 0x1406A05A0
AgPCStorageDirectory::~AgPCStorageDirectory(); // 0x1406A0680
AgDirectory::DirectoryEntry AgPCStorageDirectory::firstEntry(); // 0x1406A0740
AgDirectory::DirectoryEntry AgPCStorageDirectory::nextEntry(); // 0x1406A0A60void __fastcall AgPCStorageDirectory::AgPCStorageDirectory(
        AgPCStorageDirectory *this,
        AgPointer<AgPCStorageMount> *mountPtr,
        const AgPath *path,
        const AgPath *systemPath,
        AgStringRef *filter,
        unsigned int filterMask)
{
  AgPointer<AgMount> *v10; // rax
  AgPCStorageDirectory::AgPCStorageDirectoryInternalData *v11; // rax
  AgPointer<AgMount> v12; // [rsp+38h] [rbp-40h] BYREF
  AgStringRef v13; // [rsp+50h] [rbp-28h] BYREF

  v13 = *filter;
  v10 = AgPointer<AgPCStorageMount>::operator<AgMount> AgPointer<AgMount>(mountPtr, &v12);
  AgDirectory::AgDirectory(this, v10, path, &v13, filterMask);
  this->__vftable = (AgPCStorageDirectory_vtbl *)&AgPCStorageDirectory::`vftable';
  this->m_internalData = 0i64;
  AgString::AgString(&this->m_systemPath.m_path, &systemPath->m_path);
  v11 = (AgPCStorageDirectory::AgPCStorageDirectoryInternalData *)operator new(8ui64);
  if ( v11 )
    v11->m_handle = (void *)-1i64;
  this->m_internalData = v11;
  AgPointer<AgPCStorageMount>::~AgPointer<AgPCStorageMount>(mountPtr);
}

void __fastcall AgPCStorageDirectory::~AgPCStorageDirectory(AgPCStorageDirectory *this)
{
  void *m_handle; // rcx
  unsigned __int64 v3; // rdx
  unsigned __int64 v4; // rdx

  this->__vftable = (AgPCStorageDirectory_vtbl *)&AgPCStorageDirectory::`vftable';
  m_handle = this->m_internalData->m_handle;
  if ( m_handle != (void *)-1i64 )
    FindClose(m_handle);
  operator delete(this->m_internalData, 8ui64);
  this->m_internalData = 0i64;
  AgString::~AgString(&this->m_systemPath.m_path, v3);
  AgDirectory::~AgDirectory(this, v4);
}

AgDirectory::DirectoryEntry *__fastcall AgPCStorageDirectory::firstEntry(
        AgPCStorageDirectory *this,
        AgDirectory::DirectoryEntry *result)
{
  const AgPath *Relative; // rax
  unsigned __int64 v5; // rdx
  void *m_handle; // rcx
  const AgPath *v7; // rax
  std::wstring *Ptr; // rax
  unsigned __int64 v9; // rdx
  unsigned __int64 v10; // rdx
  unsigned __int64 v11; // rdx
  unsigned __int64 v12; // rdx
  unsigned __int64 v13; // rdx
  unsigned __int64 v14; // rdx
  unsigned __int64 v15; // rdx
  AgPath resulta; // [rsp+28h] [rbp-D8h] BYREF
  AgPath v18; // [rsp+38h] [rbp-C8h] BYREF
  AgPath v19; // [rsp+48h] [rbp-B8h] BYREF
  __int64 v20; // [rsp+58h] [rbp-A8h]
  AgDirectory::DirectoryEntry *v21; // [rsp+60h] [rbp-A0h]
  std::wstring v22; // [rsp+68h] [rbp-98h] BYREF
  _WIN32_FIND_DATAW FindFileData; // [rsp+90h] [rbp-70h] BYREF

  v20 = -2i64;
  v21 = result;
  Relative = AgPath::getRelative(&this->m_path, &resulta);
  AgPath::operator/(&this->m_systemPath, &v19, Relative);
  AgString::~AgString(&resulta.m_path, v5);
  m_handle = this->m_internalData->m_handle;
  if ( m_handle != (void *)-1i64 )
  {
    FindClose(m_handle);
    this->m_internalData->m_handle = (void *)-1i64;
  }
  memset(&FindFileData, 0, sizeof(FindFileData));
  AgString::AgString(&resulta.m_path, &this->m_filter);
  AgPath::clean(&resulta);
  v7 = AgPath::operator/(&v19, &v18, &resulta);
  Ptr = AgPCStorageMount::convertToWidePath(&v22, v7);
  if ( Ptr->_Mypair._Myval2._Myres >= 8 )
    Ptr = (std::wstring *)Ptr->_Mypair._Myval2._Bx._Ptr;
  this->m_internalData->m_handle = FindFirstFileW(Ptr->_Mypair._Myval2._Bx._Buf, &FindFileData);
  if ( v22._Mypair._Myval2._Myres >= 8 )
    std::_Wrap_alloc<std::allocator<wchar_t>>::deallocate(
      (std::_Wrap_alloc<std::allocator<wchar_t> > *)&v22,
      v22._Mypair._Myval2._Bx._Ptr,
      v22._Mypair._Myval2._Myres + 1);
  v22._Mypair._Myval2._Myres = 7i64;
  v22._Mypair._Myval2._Mysize = 0i64;
  v22._Mypair._Myval2._Bx._Buf[0] = 0;
  AgString::~AgString(&v18.m_path, v9);
  AgString::~AgString(&resulta.m_path, v10);
  if ( this->m_internalData->m_handle == (void *)-1i64 )
  {
    *(_QWORD *)&v18.m_path.m_length = result;
    AgString::AgString(&result->m_path.m_path, &pnewText, -1);
    AgPath::clean(&result->m_path);
    *(_QWORD *)&result->m_type = 2i64;
    goto LABEL_18;
  }
  if ( ((FindFileData.dwFileAttributes & 0x10) == 0 || (this->m_mask & 2) == 0)
    && ((FindFileData.dwFileAttributes & 0x10) != 0 || (this->m_mask & 1) == 0) )
  {
    goto LABEL_16;
  }
  AgString::AgString(&v18.m_path, FindFileData.cFileName, -1);
  AgString::AgString(&resulta.m_path, &v18.m_path);
  AgPath::clean(&resulta);
  AgString::~AgString(&v18.m_path, v11);
  if ( !operator!=(&resulta.m_path, ".") || !operator!=(&resulta.m_path, "..") )
  {
    AgString::~AgString(&resulta.m_path, v12);
LABEL_16:
    this->nextEntry(this, result);
    goto LABEL_18;
  }
  *(_QWORD *)&v18.m_path.m_length = &v22;
  AgString::AgString((AgString *)&v22, &pnewText, -1);
  AgPath::clean((AgPath *)&v22);
  v22._Mypair._Myval2._Mysize = 2i64;
  AgString::operator=((AgString *)&v22, &resulta.m_path);
  LODWORD(v22._Mypair._Myval2._Mysize) = (FindFileData.dwFileAttributes >> 4) & 1;
  HIDWORD(v22._Mypair._Myval2._Mysize) = 1;
  *(_QWORD *)&v18.m_path.m_length = result;
  AgString::AgString(&result->m_path.m_path, (AgString *)&v22);
  *(_QWORD *)&result->m_type = v22._Mypair._Myval2._Mysize;
  result->m_internalData = (void *)v22._Mypair._Myval2._Myres;
  *(_QWORD *)&v18.m_path.m_length = &v22;
  AgString::~AgString((AgString *)&v22, v13);
  AgString::~AgString(&resulta.m_path, v14);
LABEL_18:
  AgString::~AgString(&v19.m_path, v15);
  return result;
}

AgDirectory::DirectoryEntry *__fastcall AgPCStorageDirectory::nextEntry(
        AgPCStorageDirectory *this,
        AgDirectory::DirectoryEntry *result)
{
  void *m_handle; // rsi
  void *i; // rcx
  unsigned __int64 v6; // rdx
  unsigned __int64 v7; // rdx
  unsigned __int64 v8; // rdx
  AgString s1; // [rsp+28h] [rbp-2A0h] BYREF
  AgString copy; // [rsp+38h] [rbp-290h] BYREF
  __int64 v12; // [rsp+48h] [rbp-280h]
  AgDirectory::DirectoryEntry *v13; // [rsp+50h] [rbp-278h]
  _WIN32_FIND_DATAW FindFileData; // [rsp+60h] [rbp-268h] BYREF

  v12 = -2i64;
  v13 = result;
  *(_QWORD *)&s1.m_length = result;
  AgString::AgString(&result->m_path.m_path, &pnewText, -1);
  AgPath::clean(&result->m_path);
  *(_QWORD *)&result->m_type = 2i64;
  m_handle = this->m_internalData->m_handle;
  if ( m_handle != (void *)-1i64 )
  {
    memset(&FindFileData, 0, sizeof(FindFileData));
    for ( i = m_handle; FindNextFileW(i, &FindFileData); i = this->m_internalData->m_handle )
    {
      if ( (FindFileData.dwFileAttributes & 0x10) != 0 && (this->m_mask & 2) != 0
        || (FindFileData.dwFileAttributes & 0x10) == 0 && (this->m_mask & 1) != 0 )
      {
        AgString::AgString(&copy, FindFileData.cFileName, -1);
        AgString::AgString(&s1, &copy);
        AgPath::clean((AgPath *)&s1);
        AgString::~AgString(&copy, v6);
        if ( operator!=(&s1, ".") && operator!=(&s1, "..") )
        {
          AgString::operator=(&result->m_path.m_path, &s1);
          result->m_type = (FindFileData.dwFileAttributes >> 4) & 1;
          result->m_exists = 1;
          AgString::~AgString(&s1, v8);
          return result;
        }
        AgString::~AgString(&s1, v7);
      }
    }
  }
  return result;
}

