#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/jpeg_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_wwhelper.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_zlibfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_imagesupport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_loader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_keycodes.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_event.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_asstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_characterdef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_system.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_resource.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_stream.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/gfx/gfx_log.h"

struct Scaleform::GFx::`anonymous-namespace'::Params
{
	Scaleform::Render::ImageScanlineBuffer<2048> SourceScanline; // 0x0
	Scaleform::Render::ImageScanlineBuffer<1024> AlphaScanline; // 0x840
	Scaleform::Render::ImageScanlineBuffer<2048> ScanlineWithAlpha0; // 0xC80
	Scaleform::Render::ImageScanlineBuffer<2048> ScanlineWithAlpha1; // 0x14C0
	Scaleform::Render::ImageScanlineBuffer<2048> ScanlineWithAlpha2; // 0x1D00
	Scaleform::Render::ImageScanlineBuffer<2048> * ScanlineWithAlphas[3]; // 0x2540
	Scaleform::Render::ImageScanlineBuffer<4096> FinalScanline; // 0x2558
	Scaleform::Ptr<Scaleform::File> ZlibFile; // 0x3598
	void * * Jin; // 0x35A0
	unsigned long Width; // 0x35A8
	bool Success; // 0x35AC
	Params(Scaleform::GFx::`anonymous-namespace'::Params &);
	Params(const Scaleform::GFx::`anonymous-namespace'::Params &);
	Params(void * *, unsigned long, Scaleform::Render::ImageFormat);
	~Params();
	Scaleform::GFx::`anonymous-namespace'::Params & operator=(Scaleform::GFx::`anonymous-namespace'::Params &);
	Scaleform::GFx::`anonymous-namespace'::Params & operator=(const Scaleform::GFx::`anonymous-namespace'::Params &);
};
class Scaleform::Render::ImageScanlineBuffer<2048> :
	Scaleform::Render::ImageScanlineBufferImpl
{
private:
	unsigned char TempBuffer[2048]; // 0x40
public:
	ImageScanlineBuffer<2048>(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImageFormat);
	~ImageScanlineBuffer<2048>();
};
class Scaleform::Render::ImageScanlineBuffer<1024> :
	Scaleform::Render::ImageScanlineBufferImpl
{
private:
	unsigned char TempBuffer[1024]; // 0x40
public:
	ImageScanlineBuffer<1024>(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImageFormat);
	~ImageScanlineBuffer<1024>();
};
const unsigned short Scaleform::GFx::GFx_UndoPremultiplyTable[256]; // 0x14074FD80
typedef Scaleform::GFx::`anonymous-namespace'::ZlibDecodeParams Scaleform::GFx::?A0xa7189697::ZlibDecodeParams;
typedef Scaleform::GFx::`anonymous-namespace'::Params Scaleform::GFx::?A0xa7189697::Params;
typedef void * Scaleform::GFx::Input;
class Scaleform::Render::ImageScanlineBuffer<4096> :
	Scaleform::Render::ImageScanlineBufferImpl
{
private:
	unsigned char TempBuffer[4096]; // 0x40
public:
	ImageScanlineBuffer<4096>(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImageFormat);
	~ImageScanlineBuffer<4096>();
};
struct Scaleform::GFx::`anonymous-namespace'::ZlibDecodeParams
{
	Scaleform::Render::ImageFormat Format; // 0x0
	Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat SrcFormat; // 0x4
	Scaleform::Render::Size<unsigned long> Size; // 0x8
	Scaleform::Ptr<Scaleform::File> ZlibFile; // 0x10
	unsigned long ColorTableSize; // 0x18
	ZlibDecodeParams(Scaleform::GFx::`anonymous-namespace'::ZlibDecodeParams &);
	ZlibDecodeParams(const Scaleform::GFx::`anonymous-namespace'::ZlibDecodeParams &);
	ZlibDecodeParams();
	~ZlibDecodeParams();
	Scaleform::GFx::`anonymous-namespace'::ZlibDecodeParams & operator=(Scaleform::GFx::`anonymous-namespace'::ZlibDecodeParams &);
	Scaleform::GFx::`anonymous-namespace'::ZlibDecodeParams & operator=(const Scaleform::GFx::`anonymous-namespace'::ZlibDecodeParams &);
};
class Scaleform::Render::ImageScanlineBuffer<768> :
	Scaleform::Render::ImageScanlineBufferImpl
{
private:
	unsigned char TempBuffer[768]; // 0x40
public:
	ImageScanlineBuffer<768>(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImageFormat);
	~ImageScanlineBuffer<768>();
};
Scaleform::GFx::ZlibImageSource::ZlibImageSource(Scaleform::GFx::ZlibSupportBase * zlib, Scaleform::File * file, const Scaleform::Render::Size<unsigned long> & size, Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat bmpFormatId, Scaleform::Render::ImageFormat format, unsigned short colorTableSize, unsigned long long uncompressedLen); // 0x1403F9A30
Scaleform::GFx::MemoryBufferZlibImage::~MemoryBufferZlibImage(); // 0x1403F9AB0
bool Scaleform::GFx::ZlibImageSource::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x1403F9EE0
Scaleform::Render::Image * Scaleform::GFx::ZlibImageSource::CreateCompatibleImage(const Scaleform::Render::ImageCreateArgs & args); // 0x1403F9C00
bool Scaleform::GFx::MemoryBufferZlibImage::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x1403F9D40//decompilation failure at 14074FD80!
void __fastcall Scaleform::GFx::MemoryBufferZlibImage::MemoryBufferZlibImage(
        Scaleform::GFx::MemoryBufferZlibImage *this,
        Scaleform::GFx::ZlibSupportBase *zlib,
        Scaleform::Render::ImageFormat format,
        const Scaleform::Render::Size<unsigned long> *size,
        Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat bmpFormatId,
        unsigned __int16 colorTableSize,
        unsigned int use,
        Scaleform::Render::ImageUpdateSync *sync,
        Scaleform::File *file,
        __int64 filePos,
        unsigned __int64 length)
{
  Scaleform::Render::MemoryBufferImage::MemoryBufferImage(this, format, size, use, sync, file, filePos, length);
  this->__vftable = (Scaleform::GFx::MemoryBufferZlibImage_vtbl *)&Scaleform::GFx::MemoryBufferZlibImage::`vftable';
  if ( zlib )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)zlib);
  this->Zlib.pObject = zlib;
  this->ColorTableSize = colorTableSize;
  this->BitmapFormatId = bmpFormatId;
}

void __fastcall Scaleform::GFx::ZlibImageSource::ZlibImageSource(
        Scaleform::GFx::ZlibImageSource *this,
        Scaleform::GFx::ZlibSupportBase *zlib,
        Scaleform::File *file,
        const Scaleform::Render::Size<unsigned long> *size,
        Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat bmpFormatId,
        Scaleform::Render::ImageFormat format,
        unsigned __int16 colorTableSize,
        unsigned __int64 uncompressedLen)
{
  unsigned int Height; // ecx

  Scaleform::Render::FileImageSource::FileImageSource(this, file, format, uncompressedLen);
  this->__vftable = (Scaleform::GFx::ZlibImageSource_vtbl *)&Scaleform::GFx::ZlibImageSource::`vftable';
  if ( zlib )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)zlib);
  this->Zlib.pObject = zlib;
  this->ColorTableSize = colorTableSize;
  this->BitmapFormatId = bmpFormatId;
  Height = size->Height;
  this->Size.Width = size->Width;
  this->Size.Height = Height;
}

void __fastcall Scaleform::GFx::MemoryBufferZlibImage::~MemoryBufferZlibImage(
        Scaleform::GFx::MemoryBufferZlibImage *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  volatile int *v3; // rbx

  pObject = (Scaleform::RefCountVImpl *)this->Zlib.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (volatile int *)(this->FilePath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v3 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v3);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->FileData.Data.Data);
  Scaleform::Render::Image::~Image(this);
}

void __fastcall Scaleform::GFx::ZlibImageSource::CreateCompatibleImage(
        Scaleform::GFx::ZlibImageSource *this,
        const Scaleform::Render::ImageCreateArgs *args)
{
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::GFx::MemoryBufferZlibImage *v5; // r15
  Scaleform::Render::ImageUpdateSync *sync; // rbp
  Scaleform::File *file; // r12
  Scaleform::Render::TextureManager *pManager; // rax
  Scaleform::GFx::ZlibSupportBase *pObject; // rdi
  const Scaleform::Render::Size<unsigned long> *v10; // rbx
  Scaleform::Render::ImageFormat v11; // eax
  char v12; // [rsp+90h] [rbp+8h] BYREF

  if ( ((unsigned __int8 (__fastcall *)(Scaleform::GFx::ZlibImageSource *))this->IsDecodeOnlyImageCompatible)(this) )
  {
    pHeap = Scaleform::Memory::pGlobalHeap;
    if ( args->pHeap )
      pHeap = args->pHeap;
    v5 = (Scaleform::GFx::MemoryBufferZlibImage *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pHeap->Alloc)(
                                                    pHeap,
                                                    104i64);
    if ( v5 )
    {
      sync = args->pUpdateSync;
      file = this->pFile.pObject;
      if ( !sync )
      {
        pManager = args->pManager;
        sync = &pManager->Scaleform::Render::ImageUpdateSync;
        if ( !pManager )
          sync = 0i64;
      }
      pObject = this->Zlib.pObject;
      v10 = this->GetSize(this, &v12);
      v11 = this->GetFormat(this);
      Scaleform::GFx::MemoryBufferZlibImage::MemoryBufferZlibImage(
        v5,
        pObject,
        v11,
        v10,
        this->BitmapFormatId,
        this->ColorTableSize,
        args->Use,
        sync,
        file,
        this->FilePos,
        this->FileLen);
    }
  }
  else
  {
    Scaleform::Render::ImageSource::CreateCompatibleImage(this, args);
  }
}

_BOOL8 __fastcall Scaleform::GFx::MemoryBufferZlibImage::Decode(
        Scaleform::GFx::MemoryBufferZlibImage *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat BitmapFormatId; // edi
  unsigned __int64 Size; // r12
  unsigned __int8 *Data; // rbx
  __int32 v11; // edi
  __int32 v12; // edi
  __int32 v13; // edi
  bool v14; // di
  bool v15; // al
  void *v16; // rbx
  Scaleform::GFx::ZlibDecodeParams params; // [rsp+20h] [rbp-50h] BYREF
  Scaleform::RefCountImplCore v19; // [rsp+40h] [rbp-30h] BYREF
  Scaleform::String v20; // [rsp+50h] [rbp-20h] BYREF
  unsigned __int8 *v21; // [rsp+58h] [rbp-18h]
  int v22; // [rsp+60h] [rbp-10h]
  int v23; // [rsp+64h] [rbp-Ch]
  char v24; // [rsp+68h] [rbp-8h]

  BitmapFormatId = this->BitmapFormatId;
  Size = this->FileData.Data.Size;
  Data = this->FileData.Data.Data;
  params.Format = this->Format;
  params.Size = this->Size;
  params.ZlibFile.pObject = 0i64;
  params.SrcFormat = BitmapFormatId;
  v19.__vftable = (Scaleform::RefCountImplCore_vtbl *)&Scaleform::MemoryFile::`vftable';
  v19.RefCount = 1;
  Scaleform::String::String(&v20, &pnewText);
  v21 = Data;
  v22 = Size;
  v23 = 0;
  if ( !Data || (v24 = 1, (int)Size <= 0) )
    v24 = 0;
  params.ZlibFile.pObject = this->Zlib.pObject->CreateZlibFile(this->Zlib.pObject, &v19);
  params.ColorTableSize = this->ColorTableSize;
  if ( BitmapFormatId )
  {
    v11 = BitmapFormatId - 1;
    if ( v11 )
    {
      v12 = v11 - 1;
      if ( v12 )
      {
        v13 = v12 - 1;
        if ( v13 )
        {
          if ( v13 != 1 )
          {
            v14 = 0;
            goto LABEL_16;
          }
          v15 = Scaleform::GFx::ZlibDecodeRGBA(&params, pdest, copyScanline, arg);
        }
        else
        {
          v15 = Scaleform::GFx::ZlibDecodeColorMappedAlpha(&params, pdest, copyScanline, arg);
        }
      }
      else
      {
        v15 = Scaleform::GFx::ZlibDecodeRGB24(&params, pdest, copyScanline, arg);
      }
    }
    else
    {
      v15 = Scaleform::GFx::ZlibDecodeRGB16(&params, pdest, copyScanline, arg);
    }
  }
  else
  {
    v15 = Scaleform::GFx::ZlibDecodeColorMapped(&params, pdest, copyScanline, arg);
  }
  v14 = v15;
LABEL_16:
  if ( params.ZlibFile.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)params.ZlibFile.pObject);
  v16 = (void *)(v20.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
         (volatile int *)((v20.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
         -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v16);
  Scaleform::RefCountImplCore::~RefCountImplCore(&v19);
  return v14;
}

_BOOL8 __fastcall Scaleform::GFx::ZlibImageSource::Decode(
        Scaleform::GFx::ZlibImageSource *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat BitmapFormatId; // edi
  Scaleform::File *pObject; // rdx
  unsigned int Height; // eax
  Scaleform::GFx::ZlibSupportBase *v11; // rcx
  __int32 v12; // edi
  __int32 v13; // edi
  __int32 v14; // edi
  bool v15; // bl
  bool v16; // al
  Scaleform::GFx::ZlibDecodeParams params; // [rsp+20h] [rbp-28h] BYREF

  BitmapFormatId = this->BitmapFormatId;
  params.Format = this->Format;
  pObject = this->pFile.pObject;
  params.Size.Width = this->Size.Width;
  Height = this->Size.Height;
  v11 = this->Zlib.pObject;
  params.Size.Height = Height;
  params.SrcFormat = BitmapFormatId;
  params.ZlibFile.pObject = v11->CreateZlibFile(v11, pObject);
  params.ColorTableSize = this->ColorTableSize;
  if ( BitmapFormatId )
  {
    v12 = BitmapFormatId - 1;
    if ( v12 )
    {
      v13 = v12 - 1;
      if ( v13 )
      {
        v14 = v13 - 1;
        if ( v14 )
        {
          if ( v14 != 1 )
          {
            v15 = 0;
            goto LABEL_13;
          }
          v16 = Scaleform::GFx::ZlibDecodeRGBA(&params, pdest, copyScanline, arg);
        }
        else
        {
          v16 = Scaleform::GFx::ZlibDecodeColorMappedAlpha(&params, pdest, copyScanline, arg);
        }
      }
      else
      {
        v16 = Scaleform::GFx::ZlibDecodeRGB24(&params, pdest, copyScanline, arg);
      }
    }
    else
    {
      v16 = Scaleform::GFx::ZlibDecodeRGB16(&params, pdest, copyScanline, arg);
    }
  }
  else
  {
    v16 = Scaleform::GFx::ZlibDecodeColorMapped(&params, pdest, copyScanline, arg);
  }
  v15 = v16;
LABEL_13:
  if ( params.ZlibFile.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)params.ZlibFile.pObject);
  return v15;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

