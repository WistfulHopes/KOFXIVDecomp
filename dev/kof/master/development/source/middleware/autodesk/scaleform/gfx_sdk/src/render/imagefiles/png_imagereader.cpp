#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/time.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/png_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"

struct Scaleform::Render::PNG::PngContext
{
	png_struct_def * png_ptr; // 0x0
	png_info_def * info_ptr; // 0x8
	unsigned long width; // 0x10
	unsigned long height; // 0x14
	long bitDepth; // 0x18
	long colorType; // 0x1C
	long interlaceType; // 0x20
	unsigned long ulRowBytes; // 0x24
	char errorMessage[100]; // 0x28
	char filePath[256]; // 0x8C
};
void Scaleform::Render::PNG::png_error_handler(png_struct_def * png_ptr, const char * msg); // 0x14037E5B0
void Scaleform::Render::PNG::png_read_data(png_struct_def * png_ptr, unsigned char * data, unsigned long long length); // 0x14037E620
long Scaleform::Render::PNG::GFxPngReadInfo(Scaleform::Render::PNG::PngContext * context); // 0x14037E220
class Scaleform::Render::PNG::LibPNGInput :
	Scaleform::Render::PNG::Input
{
private:
	Scaleform::Render::PNG::PngContext Context; // 0x8
	Scaleform::Ptr<Scaleform::File> pFile; // 0x198
public:
	LibPNGInput(const Scaleform::Render::PNG::LibPNGInput &);
	LibPNGInput(Scaleform::File *);
private:
	LibPNGInput();
public:
	bool IsInitialized; // 0x1A0
	virtual long ReadData(void * *);
	virtual long ReadScanline(unsigned char *);
	bool IsValid();
	bool StartImage();
	virtual Scaleform::Render::Size<unsigned long> GetSize();
	virtual bool Decode(Scaleform::Render::ImageFormat, Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual ~LibPNGInput();
	Scaleform::Render::PNG::LibPNGInput & operator=(const Scaleform::Render::PNG::LibPNGInput &);
};
long Scaleform::Render::PNG::LibPNGInput::ReadData(void * * ppData); // 0x14037E3B0
long Scaleform::Render::PNG::LibPNGInput::ReadScanline(unsigned char * prgbData); // 0x14037E480
Scaleform::Render::PNG::LibPNGInput::LibPNGInput(Scaleform::File * pin); // 0x14037D980
bool Scaleform::Render::PNG::LibPNGInput::StartImage(); // 0x14037E4A0
Scaleform::Render::Size<unsigned long> Scaleform::Render::PNG::LibPNGInput::GetSize(); // 0x14065E700
bool Scaleform::Render::PNG::LibPNGInput::Decode(Scaleform::Render::ImageFormat format, Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x14037DD10
class Scaleform::Render::ImageScanlineBuffer<4096> :
	Scaleform::Render::ImageScanlineBufferImpl
{
private:
	unsigned char TempBuffer[4096]; // 0x40
public:
	ImageScanlineBuffer<4096>(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImageFormat);
	~ImageScanlineBuffer<4096>();
};
Scaleform::Render::PNG::FileReader Scaleform::Render::PNG::FileReader::Instance; // 0x1409F99E8
Scaleform::Render::PNG::FileWriter Scaleform::Render::PNG::FileWriter::Instance; // 0x1409F99F0
void(*Scaleform::Render::PNG::FileReader::nstance$initializer$::operator&)(); // 0x140739CE8
void(*Scaleform::Render::PNG::FileWriter::nstance$initializer$::operator&)(); // 0x140739CF0
class Scaleform::Render::PNG::MemoryBufferImage :
	Scaleform::Render::MemoryBufferImage
{
public:
	MemoryBufferImage(Scaleform::Render::PNG::MemoryBufferImage &);
	MemoryBufferImage(const Scaleform::Render::PNG::MemoryBufferImage &);
	MemoryBufferImage(Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::Render::ImageUpdateSync *, Scaleform::File *, long long, unsigned long long);
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual ~MemoryBufferImage();
	Scaleform::Render::PNG::MemoryBufferImage & operator=(Scaleform::Render::PNG::MemoryBufferImage &);
	Scaleform::Render::PNG::MemoryBufferImage & operator=(const Scaleform::Render::PNG::MemoryBufferImage &);
};
bool Scaleform::Render::PNG::MemoryBufferImage::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x14037E070
class Scaleform::Render::PNG::PNGFileImageSource :
	Scaleform::Render::FileImageSource
{
private:
	Scaleform::Render::PNG::Input * pOriginalInput; // 0x38
public:
	PNGFileImageSource(const Scaleform::Render::PNG::PNGFileImageSource &);
	PNGFileImageSource(Scaleform::File *, Scaleform::Render::ImageFormat);
	virtual ~PNGFileImageSource();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual Scaleform::Render::Image * CreateCompatibleImage(const Scaleform::Render::ImageCreateArgs &);
	bool ReadHeader();
	virtual unsigned long GetMipmapCount();
	Scaleform::Render::PNG::PNGFileImageSource & operator=(const Scaleform::Render::PNG::PNGFileImageSource &);
};
unsigned long Scaleform::Render::MemoryBufferImage::GetMipmapCount(); // 0x1400482A0
bool Scaleform::Render::PNG::PNGFileImageSource::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x14037E1E0
bool Scaleform::Render::PNG::PNGFileImageSource::ReadHeader(); // 0x14037E3D0
Scaleform::Render::Image * Scaleform::Render::PNG::PNGFileImageSource::CreateCompatibleImage(const Scaleform::Render::ImageCreateArgs & args); // 0x14037DBD0
bool Scaleform::Render::PNG::FileReader::MatchFormat(Scaleform::File * file, unsigned char * headerArg, unsigned long long headerArgSize); // 0x14037D5B0
class Scaleform::Render::FileHeaderReader<8> :
	Scaleform::Render::FileHeaderReaderImpl
{
private:
	unsigned char Buffer[8]; // 0x8
public:
	FileHeaderReader<8>(Scaleform::File *, unsigned char *, unsigned long long);
	unsigned char operator[](unsigned long);
	bool operator bool();
	bool operator!();
};
Scaleform::Render::ImageSource * Scaleform::Render::PNG::FileReader::ReadImageSource(Scaleform::File * file, const Scaleform::Render::ImageCreateArgs & args); // 0x14037D620
Scaleform::Render::PNG::Input * Scaleform::Render::PNG::FileReader::CreateInput(Scaleform::File * pin); // 0x14037D540
void Scaleform::Render::PNG::png_write_data(png_struct_def * png_ptr, unsigned char * data, unsigned long long length); // 0x14037E680
bool Scaleform::Render::PNG::FileWriter::Write(Scaleform::File * file, const Scaleform::Render::ImageData & imageData, const Scaleform::Render::ImageWriteArgs * args); // 0x14037D6F0//decompilation failure at 1409F99E8!
//decompilation failure at 1409F99F0!
//decompilation failure at 140739CE8!
//decompilation failure at 140739CF0!
void __fastcall Scaleform::Render::PNG::LibPNGInput::LibPNGInput(
        Scaleform::Render::PNG::LibPNGInput *this,
        Scaleform::File *pin)
{
  const char *v4; // rax
  unsigned __int8 sig[8]; // [rsp+20h] [rbp-18h] BYREF

  this->__vftable = (Scaleform::Render::PNG::LibPNGInput_vtbl *)&Scaleform::Render::PNG::LibPNGInput::`vftable';
  if ( pin )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pin);
  this->pFile.pObject = pin;
  this->IsInitialized = 0;
  if ( pin )
  {
    if ( pin->IsValid(pin) )
    {
      memset(&this->Context, 0, sizeof(this->Context));
      v4 = pin->GetFilePath(pin);
      strcpy_s(this->Context.filePath, 0x100ui64, v4);
      if ( pin->Read(pin, sig, 8) == 8 && !png_sig_cmp(sig, 0i64, 8ui64) )
        Scaleform::Render::PNG::LibPNGInput::StartImage(this);
    }
  }
}

Scaleform::Render::MemoryBufferImage *__fastcall Scaleform::Render::PNG::PNGFileImageSource::CreateCompatibleImage(
        Scaleform::Render::PNG::PNGFileImageSource *this,
        const Scaleform::Render::ImageCreateArgs *args)
{
  Scaleform::MemoryHeap *pHeap; // rcx
  Scaleform::Render::MemoryBufferImage *v5; // r12
  Scaleform::Render::ImageUpdateSync *sync; // rbp
  Scaleform::File *file; // r13
  Scaleform::Render::TextureManager *pManager; // rax
  __int64 filePos; // rdi
  unsigned int Use; // esi
  const Scaleform::Render::Size<unsigned long> *v11; // rbx
  Scaleform::Render::ImageFormat v12; // eax
  char v14; // [rsp+70h] [rbp+8h] BYREF

  if ( !((unsigned __int8 (__fastcall *)(Scaleform::Render::PNG::PNGFileImageSource *))this->IsDecodeOnlyImageCompatible)(this) )
    return (Scaleform::Render::MemoryBufferImage *)Scaleform::Render::ImageSource::CreateCompatibleImage(this, args);
  pHeap = Scaleform::Memory::pGlobalHeap;
  if ( args->pHeap )
    pHeap = args->pHeap;
  v5 = (Scaleform::Render::MemoryBufferImage *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))pHeap->Alloc)(
                                                 pHeap,
                                                 88i64);
  if ( !v5 )
    return 0i64;
  sync = args->pUpdateSync;
  file = this->pFile.pObject;
  if ( !sync )
  {
    pManager = args->pManager;
    sync = &pManager->Scaleform::Render::ImageUpdateSync;
    if ( !pManager )
      sync = 0i64;
  }
  filePos = this->FilePos;
  Use = args->Use;
  v11 = this->GetSize(this, &v14);
  v12 = this->GetFormat(this);
  Scaleform::Render::MemoryBufferImage::MemoryBufferImage(v5, v12, v11, Use, sync, file, filePos, 0i64);
  v5->__vftable = (Scaleform::Render::MemoryBufferImage_vtbl *)&Scaleform::Render::PNG::MemoryBufferImage::`vftable';
  return v5;
}

void __fastcall Scaleform::Render::PNG::FileReader::CreateInput(
        Scaleform::Render::PNG::FileReader *this,
        Scaleform::File *pin)
{
  Scaleform::Render::PNG::LibPNGInput *v3; // rax
  __int64 v4; // rax

  if ( pin )
  {
    if ( pin->IsValid(pin) )
    {
      v3 = (Scaleform::Render::PNG::LibPNGInput *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    424i64,
                                                    0i64);
      if ( v3 )
      {
        Scaleform::Render::PNG::LibPNGInput::LibPNGInput(v3, pin);
        if ( v4 )
        {
          if ( !*(_BYTE *)(v4 + 416) )
            (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1i64);
        }
      }
    }
  }
}

bool __fastcall Scaleform::Render::PNG::LibPNGInput::Decode(
        Scaleform::Render::PNG::LibPNGInput *this,
        Scaleform::Render::ImageFormat format,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  unsigned int v5; // esi
  int ulRowBytes; // er14
  Scaleform::Render::PNG::LibPNGInput *v8; // rdi
  bool result; // al
  int colorType; // eax
  unsigned int v11; // ebx
  Scaleform::Render::ImageFormat v12; // edx
  _JBTYPE *v13; // rax
  _QWORD *v14; // r14
  __int64 v15; // rax
  __int64 v16; // rcx
  bool v17; // [rsp+30h] [rbp-D0h]
  Scaleform::Render::ImageFormat readFormat; // [rsp+34h] [rbp-CCh]
  unsigned int v19; // [rsp+38h] [rbp-C8h]
  Scaleform::Render::ImageScanlineBufferImpl v24; // [rsp+70h] [rbp-90h] BYREF
  unsigned __int8 v25[4096]; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::ImageScanlineBufferImpl v26; // [rsp+10B0h] [rbp+FB0h] BYREF
  unsigned __int8 tempBuffer[4096]; // [rsp+10F0h] [rbp+FF0h] BYREF

  v5 = 0;
  ulRowBytes = 0;
  v8 = this;
  v17 = 1;
  result = Scaleform::Render::PNG::LibPNGInput::StartImage(this);
  if ( !result )
  {
    v8->IsInitialized = 0;
    return result;
  }
  colorType = v8->Context.colorType;
  v11 = 1;
  if ( colorType == 2 )
  {
    v12 = Image_R8G8B8;
    ulRowBytes = 3 * v8->Context.width;
  }
  else
  {
    if ( colorType == 6 )
    {
      v12 = Image_R8G8B8A8;
      ulRowBytes = 4 * v8->Context.width;
      readFormat = Image_R8G8B8A8;
      goto LABEL_9;
    }
    v12 = Image_None;
  }
  readFormat = v12;
LABEL_9:
  if ( v8->Context.ulRowBytes )
    ulRowBytes = v8->Context.ulRowBytes;
  v19 = (ulRowBytes + 3) & 0xFFFFFFFC;
  if ( v12 )
  {
    Scaleform::Render::ImageScanlineBufferImpl::ImageScanlineBufferImpl(
      &v26,
      v12,
      v8->Context.width,
      format,
      tempBuffer,
      0x1000ui64);
    v13 = (_JBTYPE *)png_set_longjmp_fn(v8->Context.png_ptr, longjmp, 0x100ui64);
    if ( setjmp(v13) )
    {
      png_destroy_read_struct(&this->Context.png_ptr, &this->Context.info_ptr, 0i64);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, 0i64);
      this->IsInitialized = 0;
      Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(&v26);
      return 0;
    }
    v8 = this;
    if ( this->Context.interlaceType )
    {
      v14 = Scaleform::Memory::pGlobalHeap->Alloc(
              Scaleform::Memory::pGlobalHeap,
              v19 * this->Context.height + 8i64 * this->Context.height,
              0i64);
      *v14 = &v14[this->Context.height];
      if ( this->Context.height > 1 )
      {
        do
        {
          v15 = v11;
          v16 = v14[v11++ - 1];
          v14[v15] = v19 + v16;
        }
        while ( v11 < this->Context.height );
      }
      if ( !this->ReadData(this, (void **)v14) )
      {
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v14);
        png_destroy_read_struct(&this->Context.png_ptr, &this->Context.info_ptr, 0i64);
        this->IsInitialized = 0;
        Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(&v26);
        return 0;
      }
      Scaleform::Render::ImageScanlineBufferImpl::ImageScanlineBufferImpl(
        &v24,
        readFormat,
        this->Context.width,
        format,
        v25,
        0x1000ui64);
      if ( this->Context.height )
      {
        do
        {
          memmove(v24.pReadScanline, (const void *)v14[v5], v24.ReadScanlineSize);
          Scaleform::Render::ImageScanlineBufferImpl::ConvertReadBuffer(
            &v24,
            &pdest->pPlanes->pData[v5++ * pdest->pPlanes->Pitch],
            0i64,
            copyScanline,
            arg);
        }
        while ( v5 < this->Context.height );
      }
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v14);
      Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(&v24);
    }
    else if ( this->Context.height )
    {
      while ( this->ReadScanline(this, v26.pReadScanline) )
      {
        Scaleform::Render::ImageScanlineBufferImpl::ConvertReadBuffer(
          &v26,
          &pdest->pPlanes->pData[v5++ * pdest->pPlanes->Pitch],
          0i64,
          copyScanline,
          arg);
        if ( v5 >= this->Context.height )
          goto LABEL_27;
      }
      v17 = 0;
    }
LABEL_27:
    png_read_end(this->Context.png_ptr, 0i64);
    Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(&v26);
  }
  png_destroy_read_struct(&v8->Context.png_ptr, &v8->Context.info_ptr, 0i64);
  result = v17;
  v8->IsInitialized = 0;
  return result;
}

__int64 __fastcall Scaleform::Render::PNG::MemoryBufferImage::Decode(
        Scaleform::Render::PNG::MemoryBufferImage *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  unsigned __int64 Size; // rdi
  unsigned __int8 *Data; // rsi
  _QWORD *v10; // rax
  Scaleform::Render::PNG::LibPNGInput *v11; // rax
  _BYTE *v12; // rax
  void (__fastcall ***v13)(_QWORD, __int64); // rbx
  unsigned __int8 v14; // di
  void *v15; // rbx
  Scaleform::File pin; // [rsp+30h] [rbp-48h] BYREF
  Scaleform::String v18[2]; // [rsp+40h] [rbp-38h] BYREF
  int v19; // [rsp+50h] [rbp-28h]
  int v20; // [rsp+54h] [rbp-24h]
  char v21; // [rsp+58h] [rbp-20h]

  Size = this->FileData.Data.Size;
  Data = this->FileData.Data.Data;
  pin.RefCount = 1;
  pin.__vftable = (Scaleform::File_vtbl *)&Scaleform::MemoryFile::`vftable';
  Scaleform::String::String(v18, &this->FilePath);
  v10 = (_QWORD *)(this->FilePath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  v18[1].HeapTypeBits = (unsigned __int64)Data;
  v19 = Size;
  v20 = 0;
  if ( (*v10 & 0x7FFFFFFFFFFFFFFFi64) == 0 || !Data || (v21 = 1, (int)Size <= 0) )
    v21 = 0;
  if ( !pin.IsValid(&pin) )
    goto LABEL_10;
  v11 = (Scaleform::Render::PNG::LibPNGInput *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 424i64,
                                                 0i64);
  if ( !v11 )
    goto LABEL_10;
  Scaleform::Render::PNG::LibPNGInput::LibPNGInput(v11, &pin);
  v13 = (void (__fastcall ***)(_QWORD, __int64))v12;
  if ( !v12 )
    goto LABEL_10;
  if ( !v12[416] )
  {
    (**(void (__fastcall ***)(_BYTE *, __int64))v12)(v12, 1i64);
LABEL_10:
    v14 = 0;
    goto LABEL_11;
  }
  v14 = (*(__int64 (__fastcall **)(_BYTE *, _QWORD, Scaleform::Render::ImageData *, _QWORD, void *))(*(_QWORD *)v12 + 24i64))(
          v12,
          (unsigned int)this->Format,
          pdest,
          copyScanline,
          arg);
  (**v13)(v13, 1i64);
LABEL_11:
  v15 = (void *)(v18[0].HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       (volatile int *)((v18[0].HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                       -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
  Scaleform::RefCountImplCore::~RefCountImplCore(&pin);
  return v14;
}

bool __fastcall Scaleform::Render::PNG::PNGFileImageSource::Decode(
        Scaleform::Render::PNG::PNGFileImageSource *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  Scaleform::Render::PNG::Input *pOriginalInput; // rcx

  pOriginalInput = this->pOriginalInput;
  return pOriginalInput && pOriginalInput->Decode(pOriginalInput, this->Format, pdest, copyScanline, arg);
}

__int64 __fastcall Scaleform::Render::PNG::GFxPngReadInfo(Scaleform::Render::PNG::PngContext *context)
{
  _JBTYPE *v1; // rax
  Scaleform::Render::PNG::PngContext *v3; // rbx
  int *p_colorType; // rdi
  long double file_gamma[2]; // [rsp+50h] [rbp-38h] BYREF

  v1 = (_JBTYPE *)png_set_longjmp_fn(context->png_ptr, longjmp, 0x100ui64);
  if ( setjmp(v1) )
    return 0i64;
  v3 = context;
  png_set_sig_bytes(context->png_ptr, 8);
  png_read_info(v3->png_ptr, v3->info_ptr);
  p_colorType = &context->colorType;
  png_get_IHDR(
    v3->png_ptr,
    v3->info_ptr,
    &v3->width,
    &v3->height,
    &v3->bitDepth,
    &v3->colorType,
    &v3->interlaceType,
    0i64,
    0i64);
  if ( context->bitDepth == 16 )
    png_set_strip_16(context->png_ptr);
  if ( *p_colorType == 3 )
    png_set_tRNS_to_alpha(context->png_ptr);
  if ( context->bitDepth < 8 )
    png_set_expand_gray_1_2_4_to_8(context->png_ptr);
  if ( (unsigned int)png_get_valid(context->png_ptr, context->info_ptr, 0x10u) )
    png_set_tRNS_to_alpha(context->png_ptr);
  if ( (*p_colorType & 0xFFFFFFFB) == 0 )
    png_set_gray_to_rgb(context->png_ptr);
  if ( (unsigned int)png_get_gAMA(context->png_ptr, context->info_ptr, file_gamma) )
    png_set_gamma(context->png_ptr, 2.2, file_gamma[0]);
  png_read_update_info(context->png_ptr, context->info_ptr);
  png_get_IHDR(
    context->png_ptr,
    context->info_ptr,
    &context->width,
    &context->height,
    &context->bitDepth,
    &context->colorType,
    &context->interlaceType,
    0i64,
    0i64);
  context->ulRowBytes = png_get_rowbytes(context->png_ptr, context->info_ptr);
  return 1i64;
}

void __fastcall Scaleform::Render::SubImage::GetAsImage(std::_Wrap_alloc<std::allocator<AgString> > *this)
{
  ;
}

__int64 __fastcall ActorOption::GetActorType(Scaleform::GFx::AS3::Instances::fl::XMLProcInstr *this)
{
  return 4i64;
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStartingPos(
        AgDisplay *this)
{
  return (unsigned int)this->m_windowMode;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

std::pair<int,int> *__fastcall Scaleform::Render::PNG::LibPNGInput::GetSize(
        AgAudioSource *this,
        std::pair<int,int> *result)
{
  *result = *(std::pair<int,int> *)&this->m_loopStart;
  return result;
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::TextureImage::GetSize(
        Scaleform::Render::TextureImage *this,
        Scaleform::Render::Size<unsigned long> *result)
{
  *result = this->Size;
  return result;
}

__int64 __fastcall AgDisplay::getVsyncEnabled(AgDisplay *this)
{
  return (unsigned int)this->m_vsync;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

bool __fastcall Scaleform::Render::PNG::FileReader::MatchFormat(
        Scaleform::Render::PNG::FileReader *this,
        Scaleform::File *file,
        unsigned __int8 *headerArg,
        unsigned __int64 headerArgSize)
{
  Scaleform::Render::FileHeaderReaderImpl v5; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 tempBuffer[8]; // [rsp+38h] [rbp-20h] BYREF

  Scaleform::Render::FileHeaderReaderImpl::FileHeaderReaderImpl(&v5, file, headerArg, headerArgSize, tempBuffer, 8u);
  return v5.pHeader && png_sig_cmp(v5.pHeader, 0i64, 8ui64) == 0;
}

__int64 __fastcall Scaleform::Render::PNG::LibPNGInput::ReadData(
        Scaleform::Render::PNG::LibPNGInput *this,
        void **ppData)
{
  png_read_image(this->Context.png_ptr, (unsigned __int8 **)ppData);
  return 1i64;
}

char __fastcall Scaleform::Render::PNG::PNGFileImageSource::ReadHeader(
        Scaleform::Render::PNG::PNGFileImageSource *this)
{
  Scaleform::File *pObject; // rdi
  Scaleform::Render::PNG::LibPNGInput *v3; // rax
  __int64 v4; // rax
  Scaleform::Render::PNG::Input *v5; // rcx
  unsigned int *v7; // rax
  unsigned int v8; // ecx
  char v9; // [rsp+30h] [rbp+8h] BYREF

  pObject = this->pFile.pObject;
  if ( pObject )
  {
    if ( pObject->IsValid(this->pFile.pObject) )
    {
      v3 = (Scaleform::Render::PNG::LibPNGInput *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    424i64,
                                                    0i64);
      if ( v3 )
      {
        Scaleform::Render::PNG::LibPNGInput::LibPNGInput(v3, pObject);
        v5 = (Scaleform::Render::PNG::Input *)v4;
        if ( v4 )
        {
          if ( *(_BYTE *)(v4 + 416) )
            goto LABEL_8;
          (**(void (__fastcall ***)(__int64, __int64))v4)(v4, 1i64);
        }
      }
    }
  }
  v5 = 0i64;
LABEL_8:
  this->pOriginalInput = v5;
  if ( !v5 )
    return 0;
  v7 = (unsigned int *)v5->GetSize(v5, (Scaleform::Render::Size<unsigned long> *)&v9);
  v8 = v7[1];
  this->Size.Width = *v7;
  this->Size.Height = v8;
  if ( this->Format == Image_None )
    this->Format = Image_R8G8B8A8;
  return 1;
}

Scaleform::Render::PNG::PNGFileImageSource *__fastcall Scaleform::Render::PNG::FileReader::ReadImageSource(
        Scaleform::Render::PNG::FileReader *this,
        Scaleform::File *file,
        const Scaleform::Render::ImageCreateArgs *args)
{
  Scaleform::Render::FileImageSource *v5; // rax
  Scaleform::Render::PNG::PNGFileImageSource *v6; // rbx

  if ( file && file->IsValid(file) )
  {
    v5 = (Scaleform::Render::FileImageSource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 64i64);
    v6 = (Scaleform::Render::PNG::PNGFileImageSource *)v5;
    if ( v5 )
    {
      Scaleform::Render::FileImageSource::FileImageSource(v5, file, args->Format, 0i64);
      v6->pOriginalInput = 0i64;
      v6->__vftable = (Scaleform::Render::PNG::PNGFileImageSource_vtbl *)&Scaleform::Render::PNG::PNGFileImageSource::`vftable';
      if ( Scaleform::Render::PNG::PNGFileImageSource::ReadHeader(v6) )
        return v6;
      v6->Release(v6);
    }
    return 0i64;
  }
  return 0i64;
}

__int64 __fastcall Scaleform::Render::PNG::LibPNGInput::ReadScanline(
        Scaleform::Render::PNG::LibPNGInput *this,
        unsigned __int8 *prgbData)
{
  png_read_row(this->Context.png_ptr, prgbData, 0i64);
  return 1i64;
}

bool __fastcall Scaleform::Render::PNG::LibPNGInput::StartImage(Scaleform::Render::PNG::LibPNGInput *this)
{
  png_struct_def *v2; // rax
  png_info_def *info_struct; // rax

  if ( this->IsInitialized )
  {
    LOBYTE(v2) = 1;
  }
  else
  {
    this->pFile.pObject->SeekToBegin(this->pFile.pObject);
    this->pFile.pObject->SkipBytes(this->pFile.pObject, 8);
    v2 = png_create_read_struct("1.6.10", &this->Context, Scaleform::Render::PNG::png_error_handler, 0i64);
    this->Context.png_ptr = v2;
    if ( v2 )
    {
      info_struct = png_create_info_struct(v2);
      this->Context.info_ptr = info_struct;
      if ( info_struct )
      {
        png_set_read_fn(this->Context.png_ptr, this->pFile.pObject, Scaleform::Render::PNG::png_read_data);
        if ( (unsigned int)Scaleform::Render::PNG::GFxPngReadInfo(&this->Context) )
        {
          LOBYTE(v2) = 1;
          this->IsInitialized = 1;
        }
        else
        {
          png_destroy_read_struct(&this->Context.png_ptr, &this->Context.info_ptr, 0i64);
          LOBYTE(v2) = 0;
        }
      }
      else
      {
        png_destroy_read_struct(&this->Context.png_ptr, 0i64, 0i64);
        LOBYTE(v2) = 0;
      }
    }
  }
  return (char)v2;
}

char __fastcall Scaleform::Render::PNG::FileWriter::Write(
        Scaleform::Render::PNG::FileWriter *this,
        Scaleform::File *file,
        const Scaleform::Render::ImageData *imageData,
        const Scaleform::Render::ImageWriteArgs *args)
{
  unsigned int v6; // ebx
  const char *v7; // rax
  Scaleform::Render::ImageFormat Format; // eax
  png_struct_def *v9; // rax
  _JBTYPE *v10; // rax
  _JBTYPE *v11; // rax
  unsigned __int8 **v13; // rax
  unsigned __int8 **v14; // rdi
  __int64 v15; // r8
  _JBTYPE *v16; // rax
  png_struct_def *error_ptr; // [rsp+60h] [rbp-A0h] BYREF
  png_info_def *info_ptr; // [rsp+68h] [rbp-98h]
  unsigned int Width; // [rsp+70h] [rbp-90h]
  unsigned int Height; // [rsp+74h] [rbp-8Ch]
  int bit_depth; // [rsp+78h] [rbp-88h]
  int color_type; // [rsp+7Ch] [rbp-84h]
  char destination[260]; // [rsp+ECh] [rbp-14h] BYREF

  if ( !file )
    return 0;
  if ( !file->IsValid(file) )
    return 0;
  v6 = 0;
  v7 = file->GetFilePath(file);
  strcpy_s(destination, 0x100ui64, v7);
  Width = imageData->pPlanes->Width;
  Height = imageData->pPlanes->Height;
  Format = imageData->Format;
  if ( imageData->Format <= Image_None )
    return 0;
  if ( Format > Image_B8G8R8A8 )
  {
    if ( Format <= Image_B8G8R8 )
    {
      color_type = 2;
      goto LABEL_8;
    }
    return 0;
  }
  color_type = 6;
LABEL_8:
  bit_depth = 8;
  v9 = png_create_write_struct("1.6.10", &error_ptr, Scaleform::Render::PNG::png_error_handler, 0i64);
  error_ptr = v9;
  if ( !v9 )
    return 0;
  info_ptr = png_create_info_struct(v9);
  if ( !info_ptr )
    return 0;
  png_set_write_fn(error_ptr, file, Scaleform::Render::PNG::png_write_data, 0i64);
  v10 = (_JBTYPE *)png_set_longjmp_fn(error_ptr, longjmp, 0x100ui64);
  if ( setjmp(v10) )
    return 0;
  png_set_IHDR(
    error_ptr,
    info_ptr,
    imageData->pPlanes->Width,
    imageData->pPlanes->Height,
    bit_depth,
    color_type,
    0,
    0,
    0);
  png_write_info(error_ptr, info_ptr);
  v11 = (_JBTYPE *)png_set_longjmp_fn(error_ptr, longjmp, 0x100ui64);
  if ( setjmp(v11) )
    return 0;
  v13 = (unsigned __int8 **)Scaleform::Memory::pGlobalHeap->Alloc(
                              Scaleform::Memory::pGlobalHeap,
                              8i64 * imageData->pPlanes->Height,
                              0i64);
  v14 = v13;
  if ( Height )
  {
    do
    {
      v15 = v6++;
      v13[v15] = &imageData->pPlanes->pData[v15 * imageData->pPlanes->Pitch];
    }
    while ( v6 < Height );
  }
  png_write_image(error_ptr, v13);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v14);
  v16 = (_JBTYPE *)png_set_longjmp_fn(error_ptr, longjmp, 0x100ui64);
  if ( setjmp(v16) )
    return 0;
  png_write_end(error_ptr, 0i64);
  return 1;
}

void __fastcall __noreturn Scaleform::Render::PNG::png_error_handler(png_struct_def *png_ptr, const char *msg)
{
  unsigned __int64 v4; // rbx
  char *error_ptr; // rsi
  char *v6; // rcx

  v4 = -1i64;
  do
    ++v4;
  while ( msg[v4] );
  error_ptr = (char *)png_get_error_ptr(png_ptr);
  v6 = error_ptr + 40;
  if ( v4 >= 0x64 )
  {
    strncpy_s(v6, 0x64ui64, msg, 0x63ui64);
    error_ptr[139] = 0;
  }
  else
  {
    strcpy_s(v6, 0x64ui64, msg);
  }
  png_longjmp(png_ptr, 1i64);
}

void __fastcall Scaleform::Render::PNG::png_read_data(
        png_struct_def *png_ptr,
        unsigned __int8 *data,
        unsigned __int64 length)
{
  void *io_ptr; // rax
  int v7; // eax

  io_ptr = png_get_io_ptr(png_ptr);
  v7 = (*(__int64 (__fastcall **)(void *, unsigned __int8 *, _QWORD))(*(_QWORD *)io_ptr + 80i64))(
         io_ptr,
         data,
         (unsigned int)length);
  if ( v7 < 0 || v7 != length )
    png_error(png_ptr, "Read Error.");
}

void __fastcall Scaleform::Render::PNG::png_write_data(
        png_struct_def *png_ptr,
        unsigned __int8 *data,
        unsigned __int64 length)
{
  void *io_ptr; // rax
  int v7; // eax

  io_ptr = png_get_io_ptr(png_ptr);
  v7 = (*(__int64 (__fastcall **)(void *, unsigned __int8 *, _QWORD))(*(_QWORD *)io_ptr + 72i64))(
         io_ptr,
         data,
         (unsigned int)length);
  if ( v7 < 0 || v7 != length )
    png_error(png_ptr, "Write Error.");
}

