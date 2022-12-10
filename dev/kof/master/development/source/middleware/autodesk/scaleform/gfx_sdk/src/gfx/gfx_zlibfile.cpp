#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_zlibfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"

class Scaleform::GFx::ZLibFileImpl :
	Scaleform::NewOverrideBase<2>
{
public:
	Scaleform::Ptr<Scaleform::File> pIn; // 0x0
	z_stream_s ZStream; // 0x8
	long InitialStreamPos; // 0x60
	long LogicalStreamPos; // 0x64
	bool AtEofFlag; // 0x68
	long ErrorCode; // 0x6C
	enum ZLibConstants
	{
		ZLib_BuffSize = 4096,
		ZLib_BacktrackSize = 4096,
	};
	long UserPos; // 0x70
	long BacktrackTail; // 0x74
	long BacktrackSize; // 0x78
	unsigned char BacktrackBuffer[4096]; // 0x7C
	unsigned char DataBuffer[4096]; // 0x107C
	ZLibFileImpl(const Scaleform::GFx::ZLibFileImpl &);
	ZLibFileImpl(Scaleform::File *);
	~ZLibFileImpl();
	void Reset();
	long Inflate(void *, long);
	long SetPosition(long);
	long InflateFromStream(void *, long);
	void RewindUnusedBytes();
	Scaleform::GFx::ZLibFileImpl & operator=(const Scaleform::GFx::ZLibFileImpl &);
};
typedef z_stream_s z_stream;
Scaleform::GFx::ZLibFileImpl::ZLibFileImpl(Scaleform::File * pin); // 0x1403BD8D0
void Scaleform::GFx::ZLibFileImpl::Reset(); // 0x1403BDF30
long Scaleform::GFx::ZLibFileImpl::Inflate(void * dst, long bytes); // 0x1403BDC30
long Scaleform::GFx::ZLibFileImpl::SetPosition(long offset); // 0x1403BE030
long Scaleform::GFx::ZLibFileImpl::InflateFromStream(void * dst, long bytes); // 0x1403BDE20
Scaleform::GFx::ZLibFile::ZLibFile(Scaleform::File * psourceFile); // 0x1403BD830
Scaleform::GFx::ZLibFile::~ZLibFile(); // 0x1403BD9A0
const char * Scaleform::GFx::ZLibFile::GetFilePath(); // 0x1403BDBB0
bool Scaleform::GFx::ZLibFile::IsValid(); // 0x1403BDEC0
long Scaleform::GFx::ZLibFile::Tell(); // 0x1403BE0F0
long long Scaleform::GFx::ZLibFile::LTell(); // 0x1403BDEF0
long Scaleform::GFx::ZLibFile::GetLength(); // 0x1403BDBD0
long long Scaleform::GFx::ZLibFile::LGetLength(); // 0x1403BDED0
long Scaleform::GFx::ZLibFile::GetErrorCode(); // 0x1403BDBA0
long Scaleform::GFx::ZLibFile::CopyFromStream(Scaleform::File * pstream, long byteSize); // 0x1400470F0
long Scaleform::GFx::ZLibFile::Read(unsigned char * pbuffer, long numBytes); // 0x1403BDF10
long Scaleform::GFx::ZLibFile::SkipBytes(long numBytes); // 0x1403BE0E0
long Scaleform::GFx::ZLibFile::BytesAvailable(); // 0x1403BDA90
bool Scaleform::GFx::ZLibFile::Flush(); // 0x1400B8180
long Scaleform::GFx::ZLibFile::Seek(long offset, long origin); // 0x1403BDFB0
long long Scaleform::GFx::ZLibFile::LSeek(long long offset, long origin); // 0x1402F0140
bool Scaleform::GFx::ZLibFile::Close(); // 0x1403BDAF0
void * Scaleform::GFx::ZLibAllocFunc(void * opaque, unsigned long items, unsigned long size); // 0x1403BE110
void Scaleform::GFx::ZLibFreeFunc(void * __formal, void * address); // 0x1403BE130
long Scaleform::GFx::ZLibFile::ZLib_InitStream(z_stream_s * pstream, void * pallocowner, void * pbuffer, unsigned long bufferSize); // 0x1403BE140void __fastcall Scaleform::GFx::ZLibFile::ZLibFile(Scaleform::GFx::ZLibFile *this, Scaleform::File *psourceFile)
{
  Scaleform::GFx::ZLibFileImpl *v2; // rsi
  Scaleform::GFx::ZLibFileImpl *v5; // rax
  Scaleform::GFx::ZLibFileImpl *v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0i64;
  this->__vftable = (Scaleform::GFx::ZLibFile_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::GFx::ZLibFile_vtbl *)&Scaleform::GFx::ZLibFile::`vftable';
  this->RefCount = 1;
  this->pImpl = 0i64;
  if ( psourceFile && psourceFile->IsValid(psourceFile) )
  {
    v7 = 2;
    v5 = (Scaleform::GFx::ZLibFileImpl *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                           Scaleform::Memory::pGlobalHeap,
                                           this,
                                           8320i64,
                                           &v7);
    if ( v5 )
    {
      Scaleform::GFx::ZLibFileImpl::ZLibFileImpl(v5, psourceFile);
      v2 = v6;
    }
    this->pImpl = v2;
  }
}

void __fastcall Scaleform::GFx::ZLibFileImpl::ZLibFileImpl(Scaleform::GFx::ZLibFileImpl *this, Scaleform::File *pin)
{
  int v4; // eax

  this->pIn.pObject = 0i64;
  if ( pin )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pin);
  if ( this->pIn.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->pIn.pObject);
  this->pIn.pObject = pin;
  v4 = pin->Tell(pin);
  this->LogicalStreamPos = 0;
  this->InitialStreamPos = v4;
  this->AtEofFlag = 0;
  this->ErrorCode = 0;
  this->ZStream.zalloc = Scaleform::GFx::ZLibAllocFunc;
  this->ZStream.zfree = Scaleform::GFx::ZLibFreeFunc;
  this->ZStream.opaque = this;
  this->ZStream.next_in = 0i64;
  this->ZStream.avail_in = 0;
  this->ZStream.next_out = 0i64;
  this->ZStream.avail_out = 0;
  *(_QWORD *)&this->ZStream.data_type = 0i64;
  this->ZStream.reserved = 0;
  if ( (unsigned int)inflateInit_(&this->ZStream, "1.2.7", 88i64) )
  {
    this->ErrorCode = 1;
  }
  else
  {
    *(_QWORD *)&this->BacktrackTail = 0i64;
    this->UserPos = 0;
  }
}

void __fastcall Scaleform::GFx::ZLibFile::~ZLibFile(Scaleform::GFx::ZLibFile *this)
{
  Scaleform::GFx::ZLibFileImpl *pImpl; // rdi
  int v3; // eax
  Scaleform::RefCountVImpl **v4; // rdi

  pImpl = this->pImpl;
  this->__vftable = (Scaleform::GFx::ZLibFile_vtbl *)&Scaleform::GFx::ZLibFile::`vftable';
  if ( pImpl )
  {
    if ( pImpl->ZStream.avail_in )
    {
      v3 = pImpl->pIn.pObject->Tell(pImpl->pIn.pObject);
      pImpl->pIn.pObject->Seek(pImpl->pIn.pObject, v3 - pImpl->ZStream.avail_in, 0);
    }
    inflateEnd(&this->pImpl->ZStream);
    v4 = (Scaleform::RefCountVImpl **)this->pImpl;
    if ( v4 )
    {
      if ( *v4 )
        Scaleform::RefCountImpl::Release(*v4);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v4);
    }
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

__int64 __fastcall Scaleform::GFx::ZLibFile::BytesAvailable(Scaleform::GFx::ZLibFile *this)
{
  Scaleform::GFx::ZLibFileImpl *pImpl; // rax
  int UserPos; // edi
  int v5; // ebx

  pImpl = this->pImpl;
  if ( !pImpl || pImpl->ErrorCode )
    return 0i64;
  UserPos = pImpl->UserPos;
  v5 = this->Seek(this, 0, 2);
  this->Seek(this, UserPos, 0);
  return (unsigned int)(v5 - UserPos);
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

bool __fastcall Scaleform::GFx::ZLibFile::Close(Scaleform::GFx::ZLibFile *this)
{
  Scaleform::GFx::ZLibFileImpl *pImpl; // rdi
  int v4; // eax
  int v5; // esi
  Scaleform::RefCountVImpl **v6; // rdi

  pImpl = this->pImpl;
  if ( !pImpl )
    return 0;
  if ( pImpl->ZStream.avail_in )
  {
    v4 = pImpl->pIn.pObject->Tell(pImpl->pIn.pObject);
    pImpl->pIn.pObject->Seek(pImpl->pIn.pObject, v4 - pImpl->ZStream.avail_in, 0);
  }
  v5 = inflateEnd(&this->pImpl->ZStream);
  this->pImpl->pIn.pObject->Close(this->pImpl->pIn.pObject);
  v6 = (Scaleform::RefCountVImpl **)this->pImpl;
  if ( v6 )
  {
    if ( *v6 )
      Scaleform::RefCountImpl::Release(*v6);
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
  }
  this->pImpl = 0i64;
  return v5 == 0;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

Scaleform::GFx::ZLibFileImpl *__fastcall Scaleform::GFx::ZLibFile::GetErrorCode(Scaleform::GFx::ZLibFile *this)
{
  Scaleform::GFx::ZLibFileImpl *result; // rax

  result = this->pImpl;
  if ( result )
    return (Scaleform::GFx::ZLibFileImpl *)(unsigned int)result->ErrorCode;
  return result;
}

const char *__fastcall Scaleform::GFx::ZLibFile::GetFilePath(Scaleform::GFx::ZLibFile *this)
{
  Scaleform::GFx::ZLibFileImpl *pImpl; // rcx

  pImpl = this->pImpl;
  if ( pImpl )
    return pImpl->pIn.pObject->GetFilePath(pImpl->pIn.pObject);
  else
    return 0i64;
}

__int64 __fastcall Scaleform::GFx::ZLibFile::GetLength(Scaleform::GFx::ZLibFile *this)
{
  Scaleform::GFx::ZLibFileImpl *pImpl; // rax
  int UserPos; // edi
  unsigned int v5; // ebx

  pImpl = this->pImpl;
  if ( !pImpl || pImpl->ErrorCode )
    return 0i64;
  UserPos = pImpl->UserPos;
  v5 = this->Seek(this, 0, 2);
  this->Seek(this, UserPos, 0);
  return v5;
}

__int64 __fastcall Scaleform::GFx::ZLibFileImpl::Inflate(Scaleform::GFx::ZLibFileImpl *this, void *dst, int bytes)
{
  int UserPos; // eax
  unsigned int v4; // er13
  int LogicalStreamPos; // er14
  int v6; // er15
  int BacktrackTail; // edx
  int v10; // er14
  int v11; // er12
  int v12; // edi
  int BacktrackSize; // eax
  int v14; // eax
  int v15; // edi
  unsigned __int8 *BacktrackBuffer; // rcx
  __int128 *v17; // rax
  __int64 v18; // rdx
  __int128 v19; // xmm0
  __int64 result; // rax
  int v21; // er14
  int v22; // eax
  int v23; // ecx

  UserPos = this->UserPos;
  v4 = 0;
  LogicalStreamPos = this->LogicalStreamPos;
  v6 = bytes;
  if ( UserPos < LogicalStreamPos )
  {
    BacktrackTail = this->BacktrackTail;
    v10 = LogicalStreamPos - UserPos;
    v11 = v10;
    if ( v10 > bytes )
      v11 = bytes;
    v4 = v11;
    v12 = v11;
    if ( v10 > BacktrackTail )
    {
      BacktrackSize = this->BacktrackSize;
      if ( v10 - BacktrackTail <= v11 )
        v12 = v10 - BacktrackTail;
      memmove(dst, &this->BacktrackBuffer[BacktrackTail + BacktrackSize - v10], v12);
      v11 -= v12;
      v10 -= v12;
      dst = (char *)dst + v12;
      v12 = v4;
    }
    if ( v11 > 0 )
    {
      memmove(dst, &this->BacktrackBuffer[this->BacktrackTail - v10], v11);
      dst = (char *)dst + v11;
    }
    v6 -= v12;
    this->UserPos += v12;
  }
  if ( v6 <= 0 )
    return v4;
  v14 = Scaleform::GFx::ZLibFileImpl::InflateFromStream(this, dst, v6);
  v15 = v14;
  if ( v14 < 4096 )
  {
    if ( v14 > 0 )
    {
      v21 = v14;
      if ( 4096 - this->BacktrackTail < v14 )
        v21 = 4096 - this->BacktrackTail;
      if ( v21 > 0 )
      {
        memmove(&this->BacktrackBuffer[this->BacktrackTail], dst, v21);
        dst = (char *)dst + v21;
        this->BacktrackTail += v21;
      }
      if ( v15 > v21 )
      {
        this->BacktrackTail = v15 - v21;
        memmove(this->BacktrackBuffer, dst, v15 - v21);
      }
      v22 = this->BacktrackSize;
      if ( v22 < 4096 )
      {
        v23 = v22 + v15;
        if ( v22 + v15 > 4096 )
          v23 = 4096;
        this->BacktrackSize = v23;
      }
    }
    result = v15 + v4;
    this->UserPos = this->LogicalStreamPos;
  }
  else
  {
    this->BacktrackTail = 4096;
    BacktrackBuffer = this->BacktrackBuffer;
    v17 = (__int128 *)((char *)dst + v14 - 4096);
    this->BacktrackSize = 4096;
    v18 = 32i64;
    do
    {
      BacktrackBuffer += 128;
      v19 = *v17;
      v17 += 8;
      *((_OWORD *)BacktrackBuffer - 8) = v19;
      *((_OWORD *)BacktrackBuffer - 7) = *(v17 - 7);
      *((_OWORD *)BacktrackBuffer - 6) = *(v17 - 6);
      *((_OWORD *)BacktrackBuffer - 5) = *(v17 - 5);
      *((_OWORD *)BacktrackBuffer - 4) = *(v17 - 4);
      *((_OWORD *)BacktrackBuffer - 3) = *(v17 - 3);
      *((_OWORD *)BacktrackBuffer - 2) = *(v17 - 2);
      *((_OWORD *)BacktrackBuffer - 1) = *(v17 - 1);
      --v18;
    }
    while ( v18 );
    result = v15 + v4;
    this->UserPos = this->LogicalStreamPos;
  }
  return result;
}

__int64 __fastcall Scaleform::GFx::ZLibFileImpl::InflateFromStream(
        Scaleform::GFx::ZLibFileImpl *this,
        void *dst,
        int bytes)
{
  unsigned int v6; // eax
  int v7; // eax
  unsigned int v8; // esi

  if ( this->ErrorCode )
    return 0i64;
  this->ZStream.next_out = (unsigned __int8 *)dst;
  this->ZStream.avail_out = bytes;
  while ( 1 )
  {
    if ( !this->ZStream.avail_in )
    {
      v6 = this->pIn.pObject->Read(this->pIn.pObject, this->DataBuffer, 4096);
      if ( !v6 )
        goto LABEL_13;
      this->ZStream.next_in = this->DataBuffer;
      this->ZStream.avail_in = v6;
    }
    v7 = inflate(&this->ZStream, 2i64);
    if ( v7 == 1 )
      break;
    if ( v7 )
    {
      this->ErrorCode = 1;
      goto LABEL_13;
    }
    if ( !this->ZStream.avail_out )
      goto LABEL_13;
  }
  this->AtEofFlag = 1;
LABEL_13:
  v8 = bytes - this->ZStream.avail_out;
  this->LogicalStreamPos += v8;
  return v8;
}

bool __fastcall Scaleform::GFx::ZLibFile::IsValid(Scaleform::GFx::ZLibFile *this)
{
  return this->pImpl != 0i64;
}

__int64 __fastcall Scaleform::GFx::ZLibFile::LGetLength(Scaleform::FILEFile *this)
{
  return this->GetLength(this);
}

__int64 __fastcall Scaleform::GFx::ZLibFile::LSeek(Scaleform::FILEFile *this, __int64 offset, __int64 origin)
{
  return this->Seek(this, offset, origin);
}

__int64 __fastcall Scaleform::GFx::ZLibFile::LTell(Scaleform::GFx::ZLibFile *this)
{
  return this->Tell(this);
}

__int64 __fastcall Scaleform::GFx::ZLibFile::Read(
        Scaleform::GFx::ZLibFile *this,
        unsigned __int8 *pbuffer,
        int numBytes)
{
  Scaleform::GFx::ZLibFileImpl *pImpl; // rcx

  pImpl = this->pImpl;
  if ( pImpl )
    return Scaleform::GFx::ZLibFileImpl::Inflate(pImpl, pbuffer, numBytes);
  else
    return 0xFFFFFFFFi64;
}

void __fastcall Scaleform::GFx::ZLibFileImpl::Reset(Scaleform::GFx::ZLibFileImpl *this)
{
  Scaleform::File *pObject; // rcx
  __int64 InitialStreamPos; // rdx

  this->ErrorCode = 0;
  this->AtEofFlag = 0;
  if ( (unsigned int)inflateReset(&this->ZStream) )
  {
    this->ErrorCode = 1;
  }
  else
  {
    pObject = this->pIn.pObject;
    InitialStreamPos = (unsigned int)this->InitialStreamPos;
    this->ZStream.next_in = 0i64;
    this->ZStream.avail_in = 0;
    this->ZStream.next_out = 0i64;
    this->ZStream.avail_out = 0;
    pObject->Seek(pObject, InitialStreamPos, 0);
    this->LogicalStreamPos = 0;
    *(_QWORD *)&this->BacktrackTail = 0i64;
    this->UserPos = 0;
  }
}

__int64 __fastcall Scaleform::GFx::ZLibFile::Seek(Scaleform::GFx::ZLibFile *this, int offset, int origin)
{
  Scaleform::GFx::ZLibFileImpl *pImpl; // rcx
  int v7; // er8

  pImpl = this->pImpl;
  if ( !pImpl )
    return 0xFFFFFFFFi64;
  if ( pImpl->ErrorCode )
    return (unsigned int)pImpl->UserPos;
  if ( origin )
  {
    v7 = origin - 1;
    if ( v7 )
    {
      if ( v7 != 1 )
        return (unsigned int)this->pImpl->UserPos;
      Scaleform::GFx::ZLibFileImpl::SetPosition(pImpl, 0x7FFFFFFF);
      if ( !offset )
        return (unsigned int)this->pImpl->UserPos;
      pImpl = this->pImpl;
    }
    offset += pImpl->UserPos;
  }
  Scaleform::GFx::ZLibFileImpl::SetPosition(pImpl, offset);
  return (unsigned int)this->pImpl->UserPos;
}

__int64 __fastcall Scaleform::GFx::ZLibFileImpl::SetPosition(Scaleform::GFx::ZLibFileImpl *this, int offset)
{
  int LogicalStreamPos; // eax
  int v6; // er8
  char dst[4096]; // [rsp+20h] [rbp-1018h] BYREF

  LogicalStreamPos = this->LogicalStreamPos;
  if ( offset >= LogicalStreamPos )
  {
    if ( offset > LogicalStreamPos )
      this->UserPos = LogicalStreamPos;
  }
  else
  {
    if ( offset >= LogicalStreamPos - this->BacktrackSize )
    {
      this->UserPos = offset;
      return (unsigned int)offset;
    }
    Scaleform::GFx::ZLibFileImpl::Reset(this);
  }
  if ( this->UserPos < offset )
  {
    do
    {
      v6 = 4096;
      if ( offset - this->UserPos < 4096 )
        v6 = offset - this->UserPos;
    }
    while ( (unsigned int)Scaleform::GFx::ZLibFileImpl::Inflate(this, dst, v6) && this->UserPos < offset );
  }
  return (unsigned int)this->UserPos;
}

__int64 __fastcall Scaleform::GFx::ZLibFile::SkipBytes(Scaleform::GFx::ZLibFile *this, __int64 numBytes)
{
  return ((__int64 (__fastcall *)(Scaleform::GFx::ZLibFile *, __int64, __int64))this->Seek)(this, numBytes, 1i64);
}

__int64 __fastcall Scaleform::GFx::ZLibFile::Tell(Scaleform::GFx::ZLibFile *this)
{
  Scaleform::GFx::ZLibFileImpl *pImpl; // rax

  pImpl = this->pImpl;
  if ( pImpl )
    return (unsigned int)pImpl->UserPos;
  else
    return 0xFFFFFFFFi64;
}

void *__fastcall Scaleform::GFx::ZLibAllocFunc(void *opaque, unsigned int items, unsigned int size)
{
  return Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, opaque, items * size, 0i64);
}

void __fastcall Scaleform::GFx::ZLibFreeFunc(void *__formal, void *address)
{
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, address);
}

__int64 __fastcall Scaleform::GFx::ZLibFile::ZLib_InitStream(
        z_stream_s *pstream,
        void *pallocowner,
        void *pbuffer,
        unsigned int bufferSize)
{
  pstream->opaque = pallocowner;
  pstream->zalloc = Scaleform::GFx::ZLibAllocFunc;
  pstream->next_out = (unsigned __int8 *)pbuffer;
  pstream->zfree = Scaleform::GFx::ZLibFreeFunc;
  pstream->next_in = 0i64;
  pstream->avail_in = 0;
  pstream->avail_out = bufferSize;
  *(_QWORD *)&pstream->data_type = 0i64;
  pstream->reserved = 0;
  return inflateInit_(pstream, "1.2.7", 88i64);
}

