#pragma once

void Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::Transform(float * x, float * y); // 0x140350C80
void Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> >::Transform(float * x, float * y); // 0x140350C90
float Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::GetScale(); // 0x14034F9C0
float Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> >::GetScale(); // 0x14034F9D0
float Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::GetXScale(); // 0x14034FC30
float Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> >::GetXScale(); // 0x14034FC40
float Scaleform::Render::TransformerWrapper<Scaleform::Render::Scale9GridInfo>::GetYScale(); // 0x14034FC60
float Scaleform::Render::TransformerWrapper<Scaleform::Render::Matrix2x4<float> >::GetYScale(); // 0x14034FC70
class Scaleform::RefCountBase<Scaleform::Render::MorphShapeData,71> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,71>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 71,
	};
public:
	RefCountBase<Scaleform::Render::MorphShapeData,71>(Scaleform::RefCountBase<Scaleform::Render::MorphShapeData,71> &);
	RefCountBase<Scaleform::Render::MorphShapeData,71>(const Scaleform::RefCountBase<Scaleform::Render::MorphShapeData,71> &);
	RefCountBase<Scaleform::Render::MorphShapeData,71>();
	virtual ~RefCountBase<Scaleform::Render::MorphShapeData,71>();
	Scaleform::RefCountBase<Scaleform::Render::MorphShapeData,71> & operator=(Scaleform::RefCountBase<Scaleform::Render::MorphShapeData,71> &);
	Scaleform::RefCountBase<Scaleform::Render::MorphShapeData,71> & operator=(const Scaleform::RefCountBase<Scaleform::Render::MorphShapeData,71> &);
};
struct Scaleform::Render::MorphShapeData :
	Scaleform::RefCountBase<Scaleform::Render::MorphShapeData,71>
{
	class ContainerType;
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> pMorphTo; // 0x10
	Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> Container1; // 0x18
	Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> Container2; // 0x30
	Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > ShapeData1; // 0x48
	Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > ShapeData2; // 0xB0
	MorphShapeData(Scaleform::Render::MorphShapeData &);
	MorphShapeData(const Scaleform::Render::MorphShapeData &);
	MorphShapeData(Scaleform::Render::ShapeDataInterface *);
	virtual ~MorphShapeData();
	Scaleform::Render::MorphShapeData & operator=(Scaleform::Render::MorphShapeData &);
	Scaleform::Render::MorphShapeData & operator=(const Scaleform::Render::MorphShapeData &);
};
class Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::Render::ShapeDataInterface>
{
protected:
	Scaleform::Render::ShapeDataInterface * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ShapeDataInterface>(const Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> &);
	Ptr<Scaleform::Render::ShapeDataInterface>(Scaleform::Render::ShapeDataInterface *);
	Ptr<Scaleform::Render::ShapeDataInterface>(Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ShapeDataInterface>(Scaleform::Pickable<Scaleform::Render::ShapeDataInterface>);
	Ptr<Scaleform::Render::ShapeDataInterface>(Scaleform::Render::ShapeDataInterface &);
	Ptr<Scaleform::Render::ShapeDataInterface>();
	~Ptr<Scaleform::Render::ShapeDataInterface>();
	bool operator==(Scaleform::Render::ShapeDataInterface *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> &);
	bool operator!=(Scaleform::Render::ShapeDataInterface *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & operator=(Scaleform::Pickable<Scaleform::Render::ShapeDataInterface>);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & operator=(Scaleform::Render::ShapeDataInterface &);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & operator=(Scaleform::Render::ShapeDataInterface *);
	const Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & operator=(const Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & SetPtr(Scaleform::Pickable<Scaleform::Render::ShapeDataInterface>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & SetPtr(Scaleform::Render::ShapeDataInterface &);
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & SetPtr(Scaleform::Render::ShapeDataInterface *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ShapeDataInterface * & GetRawRef();
	Scaleform::Render::ShapeDataInterface * GetPtr();
	Scaleform::Render::ShapeDataInterface & operator*();
	Scaleform::Render::ShapeDataInterface * operator->();
	Scaleform::Render::ShapeDataInterface * operator class Scaleform::Render::ShapeDataInterface *();
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & Pick(Scaleform::Render::ShapeDataInterface *);
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & Pick(Scaleform::Pickable<Scaleform::Render::ShapeDataInterface>);
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> & Pick(Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> &);
};
class Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > :
	Scaleform::Render::ShapeDataInterface
{
	enum DataStatus
	{
		Status_Clean = 0,
		Status_StartLayer = 1,
		Status_StartPath = 2,
		Status_MoveTo = 3,
		Status_EdgeTo = 4,
		Status_EndPath = 5,
		Status_EndShape = 6,
	};
	enum DataTags
	{
		Tag_NewLayer = 0,
		Tag_NewPath = 1,
		Tag_MoveTo = 2,
		Tag_LineTo = 3,
		Tag_QuadTo = 4,
		Tag_CubicTo = 5,
		Tag_EndPath = 6,
		Tag_EndShape = 7,
	};
public:
	ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, unsigned long);
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
	void ClosePath();
	void EndPath();
	void EndShape();
	virtual unsigned long GetFillStyleCount();
	virtual unsigned long GetStrokeStyleCount();
	virtual void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *);
	virtual void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *);
	virtual unsigned long GetStartingPos();
	virtual Scaleform::Render::ShapePathType ReadPathInfo(Scaleform::Render::ShapePosInfo *, float *, unsigned long *);
	virtual Scaleform::Render::PathEdgeType ReadEdge(Scaleform::Render::ShapePosInfo *, float *);
	float GetLastX();
	float GetLastY();
private:
	Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::DataStatus Status; // 0x10
	Scaleform::ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> Fills; // 0x18
	Scaleform::ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> Strokes; // 0x30
	Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * Data; // 0x48
	unsigned long StartingPos; // 0x50
	float StartX; // 0x54
	float StartY; // 0x58
	float LastX; // 0x5C
	float LastY; // 0x60
public:
	virtual ~ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
};
class Scaleform::Render::ShapeMeshProvider :
	Scaleform::Render::MeshProvider_KeySupport
{
	enum I9gType
	{
		I9gNone = 0,
		I9gNormalSlice = 1,
		I9gMergedSlice = 2,
	};
	struct DrawLayerType;
	enum <unnamed-enum-VerBufSize>
	{
		VerBufSize = 256,
		TriBufSize = 256,
	};
public:
	ShapeMeshProvider(const Scaleform::Render::ShapeMeshProvider &);
	ShapeMeshProvider(Scaleform::Render::ShapeDataInterface *, Scaleform::Render::ShapeDataInterface *);
	ShapeMeshProvider();
	virtual ~ShapeMeshProvider();
	void AttachShape(Scaleform::Render::ShapeDataInterface *, Scaleform::Render::ShapeDataInterface *);
	virtual bool GetData(Scaleform::Render::HAL *, Scaleform::Render::MeshBase *, Scaleform::Render::VertexOutput *, unsigned long);
	virtual void OnEvict(Scaleform::Render::MeshBase *);
	virtual Scaleform::Render::Rect<float> GetIdentityBounds();
	virtual Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Rect<float> GetCorrectBounds(const Scaleform::Render::Matrix2x4<float> &, float, Scaleform::Render::StrokeGenerator *, const Scaleform::Render::ToleranceParams *);
	bool HitTestShape(const Scaleform::Render::Matrix2x4<float> &, float, float, float, Scaleform::Render::StrokeGenerator *, const Scaleform::Render::ToleranceParams *, Scaleform::Render::Scale9GridInfo *);
	virtual bool HitTestShape(const Scaleform::Render::Matrix2x4<float> &, float, float, float, Scaleform::Render::StrokeGenerator *, const Scaleform::Render::ToleranceParams *);
	virtual unsigned long GetLayerCount();
	virtual unsigned long GetFillCount(unsigned long, unsigned long);
	virtual void GetFillData(Scaleform::Render::FillData *, unsigned long, unsigned long, unsigned long);
	virtual void GetFillMatrix(Scaleform::Render::HAL *, Scaleform::Render::MeshBase *, Scaleform::Render::Matrix2x4<float> *, unsigned long, unsigned long, unsigned long);
	unsigned long GetFillStyleCount();
	unsigned long GetStrokeStyleCount();
	void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *, float);
	void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *, float);
	unsigned long GetLayerStroke(unsigned long);
	unsigned long GetLayerStartPos(unsigned long);
	unsigned long GetStyleByFillIdx(unsigned long, unsigned long);
	bool HasGradientMorph();
	bool HasStrokes();
	const Scaleform::Render::ShapeDataInterface * GetShapeData();
	struct TmpPathInfoType;
	class TmpPathsArray;
private:
	void createMorphData();
	void acquireShapeData();
	void countComplexFills(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> &, unsigned long long, unsigned long long, Scaleform::Render::ShapeMeshProvider::DrawLayerType *);
	void createDrawLayers(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> &, unsigned long long, unsigned long long);
	bool checkI9gMergedSlice();
	bool checkI9gLayer(const Scaleform::Render::ShapeMeshProvider::DrawLayerType &);
	void perceiveImage9GridLayers();
	Scaleform::Render::Rect<float> getLayerBounds(unsigned long);
	Scaleform::Render::ComplexFill * getComplexFill(unsigned long, unsigned long, unsigned long *);
	Scaleform::Render::Matrix2x4<float> getMorphMatrix(unsigned long, unsigned long);
	bool generateImage9Grid(Scaleform::Render::HAL *, Scaleform::Render::Scale9GridInfo *, Scaleform::Render::VertexOutput *, unsigned long);
	bool tessellateFill(Scaleform::Render::HAL *, const Scaleform::Render::Scale9GridInfo *, unsigned long, Scaleform::Render::MeshBase *, Scaleform::Render::VertexOutput *, unsigned long);
	bool tessellateStroke(Scaleform::Render::HAL *, const Scaleform::Render::Scale9GridInfo *, unsigned long, unsigned long, Scaleform::Render::MeshBase *, Scaleform::Render::VertexOutput *, unsigned long);
	void computeImgAdjustMatrix(const Scaleform::Render::Scale9GridData *, unsigned long, unsigned long, Scaleform::Render::Matrix2x4<float> *);
	bool createNullMesh(Scaleform::Render::VertexOutput *, unsigned long, unsigned long);
	bool acquireTessMeshes(Scaleform::Render::TessBase *, const Scaleform::Render::Matrix2x4<float> &, Scaleform::Render::VertexOutput *, unsigned long, unsigned long, unsigned long, float);
	void addFill(Scaleform::Render::MeshGenerator *, const Scaleform::Render::ToleranceParams &, const Scaleform::Render::TransformerBase *, unsigned long, float);
	void addToStrokeSorter(Scaleform::Render::MeshGenerator *, const Scaleform::Render::ToleranceParams &, const Scaleform::Render::TransformerBase *, unsigned long, unsigned long, float, float);
	void addStroke(Scaleform::Render::MeshGenerator *, Scaleform::Render::TessBase *, const Scaleform::Render::ToleranceParams &, const Scaleform::Render::TransformerBase *, unsigned long, unsigned long, float, float);
	void addStroke(Scaleform::Render::MeshGenerator *, const Scaleform::Render::ToleranceParams &, const Scaleform::Render::TransformerBase *, unsigned long, unsigned long, float, float);
	Scaleform::ArrayLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2,Scaleform::ArrayDefaultPolicy> DrawLayers; // 0x28
	Scaleform::ArrayLH_POD<unsigned int,2,Scaleform::ArrayDefaultPolicy> FillToStyleTable; // 0x40
	Scaleform::Ptr<Scaleform::Render::ShapeDataInterface> pShapeData; // 0x58
	Scaleform::Ptr<Scaleform::Render::MorphShapeData> pMorphData; // 0x60
	Scaleform::Render::Rect<float> IdentityBounds; // 0x70
	bool GradientMorph; // 0x80
	bool Strokes; // 0x81
public:
	Scaleform::Render::ShapeMeshProvider & operator=(const Scaleform::Render::ShapeMeshProvider &);
};
struct Scaleform::Render::ShapeMeshProvider::DrawLayerType
{
	unsigned long StartPos; // 0x0
	unsigned long StartFill; // 0x4
	unsigned long FillCount; // 0x8
	unsigned long StrokeStyle; // 0xC
	Scaleform::Render::ShapeMeshProvider::I9gType Image9GridType; // 0x10
};
Scaleform::Render::Rect<float> Scaleform::Render::ShapeMeshProvider::GetIdentityBounds(); // 0x14034F9A0
bool Scaleform::Render::ShapeMeshProvider::HitTestShape(const Scaleform::Render::Matrix2x4<float> & m, float x, float y, float morphRatio, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams * tol); // 0x14034FEB0
unsigned long Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::GetFillStyleCount(); // 0x14034F960
struct Scaleform::Render::ShapeMeshProvider::TmpPathInfoType
{
	unsigned long ShapeLayer; // 0x0
	unsigned long Pos; // 0x4
	unsigned long Styles[3]; // 0x8
	unsigned long EdgeCount; // 0x14
};
class Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2>
{
	struct ValueType;
private:
	ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2>(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> &);
public:
	ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2>();
	void Clear();
	void PushBack(const Scaleform::Render::ShapeMeshProvider::TmpPathInfoType &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	Scaleform::Render::ShapeMeshProvider::TmpPathInfoType & operator[](unsigned long long);
	const Scaleform::Render::ShapeMeshProvider::TmpPathInfoType & operator[](unsigned long long);
	Scaleform::Render::ShapeMeshProvider::TmpPathInfoType & At(unsigned long long);
	const Scaleform::Render::ShapeMeshProvider::TmpPathInfoType & At(unsigned long long);
	Scaleform::Render::ShapeMeshProvider::TmpPathInfoType ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> & operator=(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::ShapeMeshProvider::TmpPathInfoType,32,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	Scaleform::Render::ShapeMeshProvider::TmpPathInfoType Static[32]; // 0x18
	Scaleform::Render::ShapeMeshProvider::TmpPathInfoType * Data; // 0x318
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ShapeMeshProvider::DrawLayerType,Scaleform::AllocatorLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<Scaleform::Render::ShapeMeshProvider::DrawLayerType,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH_POD<unsigned int,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned int,Scaleform::AllocatorLH_POD<unsigned int,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned long ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<unsigned int,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<unsigned int,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<unsigned int,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<unsigned int,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<unsigned int,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<unsigned int,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<unsigned int,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<unsigned int,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::Render::MorphShapeData>
{
protected:
	Scaleform::Render::MorphShapeData * pObject; // 0x0
public:
	Ptr<Scaleform::Render::MorphShapeData>(const Scaleform::Ptr<Scaleform::Render::MorphShapeData> &);
	Ptr<Scaleform::Render::MorphShapeData>(Scaleform::Render::MorphShapeData *);
	Ptr<Scaleform::Render::MorphShapeData>(Scaleform::Ptr<Scaleform::Render::MorphShapeData> &, Scaleform::PickType);
	Ptr<Scaleform::Render::MorphShapeData>(Scaleform::Pickable<Scaleform::Render::MorphShapeData>);
	Ptr<Scaleform::Render::MorphShapeData>(Scaleform::Render::MorphShapeData &);
	Ptr<Scaleform::Render::MorphShapeData>();
	~Ptr<Scaleform::Render::MorphShapeData>();
	bool operator==(Scaleform::Render::MorphShapeData *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::MorphShapeData> &);
	bool operator!=(Scaleform::Render::MorphShapeData *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::MorphShapeData> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::MorphShapeData> &);
	Scaleform::Ptr<Scaleform::Render::MorphShapeData> & operator=(Scaleform::Pickable<Scaleform::Render::MorphShapeData>);
	const Scaleform::Ptr<Scaleform::Render::MorphShapeData> & operator=(Scaleform::Render::MorphShapeData &);
	const Scaleform::Ptr<Scaleform::Render::MorphShapeData> & operator=(Scaleform::Render::MorphShapeData *);
	const Scaleform::Ptr<Scaleform::Render::MorphShapeData> & operator=(const Scaleform::Ptr<Scaleform::Render::MorphShapeData> &);
	Scaleform::Ptr<Scaleform::Render::MorphShapeData> & SetPtr(Scaleform::Pickable<Scaleform::Render::MorphShapeData>);
	Scaleform::Ptr<Scaleform::Render::MorphShapeData> & SetPtr(Scaleform::Render::MorphShapeData &);
	Scaleform::Ptr<Scaleform::Render::MorphShapeData> & SetPtr(Scaleform::Render::MorphShapeData *);
	Scaleform::Ptr<Scaleform::Render::MorphShapeData> & SetPtr(const Scaleform::Ptr<Scaleform::Render::MorphShapeData> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::MorphShapeData * & GetRawRef();
	Scaleform::Render::MorphShapeData * GetPtr();
	Scaleform::Render::MorphShapeData & operator*();
	Scaleform::Render::MorphShapeData * operator->();
	Scaleform::Render::MorphShapeData * operator struct Scaleform::Render::MorphShapeData *();
	Scaleform::Ptr<Scaleform::Render::MorphShapeData> & Pick(Scaleform::Render::MorphShapeData *);
	Scaleform::Ptr<Scaleform::Render::MorphShapeData> & Pick(Scaleform::Pickable<Scaleform::Render::MorphShapeData>);
	Scaleform::Ptr<Scaleform::Render::MorphShapeData> & Pick(Scaleform::Ptr<Scaleform::Render::MorphShapeData> &);
};