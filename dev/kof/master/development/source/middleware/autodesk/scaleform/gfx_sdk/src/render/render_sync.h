#pragma once

enum Scaleform::Render::FenceType
{
	FenceType_Vertex = 0,
	FenceType_Fragment = 1,
};
class Scaleform::Render::FenceImpl :
	Unassignable
{
public:
	FenceImpl(Scaleform::Render::RenderSync *, Scaleform::Render::FenceFrame *, unsigned long long, unsigned long long);
	FenceImpl();
	bool IsPending(Scaleform::Render::FenceType);
	bool WaitFence(Scaleform::Render::FenceType);
	const Scaleform::Render::FenceFrame * GetFrame();
	bool operator>(const Scaleform::Render::FenceImpl &);
	unsigned long long GetAPIHandle();
protected:
	Scaleform::Render::RenderSync * RSContext; // 0x0
	Scaleform::Render::FenceFrame * Parent; // 0x8
	unsigned long long APIHandle; // 0x10
	unsigned long long FenceID; // 0x18
};
class Scaleform::Render::Fence
{
public:
	bool IsPending(Scaleform::Render::FenceType);
	bool WaitFence(Scaleform::Render::FenceType);
	bool operator>(const Scaleform::Render::Fence &);
	const Scaleform::Render::FenceImpl * GetFencePtr();
	Fence(Scaleform::Render::FenceImpl *);
	Fence();
	void AddRef();
	void Release();
private:
	Scaleform::Render::FenceImpl * Data; // 0x0
	Scaleform::Render::RenderSync * RSContext; // 0x0
	unsigned short RefCount; // 0x8
	unsigned char HasData; // 0xA
};
struct Scaleform::ListNode<Scaleform::Render::FenceFrame>
{
	Scaleform::Render::FenceFrame * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::FenceFrame * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::FenceFrame>();
	Scaleform::Render::FenceFrame * GetPrev();
	Scaleform::Render::FenceFrame * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::FenceFrame *);
	void InsertNodeAfter(Scaleform::Render::FenceFrame *);
	void InsertNodeBefore(Scaleform::Render::FenceFrame *);
};
class Scaleform::Render::FenceFrame :
	Scaleform::NewOverrideBase<2>,
	Scaleform::ListNode<Scaleform::Render::FenceFrame>
{
	struct FenceHandleArrayPolicy;
	class FenceHandleArray;
public:
	FenceFrame(const Scaleform::Render::FenceFrame &);
	FenceFrame();
	~FenceFrame();
	const Scaleform::Render::Fence * GetFenceEndFrame();
	bool IsWrappedFrame();
protected:
	Scaleform::Render::RenderSync * RSContext; // 0x10
	bool WrappedAround; // 0x18
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::Fence>,2,Scaleform::ArrayConstPolicy<128,64,1> > Fences; // 0x20
	Scaleform::Ptr<Scaleform::Render::Fence> FrameEndFence; // 0x38
public:
	Scaleform::Render::FenceFrame & operator=(const Scaleform::Render::FenceFrame &);
};
struct Scaleform::ArrayConstPolicy<128,64,1>
{
	struct SelfType;
	ArrayConstPolicy<128,64,1>(const Scaleform::ArrayConstPolicy<128,64,1> &);
	ArrayConstPolicy<128,64,1>();
	unsigned long long GetMinCapacity();
	unsigned long long GetGranularity();
	bool NeverShrinking();
	unsigned long long GetCapacity();
	void SetCapacity(unsigned long long);
private:
	unsigned long long Capacity; // 0x0
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::Fence>,2,Scaleform::ArrayConstPolicy<128,64,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::Render::Fence>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::Fence>,2>,Scaleform::ArrayConstPolicy<128,64,1> > >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::Render::Fence>,2,Scaleform::ArrayConstPolicy<128,64,1> >(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::Fence>,2,Scaleform::ArrayConstPolicy<128,64,1> > &);
	ArrayLH<Scaleform::Ptr<Scaleform::Render::Fence>,2,Scaleform::ArrayConstPolicy<128,64,1> >(const Scaleform::ArrayConstPolicy<128,64,1> &);
	ArrayLH<Scaleform::Ptr<Scaleform::Render::Fence>,2,Scaleform::ArrayConstPolicy<128,64,1> >(long);
	ArrayLH<Scaleform::Ptr<Scaleform::Render::Fence>,2,Scaleform::ArrayConstPolicy<128,64,1> >();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::Fence>,2,Scaleform::ArrayConstPolicy<128,64,1> > & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::Render::Fence>,2,Scaleform::ArrayConstPolicy<128,64,1> > &);
	~ArrayLH<Scaleform::Ptr<Scaleform::Render::Fence>,2,Scaleform::ArrayConstPolicy<128,64,1> >();
};
class Scaleform::Ptr<Scaleform::Render::Fence>
{
protected:
	Scaleform::Render::Fence * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Fence>(const Scaleform::Ptr<Scaleform::Render::Fence> &);
	Ptr<Scaleform::Render::Fence>(Scaleform::Render::Fence *);
	Ptr<Scaleform::Render::Fence>(Scaleform::Ptr<Scaleform::Render::Fence> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Fence>(Scaleform::Pickable<Scaleform::Render::Fence>);
	Ptr<Scaleform::Render::Fence>(Scaleform::Render::Fence &);
	Ptr<Scaleform::Render::Fence>();
	~Ptr<Scaleform::Render::Fence>();
	bool operator==(Scaleform::Render::Fence *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Fence> &);
	bool operator!=(Scaleform::Render::Fence *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Fence> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Fence> &);
	Scaleform::Ptr<Scaleform::Render::Fence> & operator=(Scaleform::Pickable<Scaleform::Render::Fence>);
	const Scaleform::Ptr<Scaleform::Render::Fence> & operator=(Scaleform::Render::Fence &);
	const Scaleform::Ptr<Scaleform::Render::Fence> & operator=(Scaleform::Render::Fence *);
	const Scaleform::Ptr<Scaleform::Render::Fence> & operator=(const Scaleform::Ptr<Scaleform::Render::Fence> &);
	Scaleform::Ptr<Scaleform::Render::Fence> & SetPtr(Scaleform::Pickable<Scaleform::Render::Fence>);
	Scaleform::Ptr<Scaleform::Render::Fence> & SetPtr(Scaleform::Render::Fence &);
	Scaleform::Ptr<Scaleform::Render::Fence> & SetPtr(Scaleform::Render::Fence *);
	Scaleform::Ptr<Scaleform::Render::Fence> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Fence> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Fence * & GetRawRef();
	Scaleform::Render::Fence * GetPtr();
	Scaleform::Render::Fence & operator*();
	Scaleform::Render::Fence * operator->();
	Scaleform::Render::Fence * operator class Scaleform::Render::Fence *();
	Scaleform::Ptr<Scaleform::Render::Fence> & Pick(Scaleform::Render::Fence *);
	Scaleform::Ptr<Scaleform::Render::Fence> & Pick(Scaleform::Pickable<Scaleform::Render::Fence>);
	Scaleform::Ptr<Scaleform::Render::Fence> & Pick(Scaleform::Ptr<Scaleform::Render::Fence> &);
};
class Scaleform::Render::FenceResource
{
public:
	bool IsPending(Scaleform::Render::FenceType);
	bool WaitFence(Scaleform::Render::FenceType);
	bool HasFence();
	Scaleform::Render::Fence * GetFence();
protected:
	Scaleform::Ptr<Scaleform::Render::Fence> GPUFence; // 0x0
public:
	FenceResource(Scaleform::Render::FenceResource &);
	FenceResource(const Scaleform::Render::FenceResource &);
	FenceResource();
	~FenceResource();
	Scaleform::Render::FenceResource & operator=(Scaleform::Render::FenceResource &);
	Scaleform::Render::FenceResource & operator=(const Scaleform::Render::FenceResource &);
};
unsigned long long Scaleform::Render::FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry>::ProcessDestructionList(bool forceWait); // 0x1405F6F90
struct Scaleform::ArrayConstPolicy<8,8,0>
{
	struct SelfType;
	ArrayConstPolicy<8,8,0>(const Scaleform::ArrayConstPolicy<8,8,0> &);
	ArrayConstPolicy<8,8,0>();
	unsigned long long GetMinCapacity();
	unsigned long long GetGranularity();
	bool NeverShrinking();
	unsigned long long GetCapacity();
	void SetCapacity(unsigned long long);
private:
	unsigned long long Capacity; // 0x0
};
class Scaleform::ArrayLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67,Scaleform::ArrayConstPolicy<8,8,0> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0> > >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67,Scaleform::ArrayConstPolicy<8,8,0> >(const Scaleform::ArrayLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67,Scaleform::ArrayConstPolicy<8,8,0> > &);
	ArrayLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67,Scaleform::ArrayConstPolicy<8,8,0> >(const Scaleform::ArrayConstPolicy<8,8,0> &);
	ArrayLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67,Scaleform::ArrayConstPolicy<8,8,0> >(long);
	ArrayLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67,Scaleform::ArrayConstPolicy<8,8,0> >();
	const Scaleform::ArrayLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67,Scaleform::ArrayConstPolicy<8,8,0> > & operator=(const Scaleform::ArrayLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67,Scaleform::ArrayConstPolicy<8,8,0> > &);
	~ArrayLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67,Scaleform::ArrayConstPolicy<8,8,0> >();
};
class Scaleform::Render::RenderSync :
	Scaleform::RefCountBase<Scaleform::Render::RenderSync,2>
{
	enum SubmissionType
	{
		SubmissionType_Invalid = 0,
		SubmissionType_DrawCall = 1,
		SubmissionType_Scene = 2,
		SubmissionType_Count = 3,
	};
public:
	RenderSync();
	virtual ~RenderSync();
	bool SetContext(Scaleform::Render::HAL *);
	void BeginFrame();
	bool EndFrame();
	Scaleform::Render::Fence * InsertFence();
	void KickOffFences(Scaleform::Render::FenceType);
	void AddFenceResource(Scaleform::Ptr<Scaleform::Render::Fence> &);
	void AddFenceResource(Scaleform::Render::FenceResource *);
	void NotifySubmission(Scaleform::Render::RenderSync::SubmissionType);
protected:
	bool IsPending(Scaleform::Render::FenceType, unsigned long long, const Scaleform::Render::FenceFrame &);
	bool WaitFence(Scaleform::Render::FenceType, unsigned long long, const Scaleform::Render::FenceFrame &);
	unsigned long long SetFence();
	bool CheckWraparound(unsigned long long);
	void AddRefFence(unsigned long long);
	void ReleaseFence(unsigned long long);
	void ReleaseOutstandingFrames();
	static const unsigned long long INVALID_FENCE_ID; // 0xFFFFFFFFFFFFFFFF
	Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > FenceFrames; // 0x10
	Scaleform::ListAllocLH<Scaleform::Render::FenceFrame,127,2> FenceFrameAlloc; // 0x20
	Scaleform::ListAllocLH_POD<Scaleform::Render::FenceImpl,127,2> FenceImplAlloc; // 0x48
	Scaleform::ListAllocLH<Scaleform::Render::Fence,127,2> FenceAlloc; // 0x70
	Scaleform::Ptr<Scaleform::Render::Fence> SubmissionDummyFence; // 0x98
	unsigned long long NextFenceID; // 0xA0
	unsigned long OutstandingFrames; // 0xA8
	bool WithinFrame; // 0xAC
	Scaleform::Render::RenderSync::SubmissionType SubmissionUpdateMethod; // 0xB0
	Scaleform::Render::HAL * pHAL; // 0xB8
	Scaleform::Render::MemoryManager * pMemoryManager; // 0xC0
};
class Scaleform::RefCountBase<Scaleform::Render::RenderSync,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::RenderSync,2>(Scaleform::RefCountBase<Scaleform::Render::RenderSync,2> &);
	RefCountBase<Scaleform::Render::RenderSync,2>(const Scaleform::RefCountBase<Scaleform::Render::RenderSync,2> &);
	RefCountBase<Scaleform::Render::RenderSync,2>();
	virtual ~RefCountBase<Scaleform::Render::RenderSync,2>();
	Scaleform::RefCountBase<Scaleform::Render::RenderSync,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::RenderSync,2> &);
	Scaleform::RefCountBase<Scaleform::Render::RenderSync,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::RenderSync,2> &);
};
bool Scaleform::Render::RenderSync::CheckWraparound(unsigned long long handle); // 0x14004BBE0
void Scaleform::Render::RenderSync::AddRefFence(unsigned long long apiHandle); // 0x14002E7C0
class Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> >
{
	class ValueType;
private:
	List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> >(const Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > &);
public:
	List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> >();
	void Clear();
	Scaleform::Render::FenceFrame * GetFirst();
	Scaleform::Render::FenceFrame * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::FenceFrame *);
	bool IsLast(const Scaleform::Render::FenceFrame *);
	bool IsNull(const Scaleform::Render::FenceFrame *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::FenceFrame * GetPrev(const Scaleform::Render::FenceFrame *);
	static Scaleform::Render::FenceFrame * GetNext(const Scaleform::Render::FenceFrame *);
	void PushFront(Scaleform::Render::FenceFrame *);
	void PushBack(Scaleform::Render::FenceFrame *);
	static void Remove(Scaleform::Render::FenceFrame *);
	void BringToFront(Scaleform::Render::FenceFrame *);
	void SendToBack(Scaleform::Render::FenceFrame *);
	void PushListToFront(Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > &, Scaleform::Render::FenceFrame *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > &, Scaleform::Render::FenceFrame *);
	void PushListItemsToFront(Scaleform::Render::FenceFrame *, Scaleform::Render::FenceFrame *);
private:
	const Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > & operator=(const Scaleform::List<Scaleform::Render::FenceFrame,Scaleform::Render::FenceFrame,Scaleform::ListNode<Scaleform::Render::FenceFrame> > &);
	Scaleform::ListNode<Scaleform::Render::FenceFrame> Root; // 0x0
};
class Scaleform::ListAllocLH<Scaleform::Render::FenceFrame,127,2> :
	Scaleform::ListAllocBase<Scaleform::Render::FenceFrame,127,Scaleform::AllocatorLH<Scaleform::Render::FenceFrame,2> >
{
	class SelfType;
	class ValueType;
	struct AllocatorType;
public:
	ListAllocLH<Scaleform::Render::FenceFrame,127,2>();
	~ListAllocLH<Scaleform::Render::FenceFrame,127,2>();
};
class Scaleform::ListAllocLH_POD<Scaleform::Render::FenceImpl,127,2> :
	Scaleform::ListAllocBase<Scaleform::Render::FenceImpl,127,Scaleform::AllocatorLH_POD<Scaleform::Render::FenceImpl,2> >
{
	class SelfType;
	class ValueType;
	struct AllocatorType;
public:
	ListAllocLH_POD<Scaleform::Render::FenceImpl,127,2>();
	~ListAllocLH_POD<Scaleform::Render::FenceImpl,127,2>();
};
class Scaleform::ListAllocLH<Scaleform::Render::Fence,127,2> :
	Scaleform::ListAllocBase<Scaleform::Render::Fence,127,Scaleform::AllocatorLH<Scaleform::Render::Fence,2> >
{
	class SelfType;
	class ValueType;
	struct AllocatorType;
public:
	ListAllocLH<Scaleform::Render::Fence,127,2>();
	~ListAllocLH<Scaleform::Render::Fence,127,2>();
};
class Scaleform::RefCountBase<Scaleform::Render::FenceWrapper,65> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 65,
	};
public:
	RefCountBase<Scaleform::Render::FenceWrapper,65>(Scaleform::RefCountBase<Scaleform::Render::FenceWrapper,65> &);
	RefCountBase<Scaleform::Render::FenceWrapper,65>(const Scaleform::RefCountBase<Scaleform::Render::FenceWrapper,65> &);
	RefCountBase<Scaleform::Render::FenceWrapper,65>();
	virtual ~RefCountBase<Scaleform::Render::FenceWrapper,65>();
	Scaleform::RefCountBase<Scaleform::Render::FenceWrapper,65> & operator=(Scaleform::RefCountBase<Scaleform::Render::FenceWrapper,65> &);
	Scaleform::RefCountBase<Scaleform::Render::FenceWrapper,65> & operator=(const Scaleform::RefCountBase<Scaleform::Render::FenceWrapper,65> &);
};
struct Scaleform::ListNode<Scaleform::Render::FenceWrapper>
{
	Scaleform::Render::FenceWrapper * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::FenceWrapper * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::FenceWrapper>();
	Scaleform::Render::FenceWrapper * GetPrev();
	Scaleform::Render::FenceWrapper * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::FenceWrapper *);
	void InsertNodeAfter(Scaleform::Render::FenceWrapper *);
	void InsertNodeBefore(Scaleform::Render::FenceWrapper *);
};
class Scaleform::Render::FenceWrapper :
	Scaleform::ListNode<Scaleform::Render::FenceWrapper>,
	Scaleform::RefCountBase<Scaleform::Render::FenceWrapper,65>
{
public:
	FenceWrapper(Scaleform::Render::FenceWrapper &);
	FenceWrapper(const Scaleform::Render::FenceWrapper &);
	FenceWrapper();
	virtual ~FenceWrapper();
	Scaleform::Render::FenceWrapper & operator=(Scaleform::Render::FenceWrapper &);
	Scaleform::Render::FenceWrapper & operator=(const Scaleform::Render::FenceWrapper &);
};
class Scaleform::Render::FenceWrapperList
{
public:
	FenceWrapperList(unsigned long);
	~FenceWrapperList();
	void Initialize();
	void Shutdown();
	Scaleform::Render::FenceWrapper * Alloc();
	void Free(Scaleform::Render::FenceWrapper *);
protected:
	Scaleform::Render::FenceWrapper * allocateWrapper();
	Scaleform::List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> > WrapperList; // 0x8
	unsigned long ReservePoolSize; // 0x18
	unsigned long AllocatedWrappers; // 0x1C
	bool Initialized; // 0x20
public:
	void __dflt_ctor_closure();
};
class Scaleform::List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> >
{
	class ValueType;
private:
	List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> >(const Scaleform::List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> > &);
public:
	List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> >();
	void Clear();
	Scaleform::Render::FenceWrapper * GetFirst();
	Scaleform::Render::FenceWrapper * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::FenceWrapper *);
	bool IsLast(const Scaleform::Render::FenceWrapper *);
	bool IsNull(const Scaleform::Render::FenceWrapper *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::FenceWrapper * GetPrev(const Scaleform::Render::FenceWrapper *);
	static Scaleform::Render::FenceWrapper * GetNext(const Scaleform::Render::FenceWrapper *);
	void PushFront(Scaleform::Render::FenceWrapper *);
	void PushBack(Scaleform::Render::FenceWrapper *);
	static void Remove(Scaleform::Render::FenceWrapper *);
	void BringToFront(Scaleform::Render::FenceWrapper *);
	void SendToBack(Scaleform::Render::FenceWrapper *);
	void PushListToFront(Scaleform::List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> > &, Scaleform::Render::FenceWrapper *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> > &, Scaleform::Render::FenceWrapper *);
	void PushListItemsToFront(Scaleform::Render::FenceWrapper *, Scaleform::Render::FenceWrapper *);
private:
	const Scaleform::List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> > & operator=(const Scaleform::List<Scaleform::Render::FenceWrapper,Scaleform::Render::FenceWrapper,Scaleform::ListNode<Scaleform::Render::FenceWrapper> > &);
	Scaleform::ListNode<Scaleform::Render::FenceWrapper> Root; // 0x0
};