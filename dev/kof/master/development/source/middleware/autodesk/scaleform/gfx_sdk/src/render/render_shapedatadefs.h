#pragma once

struct Scaleform::Render::ShapePosInfo
{
	unsigned long Pos; // 0x0
	long StartX; // 0x4
	long StartY; // 0x8
	long LastX; // 0xC
	long LastY; // 0x10
	unsigned long FillBase; // 0x14
	unsigned long StrokeBase; // 0x18
	unsigned long NumFillBits; // 0x1C
	unsigned long NumStrokeBits; // 0x20
	unsigned long Fill0; // 0x24
	unsigned long Fill1; // 0x28
	unsigned long Stroke; // 0x2C
	float Sfactor; // 0x30
	bool Initialized; // 0x34
	ShapePosInfo(unsigned long);
	ShapePosInfo();
};
enum Scaleform::Render::ShapePathType
{
	Shape_NewPath = 1,
	Shape_NewLayer = 2,
	Shape_EndShape = 0,
};
enum Scaleform::Render::PathEdgeType
{
	Edge_LineTo = 1,
	Edge_QuadTo = 2,
	Edge_CubicTo = 3,
	Edge_EndPath = 0,
	Edge_MaxCoord = 6,
};
enum Scaleform::Render::StrokeStyleFlags
{
	StrokeFlag_StrokeHinting = 1,
	StrokeScaling_Normal = 0,
	StrokeScaling_Horizontal = 2,
	StrokeScaling_Vertical = 4,
	StrokeScaling_None = 6,
	StrokeScaling_Mask = 6,
	StrokeFlag_ComplexFill = 8,
	StrokeJoin_Round = 0,
	StrokeJoin_Bevel = 16,
	StrokeJoin_Miter = 32,
	StrokeJoin_Mask = 48,
	StrokeCap_Round = 0,
	StrokeCap_None = 64,
	StrokeCap_Square = 128,
	StrokeCap_Mask = 192,
	StrokeEndCap_Round = 0,
	StrokeEndCap_None = 256,
	StrokeEndCap_Square = 512,
	StrokeEndCap_Mask = 768,
};
class Scaleform::RefCountBase<Scaleform::Render::ComplexFill,71> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 71,
	};
public:
	RefCountBase<Scaleform::Render::ComplexFill,71>(Scaleform::RefCountBase<Scaleform::Render::ComplexFill,71> &);
	RefCountBase<Scaleform::Render::ComplexFill,71>(const Scaleform::RefCountBase<Scaleform::Render::ComplexFill,71> &);
	RefCountBase<Scaleform::Render::ComplexFill,71>();
	virtual ~RefCountBase<Scaleform::Render::ComplexFill,71>();
	Scaleform::RefCountBase<Scaleform::Render::ComplexFill,71> & operator=(Scaleform::RefCountBase<Scaleform::Render::ComplexFill,71> &);
	Scaleform::RefCountBase<Scaleform::Render::ComplexFill,71> & operator=(const Scaleform::RefCountBase<Scaleform::Render::ComplexFill,71> &);
};
struct Scaleform::Render::ComplexFill :
	Scaleform::RefCountBase<Scaleform::Render::ComplexFill,71>
{
	Scaleform::Ptr<Scaleform::Render::Image> pImage; // 0x10
	Scaleform::Ptr<Scaleform::Render::GradientData> pGradient; // 0x18
	Scaleform::Render::Matrix2x4<float> ImageMatrix; // 0x20
	Scaleform::Render::ImageFillMode FillMode; // 0x40
	unsigned long BindIndex; // 0x44
	ComplexFill(const Scaleform::Render::ComplexFill &);
	ComplexFill();
	virtual ~ComplexFill();
	Scaleform::Render::ComplexFill & operator=(const Scaleform::Render::ComplexFill &);
};
Scaleform::Render::ComplexFill::ComplexFill(const Scaleform::Render::ComplexFill & o); // 0x1403DECF0
struct Scaleform::Render::FillStyleType
{
	unsigned long Color; // 0x0
	Scaleform::Ptr<Scaleform::Render::ComplexFill> pFill; // 0x8
	FillStyleType(Scaleform::Render::FillStyleType &);
	FillStyleType(const Scaleform::Render::FillStyleType &);
	FillStyleType();
	~FillStyleType();
	Scaleform::Render::FillStyleType & operator=(Scaleform::Render::FillStyleType &);
	Scaleform::Render::FillStyleType & operator=(const Scaleform::Render::FillStyleType &);
};
class Scaleform::Ptr<Scaleform::Render::ComplexFill>
{
protected:
	Scaleform::Render::ComplexFill * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ComplexFill>(const Scaleform::Ptr<Scaleform::Render::ComplexFill> &);
	Ptr<Scaleform::Render::ComplexFill>(Scaleform::Render::ComplexFill *);
	Ptr<Scaleform::Render::ComplexFill>(Scaleform::Ptr<Scaleform::Render::ComplexFill> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ComplexFill>(Scaleform::Pickable<Scaleform::Render::ComplexFill>);
	Ptr<Scaleform::Render::ComplexFill>(Scaleform::Render::ComplexFill &);
	Ptr<Scaleform::Render::ComplexFill>();
	~Ptr<Scaleform::Render::ComplexFill>();
	bool operator==(Scaleform::Render::ComplexFill *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ComplexFill> &);
	bool operator!=(Scaleform::Render::ComplexFill *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ComplexFill> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ComplexFill> &);
	Scaleform::Ptr<Scaleform::Render::ComplexFill> & operator=(Scaleform::Pickable<Scaleform::Render::ComplexFill>);
	const Scaleform::Ptr<Scaleform::Render::ComplexFill> & operator=(Scaleform::Render::ComplexFill &);
	const Scaleform::Ptr<Scaleform::Render::ComplexFill> & operator=(Scaleform::Render::ComplexFill *);
	const Scaleform::Ptr<Scaleform::Render::ComplexFill> & operator=(const Scaleform::Ptr<Scaleform::Render::ComplexFill> &);
	Scaleform::Ptr<Scaleform::Render::ComplexFill> & SetPtr(Scaleform::Pickable<Scaleform::Render::ComplexFill>);
	Scaleform::Ptr<Scaleform::Render::ComplexFill> & SetPtr(Scaleform::Render::ComplexFill &);
	Scaleform::Ptr<Scaleform::Render::ComplexFill> & SetPtr(Scaleform::Render::ComplexFill *);
	Scaleform::Ptr<Scaleform::Render::ComplexFill> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ComplexFill> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ComplexFill * & GetRawRef();
	Scaleform::Render::ComplexFill * GetPtr();
	Scaleform::Render::ComplexFill & operator*();
	Scaleform::Render::ComplexFill * operator->();
	Scaleform::Render::ComplexFill * operator struct Scaleform::Render::ComplexFill *();
	Scaleform::Ptr<Scaleform::Render::ComplexFill> & Pick(Scaleform::Render::ComplexFill *);
	Scaleform::Ptr<Scaleform::Render::ComplexFill> & Pick(Scaleform::Pickable<Scaleform::Render::ComplexFill>);
	Scaleform::Ptr<Scaleform::Render::ComplexFill> & Pick(Scaleform::Ptr<Scaleform::Render::ComplexFill> &);
};
class Scaleform::RefCountBase<Scaleform::Render::DashArray,71> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 71,
	};
public:
	RefCountBase<Scaleform::Render::DashArray,71>(Scaleform::RefCountBase<Scaleform::Render::DashArray,71> &);
	RefCountBase<Scaleform::Render::DashArray,71>(const Scaleform::RefCountBase<Scaleform::Render::DashArray,71> &);
	RefCountBase<Scaleform::Render::DashArray,71>();
	virtual ~RefCountBase<Scaleform::Render::DashArray,71>();
	Scaleform::RefCountBase<Scaleform::Render::DashArray,71> & operator=(Scaleform::RefCountBase<Scaleform::Render::DashArray,71> &);
	Scaleform::RefCountBase<Scaleform::Render::DashArray,71> & operator=(const Scaleform::RefCountBase<Scaleform::Render::DashArray,71> &);
};
struct Scaleform::Render::DashArray :
	Scaleform::RefCountBase<Scaleform::Render::DashArray,71>
{
	enum <unnamed-enum-MaxDashes>
	{
		MaxDashes = 8,
	};
	float Dashes[16]; // 0x10
	float DashStart; // 0x50
	unsigned long DashCount; // 0x54
	DashArray(Scaleform::Render::DashArray &);
	DashArray(const Scaleform::Render::DashArray &);
	DashArray(float, float, float, float, float, float, float, float);
	DashArray();
	virtual ~DashArray();
	Scaleform::Render::DashArray & operator=(Scaleform::Render::DashArray &);
	Scaleform::Render::DashArray & operator=(const Scaleform::Render::DashArray &);
};
struct Scaleform::Render::StrokeStyleType
{
	float Width; // 0x0
	float Units; // 0x4
	unsigned long Flags; // 0x8
	float Miter; // 0xC
	unsigned long Color; // 0x10
	Scaleform::Ptr<Scaleform::Render::ComplexFill> pFill; // 0x18
	Scaleform::Ptr<Scaleform::Render::DashArray> pDashes; // 0x20
	StrokeStyleType(Scaleform::Render::StrokeStyleType &);
	StrokeStyleType(const Scaleform::Render::StrokeStyleType &);
	StrokeStyleType();
	~StrokeStyleType();
	Scaleform::Render::StrokeStyleType & operator=(Scaleform::Render::StrokeStyleType &);
	Scaleform::Render::StrokeStyleType & operator=(const Scaleform::Render::StrokeStyleType &);
};
class Scaleform::Ptr<Scaleform::Render::DashArray>
{
protected:
	Scaleform::Render::DashArray * pObject; // 0x0
public:
	Ptr<Scaleform::Render::DashArray>(const Scaleform::Ptr<Scaleform::Render::DashArray> &);
	Ptr<Scaleform::Render::DashArray>(Scaleform::Render::DashArray *);
	Ptr<Scaleform::Render::DashArray>(Scaleform::Ptr<Scaleform::Render::DashArray> &, Scaleform::PickType);
	Ptr<Scaleform::Render::DashArray>(Scaleform::Pickable<Scaleform::Render::DashArray>);
	Ptr<Scaleform::Render::DashArray>(Scaleform::Render::DashArray &);
	Ptr<Scaleform::Render::DashArray>();
	~Ptr<Scaleform::Render::DashArray>();
	bool operator==(Scaleform::Render::DashArray *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::DashArray> &);
	bool operator!=(Scaleform::Render::DashArray *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::DashArray> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::DashArray> &);
	Scaleform::Ptr<Scaleform::Render::DashArray> & operator=(Scaleform::Pickable<Scaleform::Render::DashArray>);
	const Scaleform::Ptr<Scaleform::Render::DashArray> & operator=(Scaleform::Render::DashArray &);
	const Scaleform::Ptr<Scaleform::Render::DashArray> & operator=(Scaleform::Render::DashArray *);
	const Scaleform::Ptr<Scaleform::Render::DashArray> & operator=(const Scaleform::Ptr<Scaleform::Render::DashArray> &);
	Scaleform::Ptr<Scaleform::Render::DashArray> & SetPtr(Scaleform::Pickable<Scaleform::Render::DashArray>);
	Scaleform::Ptr<Scaleform::Render::DashArray> & SetPtr(Scaleform::Render::DashArray &);
	Scaleform::Ptr<Scaleform::Render::DashArray> & SetPtr(Scaleform::Render::DashArray *);
	Scaleform::Ptr<Scaleform::Render::DashArray> & SetPtr(const Scaleform::Ptr<Scaleform::Render::DashArray> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::DashArray * & GetRawRef();
	Scaleform::Render::DashArray * GetPtr();
	Scaleform::Render::DashArray & operator*();
	Scaleform::Render::DashArray * operator->();
	Scaleform::Render::DashArray * operator struct Scaleform::Render::DashArray *();
	Scaleform::Ptr<Scaleform::Render::DashArray> & Pick(Scaleform::Render::DashArray *);
	Scaleform::Ptr<Scaleform::Render::DashArray> & Pick(Scaleform::Pickable<Scaleform::Render::DashArray>);
	Scaleform::Ptr<Scaleform::Render::DashArray> & Pick(Scaleform::Ptr<Scaleform::Render::DashArray> &);
};
class Scaleform::RefCountBase<Scaleform::Render::ShapeDataInterface,71> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 71,
	};
public:
	RefCountBase<Scaleform::Render::ShapeDataInterface,71>(Scaleform::RefCountBase<Scaleform::Render::ShapeDataInterface,71> &);
	RefCountBase<Scaleform::Render::ShapeDataInterface,71>(const Scaleform::RefCountBase<Scaleform::Render::ShapeDataInterface,71> &);
	RefCountBase<Scaleform::Render::ShapeDataInterface,71>();
	virtual ~RefCountBase<Scaleform::Render::ShapeDataInterface,71>();
	Scaleform::RefCountBase<Scaleform::Render::ShapeDataInterface,71> & operator=(Scaleform::RefCountBase<Scaleform::Render::ShapeDataInterface,71> &);
	Scaleform::RefCountBase<Scaleform::Render::ShapeDataInterface,71> & operator=(const Scaleform::RefCountBase<Scaleform::Render::ShapeDataInterface,71> &);
};
class Scaleform::Render::ShapeDataInterface :
	Scaleform::RefCountBase<Scaleform::Render::ShapeDataInterface,71>
{
public:
	bool IsEmpty();
	unsigned long GetFillStyleCount();
	unsigned long GetStrokeStyleCount();
	void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *);
	void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *);
	unsigned long GetStartingPos();
	void Rewind();
	Scaleform::Render::ShapePathType ReadPathInfo(Scaleform::Render::ShapePosInfo *, float *, unsigned long *);
	Scaleform::Render::PathEdgeType ReadEdge(Scaleform::Render::ShapePosInfo *, float *);
	void SkipPathData(Scaleform::Render::ShapePosInfo *);
	unsigned long CountPathEdges(Scaleform::Render::ShapePosInfo *);
	ShapeDataInterface(Scaleform::Render::ShapeDataInterface &);
	ShapeDataInterface(const Scaleform::Render::ShapeDataInterface &);
	ShapeDataInterface();
	virtual ~ShapeDataInterface();
	Scaleform::Render::ShapeDataInterface & operator=(Scaleform::Render::ShapeDataInterface &);
	Scaleform::Render::ShapeDataInterface & operator=(const Scaleform::Render::ShapeDataInterface &);
};
bool Scaleform::Render::Image::Decode(Scaleform::Render::ImageData * pdest, void(*copyScanline)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void * arg); // 0x14004BBE0
void Scaleform::Render::ContextImpl::EntryData::ReleaseNodes(); // 0x14002E7C0
void Scaleform::Render::ShapeDataInterface::SkipPathData(Scaleform::Render::ShapePosInfo * pos); // 0x1402EB2C0