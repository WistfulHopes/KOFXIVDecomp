#pragma once

class Scaleform::GFx::DisplayList :
	Scaleform::NewOverrideBase<322>
{
	enum AddFlags
	{
		Flags_ReplaceIfDepthIsOccupied = 1,
		Flags_DeadOnArrival = 2,
		Flags_PlaceObject = 4,
	};
	enum <unnamed-enum-INVALID_DEPTH>
	{
		INVALID_DEPTH = 255,
		THRESHOLD_CNT = 10,
	};
	class DisplayEntry;
	struct MemberVisitor;
private:
	Scaleform::ArrayLH<Scaleform::GFx::DisplayList::DisplayEntry,2,Scaleform::ArrayDefaultPolicy> DisplayObjectArray; // 0x0
	struct DepthToIndexMapElem;
	struct DepthToIndexContainer;
	Scaleform::GFx::DisplayList::DepthToIndexContainer * DepthToIndexMap; // 0x18
	Scaleform::GFx::DisplayObject * pCachedChar; // 0x20
	unsigned short ModId; // 0x28
	enum <unnamed-enum-Flags_DepthToIndexInvalid>
	{
		Flags_DepthToIndexInvalid = 1,
		Flags_MayContainForeignElems = 2,
	};
	unsigned char Flags; // 0x2A
	static long DepthLess(const Scaleform::GFx::DisplayList::DisplayEntry &, long);
	static long DepthLess1(const Scaleform::GFx::DisplayList::DepthToIndexMapElem &, long);
	void CheckAndInvalidateDepthMappings();
	void InsertIntoRenderTree(Scaleform::GFx::DisplayObjectBase *, unsigned long long);
	void RemoveFromRenderTree(Scaleform::GFx::DisplayObjectBase *, unsigned long long);
	void ReplaceRenderTreeNode(Scaleform::GFx::DisplayObjectBase *, unsigned long long);
	bool SwapRenderTreeNodes(Scaleform::GFx::DisplayObjectBase *, unsigned long long, unsigned long long);
public:
	DisplayList(const Scaleform::GFx::DisplayList &);
	DisplayList();
	~DisplayList();
	void AddDisplayObject(Scaleform::GFx::DisplayObjectBase *, unsigned long long, Scaleform::GFx::DisplayObjectBase *);
	void AddDisplayObject(Scaleform::GFx::DisplayObjectBase *, const Scaleform::GFx::CharPosInfo &, Scaleform::GFx::DisplayObjectBase *, unsigned long);
	void AddEntryAtIndex(Scaleform::GFx::DisplayObjectBase *, unsigned long long, Scaleform::GFx::DisplayObjectBase *);
	void MoveDisplayObject(Scaleform::GFx::DisplayObjectBase *, const Scaleform::GFx::CharPosInfo &);
	void ReplaceDisplayObject(Scaleform::GFx::DisplayObjectBase *, const Scaleform::GFx::CharPosInfo &, Scaleform::GFx::DisplayObjectBase *);
	void ReplaceDisplayObjectAtIndex(Scaleform::GFx::DisplayObjectBase *, unsigned long long, Scaleform::GFx::DisplayObjectBase *);
	bool RemoveDisplayObject(Scaleform::GFx::DisplayObjectBase *, const Scaleform::GFx::DisplayObjectBase *);
	void RemoveDisplayObject(Scaleform::GFx::DisplayObjectBase *, long, Scaleform::GFx::ResourceId);
	void RemoveEntryAtIndex(Scaleform::GFx::DisplayObjectBase *, unsigned long long);
	void Clear(Scaleform::GFx::DisplayObjectBase *);
	bool UnloadAll(Scaleform::GFx::DisplayObjectBase *);
	void MarkAllEntriesForRemoval(Scaleform::GFx::DisplayObjectBase *, unsigned long);
	void UnloadMarkedObjects(Scaleform::GFx::DisplayObjectBase *);
	bool UnloadDisplayObjectAtIndex(Scaleform::GFx::DisplayObjectBase *, unsigned long long);
	void PropagateMouseEvent(const Scaleform::GFx::EventId &);
	void PropagateKeyEvent(const Scaleform::GFx::EventId &, long *);
	long long FindDisplayIndex(const Scaleform::GFx::DisplayObjectBase *);
	unsigned long long FindDisplayIndex(long);
	unsigned long long GetDisplayIndex(long);
	bool SwapDepths(Scaleform::GFx::DisplayObjectBase *, long, long, unsigned long);
	bool SwapEntriesAtIndexes(Scaleform::GFx::DisplayObjectBase *, unsigned long long, unsigned long long);
	long GetLargestDepthInUse();
	unsigned long long GetCount();
	Scaleform::GFx::DisplayObjectBase * GetDisplayObject(unsigned long long);
	Scaleform::GFx::DisplayObjectBase * GetCharacterAtDepth(long, Scaleform::GFx::ResourceId, unsigned long long *);
	Scaleform::GFx::DisplayList::DisplayEntry & GetDisplayEntry(unsigned long long);
	const Scaleform::GFx::DisplayList::DisplayEntry & GetDisplayEntry(unsigned long long);
	Scaleform::GFx::DisplayObjectBase * GetDisplayObjectAtDepth(long, bool *);
	Scaleform::GFx::DisplayObjectBase * GetDisplayObjectAtDepthAndUnmark(Scaleform::GFx::DisplayObjectBase *, long);
	Scaleform::GFx::DisplayObject * GetDisplayObjectByName(const Scaleform::GFx::ASString &, bool);
	void VisitMembers(Scaleform::GFx::DisplayList::MemberVisitor *);
	void ResetCachedCharacter();
	Scaleform::Render::Rect<float> GetBounds(const Scaleform::Render::Matrix2x4<float> &);
	Scaleform::Render::Rect<float> GetRectBounds(const Scaleform::Render::Matrix2x4<float> &);
	void InvalidateDepthMappings();
	unsigned long GetCurModId();
	void CheckConsistency(Scaleform::GFx::DisplayObjectBase *);
	Scaleform::GFx::DisplayList & operator=(const Scaleform::GFx::DisplayList &);
};
class Scaleform::GFx::DisplayList::DisplayEntry
{
	enum FrameFlags
	{
		Flag_MarkedForRemove = 1,
	};
private:
	Scaleform::GFx::DisplayObjectBase * pCharacter; // 0x0
public:
	unsigned long TreeIndex; // 0x8
	unsigned long MaskTreeIndex; // 0xC
	DisplayEntry(const Scaleform::GFx::DisplayList::DisplayEntry &);
	DisplayEntry();
	~DisplayEntry();
	void operator=(const Scaleform::GFx::DisplayList::DisplayEntry &);
	void SetDisplayObject(Scaleform::GFx::DisplayObjectBase *);
	Scaleform::GFx::DisplayObjectBase * GetDisplayObject();
	long GetDepth();
	long GetClipDepth();
	bool IsMarkedForRemove();
	bool CanAdvanceChar();
	void MarkForRemove(bool);
	void ClearMarkForRemove();
	bool IsInRenderTree();
	bool IsMaskedTreeNode();
};
struct Scaleform::GFx::DisplayList::MemberVisitor
{
	~MemberVisitor();
	void Visit(const Scaleform::GFx::ASString &, Scaleform::GFx::InteractiveObject *);
	MemberVisitor(const Scaleform::GFx::DisplayList::MemberVisitor &);
	MemberVisitor();
	Scaleform::GFx::DisplayList::MemberVisitor & operator=(const Scaleform::GFx::DisplayList::MemberVisitor &);
};
class Scaleform::ArrayLH<Scaleform::GFx::DisplayList::DisplayEntry,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DisplayEntry,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DisplayEntry,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::DisplayList::DisplayEntry,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::DisplayList::DisplayEntry,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::DisplayList::DisplayEntry,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::DisplayList::DisplayEntry,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::DisplayList::DisplayEntry,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::DisplayList::DisplayEntry,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::DisplayList::DisplayEntry,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::DisplayList::DisplayEntry,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::DisplayList::DepthToIndexMapElem
{
	long Depth; // 0x0
	unsigned long Index; // 0x4
	DepthToIndexMapElem(long, unsigned long);
	void __dflt_ctor_closure();
};
struct Scaleform::GFx::DisplayList::DepthToIndexContainer :
	Scaleform::NewOverrideBase<322>
{
	Scaleform::ArrayLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2,Scaleform::ArrayDefaultPolicy> Array; // 0x0
	void SetElement(unsigned long long, long, unsigned long);
	void SetSize(unsigned long long);
	const Scaleform::GFx::DisplayList::DepthToIndexMapElem & operator[](unsigned long long);
	Scaleform::GFx::DisplayList::DepthToIndexMapElem & operator[](unsigned long long);
	unsigned long long GetSize();
	DepthToIndexContainer(Scaleform::GFx::DisplayList::DepthToIndexContainer &);
	DepthToIndexContainer(const Scaleform::GFx::DisplayList::DepthToIndexContainer &);
	DepthToIndexContainer();
	~DepthToIndexContainer();
	Scaleform::GFx::DisplayList::DepthToIndexContainer & operator=(Scaleform::GFx::DisplayList::DepthToIndexContainer &);
	Scaleform::GFx::DisplayList::DepthToIndexContainer & operator=(const Scaleform::GFx::DisplayList::DepthToIndexContainer &);
};
class Scaleform::ArrayLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::DisplayList::DepthToIndexMapElem,Scaleform::AllocatorLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::DisplayList::DepthToIndexMapElem,2,Scaleform::ArrayDefaultPolicy>();
};
void Scaleform::GFx::DisplayList::DepthToIndexContainer::SetElement(unsigned long long index, long depth, unsigned long mappedIndex); // 0x1403D0500