#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/sif_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"

class Scaleform::Render::SIF::SIFFileImageSource :
	Scaleform::Render::FileImageSource
{
private:
	Scaleform::Render::ImageData Data; // 0x38
	Scaleform::Render::SIF::SIFHeaderInfo HeaderInfo; // 0x78
public:
	SIFFileImageSource(const Scaleform::Render::SIF::SIFFileImageSource &);
	SIFFileImageSource(Scaleform::File *, Scaleform::Render::ImageFormat);
	virtual ~SIFFileImageSource();
	bool ReadHeader();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual unsigned long GetMipmapCount();
	Scaleform::Render::SIF::SIFFileImageSource & operator=(const Scaleform::Render::SIF::SIFFileImageSource &);
};
Scaleform::Render::SIF::FileReader Scaleform::Render::SIF::FileReader::Instance; // 0x1409F99E0
void(*Scaleform::Render::SIF::FileReader::nstance$initializer$::operator&)(); // 0x140739CE0
Scaleform::Render::SIF::SIFFileImageSource::SIFFileImageSource(Scaleform::File * file, Scaleform::Render::ImageFormat format); // 0x14037CF80
unsigned long Scaleform::Render::SIF::SIFFileImageSource::GetMipmapCount(); // 0x14037D380
bool Scaleform::Render::SIF::SIFFileImageSource::ReadHeader(); // 0x14037D3A0
bool Scaleform::Render::SIF::SIFFileImageSource::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x14037D080
bool Scaleform::Render::SIF::FileReader::MatchFormat(Scaleform::File * file, unsigned char * headerArg, unsigned long long headerArgSize); // 0x14037CE70
class Scaleform::Render::FileHeaderReader<4> :
	Scaleform::Render::FileHeaderReaderImpl
{
private:
	unsigned char Buffer[4]; // 0x8
public:
	FileHeaderReader<4>(Scaleform::File *, unsigned char *, unsigned long long);
	unsigned char operator[](unsigned long);
	bool operator bool();
	bool operator!();
};
Scaleform::Render::ImageSource * Scaleform::Render::SIF::FileReader::ReadImageSource(Scaleform::File * file, const Scaleform::Render::ImageCreateArgs & args); // 0x14037CEF0//decompilation failure at 1409F99E0!
//decompilation failure at 140739CE0!
void __fastcall Scaleform::Render::SIF::SIFFileImageSource::SIFFileImageSource(
        Scaleform::Render::SIF::SIFFileImageSource *this,
        Scaleform::File *file,
        Scaleform::Render::ImageFormat format)
{
  Scaleform::Render::FileImageSource::FileImageSource(this, file, format, 0i64);
  this->__vftable = (Scaleform::Render::SIF::SIFFileImageSource_vtbl *)&Scaleform::Render::SIF::SIFFileImageSource::`vftable';
  this->Data.pPlanes = &this->Data.Plane0;
  *(_QWORD *)&this->Data.Format = 0i64;
  *(_DWORD *)&this->Data.Flags = 0x10000;
  this->Data.pPalette.pObject = 0i64;
  *(_QWORD *)&this->Data.Plane0.Width = 0i64;
  this->Data.Plane0.Pitch = 0i64;
  this->Data.Plane0.DataSize = 0i64;
  this->Data.Plane0.pData = 0i64;
}

bool __fastcall Scaleform::Render::SIF::SIFFileImageSource::Decode(
        Scaleform::Render::SIF::SIFFileImageSource *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  bool result; // al
  Scaleform::File *pObject; // rcx
  Scaleform::File *v8; // rcx
  Scaleform::Render::ImagePlane *pPlanes; // rcx
  unsigned __int64 DataSize; // rdx
  unsigned __int64 v11; // rbx
  Scaleform::File *v12; // rcx
  unsigned __int16 v13; // r15
  Scaleform::File *v14; // rcx
  Scaleform::File *v15; // rcx
  Scaleform::File *v16; // rcx
  Scaleform::File *v17; // rcx
  Scaleform::Render::ImagePlane *v18; // rcx
  unsigned __int64 v19; // rbx
  __int64 v20; // rsi
  Scaleform::File *v21; // rcx
  Scaleform::File *v22; // rcx
  __int64 v23; // rsi
  Scaleform::File *v24; // rcx
  Scaleform::Render::Palette *v25; // rax
  Scaleform::Render::Palette *v26; // r15
  Scaleform::Render::Palette *v27; // rbx
  __int64 v28; // rbx
  Scaleform::File *v29; // rcx
  Scaleform::Render::Palette *v30; // rbx
  int v31; // [rsp+20h] [rbp-20h] BYREF
  int v32[3]; // [rsp+24h] [rbp-1Ch] BYREF

  result = Scaleform::Render::FileImageSource::seekFileToDecodeStart(this);
  if ( result )
  {
    pdest->Flags |= this->HeaderInfo.Flags;
    pObject = this->pFile.pObject;
    v32[0] = 0;
    pObject->Read(pObject, (unsigned __int8 *)v32, 4);
    v8 = this->pFile.pObject;
    v31 = 0;
    v8->Read(v8, (unsigned __int8 *)&v31, 4);
    pPlanes = pdest->pPlanes;
    DataSize = pPlanes->DataSize;
    if ( DataSize != v31 || pPlanes->Pitch != v32[0] )
      return 0;
    v11 = 0i64;
    if ( DataSize )
    {
      do
      {
        v12 = this->pFile.pObject;
        LOBYTE(v31) = 0;
        v12->Read(v12, (unsigned __int8 *)&v31, 1);
        pdest->pPlanes->pData[v11++] = v31;
      }
      while ( v11 < pdest->pPlanes->DataSize );
    }
    v13 = 1;
    if ( pdest->RawPlaneCount <= 1u )
    {
LABEL_12:
      v22 = this->pFile.pObject;
      LOWORD(v31) = 0;
      v22->Read(v22, (unsigned __int8 *)&v31, 2);
      LOWORD(v23) = v31;
      if ( (_WORD)v31 )
      {
        v24 = this->pFile.pObject;
        LOBYTE(v31) = 0;
        v24->Read(v24, (unsigned __int8 *)&v31, 1);
        v25 = Scaleform::Render::Palette::Create((unsigned __int16)v23, (_BYTE)v31 != 0, 0i64);
        v26 = v25;
        if ( v25 )
          Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&v25->RefCount.Value, 1);
        v27 = pdest->pPalette.pObject;
        if ( v27
          && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                             &pdest->pPalette.pObject->RefCount.Value,
                             -1) == 1 )
        {
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v27);
        }
        pdest->pPalette.pObject = v26;
        if ( (_WORD)v23 )
        {
          v28 = 8i64;
          v23 = (unsigned __int16)v23;
          do
          {
            v29 = this->pFile.pObject;
            v32[0] = 0;
            v29->Read(v29, (unsigned __int8 *)v32, 4);
            v28 += 4i64;
            *(_DWORD *)((char *)pdest->pPalette.pObject + v28 - 4) = v32[0];
            --v23;
          }
          while ( v23 );
          return 1;
        }
      }
      else
      {
        v30 = pdest->pPalette.pObject;
        if ( v30
          && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                             &pdest->pPalette.pObject->RefCount.Value,
                             -1) == 1 )
        {
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v30);
        }
        pdest->pPalette.pObject = 0i64;
      }
      return 1;
    }
    while ( 1 )
    {
      v14 = this->pFile.pObject;
      v32[0] = 0;
      v14->Read(v14, (unsigned __int8 *)v32, 4);
      v15 = this->pFile.pObject;
      v32[0] = 0;
      v15->Read(v15, (unsigned __int8 *)v32, 4);
      v16 = this->pFile.pObject;
      v31 = 0;
      v16->Read(v16, (unsigned __int8 *)&v31, 4);
      v17 = this->pFile.pObject;
      v32[0] = 0;
      v17->Read(v17, (unsigned __int8 *)v32, 4);
      v18 = pdest->pPlanes;
      if ( v18->DataSize != v32[0] || v18->Pitch != v31 )
        return 0;
      v19 = 0i64;
      v20 = v13;
      if ( v18[v20].DataSize )
      {
        do
        {
          v21 = this->pFile.pObject;
          LOBYTE(v31) = 0;
          v21->Read(v21, (unsigned __int8 *)&v31, 1);
          pdest->pPlanes[v20].pData[v19++] = v31;
        }
        while ( v19 < pdest->pPlanes[v20].DataSize );
      }
      if ( ++v13 >= pdest->RawPlaneCount )
        goto LABEL_12;
    }
  }
  return result;
}

__int64 __fastcall Scaleform::Render::DICommand_FillRect::GetType(Scaleform::Render::DICommand_FillRect *this)
{
  return 11i64;
}

__int64 __fastcall Scaleform::Render::SIF::SIFFileImageSource::GetMipmapCount(
        Scaleform::Render::SIF::SIFFileImageSource *this)
{
  __int64 result; // rax

  result = this->HeaderInfo.LevelCount;
  if ( !this->HeaderInfo.LevelCount )
    return 1i64;
  return result;
}

bool __fastcall Scaleform::Render::SIF::FileReader::MatchFormat(
        Scaleform::Render::SIF::FileReader *this,
        Scaleform::File *file,
        unsigned __int8 *headerArg,
        unsigned __int64 headerArgSize)
{
  Scaleform::Render::FileHeaderReaderImpl v5; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 tempBuffer[8]; // [rsp+38h] [rbp-20h] BYREF

  Scaleform::Render::FileHeaderReaderImpl::FileHeaderReaderImpl(&v5, file, headerArg, headerArgSize, tempBuffer, 4u);
  return v5.pHeader && *v5.pHeader == 83 && v5.pHeader[1] == 73 && v5.pHeader[2] == 70 && v5.pHeader[3] == 32;
}

char __fastcall Scaleform::Render::SIF::SIFFileImageSource::ReadHeader(
        Scaleform::Render::SIF::SIFFileImageSource *this)
{
  Scaleform::File *pObject; // rcx
  Scaleform::File *v4; // rcx
  Scaleform::Render::ImageFormat v5; // eax
  Scaleform::File *v6; // rcx
  Scaleform::File *v7; // rcx
  Scaleform::File *v8; // rcx
  unsigned __int8 v9; // al
  Scaleform::File *v10; // rcx
  bool v11; // zf
  __int16 v12; // ax
  Scaleform::File *v13; // rcx
  Scaleform::File *v14; // rcx
  unsigned int Width; // eax
  unsigned int v16; // ecx
  unsigned __int32 v17; // [rsp+30h] [rbp+10h] BYREF
  char Str1; // [rsp+38h] [rbp+18h] BYREF

  this->pFile.pObject->Read(this->pFile.pObject, (unsigned __int8 *)&Str1, 4);
  if ( strncmp(&Str1, "SIF ", 4ui64) )
    return 0;
  pObject = this->pFile.pObject;
  LOBYTE(v17) = 0;
  pObject->Read(pObject, (unsigned __int8 *)&v17, 1);
  if ( (_BYTE)v17 != 17 )
    return 0;
  v4 = this->pFile.pObject;
  v17 = 0;
  v4->Read(v4, (unsigned __int8 *)&v17, 4);
  v5 = v17;
  v6 = this->pFile.pObject;
  this->Format = v17;
  this->HeaderInfo.Format = v5;
  v17 = 0;
  v6->Read(v6, (unsigned __int8 *)&v17, 4);
  v7 = this->pFile.pObject;
  this->Use = v17;
  LOBYTE(v17) = 0;
  v7->Read(v7, (unsigned __int8 *)&v17, 1);
  v8 = this->pFile.pObject;
  v9 = v17 & 0xFD;
  LOBYTE(v17) = 0;
  this->HeaderInfo.Flags = v9;
  v8->Read(v8, (unsigned __int8 *)&v17, 1);
  v10 = this->pFile.pObject;
  this->HeaderInfo.LevelCount = v17;
  LOWORD(v17) = 0;
  v10->Read(v10, (unsigned __int8 *)&v17, 2);
  v11 = this->HeaderInfo.Format == Image_ETC1_RGB_4BPP;
  v12 = v17;
  this->HeaderInfo.RawPlaneCount = v17;
  if ( v11 && v12 == 2 )
  {
    this->Format = Image_ETC1A_RGBA_4BPP;
    this->HeaderInfo.Format = Image_ETC1A_RGBA_4BPP;
  }
  v13 = this->pFile.pObject;
  v17 = 0;
  v13->Read(v13, (unsigned __int8 *)&v17, 4);
  v14 = this->pFile.pObject;
  this->HeaderInfo.Width = v17;
  v17 = 0;
  v14->Read(v14, (unsigned __int8 *)&v17, 4);
  Width = this->HeaderInfo.Width;
  v16 = v17;
  this->HeaderInfo.Height = v17;
  this->Size.Width = Width;
  this->Size.Height = v16;
  this->FilePos = this->pFile.pObject->LTell(this->pFile.pObject);
  return 1;
}

Scaleform::Render::SIF::SIFFileImageSource *__fastcall Scaleform::Render::SIF::FileReader::ReadImageSource(
        Scaleform::Render::SIF::FileReader *this,
        Scaleform::File *file,
        const Scaleform::Render::ImageCreateArgs *args)
{
  Scaleform::Render::SIF::SIFFileImageSource *v5; // rax
  Scaleform::Render::SIF::SIFFileImageSource *v6; // rax
  Scaleform::Render::SIF::SIFFileImageSource *v7; // rbx

  if ( !file || !file->IsValid(file) )
    return 0i64;
  v5 = (Scaleform::Render::SIF::SIFFileImageSource *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       144i64,
                                                       0i64);
  if ( !v5 )
    return 0i64;
  Scaleform::Render::SIF::SIFFileImageSource::SIFFileImageSource(v5, file, args->Format);
  v7 = v6;
  if ( v6 && !Scaleform::Render::SIF::SIFFileImageSource::ReadHeader(v6) )
  {
    v7->Release(v7);
    return 0i64;
  }
  return v7;
}

