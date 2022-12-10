#pragma once

class Scaleform::Render::LinearHeap
{
	enum <unnamed-enum-MinAlignMask>
	{
		MinAlignMask = 7,
		PagePoolSize = 64,
	};
	struct PageType;
public:
	LinearHeap(Scaleform::MemoryHeap *, unsigned long long);
	~LinearHeap();
	void Clear();
	void ClearAndRelease();
	unsigned long long GetFootprint();
	void * Alloc(unsigned long long);
	Scaleform::MemoryHeap * GetMemoryHeap();
private:
	void * allocFromLastPage(unsigned long long);
	void allocPage(unsigned long long);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Granularity; // 0x8
	Scaleform::Render::LinearHeap::PageType * pPagePool; // 0x10
	Scaleform::Render::LinearHeap::PageType * pLastPage; // 0x18
	unsigned long long MaxPages; // 0x20
};
struct Scaleform::Render::LinearHeap::PageType
{
	unsigned char * pStart; // 0x0
	unsigned char * pEnd; // 0x8
	unsigned char * pFree; // 0x10
};
void Scaleform::Render::LinearHeap::ClearAndRelease(); // 0x140318F70
void * Scaleform::Render::LinearHeap::Alloc(unsigned long long size); // 0x1402E0280
void * Scaleform::Render::LinearHeap::allocFromLastPage(unsigned long long size); // 0x1402ED8C0
void Scaleform::Render::LinearHeap::allocPage(unsigned long long size); // 0x1402ED940
void Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>::PushBack(const Scaleform::Render::Rasterizer::Cell & val); // 0x140409150
void Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::ContourType,2,4>::allocPage(unsigned long long nb); // 0x14039CB20
void Scaleform::Render::ArrayPaged<Scaleform::Render::GlyphFitter::VertexType,4,16>::allocPage(unsigned long long nb); // 0x1403A5A60
void Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType * __ptr64,4,8>::allocPage(unsigned long long nb); // 0x1403A5B00
void Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::FanEdgeType,4,16>::allocPage(unsigned long long nb); // 0x1403B5400
void Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::HorizontalEdgeType,2,4>::allocPage(unsigned long long nb); // 0x1403BB020
void Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::MonoChainType,4,8>::allocPage(unsigned long long nb); // 0x1403BB0C0
void Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::PathType,4,4>::allocPage(unsigned long long nb); // 0x1403BB160
void Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcEdgeType,4,16>::allocPage(unsigned long long nb); // 0x1403BB200
void Scaleform::Render::ArrayPaged<Scaleform::Render::Hairliner::SrcVertexType,4,16>::allocPage(unsigned long long nb); // 0x1403BB2A0
void Scaleform::Render::ArrayPaged<Scaleform::Render::Rasterizer::Cell,4,16>::allocPage(unsigned long long nb); // 0x1403A5E20
void Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::PathType,4,16>::allocPage(unsigned long long nb); // 0x1403BB2A0
void Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeVertex,4,16>::allocPage(unsigned long long nb); // 0x1403B5400
void Scaleform::Render::ArrayPaged<Scaleform::Render::StrokeSorter::VertexType,4,16>::allocPage(unsigned long long nb); // 0x1403A5E20
void Scaleform::Render::ArrayPaged<Scaleform::Render::StrokerAA::TriangleType,4,16>::allocPage(unsigned long long nb); // 0x1403B5400
void Scaleform::Render::ArrayPaged<unsigned int,3,4>::allocPage(unsigned long long nb); // 0x14039CB20
void Scaleform::Render::ArrayPaged<unsigned int,4,16>::allocPage(unsigned long long nb); // 0x1403A5A60
void Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType * __ptr64,4,8>::allocPage(unsigned long long nb); // 0x1403A5B00
void Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoVertexType * __ptr64,4,2>::allocPage(unsigned long long nb); // 0x1403A5BA0
void Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::BaseLineType,4,4>::allocPage(unsigned long long nb); // 0x1403A5C40
void Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::EdgeType,4,16>::allocPage(unsigned long long nb); // 0x1403BB2A0
void Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::InnerQuadType,4,16>::allocPage(unsigned long long nb); // 0x1403A5E20
void Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonoChainType,4,16>::allocPage(unsigned long long nb); // 0x1403A5CE0
void Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::MonotoneType,4,16>::allocPage(unsigned long long nb); // 0x1403A5D80
void Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PathType,4,4>::allocPage(unsigned long long nb); // 0x1403A5EC0
void Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::PendingEndType,4,4>::allocPage(unsigned long long nb); // 0x1403A5F60
void Scaleform::Render::ArrayPaged<Scaleform::Render::Tessellator::ScanChainType,4,8>::allocPage(unsigned long long nb); // 0x1403A6000
void Scaleform::Render::ArrayPaged<Scaleform::Render::TessVertex,4,16>::allocPage(unsigned long long nb); // 0x1403A60A0
void Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>::allocPage(unsigned long long nb); // 0x1404023B0
void Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4>::allocPage(unsigned long long nb); // 0x140402450
void Scaleform::Render::ArrayPaged<Scaleform::Render::PathBasic,2,4>::allocPage(unsigned long long nb); // 0x14039CB20
void Scaleform::Render::ArrayPaged<Scaleform::Render::VertexBasic,4,16>::allocPage(unsigned long long nb); // 0x1403BB2A0
struct Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType
{
	unsigned long long Size; // 0x0
	unsigned long long NumPages; // 0x8
	unsigned long long MaxPages; // 0x10
	Scaleform::Render::Tessellator::TriangleType * * Pages; // 0x18
};
class Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayAdaptor
{
	struct ValueType;
public:
	ArrayAdaptor(unsigned long long, Scaleform::Render::Tessellator::TriangleType * *);
	unsigned long long GetSize();
	Scaleform::Render::Tessellator::TriangleType & operator[](unsigned long long);
	const Scaleform::Render::Tessellator::TriangleType & operator[](unsigned long long);
private:
	unsigned long long Size; // 0x0
	Scaleform::Render::Tessellator::TriangleType * * Pages; // 0x8
};
void Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::AddArray(); // 0x1403A32C0
void Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::PushBack(unsigned long long i, const Scaleform::Render::Tessellator::TriangleType & val); // 0x1403A41E0
bool Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::Split(unsigned long long i, unsigned long long at); // 0x1403A4370
void Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::allocPage(Scaleform::Render::ArrayJagged<Scaleform::Render::Tessellator::TriangleType,4,16>::ArrayType * a, unsigned long long nb); // 0x1403A59B0
void Scaleform::Render::ArrayUnsafe<unsigned char>::Resize(unsigned long long size); // 0x140408180
void Scaleform::Render::ArrayUnsafe<Scaleform::Render::Rasterizer::Cell * __ptr64>::Resize(unsigned long long size); // 0x1404091B0
void Scaleform::Render::ArrayUnsafe<int>::Resize(unsigned long long size); // 0x1403A4270
struct Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page
{
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page * pNext; // 0x0
	unsigned long Count; // 0x8
	Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem Items[8]; // 0x10
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page * GetNextPage();
	unsigned long GetSize();
	Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem & GetItem(unsigned long);
	Page(Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page &);
	Page(const Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page &);
	Page();
	~Page();
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page & operator=(Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page &);
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page & operator=(const Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page &);
};
struct Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page
{
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page * pNext; // 0x0
	unsigned long Count; // 0x8
	Scaleform::Render::VertexElement Items[32]; // 0xC
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page * GetNextPage();
	unsigned long GetSize();
	Scaleform::Render::VertexElement & GetItem(unsigned long);
};
struct Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page
{
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page * pNext; // 0x0
	unsigned long Count; // 0x8
	Scaleform::Render::ContextImpl::EntryChange Items[63]; // 0x10
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page * GetNextPage();
	unsigned long GetSize();
	Scaleform::Render::ContextImpl::EntryChange & GetItem(unsigned long);
};
void Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::ensureCountAvailable(unsigned long count); // 0x140313D90
void Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::ensureCountAvailable(unsigned long count); // 0x1405C6030
void Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::ensureCountAvailable(unsigned long count); // 0x1405C60B0
void Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::freePages(bool keepLast); // 0x1405C6130
Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::~PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>(); // 0x1405BBB60
Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::~PagedItemBuffer<Scaleform::Render::VertexElement,32>(); // 0x1405BBB60
Scaleform::Render::VertexElement * Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::AddItems(Scaleform::Render::VertexElement * source, unsigned long count); // 0x1405BC750
bool Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode * __ptr64>::grow(unsigned long depth); // 0x140384C70
void Scaleform::Render::DepthUpdateArrayPOD<Scaleform::Render::TreeCacheNode * __ptr64>::Link(unsigned long index, Scaleform::Render::TreeCacheNode * * pnext, Scaleform::Render::TreeCacheNode * val); // 0x1403827B0
struct Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem *,2>::AllocData
{
	Scaleform::Render::MeshCacheItem * * pData; // 0x0
	unsigned long long Reserve; // 0x8
};
struct Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::AllocData
{
	Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> * pData; // 0x0
	unsigned long long Reserve; // 0x8
};
Scaleform::Render::MeshCacheItem * * Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem * __ptr64,2>::allocInsertCopy(unsigned long long index, Scaleform::Render::MeshCacheItem * * source, unsigned long long size, unsigned long long allocSize); // 0x140419730
Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> * Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::allocInsertCopy(unsigned long long index, Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> * source, unsigned long long size, unsigned long long allocSize); // 0x140419730
Scaleform::Render::MeshCacheItem * * Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Render::MeshCacheItem * __ptr64,2>::insertSpot(unsigned long long index); // 0x1404198A0
Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive> * Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::insertSpot(unsigned long long index); // 0x1404198A0
Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::~ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>(); // 0x140418A10
void Scaleform::Render::ArrayReserveLH_Mov<Scaleform::Ptr<Scaleform::Render::TextLayerPrimitive>,2>::RemoveAt(unsigned long long index); // 0x140418F60
class Scaleform::Render::BitSet
{
public:
	BitSet(Scaleform::MemoryHeap *);
	~BitSet();
	void Clear();
	unsigned long GetSize();
	void Set(unsigned long);
	void Clr(unsigned long);
	unsigned long operator[](unsigned long);
	unsigned long SkipZeros(unsigned long);
private:
	void resize(unsigned long);
	unsigned long Size; // 0x0
	unsigned long Local; // 0x4
	unsigned long * pData; // 0x8
	Scaleform::MemoryHeap * pHeap; // 0x10
};
struct Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem
{
	Scaleform::Render::VertexElement * pKey; // 0x0
	unsigned long KeyCount; // 0x8
	Scaleform::Render::VertexFormat Value; // 0x10
	ValueItem(Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem &);
	ValueItem(const Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem &);
	ValueItem();
	~ValueItem();
	Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem & operator=(Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem &);
	Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem & operator=(const Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem &);
};
class Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>
{
	struct Page;
private:
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page * pPages; // 0x0
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page * pLast; // 0x8
	void ensureCountAvailable(unsigned long);
	void freePages(bool);
public:
	PagedItemBuffer<Scaleform::Render::VertexElement,32>();
	~PagedItemBuffer<Scaleform::Render::VertexElement,32>();
	Scaleform::Render::VertexElement * AddItem();
	Scaleform::Render::VertexElement * AddItems(Scaleform::Render::VertexElement *, unsigned long);
	Scaleform::Render::VertexElement * AddItems(unsigned long);
	void Clear(bool);
	bool IsEmpty();
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page * GetFirstPage();
	class Iterator;
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Iterator GetFirst();
};
class Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>
{
	struct Page;
private:
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page * pPages; // 0x0
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page * pLast; // 0x8
	void ensureCountAvailable(unsigned long);
	void freePages(bool);
public:
	PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>();
	~PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>();
	Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem * AddItem();
	Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem * AddItems(Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem *, unsigned long);
	Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem * AddItems(unsigned long);
	void Clear(bool);
	bool IsEmpty();
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page * GetFirstPage();
	class Iterator;
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Iterator GetFirst();
};
Scaleform::Render::VertexFormat * Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::Find(Scaleform::Render::VertexElement * keys, unsigned long count); // 0x1405BEF70
Scaleform::Render::VertexFormat * Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::Add(Scaleform::Render::VertexElement * * ppnewKeys, Scaleform::Render::VertexElement * keys, unsigned long count); // 0x1405BC5E0