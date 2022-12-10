#pragma once

class Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawingContext,322> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,322>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 322,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::DrawingContext,322>(Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawingContext,322> &);
	RefCountBaseNTS<Scaleform::GFx::DrawingContext,322>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawingContext,322> &);
	RefCountBaseNTS<Scaleform::GFx::DrawingContext,322>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::DrawingContext,322>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawingContext,322> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawingContext,322> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawingContext,322> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawingContext,322> &);
};
class Scaleform::GFx::DrawingContext :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::DrawingContext,322>,
	Scaleform::ListNode<Scaleform::GFx::DrawingContext>
{
	class Matrix;
	class Cxform;
	enum BlendType
	{
		Blend_None = 0,
		Blend_Normal = 1,
		Blend_Layer = 2,
		Blend_Multiply = 3,
		Blend_Screen = 4,
		Blend_Lighten = 5,
		Blend_Darken = 6,
		Blend_Difference = 7,
		Blend_Add = 8,
		Blend_Subtract = 9,
		Blend_Invert = 10,
		Blend_Alpha = 11,
		Blend_Erase = 12,
		Blend_Overlay = 13,
		Blend_HardLight = 14,
		Blend_Overwrite = 15,
		Blend_OverwriteAll = 16,
		Blend_FullAdditive = 17,
		Blend_FilterBlend = 18,
		Blend_Ignore = 19,
		Blend_Count = 20,
		Blend_Invalid = 21,
	};
	struct FillStyle;
	struct LineStyle;
	class ContainerType;
	class BaseShapeType;
	struct ComplexFill;
	class TreeContainer;
	class TreeShape;
	class GradientData;
	class PackedShape;
public:
	DrawingContext(const Scaleform::GFx::DrawingContext &);
protected:
	DrawingContext(Scaleform::Render::ContextImpl::Context &, Scaleform::GFx::ImageCreator *);
public:
	virtual ~DrawingContext();
	bool AcquirePath(bool);
	void SetNonZeroFill(bool);
	void BeginSolidFill(unsigned long);
	bool IsSolidFill(unsigned long);
	void BeginFill();
	void BeginBitmapFill(Scaleform::GFx::FillType, Scaleform::GFx::ImageResource *, const Scaleform::Render::Matrix2x4<float> &);
	void Clear();
	void ComputeBound(Scaleform::Render::Rect<float> *);
	Scaleform::Render::ComplexFill * CreateNewComplexFill();
	Scaleform::Render::ComplexFill * CreateLineComplexFill();
	void EndFill();
	void MoveTo(float, float);
	void LineTo(float, float);
	void CurveTo(float, float, float, float);
	bool DefPointTestLocal(const Scaleform::Render::Point<float> &, bool, const Scaleform::GFx::DisplayObjectBase *);
	void SetNoLine();
	void SetNoFill();
	void ChangeLineStyle(float, unsigned long, bool, unsigned long, unsigned long, unsigned long, float);
	bool NoLine();
	bool IsEmpty();
	bool IsDirty();
	Scaleform::Render::TreeContainer * GetTreeNode();
	Scaleform::Render::ContextImpl::Context & GetRenderContext();
	void UpdateRenderNode();
protected:
	unsigned long SetNewFill();
	void NewPath(float, float);
	void FinishPath();
	void SetLineStyle(float, unsigned long, bool, unsigned long, unsigned long, unsigned long, float);
	bool SameLineStyle(float, unsigned long, bool, unsigned long, unsigned long, unsigned long, float);
	Scaleform::MemoryHeap * GetHeap();
	Scaleform::Ptr<Scaleform::Render::TreeContainer> pTreeContainer; // 0x20
	Scaleform::Render::ContextImpl::Context & RenContext; // 0x28
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> ImgCreator; // 0x30
	Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> Shapes; // 0x38
	Scaleform::Render::FillStyleType mFillStyle; // 0x40
	Scaleform::Render::StrokeStyleType mLineStyle; // 0x50
	unsigned long StrokeStyle; // 0x78
	unsigned long FillStyle0; // 0x7C
	unsigned long FillStyle1; // 0x80
	unsigned long ClearToIndex; // 0x84
	Scaleform::Render::ShapePosInfo PosInfo; // 0x88
	float Ex; // 0xC0
	float Ey; // 0xC4
	float StX; // 0xC8
	float StY; // 0xCC
	enum <unnamed-enum-State_NewShapeFlag>
	{
		State_NewShapeFlag = 1,
		State_FreshLineStyle = 2,
		State_FreshFillStyle = 4,
		State_NeedEndPath = 8,
		State_NeedClosePath = 16,
		State_Dirty = 128,
	};
	unsigned char States; // 0xD0
private:
	Scaleform::GFx::DrawingContext & operator=(const Scaleform::GFx::DrawingContext &);
};
struct Scaleform::ListNode<Scaleform::GFx::DrawingContext>
{
	Scaleform::GFx::DrawingContext * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::GFx::DrawingContext * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::GFx::DrawingContext>();
	Scaleform::GFx::DrawingContext * GetPrev();
	Scaleform::GFx::DrawingContext * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::GFx::DrawingContext *);
	void InsertNodeAfter(Scaleform::GFx::DrawingContext *);
	void InsertNodeBefore(Scaleform::GFx::DrawingContext *);
};
class Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<unsigned char,Scaleform::AllocatorDH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > :
	Scaleform::Render::ShapeDataInterface
{
public:
	ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, unsigned long, float);
	unsigned long AddFillStyle(const Scaleform::Render::FillStyleType &);
	unsigned long AddStrokeStyle(const Scaleform::Render::StrokeStyleType &);
	void UpdateFillStyle(unsigned long, const Scaleform::Render::FillStyleType &);
	void UpdateStrokeStyle(unsigned long, const Scaleform::Render::StrokeStyleType &);
	void StartPath(Scaleform::Render::ShapePosInfo *, Scaleform::Render::ShapePathType, unsigned long, unsigned long, unsigned long, float, float);
	void LineTo(Scaleform::Render::ShapePosInfo *, float, float);
	void QuadTo(Scaleform::Render::ShapePosInfo *, float, float, float, float);
	void ClosePath(Scaleform::Render::ShapePosInfo *);
	void EndPath();
	void EndShape();
	virtual bool IsEmpty();
	virtual unsigned long GetFillStyleCount();
	virtual unsigned long GetStrokeStyleCount();
	virtual void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *);
	virtual void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *);
	virtual unsigned long GetStartingPos();
	virtual Scaleform::Render::ShapePathType ReadPathInfo(Scaleform::Render::ShapePosInfo *, float *, unsigned long *);
	virtual Scaleform::Render::PathEdgeType ReadEdge(Scaleform::Render::ShapePosInfo *, float *);
private:
	Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> * pContainer; // 0x10
	Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > Decoder; // 0x18
	unsigned long StartingPos; // 0x28
	float Multiplier; // 0x2C
	Scaleform::ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> FillStyles; // 0x30
	Scaleform::ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> StrokeStyles; // 0x48
public:
	virtual ~ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
};
class Scaleform::GFx::DrawingContext::PackedShape :
	Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> >
{
public:
	PackedShape(Scaleform::GFx::DrawingContext::PackedShape &);
	PackedShape(const Scaleform::GFx::DrawingContext::PackedShape &);
	PackedShape(Scaleform::MemoryHeap *);
private:
	Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> * getContainerPtr();
	Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy> Container; // 0x60
public:
	virtual ~PackedShape();
	Scaleform::GFx::DrawingContext::PackedShape & operator=(Scaleform::GFx::DrawingContext::PackedShape &);
	Scaleform::GFx::DrawingContext::PackedShape & operator=(const Scaleform::GFx::DrawingContext::PackedShape &);
};
class Scaleform::Ptr<Scaleform::Render::TreeContainer>
{
protected:
	Scaleform::Render::TreeContainer * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TreeContainer>(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	Ptr<Scaleform::Render::TreeContainer>(Scaleform::Render::TreeContainer *);
	Ptr<Scaleform::Render::TreeContainer>(Scaleform::Ptr<Scaleform::Render::TreeContainer> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TreeContainer>(Scaleform::Pickable<Scaleform::Render::TreeContainer>);
	Ptr<Scaleform::Render::TreeContainer>(Scaleform::Render::TreeContainer &);
	Ptr<Scaleform::Render::TreeContainer>();
	~Ptr<Scaleform::Render::TreeContainer>();
	bool operator==(Scaleform::Render::TreeContainer *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	bool operator!=(Scaleform::Render::TreeContainer *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & operator=(Scaleform::Pickable<Scaleform::Render::TreeContainer>);
	const Scaleform::Ptr<Scaleform::Render::TreeContainer> & operator=(Scaleform::Render::TreeContainer &);
	const Scaleform::Ptr<Scaleform::Render::TreeContainer> & operator=(Scaleform::Render::TreeContainer *);
	const Scaleform::Ptr<Scaleform::Render::TreeContainer> & operator=(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & SetPtr(Scaleform::Pickable<Scaleform::Render::TreeContainer>);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & SetPtr(Scaleform::Render::TreeContainer &);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & SetPtr(Scaleform::Render::TreeContainer *);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TreeContainer * & GetRawRef();
	Scaleform::Render::TreeContainer * GetPtr();
	Scaleform::Render::TreeContainer & operator*();
	Scaleform::Render::TreeContainer * operator->();
	Scaleform::Render::TreeContainer * operator class Scaleform::Render::TreeContainer *();
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & Pick(Scaleform::Render::TreeContainer *);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & Pick(Scaleform::Pickable<Scaleform::Render::TreeContainer>);
	Scaleform::Ptr<Scaleform::Render::TreeContainer> & Pick(Scaleform::Ptr<Scaleform::Render::TreeContainer> &);
};
class Scaleform::Ptr<Scaleform::GFx::ImageCreator>
{
protected:
	Scaleform::GFx::ImageCreator * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ImageCreator>(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	Ptr<Scaleform::GFx::ImageCreator>(Scaleform::GFx::ImageCreator *);
	Ptr<Scaleform::GFx::ImageCreator>(Scaleform::Ptr<Scaleform::GFx::ImageCreator> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ImageCreator>(Scaleform::Pickable<Scaleform::GFx::ImageCreator>);
	Ptr<Scaleform::GFx::ImageCreator>(Scaleform::GFx::ImageCreator &);
	Ptr<Scaleform::GFx::ImageCreator>();
	~Ptr<Scaleform::GFx::ImageCreator>();
	bool operator==(Scaleform::GFx::ImageCreator *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	bool operator!=(Scaleform::GFx::ImageCreator *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & operator=(Scaleform::Pickable<Scaleform::GFx::ImageCreator>);
	const Scaleform::Ptr<Scaleform::GFx::ImageCreator> & operator=(Scaleform::GFx::ImageCreator &);
	const Scaleform::Ptr<Scaleform::GFx::ImageCreator> & operator=(Scaleform::GFx::ImageCreator *);
	const Scaleform::Ptr<Scaleform::GFx::ImageCreator> & operator=(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ImageCreator>);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & SetPtr(Scaleform::GFx::ImageCreator &);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & SetPtr(Scaleform::GFx::ImageCreator *);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ImageCreator * & GetRawRef();
	Scaleform::GFx::ImageCreator * GetPtr();
	Scaleform::GFx::ImageCreator & operator*();
	Scaleform::GFx::ImageCreator * operator->();
	Scaleform::GFx::ImageCreator * operator class Scaleform::GFx::ImageCreator *();
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & Pick(Scaleform::GFx::ImageCreator *);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & Pick(Scaleform::Pickable<Scaleform::GFx::ImageCreator>);
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> & Pick(Scaleform::Ptr<Scaleform::GFx::ImageCreator> &);
};
class Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape>
{
protected:
	Scaleform::GFx::DrawingContext::PackedShape * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::DrawingContext::PackedShape>(const Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> &);
	Ptr<Scaleform::GFx::DrawingContext::PackedShape>(Scaleform::GFx::DrawingContext::PackedShape *);
	Ptr<Scaleform::GFx::DrawingContext::PackedShape>(Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::DrawingContext::PackedShape>(Scaleform::Pickable<Scaleform::GFx::DrawingContext::PackedShape>);
	Ptr<Scaleform::GFx::DrawingContext::PackedShape>(Scaleform::GFx::DrawingContext::PackedShape &);
	Ptr<Scaleform::GFx::DrawingContext::PackedShape>();
	~Ptr<Scaleform::GFx::DrawingContext::PackedShape>();
	bool operator==(Scaleform::GFx::DrawingContext::PackedShape *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> &);
	bool operator!=(Scaleform::GFx::DrawingContext::PackedShape *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> &);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & operator=(Scaleform::Pickable<Scaleform::GFx::DrawingContext::PackedShape>);
	const Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & operator=(Scaleform::GFx::DrawingContext::PackedShape &);
	const Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & operator=(Scaleform::GFx::DrawingContext::PackedShape *);
	const Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & operator=(const Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> &);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & SetPtr(Scaleform::Pickable<Scaleform::GFx::DrawingContext::PackedShape>);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & SetPtr(Scaleform::GFx::DrawingContext::PackedShape &);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & SetPtr(Scaleform::GFx::DrawingContext::PackedShape *);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::DrawingContext::PackedShape * & GetRawRef();
	Scaleform::GFx::DrawingContext::PackedShape * GetPtr();
	Scaleform::GFx::DrawingContext::PackedShape & operator*();
	Scaleform::GFx::DrawingContext::PackedShape * operator->();
	Scaleform::GFx::DrawingContext::PackedShape * operator class Scaleform::GFx::DrawingContext::PackedShape *();
	Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & Pick(Scaleform::GFx::DrawingContext::PackedShape *);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & Pick(Scaleform::Pickable<Scaleform::GFx::DrawingContext::PackedShape>);
	Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> & Pick(Scaleform::Ptr<Scaleform::GFx::DrawingContext::PackedShape> &);
};