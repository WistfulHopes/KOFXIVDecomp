#pragma once

struct Scaleform::Render::SIF::SIFHeaderInfo
{
	unsigned char HeaderSize; // 0x0
	Scaleform::Render::ImageFormat Format; // 0x4
	unsigned long Height; // 0x8
	unsigned long Width; // 0xC
	unsigned short RawPlaneCount; // 0x10
	unsigned char LevelCount; // 0x12
	unsigned char Flags; // 0x13
};
struct Scaleform::Render::SIF::ImageWriteArgs :
	Scaleform::Render::ImageWriteArgs
{
	ImageWriteArgs(const Scaleform::Render::SIF::ImageWriteArgs &);
	ImageWriteArgs();
	Scaleform::Render::ImageFormat Format; // 0x4
};
class Scaleform::Render::SIF::FileReader :
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader>
{
public:
	virtual Scaleform::Render::ImageFileFormat GetFormat();
	virtual bool MatchFormat(Scaleform::File *, unsigned char *, unsigned long long);
	virtual Scaleform::Render::ImageSource * ReadImageSource(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	static Scaleform::Render::SIF::FileReader Instance; // 0xFFFFFFFFFFFFFFFF
	FileReader(Scaleform::Render::SIF::FileReader &);
	FileReader(const Scaleform::Render::SIF::FileReader &);
	FileReader();
	virtual ~FileReader();
	Scaleform::Render::SIF::FileReader & operator=(Scaleform::Render::SIF::FileReader &);
	Scaleform::Render::SIF::FileReader & operator=(const Scaleform::Render::SIF::FileReader &);
};
class Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader> :
	Scaleform::Render::ImageFileReader
{
public:
	static Scaleform::Render::Image * ReadImage(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader>(Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader> &);
	ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader>(const Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader> &);
	ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader>();
	virtual ~ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader>();
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader> & operator=(Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader> &);
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader> & operator=(const Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::SIF::FileReader,Scaleform::Render::ImageFileReader> &);
};
Scaleform::Render::ImageFileFormat Scaleform::Render::SIF::FileReader::GetFormat(); // 0x14037CE60
class Scaleform::Render::SIF::FileWriter :
	Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter>
{
public:
	virtual Scaleform::Render::ImageFileFormat GetFormat();
	virtual bool Write(Scaleform::File *, const Scaleform::Render::ImageData &, const Scaleform::Render::ImageWriteArgs *);
	static Scaleform::Render::SIF::FileWriter Instance; // 0xFFFFFFFFFFFFFFFF
	FileWriter(Scaleform::Render::SIF::FileWriter &);
	FileWriter(const Scaleform::Render::SIF::FileWriter &);
	FileWriter();
	virtual ~FileWriter();
	Scaleform::Render::SIF::FileWriter & operator=(Scaleform::Render::SIF::FileWriter &);
	Scaleform::Render::SIF::FileWriter & operator=(const Scaleform::Render::SIF::FileWriter &);
};
class Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter> :
	Scaleform::Render::ImageFileWriter
{
public:
	static bool WriteImage(Scaleform::File *, Scaleform::Render::Image *, const Scaleform::Render::ImageWriteArgs *);
	static bool WriteImage(Scaleform::File *, const Scaleform::Render::ImageData &, const Scaleform::Render::ImageWriteArgs *);
	ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter>(Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter> &);
	ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter>(const Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter> &);
	ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter>();
	virtual ~ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter>();
	Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter> & operator=(Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter> &);
	Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter> & operator=(const Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::SIF::FileWriter,Scaleform::Render::ImageFileWriter> &);
};