#pragma once

struct Scaleform::GFx::TagInfo
{
	Scaleform::GFx::TagType TagType; // 0x0
	long TagOffset; // 0x4
	long TagLength; // 0x8
	long TagDataOffset; // 0xC
};
class Scaleform::GFx::MorphCharacterDef :
	Scaleform::GFx::ShapeBaseCharacterDef
{
public:
	MorphCharacterDef(const Scaleform::GFx::MorphCharacterDef &);
	MorphCharacterDef();
	virtual ~MorphCharacterDef();
	void Read(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &, bool);
	virtual Scaleform::Render::Rect<float> GetBoundsLocal(float);
	virtual Scaleform::Render::Rect<float> GetRectBoundsLocal(float);
	virtual bool DefPointTestLocal(const Scaleform::Render::Point<float> &, bool, const Scaleform::GFx::DisplayObjectBase *);
	virtual unsigned long ComputeGeometryHash();
	virtual bool IsEqualGeometry(const Scaleform::GFx::ShapeBaseCharacterDef &);
	virtual Scaleform::Render::ShapeDataInterface * GetShape();
	virtual Scaleform::Ptr<Scaleform::Render::ShapeMeshProvider> BindResourcesInStyles(const Scaleform::GFx::ResourceBinding &);
	virtual bool NeedsResolving();
private:
	Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> pShape1; // 0x28
	Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> pShape2; // 0x30
	void ReadMorphFillStyle(Scaleform::GFx::LoadProcess *, Scaleform::GFx::TagType, Scaleform::Render::FillStyleType &, Scaleform::Render::FillStyleType &, bool *);
public:
	Scaleform::GFx::MorphCharacterDef & operator=(const Scaleform::GFx::MorphCharacterDef &);
};
Scaleform::Render::Rect<float> Scaleform::GFx::MorphCharacterDef::GetRectBoundsLocal(float morphRatio); // 0x1403FB1A0
unsigned long Scaleform::GFx::MorphCharacterDef::ComputeGeometryHash(); // 0x1400470F0
Scaleform::Render::ShapeDataInterface * Scaleform::GFx::MorphCharacterDef::GetShape(); // 0x140488880
bool Scaleform::GFx::MorphCharacterDef::NeedsResolving(); // 0x1403FB1F0
class Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles>
{
protected:
	Scaleform::GFx::ConstShapeWithStyles * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ConstShapeWithStyles>(const Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> &);
	Ptr<Scaleform::GFx::ConstShapeWithStyles>(Scaleform::GFx::ConstShapeWithStyles *);
	Ptr<Scaleform::GFx::ConstShapeWithStyles>(Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ConstShapeWithStyles>(Scaleform::Pickable<Scaleform::GFx::ConstShapeWithStyles>);
	Ptr<Scaleform::GFx::ConstShapeWithStyles>(Scaleform::GFx::ConstShapeWithStyles &);
	Ptr<Scaleform::GFx::ConstShapeWithStyles>();
	~Ptr<Scaleform::GFx::ConstShapeWithStyles>();
	bool operator==(Scaleform::GFx::ConstShapeWithStyles *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> &);
	bool operator!=(Scaleform::GFx::ConstShapeWithStyles *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> &);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & operator=(Scaleform::Pickable<Scaleform::GFx::ConstShapeWithStyles>);
	const Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & operator=(Scaleform::GFx::ConstShapeWithStyles &);
	const Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & operator=(Scaleform::GFx::ConstShapeWithStyles *);
	const Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & operator=(const Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> &);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ConstShapeWithStyles>);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & SetPtr(Scaleform::GFx::ConstShapeWithStyles &);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & SetPtr(Scaleform::GFx::ConstShapeWithStyles *);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ConstShapeWithStyles * & GetRawRef();
	Scaleform::GFx::ConstShapeWithStyles * GetPtr();
	Scaleform::GFx::ConstShapeWithStyles & operator*();
	Scaleform::GFx::ConstShapeWithStyles * operator->();
	Scaleform::GFx::ConstShapeWithStyles * operator class Scaleform::GFx::ConstShapeWithStyles *();
	Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & Pick(Scaleform::GFx::ConstShapeWithStyles *);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & Pick(Scaleform::Pickable<Scaleform::GFx::ConstShapeWithStyles>);
	Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> & Pick(Scaleform::Ptr<Scaleform::GFx::ConstShapeWithStyles> &);
};