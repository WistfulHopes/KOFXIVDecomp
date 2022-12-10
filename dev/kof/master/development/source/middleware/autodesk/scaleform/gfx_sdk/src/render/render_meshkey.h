#pragma once

struct Scaleform::ListNode<Scaleform::Render::MeshKey>
{
	Scaleform::Render::MeshKey * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::MeshKey * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::MeshKey>();
	Scaleform::Render::MeshKey * GetPrev();
	Scaleform::Render::MeshKey * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::MeshKey *);
	void InsertNodeAfter(Scaleform::Render::MeshKey *);
	void InsertNodeBefore(Scaleform::Render::MeshKey *);
};
class Scaleform::Render::MeshKey :
	Scaleform::ListNode<Scaleform::Render::MeshKey>
{
	enum <unnamed-enum-MaxKeySize>
	{
		MaxKeySize = 20,
	};
	enum KeyFlags
	{
		KF_Fill = 1,
		KF_Stroke = 2,
		KF_StrokeHinted = 3,
		KF_KeyTypeMask = 7,
		KF_Scale9Grid = 16,
		KF_NormalStroke = 32,
		KF_EdgeAA = 64,
		KF_Mask = 128,
		KF_GradientMorph = 256,
		KF_Degenerate = 32768,
	};
public:
	MeshKey(Scaleform::Render::MeshKey &);
	MeshKey(const Scaleform::Render::MeshKey &);
	MeshKey();
	static unsigned long GetKeySize(unsigned long);
	static bool CalcMatrixKey(const Scaleform::Render::Matrix2x4<float> &, float *, Scaleform::Render::Matrix2x4<float> *);
	static bool CalcMatrixKey_NonOpt(const Scaleform::Render::Matrix2x4<float> &, float *, Scaleform::Render::Matrix2x4<float> *);
	bool Match(unsigned long, unsigned long, const float *, const Scaleform::Render::ToleranceParams &);
	void AddRef();
	void Release();
	bool NotInUse();
	Scaleform::Render::MeshKeySet * GetKeySet();
	Scaleform::Render::MeshKeySet * pKeySet; // 0x10
	Scaleform::Ptr<Scaleform::Render::MeshBase> pMesh; // 0x18
	unsigned short Size; // 0x20
	unsigned short Flags; // 0x22
	unsigned long UseCount; // 0x24
	float Data[1]; // 0x28
protected:
	float getData(unsigned long);
public:
	~MeshKey();
	Scaleform::Render::MeshKey & operator=(Scaleform::Render::MeshKey &);
	Scaleform::Render::MeshKey & operator=(const Scaleform::Render::MeshKey &);
};
class Scaleform::Ptr<Scaleform::Render::MeshBase>
{
protected:
	Scaleform::Render::MeshBase * pObject; // 0x0
public:
	Ptr<Scaleform::Render::MeshBase>(const Scaleform::Ptr<Scaleform::Render::MeshBase> &);
	Ptr<Scaleform::Render::MeshBase>(Scaleform::Render::MeshBase *);
	Ptr<Scaleform::Render::MeshBase>(Scaleform::Ptr<Scaleform::Render::MeshBase> &, Scaleform::PickType);
	Ptr<Scaleform::Render::MeshBase>(Scaleform::Pickable<Scaleform::Render::MeshBase>);
	Ptr<Scaleform::Render::MeshBase>(Scaleform::Render::MeshBase &);
	Ptr<Scaleform::Render::MeshBase>();
	~Ptr<Scaleform::Render::MeshBase>();
	bool operator==(Scaleform::Render::MeshBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::MeshBase> &);
	bool operator!=(Scaleform::Render::MeshBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::MeshBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::MeshBase> &);
	Scaleform::Ptr<Scaleform::Render::MeshBase> & operator=(Scaleform::Pickable<Scaleform::Render::MeshBase>);
	const Scaleform::Ptr<Scaleform::Render::MeshBase> & operator=(Scaleform::Render::MeshBase &);
	const Scaleform::Ptr<Scaleform::Render::MeshBase> & operator=(Scaleform::Render::MeshBase *);
	const Scaleform::Ptr<Scaleform::Render::MeshBase> & operator=(const Scaleform::Ptr<Scaleform::Render::MeshBase> &);
	Scaleform::Ptr<Scaleform::Render::MeshBase> & SetPtr(Scaleform::Pickable<Scaleform::Render::MeshBase>);
	Scaleform::Ptr<Scaleform::Render::MeshBase> & SetPtr(Scaleform::Render::MeshBase &);
	Scaleform::Ptr<Scaleform::Render::MeshBase> & SetPtr(Scaleform::Render::MeshBase *);
	Scaleform::Ptr<Scaleform::Render::MeshBase> & SetPtr(const Scaleform::Ptr<Scaleform::Render::MeshBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::MeshBase * & GetRawRef();
	Scaleform::Render::MeshBase * GetPtr();
	Scaleform::Render::MeshBase & operator*();
	Scaleform::Render::MeshBase * operator->();
	Scaleform::Render::MeshBase * operator class Scaleform::Render::MeshBase *();
	Scaleform::Ptr<Scaleform::Render::MeshBase> & Pick(Scaleform::Render::MeshBase *);
	Scaleform::Ptr<Scaleform::Render::MeshBase> & Pick(Scaleform::Pickable<Scaleform::Render::MeshBase>);
	Scaleform::Ptr<Scaleform::Render::MeshBase> & Pick(Scaleform::Ptr<Scaleform::Render::MeshBase> &);
};
class Scaleform::Render::MeshKeySetHandle
{
private:
	Scaleform::AtomicPtr<Scaleform::Render::MeshKeyManager> pManager; // 0x0
	Scaleform::Render::MeshKeySet * pKeySet; // 0x8
	void releaseCache();
	void releaseCache_NoNotify();
public:
	MeshKeySetHandle(const Scaleform::Render::MeshKeySetHandle &);
	MeshKeySetHandle();
	~MeshKeySetHandle();
	bool IsEmpty();
	bool HasKeySet();
	Scaleform::Render::MeshKeySetHandle & operator=(const Scaleform::Render::MeshKeySetHandle &);
};
class Scaleform::AtomicPtr<Scaleform::Render::MeshKeyManager> :
	Scaleform::AtomicValueBase<Scaleform::Render::MeshKeyManager *>
{
	class Ops;
public:
	AtomicPtr<Scaleform::Render::MeshKeyManager>(Scaleform::AtomicPtr<Scaleform::Render::MeshKeyManager> &);
	AtomicPtr<Scaleform::Render::MeshKeyManager>(const Scaleform::AtomicPtr<Scaleform::Render::MeshKeyManager> &);
	AtomicPtr<Scaleform::Render::MeshKeyManager>(Scaleform::Render::MeshKeyManager *);
	AtomicPtr<Scaleform::Render::MeshKeyManager>();
	Scaleform::Render::MeshKeyManager * operator->();
	Scaleform::Render::MeshKeyManager * operator class Scaleform::Render::MeshKeyManager *();
	Scaleform::AtomicPtr<Scaleform::Render::MeshKeyManager> & operator=(Scaleform::AtomicPtr<Scaleform::Render::MeshKeyManager> &);
	Scaleform::AtomicPtr<Scaleform::Render::MeshKeyManager> & operator=(const Scaleform::AtomicPtr<Scaleform::Render::MeshKeyManager> &);
	Scaleform::Render::MeshKeyManager * operator=(Scaleform::Render::MeshKeyManager *);
	Scaleform::Render::MeshKeyManager * operator++(long);
	Scaleform::Render::MeshKeyManager * operator++();
	Scaleform::Render::MeshKeyManager * operator--(long);
	Scaleform::Render::MeshKeyManager * operator--();
};
class Scaleform::Render::MeshProvider_KeySupport :
	Scaleform::Render::MeshProvider_RCImpl
{
private:
	Scaleform::Render::MeshKeySetHandle hKeySet; // 0x18
protected:
	void releaseKeySet();
public:
	MeshProvider_KeySupport(const Scaleform::Render::MeshProvider_KeySupport &);
	MeshProvider_KeySupport();
	virtual ~MeshProvider_KeySupport();
	bool IsEmpty();
	bool HasKeySet();
	Scaleform::Render::MeshProvider_KeySupport & operator=(const Scaleform::Render::MeshProvider_KeySupport &);
};
class Scaleform::Render::MeshKeySet :
	Scaleform::ListNode<Scaleform::Render::MeshKeySet>,
	Scaleform::Render::MeshProvider,
	Scaleform::NewOverrideBase<65>
{
public:
	MeshKeySet(Scaleform::Render::MeshKeyManager *, Scaleform::Render::MeshProvider_KeySupport *);
	virtual ~MeshKeySet();
	Scaleform::Render::MeshKey * CreateKey(const float *, unsigned long);
	void DestroyKey(Scaleform::Render::MeshKey *);
	void DestroyAllKeys();
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
	virtual bool IsValid();
	bool IsEmpty();
private:
	Scaleform::Ptr<Scaleform::Render::MeshKeyManager> pManager; // 0x18
	Scaleform::Render::MeshProvider_KeySupport * pDelegate; // 0x20
	Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > Meshes; // 0x28
	Scaleform::Render::MeshKey * findMatchingKey(unsigned long, unsigned long, const float *, const Scaleform::Render::ToleranceParams &);
	void releaseDelegate_RenderThread();
};
struct Scaleform::ListNode<Scaleform::Render::MeshKeySet>
{
	Scaleform::Render::MeshKeySet * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::MeshKeySet * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::MeshKeySet>();
	Scaleform::Render::MeshKeySet * GetPrev();
	Scaleform::Render::MeshKeySet * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::MeshKeySet *);
	void InsertNodeAfter(Scaleform::Render::MeshKeySet *);
	void InsertNodeBefore(Scaleform::Render::MeshKeySet *);
};
class Scaleform::NewOverrideBase<65>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 65,
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
bool Scaleform::Render::MeshKeySet::GetData(Scaleform::Render::HAL * hal, Scaleform::Render::MeshBase * mesh, Scaleform::Render::VertexOutput * out, unsigned long meshGenFlags); // 0x14039D780
Scaleform::Render::Rect<float> Scaleform::Render::MeshKeySet::GetIdentityBounds(); // 0x1403E0400
Scaleform::Render::Rect<float> Scaleform::Render::MeshKeySet::GetBounds(const Scaleform::Render::Matrix2x4<float> & m); // 0x14039D720
Scaleform::Render::Rect<float> Scaleform::Render::MeshKeySet::GetCorrectBounds(const Scaleform::Render::Matrix2x4<float> & m, float morphRatio, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams * tol); // 0x14039D740
bool Scaleform::Render::MeshKeySet::HitTestShape(const Scaleform::Render::Matrix2x4<float> & m, float x, float y, float morphRatio, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams * tol); // 0x14039D7F0
unsigned long Scaleform::Render::MeshKeySet::GetLayerCount(); // 0x14039D7E0
unsigned long Scaleform::Render::MeshKeySet::GetFillCount(unsigned long layer, unsigned long meshGenFlags); // 0x14039D790
void Scaleform::Render::MeshKeySet::GetFillData(Scaleform::Render::FillData * data, unsigned long layer, unsigned long fillIndex, unsigned long meshGenFlags); // 0x14039D7A0
void Scaleform::Render::MeshKeySet::GetFillMatrix(Scaleform::Render::HAL * hal, Scaleform::Render::MeshBase * mesh, Scaleform::Render::Matrix2x4<float> * matrix, unsigned long layer, unsigned long fillIndex, unsigned long meshGenFlags); // 0x14039D7B0
bool Scaleform::Render::MeshKeySet::IsValid(); // 0x14039D800
class Scaleform::Ptr<Scaleform::Render::MeshKeyManager>
{
protected:
	Scaleform::Render::MeshKeyManager * pObject; // 0x0
public:
	Ptr<Scaleform::Render::MeshKeyManager>(const Scaleform::Ptr<Scaleform::Render::MeshKeyManager> &);
	Ptr<Scaleform::Render::MeshKeyManager>(Scaleform::Render::MeshKeyManager *);
	Ptr<Scaleform::Render::MeshKeyManager>(Scaleform::Ptr<Scaleform::Render::MeshKeyManager> &, Scaleform::PickType);
	Ptr<Scaleform::Render::MeshKeyManager>(Scaleform::Pickable<Scaleform::Render::MeshKeyManager>);
	Ptr<Scaleform::Render::MeshKeyManager>(Scaleform::Render::MeshKeyManager &);
	Ptr<Scaleform::Render::MeshKeyManager>();
	~Ptr<Scaleform::Render::MeshKeyManager>();
	bool operator==(Scaleform::Render::MeshKeyManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::MeshKeyManager> &);
	bool operator!=(Scaleform::Render::MeshKeyManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::MeshKeyManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::MeshKeyManager> &);
	Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & operator=(Scaleform::Pickable<Scaleform::Render::MeshKeyManager>);
	const Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & operator=(Scaleform::Render::MeshKeyManager &);
	const Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & operator=(Scaleform::Render::MeshKeyManager *);
	const Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & operator=(const Scaleform::Ptr<Scaleform::Render::MeshKeyManager> &);
	Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & SetPtr(Scaleform::Pickable<Scaleform::Render::MeshKeyManager>);
	Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & SetPtr(Scaleform::Render::MeshKeyManager &);
	Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & SetPtr(Scaleform::Render::MeshKeyManager *);
	Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & SetPtr(const Scaleform::Ptr<Scaleform::Render::MeshKeyManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::MeshKeyManager * & GetRawRef();
	Scaleform::Render::MeshKeyManager * GetPtr();
	Scaleform::Render::MeshKeyManager & operator*();
	Scaleform::Render::MeshKeyManager * operator->();
	Scaleform::Render::MeshKeyManager * operator class Scaleform::Render::MeshKeyManager *();
	Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & Pick(Scaleform::Render::MeshKeyManager *);
	Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & Pick(Scaleform::Pickable<Scaleform::Render::MeshKeyManager>);
	Scaleform::Ptr<Scaleform::Render::MeshKeyManager> & Pick(Scaleform::Ptr<Scaleform::Render::MeshKeyManager> &);
};
class Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> >
{
	class ValueType;
private:
	List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> >(const Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > &);
public:
	List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> >();
	void Clear();
	Scaleform::Render::MeshKey * GetFirst();
	Scaleform::Render::MeshKey * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::MeshKey *);
	bool IsLast(const Scaleform::Render::MeshKey *);
	bool IsNull(const Scaleform::Render::MeshKey *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::MeshKey * GetPrev(const Scaleform::Render::MeshKey *);
	static Scaleform::Render::MeshKey * GetNext(const Scaleform::Render::MeshKey *);
	void PushFront(Scaleform::Render::MeshKey *);
	void PushBack(Scaleform::Render::MeshKey *);
	static void Remove(Scaleform::Render::MeshKey *);
	void BringToFront(Scaleform::Render::MeshKey *);
	void SendToBack(Scaleform::Render::MeshKey *);
	void PushListToFront(Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > &, Scaleform::Render::MeshKey *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > &, Scaleform::Render::MeshKey *);
	void PushListItemsToFront(Scaleform::Render::MeshKey *, Scaleform::Render::MeshKey *);
private:
	const Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > & operator=(const Scaleform::List<Scaleform::Render::MeshKey,Scaleform::Render::MeshKey,Scaleform::ListNode<Scaleform::Render::MeshKey> > &);
	Scaleform::ListNode<Scaleform::Render::MeshKey> Root; // 0x0
};
class Scaleform::RefCountBase<Scaleform::Render::MeshKeyManager,65> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 65,
	};
public:
	RefCountBase<Scaleform::Render::MeshKeyManager,65>(Scaleform::RefCountBase<Scaleform::Render::MeshKeyManager,65> &);
	RefCountBase<Scaleform::Render::MeshKeyManager,65>(const Scaleform::RefCountBase<Scaleform::Render::MeshKeyManager,65> &);
	RefCountBase<Scaleform::Render::MeshKeyManager,65>();
	virtual ~RefCountBase<Scaleform::Render::MeshKeyManager,65>();
	Scaleform::RefCountBase<Scaleform::Render::MeshKeyManager,65> & operator=(Scaleform::RefCountBase<Scaleform::Render::MeshKeyManager,65> &);
	Scaleform::RefCountBase<Scaleform::Render::MeshKeyManager,65> & operator=(const Scaleform::RefCountBase<Scaleform::Render::MeshKeyManager,65> &);
};
class Scaleform::Render::MeshKeyManager :
	Scaleform::RefCountBase<Scaleform::Render::MeshKeyManager,65>
{
public:
	MeshKeyManager(Scaleform::MemoryHeap *);
	virtual ~MeshKeyManager();
	void ProcessKillList();
	void DestroyAllKeys();
	Scaleform::Render::MeshKey * CreateMatchingKey(Scaleform::Render::MeshKeySet *, unsigned long, unsigned long, const float *, const Scaleform::Render::ToleranceParams &);
	Scaleform::Render::MeshKey * CreateMatchingKey(Scaleform::Render::MeshProvider_KeySupport *, unsigned long, unsigned long, const float *, const Scaleform::Render::ToleranceParams &);
	enum KeySetListType
	{
		KeySet_LiveList = 0,
		KeySet_KillList = 1,
		KeySet_List_Count = 2,
	};
private:
	Scaleform::Lock KeySetLock; // 0x10
	Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > KeySets[2]; // 0x40
	Scaleform::MemoryHeap * pRenderHeap; // 0x60
	Scaleform::Lock * getLock();
	void providerLost(Scaleform::Render::MeshKeySetHandle &);
	void destroyKeySet(Scaleform::Render::MeshKeySet *);
	void destroyKeySetList_NTS(Scaleform::Render::MeshKeyManager::KeySetListType);
};
Scaleform::Render::MeshKeyManager::MeshKeyManager(Scaleform::MemoryHeap * renderHeap); // 0x140317D70
class Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> >
{
	class ValueType;
private:
	List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> >(const Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > &);
public:
	List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> >();
	void Clear();
	Scaleform::Render::MeshKeySet * GetFirst();
	Scaleform::Render::MeshKeySet * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::MeshKeySet *);
	bool IsLast(const Scaleform::Render::MeshKeySet *);
	bool IsNull(const Scaleform::Render::MeshKeySet *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::MeshKeySet * GetPrev(const Scaleform::Render::MeshKeySet *);
	static Scaleform::Render::MeshKeySet * GetNext(const Scaleform::Render::MeshKeySet *);
	void PushFront(Scaleform::Render::MeshKeySet *);
	void PushBack(Scaleform::Render::MeshKeySet *);
	static void Remove(Scaleform::Render::MeshKeySet *);
	void BringToFront(Scaleform::Render::MeshKeySet *);
	void SendToBack(Scaleform::Render::MeshKeySet *);
	void PushListToFront(Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > &, Scaleform::Render::MeshKeySet *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > &, Scaleform::Render::MeshKeySet *);
	void PushListItemsToFront(Scaleform::Render::MeshKeySet *, Scaleform::Render::MeshKeySet *);
private:
	const Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > & operator=(const Scaleform::List<Scaleform::Render::MeshKeySet,Scaleform::Render::MeshKeySet,Scaleform::ListNode<Scaleform::Render::MeshKeySet> > &);
	Scaleform::ListNode<Scaleform::Render::MeshKeySet> Root; // 0x0
};
Scaleform::Render::MeshKeySet::MeshKeySet(Scaleform::Render::MeshKeyManager * manager, Scaleform::Render::MeshProvider_KeySupport * provider); // 0x14039CCA0