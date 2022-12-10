#pragma once

class Scaleform::Render::ShapeDataFloatMP :
	Scaleform::Render::ShapeMeshProvider
{
public:
	ShapeDataFloatMP(Scaleform::Render::ShapeDataFloatMP &);
	ShapeDataFloatMP(const Scaleform::Render::ShapeDataFloatMP &);
	ShapeDataFloatMP();
	void Clear();
	unsigned long AddFillStyle(const Scaleform::Render::FillStyleType &);
	unsigned long AddStrokeStyle(float, unsigned long, float, unsigned long);
	unsigned long AddStrokeStyle(const Scaleform::Render::StrokeStyleType &);
	void StartLayer();
	void StartPath(unsigned long, unsigned long, unsigned long);
	void MoveTo(float, float);
	void LineTo(float, float);
	void QuadTo(float, float, float, float);
	void CubicTo(float, float, float, float, float, float);
	void RectanglePath(float, float, float, float);
	void ClosePath();
	void EndPath();
	void EndShape();
	void CountLayers();
	unsigned long GetFillStyleCount();
	unsigned long GetStrokeStyleCount();
	void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *);
	void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *);
private:
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> pData; // 0x90
public:
	virtual ~ShapeDataFloatMP();
	Scaleform::Render::ShapeDataFloatMP & operator=(Scaleform::Render::ShapeDataFloatMP &);
	Scaleform::Render::ShapeDataFloatMP & operator=(const Scaleform::Render::ShapeDataFloatMP &);
};
class Scaleform::Render::ShapeDataFloatMP :
	Scaleform::Render::ShapeMeshProvider
{
public:
	ShapeDataFloatMP(Scaleform::Render::ShapeDataFloatMP &);
	ShapeDataFloatMP(const Scaleform::Render::ShapeDataFloatMP &);
	ShapeDataFloatMP();
	void Clear();
	unsigned long AddFillStyle(const Scaleform::Render::FillStyleType &);
	unsigned long AddStrokeStyle(float, unsigned long, float, unsigned long);
	unsigned long AddStrokeStyle(const Scaleform::Render::StrokeStyleType &);
	void StartLayer();
	void StartPath(unsigned long, unsigned long, unsigned long);
	void MoveTo(float, float);
	void LineTo(float, float);
	void QuadTo(float, float, float, float);
	void CubicTo(float, float, float, float, float, float);
	void RectanglePath(float, float, float, float);
	void ClosePath();
	void EndPath();
	void EndShape();
	void CountLayers();
	unsigned long GetFillStyleCount();
	unsigned long GetStrokeStyleCount();
	void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *);
	void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *);
private:
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> pData; // 0x88
public:
	virtual ~ShapeDataFloatMP();
	Scaleform::Render::ShapeDataFloatMP & operator=(Scaleform::Render::ShapeDataFloatMP &);
	Scaleform::Render::ShapeDataFloatMP & operator=(const Scaleform::Render::ShapeDataFloatMP &);
};
void Scaleform::Render::ShapeDataFloatMP::RectanglePath(float x1, float y1, float x2, float y2); // 0x14032F1A0
class Scaleform::Ptr<Scaleform::Render::ShapeDataFloat>
{
protected:
	Scaleform::Render::ShapeDataFloat * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ShapeDataFloat>(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Render::ShapeDataFloat *);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Ptr<Scaleform::Render::ShapeDataFloat>(Scaleform::Render::ShapeDataFloat &);
	Ptr<Scaleform::Render::ShapeDataFloat>();
	~Ptr<Scaleform::Render::ShapeDataFloat>();
	bool operator==(Scaleform::Render::ShapeDataFloat *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	bool operator!=(Scaleform::Render::ShapeDataFloat *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Render::ShapeDataFloat &);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(Scaleform::Render::ShapeDataFloat *);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & operator=(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Render::ShapeDataFloat &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(Scaleform::Render::ShapeDataFloat *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ShapeDataFloat * & GetRawRef();
	Scaleform::Render::ShapeDataFloat * GetPtr();
	Scaleform::Render::ShapeDataFloat & operator*();
	Scaleform::Render::ShapeDataFloat * operator->();
	Scaleform::Render::ShapeDataFloat * operator class Scaleform::Render::ShapeDataFloat *();
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Render::ShapeDataFloat *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Pickable<Scaleform::Render::ShapeDataFloat>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> & Pick(Scaleform::Ptr<Scaleform::Render::ShapeDataFloat> &);
};