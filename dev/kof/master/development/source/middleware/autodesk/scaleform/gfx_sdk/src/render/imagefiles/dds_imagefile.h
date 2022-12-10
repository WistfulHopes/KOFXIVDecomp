#pragma once

class Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader> :
	Scaleform::Render::ImageFileReader
{
public:
	static Scaleform::Render::Image * ReadImage(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader>(Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader> &);
	ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader>(const Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader> &);
	ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader>();
	virtual ~ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader>();
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader> & operator=(Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader> &);
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader> & operator=(const Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader> &);
};
class Scaleform::Render::DDS::FileReader :
	Scaleform::Render::ImageFileReader_Mixin<Scaleform::Render::DDS::FileReader,Scaleform::Render::ImageFileReader>
{
public:
	virtual Scaleform::Render::ImageFileFormat GetFormat();
	virtual bool MatchFormat(Scaleform::File *, unsigned char *, unsigned long long);
	virtual Scaleform::Render::ImageSource * ReadImageSource(Scaleform::File *, const Scaleform::Render::ImageCreateArgs &);
	static Scaleform::Render::DDS::FileReader Instance; // 0xFFFFFFFFFFFFFFFF
	FileReader(Scaleform::Render::DDS::FileReader &);
	FileReader(const Scaleform::Render::DDS::FileReader &);
	FileReader();
	virtual ~FileReader();
	Scaleform::Render::DDS::FileReader & operator=(Scaleform::Render::DDS::FileReader &);
	Scaleform::Render::DDS::FileReader & operator=(const Scaleform::Render::DDS::FileReader &);
};
Scaleform::Render::ImageFileFormat Scaleform::Render::DDS::FileReader::GetFormat(); // 0x1400BBAA0