#pragma once

struct Scaleform::Render::AttributeType
{
	unsigned long Components : 4; // 0x0
	Scaleform::Render::VertexElementDataType DataType : 4; // 0x0
	Scaleform::Render::VertexElementUsageType UsageType : 4; // 0x0
	Scaleform::Render::VertexElementIndexType IndexType : 4; // 0x0
	unsigned long Argument : 1; // 0x0
};
enum Scaleform::Render::VertexElementType
{
	VET_Argument_Flag = 65536,
	VET_Type_Mask = 65535,
	VET_Components_Mask = 15,
	VET_CompType_Mask = 240,
	VET_CompType_Shift = 4,
	VET_Usage_Mask = 3840,
	VET_Usage_Shift = 8,
	VET_Index_Mask = 61440,
	VET_Index_Shift = 12,
	VET_U8N = 16,
	VET_U8 = 32,
	VET_S16 = 48,
	VET_U16 = 64,
	VET_U32 = 80,
	VET_F32 = 96,
	VET_I8 = 112,
	VET_I16 = 128,
	VET_None = 0,
	VET_Pos = 256,
	VET_Color = 512,
	VET_TexCoord = 768,
	VET_Instance = 1024,
	VET_Index1 = 4096,
	VET_Index2 = 8192,
	VET_XY16i = 306,
	VET_XYZ16i = 307,
	VET_XY32f = 354,
	VET_XYZ32f = 355,
	VET_UV32f = 866,
	VET_ColorRGBA8 = 532,
	VET_ColorARGB8 = 593,
	VET_FactorAlpha8 = 4625,
	VET_T0Weight8 = 8721,
	VET_IndexedFactors = 4722,
	VET_Instance8 = 66593,
};
struct Scaleform::Render::VertexElement
{
	unsigned long Offset; // 0x0
	unsigned long Attribute; // 0x4
	Scaleform::Render::AttributeType AttributeNice; // 0x4
	unsigned long CompSize();
	unsigned long Size();
	bool operator==(const Scaleform::Render::VertexElement &);
	bool operator!=(const Scaleform::Render::VertexElement &);
};
class Scaleform::RefCountBase<Scaleform::Render::SystemVertexFormat,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::SystemVertexFormat,2>(Scaleform::RefCountBase<Scaleform::Render::SystemVertexFormat,2> &);
	RefCountBase<Scaleform::Render::SystemVertexFormat,2>(const Scaleform::RefCountBase<Scaleform::Render::SystemVertexFormat,2> &);
	RefCountBase<Scaleform::Render::SystemVertexFormat,2>();
	virtual ~RefCountBase<Scaleform::Render::SystemVertexFormat,2>();
	Scaleform::RefCountBase<Scaleform::Render::SystemVertexFormat,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::SystemVertexFormat,2> &);
	Scaleform::RefCountBase<Scaleform::Render::SystemVertexFormat,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::SystemVertexFormat,2> &);
};
class Scaleform::Render::SystemVertexFormat :
	Scaleform::RefCountBase<Scaleform::Render::SystemVertexFormat,2>
{
public:
	virtual ~SystemVertexFormat();
	SystemVertexFormat(const Scaleform::Render::SystemVertexFormat &);
	SystemVertexFormat();
	Scaleform::Render::SystemVertexFormat & operator=(const Scaleform::Render::SystemVertexFormat &);
};
struct Scaleform::Render::VertexFormat
{
	unsigned long Size; // 0x0
	Scaleform::Render::VertexElement * pElements; // 0x8
	Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> pSysFormat; // 0x10
	bool operator==(const Scaleform::Render::VertexFormat &);
	const Scaleform::Render::VertexElement * GetElement(unsigned long, unsigned long);
	bool HasUsage(Scaleform::Render::VertexElementType);
	VertexFormat(Scaleform::Render::VertexFormat &);
	VertexFormat(const Scaleform::Render::VertexFormat &);
	VertexFormat();
	~VertexFormat();
	Scaleform::Render::VertexFormat & operator=(Scaleform::Render::VertexFormat &);
	Scaleform::Render::VertexFormat & operator=(const Scaleform::Render::VertexFormat &);
};
class Scaleform::Ptr<Scaleform::Render::SystemVertexFormat>
{
protected:
	Scaleform::Render::SystemVertexFormat * pObject; // 0x0
public:
	Ptr<Scaleform::Render::SystemVertexFormat>(const Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> &);
	Ptr<Scaleform::Render::SystemVertexFormat>(Scaleform::Render::SystemVertexFormat *);
	Ptr<Scaleform::Render::SystemVertexFormat>(Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> &, Scaleform::PickType);
	Ptr<Scaleform::Render::SystemVertexFormat>(Scaleform::Pickable<Scaleform::Render::SystemVertexFormat>);
	Ptr<Scaleform::Render::SystemVertexFormat>(Scaleform::Render::SystemVertexFormat &);
	Ptr<Scaleform::Render::SystemVertexFormat>();
	~Ptr<Scaleform::Render::SystemVertexFormat>();
	bool operator==(Scaleform::Render::SystemVertexFormat *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> &);
	bool operator!=(Scaleform::Render::SystemVertexFormat *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> &);
	Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & operator=(Scaleform::Pickable<Scaleform::Render::SystemVertexFormat>);
	const Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & operator=(Scaleform::Render::SystemVertexFormat &);
	const Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & operator=(Scaleform::Render::SystemVertexFormat *);
	const Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & operator=(const Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> &);
	Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & SetPtr(Scaleform::Pickable<Scaleform::Render::SystemVertexFormat>);
	Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & SetPtr(Scaleform::Render::SystemVertexFormat &);
	Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & SetPtr(Scaleform::Render::SystemVertexFormat *);
	Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & SetPtr(const Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::SystemVertexFormat * & GetRawRef();
	Scaleform::Render::SystemVertexFormat * GetPtr();
	Scaleform::Render::SystemVertexFormat & operator*();
	Scaleform::Render::SystemVertexFormat * operator->();
	Scaleform::Render::SystemVertexFormat * operator class Scaleform::Render::SystemVertexFormat *();
	Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & Pick(Scaleform::Render::SystemVertexFormat *);
	Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & Pick(Scaleform::Pickable<Scaleform::Render::SystemVertexFormat>);
	Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> & Pick(Scaleform::Ptr<Scaleform::Render::SystemVertexFormat> &);
};
bool Scaleform::Render::VertexFormat::operator==(const Scaleform::Render::VertexFormat & o); // 0x140397EE0
struct Scaleform::Render::VertexXY16i
{
	short x; // 0x0
	short y; // 0x2
	static Scaleform::Render::VertexElement VertexElements[3]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::Render::VertexXY16f
{
	float x; // 0x0
	float y; // 0x4
	static Scaleform::Render::VertexElement VertexElements[3]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::Render::VertexXY16fAlpha
{
	float x; // 0x0
	float y; // 0x4
	unsigned char Alpha[4]; // 0x8
	static Scaleform::Render::VertexElement VertexElements[3]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::Render::VertexXY16iC32
{
	short x; // 0x0
	short y; // 0x2
	unsigned long Color; // 0x4
	static Scaleform::Render::VertexElement VertexElements[3]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::Render::VertexXY16iAlpha
{
	short x; // 0x0
	short y; // 0x2
	unsigned char Alpha[4]; // 0x4
	static Scaleform::Render::VertexElement VertexElements[3]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::Render::VertexXY16iCF32
{
	short x; // 0x0
	short y; // 0x2
	unsigned long Color; // 0x4
	unsigned char Factors[4]; // 0x8
	static Scaleform::Render::VertexElement VertexElements[5]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::Render::VertexXY16iInstance
{
	short x; // 0x0
	short y; // 0x2
	unsigned char Instance[4]; // 0x4
	static Scaleform::Render::VertexElement VertexElements[4]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::Render::VertexXY16iUV
{
	short x; // 0x0
	short y; // 0x2
	float UV[2]; // 0x4
	static Scaleform::Render::VertexElement VertexElements[3]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};