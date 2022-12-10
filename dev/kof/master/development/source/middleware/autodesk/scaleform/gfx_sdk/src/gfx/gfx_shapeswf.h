#pragma once

class Scaleform::Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::FillStyleType,Scaleform::AllocatorGH<Scaleform::Render::FillStyleType,259>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::StrokeStyleType,Scaleform::AllocatorGH<Scaleform::Render::StrokeStyleType,259>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy>();
};
enum Scaleform::GFx::FillType
{
	Fill_Solid = 0,
	Fill_LinearGradient = 16,
	Fill_RadialGradient = 18,
	Fill_FocalPointGradient = 19,
	Fill_TiledSmoothImage = 64,
	Fill_ClippedSmoothImage = 65,
	Fill_TiledImage = 66,
	Fill_ClippedImage = 67,
	Fill_Gradient_TestBit = 16,
	Fill_Image_TestBit = 64,
};
enum Scaleform::GFx::<unnamed-enum-Default_MiterSize>
{
	Default_MiterSize = 3,
};
class Scaleform::GFx::ShapeDataBase :
	Scaleform::Render::ShapeDataInterface
{
	enum <unnamed-enum-Flags_TexturedFill>
	{
		Flags_TexturedFill = 1,
		Flags_Sfactor20 = 2,
		Flags_NeedsResolving = 4,
		Flags_NonZeroFill = 8,
		Flags_ValidBounds = 16,
		Flags_StylesSupport = 64,
		Flags_S9GSupport = 128,
	};
public:
	ShapeDataBase(Scaleform::GFx::ShapeDataBase &);
	ShapeDataBase(const Scaleform::GFx::ShapeDataBase &);
	ShapeDataBase(Scaleform::GFx::ShapeDataBase::EmptyShape);
	ShapeDataBase();
	enum EmptyShape
	{
		Empty_Shape = 0,
	};
	Scaleform::Render::Rect<float> GetBoundsLocal();
	void SetBoundsLocal(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> GetRectBoundsLocal();
	void SetRectBoundsLocal(const Scaleform::Render::Rect<float> &);
	void ComputeBound(Scaleform::Render::Rect<float> *);
	bool DefPointTestLocal(Scaleform::Render::ShapeMeshProvider *, const Scaleform::Render::Point<float> &, bool, const Scaleform::GFx::DisplayObjectBase *);
	unsigned long ComputeGeometryHash();
	bool IsEqualGeometry(const Scaleform::GFx::ShapeBaseCharacterDef &);
	const unsigned char * GetNativePathData();
	virtual unsigned long GetStartingPos();
	virtual Scaleform::Render::ShapePathType ReadPathInfo(Scaleform::Render::ShapePosInfo *, float *, unsigned long *);
	virtual Scaleform::Render::PathEdgeType ReadEdge(Scaleform::Render::ShapePosInfo *, float *);
protected:
	void Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType, unsigned long, bool, Scaleform::Array<Scaleform::Render::FillStyleType,259,Scaleform::ArrayDefaultPolicy> *, Scaleform::Array<Scaleform::Render::StrokeStyleType,259,Scaleform::ArrayDefaultPolicy> *, Scaleform::GFx::PathAllocator *);
public:
	bool Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType, unsigned long, bool);
	Scaleform::GFx::ShapeDataBase * Clone();
	void BindResourcesInStyles(const Scaleform::GFx::ResourceBinding &);
	void SetValidBoundsFlag(bool);
	bool HasValidBounds();
	unsigned char GetFlags();
	void SetNeedsResolving();
private:
	const unsigned char * Paths; // 0x10
	unsigned char Flags; // 0x18
public:
	virtual ~ShapeDataBase();
	Scaleform::GFx::ShapeDataBase & operator=(Scaleform::GFx::ShapeDataBase &);
	Scaleform::GFx::ShapeDataBase & operator=(const Scaleform::GFx::ShapeDataBase &);
};
void Scaleform::GFx::ExecuteTag::AddToTimelineSnapshot(Scaleform::GFx::TimelineSnapshot * __formal, unsigned long __formal); // 0x14002E7C0
class Scaleform::GFx::ConstShapeNoStyles :
	Scaleform::GFx::ShapeDataBase
{
public:
	ConstShapeNoStyles(Scaleform::GFx::ConstShapeNoStyles &);
	ConstShapeNoStyles(const Scaleform::GFx::ConstShapeNoStyles &);
	ConstShapeNoStyles(Scaleform::GFx::ShapeDataBase::EmptyShape);
	ConstShapeNoStyles();
	virtual unsigned long GetFillStyleCount();
	virtual unsigned long GetStrokeStyleCount();
	virtual void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *);
	virtual void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *);
	virtual bool Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType, unsigned long, bool);
	virtual Scaleform::GFx::ShapeDataBase * Clone();
	virtual ~ConstShapeNoStyles();
	Scaleform::GFx::ConstShapeNoStyles & operator=(Scaleform::GFx::ConstShapeNoStyles &);
	Scaleform::GFx::ConstShapeNoStyles & operator=(const Scaleform::GFx::ConstShapeNoStyles &);
};
class Scaleform::GFx::ConstShapeWithStyles :
	Scaleform::GFx::ShapeDataBase
{
public:
	ConstShapeWithStyles(const Scaleform::GFx::ConstShapeWithStyles &);
	ConstShapeWithStyles(Scaleform::GFx::ShapeDataBase::EmptyShape);
	ConstShapeWithStyles();
	virtual ~ConstShapeWithStyles();
	virtual Scaleform::Render::Rect<float> GetBoundsLocal();
	virtual void SetBoundsLocal(const Scaleform::Render::Rect<float> &);
	virtual Scaleform::Render::Rect<float> GetRectBoundsLocal();
	virtual void SetRectBoundsLocal(const Scaleform::Render::Rect<float> &);
	virtual unsigned long GetFillStyleCount();
	virtual unsigned long GetStrokeStyleCount();
	virtual void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *);
	virtual void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *);
	virtual bool Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType, unsigned long, bool);
	void SetStyles(unsigned long, const Scaleform::Render::FillStyleType *, unsigned long, const Scaleform::Render::StrokeStyleType *);
	virtual Scaleform::GFx::ShapeDataBase * Clone();
	virtual void BindResourcesInStyles(const Scaleform::GFx::ResourceBinding &);
private:
	Scaleform::GFx::ConstShapeWithStyles & operator=(const Scaleform::GFx::ConstShapeWithStyles &);
	unsigned char * Styles; // 0x20
	unsigned long FillStylesNum; // 0x28
	unsigned long StrokeStylesNum; // 0x2C
	Scaleform::Render::Rect<float> Bound; // 0x30
	Scaleform::Render::Rect<float> RectBound; // 0x40
};
Scaleform::Render::Rect<float> Scaleform::GFx::ConstShapeWithStyles::GetBoundsLocal(); // 0x140325F60
void Scaleform::GFx::ConstShapeWithStyles::SetBoundsLocal(const Scaleform::Render::Rect<float> & r); // 0x14036EB50
Scaleform::Render::Rect<float> Scaleform::GFx::ConstShapeWithStyles::GetRectBoundsLocal(); // 0x14036E4D0
void Scaleform::GFx::ConstShapeWithStyles::SetRectBoundsLocal(const Scaleform::Render::Rect<float> & r); // 0x14036EB80
unsigned long Scaleform::GFx::ConstShapeWithStyles::GetFillStyleCount(); // 0x14035A420
unsigned long Scaleform::GFx::ConstShapeWithStyles::GetStrokeStyleCount(); // 0x1403696E0
class Scaleform::GFx::SwfShapeCharacterDef :
	Scaleform::GFx::ShapeBaseCharacterDef
{
public:
	SwfShapeCharacterDef(Scaleform::GFx::SwfShapeCharacterDef &);
	SwfShapeCharacterDef(const Scaleform::GFx::SwfShapeCharacterDef &);
	SwfShapeCharacterDef(Scaleform::GFx::ShapeDataBase *);
protected:
	SwfShapeCharacterDef();
public:
	virtual Scaleform::Render::Rect<float> GetBoundsLocal(float);
	virtual Scaleform::Render::Rect<float> GetRectBoundsLocal(float);
	void SetRectBoundsLocal(const Scaleform::Render::Rect<float> &);
	virtual bool DefPointTestLocal(const Scaleform::Render::Point<float> &, bool, const Scaleform::GFx::DisplayObjectBase *);
	virtual unsigned long ComputeGeometryHash();
	virtual bool IsEqualGeometry(const Scaleform::GFx::ShapeBaseCharacterDef &);
	virtual Scaleform::Render::ShapeDataInterface * GetShape();
	virtual Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> BindResourcesInStyles(const Scaleform::GFx::ResourceBinding &);
	virtual bool NeedsResolving();
protected:
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> pShape; // 0x28
public:
	virtual ~SwfShapeCharacterDef();
	Scaleform::GFx::SwfShapeCharacterDef & operator=(Scaleform::GFx::SwfShapeCharacterDef &);
	Scaleform::GFx::SwfShapeCharacterDef & operator=(const Scaleform::GFx::SwfShapeCharacterDef &);
};
void Scaleform::GFx::SwfShapeCharacterDef::SetRectBoundsLocal(const Scaleform::Render::Rect<float> & r); // 0x1403E3350
bool Scaleform::GFx::SwfShapeCharacterDef::DefPointTestLocal(const Scaleform::Render::Point<float> & pt, bool testShape, const Scaleform::GFx::DisplayObjectBase * pinst); // 0x1403E03D0
unsigned long Scaleform::GFx::ImageShapeCharacterDef::ComputeGeometryHash(); // 0x1400470F0
bool Scaleform::GFx::SwfShapeCharacterDef::IsEqualGeometry(const Scaleform::GFx::ShapeBaseCharacterDef & cmpWith); // 0x1403FB1C0
Scaleform::Render::ShapeDataInterface * Scaleform::GFx::ImageShapeCharacterDef::GetShape(); // 0x140488880
bool Scaleform::GFx::SwfShapeCharacterDef::NeedsResolving(); // 0x1403E0650
class Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>
{
protected:
	Scaleform::GFx::ShapeDataBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ShapeDataBase>(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	Ptr<Scaleform::GFx::ShapeDataBase>(Scaleform::GFx::ShapeDataBase *);
	Ptr<Scaleform::GFx::ShapeDataBase>(Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ShapeDataBase>(Scaleform::Pickable<Scaleform::GFx::ShapeDataBase>);
	Ptr<Scaleform::GFx::ShapeDataBase>(Scaleform::GFx::ShapeDataBase &);
	Ptr<Scaleform::GFx::ShapeDataBase>();
	~Ptr<Scaleform::GFx::ShapeDataBase>();
	bool operator==(Scaleform::GFx::ShapeDataBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	bool operator!=(Scaleform::GFx::ShapeDataBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & operator=(Scaleform::Pickable<Scaleform::GFx::ShapeDataBase>);
	const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & operator=(Scaleform::GFx::ShapeDataBase &);
	const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & operator=(Scaleform::GFx::ShapeDataBase *);
	const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ShapeDataBase>);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & SetPtr(Scaleform::GFx::ShapeDataBase &);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & SetPtr(Scaleform::GFx::ShapeDataBase *);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ShapeDataBase * & GetRawRef();
	Scaleform::GFx::ShapeDataBase * GetPtr();
	Scaleform::GFx::ShapeDataBase & operator*();
	Scaleform::GFx::ShapeDataBase * operator->();
	Scaleform::GFx::ShapeDataBase * operator class Scaleform::GFx::ShapeDataBase *();
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & Pick(Scaleform::GFx::ShapeDataBase *);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & Pick(Scaleform::Pickable<Scaleform::GFx::ShapeDataBase>);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & Pick(Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
};
class Scaleform::GFx::ImageShapeCharacterDef :
	Scaleform::GFx::ShapeBaseCharacterDef
{
public:
	ImageShapeCharacterDef(Scaleform::GFx::ImageShapeCharacterDef &);
	ImageShapeCharacterDef(const Scaleform::GFx::ImageShapeCharacterDef &);
	ImageShapeCharacterDef(Scaleform::GFx::ImageResource *, Scaleform::GFx::ImageCreator *, bool);
	virtual Scaleform::Render::Rect<float> GetBoundsLocal(float);
	virtual Scaleform::Render::Rect<float> GetRectBoundsLocal(float);
	virtual bool DefPointTestLocal(const Scaleform::Render::Point<float> &, bool, const Scaleform::GFx::DisplayObjectBase *);
	virtual unsigned long ComputeGeometryHash();
	virtual bool IsEqualGeometry(const Scaleform::GFx::ShapeBaseCharacterDef &);
	virtual Scaleform::Render::ShapeDataInterface * GetShape();
protected:
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> pShape; // 0x28
public:
	virtual ~ImageShapeCharacterDef();
	Scaleform::GFx::ImageShapeCharacterDef & operator=(Scaleform::GFx::ImageShapeCharacterDef &);
	Scaleform::GFx::ImageShapeCharacterDef & operator=(const Scaleform::GFx::ImageShapeCharacterDef &);
};
Scaleform::Render::Rect<float> Scaleform::GFx::ImageShapeCharacterDef::GetBoundsLocal(float __formal); // 0x1403E0400
Scaleform::Render::Rect<float> Scaleform::GFx::ImageShapeCharacterDef::GetRectBoundsLocal(float __formal); // 0x1403E0530