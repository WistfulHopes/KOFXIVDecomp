#pragma once

class Scaleform::Render::GradientRecord
{
public:
	GradientRecord(Scaleform::Render::GradientRecord &);
	GradientRecord(const Scaleform::Render::GradientRecord &);
	GradientRecord(unsigned char, Scaleform::Render::Color);
	GradientRecord();
	unsigned char Ratio; // 0x0
	Scaleform::Render::Color ColorV; // 0x4
	Scaleform::Render::GradientRecord LerpTo(const Scaleform::Render::GradientRecord &, float);
	unsigned long GetHashValue();
	bool operator==(const Scaleform::Render::GradientRecord &);
	bool operator!=(const Scaleform::Render::GradientRecord &);
	Scaleform::Render::GradientRecord & operator=(Scaleform::Render::GradientRecord &);
	Scaleform::Render::GradientRecord & operator=(const Scaleform::Render::GradientRecord &);
};
enum Scaleform::Render::GradientType
{
	GradientLinear = 0,
	GradientRadial = 1,
	GradientFocalPoint = 2,
};
class Scaleform::RefCountBase<Scaleform::Render::GradientData,257> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,257>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 257,
	};
public:
	RefCountBase<Scaleform::Render::GradientData,257>(Scaleform::RefCountBase<Scaleform::Render::GradientData,257> &);
	RefCountBase<Scaleform::Render::GradientData,257>(const Scaleform::RefCountBase<Scaleform::Render::GradientData,257> &);
	RefCountBase<Scaleform::Render::GradientData,257>();
	virtual ~RefCountBase<Scaleform::Render::GradientData,257>();
	Scaleform::RefCountBase<Scaleform::Render::GradientData,257> & operator=(Scaleform::RefCountBase<Scaleform::Render::GradientData,257> &);
	Scaleform::RefCountBase<Scaleform::Render::GradientData,257> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GradientData,257> &);
};
class Scaleform::Render::GradientData :
	Scaleform::RefCountBase<Scaleform::Render::GradientData,257>
{
	enum <unnamed-enum-DefaultImageSize>
	{
		DefaultImageSize = 64,
	};
public:
	GradientData(const Scaleform::Render::GradientData &);
	GradientData(Scaleform::Render::GradientType, unsigned short, bool);
	virtual ~GradientData();
	void SetMorphTo(const Scaleform::Render::GradientData *);
	const Scaleform::Render::GradientData * GetMorphTo();
	bool SetRecordCount(unsigned short, bool);
	unsigned short GetRecordCount();
	const Scaleform::Render::GradientRecord * GetRecords();
	void SetFocalRatio(float);
	float GetFocalRatio();
	bool IsLinearRGB();
	void SetLinearRGB(bool);
	Scaleform::Render::GradientType GetGradientType();
	void SetLerp(const Scaleform::Render::GradientData *, const Scaleform::Render::GradientData *, float);
	unsigned long CalcImageSize();
	const Scaleform::Render::GradientRecord & At(unsigned long);
	Scaleform::Render::GradientRecord & At(unsigned long);
	unsigned long long GetHashValue(float);
	bool operator==(const Scaleform::Render::GradientData &);
private:
	bool LinearRGB; // 0x10
	unsigned char Type; // 0x11
	unsigned short RecordCount; // 0x12
	Scaleform::Render::GradientRecord * pRecords; // 0x18
	float FocalRatio; // 0x20
	const Scaleform::Render::GradientData * pMorphTo; // 0x28
	static const unsigned long ImageSizeTable[0]; // 0xFFFFFFFFFFFFFFFF
public:
	Scaleform::Render::GradientData & operator=(const Scaleform::Render::GradientData &);
};
struct Scaleform::Render::GradientKey
{
	GradientKey(const Scaleform::Render::GradientData *, float);
	unsigned long long operator()();
	bool operator==(const Scaleform::Render::GradientKey &);
	const Scaleform::Render::GradientData * pData; // 0x0
	float MorphRatio; // 0x8
};
class Scaleform::Render::GradientImage :
	Scaleform::Render::Image
{
	enum <unnamed-enum-MaxImageSize>
	{
		MaxImageSize = 256,
	};
public:
	GradientImage(const Scaleform::Render::GradientImage &);
	GradientImage(Scaleform::Render::PrimitiveFillManager *, Scaleform::Render::GradientData *, float);
	virtual ~GradientImage();
	virtual Scaleform::Render::ImageBase::ImageType GetImageType();
	virtual Scaleform::Render::ImageFormat GetFormat();
	virtual Scaleform::Render::Size<unsigned long> GetSize();
	virtual unsigned long GetUse();
	virtual unsigned long GetMipmapCount();
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual Scaleform::Render::Texture * GetTexture(Scaleform::Render::TextureManager *);
	const Scaleform::Render::GradientData * GetGradientData();
	float GetMorphRatio();
	struct PtrHashFunctor;
	bool operator==(const Scaleform::Render::GradientImage &);
	virtual Scaleform::Render::Image * GetAsImage();
private:
	Scaleform::Render::PrimitiveFillManager * pManager; // 0x28
	Scaleform::Ptr<Scaleform::Render::GradientData> pData; // 0x30
	Scaleform::Render::Size<unsigned long> Size; // 0x38
	float MorphRatio; // 0x40
public:
	Scaleform::Render::GradientImage & operator=(const Scaleform::Render::GradientImage &);
};
Scaleform::Render::ImageBase::ImageType Scaleform::Render::GradientImage::GetImageType(); // 0x1400BBAA0
Scaleform::Render::ImageFormat Scaleform::Render::GradientImage::GetFormat(); // 0x1400482A0
Scaleform::Render::Size<unsigned long> Scaleform::Render::GradientImage::GetSize(); // 0x1403E8050
unsigned long Scaleform::Render::GradientImage::GetUse(); // 0x1400470F0
struct Scaleform::Render::GradientImage::PtrHashFunctor
{
	unsigned long long operator()(const Scaleform::Render::GradientKey &);
	unsigned long long operator()(const Scaleform::Render::GradientImage *);
};
Scaleform::Render::Image * Scaleform::Render::GradientImage::GetAsImage(); // 0x14004EB00
class Scaleform::Ptr<Scaleform::Render::GradientData>
{
protected:
	Scaleform::Render::GradientData * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GradientData>(const Scaleform::Ptr<Scaleform::Render::GradientData> &);
	Ptr<Scaleform::Render::GradientData>(Scaleform::Render::GradientData *);
	Ptr<Scaleform::Render::GradientData>(Scaleform::Ptr<Scaleform::Render::GradientData> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GradientData>(Scaleform::Pickable<Scaleform::Render::GradientData>);
	Ptr<Scaleform::Render::GradientData>(Scaleform::Render::GradientData &);
	Ptr<Scaleform::Render::GradientData>();
	~Ptr<Scaleform::Render::GradientData>();
	bool operator==(Scaleform::Render::GradientData *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GradientData> &);
	bool operator!=(Scaleform::Render::GradientData *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GradientData> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GradientData> &);
	Scaleform::Ptr<Scaleform::Render::GradientData> & operator=(Scaleform::Pickable<Scaleform::Render::GradientData>);
	const Scaleform::Ptr<Scaleform::Render::GradientData> & operator=(Scaleform::Render::GradientData &);
	const Scaleform::Ptr<Scaleform::Render::GradientData> & operator=(Scaleform::Render::GradientData *);
	const Scaleform::Ptr<Scaleform::Render::GradientData> & operator=(const Scaleform::Ptr<Scaleform::Render::GradientData> &);
	Scaleform::Ptr<Scaleform::Render::GradientData> & SetPtr(Scaleform::Pickable<Scaleform::Render::GradientData>);
	Scaleform::Ptr<Scaleform::Render::GradientData> & SetPtr(Scaleform::Render::GradientData &);
	Scaleform::Ptr<Scaleform::Render::GradientData> & SetPtr(Scaleform::Render::GradientData *);
	Scaleform::Ptr<Scaleform::Render::GradientData> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GradientData> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GradientData * & GetRawRef();
	Scaleform::Render::GradientData * GetPtr();
	Scaleform::Render::GradientData & operator*();
	Scaleform::Render::GradientData * operator->();
	Scaleform::Render::GradientData * operator class Scaleform::Render::GradientData *();
	Scaleform::Ptr<Scaleform::Render::GradientData> & Pick(Scaleform::Render::GradientData *);
	Scaleform::Ptr<Scaleform::Render::GradientData> & Pick(Scaleform::Pickable<Scaleform::Render::GradientData>);
	Scaleform::Ptr<Scaleform::Render::GradientData> & Pick(Scaleform::Ptr<Scaleform::Render::GradientData> &);
};