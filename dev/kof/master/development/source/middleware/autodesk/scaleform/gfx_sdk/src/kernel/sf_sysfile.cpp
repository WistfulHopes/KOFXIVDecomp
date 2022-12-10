#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

class Scaleform::UnopenedFile :
	Scaleform::File
{
public:
	UnopenedFile(const Scaleform::UnopenedFile &);
	UnopenedFile();
	virtual ~UnopenedFile();
	virtual const char * GetFilePath();
	virtual bool IsValid();
	virtual bool IsWritable();
	virtual long Tell();
	virtual long long LTell();
	virtual long GetLength();
	virtual long long LGetLength();
	virtual long GetErrorCode();
	virtual long Write(const unsigned char *, long);
	virtual long Read(unsigned char *, long);
	virtual long SkipBytes(long);
	virtual long BytesAvailable();
	virtual bool Flush();
	virtual long Seek(long, long);
	virtual long long LSeek(long long, long);
	virtual bool ChangeSize(long);
	virtual long CopyFromStream(Scaleform::File *, long);
	virtual bool Close();
	bool CloseCancel();
	Scaleform::UnopenedFile & operator=(const Scaleform::UnopenedFile &);
};
long Scaleform::UnopenedFile::BytesAvailable(); // 0x1400470F0
long Scaleform::UnopenedFile::GetErrorCode(); // 0x1403692E0
long Scaleform::UnopenedFile::CopyFromStream(Scaleform::File * pstream, long byteSize); // 0x1400FB800
long long Scaleform::UnopenedFile::LSeek(long long offset, long origin); // 0x140369320
bool Scaleform::UnopenedFile::ChangeSize(long newSize); // 0x14004BBE0
Scaleform::SysFile::SysFile(); // 0x140369130
Scaleform::SysFile::SysFile(const Scaleform::String & path, long flags, long mode); // 0x1403690F0
bool Scaleform::SysFile::Open(const Scaleform::String & path, long flags, long mode); // 0x140369330
long Scaleform::SysFile::GetErrorCode(); // 0x1403692C0
bool Scaleform::SysFile::IsValid(); // 0x1403692F0
bool Scaleform::SysFile::Close(); // 0x140369230void __fastcall Scaleform::SysFile::SysFile(
        Scaleform::SysFile *this,
        const Scaleform::String *path,
        int flags,
        int mode)
{
  this->__vftable = (Scaleform::SysFile_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->pFile.pObject = 0i64;
  this->__vftable = (Scaleform::SysFile_vtbl *)&Scaleform::SysFile::`vftable';
  Scaleform::SysFile::Open(this, path, flags, mode);
}

void __fastcall Scaleform::SysFile::SysFile(Scaleform::SysFile *this)
{
  __int64 v2; // rax
  Scaleform::File *v3; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::SysFile_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->pFile.pObject = 0i64;
  this->__vftable = (Scaleform::SysFile_vtbl *)&Scaleform::SysFile::`vftable';
  v2 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         16i64);
  v3 = (Scaleform::File *)v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)v2 = &Scaleform::UnopenedFile::`vftable';
  }
  else
  {
    v3 = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->pFile.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pFile.pObject = v3;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

char __fastcall Scaleform::SysFile::Close(Scaleform::SysFile *this)
{
  __int64 v2; // rax
  Scaleform::File *v3; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  if ( !this->IsValid(this) )
    return 0;
  this->pFile.pObject->Close(this->pFile.pObject);
  v2 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         16i64);
  v3 = (Scaleform::File *)v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v2 = &Scaleform::UnopenedFile::`vftable';
    *(_DWORD *)(v2 + 8) = 1;
  }
  else
  {
    v3 = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->pFile.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pFile.pObject = v3;
  return 1;
}

__int64 __fastcall Scaleform::UnopenedFile::Read(Concurrency::details::ExternalContextBase *this)
{
  return 0xFFFFFFFFi64;
}

__int64 __fastcall Scaleform::SysFile::GetErrorCode(Scaleform::SysFile *this)
{
  Scaleform::File *pObject; // rcx

  pObject = this->pFile.pObject;
  if ( pObject )
    return ((__int64 (__fastcall *)(Scaleform::File *))pObject->GetErrorCode)(pObject);
  else
    return 4097i64;
}

__int64 __fastcall Scaleform::UnopenedFile::GetErrorCode(Scaleform::UnopenedFile *this)
{
  return 4097i64;
}

bool __fastcall Scaleform::DelegatedFile::IsValid(Scaleform::SysFile *this)
{
  Scaleform::File *pObject; // rcx

  pObject = this->pFile.pObject;
  return pObject && pObject->IsValid(pObject);
}

__int64 __fastcall Scaleform::UnopenedFile::LSeek(Scaleform::UnopenedFile *this, __int64 offset, int origin)
{
  return -1i64;
}

char __fastcall Scaleform::SysFile::Open(Scaleform::SysFile *this, const Scaleform::String *path, int flags, int mode)
{
  char v4; // bl
  Scaleform::File *v6; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::File *v8; // rsi
  Scaleform::BufferedFile *v9; // rax
  Scaleform::File *v10; // rax
  Scaleform::File *v11; // rbx
  Scaleform::RefCountVImpl *v12; // rcx
  char result; // al
  __int64 v14; // rax
  Scaleform::File *v15; // rbx
  Scaleform::RefCountVImpl *v16; // rcx

  v4 = flags;
  v6 = Scaleform::FileFILEOpen(path, flags, mode);
  pObject = (Scaleform::RefCountVImpl *)this->pFile.pObject;
  v8 = v6;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->pFile.pObject = v8;
  if ( v8 && v8->IsValid(v8) )
  {
    if ( (v4 & 0x20) != 0 )
    {
      v9 = (Scaleform::BufferedFile *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                        Scaleform::Memory::pGlobalHeap,
                                        56i64);
      if ( v9 )
      {
        Scaleform::BufferedFile::BufferedFile(v9, this->pFile.pObject);
        v11 = v10;
      }
      else
      {
        v11 = 0i64;
      }
      v12 = (Scaleform::RefCountVImpl *)this->pFile.pObject;
      if ( v12 )
        Scaleform::RefCountImpl::Release(v12);
      this->pFile.pObject = v11;
    }
    return 1;
  }
  else
  {
    v14 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
            Scaleform::Memory::pGlobalHeap,
            16i64);
    v15 = (Scaleform::File *)v14;
    if ( v14 )
    {
      *(_QWORD *)v14 = &Scaleform::RefCountImplCore::`vftable';
      *(_QWORD *)v14 = &Scaleform::UnopenedFile::`vftable';
      *(_DWORD *)(v14 + 8) = 1;
    }
    else
    {
      v15 = 0i64;
    }
    v16 = (Scaleform::RefCountVImpl *)this->pFile.pObject;
    if ( v16 )
      Scaleform::RefCountImpl::Release(v16);
    result = 0;
    this->pFile.pObject = v15;
  }
  return result;
}

