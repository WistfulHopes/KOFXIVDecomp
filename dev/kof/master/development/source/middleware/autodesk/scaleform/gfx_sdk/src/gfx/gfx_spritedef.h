#pragma once

class Scaleform::GFx::TimelineIODef :
	Scaleform::GFx::TimelineDef
{
public:
	void SetLoadingPlaylistFrame(const Scaleform::GFx::TimelineDef::Frame &, Scaleform::GFx::LogState *);
	void AddFrameName(const Scaleform::String &, Scaleform::GFx::LogState *);
	TimelineIODef(Scaleform::GFx::TimelineIODef &);
	TimelineIODef(const Scaleform::GFx::TimelineIODef &);
	TimelineIODef();
	virtual ~TimelineIODef();
	Scaleform::GFx::TimelineIODef & operator=(Scaleform::GFx::TimelineIODef &);
	Scaleform::GFx::TimelineIODef & operator=(const Scaleform::GFx::TimelineIODef &);
};
class Scaleform::GFx::SpriteDef :
	Scaleform::GFx::TimelineIODef
{
private:
	Scaleform::GFx::MovieDataDef * pMovieDef; // 0x20
	Scaleform::StringHashLH<unsigned int,2,Scaleform::String::NoCaseHashFunctor,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>,Scaleform::StringLH_HashNode<unsigned int,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > NamedFrames; // 0x28
	long FrameCount; // 0x30
	long LoadingFrame; // 0x34
	Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy> Playlist; // 0x38
	Scaleform::GFx::Scale9Grid * pScale9Grid; // 0x50
	enum <unnamed-enum-Flags_Has_Frame_up>
	{
		Flags_Has_Frame_up = 1,
		Flags_Has_Frame_down = 2,
		Flags_Has_Frame_over = 4,
		Flags_HasSpecialFrames = 7,
	};
	unsigned char Flags; // 0x58
public:
	SpriteDef(const Scaleform::GFx::SpriteDef &);
	SpriteDef(Scaleform::GFx::MovieDataDef *);
	virtual ~SpriteDef();
	virtual Scaleform::GFx::CharacterDef::CharacterDefType GetType();
	void InitEmptyClipDef();
	void Read(Scaleform::GFx::LoadProcess *, Scaleform::GFx::ResourceId);
	float GetWidth();
	float GetHeight();
	virtual bool DefPointTestLocal(const Scaleform::Render::Point<float> &, bool, const Scaleform::GFx::DisplayObjectBase *);
	virtual unsigned long GetFrameCount();
	float GetFrameRate();
	Scaleform::Render::Rect<float> GetFrameRect();
	unsigned long GetLoadingFrame();
	virtual unsigned long GetVersion();
	unsigned long GetSWFFlags();
	unsigned long GetTagCount();
	unsigned long GetFileBytes();
	const char * GetFileURL();
	virtual bool GetLabeledFrame(const char *, unsigned long *, bool);
	virtual const Scaleform::String * GetFrameLabel(unsigned long, unsigned long *);
	virtual Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> * GetFrameLabels(unsigned long, Scaleform::Array<Scaleform::String,2,Scaleform::ArrayDefaultPolicy> *);
	virtual void AddFrameName(const Scaleform::String &, Scaleform::GFx::LogState *);
	virtual void SetLoadingPlaylistFrame(const Scaleform::GFx::TimelineDef::Frame &, Scaleform::GFx::LogState *);
	virtual const Scaleform::GFx::TimelineDef::Frame GetPlaylist(long);
	virtual bool GetInitActions(Scaleform::GFx::TimelineDef::Frame *, long);
	virtual unsigned long GetResourceTypeCode();
	void SetScale9Grid(const Scaleform::Render::Rect<float> &);
	Scaleform::Render::Rect<float> GetScale9Grid();
	bool HasScale9Grid();
	bool HasSpecialFrames();
	bool HasFrame_up();
	bool HasFrame_down();
	bool HasFrame_over();
	Scaleform::GFx::SpriteDef & operator=(const Scaleform::GFx::SpriteDef &);
};
class Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::TimelineDef::Frame,Scaleform::AllocatorLH<Scaleform::GFx::TimelineDef::Frame,264>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::TimelineDef::Frame,264,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::GFx::CharacterDef::CharacterDefType Scaleform::GFx::SpriteDef::GetType(); // 0x1400BBAA0
float Scaleform::GFx::SpriteDef::GetHeight(); // 0x1405BF5D0
unsigned long Scaleform::GFx::SpriteDef::GetFrameCount(); // 0x1406B16F0
float Scaleform::GFx::SpriteDef::GetFrameRate(); // 0x1403DD0D0
Scaleform::Render::Rect<float> Scaleform::GFx::SpriteDef::GetFrameRect(); // 0x1403DD0E0
unsigned long Scaleform::GFx::SpriteDef::GetLoadingFrame(); // 0x1403DD110
unsigned long Scaleform::GFx::SpriteDef::GetVersion(); // 0x1403DD160
unsigned long Scaleform::GFx::SpriteDef::GetSWFFlags(); // 0x1403DD150
unsigned long Scaleform::GFx::SpriteDef::GetTagCount(); // 0x1400470F0
unsigned long Scaleform::GFx::SpriteDef::GetFileBytes(); // 0x1403DCEA0
const char * Scaleform::GFx::SpriteDef::GetFileURL(); // 0x1403DCEB0
bool Scaleform::GFx::SpriteDef::GetLabeledFrame(const char * label, unsigned long * frameNumber, bool translateNumbers); // 0x1403DD100
const Scaleform::String * Scaleform::GFx::SpriteDef::GetFrameLabel(unsigned long frameNumber, unsigned long * exactFrameNumberForLabel); // 0x1403DCF70
void Scaleform::GFx::SpriteDef::SetLoadingPlaylistFrame(const Scaleform::GFx::TimelineDef::Frame & frame, Scaleform::GFx::LogState * plog); // 0x1403DD960
const Scaleform::GFx::TimelineDef::Frame Scaleform::GFx::SpriteDef::GetPlaylist(long frameNumber); // 0x1403DD120
bool Scaleform::GFx::SpriteDef::DefPointTestLocal(const Scaleform::Render::Point<float> & pt, bool testShape, const Scaleform::GFx::DisplayObjectBase * pinst); // 0x14004BBE0
unsigned long Scaleform::GFx::SpriteDef::GetResourceTypeCode(); // 0x1403DD140
void Scaleform::GFx::SpriteDef::SetScale9Grid(const Scaleform::Render::Rect<float> & r); // 0x14036EC60
class Scaleform::GFx::TimelineSnapshot
{
	enum PlaceType
	{
		Place_Add = 0,
		Place_Move = 1,
		Place_Replace = 2,
		Place_Remove = 3,
		Place_RemoveAndAdd = 4,
		Place_Unknown = 255,
	};
	enum FlagsType
	{
		Flags_NoReplaceAllowed = 1,
		Flags_DeadOnArrival = 2,
	};
	struct SourceTags;
	struct SnapshotElement;
	struct SnapshotElementComparator;
public:
	Scaleform::ListAllocDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,2> SnapshotHeap; // 0x0
	Scaleform::ArrayDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2,Scaleform::ArrayDefaultPolicy> SnapshotSortedArray; // 0x28
	Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> > SnapshotList; // 0x48
	Scaleform::GFx::InteractiveObject * pOwnerSprite; // 0x58
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * FindDepth(long, unsigned long long *);
private:
	static long DepthLess(long, const Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	enum DirectionType
	{
		Direction_Forward = 0,
		Direction_Backward = 1,
	};
public:
	Scaleform::GFx::TimelineSnapshot::DirectionType Direction; // 0x60
	TimelineSnapshot(Scaleform::GFx::TimelineSnapshot::DirectionType, Scaleform::MemoryHeap *, Scaleform::GFx::InteractiveObject *);
	~TimelineSnapshot();
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * Add(long);
	void Remove(long);
	void RemoveAtIndex(unsigned long long);
	void MakeSnapshot(Scaleform::GFx::TimelineDef *, unsigned long, unsigned long);
	void ExecuteSnapshot(Scaleform::GFx::DisplayObjContainer *);
};
struct Scaleform::GFx::TimelineSnapshot::SourceTags
{
	Scaleform::GFx::GFxPlaceObjectBase * pMainTag; // 0x0
	Scaleform::GFx::GFxPlaceObjectBase * pMatrixTag; // 0x8
	Scaleform::GFx::GFxPlaceObjectBase * pCxFormTag; // 0x10
	Scaleform::GFx::GFxPlaceObjectBase * pFiltersTag; // 0x18
	Scaleform::GFx::GFxPlaceObjectBase * pBlendModeTag; // 0x20
	Scaleform::GFx::GFxPlaceObjectBase * pDepthTag; // 0x28
	Scaleform::GFx::GFxPlaceObjectBase * pClipDepthTag; // 0x30
	Scaleform::GFx::GFxPlaceObjectBase * pRatioTag; // 0x38
	Scaleform::GFx::GFxPlaceObjectBase * pCharIdTag; // 0x40
	Scaleform::GFx::GFxPlaceObjectBase * pClassNameTag; // 0x48
	Scaleform::GFx::GFxPlaceObjectBase * pVisibilityTag; // 0x50
	SourceTags();
	bool HasMainTag();
	void Assign(Scaleform::GFx::GFxPlaceObjectBase *);
	void Union(Scaleform::GFx::GFxPlaceObjectBase *);
	void Unpack(Scaleform::GFx::GFxPlaceObjectBase::UnpackedData &);
};
struct Scaleform::GFx::TimelineSnapshot::SnapshotElement :
	Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement>
{
	unsigned long CreateFrame; // 0x10
	long Depth; // 0x14
	Scaleform::GFx::TimelineSnapshot::SourceTags Tags; // 0x18
	unsigned char PlaceType; // 0x70
	unsigned char Flags; // 0x71
	SnapshotElement(long);
	SnapshotElement();
	~SnapshotElement();
};
struct Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement>
{
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement>();
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * GetPrev();
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	void InsertNodeAfter(Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	void InsertNodeBefore(Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
};
struct Scaleform::GFx::TimelineSnapshot::SnapshotElementComparator
{
	long Compare(const Scaleform::GFx::TimelineSnapshot::SnapshotElement &, long);
};
class Scaleform::ListAllocDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,2> :
	Scaleform::ListAllocBase<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,Scaleform::AllocatorDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,2> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ListAllocDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,2>(void *);
	~ListAllocDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement,50,2>();
};
class Scaleform::ArrayDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,Scaleform::AllocatorDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::TimelineSnapshot::SnapshotElement ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH_POD<Scaleform::GFx::TimelineSnapshot::SnapshotElement *,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> >
{
	struct ValueType;
private:
	List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> >(const Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> > &);
public:
	List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> >();
	void Clear();
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * GetFirst();
	Scaleform::GFx::TimelineSnapshot::SnapshotElement * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	bool IsLast(const Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	bool IsNull(const Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::GFx::TimelineSnapshot::SnapshotElement * GetPrev(const Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	static Scaleform::GFx::TimelineSnapshot::SnapshotElement * GetNext(const Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	void PushFront(Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	void PushBack(Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	static void Remove(Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	void BringToFront(Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	void SendToBack(Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	void PushListToFront(Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> > &);
	void PushListToBack(Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> > &, Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> > &, Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
	void PushListItemsToFront(Scaleform::GFx::TimelineSnapshot::SnapshotElement *, Scaleform::GFx::TimelineSnapshot::SnapshotElement *);
private:
	const Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> > & operator=(const Scaleform::List<Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::GFx::TimelineSnapshot::SnapshotElement,Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> > &);
	Scaleform::ListNode<Scaleform::GFx::TimelineSnapshot::SnapshotElement> Root; // 0x0
};
Scaleform::GFx::TimelineSnapshot::~TimelineSnapshot(); // 0x14035E280
void Scaleform::GFx::TimelineSnapshot::RemoveAtIndex(unsigned long long idx); // 0x1403DD790