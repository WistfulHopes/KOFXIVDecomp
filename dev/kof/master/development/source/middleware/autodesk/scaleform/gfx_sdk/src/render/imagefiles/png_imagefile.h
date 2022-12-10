#pragma once

class Scaleform::Render::PNG::Input :
	Scaleform::NewOverrideBase<2>
{
public:
	~Input();
	long ReadData(void * *);
	long ReadScanline(unsigned char *);
	bool Decode(Scaleform::Render::ImageFormat, Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	Scaleform::Render::Size<unsigned long> GetSize();
	Input(const Scaleform::Render::PNG::Input &);
	Input();
	Scaleform::Render::PNG::Input & operator=(const Scaleform::Render::PNG::Input &);
};
class Scaleform::Render::PNG::FileReader :
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader>
{
public:
	virtual Scaleform::Render::ImageFileFormat GetFormat();
	Scaleform::Render::PNG::Input * CreateInput(Scaleform::File *);
	virtual bool MatchFormat(Scaleform::File *, unsigned char *, unsigned long long);
	virtual Scaleform::Render::ImageSource * ReadImageSource(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	static Scaleform::Render::PNG::FileReader Instance; // 0xFFFFFFFFFFFFFFFF
	FileReader(Scaleform::Render::PNG::FileReader &);
	FileReader(const Scaleform::Render::PNG::FileReader &);
	FileReader();
	virtual ~FileReader();
	Scaleform::Render::PNG::FileReader & operator=(Scaleform::Render::PNG::FileReader &);
	Scaleform::Render::PNG::FileReader & operator=(const Scaleform::Render::PNG::FileReader &);
};
class Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader> :
	Scaleform::Render::ImageFileReader
{
public:
	static Scaleform::Render::Image * ReadImage(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader>(Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader> &);
	ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader>(const Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader> &);
	ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader>();
	virtual ~ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader>();
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader> & operator=(Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader> &);
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader> & operator=(const Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::PNG::FileReader,Scaleform::Render::ImageFileReader> &);
};
Scaleform::Render::ImageFileFormat Scaleform::Render::PNG::FileReader::GetFormat(); // 0x14002DEF0
class Scaleform::Render::PNG::FileWriter :
	Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter>
{
public:
	virtual Scaleform::Render::ImageFileFormat GetFormat();
	virtual bool Write(Scaleform::File *, const Scaleform::Render::ImageData &, const Scaleform::Render::ImageWriteArgs *);
	static Scaleform::Render::PNG::FileWriter Instance; // 0xFFFFFFFFFFFFFFFF
	FileWriter(Scaleform::Render::PNG::FileWriter &);
	FileWriter(const Scaleform::Render::PNG::FileWriter &);
	FileWriter();
	virtual ~FileWriter();
	Scaleform::Render::PNG::FileWriter & operator=(Scaleform::Render::PNG::FileWriter &);
	Scaleform::Render::PNG::FileWriter & operator=(const Scaleform::Render::PNG::FileWriter &);
};
class Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter> :
	Scaleform::Render::ImageFileWriter
{
public:
	static bool WriteImage(Scaleform::File *, Scaleform::Render::Image *, const Scaleform::Render::ImageWriteArgs *);
	static bool WriteImage(Scaleform::File *, const Scaleform::Render::ImageData &, const Scaleform::Render::ImageWriteArgs *);
	ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter>(Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter> &);
	ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter>(const Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter> &);
	ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter>();
	virtual ~ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter>();
	Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter> & operator=(Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter> &);
	Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter> & operator=(const Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::PNG::FileWriter,Scaleform::Render::ImageFileWriter> &);
};