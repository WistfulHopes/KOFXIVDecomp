#pragma once

enum Scaleform::Render::ImageFileFormat
{
	ImageFile_Unopened = 0,
	ImageFile_Unknown = 1,
	ImageFile_JPEG = 2,
	ImageFile_DDS = 3,
	ImageFile_PNG = 4,
	ImageFile_TGA = 5,
	ImageFile_PVR = 6,
	ImageFile_KTX = 7,
	ImageFile_GXT = 8,
	ImageFile_GTX = 9,
	ImageFile_GNF = 10,
	ImageFile_SIF = 11,
	ImageFile_Other = 12,
};
struct Scaleform::Render::ImageWriteArgs
{
	Scaleform::Render::ImageFileFormat FileFormat; // 0x0
	ImageWriteArgs(const Scaleform::Render::ImageWriteArgs &);
	ImageWriteArgs(Scaleform::Render::ImageFileFormat);
	void __dflt_ctor_closure();
};
class Scaleform::Render::ImageFileHandler
{
public:
	~ImageFileHandler();
	Scaleform::Render::ImageFileFormat GetFormat();
	bool IsReader();
	bool IsWriter();
	ImageFileHandler(const Scaleform::Render::ImageFileHandler &);
	ImageFileHandler();
	Scaleform::Render::ImageFileHandler & operator=(const Scaleform::Render::ImageFileHandler &);
};
bool Scaleform::Render::ImageFileHandler::IsReader(); // 0x14004BBE0
class Scaleform::Render::ImageFileReader :
	Scaleform::Render::ImageFileHandler
{
public:
	virtual bool IsReader();
	bool MatchFormat(Scaleform::File *, unsigned char *, unsigned long long);
	Scaleform::Render::ImageSource * ReadImageSource(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	Scaleform::Render::Image * Read(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	ImageFileReader(Scaleform::Render::ImageFileReader &);
	ImageFileReader(const Scaleform::Render::ImageFileReader &);
	ImageFileReader();
	virtual ~ImageFileReader();
	Scaleform::Render::ImageFileReader & operator=(Scaleform::Render::ImageFileReader &);
	Scaleform::Render::ImageFileReader & operator=(const Scaleform::Render::ImageFileReader &);
};
bool Scaleform::Render::ImageFileReader::IsReader(); // 0x1400B8180
class Scaleform::Render::ImageFileWriter :
	Scaleform::Render::ImageFileHandler
{
protected:
	static bool writeImage(Scaleform::File *, const Scaleform::Render::ImageFileWriter *, Scaleform::Render::Image *, const Scaleform::Render::ImageWriteArgs *);
public:
	virtual bool IsWriter();
	bool Write(Scaleform::File *, const Scaleform::Render::ImageData &, const Scaleform::Render::ImageWriteArgs *);
	ImageFileWriter(Scaleform::Render::ImageFileWriter &);
	ImageFileWriter(const Scaleform::Render::ImageFileWriter &);
	ImageFileWriter();
	virtual ~ImageFileWriter();
	Scaleform::Render::ImageFileWriter & operator=(Scaleform::Render::ImageFileWriter &);
	Scaleform::Render::ImageFileWriter & operator=(const Scaleform::Render::ImageFileWriter &);
};
bool Scaleform::Render::ImageFileWriter::IsWriter(); // 0x1400B8180
class Scaleform::Render::ImageFileHandlerRegistry
{
private:
	Scaleform::Array<Scaleform::Render::ImageFileHandler *,2,Scaleform::ArrayDefaultPolicy> Handlers; // 0x8
public:
	ImageFileHandlerRegistry(const Scaleform::Render::ImageFileHandlerRegistry &);
	ImageFileHandlerRegistry(unsigned long, ...);
	~ImageFileHandlerRegistry();
	void AddHandler(Scaleform::Render::ImageFileHandler *);
	Scaleform::Render::ImageFileReader * GetReader(Scaleform::Render::ImageFileFormat);
	Scaleform::Render::ImageFileWriter * GetWriter(Scaleform::Render::ImageFileFormat);
	Scaleform::Render::ImageFileFormat DetectFormat(Scaleform::Render::ImageFileReader * *, Scaleform::File *, unsigned char *, unsigned long long);
	Scaleform::Render::Image * ReadImage(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	Scaleform::Render::ImageFileHandlerRegistry & operator=(const Scaleform::Render::ImageFileHandlerRegistry &);
};
class Scaleform::Array<Scaleform::Render::ImageFileHandler *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ImageFileHandler *,Scaleform::AllocatorGH<Scaleform::Render::ImageFileHandler *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::Render::ImageFileHandler ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Render::ImageFileHandler *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Render::ImageFileHandler *,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Render::ImageFileHandler *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Render::ImageFileHandler *,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Render::ImageFileHandler *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Render::ImageFileHandler *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Render::ImageFileHandler *,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Render::ImageFileHandler *,2,Scaleform::ArrayDefaultPolicy>();
};