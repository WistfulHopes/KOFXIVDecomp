#pragma once

class Scaleform::Render::TGA::FileReader :
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader>
{
public:
	virtual Scaleform::Render::ImageFileFormat GetFormat();
	virtual bool MatchFormat(Scaleform::File *, unsigned char *, unsigned long long);
	virtual Scaleform::Render::ImageSource * ReadImageSource(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	static Scaleform::Render::TGA::FileReader Instance; // 0xFFFFFFFFFFFFFFFF
	FileReader(Scaleform::Render::TGA::FileReader &);
	FileReader(const Scaleform::Render::TGA::FileReader &);
	FileReader();
	virtual ~FileReader();
	Scaleform::Render::TGA::FileReader & operator=(Scaleform::Render::TGA::FileReader &);
	Scaleform::Render::TGA::FileReader & operator=(const Scaleform::Render::TGA::FileReader &);
};
class Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader> :
	Scaleform::Render::ImageFileReader
{
public:
	static Scaleform::Render::Image * ReadImage(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader>(Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader> &);
	ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader>(const Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader> &);
	ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader>();
	virtual ~ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader>();
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader> & operator=(Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader> &);
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader> & operator=(const Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::TGA::FileReader,Scaleform::Render::ImageFileReader> &);
};
Scaleform::Render::ImageFileFormat Scaleform::Render::TGA::FileReader::GetFormat(); // 0x1403EF7A0
class Scaleform::Render::TGA::FileWriter :
	Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter>
{
public:
	virtual Scaleform::Render::ImageFileFormat GetFormat();
	virtual bool Write(Scaleform::File *, const Scaleform::Render::ImageData &, const Scaleform::Render::ImageWriteArgs *);
	static Scaleform::Render::TGA::FileWriter Instance; // 0xFFFFFFFFFFFFFFFF
	FileWriter(Scaleform::Render::TGA::FileWriter &);
	FileWriter(const Scaleform::Render::TGA::FileWriter &);
	FileWriter();
	virtual ~FileWriter();
	Scaleform::Render::TGA::FileWriter & operator=(Scaleform::Render::TGA::FileWriter &);
	Scaleform::Render::TGA::FileWriter & operator=(const Scaleform::Render::TGA::FileWriter &);
};
class Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter> :
	Scaleform::Render::ImageFileWriter
{
public:
	static bool WriteImage(Scaleform::File *, Scaleform::Render::Image *, const Scaleform::Render::ImageWriteArgs *);
	static bool WriteImage(Scaleform::File *, const Scaleform::Render::ImageData &, const Scaleform::Render::ImageWriteArgs *);
	ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter>(Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter> &);
	ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter>(const Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter> &);
	ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter>();
	virtual ~ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter>();
	Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter> & operator=(Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter> &);
	Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter> & operator=(const Scaleform::Render::ImageFileWriter_Mixin<Scaleform::Render::TGA::FileWriter,Scaleform::Render::ImageFileWriter> &);
};
enum Scaleform::Render::TGA::TGAColorMapType
{
	TGAColorMap_NotIncluded = 0,
	TGAColorMap_Included = 1,
};
enum Scaleform::Render::TGA::TGAImageType
{
	TGAImage_NoData = 0,
	TGAImage_ColorMapped = 1,
	TGAImage_TrueColor = 2,
	TGAImage_BlackAndWhite = 3,
	TGAImage_RLE_ColorMapped = 9,
	TGAImage_RLE_TrueColor = 10,
	TGAImage_RLE_BlackAndWhite = 11,
};
enum Scaleform::Render::TGA::TGAImageDescBits
{
	TGAImageDesc_TopToBottom = 32,
	TGAImageDesc_LeftToRight = 16,
	TGAImageDesc_ZeroMaskBits = 192,
};