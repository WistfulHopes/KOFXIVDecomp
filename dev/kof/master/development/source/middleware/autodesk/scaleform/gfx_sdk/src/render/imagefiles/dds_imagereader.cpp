#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefileutil.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/dds_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"

enum Scaleform::Render::DDS::DDSFlags
{
	DDSF_CAPS = 1,
	DDSF_HEIGHT = 2,
	DDSF_WIDTH = 4,
	DDSF_PITCH = 8,
	DDSF_BACKBUFFERCOUNT = 32,
	DDSF_ZBUFFERBITDEPTH = 64,
	DDSF_ALPHABITDEPTH = 128,
	DDSF_LPSURFACE = 2048,
	DDSF_PIXELFORMAT = 4096,
	DDSF_CKDESTOVERLAY = 8192,
	DDSF_CKDESTBLT = 16384,
	DDSF_CKSRCOVERLAY = 32768,
	DDSF_CKSRCBLT = 65536,
	DDSF_MIPMAPCOUNT = 131072,
	DDSF_REFRESHRATE = 262144,
	DDSF_LINEARSIZE = 524288,
	DDSF_TEXTURESTAGE = 1048576,
	DDSF_FVF = 2097152,
	DDSF_SRCVBHANDLE = 4194304,
	DDSF_DEPTH = 8388608,
};
enum Scaleform::Render::DDS::DDSPixelFormat
{
	DDSPF_ALPHAPIXELS = 1,
	DDSPF_ALPHA = 2,
	DDSPF_FOURCC = 4,
	DDSPF_PALETTEINDEXED4 = 8,
	DDSPF_PALETTEINDEXEDTO8 = 16,
	DDSPF_PALETTEINDEXED8 = 32,
	DDSPF_RGB = 64,
	DDSPF_COMPRESSED = 128,
};
struct Scaleform::Render::DDS::DDSDescr
{
	unsigned long RGBBitCount; // 0x0
	unsigned long RBitMask; // 0x4
	unsigned long GBitMask; // 0x8
	unsigned long BBitMask; // 0xC
	unsigned long ABitMask; // 0x10
	bool HasAlpha; // 0x14
	unsigned char ShiftR; // 0x15
	unsigned char ShiftG; // 0x16
	unsigned char ShiftB; // 0x17
	unsigned char ShiftA; // 0x18
	DDSDescr();
	static unsigned char CalcShiftByMask(unsigned long);
	void CalcShifts();
};
Scaleform::Render::DDS::FileReader Scaleform::Render::DDS::FileReader::Instance; // 0x1409F99F8
void(*Scaleform::Render::DDS::FileReader::nstance$initializer$::operator&)(); // 0x140739CF8
void Scaleform::Render::DDS::DDSDescr::CalcShifts(); // 0x14037E8C0
struct Scaleform::Render::DDS::DDSHeaderInfo
{
	unsigned long Width; // 0x0
	unsigned long Height; // 0x4
	unsigned long Pitch; // 0x8
	Scaleform::Render::ImageFormat Format; // 0xC
	unsigned long MipmapCount; // 0x10
	Scaleform::Render::DDS::DDSDescr DDSFmt; // 0x14
	bool OppositeEndian; // 0x30
	DDSHeaderInfo();
};
class Scaleform::Render::DDS::DDSFileImageSource :
	Scaleform::Render::FileImageSource
{
private:
	Scaleform::Render::DDS::DDSHeaderInfo HeaderInfo; // 0x38
public:
	DDSFileImageSource(const Scaleform::Render::DDS::DDSFileImageSource &);
	DDSFileImageSource(Scaleform::File *, Scaleform::Render::ImageFormat);
	virtual ~DDSFileImageSource();
	bool ReadHeader();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual unsigned long GetMipmapCount();
	Scaleform::Render::DDS::DDSFileImageSource & operator=(const Scaleform::Render::DDS::DDSFileImageSource &);
};
Scaleform::Render::DDS::DDSFileImageSource::DDSFileImageSource(Scaleform::File * file, Scaleform::Render::ImageFormat format); // 0x14037E7F0
unsigned long Scaleform::Render::DDS::DDSFileImageSource::GetMipmapCount(); // 0x1406B7250
bool Scaleform::Render::DDS::Image_ParseDDSHeader(Scaleform::Render::DDS::DDSHeaderInfo * pinfo, const unsigned char * buf, const unsigned char * * pdata); // 0x14037EC50
bool Scaleform::Render::DDS::ProcessUDDSData(unsigned char * buffer, unsigned long long size, Scaleform::Render::ImageFormat format, const Scaleform::Render::DDS::DDSDescr & ddsFmt); // 0x14037EDF0
bool Scaleform::Render::DDS::DDSFileImageSource::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x14037EA00
class Scaleform::Render::ImageScanlineBuffer<4096> :
	Scaleform::Render::ImageScanlineBufferImpl
{
private:
	unsigned char TempBuffer[4096]; // 0x40
public:
	ImageScanlineBuffer<4096>(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImageFormat);
	~ImageScanlineBuffer<4096>();
};
bool Scaleform::Render::DDS::DDSFileImageSource::ReadHeader(); // 0x14037EF40
bool Scaleform::Render::DDS::FileReader::MatchFormat(Scaleform::File * file, unsigned char * headerArg, unsigned long long headerArgSize); // 0x14037E6E0
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
Scaleform::Render::ImageSource * Scaleform::Render::DDS::FileReader::ReadImageSource(Scaleform::File * file, const Scaleform::Render::ImageCreateArgs & args); // 0x14037E760//decompilation failure at 1409F99F8!
//decompilation failure at 140739CF8!
void __fastcall Scaleform::Render::DDS::DDSFileImageSource::DDSFileImageSource(
        Scaleform::Render::DDS::DDSFileImageSource *this,
        Scaleform::File *file,
        Scaleform::Render::ImageFormat format)
{
  unsigned __int8 ShiftA; // al

  Scaleform::Render::FileImageSource::FileImageSource(this, file, format, 0i64);
  this->__vftable = (Scaleform::Render::DDS::DDSFileImageSource_vtbl *)&Scaleform::Render::DDS::DDSFileImageSource::`vftable';
  *(_QWORD *)&this->HeaderInfo.Width = 0i64;
  *(_QWORD *)&this->HeaderInfo.Pitch = 0i64;
  *(_QWORD *)&this->HeaderInfo.MipmapCount = 1i64;
  *(_QWORD *)&this->HeaderInfo.DDSFmt.BBitMask = 0i64;
  *(_QWORD *)&this->HeaderInfo.DDSFmt.RBitMask = 0i64;
  ShiftA = this->HeaderInfo.DDSFmt.ShiftA;
  this->HeaderInfo.DDSFmt.ShiftB = ShiftA;
  this->HeaderInfo.DDSFmt.ShiftG = ShiftA;
  this->HeaderInfo.DDSFmt.ShiftR = ShiftA;
  this->HeaderInfo.DDSFmt.HasAlpha = 0;
  this->HeaderInfo.OppositeEndian = 0;
}

void __fastcall Scaleform::Render::DDS::DDSDescr::CalcShifts(Scaleform::Render::DDS::DDSDescr *this)
{
  unsigned int RBitMask; // edx
  unsigned __int8 v2; // r8
  unsigned __int8 v4; // r9
  int v5; // edx
  unsigned int GBitMask; // ecx
  unsigned int BBitMask; // ecx
  int v8; // edx
  unsigned int ABitMask; // ecx

  RBitMask = this->RBitMask;
  v2 = 0;
  v4 = 0;
  if ( RBitMask )
  {
    if ( (RBitMask & 0xFFFFFF) != 0 )
    {
      if ( (_WORD)RBitMask )
      {
        if ( !(_BYTE)RBitMask )
        {
          RBitMask >>= 8;
          v4 = 8;
        }
      }
      else
      {
        RBitMask >>= 16;
        v4 = 16;
      }
    }
    else
    {
      RBitMask >>= 24;
      v4 = 24;
    }
    for ( ; (RBitMask & 1) == 0; ++v4 )
      RBitMask >>= 1;
  }
  this->ShiftR = v4;
  v5 = 0;
  GBitMask = this->GBitMask;
  if ( GBitMask )
  {
    if ( (GBitMask & 0xFFFFFF) != 0 )
    {
      if ( (_WORD)GBitMask )
      {
        if ( !(_BYTE)GBitMask )
        {
          GBitMask >>= 8;
          v5 = 8;
        }
      }
      else
      {
        GBitMask >>= 16;
        v5 = 16;
      }
    }
    else
    {
      GBitMask >>= 24;
      v5 = 24;
    }
    for ( ; (GBitMask & 1) == 0; ++v5 )
      GBitMask >>= 1;
  }
  BBitMask = this->BBitMask;
  this->ShiftG = v5;
  v8 = 0;
  if ( BBitMask )
  {
    if ( (BBitMask & 0xFFFFFF) != 0 )
    {
      if ( (_WORD)BBitMask )
      {
        if ( !(_BYTE)BBitMask )
        {
          BBitMask >>= 8;
          v8 = 8;
        }
      }
      else
      {
        BBitMask >>= 16;
        v8 = 16;
      }
    }
    else
    {
      BBitMask >>= 24;
      v8 = 24;
    }
    for ( ; (BBitMask & 1) == 0; ++v8 )
      BBitMask >>= 1;
  }
  ABitMask = this->ABitMask;
  this->ShiftB = v8;
  if ( ABitMask )
  {
    if ( (ABitMask & 0xFFFFFF) != 0 )
    {
      if ( (_WORD)ABitMask )
      {
        if ( !(_BYTE)ABitMask )
        {
          ABitMask >>= 8;
          v2 = 8;
        }
      }
      else
      {
        ABitMask >>= 16;
        v2 = 16;
      }
    }
    else
    {
      ABitMask >>= 24;
      v2 = 24;
    }
    for ( ; (ABitMask & 1) == 0; ++v2 )
      ABitMask >>= 1;
  }
  this->ShiftA = v2;
}

bool __fastcall Scaleform::Render::DDS::DDSFileImageSource::Decode(
        Scaleform::Render::DDS::DDSFileImageSource *this,
        Scaleform::Render::ImageData *pdest,
        void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *),
        void *arg)
{
  bool result; // al
  unsigned int Height; // ebp
  unsigned int v9; // esi
  unsigned int v10; // er12
  unsigned int Width; // er15
  bool v12; // zf
  unsigned int FormatPlaneCount; // eax
  unsigned __int64 ReadScanlineSize_low; // rdi
  Scaleform::Render::ImageFormat Format; // er8
  Scaleform::Render::ImagePlane pplane; // [rsp+30h] [rbp-10C8h] BYREF
  void *scanlineArg; // [rsp+50h] [rbp-10A8h]
  Scaleform::Render::ImageScanlineBufferImpl v18; // [rsp+60h] [rbp-1098h] BYREF
  unsigned __int8 tempBuffer[4096]; // [rsp+A0h] [rbp-1058h] BYREF

  scanlineArg = arg;
  result = Scaleform::Render::FileImageSource::seekFileToDecodeStart(this);
  if ( result )
  {
    Height = this->Size.Height;
    v9 = 0;
    v10 = 0;
    Width = this->Size.Width;
    if ( pdest->LevelCount )
    {
      while ( 1 )
      {
        v12 = (pdest->Flags & 1) == 0;
        memset(&pplane, 0, sizeof(pplane));
        if ( v12 )
        {
          Scaleform::Render::ImagePlane::GetMipLevel(pdest->pPlanes, pdest->Format, v10, &pplane, 0);
        }
        else
        {
          FormatPlaneCount = Scaleform::Render::ImageData::GetFormatPlaneCount(pdest->Format);
          Scaleform::Render::ImageData::GetPlane(pdest, v10 * FormatPlaneCount, &pplane);
        }
        Scaleform::Render::ImageScanlineBufferImpl::ImageScanlineBufferImpl(
          &v18,
          this->HeaderInfo.Format,
          Width,
          this->Format,
          tempBuffer,
          0x1000ui64);
        ReadScanlineSize_low = SLODWORD(v18.ReadScanlineSize);
        if ( v18.ReadFormat == Image_None || !v18.Width || !v18.pReadScanline )
          break;
        if ( Scaleform::Render::ImageData::GetFormatScanlineCount(this->Format, Height, 0) )
        {
          while ( this->pFile.pObject->Read(this->pFile.pObject, v18.pReadScanline, ReadScanlineSize_low) == (_DWORD)ReadScanlineSize_low )
          {
            Format = this->Format;
            if ( ((Format - 1) & 0xFFFFFFFD) == 0 )
              Scaleform::Render::DDS::ProcessUDDSData(
                v18.pReadScanline,
                ReadScanlineSize_low,
                Format,
                &this->HeaderInfo.DDSFmt);
            Scaleform::Render::ImageScanlineBufferImpl::ConvertReadBuffer(
              &v18,
              &pplane.pData[pplane.Pitch * v9++],
              0i64,
              copyScanline,
              scanlineArg);
            if ( v9 >= Scaleform::Render::ImageData::GetFormatScanlineCount(this->Format, Height, 0) )
              goto LABEL_14;
          }
          break;
        }
LABEL_14:
        Width >>= 1;
        if ( !Width )
          Width = 1;
        Height >>= 1;
        if ( !Height )
          Height = 1;
        Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(&v18);
        if ( ++v10 >= pdest->LevelCount )
          return 1;
        v9 = 0;
      }
      Scaleform::Render::ImageScanlineBufferImpl::~ImageScanlineBufferImpl(&v18);
      return 0;
    }
    else
    {
      return 1;
    }
  }
  return result;
}

__int64 __fastcall Scaleform::Render::DICommand_Clear::GetType(Scaleform::GFx::AS3::Instances::fl::XMLComment *this)
{
  return 3i64;
}

__int64 __fastcall Scaleform::Render::DDS::DDSFileImageSource::GetMipmapCount(
        Concurrency::details::ExecutionResource *this)
{
  return this->m_executionResourceId;
}

char __fastcall Scaleform::Render::DDS::Image_ParseDDSHeader(
        Scaleform::Render::DDS::DDSHeaderInfo *pinfo,
        const unsigned __int8 *buf,
        const unsigned __int8 **pdata)
{
  int v3; // er10
  unsigned int v6; // eax
  int v7; // er8
  int v8; // edx
  const unsigned __int8 *v9; // r9
  unsigned int v10; // eax
  unsigned int v11; // eax

  v3 = *(_DWORD *)buf;
  if ( (*(_DWORD *)buf & 2) != 0 )
    pinfo->Height = *((_DWORD *)buf + 1);
  if ( (v3 & 4) != 0 )
    pinfo->Width = *((_DWORD *)buf + 2);
  if ( (pinfo->Width & 3) != 0 )
    pinfo->Width = pinfo->Width - (pinfo->Width & 3) + 4;
  v6 = *((_DWORD *)buf + 3);
  if ( (v3 & 8) == 0 )
  {
    if ( (v3 & 0x80000) == 0 )
      goto LABEL_11;
    v6 = 4 * (v6 / pinfo->Height);
  }
  pinfo->Pitch = v6;
LABEL_11:
  if ( (v3 & 0x20000) != 0 )
    pinfo->MipmapCount = *((_DWORD *)buf + 5);
  if ( (v3 & 0x1000) == 0 )
  {
    v9 = buf + 100;
    goto LABEL_40;
  }
  if ( *((_DWORD *)buf + 17) != 32 )
    return 0;
  v7 = *((_DWORD *)buf + 18);
  v8 = *((_DWORD *)buf + 19);
  v9 = buf + 80;
  if ( (v7 & 4) == 0 )
  {
    if ( (v7 & 0x42) == 0 )
      goto LABEL_37;
    v10 = *(_DWORD *)v9;
    pinfo->DDSFmt.RGBBitCount = *(_DWORD *)v9;
    switch ( v10 )
    {
      case 8u:
        if ( (v7 & 2) != 0 )
        {
          pinfo->Format = Image_A8;
          goto LABEL_33;
        }
        break;
      case 0x18u:
        pinfo->Format = Image_R8G8B8;
        goto LABEL_33;
      case 0x20u:
        pinfo->Format = Image_R8G8B8A8;
LABEL_33:
        if ( (v3 & 8) == 0 )
          pinfo->Pitch = pinfo->Width * (v10 >> 3);
        pinfo->DDSFmt.RBitMask = *((_DWORD *)v9 + 1);
        pinfo->DDSFmt.GBitMask = *((_DWORD *)v9 + 2);
        pinfo->DDSFmt.BBitMask = *((_DWORD *)v9 + 3);
        v11 = *((_DWORD *)v9 + 4);
        v9 += 20;
        if ( (v7 & 1) != 0 )
        {
          pinfo->DDSFmt.ABitMask = v11;
          pinfo->DDSFmt.HasAlpha = 1;
        }
        goto LABEL_37;
    }
    return 0;
  }
  switch ( v8 )
  {
    case 894720068:
      pinfo->Format = Image_DXT5;
      v9 += 20;
      break;
    case 861165636:
      pinfo->Format = Image_DXT3;
      v9 += 20;
      break;
    case 827611204:
      pinfo->Format = Image_DXT1;
      v9 += 20;
      break;
    default:
      if ( ((v8 - 844388420) & 0xFDFFFFFF) == 0 || v8 != 808540228 )
        return 0;
      pinfo->Format = Image_BC7;
      v9 += 20;
      break;
  }
LABEL_37:
  if ( pinfo->Format == Image_None )
    return 0;
LABEL_40:
  if ( pdata )
    *pdata = v9 + 20;
  return 1;
}

bool __fastcall Scaleform::Render::DDS::FileReader::MatchFormat(
        Scaleform::Render::DDS::FileReader *this,
        Scaleform::File *file,
        unsigned __int8 *headerArg,
        unsigned __int64 headerArgSize)
{
  Scaleform::Render::FileHeaderReaderImpl v5; // [rsp+30h] [rbp-28h] BYREF
  unsigned __int8 tempBuffer[8]; // [rsp+38h] [rbp-20h] BYREF

  Scaleform::Render::FileHeaderReaderImpl::FileHeaderReaderImpl(&v5, file, headerArg, headerArgSize, tempBuffer, 4u);
  return v5.pHeader && *v5.pHeader == 68 && v5.pHeader[1] == 68 && v5.pHeader[2] == 83 && v5.pHeader[3] == 32;
}

char __fastcall Scaleform::Render::DDS::ProcessUDDSData(
        unsigned __int8 *buffer,
        unsigned __int64 size,
        Scaleform::Render::ImageFormat format,
        const Scaleform::Render::DDS::DDSDescr *ddsFmt)
{
  unsigned __int64 v6; // r10
  unsigned int v7; // er11
  __int64 v8; // rdx
  __int64 v9; // r8
  unsigned int v10; // er9
  unsigned __int64 v12; // r10
  int v13; // er11
  __int64 v14; // rdx
  __int64 v15; // r8
  unsigned int v16; // eax

  if ( format != Image_R8G8B8 )
  {
    if ( format == Image_R8G8B8A8 && size )
    {
      v12 = 0i64;
      v13 = 3;
      do
      {
        v14 = (unsigned int)(v13 - 2);
        v15 = (unsigned int)(v14 + 1);
        v16 = buffer[v12] | ((buffer[v14] | ((buffer[v15] | (buffer[v13] << 8)) << 8)) << 8);
        buffer[v15] = v16 >> ddsFmt->ShiftB;
        buffer[v14] = v16 >> ddsFmt->ShiftG;
        buffer[v12] = v16 >> ddsFmt->ShiftR;
        if ( ddsFmt->HasAlpha )
          buffer[v13] = v16 >> ddsFmt->ShiftA;
        else
          buffer[v13] = -1;
        v13 += 4;
        v12 = (unsigned int)(v13 - 3);
      }
      while ( v12 < size );
    }
    return 1;
  }
  if ( !size )
    return 1;
  v6 = 0i64;
  v7 = 1;
  do
  {
    v8 = v7 + 1;
    v9 = v7;
    v7 += 3;
    v10 = buffer[v6] | ((buffer[v9] | (buffer[v8] << 8)) << 8);
    buffer[v8] = v10 >> ddsFmt->ShiftB;
    buffer[v9] = v10 >> ddsFmt->ShiftG;
    buffer[v6] = v10 >> ddsFmt->ShiftR;
    v6 = v7 - 1;
  }
  while ( v6 < size );
  return 1;
}

char __fastcall Scaleform::Render::DDS::DDSFileImageSource::ReadHeader(
        Scaleform::Render::DDS::DDSFileImageSource *this)
{
  char result; // al
  Scaleform::File *pObject; // rcx
  unsigned int Height; // ecx
  int v5; // [rsp+20h] [rbp-128h] BYREF
  int v6[3]; // [rsp+24h] [rbp-124h] BYREF
  unsigned __int8 buf[256]; // [rsp+30h] [rbp-118h] BYREF

  this->pFile.pObject->Read(this->pFile.pObject, (unsigned __int8 *)v6, 4);
  if ( v6[0] != 542327876 )
    return 0;
  pObject = this->pFile.pObject;
  v5 = 0;
  pObject->Read(pObject, (unsigned __int8 *)&v5, 4);
  if ( v5 != 124 || this->pFile.pObject->Read(this->pFile.pObject, buf, 120) != 120 )
    return 0;
  result = Scaleform::Render::DDS::Image_ParseDDSHeader(&this->HeaderInfo, buf, 0i64);
  if ( result )
  {
    if ( this->HeaderInfo.Format == Image_BC7 )
      this->pFile.pObject->Seek(this->pFile.pObject, 20, 1);
    this->HeaderInfo.OppositeEndian = 0;
    Scaleform::Render::DDS::DDSDescr::CalcShifts(&this->HeaderInfo.DDSFmt);
    if ( this->Format == Image_None )
      this->Format = this->HeaderInfo.Format;
    Height = this->HeaderInfo.Height;
    this->Size.Width = this->HeaderInfo.Width;
    this->Size.Height = Height;
    this->FilePos = this->pFile.pObject->LTell(this->pFile.pObject);
    return 1;
  }
  return result;
}

Scaleform::Render::DDS::DDSFileImageSource *__fastcall Scaleform::Render::DDS::FileReader::ReadImageSource(
        Scaleform::Render::DDS::FileReader *this,
        Scaleform::File *file,
        const Scaleform::Render::ImageCreateArgs *args)
{
  Scaleform::Render::DDS::DDSFileImageSource *v5; // rax
  Scaleform::Render::DDS::DDSFileImageSource *v6; // rax
  Scaleform::Render::DDS::DDSFileImageSource *v7; // rbx

  if ( !file || !file->IsValid(file) )
    return 0i64;
  v5 = (Scaleform::Render::DDS::DDSFileImageSource *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       112i64);
  if ( !v5 )
    return 0i64;
  Scaleform::Render::DDS::DDSFileImageSource::DDSFileImageSource(v5, file, args->Format);
  v7 = v6;
  if ( v6 && !Scaleform::Render::DDS::DDSFileImageSource::ReadHeader(v6) )
  {
    v7->Release(v7);
    return 0i64;
  }
  return v7;
}

