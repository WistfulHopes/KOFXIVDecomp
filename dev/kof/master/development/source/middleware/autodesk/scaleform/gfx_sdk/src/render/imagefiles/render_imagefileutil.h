#pragma once

class Scaleform::Render::FileImageSource :
	Scaleform::Render::ImageSource
{
public:
	FileImageSource(const Scaleform::Render::FileImageSource &);
	FileImageSource(Scaleform::File *, Scaleform::Render::ImageFormat, unsigned long long);
	virtual ~FileImageSource();
	virtual Scaleform::Render::ImageFormat GetFormat();
	unsigned long GetUse();
	virtual Scaleform::Render::Size<unsigned long> GetSize();
	virtual Scaleform::Render::Image * GetAsImage();
protected:
	bool seekFileToDecodeStart();
	Scaleform::Render::ImageFormat Format; // 0x10
	Scaleform::Render::Size<unsigned long> Size; // 0x14
	unsigned long Use; // 0x1C
	Scaleform::Ptr<Scaleform::File> pFile; // 0x20
	long long FilePos; // 0x28
	unsigned long long FileLen; // 0x30
public:
	Scaleform::Render::FileImageSource & operator=(const Scaleform::Render::FileImageSource &);
};
Scaleform::Render::ImageFormat Scaleform::Render::FileImageSource::GetFormat(); // 0x14017D8E0
unsigned long Scaleform::Render::FileImageSource::GetUse(); // 0x14037CB10
Scaleform::Render::Size<unsigned long> Scaleform::Render::FileImageSource::GetSize(); // 0x14037CB00
Scaleform::Render::Image * Scaleform::Render::FileImageSource::GetAsImage(); // 0x1400470F0
class Scaleform::Render::MemoryBufferImage :
	Scaleform::Render::Image
{
public:
	MemoryBufferImage(Scaleform::Render::MemoryBufferImage &);
	MemoryBufferImage(const Scaleform::Render::MemoryBufferImage &);
	MemoryBufferImage(Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::Render::ImageUpdateSync *, const unsigned char *, unsigned long long);
	MemoryBufferImage(Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::Render::ImageUpdateSync *, Scaleform::File *, long long, unsigned long long);
	virtual Scaleform::Render::ImageFormat GetFormat();
	virtual unsigned long GetUse();
	virtual Scaleform::Render::Size<unsigned long> GetSize();
	virtual Scaleform::Render::Texture * GetTexture(Scaleform::Render::TextureManager *);
	virtual unsigned long GetMipmapCount();
	bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *) = 0;
	virtual Scaleform::Render::Image * GetAsImage();
	virtual Scaleform::Render::MemoryBufferImage * GetAsMemoryImage();
	bool GetImageDataBits(const unsigned char * *, unsigned long long *);
	void SetImageSize(Scaleform::Render::Size<unsigned long>);
	void SetFormat(Scaleform::Render::ImageFormat);
protected:
	Scaleform::Render::ImageFormat Format; // 0x28
	Scaleform::Render::Size<unsigned long> Size; // 0x2C
	unsigned long Use; // 0x34
	Scaleform::ArrayLH<unsigned char,2,Scaleform::ArrayDefaultPolicy> FileData; // 0x38
	Scaleform::StringLH FilePath; // 0x50
public:
	virtual ~MemoryBufferImage();
	Scaleform::Render::MemoryBufferImage & operator=(Scaleform::Render::MemoryBufferImage &);
	Scaleform::Render::MemoryBufferImage & operator=(const Scaleform::Render::MemoryBufferImage &);
};
Scaleform::Render::ImageFormat Scaleform::Render::MemoryBufferImage::GetFormat(); // 0x14035A420
unsigned long Scaleform::Render::MemoryBufferImage::GetUse(); // 0x1403DD110
Scaleform::Render::Size<unsigned long> Scaleform::Render::MemoryBufferImage::GetSize(); // 0x140325FC0
Scaleform::Render::Image * Scaleform::Render::MemoryBufferImage::GetAsImage(); // 0x14004EB00
class Scaleform::ArrayLH<unsigned char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<unsigned char,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<unsigned char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Render::FileHeaderReaderImpl
{
protected:
	unsigned char * pHeader; // 0x0
public:
	FileHeaderReaderImpl(Scaleform::File *, unsigned char *, unsigned long long, unsigned char *, unsigned char);
	unsigned char * GetPtr();
};
class Scaleform::Render::ImageScanlineBufferImpl
{
	typedef void(*CopyFunc)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *);
private:
	Scaleform::Render::ImageFormat ReadFormat; // 0x0
	Scaleform::Render::ImageFormat ConvertSourceFormat; // 0x4
	unsigned long Width; // 0x8
	unsigned char * pReadScanline; // 0x10
	unsigned char * pConvertScanline; // 0x18
	unsigned long long ReadScanlineSize; // 0x20
	unsigned long long ConvertScanlineSize; // 0x28
	void(*pConvertFunc)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *); // 0x30
	bool BuffersAllocated; // 0x38
public:
	ImageScanlineBufferImpl(Scaleform::Render::ImageFormat, unsigned long, Scaleform::Render::ImageFormat, unsigned char *, unsigned long long);
	~ImageScanlineBufferImpl();
	bool IsValid();
	unsigned char * GetReadBuffer();
	unsigned long long GetReadSize();
	void ConvertReadBuffer(unsigned char *, Scaleform::Render::Palette *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
};