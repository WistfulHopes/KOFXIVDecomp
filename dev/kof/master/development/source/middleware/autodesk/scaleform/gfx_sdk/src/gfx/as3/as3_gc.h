#pragma once

class Scaleform::NewOverrideBase<328>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 328,
	};
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
};
void Scaleform::GFx::AS3::RefCountBaseGC<328>::ReleaseCall(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, const Scaleform::GFx::AS3::RefCountBaseGC<328> * * pchild); // 0x1404A1470
void Scaleform::GFx::AS3::RefCountBaseGC<328>::MarkInCycleCall(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, const Scaleform::GFx::AS3::RefCountBaseGC<328> * * pchild); // 0x140493330
void Scaleform::GFx::AS3::RefCountBaseGC<328>::ScanInUseCall(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, const Scaleform::GFx::AS3::RefCountBaseGC<328> * * pchild); // 0x1404A5860
void Scaleform::GFx::AS3::RefCountBaseGC<328>::ScanTempInUseCall(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, const Scaleform::GFx::AS3::RefCountBaseGC<328> * * pchild); // 0x1404A58E0
void Scaleform::GFx::AS3::RefCountBaseGC<328>::DisableCall(Scaleform::GFx::AS3::RefCountCollector<328> * __formal, const Scaleform::GFx::AS3::RefCountBaseGC<328> * * pchild); // 0x140471C00
void Scaleform::GFx::AS3::RefCountBaseGC<328>::Finalize_GC(); // 0x14002E7C0
void Scaleform::GFx::AS3::RefCountBaseGC<328>::Destroy(); // 0x140439BC0
class Scaleform::RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,328>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 328,
	};
public:
	RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328>(Scaleform::RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328> &);
	RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328>(const Scaleform::RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328> &);
	RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328>();
	virtual ~RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328>();
	Scaleform::RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328> & operator=(Scaleform::RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328> &);
	Scaleform::RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328> &);
};
class Scaleform::Ptr<Scaleform::RefCountNTSImpl>
{
protected:
	Scaleform::RefCountNTSImpl * pObject; // 0x0
public:
	Ptr<Scaleform::RefCountNTSImpl>(const Scaleform::Ptr<Scaleform::RefCountNTSImpl> &);
	Ptr<Scaleform::RefCountNTSImpl>(Scaleform::RefCountNTSImpl *);
	Ptr<Scaleform::RefCountNTSImpl>(Scaleform::Ptr<Scaleform::RefCountNTSImpl> &, Scaleform::PickType);
	Ptr<Scaleform::RefCountNTSImpl>(Scaleform::Pickable<Scaleform::RefCountNTSImpl>);
	Ptr<Scaleform::RefCountNTSImpl>(Scaleform::RefCountNTSImpl &);
	Ptr<Scaleform::RefCountNTSImpl>();
	~Ptr<Scaleform::RefCountNTSImpl>();
	bool operator==(Scaleform::RefCountNTSImpl *);
	bool operator==(const Scaleform::Ptr<Scaleform::RefCountNTSImpl> &);
	bool operator!=(Scaleform::RefCountNTSImpl *);
	bool operator!=(const Scaleform::Ptr<Scaleform::RefCountNTSImpl> &);
	bool operator<(const Scaleform::Ptr<Scaleform::RefCountNTSImpl> &);
	Scaleform::Ptr<Scaleform::RefCountNTSImpl> & operator=(Scaleform::Pickable<Scaleform::RefCountNTSImpl>);
	const Scaleform::Ptr<Scaleform::RefCountNTSImpl> & operator=(Scaleform::RefCountNTSImpl &);
	const Scaleform::Ptr<Scaleform::RefCountNTSImpl> & operator=(Scaleform::RefCountNTSImpl *);
	const Scaleform::Ptr<Scaleform::RefCountNTSImpl> & operator=(const Scaleform::Ptr<Scaleform::RefCountNTSImpl> &);
	Scaleform::Ptr<Scaleform::RefCountNTSImpl> & SetPtr(Scaleform::Pickable<Scaleform::RefCountNTSImpl>);
	Scaleform::Ptr<Scaleform::RefCountNTSImpl> & SetPtr(Scaleform::RefCountNTSImpl &);
	Scaleform::Ptr<Scaleform::RefCountNTSImpl> & SetPtr(Scaleform::RefCountNTSImpl *);
	Scaleform::Ptr<Scaleform::RefCountNTSImpl> & SetPtr(const Scaleform::Ptr<Scaleform::RefCountNTSImpl> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::RefCountNTSImpl * & GetRawRef();
	Scaleform::RefCountNTSImpl * GetPtr();
	Scaleform::RefCountNTSImpl & operator*();
	Scaleform::RefCountNTSImpl * operator->();
	Scaleform::RefCountNTSImpl * operator class Scaleform::RefCountNTSImpl *();
	Scaleform::Ptr<Scaleform::RefCountNTSImpl> & Pick(Scaleform::RefCountNTSImpl *);
	Scaleform::Ptr<Scaleform::RefCountNTSImpl> & Pick(Scaleform::Pickable<Scaleform::RefCountNTSImpl>);
	Scaleform::Ptr<Scaleform::RefCountNTSImpl> & Pick(Scaleform::Ptr<Scaleform::RefCountNTSImpl> &);
};
class Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase>
{
	class ObjType;
	class SelfType;
public:
	SPtr<Scaleform::GFx::AS3::GASRefCountBase>(Scaleform::Pickable<Scaleform::GFx::AS3::GASRefCountBase>);
	SPtr<Scaleform::GFx::AS3::GASRefCountBase>(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> &, Scaleform::PickType);
	SPtr<Scaleform::GFx::AS3::GASRefCountBase>(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> &);
	SPtr<Scaleform::GFx::AS3::GASRefCountBase>(Scaleform::GFx::AS3::GASRefCountBase *);
	~SPtr<Scaleform::GFx::AS3::GASRefCountBase>();
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::GASRefCountBase>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> & operator=(Scaleform::GFx::AS3::GASRefCountBase *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> & operator=(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> & Pick(Scaleform::GFx::AS3::GASRefCountBase *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::GASRefCountBase>);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> & Pick(Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> &);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> & SetPtr(Scaleform::GFx::AS3::GASRefCountBase *);
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> & Set(const Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> &);
	Scaleform::GFx::AS3::GASRefCountBase * operator->();
	Scaleform::GFx::AS3::GASRefCountBase & operator*();
	Scaleform::GFx::AS3::GASRefCountBase * & GetRawRef();
	Scaleform::GFx::AS3::GASRefCountBase * * GetRawPtr();
	Scaleform::GFx::AS3::GASRefCountBase * GetPtr();
	Scaleform::GFx::AS3::GASRefCountBase * operator class Scaleform::GFx::AS3::GASRefCountBase *();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::GASRefCountBase * pObject; // 0x0
public:
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,328>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 328,
	};
public:
	RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328>(Scaleform::RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328> &);
	RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328>(const Scaleform::RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328> &);
	RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328>();
	virtual ~RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328>();
	Scaleform::RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328> & operator=(Scaleform::RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328> &);
	Scaleform::RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328> & operator=(const Scaleform::RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328> &);
};
class Scaleform::GFx::AS3::RefCountBaseGC<328> :
	Scaleform::NewOverrideBase<328>
{
	class Collector;
	enum OperationGC
	{
		Operation_Release = 0,
		Operation_MarkInCycle = 1,
		Operation_ScanInUse = 2,
		Operation_Disable = 3,
		Operation_ScanTempInUse = 4,
		Operation_Collect = 5,
	};
	typedef void(*GcOp)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *);
	enum Generation
	{
		Gen_NewBorn = 0,
		Gen_Young = 1,
		Gen_Old = 2,
		Gen__Reserved = 3,
		Gen_Max = 2,
	};
	enum <unnamed-enum-Flag_InRootList>
	{
		Flag_InRootList = -2147483648,
		Mask_State = 7,
		Shift_State = 28,
		Flag_DeleteLast = 134217728,
		Flag_HasWeakRef = 67108864,
		Flag_HasFinalize = 33554432,
		Flag_InList = 16777216,
		Flag_DelayedRelease = 8388608,
		Flag_ToBeFinalized = 4194304,
		Mask_RefCount = 4194303,
	};
	enum States
	{
		State_InUse = 0,
		State_InCycle = 1,
		State_Garbage = 2,
		State_Root = 3,
		State_Removed = 4,
		State_TempInUse = 5,
	};
private:
	Scaleform::GFx::AS3::RefCountCollector<328> * _pRCC; // 0x8
	unsigned long long pRCCRaw; // 0x8
	const Scaleform::GFx::AS3::RefCountBaseGC<328> * pNext; // 0x10
	const Scaleform::GFx::AS3::RefCountBaseGC<328> * pNextRoot; // 0x10
	const Scaleform::GFx::AS3::RefCountBaseGC<328> * pPrev; // 0x18
	const Scaleform::GFx::AS3::RefCountBaseGC<328> * pPrevRoot; // 0x18
	unsigned long RefCount; // 0x20
	Scaleform::GFx::AS3::RefCountBaseGC<328>::Generation GetGen();
	void SetGen(Scaleform::GFx::AS3::RefCountBaseGC<328>::Generation);
	void UpgradeGen();
	void Increment();
	unsigned long Decrement();
	void MarkInCycle(Scaleform::GFx::AS3::RefCountCollector<328> *);
public:
	static void ReleaseCall(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *);
	static void MarkInCycleCall(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *);
	static void ScanInUseCall(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *);
	static void ScanTempInUseCall(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *);
	static void DisableCall(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *);
private:
	void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	void ExecuteForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, Scaleform::GFx::AS3::RefCountBaseGC<328>::OperationGC);
	bool IsRefCntZero();
	void SetInList();
	void ClearInList(Scaleform::GFx::AS3::RefCountCollector<328> *);
	bool IsInList();
	void SetInRootList();
	void ClearInRootList();
	bool IsInRootList();
	void SetDelayedRelease();
	void ClearDelayedRelease();
	bool IsDelayedRelease();
	bool HasFinalize();
	void ClearFinalize();
	bool ToBeFinalized();
	void MarkToBeFinalized();
	void SetState(Scaleform::GFx::AS3::RefCountBaseGC<328>::States);
	Scaleform::GFx::AS3::RefCountBaseGC<328>::States GetState();
	bool IsInState(Scaleform::GFx::AS3::RefCountBaseGC<328>::States);
	void Free_GC(Scaleform::GFx::AS3::RefCountCollector<328> *);
	void RemoveFromList();
	void ReleaseInternal();
	void FreeThis(Scaleform::GFx::AS3::RefCountCollector<328> *);
	RefCountBaseGC<328>(const Scaleform::GFx::AS3::RefCountBaseGC<328> &);
public:
	RefCountBaseGC<328>(Scaleform::GFx::AS3::RefCountCollector<328> *);
	Scaleform::GFx::AS3::RefCountCollector<328> * GetCollector();
	void AddRef_Unsafe();
	void Release_Unsafe();
	bool HasWeakRef();
	bool IsDeleteLast();
	unsigned long GetRefCount();
protected:
	~RefCountBaseGC<328>();
	void Finalize_GC();
	void Destroy();
	void SetWeakRef();
	void SetNotWeakRef();
	void SetDeleteLast();
	void SetHasFinalize();
private:
	void AddRef();
	void Release();
	Scaleform::GFx::AS3::RefCountBaseGC<328> & operator=(const Scaleform::GFx::AS3::RefCountBaseGC<328> &);
};
struct Scaleform::GFx::AS3::RefCountCollector<328>::RootDesc
{
	const Scaleform::GFx::AS3::RefCountBaseGC<328> * pRootHead; // 0x0
	unsigned long nRoots; // 0x8
};
class Scaleform::GFx::AS3::RefCountCollector<328>::ListRootNode :
	Scaleform::GFx::AS3::RefCountBaseGC<328>
{
public:
	ListRootNode(Scaleform::GFx::AS3::RefCountCollector<328>::ListRootNode &);
	ListRootNode(const Scaleform::GFx::AS3::RefCountCollector<328>::ListRootNode &);
	ListRootNode();
	virtual void ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> *, void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	virtual ~ListRootNode();
	Scaleform::GFx::AS3::RefCountCollector<328>::ListRootNode & operator=(Scaleform::GFx::AS3::RefCountCollector<328>::ListRootNode &);
	Scaleform::GFx::AS3::RefCountCollector<328>::ListRootNode & operator=(const Scaleform::GFx::AS3::RefCountCollector<328>::ListRootNode &);
};
class Scaleform::Hash<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> > >
{
public:
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long, const char *, long);
	static void * operator new(unsigned long long, long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, const char *, long);
	static void * operator new(unsigned long long, const char *, long);
	static void * operator new(unsigned long long, Scaleform::MemAddressStub *);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *, long);
	static void * operator new(unsigned long long, Scaleform::MemoryHeap *);
	static void * operator new(unsigned long long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, const char *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *, long);
	static void operator delete(void *, Scaleform::MemAddressStub *);
	static void operator delete(void *, Scaleform::MemoryHeap *, long, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, const char *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *, long);
	static void operator delete(void *, Scaleform::MemoryHeap *);
	static void operator delete(void *, long, const char *, long);
	static void operator delete(void *, const char *, long);
	static void operator delete(void *);
	typedef Scaleform::GFx::AS3::WeakProxy ValueType;
	class SelfType;
	Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> > mHash; // 0x0
	Hash<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCo(const Scaleform::Hash<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> > > &);
	Hash<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCo(void *, long);
	Hash<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCo(void *);
	Hash<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCo(long);
	Hash<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCo();
	~Hash<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefC();
	void operator=(const Scaleform::Hash<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> > > &);
	void Clear();
	bool IsEmpty();
	void Set(Scaleform::GFx::AS3::GASRefCountBase * &, Scaleform::GFx::AS3::WeakProxy * &);
	void Add(Scaleform::GFx::AS3::GASRefCountBase * &, Scaleform::GFx::AS3::WeakProxy * &);
	bool Remove(Scaleform::GFx::AS3::GASRefCountBase * &);
	Scaleform::GFx::AS3::WeakProxy * * Get(Scaleform::GFx::AS3::GASRefCountBase * &);
	Scaleform::GFx::AS3::WeakProxy * * Get(Scaleform::GFx::AS3::GASRefCountBase * &);
	bool Get(Scaleform::GFx::AS3::GASRefCountBase * &, Scaleform::GFx::AS3::WeakProxy * *);
	unsigned long long GetSize();
	void Resize(unsigned long long);
	void SetCapacity(unsigned long long);
	struct ConstIterator;
	struct Iterator;
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> >::ConstIterator Begin();
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> >::Iterator Begin();
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> >::ConstIterator End();
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> >::Iterator End();
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> >::ConstIterator Find(Scaleform::GFx::AS3::GASRefCountBase * &);
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> >::Iterator Find(Scaleform::GFx::AS3::GASRefCountBase * &);
};
struct Scaleform::GFx::AS3::PtrReleaseProxy<328> :
	Scaleform::RefCountBase<Scaleform::GFx::AS3::PtrReleaseProxy<328>,328>
{
	Scaleform::Ptr<Scaleform::RefCountNTSImpl> Data; // 0x10
	Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::GASRefCountBase> Data2; // 0x18
	Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > pNext; // 0x20
	PtrReleaseProxy<328>(Scaleform::GFx::AS3::PtrReleaseProxy<328> &);
	PtrReleaseProxy<328>(const Scaleform::GFx::AS3::PtrReleaseProxy<328> &);
	PtrReleaseProxy<328>();
	virtual ~PtrReleaseProxy<328>();
	Scaleform::GFx::AS3::PtrReleaseProxy<328> & operator=(Scaleform::GFx::AS3::PtrReleaseProxy<328> &);
	Scaleform::GFx::AS3::PtrReleaseProxy<328> & operator=(const Scaleform::GFx::AS3::PtrReleaseProxy<328> &);
};
class Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> >
{
protected:
	Scaleform::GFx::AS3::PtrReleaseProxy<328> * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> >(const Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > &);
	Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> >(Scaleform::GFx::AS3::PtrReleaseProxy<328> *);
	Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> >(Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > &, Scaleform::PickType);
	Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> >(Scaleform::Pickable<Scaleform::GFx::AS3::PtrReleaseProxy<328> >);
	Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> >(Scaleform::GFx::AS3::PtrReleaseProxy<328> &);
	Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> >();
	~Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> >();
	bool operator==(Scaleform::GFx::AS3::PtrReleaseProxy<328> *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > &);
	bool operator!=(Scaleform::GFx::AS3::PtrReleaseProxy<328> *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > &);
	Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & operator=(Scaleform::Pickable<Scaleform::GFx::AS3::PtrReleaseProxy<328> >);
	const Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & operator=(Scaleform::GFx::AS3::PtrReleaseProxy<328> &);
	const Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & operator=(Scaleform::GFx::AS3::PtrReleaseProxy<328> *);
	const Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & operator=(const Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > &);
	Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & SetPtr(Scaleform::Pickable<Scaleform::GFx::AS3::PtrReleaseProxy<328> >);
	Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & SetPtr(Scaleform::GFx::AS3::PtrReleaseProxy<328> &);
	Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & SetPtr(Scaleform::GFx::AS3::PtrReleaseProxy<328> *);
	Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & SetPtr(const Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::AS3::PtrReleaseProxy<328> * & GetRawRef();
	Scaleform::GFx::AS3::PtrReleaseProxy<328> * GetPtr();
	Scaleform::GFx::AS3::PtrReleaseProxy<328> & operator*();
	Scaleform::GFx::AS3::PtrReleaseProxy<328> * operator->();
	Scaleform::GFx::AS3::PtrReleaseProxy<328> * operator struct Scaleform::GFx::AS3::PtrReleaseProxy<328> *();
	Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & Pick(Scaleform::GFx::AS3::PtrReleaseProxy<328> *);
	Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & Pick(Scaleform::Pickable<Scaleform::GFx::AS3::PtrReleaseProxy<328> >);
	Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > & Pick(Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > &);
};
struct Scaleform::GFx::AS3::RefCountCollector<328>::Stats
{
	Scaleform::Ptr<Scaleform::AmpStats> AdvanceStats; // 0x0
	unsigned long RootsNumber; // 0x8
	unsigned long RootsFreedTotal; // 0xC
	unsigned long ObjectsIteratedNumber; // 0x10
	unsigned long ObjectsFreedTotal; // 0x14
	unsigned long GensNumber; // 0x18
	Stats(Scaleform::GFx::AS3::RefCountCollector<328>::Stats &);
	Stats(const Scaleform::GFx::AS3::RefCountCollector<328>::Stats &);
	Stats(Scaleform::AmpStats *);
	void ResetStats();
	~Stats();
	Scaleform::GFx::AS3::RefCountCollector<328>::Stats & operator=(Scaleform::GFx::AS3::RefCountCollector<328>::Stats &);
	Scaleform::GFx::AS3::RefCountCollector<328>::Stats & operator=(const Scaleform::GFx::AS3::RefCountCollector<328>::Stats &);
};
class Scaleform::Ptr<Scaleform::AmpStats>
{
protected:
	Scaleform::AmpStats * pObject; // 0x0
public:
	Ptr<Scaleform::AmpStats>(const Scaleform::Ptr<Scaleform::AmpStats> &);
	Ptr<Scaleform::AmpStats>(Scaleform::AmpStats *);
	Ptr<Scaleform::AmpStats>(Scaleform::Ptr<Scaleform::AmpStats> &, Scaleform::PickType);
	Ptr<Scaleform::AmpStats>(Scaleform::Pickable<Scaleform::AmpStats>);
	Ptr<Scaleform::AmpStats>(Scaleform::AmpStats &);
	Ptr<Scaleform::AmpStats>();
	~Ptr<Scaleform::AmpStats>();
	bool operator==(Scaleform::AmpStats *);
	bool operator==(const Scaleform::Ptr<Scaleform::AmpStats> &);
	bool operator!=(Scaleform::AmpStats *);
	bool operator!=(const Scaleform::Ptr<Scaleform::AmpStats> &);
	bool operator<(const Scaleform::Ptr<Scaleform::AmpStats> &);
	Scaleform::Ptr<Scaleform::AmpStats> & operator=(Scaleform::Pickable<Scaleform::AmpStats>);
	const Scaleform::Ptr<Scaleform::AmpStats> & operator=(Scaleform::AmpStats &);
	const Scaleform::Ptr<Scaleform::AmpStats> & operator=(Scaleform::AmpStats *);
	const Scaleform::Ptr<Scaleform::AmpStats> & operator=(const Scaleform::Ptr<Scaleform::AmpStats> &);
	Scaleform::Ptr<Scaleform::AmpStats> & SetPtr(Scaleform::Pickable<Scaleform::AmpStats>);
	Scaleform::Ptr<Scaleform::AmpStats> & SetPtr(Scaleform::AmpStats &);
	Scaleform::Ptr<Scaleform::AmpStats> & SetPtr(Scaleform::AmpStats *);
	Scaleform::Ptr<Scaleform::AmpStats> & SetPtr(const Scaleform::Ptr<Scaleform::AmpStats> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::AmpStats * & GetRawRef();
	Scaleform::AmpStats * GetPtr();
	Scaleform::AmpStats & operator*();
	Scaleform::AmpStats * operator->();
	Scaleform::AmpStats * operator class Scaleform::AmpStats *();
	Scaleform::Ptr<Scaleform::AmpStats> & Pick(Scaleform::AmpStats *);
	Scaleform::Ptr<Scaleform::AmpStats> & Pick(Scaleform::Pickable<Scaleform::AmpStats>);
	Scaleform::Ptr<Scaleform::AmpStats> & Pick(Scaleform::Ptr<Scaleform::AmpStats> &);
};
Scaleform::GFx::AS3::RefCountCollector<328>::~RefCountCollector<328>(); // 0x140453A70
unsigned long long Scaleform::GFx::AS3::RefCountCollector<328>::GetRootsCount(unsigned long uptoGen); // 0x140489820
void Scaleform::GFx::AS3::RefCountBaseGC<328>::FreeThis(Scaleform::GFx::AS3::RefCountCollector<328> * prcc); // 0x140439BE0
void Scaleform::GFx::AS3::RefCountBaseGC<328>::ReleaseInternal(); // 0x140439C60
void Scaleform::GFx::AS3::RefCountCollector<328>::ReinsertToList(const Scaleform::GFx::AS3::RefCountBaseGC<328> * pchild); // 0x1404A1410
void Scaleform::GFx::AS3::RefCountCollector<328>::AddToList(const Scaleform::GFx::AS3::RefCountBaseGC<328> * pchild); // 0x14045FF60
void Scaleform::GFx::AS3::RefCountCollector<328>::AddDelayedReleaseProxy(Scaleform::GFx::AS3::PtrReleaseProxy<328> * preleaseProxy); // 0x14053DE60
void Scaleform::GFx::AS3::RefCountCollector<328>::CleanDelayedReleaseProxies(Scaleform::AmpStats * ampStats); // 0x140465180
void Scaleform::GFx::AS3::RefCountCollector<328>::RemoveFromRoots(const Scaleform::GFx::AS3::RefCountBaseGC<328> * root); // 0x140439D50
bool Scaleform::GFx::AS3::RefCountCollector<328>::Collect(unsigned long uptoGeneration, bool upgradeGen, Scaleform::GFx::AS3::RefCountCollector<328>::Stats * pstat); // 0x1404668F0
class Scaleform::GFx::AS3::ASRefCountCollector :
	Scaleform::GFx::AS3::RefCountCollector<328>
{
private:
	unsigned long FrameCnt; // 0xA8
	unsigned long MaxRootCount; // 0xAC
	unsigned long PeakRootCount; // 0xB0
	unsigned long LastRootCount; // 0xB4
	unsigned long LastCollectedRoots; // 0xB8
	unsigned long LastPeakRootCount; // 0xBC
	unsigned long TotalFramesCount; // 0xC0
	unsigned long LastCollectionFrameNum; // 0xC4
	unsigned long PresetMaxRootCount; // 0xC8
	unsigned long MaxFramesBetweenCollections; // 0xCC
	unsigned long RunsCnt; // 0xD0
	unsigned long RunsToUpgradeGen; // 0xD4
	unsigned long RunsToCollectYoung; // 0xD8
	unsigned long RunsToCollectOld; // 0xDC
	unsigned long CollectionScheduledFlags; // 0xE0
	unsigned char SuspendCnt; // 0xE4
	void Collect(unsigned long, bool, Scaleform::GFx::AS3::RefCountCollector<328>::Stats *);
	unsigned long CheckGenerations(bool *);
public:
	ASRefCountCollector();
	void SetParams(unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
	void AdvanceFrame(unsigned long *, unsigned long *, Scaleform::AmpStats *);
	enum CollectFlags
	{
		Collect_Shutdown = 1,
		Collect_Emergency = 2,
		Collect_UpgradeGens = 4,
		Collect_Quick = 8,
		Collect_Medium = 16,
		Collect_Full = 32,
	};
	void ForceCollect(Scaleform::AmpStats *, unsigned long);
	void ForceEmergencyCollect(Scaleform::AmpStats *);
	void ScheduleCollect(unsigned long);
	void CollectIfScheduled(Scaleform::AmpStats *);
	void SuspendGC(bool);
	bool IsSuspended();
	virtual ~ASRefCountCollector();
};
class Scaleform::GFx::AS3::RefCountCollector<328> :
	Scaleform::RefCountBase<Scaleform::GFx::AS3::RefCountCollector<328>,328>
{
	enum <unnamed-enum-Flags_Collecting>
	{
		Flags_Collecting = 1,
		Flags_AddingRoot = 2,
		Flags_InCollect = 4,
		Flags_MarkInCycle = 8,
		Flags_RequireMoreCollect = 16,
		Flags_ForcedCleanup = 32,
	};
	struct RootDesc;
protected:
	Scaleform::GFx::AS3::RefCountCollector<328>::RootDesc Roots[3]; // 0x10
	Scaleform::GFx::AS3::RefCountCollector<328>::RootDesc FinalizeRoots; // 0x40
	void(*CollectorFunc)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *); // 0x50
	class ListRootNode;
	Scaleform::GFx::AS3::RefCountCollector<328>::ListRootNode ListRoot; // 0x58
	const Scaleform::GFx::AS3::RefCountBaseGC<328> * pLastPtr; // 0x80
	Scaleform::Hash<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *>,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::GFx::AS3::GASRefCountBase *,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >,Scaleform::HashNode<Scaleform::GFx::AS3::GASRefCountBase *,Scaleform::GFx::AS3::WeakProxy *,Scaleform::FixedSizeHash<Scaleform::GFx::AS3::GASRefCountBase *> >::NodeHashF> > > WProxyHash; // 0x88
	unsigned long CurrentMaxGen; // 0x90
	unsigned char Flags; // 0x94
	Scaleform::Ptr<Scaleform::GFx::AS3::PtrReleaseProxy<328> > HeadDelayedPtrRelease; // 0x98
	const Scaleform::GFx::AS3::RefCountBaseGC<328> * pExcludedRoots; // 0xA0
	void CleanDelayedReleaseProxies(Scaleform::AmpStats *);
	void AddToRootList(Scaleform::GFx::AS3::RefCountCollector<328>::RootDesc &, const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
	void AddRoot(const Scaleform::GFx::AS3::RefCountBaseGC<328> *, bool);
	Scaleform::GFx::AS3::RefCountCollector<328>::RootDesc & GetRootDesc(const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
	const Scaleform::GFx::AS3::RefCountCollector<328>::RootDesc & GetRootDesc(const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
	bool IsExcluded(const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
public:
	void AddToList(const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
	void ReinsertToList(const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
	void RemoveFromRoots(const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
	void AddToExcludedRoots(const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
	void RemoveFromExcludedRoots(const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
	struct Stats;
private:
	RefCountCollector<328>(const Scaleform::GFx::AS3::RefCountCollector<328> &);
public:
	RefCountCollector<328>();
	virtual ~RefCountCollector<328>();
	bool Collect(unsigned long, bool, Scaleform::GFx::AS3::RefCountCollector<328>::Stats *);
	unsigned long long GetRootsCount(unsigned long);
	bool IsCollecting();
	bool IsAddingRoot();
	bool IsMarkInCycle();
	bool IsInCollect();
	bool DoesRequireAdditionalCollect();
	void AddDelayedReleaseProxy(Scaleform::GFx::AS3::PtrReleaseProxy<328> *);
	static bool IsDisableOp(void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	static bool IsReleaseOp(void(*)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *));
	void CollectChildren(const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
private:
	void HandleWeakRef(const Scaleform::GFx::AS3::RefCountBaseGC<328> *);
	Scaleform::GFx::AS3::RefCountCollector<328> & operator=(const Scaleform::GFx::AS3::RefCountCollector<328> &);
};
class Scaleform::GFx::AS3::WeakProxy :
	Scaleform::NewOverrideBase<328>
{
private:
	WeakProxy(const Scaleform::GFx::AS3::WeakProxy &);
public:
	WeakProxy(Scaleform::GFx::AS3::GASRefCountBase *);
	bool IsAlive();
	void NotifyObjectDied();
	Scaleform::GFx::AS3::GASRefCountBase * GetObjectA();
	void AddRef();
	void Release();
private:
	void operator=(const Scaleform::GFx::AS3::WeakProxy &);
	long RefCount; // 0x0
	Scaleform::GFx::AS3::GASRefCountBase * pObject; // 0x8
};
void Scaleform::GFx::AS3::RefCountCollector<328>::HandleWeakRef(const Scaleform::GFx::AS3::RefCountBaseGC<328> * pcur); // 0x14048CE80
class Scaleform::GFx::AS3::GASRefCountBase :
	Scaleform::GFx::AS3::RefCountBaseGC<328>
{
private:
	GASRefCountBase(const Scaleform::GFx::AS3::GASRefCountBase &);
public:
	GASRefCountBase(Scaleform::GFx::AS3::ASRefCountCollector *);
	virtual ~GASRefCountBase();
	Scaleform::Pickable<Scaleform::GFx::AS3::WeakProxy> CreateWeakProxy();
};
class Scaleform::Pickable<Scaleform::GFx::AS3::WeakProxy>
{
public:
	Pickable<Scaleform::GFx::AS3::WeakProxy>(Scaleform::GFx::AS3::WeakProxy *, Scaleform::PickType);
	Pickable<Scaleform::GFx::AS3::WeakProxy>(Scaleform::GFx::AS3::WeakProxy *);
	Pickable<Scaleform::GFx::AS3::WeakProxy>();
	Scaleform::Pickable<Scaleform::GFx::AS3::WeakProxy> & operator=(const Scaleform::Pickable<Scaleform::GFx::AS3::WeakProxy> &);
	Scaleform::GFx::AS3::WeakProxy * GetPtr();
	Scaleform::GFx::AS3::WeakProxy * operator->();
	Scaleform::GFx::AS3::WeakProxy & operator*();
private:
	Scaleform::GFx::AS3::WeakProxy * pV; // 0x0
};
void Scaleform::GFx::AS3::ForEachChild_GC(Scaleform::GFx::AS3::RefCountCollector<328> * prcc, const Scaleform::GFx::AS3::Value & v, void(*op)(Scaleform::GFx::AS3::RefCountCollector<328> *, const Scaleform::GFx::AS3::RefCountBaseGC<328> * *)); // 0x14047FD40