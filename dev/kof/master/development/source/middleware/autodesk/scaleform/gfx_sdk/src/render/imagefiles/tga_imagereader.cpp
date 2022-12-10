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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/tga_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"

class Scaleform::Render::TGA::TGAFileImageSource :
	Scaleform::Render::FileImageSource
{
private:
	Scaleform::Render::ImageFormat SourceFormat; // 0x38
	unsigned char ImageDesc; // 0x3C
	Scaleform::Ptr<Scaleform::Render::Palette> pColorMap; // 0x40
public:
	TGAFileImageSource(Scaleform::Render::TGA::TGAFileImageSource &);
	TGAFileImageSource(const Scaleform::Render::TGA::TGAFileImageSource &);
	TGAFileImageSource(Scaleform::File *, Scaleform::Render::ImageFormat);
	bool ReadHeader(Scaleform::MemoryHeap *);
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual unsigned long GetMipmapCount();
	virtual ~TGAFileImageSource();
	Scaleform::Render::TGA::TGAFileImageSource & operator=(Scaleform::Render::TGA::TGAFileImageSource &);
	Scaleform::Render::TGA::TGAFileImageSource & operator=(const Scaleform::Render::TGA::TGAFileImageSource &);
};
Scaleform::Render::ImageFileFormat Scaleform::Render::ImageFileHandler::GetFormat(); // 0x1400482A0
bool Scaleform::Render::TGA::TGAFileImageSource::ReadHeader(Scaleform::MemoryHeap * pheap); // 0x14037CB20
bool Scaleform::Render::TGA::TGAFileImageSource::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x14037C920
class Scaleform::Render::ImageScanlineBuffer<4096> :
	Scaleform::Render::ImageScanlineBufferImpl
{
private:
	unsigned char TempBuffer[4096]; // 0x40
public:
	ImageScanlineBuffer<4096>(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImageFormat);
	~ImageScanlineBuffer<4096>();
};
bool Scaleform::Render::TGA::FileReader::MatchFormat(Scaleform::File * file, unsigned char * headerArg, unsigned long long headerArgSize); // 0x14037C690
class Scaleform::Render::FileHeaderReader<18> :
	Scaleform::Render::FileHeaderReaderImpl
{
private:
	unsigned char Buffer[18]; // 0x8
public:
	FileHeaderReader<18>(Scaleform::File *, unsigned char *, unsigned long long);
	unsigned char operator[](unsigned long);
	bool operator bool();
	bool operator!();
};
Scaleform::Render::TGA::FileReader Scaleform::Render::TGA::FileReader::Instance; // 0x1409F99D8
void(*Scaleform::Render::TGA::FileReader::nstance$initializer$::operator&)(); // 0x140739CD8
Scaleform::Render::ImageSource * Scaleform::Render::TGA::FileReader::ReadImageSource(Scaleform::File * file, const Scaleform::Render::ImageCreateArgs & args); // 0x14037C7B0//decompilation failure at 1409F99D8!
//decompilation failure at 140739CD8!
char __fastcall Scaleform::Render::TGA::TGAFileImageSource::Decode(
        Scaleform::Render::TGA::TGAFileImageSource *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  char result; // al
  unsigned __int8 *pReadScanline; // rdx
  char v9; // bp
  unsigned int v10; // esi
  unsigned int v11; // edi
  int v12; // er12
  int ReadScanlineSize; // er15
  Scaleform::Render::Palette *pObject; // rcx
  Scaleform::Render::Palette *v15; // rdi
  Scaleform::Render::ImageScanlineBufferImpl v17; // [rsp+40h] [rbp-1098h] BYREF
  unsigned __int8 tempBuffer[4096]; // [rsp+80h] [rbp-1058h] BYREF

  result = Scaleform::Render::FileImageSource::seekFileToDecodeStart(this);
  if ( result )
  {
    Scaleform::Render::ImageScanlineBufferImpl::ImageScanlineBufferImpl(
      &v17,
      this->SourceFormat,
      this->Size.Width,
      this->Format,
      tempBuffer,
      0x1000ui64);
    if ( v17.ReadFormat && v17.Width && (pReadScanline = v17.pReadScanline) != 0i64 )
    {
      v9 = 1;
      v10 = 0;
      if ( (this->ImageDesc & 0x20) != 0 )
      {
        v11 = 0;
        v12 = 1;
      }
      else
      {
        v11 = this->Size.Height - 1;
        v12 = -1;
      }
      ReadScanlineSize = v17.ReadScanlineSize;
      if ( this->Size.Height )
      {
        while ( this->pFile.pObject->Read(this->pFile.pObject, pReadScanline, ReadScanlineSize) == ReadScanlineSize )
        {
          Scaleform::Render::ImageScanlineBufferImpl::ConvertReadBuffer(
            &v17,
            &pdest->pPlanes->pData[v11 * pdest->pPlanes->Pitch],
            this->pColorMap.pObject,
            copyScanline,
            arg);
          ++v10;
          v11 += v12;
          if ( v10 >= this->Size.Height )
            goto LABEL_13;
          pReadScanline = v17.pReadScanline;
        }
        v9 = 0;
      }
LABEL_13:
      if ( this->Format == Image_P8 )
      {
        pObject = this->pColorMap.pObject;
        if ( pObject )
          Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&pObject->RefCount.Value, 1);
        v15 = pdest->pPalette.pObject;
        if ( v15 )
        {
          if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                               &pdest->pPalette.pObject->RefCount.Value,
                               -1) == 1 )
            Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
        }
        pdest->pPalette.pObject = this->pColorMap.pObject;
      }
    }
    else
    {
      v9 = 0;
    }
    Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(&v17);
    return v9;
  }
  return result;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

__int64 __fastcall AgDisplay::getWidth(AgUser *this)
{
  return (unsigned int)this->m_signInBusy;
}

__int64 __fastcall Scaleform::Render::DICommand_Draw::GetType(Scaleform::GFx::AS3::Instances::fl::XMLAttr *this)
{
  return 5i64;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::FileImageSource::GetSize(
        Scaleform::Render::FileImageSource *this,
        Scaleform::Render::Size<unsigned long> *result)
{
  *result = this->Size;
  return result;
}

__int64 __fastcall Scaleform::Render::FileImageSource::GetUse(Concurrency::details::SchedulerBase *this)
{
  return (unsigned int)this->m_virtualProcessorCount;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

bool __fastcall Scaleform::Render::TGA::FileReader::MatchFormat(
        Scaleform::Render::TGA::FileReader *this,
        Scaleform::File *file,
        unsigned __int8 *headerArg,
        unsigned __int64 headerArgSize)
{
  int v6; // edx
  unsigned __int8 v7; // r9
  unsigned __int8 v8; // si
  int v9; // ebx
  int v10; // edi
  __int64 v11; // rdx
  Scaleform::Render::FileHeaderReaderImpl v12; // [rsp+30h] [rbp-48h] BYREF
  unsigned __int8 tempBuffer[24]; // [rsp+38h] [rbp-40h] BYREF

  Scaleform::Render::FileHeaderReaderImpl::FileHeaderReaderImpl(&v12, file, headerArg, headerArgSize, tempBuffer, 0x12u);
  if ( !v12.pHeader )
    return 0;
  v6 = v12.pHeader[2];
  v7 = v12.pHeader[7];
  v8 = v12.pHeader[16];
  if ( v12.pHeader[1] )
  {
    if ( v12.pHeader[1] != 1 || v6 != 1 )
      return 0;
  }
  else if ( v6 != 2 && v6 != 3 )
  {
    return 0;
  }
  if ( v7 <= 0x20u )
  {
    v11 = 0x101000001i64;
    if ( _bittest64(&v11, v7) )
    {
      if ( ((v8 - 8) & 0xE7) == 0 && (v12.pHeader[17] & 0xC0) == 0 )
      {
        v9 = *((unsigned __int16 *)v12.pHeader + 6);
        v10 = *((unsigned __int16 *)v12.pHeader + 7);
        return file->GetLength(file) >= v9 * v10 * (v8 >> 3) + 18;
      }
    }
  }
  return 0;
}

char __fastcall Scaleform::Render::TGA::TGAFileImageSource::ReadHeader(
        Scaleform::Render::TGA::TGAFileImageSource *this,
        Scaleform::MemoryHeap *pheap)
{
  Scaleform::File *pObject; // rcx
  Scaleform::File *v4; // rcx
  int v5; // er12
  Scaleform::File *v6; // rcx
  int v7; // er14
  Scaleform::Render::ImageFormat v8; // esi
  int v9; // edi
  Scaleform::File *v10; // rcx
  Scaleform::File *v11; // rcx
  __int64 v12; // r13
  unsigned int v13; // er15
  __int64 v14; // rcx
  Scaleform::File *v15; // rcx
  Scaleform::File *v16; // rcx
  Scaleform::File *v17; // rcx
  Scaleform::File *v18; // rcx
  Scaleform::File *v19; // rcx
  Scaleform::File *v21; // rcx
  unsigned __int8 v22; // dl
  Scaleform::Render::ImageFormat SourceFormat; // eax
  Scaleform::Render::Palette *v24; // rax
  Scaleform::Render::Palette *v25; // rdi
  Scaleform::Render::Palette *v26; // rsi
  __int64 v27; // rsi
  __int64 v28; // r14
  Scaleform::File *v29; // rcx
  char *v30; // rdi
  Scaleform::File *v31; // rcx
  Scaleform::File *v32; // rcx
  Scaleform::File *v33; // rcx
  unsigned __int16 v34[12]; // [rsp+20h] [rbp-18h] BYREF
  unsigned __int16 v35; // [rsp+80h] [rbp+48h] BYREF
  Scaleform::MemoryHeap *pheapa; // [rsp+88h] [rbp+50h]
  unsigned __int8 v37; // [rsp+90h] [rbp+58h] BYREF
  char v38; // [rsp+98h] [rbp+60h] BYREF

  pheapa = pheap;
  v37 = 0;
  this->pFile.pObject->Read(this->pFile.pObject, &v37, 1);
  pObject = this->pFile.pObject;
  LOBYTE(v35) = 0;
  pObject->Read(pObject, (unsigned __int8 *)&v35, 1);
  v4 = this->pFile.pObject;
  v5 = (unsigned __int8)v35;
  LOBYTE(v35) = 0;
  v4->Read(v4, (unsigned __int8 *)&v35, 1);
  v6 = this->pFile.pObject;
  v7 = (unsigned __int8)v35;
  v8 = Image_B8G8R8A8;
  v9 = 0;
  v35 = 0;
  v6->Read(v6, (unsigned __int8 *)&v35, 2);
  v10 = this->pFile.pObject;
  v35 = 0;
  v10->Read(v10, (unsigned __int8 *)&v35, 2);
  v11 = this->pFile.pObject;
  v12 = v35;
  LOBYTE(v35) = 0;
  v11->Read(v11, (unsigned __int8 *)&v35, 1);
  v13 = (unsigned __int8)v35;
  if ( (unsigned __int8)v35 > 0x20u )
    return 0;
  v14 = 0x101000001i64;
  if ( !_bittest64(&v14, (unsigned __int8)v35) )
    return 0;
  v15 = this->pFile.pObject;
  v35 = 0;
  v15->Read(v15, (unsigned __int8 *)&v35, 2);
  v16 = this->pFile.pObject;
  v35 = 0;
  v16->Read(v16, (unsigned __int8 *)&v35, 2);
  v17 = this->pFile.pObject;
  v35 = 0;
  v17->Read(v17, (unsigned __int8 *)&v35, 2);
  v18 = this->pFile.pObject;
  v34[0] = 0;
  v18->Read(v18, (unsigned __int8 *)v34, 2);
  v19 = this->pFile.pObject;
  v38 = 0;
  v19->Read(v19, (unsigned __int8 *)&v38, 1);
  this->Size.Width = v35;
  this->Size.Height = v34[0];
  if ( v5 )
  {
    if ( v5 != 1 || v7 != 1 )
      return 0;
  }
  else if ( v7 != 2 && v7 != 3 )
  {
    return 0;
  }
  v21 = this->pFile.pObject;
  LOBYTE(v35) = 0;
  v21->Read(v21, (unsigned __int8 *)&v35, 1);
  v22 = v37;
  this->ImageDesc = v35;
  if ( v22 )
    this->pFile.pObject->SkipBytes(this->pFile.pObject, v22);
  switch ( v38 )
  {
    case 8:
      LOBYTE(v9) = v7 == 3;
      this->SourceFormat = v9 + 100;
      break;
    case 16:
      this->SourceFormat = Image_B5G5R5A1;
      break;
    case 24:
      this->SourceFormat = Image_B8G8R8;
      break;
    case 32:
      this->SourceFormat = Image_B8G8R8A8;
      break;
    default:
      return 0;
  }
  if ( this->Format == Image_None )
  {
    SourceFormat = this->SourceFormat;
    if ( SourceFormat == Image_P8 )
    {
      if ( v13 < 0x20 )
        v8 = Image_B8G8R8;
      this->Format = v8;
    }
    else if ( SourceFormat == Image_B5G5R5A1 )
    {
      this->Format = Image_R8G8B8A8;
    }
    else
    {
      if ( SourceFormat == Image_G8 )
        SourceFormat = Image_B8G8R8;
      this->Format = SourceFormat;
    }
  }
  if ( v5 != 1 )
    goto LABEL_41;
  v24 = Scaleform::Render::Palette::Create(v12, v13 == 32, pheapa);
  v25 = this->pColorMap.pObject;
  v26 = v24;
  if ( v25 && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&v25->RefCount.Value, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v25);
  this->pColorMap.pObject = v26;
  if ( !v26 )
    return 0;
  if ( (_DWORD)v12 )
  {
    v27 = 8i64;
    v28 = v12;
    do
    {
      v29 = this->pFile.pObject;
      v30 = (char *)this->pColorMap.pObject + v27;
      v38 = 0;
      v29->Read(v29, (unsigned __int8 *)&v38, 1);
      v31 = this->pFile.pObject;
      v37 = 0;
      v31->Read(v31, &v37, 1);
      v32 = this->pFile.pObject;
      LOBYTE(v35) = 0;
      v32->Read(v32, (unsigned __int8 *)&v35, 1);
      v30[2] = v35;
      v30[1] = v37;
      *v30 = v38;
      v30[3] = -1;
      if ( v13 == 32 )
      {
        v33 = this->pFile.pObject;
        LOBYTE(v35) = 0;
        v33->Read(v33, (unsigned __int8 *)&v35, 1);
        v30[3] = v35;
      }
      v27 += 4i64;
      --v28;
    }
    while ( v28 );
  }
LABEL_41:
  this->FilePos = this->pFile.pObject->LTell(this->pFile.pObject);
  return 1;
}

Scaleform::Render::FileImageSource *__fastcall Scaleform::Render::TGA::FileReader::ReadImageSource(
        Scaleform::Render::TGA::FileReader *this,
        Scaleform::File *file,
        const Scaleform::Render::ImageCreateArgs *args)
{
  Scaleform::Render::FileImageSource *v5; // rax
  Scaleform::Render::FileImageSource *v6; // rbx
  Scaleform::MemoryHeap *pHeap; // rdx

  if ( file && file->IsValid(file) )
  {
    v5 = (Scaleform::Render::FileImageSource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 72i64);
    v6 = v5;
    if ( v5 )
    {
      Scaleform::Render::FileImageSource::FileImageSource(v5, file, args->Format, 0i64);
      LODWORD(v6[1].__vftable) = 0;
      v6->__vftable = (Scaleform::Render::FileImageSource_vtbl *)&Scaleform::Render::TGA::TGAFileImageSource::`vftable';
      BYTE4(v6[1].__vftable) = 0;
      *(_QWORD *)&v6[1].RefCount = 0i64;
      pHeap = Scaleform::Memory::pGlobalHeap;
      if ( args->pHeap )
        pHeap = args->pHeap;
      if ( Scaleform::Render::TGA::TGAFileImageSource::ReadHeader(
             (Scaleform::Render::TGA::TGAFileImageSource *)v6,
             pHeap) )
      {
        return v6;
      }
      v6->Release(v6);
    }
    return 0i64;
  }
  return 0i64;
}

