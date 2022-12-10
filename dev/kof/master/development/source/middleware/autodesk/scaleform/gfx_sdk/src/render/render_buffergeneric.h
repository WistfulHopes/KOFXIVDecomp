#pragma once

enum Scaleform::Render::RBGenericImpl::RBCacheListType
{
	RBCL_Uncached = 0,
	RBCL_InUse = 1,
	RBCL_ThisFrame = 2,
	RBCL_PrevFrame = 3,
	RBCL_LRU = 4,
	RBCL_Reuse_ThisFrame = 5,
	RBCL_Reuse_LRU = 6,
	RBCL_ItemCount = 7,
};
enum Scaleform::Render::RBGenericImpl::DSSizeMode
{
	DSSM_None = 0,
	DSSM_Exact = 1,
	DSSM_EqualOrBigger = 2,
};
struct Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData>
{
	Scaleform::Render::RBGenericImpl::CacheData * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::RBGenericImpl::CacheData * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::RBGenericImpl::CacheData>();
	Scaleform::Render::RBGenericImpl::CacheData * GetPrev();
	Scaleform::Render::RBGenericImpl::CacheData * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::RBGenericImpl::CacheData *);
	void InsertNodeAfter(Scaleform::Render::RBGenericImpl::CacheData *);
	void InsertNodeBefore(Scaleform::Render::RBGenericImpl::CacheData *);
};
class Scaleform::Render::RBGenericImpl::CacheData :
	Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData>
{
public:
	Scaleform::Render::RenderBuffer * pBuffer; // 0x10
	Scaleform::Render::RBGenericImpl::RBCacheListType ListType; // 0x18
	Scaleform::Render::ImageFormat Format; // 0x1C
	unsigned long long DataSize; // 0x20
	CacheData(Scaleform::Render::RenderBuffer *);
	Scaleform::Render::RBGenericImpl::RenderTarget * GetRenderTarget();
	Scaleform::Render::RBGenericImpl::DepthStencilBuffer * GetDepthStencilBuffer();
	bool Match(const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::RBGenericImpl::DSSizeMode, Scaleform::Render::RenderBufferType, Scaleform::Render::ImageFormat);
};
class Scaleform::Render::RBGenericImpl::RenderBufferManager :
	Scaleform::Render::RenderBufferManager
{
public:
	RenderBufferManager(Scaleform::Render::RBGenericImpl::DSSizeMode, unsigned long long, unsigned long long);
	virtual ~RenderBufferManager();
	virtual bool Initialize(Scaleform::Render::TextureManager *);
	virtual void Destroy();
	virtual void EndFrame();
	virtual void Reset();
	void SetLimits(unsigned long long, unsigned long long);
	void DumpUsage();
	virtual Scaleform::Render::RenderTarget * CreateRenderTarget(const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::RenderBufferType, Scaleform::Render::ImageFormat, Scaleform::Render::Texture *);
	virtual Scaleform::Render::RenderTarget * CreateTempRenderTarget(const Scaleform::Render::Size<unsigned long> &);
	virtual Scaleform::Render::DepthStencilBuffer * CreateDepthStencilBuffer(const Scaleform::Render::Size<unsigned long> &, bool);
protected:
	Scaleform::Render::RBGenericImpl::RenderTarget * createRenderTarget(const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::RenderBufferType, Scaleform::Render::ImageFormat, Scaleform::Render::Texture *);
	enum ReserveSpaceResult
	{
		RS_Match = 0,
		RS_Alloc = 1,
		RS_Fail = 2,
	};
	Scaleform::Render::Size<unsigned long> RoundUpImageSize(const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::RBGenericImpl::RenderBufferManager::ReserveSpaceResult reserveSpace(Scaleform::Render::RBGenericImpl::CacheData * *, const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::RenderBufferType, Scaleform::Render::ImageFormat, unsigned long long);
	Scaleform::Render::RBGenericImpl::CacheData * findMatch(Scaleform::Render::RBGenericImpl::RBCacheListType, const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::RenderBufferType, Scaleform::Render::ImageFormat);
	void pushFront(Scaleform::Render::RBGenericImpl::RBCacheListType, Scaleform::Render::RBGenericImpl::CacheData *);
	void moveToFront(Scaleform::Render::RBGenericImpl::RBCacheListType, Scaleform::Render::RBGenericImpl::CacheData *);
	void moveListToFront(Scaleform::Render::RBGenericImpl::RBCacheListType, Scaleform::Render::RBGenericImpl::RBCacheListType);
	void evict(Scaleform::Render::RBGenericImpl::CacheData *);
	void evictAll(Scaleform::Render::RBGenericImpl::RBCacheListType);
	void evictOverReuseLimit(Scaleform::Render::RBGenericImpl::RBCacheListType);
	bool evictUntilAvailable(Scaleform::Render::RBGenericImpl::RBCacheListType, unsigned long long);
	Scaleform::Ptr<Scaleform::Render::TextureManager> pTextureManager; // 0x10
	unsigned long long ReuseLimit; // 0x18
	unsigned long long AbsoluteLimit; // 0x20
	unsigned long long AllocSize; // 0x28
	Scaleform::Render::ImageFormat DefImageFormat; // 0x30
	bool RequirePow2; // 0x34
	Scaleform::Render::RBGenericImpl::DSSizeMode DepthStencilSizeMode; // 0x38
	Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > BufferCache[7]; // 0x40
public:
	void __dflt_ctor_closure();
};
class Scaleform::Ptr<Scaleform::Render::TextureManager>
{
protected:
	Scaleform::Render::TextureManager * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TextureManager>(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Render::TextureManager *);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Ptr<Scaleform::Render::TextureManager> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Render::TextureManager &);
	Ptr<Scaleform::Render::TextureManager>();
	~Ptr<Scaleform::Render::TextureManager>();
	bool operator==(Scaleform::Render::TextureManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	bool operator!=(Scaleform::Render::TextureManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	const Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(Scaleform::Render::TextureManager &);
	const Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(Scaleform::Render::TextureManager *);
	const Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(Scaleform::Render::TextureManager &);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(Scaleform::Render::TextureManager *);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TextureManager * & GetRawRef();
	Scaleform::Render::TextureManager * GetPtr();
	Scaleform::Render::TextureManager & operator*();
	Scaleform::Render::TextureManager * operator->();
	Scaleform::Render::TextureManager * operator class Scaleform::Render::TextureManager *();
	Scaleform::Ptr<Scaleform::Render::TextureManager> & Pick(Scaleform::Render::TextureManager *);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & Pick(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & Pick(Scaleform::Ptr<Scaleform::Render::TextureManager> &);
};
class Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> >
{
	class ValueType;
private:
	List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> >(const Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > &);
public:
	List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> >();
	void Clear();
	Scaleform::Render::RBGenericImpl::CacheData * GetFirst();
	Scaleform::Render::RBGenericImpl::CacheData * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::RBGenericImpl::CacheData *);
	bool IsLast(const Scaleform::Render::RBGenericImpl::CacheData *);
	bool IsNull(const Scaleform::Render::RBGenericImpl::CacheData *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::RBGenericImpl::CacheData * GetPrev(const Scaleform::Render::RBGenericImpl::CacheData *);
	static Scaleform::Render::RBGenericImpl::CacheData * GetNext(const Scaleform::Render::RBGenericImpl::CacheData *);
	void PushFront(Scaleform::Render::RBGenericImpl::CacheData *);
	void PushBack(Scaleform::Render::RBGenericImpl::CacheData *);
	static void Remove(Scaleform::Render::RBGenericImpl::CacheData *);
	void BringToFront(Scaleform::Render::RBGenericImpl::CacheData *);
	void SendToBack(Scaleform::Render::RBGenericImpl::CacheData *);
	void PushListToFront(Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > &, Scaleform::Render::RBGenericImpl::CacheData *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > &, Scaleform::Render::RBGenericImpl::CacheData *);
	void PushListItemsToFront(Scaleform::Render::RBGenericImpl::CacheData *, Scaleform::Render::RBGenericImpl::CacheData *);
private:
	const Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > & operator=(const Scaleform::List<Scaleform::Render::RBGenericImpl::CacheData,Scaleform::Render::RBGenericImpl::CacheData,Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> > &);
	Scaleform::ListNode<Scaleform::Render::RBGenericImpl::CacheData> Root; // 0x0
};
class Scaleform::Render::RBGenericImpl::RenderTarget :
	Scaleform::Render::RenderTarget,
	Scaleform::Render::RBGenericImpl::CacheData
{
public:
	RenderTarget(Scaleform::Render::RBGenericImpl::RenderTarget &);
	RenderTarget(const Scaleform::Render::RBGenericImpl::RenderTarget &);
	RenderTarget(Scaleform::Render::RBGenericImpl::RenderBufferManager *, Scaleform::Render::RenderBufferType, const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::RBGenericImpl::RenderTarget * getThis();
	virtual Scaleform::Render::Texture * GetTexture();
	virtual Scaleform::Render::RenderTargetStatus GetStatus();
	virtual void SetInUse(Scaleform::Render::RenderTargetUse);
	void SetInUse(bool);
	virtual void AddRef();
	virtual void Release();
	void onEvict();
protected:
	Scaleform::Render::RBGenericImpl::RenderBufferManager * getManager();
	void initTexture(Scaleform::Render::Texture *);
	void initViewRect(const Scaleform::Render::Rect<int> &);
	Scaleform::Ptr<Scaleform::Render::Texture> pTexture; // 0x68
	Scaleform::Render::RenderTargetStatus RTStatus; // 0x70
public:
	virtual ~RenderTarget();
};
Scaleform::Render::Texture * Scaleform::Render::RBGenericImpl::RenderTarget::GetTexture(); // 0x14012A890
Scaleform::Render::RenderTargetStatus Scaleform::Render::RBGenericImpl::RenderTarget::GetStatus(); // 0x140047560
class Scaleform::Ptr<Scaleform::Render::Texture>
{
protected:
	Scaleform::Render::Texture * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Texture>(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	Ptr<Scaleform::Render::Texture>(Scaleform::Render::Texture *);
	Ptr<Scaleform::Render::Texture>(Scaleform::Ptr<Scaleform::Render::Texture> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Texture>(Scaleform::Pickable<Scaleform::Render::Texture>);
	Ptr<Scaleform::Render::Texture>(Scaleform::Render::Texture &);
	Ptr<Scaleform::Render::Texture>();
	~Ptr<Scaleform::Render::Texture>();
	bool operator==(Scaleform::Render::Texture *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	bool operator!=(Scaleform::Render::Texture *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	Scaleform::Ptr<Scaleform::Render::Texture> & operator=(Scaleform::Pickable<Scaleform::Render::Texture>);
	const Scaleform::Ptr<Scaleform::Render::Texture> & operator=(Scaleform::Render::Texture &);
	const Scaleform::Ptr<Scaleform::Render::Texture> & operator=(Scaleform::Render::Texture *);
	const Scaleform::Ptr<Scaleform::Render::Texture> & operator=(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(Scaleform::Pickable<Scaleform::Render::Texture>);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(Scaleform::Render::Texture &);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(Scaleform::Render::Texture *);
	Scaleform::Ptr<Scaleform::Render::Texture> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Texture> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Texture * & GetRawRef();
	Scaleform::Render::Texture * GetPtr();
	Scaleform::Render::Texture & operator*();
	Scaleform::Render::Texture * operator->();
	Scaleform::Render::Texture * operator class Scaleform::Render::Texture *();
	Scaleform::Ptr<Scaleform::Render::Texture> & Pick(Scaleform::Render::Texture *);
	Scaleform::Ptr<Scaleform::Render::Texture> & Pick(Scaleform::Pickable<Scaleform::Render::Texture>);
	Scaleform::Ptr<Scaleform::Render::Texture> & Pick(Scaleform::Ptr<Scaleform::Render::Texture> &);
};
class Scaleform::Render::RBGenericImpl::DepthStencilBuffer :
	Scaleform::Render::DepthStencilBuffer,
	Scaleform::Render::RBGenericImpl::CacheData
{
public:
	DepthStencilBuffer(Scaleform::Render::RBGenericImpl::DepthStencilBuffer &);
	DepthStencilBuffer(const Scaleform::Render::RBGenericImpl::DepthStencilBuffer &);
	DepthStencilBuffer(Scaleform::Render::RBGenericImpl::RenderBufferManager *, const Scaleform::Render::Size<unsigned long> &, bool);
	Scaleform::Render::RBGenericImpl::DepthStencilBuffer * getThis();
	virtual void AddRef();
	virtual void Release();
	void onEvict();
protected:
	Scaleform::Render::RBGenericImpl::RenderBufferManager * getManager();
public:
	virtual ~DepthStencilBuffer();
};