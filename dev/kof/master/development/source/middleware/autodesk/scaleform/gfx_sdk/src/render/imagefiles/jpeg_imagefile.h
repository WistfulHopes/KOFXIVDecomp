#pragma once

class Scaleform::Render::JPEG::AbstractReader :
	Scaleform::Render::ImageFileReader
{
public:
	virtual Scaleform::Render::ImageFileFormat GetFormat();
	Scaleform::Render::ImageSource * CreateImageSource(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &, Scaleform::Render::JPEG::ExtraData *, unsigned long long, bool);
	Scaleform::Render::MemoryBufferImage * CreateMemoryBufferImage(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &, const Scaleform::Render::Size<unsigned long> &, unsigned long long);
	Scaleform::Render::ImageSource * CreateWrapperImageSource(Scaleform::Render::Image *);
	Scaleform::Render::JPEG::Input * CreateInput(Scaleform::File *);
	Scaleform::Render::JPEG::Input * CreateSwfJpeg2HeaderOnly(const unsigned char *, unsigned long long);
	Scaleform::Render::JPEG::Input * CreateSwfJpeg2HeaderOnly(Scaleform::File *);
	AbstractReader(Scaleform::Render::JPEG::AbstractReader &);
	AbstractReader(const Scaleform::Render::JPEG::AbstractReader &);
	AbstractReader();
	virtual ~AbstractReader();
	Scaleform::Render::JPEG::AbstractReader & operator=(Scaleform::Render::JPEG::AbstractReader &);
	Scaleform::Render::JPEG::AbstractReader & operator=(const Scaleform::Render::JPEG::AbstractReader &);
};
class Scaleform::Render::JPEG::AbstractWriter :
	Scaleform::Render::ImageFileWriter
{
public:
	virtual Scaleform::Render::ImageFileFormat GetFormat();
	Scaleform::Render::JPEG::Output * CreateOutput(Scaleform::File *);
	Scaleform::Render::JPEG::Output * CreateOutput(Scaleform::File *, long, long, long);
	AbstractWriter(Scaleform::Render::JPEG::AbstractWriter &);
	AbstractWriter(const Scaleform::Render::JPEG::AbstractWriter &);
	AbstractWriter();
	virtual ~AbstractWriter();
	Scaleform::Render::JPEG::AbstractWriter & operator=(Scaleform::Render::JPEG::AbstractWriter &);
	Scaleform::Render::JPEG::AbstractWriter & operator=(const Scaleform::Render::JPEG::AbstractWriter &);
};
struct Scaleform::Render::JPEG::ImageWriteArgs :
	Scaleform::Render::ImageWriteArgs
{
	ImageWriteArgs(const Scaleform::Render::JPEG::ImageWriteArgs &);
	ImageWriteArgs();
	long Quality; // 0x4
};
class Scaleform::RefCountBase<Scaleform::Render::JPEG::ExtraData,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::JPEG::ExtraData,2>(Scaleform::RefCountBase<Scaleform::Render::JPEG::ExtraData,2> &);
	RefCountBase<Scaleform::Render::JPEG::ExtraData,2>(const Scaleform::RefCountBase<Scaleform::Render::JPEG::ExtraData,2> &);
	RefCountBase<Scaleform::Render::JPEG::ExtraData,2>();
	virtual ~RefCountBase<Scaleform::Render::JPEG::ExtraData,2>();
	Scaleform::RefCountBase<Scaleform::Render::JPEG::ExtraData,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::JPEG::ExtraData,2> &);
	Scaleform::RefCountBase<Scaleform::Render::JPEG::ExtraData,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::JPEG::ExtraData,2> &);
};
struct Scaleform::Render::JPEG::ExtraData :
	Scaleform::RefCountBase<Scaleform::Render::JPEG::ExtraData,2>
{
	unsigned char * Data; // 0x10
	unsigned long long Size; // 0x18
	ExtraData(const Scaleform::Render::JPEG::ExtraData &);
	ExtraData(Scaleform::MemoryHeap *, unsigned long long);
	ExtraData();
	virtual ~ExtraData();
	void Allocate(Scaleform::MemoryHeap *, unsigned long long);
	bool IsEmpty();
	bool IsTableHeader();
	Scaleform::Render::JPEG::ExtraData & operator=(const Scaleform::Render::JPEG::ExtraData &);
};
bool Scaleform::Render::JPEG::ExtraData::IsTableHeader(); // 0x14004BBE0
struct Scaleform::Render::JPEG::TablesHeader :
	Scaleform::Render::JPEG::ExtraData
{
	TablesHeader(Scaleform::Render::JPEG::TablesHeader &);
	TablesHeader(const Scaleform::Render::JPEG::TablesHeader &);
	TablesHeader(Scaleform::MemoryHeap *, unsigned long long);
	virtual bool IsTableHeader();
	virtual ~TablesHeader();
	Scaleform::Render::JPEG::TablesHeader & operator=(Scaleform::Render::JPEG::TablesHeader &);
	Scaleform::Render::JPEG::TablesHeader & operator=(const Scaleform::Render::JPEG::TablesHeader &);
};
Scaleform::Render::JPEG::TablesHeader::TablesHeader(Scaleform::MemoryHeap * heap, unsigned long long sz); // 0x14036DDA0
bool Scaleform::GFx::GFxInitImportActions::IsInitImportActionsTag(); // 0x1400B8180
class Scaleform::Render::JPEG::Input :
	Scaleform::NewOverrideBase<2>
{
public:
	~Input();
	void DiscardPartialBuffer();
	bool StartImage();
	bool StartRawImage();
	bool FinishImage();
	bool AbortImage();
	Scaleform::Render::Size<unsigned long> GetSize();
	bool ReadScanline(unsigned char *);
	bool ReadRawData(void * *);
	void * GetCInfo();
	bool HasError();
	Input(const Scaleform::Render::JPEG::Input &);
	Input();
	Scaleform::Render::JPEG::Input & operator=(const Scaleform::Render::JPEG::Input &);
};
class Scaleform::Render::JPEG::Output :
	Scaleform::NewOverrideBase<2>
{
public:
	~Output();
	void WriteScanline(const unsigned char *);
	void WriteRawData(const void *);
	void CopyCriticalParams(void *);
	void * GetCInfo();
	Output(const Scaleform::Render::JPEG::Output &);
	Output();
	Scaleform::Render::JPEG::Output & operator=(const Scaleform::Render::JPEG::Output &);
};
class Scaleform::Render::JPEG::MemoryBufferImage :
	Scaleform::Render::MemoryBufferImage
{
	enum <unnamed-enum-Flag_Headers>
	{
		Flag_Headers = 1,
		Mask_Flags = 3,
	};
private:
	Scaleform::Render::JPEG::ExtraData * pExtraData; // 0x58
	unsigned long long Flags; // 0x58
	Scaleform::Render::JPEG::ExtraData * GetExtraData();
	unsigned long GetFlags();
public:
	MemoryBufferImage(const Scaleform::Render::JPEG::MemoryBufferImage &);
	MemoryBufferImage(Scaleform::Render::JPEG::ExtraData *, Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::Render::ImageUpdateSync *, const unsigned char *, unsigned long long);
	MemoryBufferImage(Scaleform::Render::JPEG::ExtraData *, Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::Render::ImageUpdateSync *, Scaleform::File *, long long, unsigned long long);
	MemoryBufferImage(Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, unsigned long, Scaleform::Render::ImageUpdateSync *, Scaleform::File *, long long, unsigned long long, bool);
	virtual ~MemoryBufferImage();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	Scaleform::Render::JPEG::MemoryBufferImage & operator=(const Scaleform::Render::JPEG::MemoryBufferImage &);
};