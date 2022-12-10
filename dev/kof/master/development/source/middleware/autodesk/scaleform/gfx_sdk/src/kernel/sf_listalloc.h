#pragma once

struct Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType
{
	Scaleform::GFx::TimelineSnapshot::SnapshotElement Data[50]; // 0x0
	Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType * pNext; // 0x1770
	PageType();
	~PageType();
};
struct Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType
{
	Scaleform::Render::GlyphNode Data[127]; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType * pNext; // 0x1FC0
	PageType(Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType &);
	PageType(const Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType &);
	PageType();
	Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType & operator=(Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType &);
	Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType & operator=(const Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType &);
};
struct Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType
{
	Scaleform::Render::GlyphSlot Data[127]; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType * pNext; // 0x3398
	PageType();
	~PageType();
};
struct Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType
{
	Scaleform::Render::TextNotifier Data[127]; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType * pNext; // 0xFE0
	PageType();
};
struct Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType
{
	Scaleform::Render::BeginDisplayData Data[127]; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType * pNext; // 0x3790
	PageType(Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType &);
	PageType(const Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType &);
	PageType();
	Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType & operator=(Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType &);
	Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType & operator=(const Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType &);
};
struct Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType
{
	Scaleform::Render::FenceImpl Data[127]; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType * pNext; // 0xFE0
	PageType();
};
struct Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType
{
	Scaleform::Render::Fence Data[127]; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType * pNext; // 0x7F0
	PageType();
};
struct Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType
{
	Scaleform::Render::FenceFrame Data[127]; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType * pNext; // 0x1FC0
	PageType(Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType &);
	PageType(const Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType &);
	PageType();
	~PageType();
	Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType & operator=(Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType &);
	Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType & operator=(const Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType &);
};
struct Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType
{
	Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType * pNext; // 0x0
};
struct Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType
{
	Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType * pNext; // 0x0
};
struct Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::NodeType
{
	Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::NodeType * pNext; // 0x0
};
struct Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::NodeType
{
	Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::NodeType * pNext; // 0x0
};
struct Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::NodeType
{
	Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::NodeType * pNext; // 0x0
};
struct Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::NodeType
{
	Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::NodeType * pNext; // 0x0
};
struct Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::NodeType
{
	Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::NodeType * pNext; // 0x0
};
struct Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::NodeType
{
	Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::NodeType * pNext; // 0x0
};
Scaleform::Render::GlyphNode * Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::Alloc(const Scaleform::Render::GlyphNode & v); // 0x140405AE0
Scaleform::GFx::TimelineSnapshot::SnapshotElement * Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::allocate(); // 0x1403DE770
Scaleform::Render::GlyphNode * Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::allocate(); // 0x140406700
Scaleform::Render::GlyphSlot * Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::allocate(); // 0x1404067C0
Scaleform::Render::TextNotifier * Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::allocate(); // 0x140406880
Scaleform::Render::BeginDisplayData * Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::allocate(); // 0x14031C860
Scaleform::Render::Fence * Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::allocate(); // 0x140396B60
Scaleform::Render::FenceFrame * Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::allocate(); // 0x140396C20
Scaleform::Render::FenceImpl * Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::allocate(); // 0x140396CE0
class Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >
{
	class ValueType;
	struct AllocatorType;
	class SelfType;
	struct PageType;
	struct NodeType;
private:
	ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >(const Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> > &);
public:
	ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >();
protected:
	ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >(void *);
public:
	~ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >();
	void ClearAndRelease();
	unsigned long long GetNumBytes();
	Scaleform::Render::BeginDisplayData * Alloc(const Scaleform::Render::BeginDisplayData &);
	Scaleform::Render::BeginDisplayData * Alloc();
	void Free(Scaleform::Render::BeginDisplayData *);
private:
	const Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> > & operator=(Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> > &);
	Scaleform::Render::BeginDisplayData * allocate();
	void freeMem();
	Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType * FirstPage; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::PageType * LastPage; // 0x8
	unsigned long NumElementsInPage; // 0x10
	Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >::NodeType * FirstEmptySlot; // 0x18
	void * pHeapOrPtr; // 0x20
};
class Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >
{
	struct ValueType;
	struct AllocatorType;
	class SelfType;
	struct PageType;
	struct NodeType;
private:
	ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >(const Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> > &);
public:
	ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >();
protected:
	ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >(void *);
public:
	~ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >();
	void ClearAndRelease();
	unsigned long long GetNumBytes();
	Scaleform::Render::TextNotifier * Alloc(const Scaleform::Render::TextNotifier &);
	Scaleform::Render::TextNotifier * Alloc();
	void Free(Scaleform::Render::TextNotifier *);
private:
	const Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> > & operator=(Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> > &);
	Scaleform::Render::TextNotifier * allocate();
	void freeMem();
	Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType * FirstPage; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType * LastPage; // 0x8
	unsigned long NumElementsInPage; // 0x10
	Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::NodeType * FirstEmptySlot; // 0x18
	void * pHeapOrPtr; // 0x20
};
class Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >
{
	class ValueType;
	struct AllocatorType;
	class SelfType;
	struct PageType;
	struct NodeType;
private:
	ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >(const Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> > &);
public:
	ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >();
protected:
	ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >(void *);
public:
	~ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >();
	void ClearAndRelease();
	unsigned long long GetNumBytes();
	Scaleform::Render::FenceImpl * Alloc(const Scaleform::Render::FenceImpl &);
	Scaleform::Render::FenceImpl * Alloc();
	void Free(Scaleform::Render::FenceImpl *);
private:
	const Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> > & operator=(Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> > &);
	Scaleform::Render::FenceImpl * allocate();
	void freeMem();
	Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType * FirstPage; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::PageType * LastPage; // 0x8
	unsigned long NumElementsInPage; // 0x10
	Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >::NodeType * FirstEmptySlot; // 0x18
	void * pHeapOrPtr; // 0x20
};
class Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >
{
	struct ValueType;
	struct AllocatorType;
	class SelfType;
	struct PageType;
	struct NodeType;
private:
	ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >(const Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> > &);
public:
	ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >();
protected:
	ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >(void *);
public:
	~ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >();
	void ClearAndRelease();
	unsigned long long GetNumBytes();
	Scaleform::Render::GlyphNode * Alloc(const Scaleform::Render::GlyphNode &);
	Scaleform::Render::GlyphNode * Alloc();
	void Free(Scaleform::Render::GlyphNode *);
private:
	const Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> > & operator=(Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> > &);
	Scaleform::Render::GlyphNode * allocate();
	void freeMem();
	Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType * FirstPage; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType * LastPage; // 0x8
	unsigned long NumElementsInPage; // 0x10
	Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::NodeType * FirstEmptySlot; // 0x18
	void * pHeapOrPtr; // 0x20
};
class Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >
{
	struct ValueType;
	struct AllocatorType;
	class SelfType;
	struct PageType;
	struct NodeType;
private:
	ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >(const Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> > &);
public:
	ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >();
protected:
	ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >(void *);
public:
	~ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >();
	void ClearAndRelease();
	unsigned long long GetNumBytes();
	Scaleform::Render::GlyphSlot * Alloc(const Scaleform::Render::GlyphSlot &);
	Scaleform::Render::GlyphSlot * Alloc();
	void Free(Scaleform::Render::GlyphSlot *);
private:
	const Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> > & operator=(Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> > &);
	Scaleform::Render::GlyphSlot * allocate();
	void freeMem();
	Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType * FirstPage; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType * LastPage; // 0x8
	unsigned long NumElementsInPage; // 0x10
	Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::NodeType * FirstEmptySlot; // 0x18
	void * pHeapOrPtr; // 0x20
};
struct Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> :
	Scaleform::AllocatorBaseLH<75>,
	Scaleform::ConstructorPOD<Scaleform::Render::GlyphSlot>
{
};
struct Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> :
	Scaleform::AllocatorBaseLH<75>,
	Scaleform::ConstructorPOD<Scaleform::Render::TextNotifier>
{
};
struct Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> :
	Scaleform::AllocatorBaseLH<75>,
	Scaleform::ConstructorPOD<Scaleform::Render::GlyphNode>
{
};
struct Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> :
	Scaleform::AllocatorBaseLH<2>,
	Scaleform::ConstructorPOD<Scaleform::Render::BeginDisplayData>
{
};
struct Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> :
	Scaleform::AllocatorBaseLH<2>,
	Scaleform::ConstructorPOD<Scaleform::Render::FenceImpl>
{
};
class Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >
{
	class ValueType;
	struct AllocatorType;
	class SelfType;
	struct PageType;
	struct NodeType;
private:
	ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >(const Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> > &);
public:
	ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >();
protected:
	ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >(void *);
public:
	~ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >();
	void ClearAndRelease();
	unsigned long long GetNumBytes();
	Scaleform::Render::Fence * Alloc(const Scaleform::Render::Fence &);
	Scaleform::Render::Fence * Alloc();
	void Free(Scaleform::Render::Fence *);
private:
	const Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> > & operator=(Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> > &);
	Scaleform::Render::Fence * allocate();
	void freeMem();
	Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType * FirstPage; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::PageType * LastPage; // 0x8
	unsigned long NumElementsInPage; // 0x10
	Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >::NodeType * FirstEmptySlot; // 0x18
	void * pHeapOrPtr; // 0x20
};
class Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >
{
	class ValueType;
	struct AllocatorType;
	class SelfType;
	struct PageType;
	struct NodeType;
private:
	ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >(const Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> > &);
public:
	ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >();
protected:
	ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >(void *);
public:
	~ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >();
	void ClearAndRelease();
	unsigned long long GetNumBytes();
	Scaleform::Render::FenceFrame * Alloc(const Scaleform::Render::FenceFrame &);
	Scaleform::Render::FenceFrame * Alloc();
	void Free(Scaleform::Render::FenceFrame *);
private:
	const Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> > & operator=(Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> > &);
	Scaleform::Render::FenceFrame * allocate();
	void freeMem();
	Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType * FirstPage; // 0x0
	Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::PageType * LastPage; // 0x8
	unsigned long NumElementsInPage; // 0x10
	Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >::NodeType * FirstEmptySlot; // 0x18
	void * pHeapOrPtr; // 0x20
};
struct Scaleform::AllocatorLH<Scaleform::Render::Fence,2> :
	Scaleform::AllocatorBaseLH<2>,
	Scaleform::ConstructorMov<Scaleform::Render::Fence>
{
};
struct Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> :
	Scaleform::AllocatorBaseLH<2>,
	Scaleform::ConstructorMov<Scaleform::Render::FenceFrame>
{
};
class Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >
{
	struct ValueType;
	struct AllocatorType;
	class SelfType;
	struct PageType;
	struct NodeType;
private:
	ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >(const Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> > &);
public:
	ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >();
protected:
	ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >(void *);
public:
	~ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >();
	void ClearAndRelease();
	unsigned long long GetNumBytes();
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * Alloc(const Scaleform::GFx::TimelineSnapshot::SnapshotElement &);
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * Alloc();
	void Free(Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
private:
	const Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> > & operator=(Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> > &);
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * allocate();
	void freeMem();
	Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType * FirstPage; // 0x0
	Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::PageType * LastPage; // 0x8
	unsigned long NumElementsInPage; // 0x10
	Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >::NodeType * FirstEmptySlot; // 0x18
	void * pHeapOrPtr; // 0x20
};
struct Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> :
	Scaleform::AllocatorBaseDH<2>,
	Scaleform::ConstructorMov<Scaleform::GFx::TimelineSnapshot::SnapshotElement>
{
};