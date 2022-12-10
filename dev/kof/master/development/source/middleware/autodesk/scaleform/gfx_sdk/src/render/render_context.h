#pragma once

class Scaleform::Event :
	Scaleform::Waitable,
	Scaleform::AcquireInterface
{
private:
	volatile bool State; // 0x20
	volatile bool Temporary; // 0x21
	Scaleform::Mutex StateMutex; // 0x28
	Scaleform::WaitCondition StateWaitCondition; // 0x50
public:
	Event(const Scaleform::Event &);
	Event(bool, bool);
	virtual ~Event();
	bool Wait(unsigned long);
	void SetEvent();
	void ResetEvent();
	void PulseEvent();
	virtual bool IsSignaled();
	virtual Scaleform::AcquireInterface * GetAcquireInterface();
	virtual bool CanAcquire();
	virtual bool TryAcquire();
	virtual bool TryAcquireCommit();
	virtual bool TryAcquireCancel();
	Scaleform::Event & operator=(const Scaleform::Event &);
	void __dflt_ctor_closure();
};
class Scaleform::Render::ContextImpl::ContextLock :
	Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69>
{
public:
	Scaleform::Lock LockObject; // 0x10
	Scaleform::Render::ContextImpl::Context * pContext; // 0x40
	ContextLock(Scaleform::Render::ContextImpl::ContextLock &);
	ContextLock(const Scaleform::Render::ContextImpl::ContextLock &);
	ContextLock(Scaleform::Render::ContextImpl::Context *);
	virtual ~ContextLock();
	Scaleform::Render::ContextImpl::ContextLock & operator=(Scaleform::Render::ContextImpl::ContextLock &);
	Scaleform::Render::ContextImpl::ContextLock & operator=(const Scaleform::Render::ContextImpl::ContextLock &);
};
class Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 69,
	};
public:
	RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69>(Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69> &);
	RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69>(const Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69> &);
	RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69>();
	virtual ~RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69>();
	Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69> & operator=(Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69> &);
	Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69> & operator=(const Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextLock,69> &);
};
class Scaleform::Render::ContextImpl::RTHandle
{
	enum HandleState
	{
		State_PreCapture = 0,
		State_Valid = 1,
		State_Dead = 2,
	};
	struct HandleData;
private:
	Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> pData; // 0x0
public:
	RTHandle(const Scaleform::Render::ContextImpl::RTHandle &);
	RTHandle(Scaleform::Render::ContextImpl::Entry *);
	RTHandle();
	~RTHandle();
	void operator=(const Scaleform::Render::ContextImpl::RTHandle &);
	bool operator==(const Scaleform::Render::ContextImpl::RTHandle &);
	void Clear();
	Scaleform::Render::ContextImpl::Context * GetContext_Unsafe();
	bool NextCapture(Scaleform::Render::ContextImpl::RenderNotify *);
	Scaleform::Render::ContextImpl::Entry * GetRenderEntry();
};
class Scaleform::RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 69,
	};
public:
	RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69>(Scaleform::RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69> &);
	RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69>(const Scaleform::RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69> &);
	RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69>();
	virtual ~RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69>();
	Scaleform::RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69> & operator=(Scaleform::RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69> &);
	Scaleform::RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69> & operator=(const Scaleform::RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69> &);
};
struct Scaleform::Render::ContextImpl::RTHandle::HandleData :
	Scaleform::RefCountBase<Scaleform::Render::ContextImpl::RTHandle::HandleData,69>,
	Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData>
{
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> pContextLock; // 0x20
	Scaleform::Render::ContextImpl::RTHandle::HandleState State; // 0x28
	Scaleform::Render::ContextImpl::Entry * pEntry; // 0x30
	HandleData(const Scaleform::Render::ContextImpl::RTHandle::HandleData &);
	HandleData(Scaleform::Render::ContextImpl::Entry *, Scaleform::Render::ContextImpl::Context *);
	virtual ~HandleData();
	Scaleform::Render::ContextImpl::RTHandle::HandleData & operator=(const Scaleform::Render::ContextImpl::RTHandle::HandleData &);
};
struct Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData>
{
	Scaleform::Render::ContextImpl::RTHandle::HandleData * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::ContextImpl::RTHandle::HandleData * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData>();
	Scaleform::Render::ContextImpl::RTHandle::HandleData * GetPrev();
	Scaleform::Render::ContextImpl::RTHandle::HandleData * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	void InsertNodeAfter(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	void InsertNodeBefore(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
};
class Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock>
{
protected:
	Scaleform::Render::ContextImpl::ContextLock * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ContextImpl::ContextLock>(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> &);
	Ptr<Scaleform::Render::ContextImpl::ContextLock>(Scaleform::Render::ContextImpl::ContextLock *);
	Ptr<Scaleform::Render::ContextImpl::ContextLock>(Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ContextImpl::ContextLock>(Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextLock>);
	Ptr<Scaleform::Render::ContextImpl::ContextLock>(Scaleform::Render::ContextImpl::ContextLock &);
	Ptr<Scaleform::Render::ContextImpl::ContextLock>();
	~Ptr<Scaleform::Render::ContextImpl::ContextLock>();
	bool operator==(Scaleform::Render::ContextImpl::ContextLock *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> &);
	bool operator!=(Scaleform::Render::ContextImpl::ContextLock *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> &);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & operator=(Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextLock>);
	const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & operator=(Scaleform::Render::ContextImpl::ContextLock &);
	const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & operator=(Scaleform::Render::ContextImpl::ContextLock *);
	const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & operator=(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> &);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & SetPtr(Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextLock>);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & SetPtr(Scaleform::Render::ContextImpl::ContextLock &);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & SetPtr(Scaleform::Render::ContextImpl::ContextLock *);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ContextImpl::ContextLock * & GetRawRef();
	Scaleform::Render::ContextImpl::ContextLock * GetPtr();
	Scaleform::Render::ContextImpl::ContextLock & operator*();
	Scaleform::Render::ContextImpl::ContextLock * operator->();
	Scaleform::Render::ContextImpl::ContextLock * operator class Scaleform::Render::ContextImpl::ContextLock *();
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & Pick(Scaleform::Render::ContextImpl::ContextLock *);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & Pick(Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextLock>);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> & Pick(Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> &);
};
class Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData>
{
protected:
	Scaleform::Render::ContextImpl::RTHandle::HandleData * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData>(const Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> &);
	Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData>(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData>(Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData>(Scaleform::Pickable<Scaleform::Render::ContextImpl::RTHandle::HandleData>);
	Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData>(Scaleform::Render::ContextImpl::RTHandle::HandleData &);
	Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData>();
	~Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData>();
	bool operator==(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> &);
	bool operator!=(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> &);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & operator=(Scaleform::Pickable<Scaleform::Render::ContextImpl::RTHandle::HandleData>);
	const Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & operator=(Scaleform::Render::ContextImpl::RTHandle::HandleData &);
	const Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & operator=(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	const Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & operator=(const Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> &);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & SetPtr(Scaleform::Pickable<Scaleform::Render::ContextImpl::RTHandle::HandleData>);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & SetPtr(Scaleform::Render::ContextImpl::RTHandle::HandleData &);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & SetPtr(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ContextImpl::RTHandle::HandleData * & GetRawRef();
	Scaleform::Render::ContextImpl::RTHandle::HandleData * GetPtr();
	Scaleform::Render::ContextImpl::RTHandle::HandleData & operator*();
	Scaleform::Render::ContextImpl::RTHandle::HandleData * operator->();
	Scaleform::Render::ContextImpl::RTHandle::HandleData * operator struct Scaleform::Render::ContextImpl::RTHandle::HandleData *();
	Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & Pick(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & Pick(Scaleform::Pickable<Scaleform::Render::ContextImpl::RTHandle::HandleData>);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> & Pick(Scaleform::Ptr<Scaleform::Render::ContextImpl::RTHandle::HandleData> &);
};
class Scaleform::Render::ContextImpl::Entry
{
protected:
	Scaleform::Render::ContextImpl::Entry * pPrev; // 0x0
	Scaleform::Render::ContextImpl::EntryChange * pChange; // 0x0
	Scaleform::Render::ContextImpl::Entry * pNext; // 0x8
	unsigned long long RefCount; // 0x8
	Scaleform::Render::ContextImpl::EntryData * pNative; // 0x10
	Scaleform::Render::TreeCacheNode * pRenderer; // 0x18
	Scaleform::Render::ContextImpl::Entry * pParent; // 0x20
	struct PropagateNode;
	Scaleform::Render::ContextImpl::Entry::PropagateNode PNode; // 0x28
	void destroyHelper();
	void addToPropagateImpl();
	Scaleform::Render::ContextImpl::EntryPage * getEntryPage();
	Scaleform::Render::ContextImpl::Snapshot * getSnapshot();
	Scaleform::Render::ContextImpl::Context * getContext();
	void setHasRTHandle();
	void clearHasRTHandle();
	bool hasRTHandle();
	static Scaleform::Render::TreeCacheNode * badRenderData();
	Scaleform::Render::ContextImpl::EntryData * getWritableData(unsigned long);
public:
	const Scaleform::Render::ContextImpl::EntryData * GetReadOnlyDataBase();
	const Scaleform::Render::ContextImpl::EntryData * GetDisplayDataBase();
	void Init(Scaleform::Render::ContextImpl::EntryData *, Scaleform::Render::ContextImpl::EntryChange *);
	Scaleform::Render::ContextImpl::EntryChange * GetChange();
	void SetChange(Scaleform::Render::ContextImpl::EntryChange *);
	Scaleform::Render::ContextImpl::EntryData * GetNative();
	void ClearNative();
	Scaleform::Render::TreeCacheNode * GetRenderData();
	void SetRenderData(Scaleform::Render::TreeCacheNode *);
	Scaleform::Render::TreeCacheNode * GetRenderDataClean();
	void SetRenderDataAsBAD();
	unsigned long CalcDepth();
	void AddToPropagate();
	Scaleform::Render::ContextImpl::Entry * GetParent();
	void SetParent(Scaleform::Render::ContextImpl::Entry *);
	void AddRef();
	void Release();
	Scaleform::Render::ContextImpl::Context * GetContext();
	Entry();
};
struct Scaleform::Render::ContextImpl::Entry::PropagateNode :
	Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode>
{
	Scaleform::Render::ContextImpl::Entry * GetEntry();
	bool IsAdded();
	void Clear();
	PropagateNode();
};
struct Scaleform::ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode>
{
	Scaleform::Render::ContextImpl::Entry::PropagateNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::ContextImpl::Entry::PropagateNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::ContextImpl::Entry::PropagateNode>();
	Scaleform::Render::ContextImpl::Entry::PropagateNode * GetPrev();
	Scaleform::Render::ContextImpl::Entry::PropagateNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void InsertNodeAfter(Scaleform::Render::ContextImpl::Entry::PropagateNode *);
	void InsertNodeBefore(Scaleform::Render::ContextImpl::Entry::PropagateNode *);
};
struct Scaleform::Render::ContextImpl::EntryListAccessor
{
	static void SetPrev(Scaleform::Render::ContextImpl::Entry *, Scaleform::Render::ContextImpl::Entry *);
	static void SetNext(Scaleform::Render::ContextImpl::Entry *, Scaleform::Render::ContextImpl::Entry *);
	static Scaleform::Render::ContextImpl::Entry * GetPrev(Scaleform::Render::ContextImpl::Entry *);
	static const Scaleform::Render::ContextImpl::Entry * GetPrev(const Scaleform::Render::ContextImpl::Entry *);
	static Scaleform::Render::ContextImpl::Entry * GetNext(Scaleform::Render::ContextImpl::Entry *);
	static const Scaleform::Render::ContextImpl::Entry * GetNext(const Scaleform::Render::ContextImpl::Entry *);
};
class Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor>
{
	class ValueType;
public:
	static void SetPrev(Scaleform::Render::ContextImpl::Entry *, Scaleform::Render::ContextImpl::Entry *);
	static void SetNext(Scaleform::Render::ContextImpl::Entry *, Scaleform::Render::ContextImpl::Entry *);
	static Scaleform::Render::ContextImpl::Entry * GetPrev(Scaleform::Render::ContextImpl::Entry *);
	static const Scaleform::Render::ContextImpl::Entry * GetPrev(const Scaleform::Render::ContextImpl::Entry *);
	static Scaleform::Render::ContextImpl::Entry * GetNext(Scaleform::Render::ContextImpl::Entry *);
	static const Scaleform::Render::ContextImpl::Entry * GetNext(const Scaleform::Render::ContextImpl::Entry *);
private:
	List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor>(const Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> &);
public:
	List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor>();
	void Clear();
	Scaleform::Render::ContextImpl::Entry * GetFirst();
	const Scaleform::Render::ContextImpl::Entry * GetFirst();
	Scaleform::Render::ContextImpl::Entry * GetLast();
	const Scaleform::Render::ContextImpl::Entry * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::ContextImpl::Entry *);
	bool IsLast(const Scaleform::Render::ContextImpl::Entry *);
	bool IsNull(const Scaleform::Render::ContextImpl::Entry *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	void PushFront(Scaleform::Render::ContextImpl::Entry *);
	void PushBack(Scaleform::Render::ContextImpl::Entry *);
	void InsertBefore(Scaleform::Render::ContextImpl::Entry *, Scaleform::Render::ContextImpl::Entry *);
	void InsertAfter(Scaleform::Render::ContextImpl::Entry *, Scaleform::Render::ContextImpl::Entry *);
	static void Remove(Scaleform::Render::ContextImpl::Entry *);
	void BringToFront(Scaleform::Render::ContextImpl::Entry *);
	void SendToBack(Scaleform::Render::ContextImpl::Entry *);
	void PushListToFront(Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> &);
private:
	const Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> & operator=(const Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> &);
	Scaleform::Render::ContextImpl::Entry Root; // 0x0
};
class Scaleform::Render::ContextImpl::EntryData
{
	enum EntryType
	{
		ET_Base = 0,
		ET_Root = 1,
		ET_Container = 2,
		ET_Shape = 3,
		ET_Mesh = 4,
		ET_Text = 5,
	};
public:
	EntryData(Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::ContextImpl::EntryData>);
	EntryData(const Scaleform::Render::ContextImpl::EntryData &);
	EntryData(Scaleform::Render::ContextImpl::EntryData::EntryType, unsigned short);
	~EntryData();
	Scaleform::Render::ContextImpl::EntryData::EntryType GetType();
	Scaleform::Render::ContextImpl::EntryData * ConstructCopy(Scaleform::Render::LinearHeap &);
	void CopyTo(void *);
	void ReleaseNodes();
	void Destroy();
	bool PropagateUp(Scaleform::Render::ContextImpl::Entry *);
protected:
	unsigned short Type; // 0x8
public:
	unsigned short Flags; // 0xA
	Scaleform::Render::ContextImpl::EntryData & operator=(const Scaleform::Render::ContextImpl::EntryData &);
	void __dflt_ctor_closure();
};
struct Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::ContextImpl::EntryData>
{
	const Scaleform::Render::ContextImpl::EntryData * pC; // 0x0
	NonlocalCloneArg<Scaleform::Render::ContextImpl::EntryData>(const Scaleform::Render::ContextImpl::EntryData &);
	const Scaleform::Render::ContextImpl::EntryData * operator->();
};
class Scaleform::Render::ContextImpl::EntryChange
{
public:
	Scaleform::Render::ContextImpl::Entry * pNode; // 0x0
	unsigned long ChangeBits; // 0x8
	Scaleform::Render::ContextImpl::EntryChange * pNextFreeNode; // 0x8
	bool IsNewNode();
};
class Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>
{
	struct Page;
private:
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page * pPages; // 0x0
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page * pLast; // 0x8
	void ensureCountAvailable(unsigned long);
	void freePages(bool);
public:
	PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>();
	~PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>();
	Scaleform::Render::ContextImpl::EntryChange * AddItem();
	Scaleform::Render::ContextImpl::EntryChange * AddItems(Scaleform::Render::ContextImpl::EntryChange *, unsigned long);
	Scaleform::Render::ContextImpl::EntryChange * AddItems(unsigned long);
	void Clear(bool);
	bool IsEmpty();
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Page * GetFirstPage();
	class Iterator;
	Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63>::Iterator GetFirst();
};
class Scaleform::Render::ContextImpl::RenderNotify
{
	struct ContextNode;
	class ServiceCommand;
public:
	Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand ServiceCommandInstance; // 0x8
	RenderNotify(Scaleform::Render::ThreadCommandQueue *);
	~RenderNotify();
	Scaleform::Render::ContextImpl::RenderNotify * getThis();
	void NewCapture(Scaleform::Render::ContextImpl::Context *, bool);
	void ContextReleased(Scaleform::Render::ContextImpl::Context *);
	void ServiceQueues();
	void ReleaseAllContextData();
	void EndFrameContextNotify();
	void PushRTServiceQueuesCommand();
	Scaleform::Render::ThreadCommandQueue * GetThreadCommandQueue();
protected:
	void entryChanges(Scaleform::Render::ContextImpl::Context &, Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63> &, bool);
	void entryDestroy(Scaleform::Render::ContextImpl::Entry *);
	void entryFlush(Scaleform::Render::ContextImpl::Entry *);
	Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > ActiveContextSet; // 0x20
	Scaleform::Render::ThreadCommandQueue * pRTCommandQueue; // 0x30
public:
	void __dflt_ctor_closure();
};
struct Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode>
{
	Scaleform::Render::ContextImpl::RenderNotify::ContextNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::ContextImpl::RenderNotify::ContextNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode>();
	Scaleform::Render::ContextImpl::RenderNotify::ContextNode * GetPrev();
	Scaleform::Render::ContextImpl::RenderNotify::ContextNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	void InsertNodeAfter(Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	void InsertNodeBefore(Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
};
struct Scaleform::Render::ContextImpl::RenderNotify::ContextNode :
	Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode>
{
	Scaleform::Render::ContextImpl::Context * pContext; // 0x10
	ContextNode(Scaleform::Render::ContextImpl::Context *);
};
class Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand :
	Scaleform::Render::ThreadCommand
{
private:
	Scaleform::Render::ContextImpl::RenderNotify * pNotify; // 0x10
public:
	ServiceCommand(Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand &);
	ServiceCommand(const Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand &);
	ServiceCommand(Scaleform::Render::ContextImpl::RenderNotify *);
	virtual void Execute();
	virtual ~ServiceCommand();
	Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand & operator=(Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand &);
	Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand & operator=(const Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand &);
};
void Scaleform::Render::ContextImpl::RenderNotify::ServiceCommand::Execute(); // 0x14034FC20
Scaleform::Render::ThreadCommandQueue * Scaleform::Render::ContextImpl::RenderNotify::GetThreadCommandQueue(); // 0x1406B4B30
void Scaleform::Render::ContextImpl::RenderNotify::entryChanges(Scaleform::Render::ContextImpl::Context & __formal, Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63> & __formal, bool __formal); // 0x140313E10
void Scaleform::Render::ContextImpl::RenderNotify::entryDestroy(Scaleform::Render::ContextImpl::Entry * __formal); // 0x140313E30
void Scaleform::Render::ContextImpl::RenderNotify::entryFlush(Scaleform::Render::ContextImpl::Entry * __formal); // 0x140313E50
class Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> >
{
	struct ValueType;
private:
	List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> >(const Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > &);
public:
	List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> >();
	void Clear();
	Scaleform::Render::ContextImpl::RenderNotify::ContextNode * GetFirst();
	Scaleform::Render::ContextImpl::RenderNotify::ContextNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	bool IsLast(const Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	bool IsNull(const Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::ContextImpl::RenderNotify::ContextNode * GetPrev(const Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	static Scaleform::Render::ContextImpl::RenderNotify::ContextNode * GetNext(const Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	void PushFront(Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	void PushBack(Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	static void Remove(Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	void BringToFront(Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	void SendToBack(Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	void PushListToFront(Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > &, Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > &, Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
	void PushListItemsToFront(Scaleform::Render::ContextImpl::RenderNotify::ContextNode *, Scaleform::Render::ContextImpl::RenderNotify::ContextNode *);
private:
	const Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > & operator=(const Scaleform::List<Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::Render::ContextImpl::RenderNotify::ContextNode,Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> > &);
	Scaleform::ListNode<Scaleform::Render::ContextImpl::RenderNotify::ContextNode> Root; // 0x0
};
struct Scaleform::ListNode<Scaleform::Render::ContextImpl::ContextCaptureNotify>
{
	Scaleform::Render::ContextImpl::ContextCaptureNotify * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::ContextImpl::ContextCaptureNotify * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::ContextImpl::ContextCaptureNotify>();
	Scaleform::Render::ContextImpl::ContextCaptureNotify * GetPrev();
	Scaleform::Render::ContextImpl::ContextCaptureNotify * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	void InsertNodeAfter(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	void InsertNodeBefore(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
};
class Scaleform::Render::ContextImpl::ContextCaptureNotify :
	Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2>,
	Scaleform::ListNode<Scaleform::Render::ContextImpl::ContextCaptureNotify>
{
public:
	ContextCaptureNotify(const Scaleform::Render::ContextImpl::ContextCaptureNotify &);
	ContextCaptureNotify();
	virtual ~ContextCaptureNotify();
	void OnCapture();
	void OnNextCapture(Scaleform::Render::ContextImpl::RenderNotify *);
	void OnShutdown(bool);
	Scaleform::Render::ContextImpl::ContextCaptureNotify & operator=(const Scaleform::Render::ContextImpl::ContextCaptureNotify &);
};
class Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2>(Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2> &);
	RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2>(const Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2> &);
	RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2>();
	virtual ~RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2>();
	Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2> &);
	Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::ContextImpl::ContextCaptureNotify,2> &);
};
void Scaleform::Render::ContextImpl::ContextCaptureNotify::OnCapture(); // 0x14002E7C0
class Scaleform::Render::ContextImpl::EntryRef
{
private:
	Scaleform::Render::ContextImpl::EntryPage * pPage; // 0x0
	unsigned long Index; // 0x8
public:
	EntryRef(const Scaleform::Render::ContextImpl::Entry *);
	Scaleform::Render::ContextImpl::EntryPage * GetEntryPage();
	unsigned long GetIndex();
	Scaleform::Render::ContextImpl::Snapshot * GetSnapshot();
	Scaleform::Render::ContextImpl::SnapshotPage * GetSnapshotPage();
	Scaleform::Render::ContextImpl::SnapshotPage * GetDisplaySnapshotPage();
	Scaleform::Render::ContextImpl::EntryData * GetData();
	Scaleform::Render::ContextImpl::EntryData * GetCleanData();
	void SetData_KeepDestroyedBit(Scaleform::Render::ContextImpl::EntryData *);
	Scaleform::Render::ContextImpl::EntryData * GetDisplayData();
	Scaleform::Render::ContextImpl::EntryData * & GetDataRef();
	bool IsDestroyed();
};
struct Scaleform::Render::ContextImpl::EntryPageBase :
	Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPageBase>
{
	unsigned long UseCount; // 0x10
	Scaleform::Render::ContextImpl::Snapshot * pSnapshot; // 0x18
	Scaleform::Render::ContextImpl::SnapshotPage * pSnapshotPage; // 0x20
	Scaleform::Render::ContextImpl::SnapshotPage * pDisplaySnapshotPage; // 0x28
	Scaleform::Render::ContextImpl::SnapshotPage * pTempPage; // 0x30
	EntryPageBase();
};
struct Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPageBase>
{
	Scaleform::Render::ContextImpl::EntryPageBase * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::ContextImpl::EntryPageBase * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::ContextImpl::EntryPageBase>();
	Scaleform::Render::ContextImpl::EntryPageBase * GetPrev();
	Scaleform::Render::ContextImpl::EntryPageBase * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::ContextImpl::EntryPageBase *);
	void InsertNodeAfter(Scaleform::Render::ContextImpl::EntryPageBase *);
	void InsertNodeBefore(Scaleform::Render::ContextImpl::EntryPageBase *);
};
enum Scaleform::Render::ContextImpl::<unnamed-enum-EntryPageAllocAlign>
{
	EntryPageAllocAlign = 4096,
	EntryPageAllocSize = 4088,
	PageEntryCount = 72,
};
struct Scaleform::Render::ContextImpl::EntryPage :
	Scaleform::Render::ContextImpl::EntryPageBase
{
	Scaleform::Render::ContextImpl::Entry Entries[72]; // 0x38
	void AddEntriesToList(Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *);
	void RemoveEntriesFromList(Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> *);
	EntryPage();
};
struct Scaleform::Render::ContextImpl::SnapshotPage :
	Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage>
{
	Scaleform::Render::ContextImpl::EntryPage * pEntryPage; // 0x10
	Scaleform::Render::ContextImpl::SnapshotPage * pOlderSnapshotPage; // 0x18
	Scaleform::Render::ContextImpl::SnapshotPage * pNewerSnapshotPage; // 0x20
	Scaleform::Render::ContextImpl::EntryData * pData[72]; // 0x28
	void MarkAsDestroyed(unsigned long);
	bool IsDestroyed(unsigned long);
	void SetData_KeepDestroyedBit(unsigned long, Scaleform::Render::ContextImpl::EntryData *);
	Scaleform::Render::ContextImpl::EntryData * GetCleanData(unsigned long);
	static Scaleform::Render::ContextImpl::SnapshotPage * Alloc(Scaleform::MemoryHeap *, Scaleform::Render::ContextImpl::EntryPage *);
	static Scaleform::Render::ContextImpl::SnapshotPage * Clone(Scaleform::MemoryHeap *, Scaleform::Render::ContextImpl::SnapshotPage *);
	void Free();
	void ClearEntryPagePointers();
	SnapshotPage();
};
struct Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage>
{
	Scaleform::Render::ContextImpl::SnapshotPage * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::ContextImpl::SnapshotPage * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::ContextImpl::SnapshotPage>();
	Scaleform::Render::ContextImpl::SnapshotPage * GetPrev();
	Scaleform::Render::ContextImpl::SnapshotPage * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::ContextImpl::SnapshotPage *);
	void InsertNodeAfter(Scaleform::Render::ContextImpl::SnapshotPage *);
	void InsertNodeBefore(Scaleform::Render::ContextImpl::SnapshotPage *);
};
class Scaleform::Render::ContextImpl::EntryTable
{
private:
	Scaleform::Render::ContextImpl::Context * pContext; // 0x0
	Scaleform::MemoryHeap * pHeap; // 0x8
	Scaleform::List<Scaleform::Render::ContextImpl::EntryPage,Scaleform::Render::ContextImpl::EntryPageBase,Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPageBase> > EntryPages; // 0x10
	Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> FreeNodes; // 0x20
	Scaleform::Render::ContextImpl::Snapshot * pActiveSnapshot; // 0x58
	bool AllocEntryPage();
	void FreeEntryPage(Scaleform::Render::ContextImpl::EntryPage *);
public:
	EntryTable(Scaleform::Render::ContextImpl::Context *, Scaleform::MemoryHeap *);
	void SetActiveSnapshot(Scaleform::Render::ContextImpl::Snapshot *);
	Scaleform::Render::ContextImpl::Entry * AllocEntry(Scaleform::Render::ContextImpl::EntryData *);
	void FreeEntry(Scaleform::Render::ContextImpl::Entry *);
	void GetActiveSnapshotPages(Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > *);
	void NextSnapshot(Scaleform::Render::ContextImpl::Snapshot *);
};
class Scaleform::List<Scaleform::Render::ContextImpl::EntryPage,Scaleform::Render::ContextImpl::EntryPageBase,Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPageBase> >
{
	struct ValueType;
private:
	List<Scaleform::Render::ContextImpl::EntryPage,Scaleform::Render::ContextImpl::EntryPageBase,Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPageBase> >(const Scaleform::List<Scaleform::Render::ContextImpl::EntryPage,Scaleform::Render::ContextImpl::EntryPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPage> > &);
public:
	List<Scaleform::Render::ContextImpl::EntryPage,Scaleform::Render::ContextImpl::EntryPageBase,Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPageBase> >();
	void Clear();
	Scaleform::Render::ContextImpl::EntryPage * GetFirst();
	Scaleform::Render::ContextImpl::EntryPage * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::ContextImpl::EntryPage *);
	bool IsLast(const Scaleform::Render::ContextImpl::EntryPage *);
	bool IsNull(const Scaleform::Render::ContextImpl::EntryPage *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::ContextImpl::EntryPage * GetPrev(const Scaleform::Render::ContextImpl::EntryPage *);
	static Scaleform::Render::ContextImpl::EntryPage * GetNext(const Scaleform::Render::ContextImpl::EntryPage *);
	void PushFront(Scaleform::Render::ContextImpl::EntryPage *);
	void PushBack(Scaleform::Render::ContextImpl::EntryPage *);
	static void Remove(Scaleform::Render::ContextImpl::EntryPage *);
	void BringToFront(Scaleform::Render::ContextImpl::EntryPage *);
	void SendToBack(Scaleform::Render::ContextImpl::EntryPage *);
	void PushListToFront(Scaleform::List<Scaleform::Render::ContextImpl::EntryPage,Scaleform::Render::ContextImpl::EntryPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPage> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::ContextImpl::EntryPage,Scaleform::Render::ContextImpl::EntryPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPage> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::EntryPage,Scaleform::Render::ContextImpl::EntryPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPage> > &, Scaleform::Render::ContextImpl::EntryPage *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::EntryPage,Scaleform::Render::ContextImpl::EntryPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPage> > &, Scaleform::Render::ContextImpl::EntryPage *);
	void PushListItemsToFront(Scaleform::Render::ContextImpl::EntryPage *, Scaleform::Render::ContextImpl::EntryPage *);
private:
	Scaleform::ListNode<Scaleform::Render::ContextImpl::EntryPageBase> Root; // 0x0
};
class Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> >
{
	struct ValueType;
private:
	List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> >(const Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > &);
public:
	List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> >();
	void Clear();
	Scaleform::Render::ContextImpl::SnapshotPage * GetFirst();
	Scaleform::Render::ContextImpl::SnapshotPage * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::ContextImpl::SnapshotPage *);
	bool IsLast(const Scaleform::Render::ContextImpl::SnapshotPage *);
	bool IsNull(const Scaleform::Render::ContextImpl::SnapshotPage *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::ContextImpl::SnapshotPage * GetPrev(const Scaleform::Render::ContextImpl::SnapshotPage *);
	static Scaleform::Render::ContextImpl::SnapshotPage * GetNext(const Scaleform::Render::ContextImpl::SnapshotPage *);
	void PushFront(Scaleform::Render::ContextImpl::SnapshotPage *);
	void PushBack(Scaleform::Render::ContextImpl::SnapshotPage *);
	static void Remove(Scaleform::Render::ContextImpl::SnapshotPage *);
	void BringToFront(Scaleform::Render::ContextImpl::SnapshotPage *);
	void SendToBack(Scaleform::Render::ContextImpl::SnapshotPage *);
	void PushListToFront(Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > &, Scaleform::Render::ContextImpl::SnapshotPage *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > &, Scaleform::Render::ContextImpl::SnapshotPage *);
	void PushListItemsToFront(Scaleform::Render::ContextImpl::SnapshotPage *, Scaleform::Render::ContextImpl::SnapshotPage *);
private:
	const Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > & operator=(const Scaleform::List<Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::Render::ContextImpl::SnapshotPage,Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> > &);
	Scaleform::ListNode<Scaleform::Render::ContextImpl::SnapshotPage> Root; // 0x0
};
enum Scaleform::Render::ContextImpl::SnapshotState
{
	SS_Active = 0,
	SS_Captured = 1,
	SS_Displaying = 2,
	SS_Finalizing = 3,
	SS_Total_States = 4,
};
class Scaleform::Render::ContextImpl::Context
{
	class Entry;
	class EntryData;
	class EntryChange;
	class ChangeBuffer;
	class RenderNotify;
	class CaptureNotifyListType;
public:
	Context(Scaleform::MemoryHeap *);
	~Context();
	bool HasCapture();
	bool HasChanges();
	void SetDIChangesRequired();
	bool Capture();
	void Shutdown(bool);
	bool IsShutdownComplete();
	void PropagateChangesUp();
	unsigned long long GetFrameId();
	unsigned long long GetFinalizedFrameId();
	void ForceUpdateImages();
	void SetCaptureThreadId(unsigned long);
	void AddCaptureNotify(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	void RemoveCaptureNotify(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	Scaleform::MemoryHeap * GetHeap();
	enum CaptureMode
	{
		Capture_Immediate = 0,
		Capture_OnceAFrame = 1,
	};
	bool NextCapture(Scaleform::Render::ContextImpl::RenderNotify *, Scaleform::Render::ContextImpl::Context::CaptureMode);
	void ShutdownRendering(Scaleform::Render::ContextImpl::RenderNotify *);
private:
	Scaleform::Render::ContextImpl::Context * getThis();
	Scaleform::Lock * getLock();
	void endFrame();
	bool needRenderShutdown();
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long CreateThreadId; // 0x8
	Scaleform::Render::ContextImpl::EntryTable Table; // 0x10
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextLock> pCaptureLock; // 0x70
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> CaptureNotifyList; // 0x78
	Scaleform::Render::ContextImpl::RenderNotify * pRenderer; // 0x90
	bool MultiThreadedUse; // 0x98
	bool NextCaptureCalledInFrame; // 0x99
	volatile bool CaptureCalled; // 0x9A
	volatile bool DIChangesRequired; // 0x9B
	volatile bool ShutdownRequested; // 0x9C
	Scaleform::Event * pShutdownEvent; // 0xA0
	Scaleform::Render::ContextImpl::RenderNotify::ContextNode RenderNode; // 0xA8
	Scaleform::List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> > RTHandleList; // 0xC0
	Scaleform::Render::ContextImpl::Snapshot * pSnapshots[4]; // 0xD0
	unsigned long long SnapshotFrameIds[4]; // 0xF0
	unsigned long long FinalizedFrameId; // 0x110
	Scaleform::Render::ContextImpl::Entry * createEntryHelper(Scaleform::Render::ContextImpl::EntryData *);
	bool nextCapture_LockScope(Scaleform::Render::ContextImpl::Snapshot * *, Scaleform::Render::ContextImpl::RenderNotify *, Scaleform::Render::ContextImpl::Context::CaptureMode);
	void nextCapture_NotifyChanges(Scaleform::Render::ContextImpl::Snapshot *, Scaleform::Render::ContextImpl::RenderNotify *);
	void handleFinalizingSnaphot();
	void shutdownRendering_NoLock();
	void destroySnapshot(Scaleform::Render::ContextImpl::Snapshot *);
	void destroyNativeNodes(Scaleform::List2<Scaleform::Render::ContextImpl::Entry,Scaleform::Render::ContextImpl::EntryListAccessor> &);
	void clearRTHandle(Scaleform::Render::ContextImpl::Entry *);
	void clearRTHandleList();
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>
{
protected:
	Scaleform::Render::ContextImpl::ContextCaptureNotify * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> &);
	Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>(Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>(Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextCaptureNotify>);
	Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>(Scaleform::Render::ContextImpl::ContextCaptureNotify &);
	Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>();
	~Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify>();
	bool operator==(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> &);
	bool operator!=(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> &);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & operator=(Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextCaptureNotify>);
	const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & operator=(Scaleform::Render::ContextImpl::ContextCaptureNotify &);
	const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & operator=(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & operator=(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> &);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & SetPtr(Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextCaptureNotify>);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & SetPtr(Scaleform::Render::ContextImpl::ContextCaptureNotify &);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & SetPtr(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ContextImpl::ContextCaptureNotify * & GetRawRef();
	Scaleform::Render::ContextImpl::ContextCaptureNotify * GetPtr();
	Scaleform::Render::ContextImpl::ContextCaptureNotify & operator*();
	Scaleform::Render::ContextImpl::ContextCaptureNotify * operator->();
	Scaleform::Render::ContextImpl::ContextCaptureNotify * operator class Scaleform::Render::ContextImpl::ContextCaptureNotify *();
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & Pick(Scaleform::Render::ContextImpl::ContextCaptureNotify *);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & Pick(Scaleform::Pickable<Scaleform::Render::ContextImpl::ContextCaptureNotify>);
	Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> & Pick(Scaleform::Ptr<Scaleform::Render::ContextImpl::ContextCaptureNotify> &);
};
Scaleform::Render::TreeContainer * Scaleform::Render::ContextImpl::Context::CreateEntry<Scaleform::Render::TreeContainer>(); // 0x1402DB3D0
Scaleform::Render::TreeShape * Scaleform::Render::ContextImpl::Context::CreateEntry<Scaleform::Render::TreeShape>(); // 0x1402DB440
class Scaleform::List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> >
{
	struct ValueType;
private:
	List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> >(const Scaleform::List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> > &);
public:
	List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> >();
	void Clear();
	Scaleform::Render::ContextImpl::RTHandle::HandleData * GetFirst();
	Scaleform::Render::ContextImpl::RTHandle::HandleData * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	bool IsLast(const Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	bool IsNull(const Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::ContextImpl::RTHandle::HandleData * GetPrev(const Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	static Scaleform::Render::ContextImpl::RTHandle::HandleData * GetNext(const Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	void PushFront(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	void PushBack(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	static void Remove(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	void BringToFront(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	void SendToBack(Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	void PushListToFront(Scaleform::List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> > &, Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> > &, Scaleform::Render::ContextImpl::RTHandle::HandleData *);
	void PushListItemsToFront(Scaleform::Render::ContextImpl::RTHandle::HandleData *, Scaleform::Render::ContextImpl::RTHandle::HandleData *);
private:
	const Scaleform::List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> > & operator=(const Scaleform::List<Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::Render::ContextImpl::RTHandle::HandleData,Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> > &);
	Scaleform::ListNode<Scaleform::Render::ContextImpl::RTHandle::HandleData> Root; // 0x0
};
struct Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> >
{
	const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> * pC; // 0x0
	NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> >(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData> * operator->();
};
struct Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> >
{
	const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> * pC; // 0x0
	NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> >(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> &);
	const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData> * operator->();
};
struct Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> >
{
	const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> * pC; // 0x0
	NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> >(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData> * operator->();
};
struct Scaleform::Render::ContextImpl::NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> >
{
	const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> * pC; // 0x0
	NonlocalCloneArg<Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> >(const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> &);
	const Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData> * operator->();
};
Scaleform::Render::ContextImpl::EntryData * Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>::ConstructCopy(Scaleform::Render::LinearHeap & heap); // 0x1402E0F20
Scaleform::Render::ContextImpl::EntryData * Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData>::ConstructCopy(Scaleform::Render::LinearHeap & heap); // 0x1402E0F90
Scaleform::Render::ContextImpl::EntryData * Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>::ConstructCopy(Scaleform::Render::LinearHeap & heap); // 0x1402E0FD0
Scaleform::Render::ContextImpl::EntryData * Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>::ConstructCopy(Scaleform::Render::LinearHeap & heap); // 0x1402F3370
void Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>::CopyTo(void * pdest); // 0x1402E1060
void Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeRoot::NodeData,Scaleform::Render::TreeContainer::NodeData>::CopyTo(void * pdest); // 0x1402E10A0
void Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeShape::NodeData,Scaleform::Render::TreeNode::NodeData>::CopyTo(void * pdest); // 0x1402E10C0
void Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>::CopyTo(void * pdest); // 0x1402F33B0
void Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeContainer::NodeData,Scaleform::Render::TreeNode::NodeData>::Destroy(); // 0x1402E1590
void Scaleform::Render::ContextImpl::ContextData_ImplMixin<Scaleform::Render::TreeText::NodeData,Scaleform::Render::TreeNode::NodeData>::Destroy(); // 0x1402E1590