#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
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
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

Scaleform::BufferedFile::BufferedFile(Scaleform::File * pfile); // 0x1402EDE00
void Scaleform::BufferedFile::FlushBuffer(); // 0x1402EE1B0
long Scaleform::BufferedFile::Tell(); // 0x1402EE710
long long Scaleform::BufferedFile::LTell(); // 0x1402EE400
long Scaleform::BufferedFile::GetLength(); // 0x1402EE230
long long Scaleform::BufferedFile::LGetLength(); // 0x1402EE2D0
long Scaleform::BufferedFile::Write(const unsigned char * psourceBuffer, long numBytes); // 0x1402EE750
long Scaleform::BufferedFile::Read(unsigned char * pdestBuffer, long numBytes); // 0x1402EE460
long Scaleform::BufferedFile::SkipBytes(long numBytes); // 0x1402EE690
long Scaleform::BufferedFile::BytesAvailable(); // 0x1402EDFA0
bool Scaleform::BufferedFile::Flush(); // 0x1402EE180
long Scaleform::BufferedFile::Seek(long offset, long origin); // 0x1402EE5C0
long long Scaleform::BufferedFile::LSeek(long long offset, long origin); // 0x1402EE320
bool Scaleform::BufferedFile::ChangeSize(long newSize); // 0x1402EE000
long Scaleform::BufferedFile::CopyFromStream(Scaleform::File * pstream, long byteSize); // 0x1402EE0A0
bool Scaleform::BufferedFile::Close(); // 0x1402EE040
const char * Scaleform::GetShortFilename(const char * purl); // 0x1402EE290void __fastcall Scaleform::BufferedFile::BufferedFile(Scaleform::BufferedFile *this, Scaleform::File *pfile)
{
  unsigned __int8 *v4; // rax

  this->__vftable = (Scaleform::BufferedFile_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::BufferedFile_vtbl *)&Scaleform::DelegatedFile::`vftable';
  this->RefCount = 1;
  if ( pfile )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pfile);
  this->pFile.pObject = pfile;
  this->__vftable = (Scaleform::BufferedFile_vtbl *)&Scaleform::BufferedFile::`vftable';
  v4 = (unsigned __int8 *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                            Scaleform::Memory::pGlobalHeap,
                            8184i64,
                            1i64);
  this->BufferMode = NoBuffer;
  this->pBuffer = v4;
  this->FilePos = pfile->LTell(pfile);
  *(_QWORD *)&this->Pos = 0i64;
}

__int64 __fastcall Scaleform::BufferedFile::BytesAvailable(Scaleform::BufferedFile *this)
{
  unsigned int v2; // er8
  int v3; // er8
  __int64 result; // rax

  v2 = this->pFile.pObject->BytesAvailable(this->pFile.pObject);
  if ( this->BufferMode == ReadBuffer )
    return v2 + this->DataSize - this->Pos;
  if ( this->BufferMode != WriteBuffer )
    return v2;
  v3 = v2 - this->Pos;
  result = 0i64;
  if ( v3 >= 0 )
    return (unsigned int)v3;
  return result;
}

__int64 __fastcall Scaleform::DelegatedFile::BytesAvailable(Scaleform::DelegatedFile *this)
{
  return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->BytesAvailable)(this->pFile.pObject);
}

__int64 __fastcall Scaleform::BufferedFile::ChangeSize(Scaleform::BufferedFile *this, int newSize)
{
  Scaleform::BufferedFile::FlushBuffer(this);
  return ((__int64 (__fastcall *)(Scaleform::File *, _QWORD))this->pFile.pObject->ChangeSize)(
           this->pFile.pObject,
           (unsigned int)newSize);
}

__int64 __fastcall Scaleform::DelegatedFile::ChangeSize(Scaleform::DelegatedFile *this, __int64 newSize)
{
  return ((__int64 (__fastcall *)(Scaleform::File *, __int64))this->pFile.pObject->ChangeSize)(
           this->pFile.pObject,
           newSize);
}

__int64 __fastcall Scaleform::BufferedFile::Close(Scaleform::BufferedFile *this)
{
  __int32 v2; // ecx

  v2 = this->BufferMode - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      Scaleform::BufferedFile::FlushBuffer(this);
      return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->Close)(this->pFile.pObject);
    }
  }
  else
  {
    this->BufferMode = NoBuffer;
  }
  return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->Close)(this->pFile.pObject);
}

__int64 __fastcall Scaleform::DelegatedFile::Close(Scaleform::DelegatedFile *this)
{
  return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->Close)(this->pFile.pObject);
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

__int64 __fastcall Scaleform::DelegatedFile::CopyFromStream(
        Scaleform::DelegatedFile *this,
        Scaleform::File *pstream,
        __int64 byteSize)
{
  return ((__int64 (__fastcall *)(Scaleform::File *, Scaleform::File *, __int64))this->pFile.pObject->CopyFromStream)(
           this->pFile.pObject,
           pstream,
           byteSize);
}

__int64 __fastcall Scaleform::BufferedFile::Flush(Scaleform::BufferedFile *this)
{
  Scaleform::BufferedFile::FlushBuffer(this);
  return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->Flush)(this->pFile.pObject);
}

__int64 __fastcall Scaleform::DelegatedFile::Flush(Scaleform::DelegatedFile *this)
{
  return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->Flush)(this->pFile.pObject);
}

void __fastcall Scaleform::BufferedFile::FlushBuffer(Scaleform::BufferedFile *this)
{
  __int32 v2; // ecx
  unsigned int DataSize; // er8
  unsigned int Pos; // edx

  v2 = this->BufferMode - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
    {
      this->FilePos += this->pFile.pObject->Write(this->pFile.pObject, this->pBuffer, this->Pos);
      this->Pos = 0;
    }
  }
  else
  {
    DataSize = this->DataSize;
    Pos = this->Pos;
    if ( DataSize > Pos )
      this->FilePos = this->pFile.pObject->LSeek(this->pFile.pObject, (int)(Pos - DataSize), 1);
    *(_QWORD *)&this->Pos = 0i64;
  }
}

__int64 __fastcall Scaleform::Render::WrapperImageSource::Decode(Scaleform::DelegatedFile *this)
{
  return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->GetErrorCode)(this->pFile.pObject);
}

const char *__fastcall Scaleform::DelegatedFile::GetFilePath(Scaleform::DelegatedFile *this)
{
  return this->pFile.pObject->GetFilePath(this->pFile.pObject);
}

__int64 __fastcall Scaleform::BufferedFile::GetLength(Scaleform::BufferedFile *this)
{
  __int64 result; // rax
  unsigned int v3; // ebx
  unsigned int v4; // eax

  result = ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->GetLength)(this->pFile.pObject);
  v3 = result;
  if ( (_DWORD)result != -1 && this->BufferMode == WriteBuffer )
  {
    v4 = this->Pos + ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->Tell)(this->pFile.pObject);
    if ( (int)v4 > (int)v3 )
      return v4;
    return v3;
  }
  return result;
}

__int64 __fastcall Scaleform::DelegatedFile::GetLength(Scaleform::DelegatedFile *this)
{
  return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->GetLength)(this->pFile.pObject);
}

const char *__fastcall Scaleform::GetShortFilename(const char *purl)
{
  __int64 v2; // rax
  const char *v3; // rcx

  v2 = -1i64;
  do
    ++v2;
  while ( purl[v2] );
  if ( !v2 )
    return purl;
  v3 = &purl[v2];
  while ( *v3 != 92 && *v3 != 47 )
  {
    if ( --v3 == purl )
      return purl;
  }
  return v3 + 1;
}

bool __fastcall Scaleform::DelegatedFile::IsValid(Scaleform::SysFile *this)
{
  Scaleform::File *pObject; // rcx

  pObject = this->pFile.pObject;
  return pObject && pObject->IsValid(pObject);
}

__int64 __fastcall Scaleform::Render::WrapperImageSource::GetImageType(Scaleform::Render::MorphInterpolator *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::ShapeDataInterface *))this->pShapeData.pObject->GetStrokeStyleCount)(this->pShapeData.pObject);
}

__int64 __fastcall Scaleform::BufferedFile::LGetLength(Scaleform::BufferedFile *this)
{
  __int64 result; // rax
  __int64 v3; // rbx
  __int64 v4; // rax

  result = this->pFile.pObject->LGetLength(this->pFile.pObject);
  v3 = result;
  if ( result != -1 && this->BufferMode == WriteBuffer )
  {
    v4 = this->Pos + this->pFile.pObject->LTell(this->pFile.pObject);
    if ( v4 > v3 )
      return v4;
    return v3;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::WrapperImageSource::GetMipmapCount(Scaleform::DelegatedFile *this)
{
  return this->pFile.pObject->LGetLength(this->pFile.pObject);
}

__int64 __fastcall Scaleform::BufferedFile::LSeek(Scaleform::BufferedFile *this, __int64 offset, int origin)
{
  int v3; // esi
  __int64 v4; // rdi
  __int64 Pos; // r8
  __int64 DataSize; // rax
  unsigned int v8; // edx
  __int64 result; // rax
  __int64 v10; // rcx
  unsigned __int64 v11; // rcx

  v3 = origin;
  v4 = offset;
  if ( this->BufferMode != ReadBuffer )
    goto LABEL_10;
  if ( origin == 1 )
  {
    Pos = this->Pos;
    DataSize = this->DataSize;
    v8 = Pos + offset;
    if ( v8 <= (unsigned int)DataSize )
    {
      this->Pos = v8;
      return v8 + this->FilePos - (unsigned int)DataSize;
    }
    v10 = this->FilePos - DataSize;
    *(_QWORD *)&this->Pos = 0i64;
    v3 = 0;
    v4 += v10 + Pos;
    goto LABEL_11;
  }
  if ( origin )
  {
LABEL_10:
    Scaleform::BufferedFile::FlushBuffer(this);
  }
  else
  {
    v11 = this->DataSize;
    if ( offset + (unsigned int)v11 - this->FilePos <= v11 )
    {
      result = offset;
      this->Pos = offset + v11 - LODWORD(this->FilePos);
      return result;
    }
    *(_QWORD *)&this->Pos = 0i64;
  }
LABEL_11:
  result = this->pFile.pObject->LSeek(this->pFile.pObject, v4, v3);
  this->FilePos = result;
  return result;
}

__int64 __fastcall Scaleform::Render::TextureImage::Unmap(Scaleform::Render::TextureImage *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Texture *volatile))this->pTexture.Value->Unmap)(this->pTexture.Value);
}

unsigned __int64 __fastcall Scaleform::BufferedFile::LTell(Scaleform::BufferedFile *this)
{
  unsigned __int64 result; // rax

  if ( this->BufferMode == ReadBuffer )
    return this->FilePos + this->Pos - (unsigned __int64)this->DataSize;
  result = this->pFile.pObject->LTell(this->pFile.pObject);
  if ( result != -1i64 && this->BufferMode == WriteBuffer )
    result += this->Pos;
  return result;
}

__int64 __fastcall Scaleform::DelegatedFile::LTell(Scaleform::DelegatedFile *this)
{
  return this->pFile.pObject->LTell(this->pFile.pObject);
}

__int64 __fastcall Scaleform::BufferedFile::Read(
        Scaleform::BufferedFile *this,
        unsigned __int8 *pdestBuffer,
        int numBytes)
{
  size_t v3; // rsi
  unsigned int Pos; // eax
  unsigned __int8 *v7; // rdx
  int v8; // er14
  __int64 result; // rax
  unsigned __int8 *v10; // rbp
  int v11; // eax
  signed int v12; // eax
  __int64 v13; // rdx

  v3 = numBytes;
  if ( this->BufferMode != ReadBuffer )
  {
    if ( !this->pBuffer )
    {
      result = ((__int64 (__fastcall *)(Scaleform::File *, unsigned __int8 *, _QWORD))this->pFile.pObject->Read)(
                 this->pFile.pObject,
                 pdestBuffer,
                 (unsigned int)numBytes);
      if ( (int)result > 0 )
        this->FilePos += (int)result;
      return result;
    }
    Scaleform::BufferedFile::FlushBuffer(this);
    *(_QWORD *)&this->BufferMode = 1i64;
    this->DataSize = 0;
  }
  Pos = this->Pos;
  v7 = &this->pBuffer[Pos];
  v8 = this->DataSize - Pos;
  if ( v8 >= (int)v3 )
  {
    memmove(pdestBuffer, v7, v3);
    result = (unsigned int)v3;
LABEL_21:
    this->Pos += v3;
    return result;
  }
  memmove(pdestBuffer, v7, v8);
  v10 = &pdestBuffer[v8];
  LODWORD(v3) = v3 - v8;
  this->Pos = this->DataSize;
  if ( (int)v3 <= 4096 )
  {
    if ( this->BufferMode == ReadBuffer )
    {
      v12 = this->pFile.pObject->Read(this->pFile.pObject, this->pBuffer, 8184);
      this->Pos = 0;
      if ( v12 < 0 )
        v12 = 0;
      this->FilePos += (unsigned int)v12;
      this->DataSize = v12;
    }
    v13 = this->Pos;
    if ( (signed int)(this->DataSize - v13) < (int)v3 )
      LODWORD(v3) = this->DataSize - v13;
    memmove(v10, &this->pBuffer[v13], (int)v3);
    result = (unsigned int)(v8 + v3);
    goto LABEL_21;
  }
  v11 = this->pFile.pObject->Read(this->pFile.pObject, v10, v3);
  if ( v11 > 0 )
  {
    this->FilePos += v11;
    *(_QWORD *)&this->Pos = 0i64;
  }
  if ( v11 == -1 )
    v11 = 0;
  return (unsigned int)(v8 + v11);
}

__int64 __fastcall Scaleform::DelegatedFile::Read(
        Scaleform::DelegatedFile *this,
        unsigned __int8 *pbuffer,
        __int64 numBytes)
{
  return ((__int64 (__fastcall *)(Scaleform::File *, unsigned __int8 *, __int64))this->pFile.pObject->Read)(
           this->pFile.pObject,
           pbuffer,
           numBytes);
}

__int64 __fastcall Scaleform::BufferedFile::Seek(Scaleform::BufferedFile *this, int offset, int origin)
{
  int v3; // esi
  __int64 v4; // rdi
  unsigned int Pos; // er8
  __int64 DataSize; // rdx
  __int64 v8; // rcx
  __int64 v9; // rax
  __int64 result; // rax
  int v11; // eax
  unsigned __int64 v12; // rdx

  v3 = origin;
  v4 = (unsigned int)offset;
  if ( this->BufferMode != ReadBuffer )
    goto LABEL_10;
  if ( origin == 1 )
  {
    Pos = this->Pos;
    DataSize = this->DataSize;
    v8 = Pos + (unsigned int)v4;
    if ( (unsigned int)v8 <= (unsigned int)DataSize )
    {
      v9 = this->FilePos - DataSize;
      this->Pos = v8;
      return v8 + v9;
    }
    v11 = LODWORD(this->FilePos) - DataSize;
    *(_QWORD *)&this->Pos = 0i64;
    v3 = 0;
    LODWORD(v4) = Pos + v11 + v4;
    goto LABEL_11;
  }
  if ( origin )
  {
LABEL_10:
    Scaleform::BufferedFile::FlushBuffer(this);
  }
  else
  {
    v12 = this->DataSize;
    if ( v12 + v4 - this->FilePos <= v12 )
    {
      result = (unsigned int)v4;
      this->Pos = v4 + v12 - LODWORD(this->FilePos);
      return result;
    }
    *(_QWORD *)&this->Pos = 0i64;
  }
LABEL_11:
  LODWORD(result) = this->pFile.pObject->Seek(this->pFile.pObject, v4, v3);
  this->FilePos = (int)result;
  return (unsigned int)result;
}

__int64 __fastcall Scaleform::Render::TextureImage::Map(
        Scaleform::Render::TextureImage *this,
        Scaleform::Render::ImageData *pdata,
        __int64 mipLevel,
        __int64 levelCount)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::Texture *volatile, Scaleform::Render::ImageData *, __int64, __int64))this->pTexture.Value->Map)(
           this->pTexture.Value,
           pdata,
           mipLevel,
           levelCount);
}

__int64 __fastcall Scaleform::BufferedFile::SkipBytes(Scaleform::BufferedFile *this, int numBytes)
{
  int v2; // ebx
  unsigned int Pos; // eax
  int v5; // eax

  v2 = 0;
  if ( this->BufferMode == ReadBuffer )
  {
    Pos = this->Pos;
    v2 = this->DataSize - Pos;
    if ( v2 >= numBytes )
      v2 = numBytes;
    this->Pos = v2 + Pos;
    numBytes -= v2;
  }
  if ( numBytes )
  {
    v5 = ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->SkipBytes)(this->pFile.pObject);
    if ( v5 != -1 )
    {
      *(_QWORD *)&this->Pos = 0i64;
      this->FilePos += v5;
      return (unsigned int)(v5 + v2);
    }
    if ( v2 <= 0 )
      return (unsigned int)-1;
  }
  return (unsigned int)v2;
}

__int64 __fastcall Scaleform::DelegatedFile::SkipBytes(Scaleform::DelegatedFile *this, __int64 numBytes)
{
  return ((__int64 (__fastcall *)(Scaleform::File *, __int64))this->pFile.pObject->SkipBytes)(
           this->pFile.pObject,
           numBytes);
}

__int64 __fastcall Scaleform::BufferedFile::Tell(Scaleform::BufferedFile *this)
{
  __int64 result; // rax

  if ( this->BufferMode == ReadBuffer )
    return LODWORD(this->FilePos) + this->Pos - this->DataSize;
  result = ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->Tell)(this->pFile.pObject);
  if ( (_DWORD)result != -1 && this->BufferMode == WriteBuffer )
    return (unsigned int)(this->Pos + result);
  return result;
}

__int64 __fastcall Scaleform::Render::WrapperImageSource::GetFormat(Scaleform::DelegatedFile *this)
{
  return ((__int64 (__fastcall *)(Scaleform::File *))this->pFile.pObject->Tell)(this->pFile.pObject);
}

__int64 __fastcall Scaleform::BufferedFile::Write(
        Scaleform::BufferedFile *this,
        const unsigned __int8 *psourceBuffer,
        int numBytes)
{
  size_t v3; // rdi
  Scaleform::File *pObject; // rcx
  unsigned int Pos; // edx
  unsigned int DataSize; // er8
  __int64 result; // rax

  v3 = numBytes;
  if ( this->BufferMode != WriteBuffer )
  {
    if ( !this->pBuffer )
      goto LABEL_14;
    Scaleform::BufferedFile::FlushBuffer(this);
    pObject = this->pFile.pObject;
    if ( !pObject || !pObject->IsWritable(pObject) )
      goto LABEL_14;
    *(_QWORD *)&this->BufferMode = 2i64;
    this->DataSize = 0;
  }
  Pos = this->Pos;
  if ( (int)(8184 - Pos) >= (int)v3 )
    goto LABEL_16;
  if ( this->BufferMode == ReadBuffer )
  {
    DataSize = this->DataSize;
    if ( DataSize > Pos )
      this->FilePos = this->pFile.pObject->LSeek(this->pFile.pObject, (int)(Pos - DataSize), 1);
    *(_QWORD *)&this->Pos = 0i64;
  }
  else if ( this->BufferMode == WriteBuffer )
  {
    this->FilePos += this->pFile.pObject->Write(this->pFile.pObject, this->pBuffer, Pos);
    this->Pos = 0;
  }
  if ( (int)v3 <= 4096 )
  {
LABEL_16:
    memmove(&this->pBuffer[this->Pos], psourceBuffer, v3);
    this->Pos += v3;
    return (unsigned int)v3;
  }
LABEL_14:
  result = ((__int64 (__fastcall *)(Scaleform::File *, const unsigned __int8 *, _QWORD))this->pFile.pObject->Write)(
             this->pFile.pObject,
             psourceBuffer,
             (unsigned int)v3);
  if ( (int)result > 0 )
    this->FilePos += (int)result;
  return result;
}

void __fastcall Scaleform::Render::TextureManager::ServiceCommand::Execute(
        Scaleform::Render::TextureManager::ServiceCommand *this)
{
  this->pManager->ProcessQueues(this->pManager);
}

