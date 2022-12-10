#pragma once

struct Scaleform::Render::GlyphRect
{
	unsigned short x; // 0x0
	unsigned short y; // 0x2
	unsigned short w; // 0x4
	unsigned short h; // 0x6
	GlyphRect(unsigned long, unsigned long, unsigned long, unsigned long);
	GlyphRect();
};
class Scaleform::Render::GlyphEvictNotifier
{
public:
	~GlyphEvictNotifier();
	void Evict(Scaleform::Render::TextMeshProvider *);
	void ApplyInUseList();
	bool UpdatePinList();
	GlyphEvictNotifier(const Scaleform::Render::GlyphEvictNotifier &);
	GlyphEvictNotifier();
	Scaleform::Render::GlyphEvictNotifier & operator=(const Scaleform::Render::GlyphEvictNotifier &);
};
struct Scaleform::ListNode<Scaleform::Render::TextNotifier>
{
	Scaleform::Render::TextNotifier * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::TextNotifier * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::TextNotifier>();
	Scaleform::Render::TextNotifier * GetPrev();
	Scaleform::Render::TextNotifier * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::TextNotifier *);
	void InsertNodeAfter(Scaleform::Render::TextNotifier *);
	void InsertNodeBefore(Scaleform::Render::TextNotifier *);
};
struct Scaleform::Render::TextNotifier :
	Scaleform::ListNode<Scaleform::Render::TextNotifier>
{
	Scaleform::Render::TextMeshProvider * pText; // 0x10
	Scaleform::Render::GlyphSlot * pSlot; // 0x18
	TextNotifier();
};
struct Scaleform::Render::GlyphSlot :
	Scaleform::ListNode<Scaleform::Render::GlyphSlot>
{
	enum <unnamed-enum-FullFlag>
	{
		FullFlag = 32768,
		Mask = 32768,
	};
	Scaleform::Render::GlyphNode * pRoot; // 0x10
	Scaleform::Render::GlyphSlot * pPrevInBand; // 0x18
	Scaleform::Render::GlyphSlot * pNextInBand; // 0x20
	Scaleform::Render::GlyphSlot * pPrevActive; // 0x28
	Scaleform::Render::GlyphSlot * pNextActive; // 0x30
	Scaleform::Render::GlyphBand * pBand; // 0x38
	unsigned short TextureId; // 0x40
	unsigned short x; // 0x42
	unsigned short w; // 0x44
	unsigned short Failures; // 0x46
	unsigned long PinCount; // 0x48
	Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> > TextFields; // 0x50
	Scaleform::Ptr<Scaleform::Render::Fence> SlotFence; // 0x60
	GlyphSlot();
	~GlyphSlot();
};
struct Scaleform::ListNode<Scaleform::Render::GlyphSlot>
{
	Scaleform::Render::GlyphSlot * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::GlyphSlot * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::GlyphSlot>();
	Scaleform::Render::GlyphSlot * GetPrev();
	Scaleform::Render::GlyphSlot * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::GlyphSlot *);
	void InsertNodeAfter(Scaleform::Render::GlyphSlot *);
	void InsertNodeBefore(Scaleform::Render::GlyphSlot *);
};
class Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> >
{
	struct ValueType;
private:
	List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> >(const Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> > &);
public:
	List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> >();
	void Clear();
	Scaleform::Render::TextNotifier * GetFirst();
	Scaleform::Render::TextNotifier * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::TextNotifier *);
	bool IsLast(const Scaleform::Render::TextNotifier *);
	bool IsNull(const Scaleform::Render::TextNotifier *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::TextNotifier * GetPrev(const Scaleform::Render::TextNotifier *);
	static Scaleform::Render::TextNotifier * GetNext(const Scaleform::Render::TextNotifier *);
	void PushFront(Scaleform::Render::TextNotifier *);
	void PushBack(Scaleform::Render::TextNotifier *);
	static void Remove(Scaleform::Render::TextNotifier *);
	void BringToFront(Scaleform::Render::TextNotifier *);
	void SendToBack(Scaleform::Render::TextNotifier *);
	void PushListToFront(Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> > &, Scaleform::Render::TextNotifier *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> > &, Scaleform::Render::TextNotifier *);
	void PushListItemsToFront(Scaleform::Render::TextNotifier *, Scaleform::Render::TextNotifier *);
private:
	const Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> > & operator=(const Scaleform::List<Scaleform::Render::TextNotifier,Scaleform::Render::TextNotifier,Scaleform::ListNode<Scaleform::Render::TextNotifier> > &);
	Scaleform::ListNode<Scaleform::Render::TextNotifier> Root; // 0x0
};
struct Scaleform::Render::GlyphSlot_Band
{
	static void SetPrev(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	static void SetNext(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	static Scaleform::Render::GlyphSlot * GetPrev(Scaleform::Render::GlyphSlot *);
	static const Scaleform::Render::GlyphSlot * GetPrev(const Scaleform::Render::GlyphSlot *);
	static Scaleform::Render::GlyphSlot * GetNext(Scaleform::Render::GlyphSlot *);
	static const Scaleform::Render::GlyphSlot * GetNext(const Scaleform::Render::GlyphSlot *);
};
struct Scaleform::Render::GlyphSlot_Active
{
	static void SetPrev(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	static void SetNext(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	static Scaleform::Render::GlyphSlot * GetPrev(Scaleform::Render::GlyphSlot *);
	static const Scaleform::Render::GlyphSlot * GetPrev(const Scaleform::Render::GlyphSlot *);
	static Scaleform::Render::GlyphSlot * GetNext(Scaleform::Render::GlyphSlot *);
	static const Scaleform::Render::GlyphSlot * GetNext(const Scaleform::Render::GlyphSlot *);
};
struct Scaleform::Render::GlyphNode
{
	Scaleform::Render::GlyphParam Param; // 0x0
	Scaleform::Render::GlyphSlot * pSlot; // 0x18
	Scaleform::Render::GlyphNode * pNext; // 0x20
	Scaleform::Render::GlyphNode * pNex2; // 0x28
	Scaleform::Render::GlyphRect mRect; // 0x30
	Scaleform::Render::Point<short> Origin; // 0x38
	float Scale; // 0x3C
	GlyphNode(Scaleform::Render::GlyphNode &);
	GlyphNode(const Scaleform::Render::GlyphNode &);
	GlyphNode();
	Scaleform::Render::GlyphNode & operator=(Scaleform::Render::GlyphNode &);
	Scaleform::Render::GlyphNode & operator=(const Scaleform::Render::GlyphNode &);
};
class Scaleform::Render::Point<short>
{
public:
	short x; // 0x0
	short y; // 0x2
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Point<short>(const Scaleform::Render::Point<short> &);
	Point<short>(short, short);
	Point<short>(short);
	Point<short>();
	void SetPoint(Scaleform::Render::Point<short>::BoundsType);
	void SetPoint(const Scaleform::Render::Point<short> &);
	void SetPoint(short, short);
	void SetPoint(short);
	void Clear();
	void Swap(Scaleform::Render::Point<short> *);
	Scaleform::Render::Point<short> & SetLerp(const Scaleform::Render::Point<short> &, const Scaleform::Render::Point<short> &, short);
	bool IsNull();
	Scaleform::Render::Point<short> & Offset(short, short);
	Scaleform::Render::Point<short> & Offset(short);
	Scaleform::Render::Point<short> & Offset(const Scaleform::Render::Size<short> &);
	Scaleform::Render::Point<short> & Offset(const Scaleform::Render::Point<short> &);
	Scaleform::Render::Point<short> & Mul(short, short);
	Scaleform::Render::Point<short> & Mul(short);
	Scaleform::Render::Point<short> & Mul(const Scaleform::Render::Point<short> &);
	Scaleform::Render::Point<short> & Div(short, short);
	Scaleform::Render::Point<short> & Div(short);
	Scaleform::Render::Point<short> & Div(const Scaleform::Render::Point<short> &);
	short Dot(const Scaleform::Render::Point<short> &);
	short Dot(short, short);
	short Angle(const Scaleform::Render::Point<short> &);
	short Angle(short, short);
	short DistanceSquared();
	short DistanceSquared(const Scaleform::Render::Point<short> &);
	short DistanceSquared(short, short);
	short Distance();
	short Distance(const Scaleform::Render::Point<short> &);
	short Distance(short, short);
	short DistanceL1(const Scaleform::Render::Point<short> &);
	short DistanceL1(short, short);
	short DistanceLn(const Scaleform::Render::Point<short> &);
	short DistanceLn(short, short);
	void Clamp(short, short);
	void ClampMin(short);
	void ClampMax(short);
	Scaleform::Render::Point<short> & Absolute();
	bool BitwiseEqual(const Scaleform::Render::Point<short> &);
	const Scaleform::Render::Point<short> & operator=(Scaleform::Render::Point<short>::BoundsType);
	const Scaleform::Render::Point<short> & operator=(short);
	const Scaleform::Render::Point<short> & operator=(const Scaleform::Render::Point<short> &);
	const Scaleform::Render::Point<short> operator-(short);
	const Scaleform::Render::Point<short> operator-(const Scaleform::Render::Size<short> &);
	const Scaleform::Render::Point<short> operator-(const Scaleform::Render::Point<short> &);
	const Scaleform::Render::Point<short> operator-();
	const Scaleform::Render::Point<short> & operator+=(short);
	const Scaleform::Render::Point<short> & operator+=(const Scaleform::Render::Size<short> &);
	const Scaleform::Render::Point<short> & operator+=(const Scaleform::Render::Point<short> &);
	const Scaleform::Render::Point<short> & operator-=(short);
	const Scaleform::Render::Point<short> & operator-=(const Scaleform::Render::Size<short> &);
	const Scaleform::Render::Point<short> & operator-=(const Scaleform::Render::Point<short> &);
	const Scaleform::Render::Point<short> & operator*=(short);
	const Scaleform::Render::Point<short> & operator*=(const Scaleform::Render::Point<short> &);
	const Scaleform::Render::Point<short> & operator/=(short);
	const Scaleform::Render::Point<short> & operator/=(const Scaleform::Render::Point<short> &);
	bool operator==(const Scaleform::Render::Point<short> &);
	bool operator!=(const Scaleform::Render::Point<short> &);
	const Scaleform::Render::Point<short> operator+(short);
	const Scaleform::Render::Point<short> operator+(const Scaleform::Render::Size<short> &);
	const Scaleform::Render::Point<short> operator+(const Scaleform::Render::Point<short> &);
	const Scaleform::Render::Point<short> operator*(short);
	const Scaleform::Render::Point<short> operator*(const Scaleform::Render::Point<short> &);
	const Scaleform::Render::Point<short> operator/(short);
	const Scaleform::Render::Point<short> operator/(const Scaleform::Render::Point<short> &);
};
struct Scaleform::Render::GlyphBand
{
	unsigned short TextureId; // 0x0
	unsigned short y; // 0x2
	unsigned short h; // 0x4
	unsigned short RightSpace; // 0x6
	Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band> Slots; // 0x8
	GlyphBand();
	~GlyphBand();
};
class Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band>
{
	struct ValueType;
public:
	static void SetPrev(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	static void SetNext(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	static Scaleform::Render::GlyphSlot * GetPrev(Scaleform::Render::GlyphSlot *);
	static const Scaleform::Render::GlyphSlot * GetPrev(const Scaleform::Render::GlyphSlot *);
	static Scaleform::Render::GlyphSlot * GetNext(Scaleform::Render::GlyphSlot *);
	static const Scaleform::Render::GlyphSlot * GetNext(const Scaleform::Render::GlyphSlot *);
private:
	List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band>(const Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band> &);
public:
	List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band>();
	void Clear();
	Scaleform::Render::GlyphSlot * GetFirst();
	const Scaleform::Render::GlyphSlot * GetFirst();
	Scaleform::Render::GlyphSlot * GetLast();
	const Scaleform::Render::GlyphSlot * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::GlyphSlot *);
	bool IsLast(const Scaleform::Render::GlyphSlot *);
	bool IsNull(const Scaleform::Render::GlyphSlot *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	void PushFront(Scaleform::Render::GlyphSlot *);
	void PushBack(Scaleform::Render::GlyphSlot *);
	void InsertBefore(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	void InsertAfter(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	static void Remove(Scaleform::Render::GlyphSlot *);
	void BringToFront(Scaleform::Render::GlyphSlot *);
	void SendToBack(Scaleform::Render::GlyphSlot *);
	void PushListToFront(Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band> &);
private:
	const Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band> & operator=(const Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band> &);
	Scaleform::Render::GlyphSlot Root; // 0x0
public:
	~List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Band>();
};
class Scaleform::Render::GlyphQueueVisitor
{
	enum RectType
	{
		Rect_Slot = 0,
		Rect_SlotPinned = 1,
		Rect_Glyph = 2,
	};
public:
	~GlyphQueueVisitor();
	void Visit(const Scaleform::Render::GlyphParam *, const Scaleform::Render::Rect<float> &, Scaleform::Render::GlyphQueueVisitor::RectType);
	GlyphQueueVisitor(const Scaleform::Render::GlyphQueueVisitor &);
	GlyphQueueVisitor();
	Scaleform::Render::GlyphQueueVisitor & operator=(const Scaleform::Render::GlyphQueueVisitor &);
};
struct Scaleform::Render::GlyphParamHash
{
	const Scaleform::Render::GlyphParam * Param; // 0x0
	GlyphParamHash(const Scaleform::Render::GlyphParam *);
	GlyphParamHash();
	unsigned long long operator()(const Scaleform::Render::GlyphParamHash &);
	bool operator==(const Scaleform::Render::GlyphParamHash &);
};
class Scaleform::Render::GlyphQueue
{
	enum <unnamed-enum-SID>
	{
		SID = 75,
	};
	enum <unnamed-enum-MaxSlotFailures>
	{
		MaxSlotFailures = 16,
	};
public:
	GlyphQueue();
	void Clear();
	void Init(Scaleform::Render::GlyphEvictNotifier *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, bool);
	unsigned long GetMaxSlotHeight();
	unsigned long GetNumPacked();
	static void PinSlot(Scaleform::Render::GlyphSlot *);
	static void UnpinSlot(Scaleform::Render::GlyphSlot *, Scaleform::Render::Fence *);
	static bool IsPinned(Scaleform::Render::GlyphSlot *, bool);
	Scaleform::Render::TextNotifier * CreateNotifier(Scaleform::Render::GlyphNode *, Scaleform::Render::TextMeshProvider *);
	void RemoveNotifier(Scaleform::Render::TextNotifier *);
	void UnpinAllSlots();
	void CleanUpTexture(unsigned long);
	void CleanUpFont(const Scaleform::Render::FontCacheHandle *);
	void MergeEmptySlots();
	void SendGlyphToBack(Scaleform::Render::GlyphNode *);
	Scaleform::Render::GlyphNode * FindGlyph(const Scaleform::Render::GlyphParam &);
	Scaleform::Render::GlyphNode * AllocateGlyph(const Scaleform::Render::GlyphParam &, unsigned long, unsigned long);
	unsigned long ComputeUsedArea();
	void VisitGlyphs(Scaleform::Render::GlyphQueueVisitor *);
	void PrintMemStats();
	unsigned long long GetBytes();
	class CachedGlyphsType;
	class ActiveSlotsType;
private:
	Scaleform::Render::GlyphNode * packGlyph(unsigned long, unsigned long, Scaleform::Render::GlyphSlot *);
	Scaleform::Render::GlyphNode * packGlyph(unsigned long, unsigned long, Scaleform::Render::GlyphNode *);
	Scaleform::Render::GlyphNode * findSpaceInSlots(unsigned long, unsigned long);
	Scaleform::Render::GlyphSlot * initNewSlot(Scaleform::Render::GlyphBand *, unsigned long, unsigned long);
	Scaleform::Render::GlyphNode * allocateNewSlot(unsigned long, unsigned long);
	void splitSlot(Scaleform::Render::GlyphSlot *, unsigned long);
	void splitGlyph(Scaleform::Render::GlyphSlot *, bool, unsigned long);
	bool checkDistance(Scaleform::Render::GlyphSlot *);
	Scaleform::Render::GlyphSlot * mergeSlotWithNeighbor(Scaleform::Render::GlyphSlot *);
	void mergeSlots(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *, unsigned long);
	Scaleform::Render::GlyphNode * evictOldSlot(unsigned long, unsigned long);
	Scaleform::Render::GlyphNode * evictOldSlot(unsigned long, unsigned long, unsigned long);
	void releaseGlyphTree(Scaleform::Render::GlyphNode *);
	void releaseSlot(Scaleform::Render::GlyphSlot *);
	void computeGlyphArea(const Scaleform::Render::GlyphNode *, unsigned long *);
	static const Scaleform::Render::GlyphNode * findFontInSlot(Scaleform::Render::GlyphNode *, const Scaleform::Render::FontCacheHandle *);
	static bool slotIsEmpty(const Scaleform::Render::GlyphSlot *);
	static bool slotsAreEmpty(const Scaleform::Render::GlyphSlot *, const Scaleform::Render::GlyphSlot *);
	unsigned long MinSlotSpace; // 0x0
	unsigned long FirstTexture; // 0x4
	unsigned long NumTextures; // 0x8
	unsigned long TextureWidth; // 0xC
	unsigned long TextureHeight; // 0x10
	unsigned long MaxSlotHeight; // 0x14
	unsigned long NumBandsInTexture; // 0x18
	bool FenceWaitOnFullCache; // 0x1C
	Scaleform::ListAllocLH_POD<Scaleform::Render::GlyphSlot,127,75> Slots; // 0x20
	Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > SlotQueue; // 0x48
	unsigned long SlotQueueSize; // 0x58
	Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> ActiveSlots; // 0x60
	Scaleform::ListAllocLH_POD<Scaleform::Render::GlyphNode,127,75> Glyphs; // 0xC8
	Scaleform::ArrayUnsafeLH_POD<Scaleform::Render::GlyphBand,75> Bands; // 0xF0
	Scaleform::HashLH<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,75,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > GlyphHTable; // 0x108
	unsigned long NumUsedBands; // 0x110
	Scaleform::ListAllocLH_POD<Scaleform::Render::TextNotifier,127,75> Notifiers; // 0x118
	Scaleform::Render::GlyphEvictNotifier * pEvictNotifier; // 0x140
public:
	~GlyphQueue();
};
class Scaleform::HashLH<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,75,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > :
	Scaleform::Hash<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,75,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNod(const Scaleform::HashLH<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,75,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > &);
	HashLH<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,75,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNod(long);
	HashLH<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,75,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNod();
	~HashLH<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,75,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNo();
	void operator=(const Scaleform::HashLH<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash,75,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> > &);
};
class Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active>
{
	struct ValueType;
public:
	static void SetPrev(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	static void SetNext(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	static Scaleform::Render::GlyphSlot * GetPrev(Scaleform::Render::GlyphSlot *);
	static const Scaleform::Render::GlyphSlot * GetPrev(const Scaleform::Render::GlyphSlot *);
	static Scaleform::Render::GlyphSlot * GetNext(Scaleform::Render::GlyphSlot *);
	static const Scaleform::Render::GlyphSlot * GetNext(const Scaleform::Render::GlyphSlot *);
private:
	List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active>(const Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> &);
public:
	List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active>();
	void Clear();
	Scaleform::Render::GlyphSlot * GetFirst();
	const Scaleform::Render::GlyphSlot * GetFirst();
	Scaleform::Render::GlyphSlot * GetLast();
	const Scaleform::Render::GlyphSlot * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::GlyphSlot *);
	bool IsLast(const Scaleform::Render::GlyphSlot *);
	bool IsNull(const Scaleform::Render::GlyphSlot *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	void PushFront(Scaleform::Render::GlyphSlot *);
	void PushBack(Scaleform::Render::GlyphSlot *);
	void InsertBefore(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	void InsertAfter(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
	static void Remove(Scaleform::Render::GlyphSlot *);
	void BringToFront(Scaleform::Render::GlyphSlot *);
	void SendToBack(Scaleform::Render::GlyphSlot *);
	void PushListToFront(Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> &);
private:
	const Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> & operator=(const Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> &);
	Scaleform::Render::GlyphSlot Root; // 0x0
public:
	~List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active>();
};
class Scaleform::ListAllocLH_POD<Scaleform::Render::GlyphSlot,127,75> :
	Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ListAllocLH_POD<Scaleform::Render::GlyphSlot,127,75>();
	~ListAllocLH_POD<Scaleform::Render::GlyphSlot,127,75>();
};
class Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> >
{
	struct ValueType;
private:
	List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> >(const Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > &);
public:
	List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> >();
	void Clear();
	Scaleform::Render::GlyphSlot * GetFirst();
	Scaleform::Render::GlyphSlot * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::GlyphSlot *);
	bool IsLast(const Scaleform::Render::GlyphSlot *);
	bool IsNull(const Scaleform::Render::GlyphSlot *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::GlyphSlot * GetPrev(const Scaleform::Render::GlyphSlot *);
	static Scaleform::Render::GlyphSlot * GetNext(const Scaleform::Render::GlyphSlot *);
	void PushFront(Scaleform::Render::GlyphSlot *);
	void PushBack(Scaleform::Render::GlyphSlot *);
	static void Remove(Scaleform::Render::GlyphSlot *);
	void BringToFront(Scaleform::Render::GlyphSlot *);
	void SendToBack(Scaleform::Render::GlyphSlot *);
	void PushListToFront(Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > &, Scaleform::Render::GlyphSlot *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > &, Scaleform::Render::GlyphSlot *);
	void PushListItemsToFront(Scaleform::Render::GlyphSlot *, Scaleform::Render::GlyphSlot *);
private:
	const Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > & operator=(const Scaleform::List<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot,Scaleform::ListNode<Scaleform::Render::GlyphSlot> > &);
	Scaleform::ListNode<Scaleform::Render::GlyphSlot> Root; // 0x0
};
class Scaleform::ListAllocLH_POD<Scaleform::Render::GlyphNode,127,75> :
	Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ListAllocLH_POD<Scaleform::Render::GlyphNode,127,75>();
	~ListAllocLH_POD<Scaleform::Render::GlyphNode,127,75>();
};
class Scaleform::ArrayUnsafeLH_POD<Scaleform::Render::GlyphBand,75> :
	Scaleform::ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> >
{
	struct ValueType;
	struct AllocatorType;
	class BaseType;
	class SelfType;
public:
	ArrayUnsafeLH_POD<Scaleform::Render::GlyphBand,75>(const Scaleform::ArrayUnsafeLH_POD<Scaleform::Render::GlyphBand,75> &);
	ArrayUnsafeLH_POD<Scaleform::Render::GlyphBand,75>(unsigned long long);
	ArrayUnsafeLH_POD<Scaleform::Render::GlyphBand,75>();
	const Scaleform::ArrayUnsafeLH_POD<Scaleform::Render::GlyphBand,75> & operator=(const Scaleform::ArrayUnsafeLH_POD<Scaleform::Render::GlyphBand,75> &);
	~ArrayUnsafeLH_POD<Scaleform::Render::GlyphBand,75>();
};
class Scaleform::ListAllocLH_POD<Scaleform::Render::TextNotifier,127,75> :
	Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ListAllocLH_POD<Scaleform::Render::TextNotifier,127,75>();
	~ListAllocLH_POD<Scaleform::Render::TextNotifier,127,75>();
};