#pragma once

class Scaleform::GFx::ZlibImageSource :
	Scaleform::Render::FileImageSource
{
	enum SourceBitmapDataFormat
	{
		ColorMappedRGB = 0,
		RGB16 = 1,
		RGB24 = 2,
		ColorMappedRGBA = 3,
		RGBA = 4,
	};
protected:
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> Zlib; // 0x38
	unsigned short ColorTableSize; // 0x40
	Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat BitmapFormatId; // 0x44
public:
	ZlibImageSource(const Scaleform::GFx::ZlibImageSource &);
	ZlibImageSource(Scaleform::GFx::ZlibSupportBase *, Scaleform::File *, const Scaleform::Render::Size<unsigned long> &, Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat, Scaleform::Render::ImageFormat, unsigned short, unsigned long long);
	virtual ~ZlibImageSource();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual Scaleform::Render::Image * CreateCompatibleImage(const Scaleform::Render::ImageCreateArgs &);
	virtual unsigned long GetMipmapCount();
	Scaleform::GFx::ZlibImageSource & operator=(const Scaleform::GFx::ZlibImageSource &);
};
unsigned long Scaleform::GFx::ZlibImageSource::GetMipmapCount(); // 0x1400482A0
class Scaleform::GFx::MemoryBufferZlibImage :
	Scaleform::Render::MemoryBufferImage
{
	enum SourceBitmapDataFormat
	{
		ColorMappedRGB = 0,
		RGB16 = 1,
		RGB24 = 2,
		ColorMappedRGBA = 3,
		RGBA = 4,
	};
protected:
	Scaleform::Ptr<Scaleform::GFx::ZlibSupportBase> Zlib; // 0x58
	unsigned short ColorTableSize; // 0x60
	Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat BitmapFormatId; // 0x64
public:
	MemoryBufferZlibImage(Scaleform::GFx::MemoryBufferZlibImage &);
	MemoryBufferZlibImage(const Scaleform::GFx::MemoryBufferZlibImage &);
	MemoryBufferZlibImage(Scaleform::GFx::ZlibSupportBase *, Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat, unsigned short, unsigned long, Scaleform::Render::ImageUpdateSync *, Scaleform::File *, long long, unsigned long long);
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual ~MemoryBufferZlibImage();
	Scaleform::GFx::MemoryBufferZlibImage & operator=(Scaleform::GFx::MemoryBufferZlibImage &);
	Scaleform::GFx::MemoryBufferZlibImage & operator=(const Scaleform::GFx::MemoryBufferZlibImage &);
};
Scaleform::GFx::MemoryBufferZlibImage::MemoryBufferZlibImage(Scaleform::GFx::ZlibSupportBase * zlib, Scaleform::Render::ImageFormat format, const Scaleform::Render::Size<unsigned long> & size, Scaleform::GFx::ZlibImageSource::SourceBitmapDataFormat bmpFormatId, unsigned short colorTableSize, unsigned long use, Scaleform::Render::ImageUpdateSync * sync, Scaleform::File * file, long long filePos, unsigned long long length); // 0x1403F97F0