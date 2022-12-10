#pragma once

enum Scaleform::Render::SortKeyFlags
{
	SKF_RangeStart = 4096,
	SKF_MatchNoOverlap = 8192,
	SKF_MatchSingleOverlap = 16384,
	SKF_MatchNever = 32768,
};
enum Scaleform::Render::SortKeyType
{
	SortKey_None = 0,
	SortKey_PrimitiveFill = 1,
	SortKey_MeshProvider = 2,
	SortKey_Text = 3,
	SortKey_MaskStart = 4,
	SortKey_MaskEnd = 5,
	SortKey_BlendModeStart = 6,
	SortKey_BlendModeEnd = 7,
	SortKey_FilterStart = 8,
	SortKey_FilterEnd = 9,
	SortKey_ViewMatrix3DStart = 10,
	SortKey_ViewMatrix3DEnd = 11,
	SortKey_ProjectionMatrix3DStart = 12,
	SortKey_ProjectionMatrix3DEnd = 13,
	SortKey_UserDataStart = 14,
	SortKey_UserDataEnd = 15,
};
enum Scaleform::Render::SortKeyMaskType
{
	SortKeyMask_Push = 0,
	SortKeyMask_End = 1,
	SortKeyMask_Pop = 2,
	SortKeyMask_Item_Count = 3,
};
enum Scaleform::Render::SortKeyTextType
{
	SortKeyText = 0,
};
enum Scaleform::Render::SortKeyTransition
{
	SKT_Skip = 0,
	SKT_Replace = 1,
	SKT_End = 2,
};
struct Scaleform::Render::SortKeyInterface
{
	Scaleform::Render::SortKeyType Type; // 0x8
	unsigned long Flags; // 0xC
	~SortKeyInterface();
	void AddRef(void *);
	void Release(void *);
	Scaleform::Render::SortKeyTransition GetRangeTransition(void *, const Scaleform::Render::SortKey &);
	bool UpdateBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	void DrawBundleEntry(Scaleform::Render::HAL *, void *, Scaleform::Render::BundleEntry *);
	SortKeyInterface(const Scaleform::Render::SortKeyInterface &);
	SortKeyInterface(Scaleform::Render::SortKeyType, unsigned long);
	static Scaleform::Render::SortKeyInterface NullInterface; // 0xFFFFFFFFFFFFFFFF
	Scaleform::Render::SortKeyInterface & operator=(const Scaleform::Render::SortKeyInterface &);
};
void Scaleform::Render::SortKeyInterface::AddRef(void * __formal); // 0x14002E7C0
Scaleform::Render::SortKeyTransition Scaleform::Render::SortKeyInterface::GetRangeTransition(void * __formal, const Scaleform::Render::SortKey & __formal); // 0x1400470F0
bool Scaleform::Render::SortKeyInterface::UpdateBundleEntry(Scaleform::Render::HAL * __formal, void * __formal, Scaleform::Render::BundleEntry * __formal, Scaleform::Render::TreeCacheRoot * __formal); // 0x14004BBE0
struct Scaleform::Render::SortKeyInterface_RefCountImpl :
	Scaleform::Render::SortKeyInterface
{
	virtual void AddRef(void *);
	virtual void Release(void *);
	SortKeyInterface_RefCountImpl(Scaleform::Render::SortKeyInterface_RefCountImpl &);
	SortKeyInterface_RefCountImpl(const Scaleform::Render::SortKeyInterface_RefCountImpl &);
	SortKeyInterface_RefCountImpl(Scaleform::Render::SortKeyType, unsigned long);
	virtual ~SortKeyInterface_RefCountImpl();
	Scaleform::Render::SortKeyInterface_RefCountImpl & operator=(Scaleform::Render::SortKeyInterface_RefCountImpl &);
	Scaleform::Render::SortKeyInterface_RefCountImpl & operator=(const Scaleform::Render::SortKeyInterface_RefCountImpl &);
};
void Scaleform::Render::SortKeyInterface_RefCountImpl::AddRef(void * p); // 0x1403EBC80
void Scaleform::Render::SortKeyInterface_RefCountImpl::Release(void * p); // 0x1403EBC90
class Scaleform::Render::SortKey
{
protected:
	Scaleform::Render::SortKeyInterface * pImpl; // 0x0
	void * Data; // 0x8
	void addRef();
	void release();
	void initKey(Scaleform::Render::SortKeyInterface *, void *);
public:
	SortKey(Scaleform::Render::SortKeyType, Scaleform::Render::UserDataState::Data *);
	SortKey(Scaleform::Render::SortKeyType, const Scaleform::Render::Matrix4x4Ref<float> *);
	SortKey(Scaleform::Render::SortKeyType, const Scaleform::Render::Matrix3x4Ref<float> *);
	SortKey(Scaleform::Render::SortKeyType, const Scaleform::Render::FilterSet *);
	SortKey(Scaleform::Render::SortKeyTextType, bool);
	SortKey(Scaleform::Render::SortKeyType, Scaleform::Render::BlendMode);
	SortKey(Scaleform::Render::SortKeyMaskType);
	SortKey(Scaleform::Render::MeshProvider *, bool);
	SortKey(Scaleform::Render::PrimitiveFill *, bool);
	SortKey(const Scaleform::Render::SortKey &);
	SortKey(Scaleform::Render::SortKeyInterface *, void *);
	SortKey();
	~SortKey();
	Scaleform::Render::SortKeyType GetType();
	unsigned long GetFlags();
	void * GetData();
	Scaleform::Render::PrimitiveFill * GetPrimitiveFill();
	Scaleform::Render::MeshProvider * GetMeshProvider();
	Scaleform::Render::SortKey & operator=(const Scaleform::Render::SortKey &);
	bool operator==(const Scaleform::Render::SortKey &);
	bool operator!=(const Scaleform::Render::SortKey &);
	void SetData(void *);
	bool MatchNoOverlap(const Scaleform::Render::SortKey &);
	bool MatchSingleItemOverlap(const Scaleform::Render::SortKey &);
	bool IsRangeStartKey();
	Scaleform::Render::SortKeyTransition GetRangeTransition(const Scaleform::Render::SortKey &);
	bool UpdateBundleEntry(Scaleform::Render::HAL *, Scaleform::Render::BundleEntry *, Scaleform::Render::TreeCacheRoot *);
	void DrawBundleEntry(Scaleform::Render::HAL *, Scaleform::Render::BundleEntry *);
};
bool Scaleform::Render::SortKey::MatchSingleItemOverlap(const Scaleform::Render::SortKey & other); // 0x140382820
class Scaleform::Render::BundleEntry
{
private:
	Scaleform::Render::BundleEntry * pNextPattern; // 0x0
public:
	Scaleform::Render::BundleEntry * pChain; // 0x8
	unsigned short ChainHeight; // 0x10
	unsigned short IndexHint; // 0x12
	Scaleform::Render::SortKey Key; // 0x18
	Scaleform::Ptr<Scaleform::Render::Bundle> pBundle; // 0x28
	bool Removed; // 0x30
	void SetBundle(Scaleform::Render::Bundle *, unsigned long long);
	void ClearBundle();
	Scaleform::Render::TreeCacheNode * pSourceNode; // 0x38
	BundleEntry(const Scaleform::Render::BundleEntry &);
	BundleEntry(Scaleform::Render::TreeCacheNode *, const Scaleform::Render::SortKey &);
	~BundleEntry();
	void SetNextPattern(Scaleform::Render::BundleEntry *);
	bool HasNextPattern();
	Scaleform::Render::BundleEntry * GetNextPattern();
	bool UpdateBundleEntry(Scaleform::Render::HAL *, Scaleform::Render::TreeCacheRoot *);
	void DrawBundleEntry(Scaleform::Render::HAL *);
private:
	void clearBundlePtr();
public:
	Scaleform::Render::BundleEntry & operator=(const Scaleform::Render::BundleEntry &);
};
class Scaleform::Ptr<Scaleform::Render::Bundle>
{
protected:
	Scaleform::Render::Bundle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Bundle>(const Scaleform::Ptr<Scaleform::Render::Bundle> &);
	Ptr<Scaleform::Render::Bundle>(Scaleform::Render::Bundle *);
	Ptr<Scaleform::Render::Bundle>(Scaleform::Ptr<Scaleform::Render::Bundle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Bundle>(Scaleform::Pickable<Scaleform::Render::Bundle>);
	Ptr<Scaleform::Render::Bundle>(Scaleform::Render::Bundle &);
	Ptr<Scaleform::Render::Bundle>();
	~Ptr<Scaleform::Render::Bundle>();
	bool operator==(Scaleform::Render::Bundle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Bundle> &);
	bool operator!=(Scaleform::Render::Bundle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Bundle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Bundle> &);
	Scaleform::Ptr<Scaleform::Render::Bundle> & operator=(Scaleform::Pickable<Scaleform::Render::Bundle>);
	const Scaleform::Ptr<Scaleform::Render::Bundle> & operator=(Scaleform::Render::Bundle &);
	const Scaleform::Ptr<Scaleform::Render::Bundle> & operator=(Scaleform::Render::Bundle *);
	const Scaleform::Ptr<Scaleform::Render::Bundle> & operator=(const Scaleform::Ptr<Scaleform::Render::Bundle> &);
	Scaleform::Ptr<Scaleform::Render::Bundle> & SetPtr(Scaleform::Pickable<Scaleform::Render::Bundle>);
	Scaleform::Ptr<Scaleform::Render::Bundle> & SetPtr(Scaleform::Render::Bundle &);
	Scaleform::Ptr<Scaleform::Render::Bundle> & SetPtr(Scaleform::Render::Bundle *);
	Scaleform::Ptr<Scaleform::Render::Bundle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Bundle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Bundle * & GetRawRef();
	Scaleform::Render::Bundle * GetPtr();
	Scaleform::Render::Bundle & operator*();
	Scaleform::Render::Bundle * operator->();
	Scaleform::Render::Bundle * operator class Scaleform::Render::Bundle *();
	Scaleform::Ptr<Scaleform::Render::Bundle> & Pick(Scaleform::Render::Bundle *);
	Scaleform::Ptr<Scaleform::Render::Bundle> & Pick(Scaleform::Pickable<Scaleform::Render::Bundle>);
	Scaleform::Ptr<Scaleform::Render::Bundle> & Pick(Scaleform::Ptr<Scaleform::Render::Bundle> &);
};
class Scaleform::Render::BundleIterator
{
private:
	Scaleform::Render::BundleEntry * pFirst; // 0x0
	Scaleform::Render::BundleEntry * pLast; // 0x8
public:
	BundleIterator(Scaleform::Render::BundleEntry *, Scaleform::Render::BundleEntry *);
	BundleIterator();
	Scaleform::Render::BundleEntry * operator->();
	bool operator bool();
	Scaleform::Render::BundleEntry * operator class Scaleform::Render::BundleEntry *();
	Scaleform::Render::BundleEntry * GetEntry();
	Scaleform::Render::Bundle * GetBundle();
	void operator++(long);
};
enum Scaleform::Render::BundleRangeType
{
	Range_Empty = 0,
	Range_Invalid = -2147483648,
};
class Scaleform::Render::BundleEntryRange
{
private:
	Scaleform::Render::BundleEntry * pFirst; // 0x0
	Scaleform::Render::BundleEntry * pLast; // 0x8
	unsigned long Length; // 0x10
public:
	BundleEntryRange(Scaleform::Render::BundleRangeType);
	Scaleform::Render::BundleIterator GetIterator();
	void Clear(Scaleform::Render::BundleRangeType);
	void Init(Scaleform::Render::BundleEntry *, Scaleform::Render::BundleEntry *, unsigned long);
	bool IsEmpty();
	bool IsValid();
	unsigned long GetLength();
	Scaleform::Render::BundleEntry * GetFirst();
	Scaleform::Render::BundleEntry * GetLast();
	Scaleform::Render::SortKey & GetFirstKey();
	void SetToEntry(Scaleform::Render::BundleEntry *);
	void VerifyValidChildDepth();
	void StripChainsByDepth(unsigned long);
	void StripChains();
	void Append(Scaleform::Render::BundleEntryRange &);
};
enum Scaleform::Render::<unnamed-enum-Bundle_MergeLengthLimit>
{
	Bundle_MergeLengthLimit = 8,
};
class Scaleform::Render::BundleEntryRangeMatcher :
	Scaleform::Render::BundleEntryRange
{
private:
	Scaleform::Render::BundleEntry * pLastEntries[8]; // 0x18
	unsigned long long LastEntryCount; // 0x58
	Scaleform::Render::BundleEntry * getLastEntry(unsigned long long);
	void setLastEntry(unsigned long long, Scaleform::Render::BundleEntry *);
public:
	BundleEntryRangeMatcher(Scaleform::Render::BundleRangeType);
	bool Match(Scaleform::Render::BundleEntryRange &, unsigned long *);
	void MergeMatchingChains(Scaleform::Render::BundleEntryRange &, unsigned long);
};
class Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,67>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 67,
	};
public:
	RefCountBaseNTS<Scaleform::Render::Bundle,67>(Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67> &);
	RefCountBaseNTS<Scaleform::Render::Bundle,67>(const Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67> &);
	RefCountBaseNTS<Scaleform::Render::Bundle,67>();
	virtual ~RefCountBaseNTS<Scaleform::Render::Bundle,67>();
	Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67> & operator=(Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67> &);
	Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67> &);
};
class Scaleform::Render::Bundle :
	Scaleform::RefCountBaseNTS<Scaleform::Render::Bundle,67>
{
protected:
	Scaleform::ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy> Entries; // 0x10
	Scaleform::Render::BundleEntry * pTop; // 0x28
	bool NeedUpdate; // 0x30
public:
	unsigned long FrameId; // 0x34
	Bundle(const Scaleform::Render::Bundle &);
	Bundle(Scaleform::Render::HAL *, Scaleform::Render::BundleEntry *);
	virtual ~Bundle();
	void SetNeedsUpdate();
	bool NeedsUpdate();
	unsigned long GetEntryCount();
	void UpdateChain(Scaleform::Render::HAL *, Scaleform::Render::BundleEntry *);
	void InsertEntry(Scaleform::Render::HAL *, unsigned long long, Scaleform::Render::BundleEntry *);
	void RemoveEntries(unsigned long long, unsigned long long);
	void UpdateMesh(Scaleform::Render::HAL *, Scaleform::Render::BundleEntry *);
	void RemoveEntry(Scaleform::Render::BundleEntry *);
	bool findEntryIndex(unsigned long long *, Scaleform::Render::BundleEntry *);
	Scaleform::Render::Bundle & operator=(const Scaleform::Render::Bundle &);
};
class Scaleform::ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::BundleEntry *,Scaleform::AllocatorLH<Scaleform::Render::BundleEntry *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::Render::BundleEntry ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::BundleEntry *,2,Scaleform::ArrayDefaultPolicy>();
};
void Scaleform::Render::BundleEntry::SetBundle(Scaleform::Render::Bundle * b, unsigned long long indexHint); // 0x1403ED320
void Scaleform::Render::BundleEntry::ClearBundle(); // 0x1403567E0