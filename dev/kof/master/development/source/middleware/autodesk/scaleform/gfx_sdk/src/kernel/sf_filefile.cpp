#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"

class Scaleform::SysErrorModeDisabler
{
private:
	long Disabled; // 0x0
	unsigned long OldMode; // 0x4
public:
	SysErrorModeDisabler(const char *);
	~SysErrorModeDisabler();
};
enum Scaleform::<unnamed-enum-FILE_CloseFd>
{
	FILE_CloseFd = 4096,
};
class Scaleform::FILEFile :
	Scaleform::File
{
protected:
	Scaleform::String FileName; // 0x10
	bool Opened; // 0x18
	_iobuf * fs; // 0x20
	long OpenFlags; // 0x28
	long ErrorCode; // 0x2C
	long LastOp; // 0x30
public:
	FILEFile(const Scaleform::FILEFile &);
	FILEFile(_iobuf *, const char *, long);
	FILEFile(const char *, long, long);
	FILEFile(const Scaleform::String &, long, long);
	FILEFile();
	virtual ~FILEFile();
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
private:
	void init();
public:
	Scaleform::FILEFile & operator=(const Scaleform::FILEFile &);
};
void Scaleform::FILEFile::init(); // 0x140369BC0
const char * Scaleform::FILEFile::GetFilePath(); // 0x1403696F0
bool Scaleform::FILEFile::IsValid(); // 0x140253E80
bool Scaleform::FILEFile::IsWritable(); // 0x140369840
long Scaleform::FILEFile::Tell(); // 0x140369A90
long long Scaleform::FILEFile::LTell(); // 0x140369870
long Scaleform::FILEFile::GetLength(); // 0x1403697D0
long long Scaleform::FILEFile::LGetLength(); // 0x1403BDED0
long Scaleform::FILEFile::GetErrorCode(); // 0x1403696E0
long Scaleform::FILEFile::Write(const unsigned char * pbuffer, long numBytes); // 0x140369B20
long Scaleform::FILEFile::Read(unsigned char * pbuffer, long numBytes); // 0x140369900
long Scaleform::FILEFile::SkipBytes(long numBytes); // 0x140369A20
long Scaleform::FILEFile::BytesAvailable(); // 0x1403694E0
bool Scaleform::FILEFile::Flush(); // 0x1403696C0
long Scaleform::FILEFile::Seek(long offset, long origin); // 0x1403699A0
long long Scaleform::FILEFile::LSeek(long long offset, long origin); // 0x1402F0140
bool Scaleform::FILEFile::ChangeSize(long newSize); // 0x140369590
long Scaleform::FILEFile::CopyFromStream(Scaleform::File * pstream, long byteSize); // 0x1402EE0A0
bool Scaleform::FILEFile::Close(); // 0x1403695A0
Scaleform::File * Scaleform::FileFILEOpen(const Scaleform::String & path, long flags, long mode); // 0x140369630
bool Scaleform::SysFile::GetFileStat(Scaleform::FileStat * pfileStat, const Scaleform::String & path); // 0x140369700__int64 __fastcall Scaleform::FILEFile::BytesAvailable(Scaleform::FILEFile *this)
{
  __int64 v2; // rdi
  __int64 v3; // rax
  __int64 result; // rax
  int v5; // ecx

  v2 = this->LTell(this);
  v3 = this->LGetLength(this);
  if ( v2 == -1 || v3 == -1 )
  {
    if ( *errno() == 2 )
    {
      result = 0i64;
      this->ErrorCode = 4097;
    }
    else if ( *errno() == 13 || *errno() == 1 )
    {
      result = 0i64;
      this->ErrorCode = 4098;
    }
    else
    {
      v5 = (*errno() == 28) + 4099;
      result = 0i64;
      this->ErrorCode = v5;
    }
  }
  else
  {
    result = v3 - v2;
    this->ErrorCode = 0;
  }
  return result;
}

bool __fastcall Scaleform::FILEFile::ChangeSize(Scaleform::FILEFile *this, int newSize)
{
  this->ErrorCode = 4099;
  return 0;
}

bool __fastcall Scaleform::FILEFile::Close(Scaleform::FILEFile *this)
{
  bool result; // al
  int v3; // edx

  if ( fclose(this->fs) )
  {
    if ( *errno() == 2 )
    {
      result = 0;
      this->ErrorCode = 4097;
    }
    else if ( *errno() == 13 || *errno() == 1 )
    {
      result = 0;
      this->ErrorCode = 4098;
    }
    else
    {
      v3 = (*errno() == 28) + 4099;
      result = 0;
      this->ErrorCode = v3;
    }
  }
  else
  {
    this->Opened = 0;
    this->fs = 0i64;
    result = 1;
    this->ErrorCode = 0;
  }
  return result;
}

__int64 __fastcall Scaleform::FILEFile::CopyFromStream(
        Scaleform::FILEFile *this,
        Scaleform::File *pstream,
        int byteSize)
{
  unsigned int v3; // edi
  int v4; // ebx
  int v7; // esi
  int v8; // er8
  int v9; // eax
  char v11[16384]; // [rsp+20h] [rbp-4038h] BYREF

  v3 = 0;
  v4 = byteSize;
  if ( !byteSize )
    return 0i64;
  do
  {
    v7 = v4;
    if ( v4 > 0x4000 )
      v7 = 0x4000;
    v8 = pstream->Read(pstream, (unsigned __int8 *)v11, v7);
    v9 = 0;
    if ( v8 > 0 )
      v9 = ((__int64 (__fastcall *)(Scaleform::FILEFile *, char *))this->Write)(this, v11);
    v3 += v9;
    v4 -= v9;
  }
  while ( v9 >= v7 && v4 );
  return v3;
}

Scaleform::FILEFile *__fastcall Scaleform::FileFILEOpen(const Scaleform::String *path, int flags, int mode)
{
  Scaleform::FILEFile *result; // rax
  Scaleform::FILEFile *v6; // rbx

  result = (Scaleform::FILEFile *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                    Scaleform::Memory::pGlobalHeap,
                                    56i64);
  v6 = result;
  if ( result )
  {
    result->__vftable = (Scaleform::FILEFile_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    result->RefCount = 1;
    result->__vftable = (Scaleform::FILEFile_vtbl *)&Scaleform::FILEFile::`vftable';
    Scaleform::String::String(&result->FileName, path);
    v6->OpenFlags = flags;
    Scaleform::FILEFile::init(v6);
    return v6;
  }
  return result;
}

bool __fastcall Scaleform::FILEFile::Flush(Scaleform::FILEFile *this)
{
  return fflush(this->fs) == 0;
}

__int64 __fastcall Scaleform::Render::RawImage::GetUse(Scaleform::Render::RawImage *this)
{
  return this->Data.Use;
}

const char *__fastcall Scaleform::FILEFile::GetFilePath(Scaleform::FILEFile *this)
{
  return (const char *)((this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12);
}

char __fastcall Scaleform::SysFile::GetFileStat(Scaleform::FileStat *pfileStat, const Scaleform::String *path)
{
  unsigned __int64 v4; // rbx
  wchar_t *v5; // rdi
  _stat64 v7; // [rsp+20h] [rbp-58h] BYREF

  v4 = Scaleform::UTF8Util::GetLength((const char *)((path->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12), -1i64) + 1;
  v5 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 2 * v4, 0i64);
  Scaleform::UTF8Util::DecodeStringSafe(
    v5,
    v4,
    (const char *)((path->HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    -1i64);
  LODWORD(v4) = wstat64(v5, &v7);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v5);
  if ( (_DWORD)v4 )
    return 0;
  pfileStat->AccessTime = v7.st_atime;
  pfileStat->ModifyTime = v7.st_mtime;
  pfileStat->FileSize = v7.st_size;
  return 1;
}

__int64 __fastcall Scaleform::FILEFile::GetLength(Scaleform::FILEFile *this)
{
  int v2; // esi
  unsigned int v3; // ebx

  v2 = this->Tell(this);
  if ( v2 < 0 )
    return 0xFFFFFFFFi64;
  this->Seek(this, 0, 2);
  v3 = this->Tell(this);
  this->Seek(this, v2, 0);
  return v3;
}

_BOOL8 __fastcall std::numpunct<char>::do_decimal_point(Scaleform::FILEFile *this)
{
  return this->Opened;
}

bool __fastcall Scaleform::FILEFile::IsWritable(Scaleform::FILEFile *this)
{
  return this->IsValid(this) && (this->OpenFlags & 2) != 0;
}

__int64 __fastcall Scaleform::GFx::ZLibFile::LGetLength(Scaleform::FILEFile *this)
{
  return this->GetLength(this);
}

__int64 __fastcall Scaleform::GFx::ZLibFile::LSeek(Scaleform::FILEFile *this, __int64 offset, __int64 origin)
{
  return this->Seek(this, offset, origin);
}

__int64 __fastcall Scaleform::FILEFile::LTell(Scaleform::FILEFile *this)
{
  int v2; // eax
  __int64 v3; // rbx
  __int64 result; // rax
  bool v5; // zf

  v2 = ftell(this->fs);
  v3 = v2;
  if ( v2 < 0 )
  {
    if ( *errno() == 2 )
    {
      result = v3;
      this->ErrorCode = 4097;
      return result;
    }
    if ( *errno() != 13 && *errno() != 1 )
    {
      v5 = *errno() == 28;
      result = v3;
      this->ErrorCode = v5 + 4099;
      return result;
    }
    this->ErrorCode = 4098;
  }
  return v3;
}

unsigned __int64 __fastcall Scaleform::FILEFile::Read(
        Scaleform::FILEFile *this,
        unsigned __int8 *pbuffer,
        int numBytes)
{
  unsigned __int64 v4; // rsi
  _iobuf *fs; // r9
  unsigned __int64 result; // rax
  unsigned int v8; // edi
  int v9; // ecx

  v4 = numBytes;
  if ( this->LastOp > 1u )
    fflush(this->fs);
  fs = this->fs;
  this->LastOp = 1;
  result = fread(pbuffer, 1ui64, v4, fs);
  v8 = result;
  if ( (int)result < (int)v4 )
  {
    if ( *errno() == 2 )
    {
      v9 = 4097;
    }
    else if ( *errno() == 13 || *errno() == 1 )
    {
      v9 = 4098;
    }
    else
    {
      v9 = (*errno() == 28) + 4099;
    }
    this->ErrorCode = v9;
    return v8;
  }
  return result;
}

__int64 __fastcall Scaleform::FILEFile::Seek(Scaleform::FILEFile *this, int offset, int origin)
{
  int v3; // edi
  int v6; // er8

  v3 = 0;
  if ( !origin )
    goto LABEL_6;
  v6 = origin - 1;
  if ( v6 )
  {
    if ( v6 == 1 )
    {
      v3 = 2;
      goto LABEL_7;
    }
LABEL_6:
    if ( offset == this->Tell(this) )
      return ((__int64 (__fastcall *)(Scaleform::FILEFile *))this->Tell)(this);
    goto LABEL_7;
  }
  v3 = 1;
LABEL_7:
  if ( fseek(this->fs, offset, v3) )
    return 0xFFFFFFFFi64;
  return ((__int64 (__fastcall *)(Scaleform::FILEFile *))this->Tell)(this);
}

__int64 __fastcall Scaleform::FILEFile::SkipBytes(Scaleform::FILEFile *this, int numBytes)
{
  __int64 v3; // rbx
  __int64 v4; // rsi
  __int64 v5; // rax

  v3 = numBytes;
  v4 = this->LTell(this);
  v5 = this->LSeek(this, v3, 1);
  if ( v4 == -1 || v5 == -1 )
    return 0xFFFFFFFFi64;
  else
    return v5 - v4;
}

int __fastcall Scaleform::FILEFile::Tell(Scaleform::FILEFile *this)
{
  int result; // eax
  int v3; // ebx
  bool v4; // zf

  result = ftell(this->fs);
  v3 = result;
  if ( result < 0 )
  {
    if ( *errno() == 2 )
    {
      result = v3;
      this->ErrorCode = 4097;
    }
    else if ( *errno() == 13 || *errno() == 1 )
    {
      result = v3;
      this->ErrorCode = 4098;
    }
    else
    {
      v4 = *errno() == 28;
      result = v3;
      this->ErrorCode = v4 + 4099;
    }
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::FILEFile::Write(
        Scaleform::FILEFile *this,
        const unsigned __int8 *pbuffer,
        int numBytes)
{
  unsigned __int64 v4; // rsi
  _iobuf *fs; // r9
  unsigned __int64 result; // rax
  unsigned int v8; // edi
  int v9; // ecx

  v4 = numBytes;
  if ( (this->LastOp & 0xFFFFFFFD) != 0 )
    fflush(this->fs);
  fs = this->fs;
  this->LastOp = 2;
  result = fwrite(pbuffer, 1ui64, v4, fs);
  v8 = result;
  if ( (int)result < (int)v4 )
  {
    if ( *errno() == 2 )
    {
      v9 = 4097;
    }
    else if ( *errno() == 13 || *errno() == 1 )
    {
      v9 = 4098;
    }
    else
    {
      v9 = (*errno() == 28) + 4099;
    }
    this->ErrorCode = v9;
    return v8;
  }
  return result;
}

void __fastcall Scaleform::FILEFile::init(Scaleform::FILEFile *this)
{
  int OpenFlags; // eax
  const char *v3; // rsi
  int v4; // er14
  UINT v5; // er15
  unsigned __int64 v6; // rbx
  wchar_t *v7; // rdi
  _iobuf *fs; // rcx
  bool v9; // al
  UINT v10; // [rsp+24h] [rbp-44h]
  wchar_t pbuff[16]; // [rsp+28h] [rbp-40h] BYREF

  OpenFlags = this->OpenFlags;
  if ( (OpenFlags & 4) != 0 )
  {
    v3 = "w+b";
    if ( (OpenFlags & 1) == 0 )
      v3 = "wb";
  }
  else if ( (OpenFlags & 8) != 0 )
  {
    v3 = "a+b";
    if ( (OpenFlags & 1) == 0 )
      v3 = "ab";
  }
  else
  {
    v3 = "r+b";
    if ( (OpenFlags & 2) == 0 )
      v3 = "rb";
  }
  if ( (this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) != -12i64
    && *(_BYTE *)((this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12)
    && *(_BYTE *)((this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 13) == 58 )
  {
    v4 = 1;
    v5 = SetErrorMode(1u);
  }
  else
  {
    v5 = v10;
    v4 = 0;
  }
  v6 = Scaleform::UTF8Util::GetLength(
         (const char *)((this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
         -1i64)
     + 1;
  v7 = (wchar_t *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 2 * v6, 0i64);
  Scaleform::UTF8Util::DecodeStringSafe(
    v7,
    v6,
    (const char *)((this->FileName.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
    -1i64);
  Scaleform::UTF8Util::DecodeStringSafe(pbuff, 0x10ui64, v3, -1i64);
  wfopen_s(&this->fs, v7, pbuff);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v7);
  fs = this->fs;
  if ( fs )
    rewind(fs);
  v9 = this->fs != 0i64;
  this->Opened = v9;
  if ( v9 )
  {
    this->ErrorCode = 0;
  }
  else if ( *errno() == 2 )
  {
    this->ErrorCode = 4097;
  }
  else if ( *errno() == 13 || *errno() == 1 )
  {
    this->ErrorCode = 4098;
  }
  else
  {
    this->ErrorCode = (*errno() == 28) + 4099;
  }
  this->LastOp = 0;
  if ( v4 )
    SetErrorMode(v5);
}

