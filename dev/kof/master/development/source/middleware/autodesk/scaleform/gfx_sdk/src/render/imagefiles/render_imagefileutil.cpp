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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"

Scaleform::Render::FileImageSource::FileImageSource(Scaleform::File * file, Scaleform::Render::ImageFormat format, unsigned long long len); // 0x14040A080
Scaleform::Render::FileImageSource::~FileImageSource(); // 0x14040A310
bool Scaleform::Render::FileImageSource::seekFileToDecodeStart(); // 0x14040A6A0
Scaleform::Render::MemoryBufferImage::MemoryBufferImage(Scaleform::Render::ImageFormat format, const Scaleform::Render::Size<unsigned long> & size, unsigned long use, Scaleform::Render::ImageUpdateSync * sync, Scaleform::File * file, long long filePos, unsigned long long length); // 0x14040A1F0
Scaleform::Render::Texture * Scaleform::Render::MemoryBufferImage::GetTexture(Scaleform::Render::TextureManager * pmanager); // 0x14040A4F0
Scaleform::Render::FileHeaderReaderImpl::FileHeaderReaderImpl(Scaleform::File * file, unsigned char * header, unsigned long long headerSize, unsigned char * tempBuffer, unsigned char sizeNeeded); // 0x140409FB0
Scaleform::Render::ImageScanlineBufferImpl::ImageScanlineBufferImpl(Scaleform::Render::ImageFormat readFormat, unsigned long width, Scaleform::Render::ImageFormat convertSourceFormat, unsigned char * tempBuffer, unsigned long long tempBufferSize); // 0x14040A100
Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(); // 0x14040A340
void Scaleform::Render::ImageScanlineBufferImpl::ConvertReadBuffer(unsigned char * dest, Scaleform::Render::Palette * pal, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * scanlineArg); // 0x14040A490void __fastcall Scaleform::Render::FileHeaderReaderImpl::FileHeaderReaderImpl(
        Scaleform::Render::FileHeaderReaderImpl *this,
        Scaleform::File *file,
        unsigned __int8 *header,
        unsigned __int64 headerSize,
        unsigned __int8 *tempBuffer,
        unsigned __int8 sizeNeeded)
{
  __int64 v10; // rdi
  int v11; // ebx

  this->pHeader = 0i64;
  if ( file && file->IsValid(file) )
  {
    if ( header && headerSize >= sizeNeeded )
    {
      this->pHeader = header;
    }
    else
    {
      v10 = file->LTell(file);
      v11 = file->Read(file, tempBuffer, sizeNeeded);
      file->LSeek(file, v10, 0);
      if ( v11 >= sizeNeeded )
        this->pHeader = tempBuffer;
    }
  }
}

void __fastcall Scaleform::Render::FileImageSource::FileImageSource(
        Scaleform::Render::FileImageSource *this,
        Scaleform::File *file,
        Scaleform::Render::ImageFormat format,
        unsigned __int64 len)
{
  this->Format = format;
  this->__vftable = (Scaleform::Render::FileImageSource_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::FileImageSource_vtbl *)&Scaleform::Render::FileImageSource::`vftable';
  this->RefCount = 1;
  this->Use = 0;
  if ( file )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)file);
  this->pFile.pObject = file;
  this->FileLen = len;
  this->FilePos = file->LTell(file);
}

void __fastcall Scaleform::Render::ImageScanlineBufferImpl::ImageScanlineBufferImpl(
        Scaleform::Render::ImageScanlineBufferImpl *this,
        Scaleform::Render::ImageFormat readFormat,
        unsigned int width,
        Scaleform::Render::ImageFormat convertSourceFormat,
        unsigned __int8 *tempBuffer,
        unsigned __int64 tempBufferSize)
{
  Scaleform::Render::ImageFormat v6; // eax
  unsigned int FormatBitsPerPixel; // eax
  Scaleform::Render::ImageFormat v10; // ecx
  unsigned int v11; // eax
  Scaleform::Render::ImageFormat v12; // edx
  void (__fastcall *ImageConvertFunc)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *); // rax
  unsigned __int64 v14; // rdi
  unsigned __int64 v15; // rdx

  v6 = readFormat;
  this->ReadFormat = readFormat;
  this->Width = width;
  if ( convertSourceFormat )
    v6 = convertSourceFormat;
  this->pReadScanline = 0i64;
  this->pConvertScanline = 0i64;
  this->ConvertSourceFormat = v6;
  FormatBitsPerPixel = Scaleform::Render::ImageData::GetFormatBitsPerPixel(readFormat, 0);
  this->ConvertScanlineSize = 0i64;
  this->pConvertFunc = 0i64;
  this->BuffersAllocated = 0;
  this->ReadScanlineSize = (unsigned __int64)(width * FormatBitsPerPixel) >> 3;
  v10 = this->ConvertSourceFormat;
  if ( this->ReadFormat == v10
    || (v11 = Scaleform::Render::ImageData::GetFormatBitsPerPixel(v10, 0),
        v12 = this->ReadFormat,
        this->ConvertScanlineSize = (unsigned __int64)(width * v11) >> 3,
        ImageConvertFunc = Scaleform::Render::GetImageConvertFunc(this->ConvertSourceFormat, v12),
        (this->pConvertFunc = ImageConvertFunc) != 0i64) )
  {
    v14 = (this->ReadScanlineSize + 16) & 0xFFFFFFFFFFFFFFF0ui64;
    v15 = v14 + this->ConvertScanlineSize;
    if ( v15 > tempBufferSize )
    {
      tempBuffer = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, v15, 0i64);
      this->BuffersAllocated = 1;
    }
    this->pReadScanline = tempBuffer;
    if ( this->pConvertFunc )
      this->pConvertScanline = &tempBuffer[v14];
  }
}

void __fastcall Scaleform::Render::MemoryBufferImage::MemoryBufferImage(
        Scaleform::Render::MemoryBufferImage *this,
        Scaleform::Render::ImageFormat format,
        const Scaleform::Render::Size<unsigned long> *size,
        unsigned int use,
        Scaleform::Render::ImageUpdateSync *sync,
        Scaleform::File *file,
        __int64 filePos,
        unsigned __int64 length)
{
  unsigned int Width; // eax
  __int64 v10; // rdi
  const char *v11; // rax

  this->__vftable = (Scaleform::Render::MemoryBufferImage_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::MemoryBufferImage_vtbl *)&Scaleform::Render::Image::`vftable';
  this->pTexture.Value = 0i64;
  this->pUpdateSync = sync;
  this->__vftable = (Scaleform::Render::MemoryBufferImage_vtbl *)&Scaleform::Render::MemoryBufferImage::`vftable';
  this->pInverseMatrix = 0i64;
  this->Format = format;
  Width = size->Width;
  this->Size.Height = size->Height;
  this->Size.Width = Width;
  this->Use = use;
  this->FileData.Data.Data = 0i64;
  this->FileData.Data.Size = 0i64;
  this->FileData.Data.Policy.Capacity = 0i64;
  Scaleform::StringLH::StringLH(&this->FilePath);
  if ( file )
  {
    v10 = length;
    if ( !length )
      v10 = file->LGetLength(file) - filePos;
    Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
      (Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *)&this->FileData,
      v10);
    if ( this->FileData.Data.Size == v10
      && (file->LSeek(file, filePos, 0), file->Read(file, this->FileData.Data.Data, v10) >= (int)v10) )
    {
      v11 = file->GetFilePath(file);
      Scaleform::String::operator=(&this->FilePath, v11);
    }
    else
    {
      this->Format = Image_None;
    }
  }
  else
  {
    this->Format = Image_None;
  }
}

void __fastcall Scaleform::Render::FileImageSource::~FileImageSource(Scaleform::Render::FileImageSource *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->__vftable = (Scaleform::Render::FileImageSource_vtbl *)&Scaleform::Render::FileImageSource::`vftable';
  pObject = (Scaleform::RefCountVImpl *)this->pFile.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(
        Scaleform::Render::ImageScanlineBufferImpl *this)
{
  if ( this->BuffersAllocated )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pReadScanline);
}

void __fastcall Scaleform::Render::ImageScanlineBufferImpl::ConvertReadBuffer(
        Scaleform::Render::ImageScanlineBufferImpl *this,
        unsigned __int8 *dest,
        Scaleform::Render::Palette *pal,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *scanlineArg)
{
  void (__fastcall *pConvertFunc)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *); // rax
  unsigned __int8 *pReadScanline; // rdx
  unsigned __int64 ReadScanlineSize; // r8

  pConvertFunc = this->pConvertFunc;
  pReadScanline = this->pReadScanline;
  ReadScanlineSize = this->ReadScanlineSize;
  if ( pConvertFunc )
  {
    pConvertFunc(this->pConvertScanline, pReadScanline, ReadScanlineSize, pal, 0i64);
    ReadScanlineSize = this->ConvertScanlineSize;
    pal = 0i64;
    pReadScanline = this->pConvertScanline;
  }
  ((void (__fastcall *)(unsigned __int8 *, unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *))copyScanline)(
    dest,
    pReadScanline,
    ReadScanlineSize,
    pal);
}

Scaleform::GFx::MovieImpl *__fastcall Scaleform::Render::MemoryBufferImage::GetTexture(
        Scaleform::Render::MemoryBufferImage *this,
        Scaleform::Render::TextureManager *pmanager)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rax
  Scaleform::Render::TextureManager *v4; // rax
  Scaleform::GFx::MovieImpl *v6; // rbx

  if ( this->pTexture.Value )
  {
    pObject = this->pTexture.Value->pManagerLocks.pObject;
    v4 = pObject ? pObject->pManager : 0i64;
    if ( v4 == pmanager )
      return (Scaleform::GFx::MovieImpl *)this->pTexture.Value;
  }
  this->pTexture.Value = 0i64;
  v6 = (Scaleform::GFx::MovieImpl *)pmanager->CreateTexture(
                                      pmanager,
                                      (unsigned int)this->Format,
                                      1i64,
                                      &this->Size,
                                      this->Use,
                                      this,
                                      0i64);
  Scaleform::GFx::KeyboardState::SetListener((Scaleform::GFx::ASMovieRootBase *)this, v6);
  return v6;
}

void __fastcall Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned __int8 *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int8 *v7; // rax
  int v8; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v6);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = 2;
      this->Data = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                        Scaleform::Memory::pGlobalHeap,
                                        pheapAddr,
                                        v6,
                                        &v8);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

bool __fastcall Scaleform::Render::FileImageSource::seekFileToDecodeStart(Scaleform::Render::FileImageSource *this)
{
  Scaleform::File *pObject; // rcx

  pObject = this->pFile.pObject;
  return pObject && pObject->LSeek(pObject, this->FilePos, 0) == this->FilePos;
}

