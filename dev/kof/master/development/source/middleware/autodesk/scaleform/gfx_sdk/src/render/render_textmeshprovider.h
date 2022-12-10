#pragma once

struct Scaleform::Render::VectorGlyphKey
{
	Scaleform::Render::FontCacheHandle * pFont; // 0x0
	unsigned short GlyphIndex; // 0x8
	unsigned char HintedVector; // 0xA
	unsigned char HintedRaster; // 0xB
	unsigned short Flags; // 0xC
	unsigned short Outline; // 0xE
	VectorGlyphKey(Scaleform::Render::FontCacheHandle *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
	VectorGlyphKey();
	unsigned long long GetHashValue();
	bool operator==(const Scaleform::Render::VectorGlyphKey &);
};
struct Scaleform::Render::VectorGlyphShape :
	Scaleform::Render::MeshProvider_KeySupport,
	Scaleform::ListNode<Scaleform::Render::VectorGlyphShape>
{
	Scaleform::Render::VectorGlyphKey Key; // 0x38
	Scaleform::Ptr<Scaleform::Render::GlyphShape> pShape; // 0x48
	Scaleform::Ptr<Scaleform::Render::GlyphRaster> pRaster; // 0x50
	Scaleform::Render::Rect<float> Bounds; // 0x60
	Scaleform::Render::GlyphCache * pCache; // 0x70
	VectorGlyphShape(const Scaleform::Render::VectorGlyphShape &);
	VectorGlyphShape(Scaleform::Render::GlyphCache *);
	VectorGlyphShape();
	virtual ~VectorGlyphShape();
	virtual void OnEvict(Scaleform::Render::MeshBase *);
	virtual bool GetData(Scaleform::Render::HAL *, Scaleform::Render::MeshBase *, Scaleform::Render::VertexOutput *, unsigned long);
	virtual Scaleform::Render::Rect<float> GetIdentityBounds();
	virtual Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	virtual Scaleform::Render::Rect<float> GetCorrectBounds(const Scaleform::Render::Matrix2x4<float> &, float, Scaleform::Render::StrokeGenerator *, const Scaleform::Render::ToleranceParams *);
	virtual bool HitTestShape(const Scaleform::Render::Matrix2x4<float> &, float, float, float, Scaleform::Render::StrokeGenerator *, const Scaleform::Render::ToleranceParams *);
	virtual unsigned long GetLayerCount();
	virtual unsigned long GetFillCount(unsigned long, unsigned long);
	virtual void GetFillData(Scaleform::Render::FillData *, unsigned long, unsigned long, unsigned long);
	virtual void GetFillMatrix(Scaleform::Render::HAL *, Scaleform::Render::MeshBase *, Scaleform::Render::Matrix2x4<float> *, unsigned long, unsigned long, unsigned long);
	unsigned long long GetHashValue();
	bool operator==(const Scaleform::Render::VectorGlyphShape &);
	struct PtrHashFunctor;
	bool generateNullVectorMesh(Scaleform::Render::VertexOutput *);
	Scaleform::Render::VectorGlyphShape & operator=(const Scaleform::Render::VectorGlyphShape &);
};
struct Scaleform::ListNode<Scaleform::Render::VectorGlyphShape>
{
	Scaleform::Render::VectorGlyphShape * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::VectorGlyphShape * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::VectorGlyphShape>();
	Scaleform::Render::VectorGlyphShape * GetPrev();
	Scaleform::Render::VectorGlyphShape * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::VectorGlyphShape *);
	void InsertNodeAfter(Scaleform::Render::VectorGlyphShape *);
	void InsertNodeBefore(Scaleform::Render::VectorGlyphShape *);
};
class Scaleform::Ptr<Scaleform::Render::GlyphShape>
{
protected:
	Scaleform::Render::GlyphShape * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GlyphShape>(const Scaleform::Ptr<Scaleform::Render::GlyphShape> &);
	Ptr<Scaleform::Render::GlyphShape>(Scaleform::Render::GlyphShape *);
	Ptr<Scaleform::Render::GlyphShape>(Scaleform::Ptr<Scaleform::Render::GlyphShape> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GlyphShape>(Scaleform::Pickable<Scaleform::Render::GlyphShape>);
	Ptr<Scaleform::Render::GlyphShape>(Scaleform::Render::GlyphShape &);
	Ptr<Scaleform::Render::GlyphShape>();
	~Ptr<Scaleform::Render::GlyphShape>();
	bool operator==(Scaleform::Render::GlyphShape *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GlyphShape> &);
	bool operator!=(Scaleform::Render::GlyphShape *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GlyphShape> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GlyphShape> &);
	Scaleform::Ptr<Scaleform::Render::GlyphShape> & operator=(Scaleform::Pickable<Scaleform::Render::GlyphShape>);
	const Scaleform::Ptr<Scaleform::Render::GlyphShape> & operator=(Scaleform::Render::GlyphShape &);
	const Scaleform::Ptr<Scaleform::Render::GlyphShape> & operator=(Scaleform::Render::GlyphShape *);
	const Scaleform::Ptr<Scaleform::Render::GlyphShape> & operator=(const Scaleform::Ptr<Scaleform::Render::GlyphShape> &);
	Scaleform::Ptr<Scaleform::Render::GlyphShape> & SetPtr(Scaleform::Pickable<Scaleform::Render::GlyphShape>);
	Scaleform::Ptr<Scaleform::Render::GlyphShape> & SetPtr(Scaleform::Render::GlyphShape &);
	Scaleform::Ptr<Scaleform::Render::GlyphShape> & SetPtr(Scaleform::Render::GlyphShape *);
	Scaleform::Ptr<Scaleform::Render::GlyphShape> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GlyphShape> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GlyphShape * & GetRawRef();
	Scaleform::Render::GlyphShape * GetPtr();
	Scaleform::Render::GlyphShape & operator*();
	Scaleform::Render::GlyphShape * operator->();
	Scaleform::Render::GlyphShape * operator class Scaleform::Render::GlyphShape *();
	Scaleform::Ptr<Scaleform::Render::GlyphShape> & Pick(Scaleform::Render::GlyphShape *);
	Scaleform::Ptr<Scaleform::Render::GlyphShape> & Pick(Scaleform::Pickable<Scaleform::Render::GlyphShape>);
	Scaleform::Ptr<Scaleform::Render::GlyphShape> & Pick(Scaleform::Ptr<Scaleform::Render::GlyphShape> &);
};
class Scaleform::Ptr<Scaleform::Render::GlyphRaster>
{
protected:
	Scaleform::Render::GlyphRaster * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GlyphRaster>(const Scaleform::Ptr<Scaleform::Render::GlyphRaster> &);
	Ptr<Scaleform::Render::GlyphRaster>(Scaleform::Render::GlyphRaster *);
	Ptr<Scaleform::Render::GlyphRaster>(Scaleform::Ptr<Scaleform::Render::GlyphRaster> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GlyphRaster>(Scaleform::Pickable<Scaleform::Render::GlyphRaster>);
	Ptr<Scaleform::Render::GlyphRaster>(Scaleform::Render::GlyphRaster &);
	Ptr<Scaleform::Render::GlyphRaster>();
	~Ptr<Scaleform::Render::GlyphRaster>();
	bool operator==(Scaleform::Render::GlyphRaster *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GlyphRaster> &);
	bool operator!=(Scaleform::Render::GlyphRaster *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GlyphRaster> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GlyphRaster> &);
	Scaleform::Ptr<Scaleform::Render::GlyphRaster> & operator=(Scaleform::Pickable<Scaleform::Render::GlyphRaster>);
	const Scaleform::Ptr<Scaleform::Render::GlyphRaster> & operator=(Scaleform::Render::GlyphRaster &);
	const Scaleform::Ptr<Scaleform::Render::GlyphRaster> & operator=(Scaleform::Render::GlyphRaster *);
	const Scaleform::Ptr<Scaleform::Render::GlyphRaster> & operator=(const Scaleform::Ptr<Scaleform::Render::GlyphRaster> &);
	Scaleform::Ptr<Scaleform::Render::GlyphRaster> & SetPtr(Scaleform::Pickable<Scaleform::Render::GlyphRaster>);
	Scaleform::Ptr<Scaleform::Render::GlyphRaster> & SetPtr(Scaleform::Render::GlyphRaster &);
	Scaleform::Ptr<Scaleform::Render::GlyphRaster> & SetPtr(Scaleform::Render::GlyphRaster *);
	Scaleform::Ptr<Scaleform::Render::GlyphRaster> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GlyphRaster> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GlyphRaster * & GetRawRef();
	Scaleform::Render::GlyphRaster * GetPtr();
	Scaleform::Render::GlyphRaster & operator*();
	Scaleform::Render::GlyphRaster * operator->();
	Scaleform::Render::GlyphRaster * operator class Scaleform::Render::GlyphRaster *();
	Scaleform::Ptr<Scaleform::Render::GlyphRaster> & Pick(Scaleform::Render::GlyphRaster *);
	Scaleform::Ptr<Scaleform::Render::GlyphRaster> & Pick(Scaleform::Pickable<Scaleform::Render::GlyphRaster>);
	Scaleform::Ptr<Scaleform::Render::GlyphRaster> & Pick(Scaleform::Ptr<Scaleform::Render::GlyphRaster> &);
};
Scaleform::Render::VectorGlyphShape::~VectorGlyphShape(); // 0x140375DE0
struct Scaleform::Render::VectorGlyphShape::PtrHashFunctor
{
	unsigned long long operator()(const Scaleform::Render::VectorGlyphKey &);
	unsigned long long operator()(const Scaleform::Render::VectorGlyphShape *);
};
struct Scaleform::Render::GlyphRasterEnt
{
	float Coord[4]; // 0x0
	const Scaleform::Render::GlyphNode * pGlyph; // 0x10
};
struct Scaleform::Render::GlyphTextureEnt
{
	float Coord[4]; // 0x0
	const Scaleform::Render::TextureGlyph * pGlyph; // 0x10
};
struct Scaleform::Render::GlyphVectorEnt
{
	Scaleform::Render::Font * pFont; // 0x0
	unsigned short GlyphIndex; // 0x8
	unsigned short Flags; // 0xA
	float FontSize; // 0xC
	float x; // 0x10
	float y; // 0x14
};
struct Scaleform::Render::BackgroundEnt
{
	float Coord[4]; // 0x0
	unsigned long BorderColor; // 0x10
};
struct Scaleform::Render::SelectionEnt
{
	float Coord[4]; // 0x0
};
struct Scaleform::Render::UnderlineEnt
{
	unsigned long Style; // 0x0
	float x; // 0x4
	float y; // 0x8
	float Len; // 0xC
};
struct Scaleform::Render::TextImageEnt
{
	float Coord[4]; // 0x0
	Scaleform::Render::Image * pImage; // 0x10
};
struct Scaleform::Render::MaskEnt
{
	float Coord[4]; // 0x0
};
union Scaleform::Render::TextEntryUnion
{
public:
	Scaleform::Render::GlyphRasterEnt RasterData; // 0x0
	Scaleform::Render::GlyphTextureEnt PackedData; // 0x0
	Scaleform::Render::GlyphVectorEnt VectorData; // 0x0
	Scaleform::Render::BackgroundEnt BackgroundData; // 0x0
	Scaleform::Render::SelectionEnt SelectionData; // 0x0
	Scaleform::Render::UnderlineEnt UnderlineData; // 0x0
	Scaleform::Render::TextImageEnt ImageData; // 0x0
	Scaleform::Render::MaskEnt MaskData; // 0x0
};
struct Scaleform::Render::TmpTextMeshEntry
{
	unsigned short LayerType; // 0x0
	unsigned short TextureId; // 0x2
	unsigned long EntryIdx; // 0x4
	unsigned long mColor; // 0x8
	Scaleform::Render::PrimitiveFill * pFill; // 0x10
	Scaleform::Render::TextEntryUnion EntryData; // 0x18
};
struct Scaleform::Render::TmpTextMeshLayer
{
	Scaleform::Render::TextLayerType Type; // 0x0
	unsigned long Start; // 0x4
	unsigned long Count; // 0x8
	Scaleform::Render::PrimitiveFill * pFill; // 0x10
};
struct Scaleform::Render::TextMeshEntry
{
	unsigned short LayerType; // 0x0
	unsigned short TextureId; // 0x2
	unsigned long mColor; // 0x4
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> pFill; // 0x8
	Scaleform::Render::TextEntryUnion EntryData; // 0x10
	TextMeshEntry(Scaleform::Render::TextMeshEntry &);
	TextMeshEntry(const Scaleform::Render::TextMeshEntry &);
	TextMeshEntry();
	~TextMeshEntry();
	Scaleform::Render::TextMeshEntry & operator=(Scaleform::Render::TextMeshEntry &);
	Scaleform::Render::TextMeshEntry & operator=(const Scaleform::Render::TextMeshEntry &);
};
struct Scaleform::Render::TmpTextStorage
{
	Scaleform::Render::LinearHeap LHeap; // 0x0
	Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4> Entries; // 0x28
	Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4> Layers; // 0x50
	TmpTextStorage(Scaleform::MemoryHeap *);
	~TmpTextStorage();
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>
{
	enum PageScale_e
	{
		PageShift = 6,
		PageSize = 64,
		PageMask = 63,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4> &);
public:
	ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::TmpTextMeshEntry &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::TmpTextMeshEntry & operator[](unsigned long long);
	const Scaleform::Render::TmpTextMeshEntry & operator[](unsigned long long);
	Scaleform::Render::TmpTextMeshEntry & Back();
	const Scaleform::Render::TmpTextMeshEntry & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::TmpTextMeshEntry * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::TmpTextMeshEntry * * Pages; // 0x20
};
class Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4>
{
	enum PageScale_e
	{
		PageShift = 4,
		PageSize = 16,
		PageMask = 15,
	};
	struct ValueType;
private:
	ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4>(const Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4> &);
public:
	ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4>(Scaleform::Render::LinearHeap *);
	void Clear();
	void ClearAndRelease();
	void PushBack(const Scaleform::Render::TmpTextMeshLayer &);
	void PopBack();
	void CutAt(unsigned long long);
	unsigned long long GetSize();
	Scaleform::Render::TmpTextMeshLayer & operator[](unsigned long long);
	const Scaleform::Render::TmpTextMeshLayer & operator[](unsigned long long);
	Scaleform::Render::TmpTextMeshLayer & Back();
	const Scaleform::Render::TmpTextMeshLayer & Back();
private:
	const Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4> & operator=(const Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4> &);
	void allocPage(unsigned long long);
	Scaleform::Render::TmpTextMeshLayer * dataPtr();
	Scaleform::Render::LinearHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long NumPages; // 0x10
	unsigned long long MaxPages; // 0x18
	Scaleform::Render::TmpTextMeshLayer * * Pages; // 0x20
};
struct Scaleform::Render::TextMeshLayer
{
	Scaleform::Render::TextLayerType Type; // 0x0
	unsigned long Start; // 0x4
	unsigned long Count; // 0x8
	Scaleform::Ptr<Scaleform::Render::Mesh> pMesh; // 0x10
	Scaleform::Ptr<Scaleform::Render::MeshKey> pMeshKey; // 0x18
	Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> pShape; // 0x20
	Scaleform::Render::MatrixPoolImpl::HMatrix M; // 0x28
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> pFill; // 0x30
	float SizeScale; // 0x38
	TextMeshLayer(Scaleform::Render::TextMeshLayer &);
	TextMeshLayer(const Scaleform::Render::TextMeshLayer &);
	TextMeshLayer();
	~TextMeshLayer();
	Scaleform::Render::TextMeshLayer & operator=(Scaleform::Render::TextMeshLayer &);
	Scaleform::Render::TextMeshLayer & operator=(const Scaleform::Render::TextMeshLayer &);
};
class Scaleform::Ptr<Scaleform::Render::MeshKey>
{
protected:
	Scaleform::Render::MeshKey * pObject; // 0x0
public:
	Ptr<Scaleform::Render::MeshKey>(const Scaleform::Ptr<Scaleform::Render::MeshKey> &);
	Ptr<Scaleform::Render::MeshKey>(Scaleform::Render::MeshKey *);
	Ptr<Scaleform::Render::MeshKey>(Scaleform::Ptr<Scaleform::Render::MeshKey> &, Scaleform::PickType);
	Ptr<Scaleform::Render::MeshKey>(Scaleform::Pickable<Scaleform::Render::MeshKey>);
	Ptr<Scaleform::Render::MeshKey>(Scaleform::Render::MeshKey &);
	Ptr<Scaleform::Render::MeshKey>();
	~Ptr<Scaleform::Render::MeshKey>();
	bool operator==(Scaleform::Render::MeshKey *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::MeshKey> &);
	bool operator!=(Scaleform::Render::MeshKey *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::MeshKey> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::MeshKey> &);
	Scaleform::Ptr<Scaleform::Render::MeshKey> & operator=(Scaleform::Pickable<Scaleform::Render::MeshKey>);
	const Scaleform::Ptr<Scaleform::Render::MeshKey> & operator=(Scaleform::Render::MeshKey &);
	const Scaleform::Ptr<Scaleform::Render::MeshKey> & operator=(Scaleform::Render::MeshKey *);
	const Scaleform::Ptr<Scaleform::Render::MeshKey> & operator=(const Scaleform::Ptr<Scaleform::Render::MeshKey> &);
	Scaleform::Ptr<Scaleform::Render::MeshKey> & SetPtr(Scaleform::Pickable<Scaleform::Render::MeshKey>);
	Scaleform::Ptr<Scaleform::Render::MeshKey> & SetPtr(Scaleform::Render::MeshKey &);
	Scaleform::Ptr<Scaleform::Render::MeshKey> & SetPtr(Scaleform::Render::MeshKey *);
	Scaleform::Ptr<Scaleform::Render::MeshKey> & SetPtr(const Scaleform::Ptr<Scaleform::Render::MeshKey> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::MeshKey * & GetRawRef();
	Scaleform::Render::MeshKey * GetPtr();
	Scaleform::Render::MeshKey & operator*();
	Scaleform::Render::MeshKey * operator->();
	Scaleform::Render::MeshKey * operator class Scaleform::Render::MeshKey *();
	Scaleform::Ptr<Scaleform::Render::MeshKey> & Pick(Scaleform::Render::MeshKey *);
	Scaleform::Ptr<Scaleform::Render::MeshKey> & Pick(Scaleform::Pickable<Scaleform::Render::MeshKey>);
	Scaleform::Ptr<Scaleform::Render::MeshKey> & Pick(Scaleform::Ptr<Scaleform::Render::MeshKey> &);
};
class Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>
{
protected:
	Scaleform::Render::VectorGlyphShape * pObject; // 0x0
public:
	Ptr<Scaleform::Render::VectorGlyphShape>(const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> &);
	Ptr<Scaleform::Render::VectorGlyphShape>(Scaleform::Render::VectorGlyphShape *);
	Ptr<Scaleform::Render::VectorGlyphShape>(Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> &, Scaleform::PickType);
	Ptr<Scaleform::Render::VectorGlyphShape>(Scaleform::Pickable<Scaleform::Render::VectorGlyphShape>);
	Ptr<Scaleform::Render::VectorGlyphShape>(Scaleform::Render::VectorGlyphShape &);
	Ptr<Scaleform::Render::VectorGlyphShape>();
	~Ptr<Scaleform::Render::VectorGlyphShape>();
	bool operator==(Scaleform::Render::VectorGlyphShape *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> &);
	bool operator!=(Scaleform::Render::VectorGlyphShape *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> &);
	Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & operator=(Scaleform::Pickable<Scaleform::Render::VectorGlyphShape>);
	const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & operator=(Scaleform::Render::VectorGlyphShape &);
	const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & operator=(Scaleform::Render::VectorGlyphShape *);
	const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & operator=(const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> &);
	Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & SetPtr(Scaleform::Pickable<Scaleform::Render::VectorGlyphShape>);
	Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & SetPtr(Scaleform::Render::VectorGlyphShape &);
	Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & SetPtr(Scaleform::Render::VectorGlyphShape *);
	Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & SetPtr(const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::VectorGlyphShape * & GetRawRef();
	Scaleform::Render::VectorGlyphShape * GetPtr();
	Scaleform::Render::VectorGlyphShape & operator*();
	Scaleform::Render::VectorGlyphShape * operator->();
	Scaleform::Render::VectorGlyphShape * operator struct Scaleform::Render::VectorGlyphShape *();
	Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & Pick(Scaleform::Render::VectorGlyphShape *);
	Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & Pick(Scaleform::Pickable<Scaleform::Render::VectorGlyphShape>);
	Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> & Pick(Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> &);
};
struct Scaleform::Render::GlyphRunData
{
	Scaleform::Render::TextFieldParam Param; // 0x0
	Scaleform::Render::Rect<float> Bounds; // 0x40
	Scaleform::Render::Font * pFont; // 0x50
	Scaleform::Render::FontCacheHandle * pFontHandle; // 0x58
	float FontSize; // 0x60
	unsigned long VectorSize; // 0x64
	unsigned long RasterSize; // 0x68
	float NomWidth; // 0x6C
	float NomHeight; // 0x70
	float TexHeight; // 0x74
	unsigned long mColor; // 0x78
	float NewLineX; // 0x7C
	float NewLineY; // 0x80
	Scaleform::Render::Rect<float> GlyphBounds; // 0x90
	Scaleform::Render::Matrix2x4<float> DirMtx; // 0xA0
	Scaleform::Render::Matrix2x4<float> InvMtx; // 0xC0
	float HeightRatio; // 0xE0
	unsigned long HintedNomHeight; // 0xE4
	const Scaleform::Render::ShapeDataInterface * pShape; // 0xE8
	const Scaleform::Render::GlyphRaster * pRaster; // 0xF0
	GlyphRunData(Scaleform::Render::GlyphRunData &);
	GlyphRunData(const Scaleform::Render::GlyphRunData &);
	GlyphRunData();
	Scaleform::Render::GlyphRunData & operator=(Scaleform::Render::GlyphRunData &);
	Scaleform::Render::GlyphRunData & operator=(const Scaleform::Render::GlyphRunData &);
};
struct Scaleform::ListNode<Scaleform::Render::TextMeshProvider>
{
	Scaleform::Render::TextMeshProvider * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::TextMeshProvider * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::TextMeshProvider>();
	Scaleform::Render::TextMeshProvider * GetPrev();
	Scaleform::Render::TextMeshProvider * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::TextMeshProvider *);
	void InsertNodeAfter(Scaleform::Render::TextMeshProvider *);
	void InsertNodeBefore(Scaleform::Render::TextMeshProvider *);
};
class Scaleform::Render::TextMeshProvider :
	Scaleform::ListNode<Scaleform::Render::TextMeshProvider>,
	Scaleform::Render::MeshProvider
{
	enum BatchFlags
	{
		BF_Valid = 1,
		BF_InUseList = 2,
		BF_InPinList = 4,
		BF_Clip = 8,
		BF_Creating = 16,
		BF_Created = 32,
		BF_HasVectorGlyphs = 64,
		BF_HasUnderlines = 128,
		BF_HasMask = 256,
		BF_DistField = 512,
	};
public:
	TextMeshProvider(const Scaleform::Render::TextMeshProvider &);
	TextMeshProvider(Scaleform::Render::GlyphCache *);
	virtual ~TextMeshProvider();
	void Clear();
	void ClearEntries();
	Scaleform::Render::TextMeshLayer & GetLayer(unsigned long);
	const Scaleform::Render::TextMeshLayer & GetLayer(unsigned long);
	const Scaleform::Render::TextMeshEntry & GetEntry(const Scaleform::Render::TextMeshLayer &, unsigned long);
	void AddNotifier(Scaleform::Render::TextNotifier *);
	void SetInUseList(bool);
	void SetInPinList(bool);
	void ClearInList();
	bool IsInUseList();
	bool IsInPinList();
	bool IsInList();
	bool HasVectorGlyphs();
	bool HasDistanceField();
	void PinSlots();
	void UnpinSlots();
	void OnEvictSlots();
	bool IsInUse();
	void AddToInUseList();
	Scaleform::Render::Fence * GetLatestFence();
	bool NeedsUpdate(const Scaleform::Render::MatrixPoolImpl::HMatrix &, const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Viewport &, const Scaleform::Render::TextFieldParam &);
	bool CreateMeshData(Scaleform::Render::HAL *, const Scaleform::Render::TextLayout *, const Scaleform::Render::MatrixPoolImpl::HMatrix &, const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Viewport &, unsigned long);
	bool IsCreated();
	float GetHeightRatio();
	virtual unsigned long GetLayerCount();
	virtual bool GetData(Scaleform::Render::HAL *, Scaleform::Render::MeshBase *, Scaleform::Render::VertexOutput *, unsigned long);
	virtual unsigned long GetFillCount(unsigned long, unsigned long);
	virtual void GetFillData(Scaleform::Render::FillData *, unsigned long, unsigned long, unsigned long);
	virtual void GetFillMatrix(Scaleform::Render::HAL *, Scaleform::Render::MeshBase *, Scaleform::Render::Matrix2x4<float> *, unsigned long, unsigned long, unsigned long);
	void Pin();
	void Unpin();
	Scaleform::Render::TextPrimitiveBundle * GetBundle();
	void ClearBundle();
	void SetBundle(Scaleform::Render::TextPrimitiveBundle *, Scaleform::Render::BundleEntry *);
	Scaleform::Render::MeshUseStatus GetMeshUseStatus();
	bool HasMask();
	Scaleform::Render::MatrixPoolImpl::HMatrix UpdateMaskClearBounds(Scaleform::Render::HAL *, Scaleform::Render::MatrixPoolImpl::HMatrix);
	Scaleform::Render::MatrixPoolImpl::HMatrix GetMaskClearBounds();
	static unsigned long CalcVectorParams(Scaleform::Render::HAL *, Scaleform::Render::TextMeshLayer &, const Scaleform::Render::TextMeshEntry &, const Scaleform::Render::Matrix2x4<float> &, float, const Scaleform::Render::MatrixPoolImpl::HMatrix &, unsigned long, float *);
	struct CmpEntries;
private:
	void addLayer(Scaleform::Render::TmpTextStorage &, unsigned long long, unsigned long long);
	void addLayer(Scaleform::Render::TmpTextStorage &, Scaleform::Render::TextLayerType, unsigned long, unsigned long);
	void addVectorGlyph(Scaleform::Render::TmpTextStorage &, unsigned long, Scaleform::Render::FontCacheHandle *, unsigned short, unsigned short, float, float, float);
	void addRasterGlyph(Scaleform::Render::TmpTextStorage &, Scaleform::Render::TextLayerType, Scaleform::Render::GlyphRunData &, unsigned long, Scaleform::Render::GlyphNode *, float, bool, float);
	void addTextureGlyph(Scaleform::Render::TmpTextStorage &, const Scaleform::Render::TextureGlyph *, Scaleform::Render::GlyphRunData &, unsigned long);
	void addBackground(Scaleform::Render::TmpTextStorage &, unsigned long, unsigned long, const Scaleform::Render::Rect<float> &);
	void addSelection(Scaleform::Render::TmpTextStorage &, unsigned long, const Scaleform::Render::Rect<float> &);
	void addCursor(Scaleform::Render::TmpTextStorage &, unsigned long, const Scaleform::Render::Rect<float> &);
	void addUnderline(Scaleform::Render::TmpTextStorage &, unsigned long, Scaleform::Render::TextUnderlineStyle, float, float, float);
	void addImage(Scaleform::Render::TmpTextStorage &, const Scaleform::Render::GlyphRunData &, Scaleform::Render::Image *, float, float, float, bool);
	void addMask(Scaleform::Render::TmpTextStorage &);
	void sortEntries(Scaleform::Render::TmpTextStorage &);
	static float calcHeightRatio(const Scaleform::Render::MatrixPoolImpl::HMatrix &, const Scaleform::Render::Matrix4x4<float> &, const Scaleform::Render::Viewport &);
	bool addGlyph(Scaleform::Render::HAL *, Scaleform::Render::TmpTextStorage &, Scaleform::Render::GlyphRunData &, unsigned long, bool, bool, bool, unsigned long);
	void createVectorGlyph(Scaleform::Render::HAL *, unsigned long, const Scaleform::Render::MatrixPoolImpl::HMatrix &, unsigned long);
	struct VertexCountType;
	void setMeshData(Scaleform::Render::TessBase *, Scaleform::Render::VertexOutput *, const unsigned long *, Scaleform::Render::TextMeshProvider::VertexCountType &);
	bool generateNullVectorMesh(Scaleform::Render::VertexOutput *);
	bool generateRectangle(Scaleform::Render::HAL *, Scaleform::Render::VertexOutput *, const Scaleform::Render::Matrix2x4<float> &, const float *, unsigned long, unsigned long, unsigned long);
	bool generateSelection(Scaleform::Render::HAL *, Scaleform::Render::VertexOutput *, const Scaleform::Render::TextMeshLayer &, const Scaleform::Render::Matrix2x4<float> &, unsigned long);
	bool clipGlyphRect(Scaleform::Render::Rect<float> &, Scaleform::Render::Rect<float> &);
	bool generateRasterMesh(Scaleform::Render::VertexOutput *, const Scaleform::Render::TextMeshLayer &);
	bool generatePackedMesh(Scaleform::Render::VertexOutput *, const Scaleform::Render::TextMeshLayer &);
	bool generateImageMesh(Scaleform::Render::VertexOutput *, const Scaleform::Render::TextMeshLayer &);
	bool generateUnderlines(Scaleform::Render::HAL *, Scaleform::Render::VertexOutput *, const Scaleform::Render::TextMeshLayer &, const Scaleform::Render::Matrix2x4<float> &, unsigned long);
	bool generateMask(Scaleform::Render::VertexOutput *, const Scaleform::Render::TextMeshLayer &);
	float snapX(const Scaleform::Render::GlyphRunData &);
	float snapY(const Scaleform::Render::GlyphRunData &);
	Scaleform::Render::GlyphCache * pCache; // 0x18
	unsigned long Flags; // 0x20
	Scaleform::ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy> Notifiers; // 0x28
	Scaleform::ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy> Entries; // 0x48
	Scaleform::ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy> Layers; // 0x68
	unsigned long long PinCount; // 0x88
	Scaleform::Render::TextPrimitiveBundle * pBundle; // 0x90
	Scaleform::Render::BundleEntry * pBundleEntry; // 0x98
	float HeightRatio; // 0xA0
	Scaleform::Render::Rect<float> ClipBox; // 0xB0
	Scaleform::Render::Rect<float> ClearBox; // 0xC0
	Scaleform::Render::Rect<float> Bounds; // 0xD0
	Scaleform::Render::MatrixPoolImpl::HMatrix ClearBounds; // 0xE0
public:
	Scaleform::Render::TextMeshProvider & operator=(const Scaleform::Render::TextMeshProvider &);
};
unsigned long Scaleform::Render::TextMeshProvider::GetLayerCount(); // 0x140047560
unsigned long Scaleform::Render::TextMeshProvider::GetFillCount(unsigned long layer, unsigned long meshGenFlags); // 0x1400482A0
void Scaleform::Render::TextMeshProvider::GetFillMatrix(Scaleform::Render::HAL * hal, Scaleform::Render::MeshBase * mesh, Scaleform::Render::Matrix2x4<float> * matrix, unsigned long layer, unsigned long fillIndex, unsigned long meshGenFlags); // 0x1404002C0
struct Scaleform::Render::TextMeshProvider::CmpEntries
{
	const Scaleform::Render::GlyphCache * pCache; // 0x0
	CmpEntries(Scaleform::Render::GlyphCache *);
	bool operator()(const Scaleform::Render::TmpTextMeshEntry &, const Scaleform::Render::TmpTextMeshEntry &);
};
struct Scaleform::Render::TextMeshProvider::VertexCountType
{
	unsigned long VStart; // 0x0
	unsigned long IStart; // 0x4
	VertexCountType();
};
class Scaleform::ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::Render::TextNotifier *,Scaleform::AllocatorDH_POD<Scaleform::Render::TextNotifier *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::Render::TextNotifier ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy>();
};