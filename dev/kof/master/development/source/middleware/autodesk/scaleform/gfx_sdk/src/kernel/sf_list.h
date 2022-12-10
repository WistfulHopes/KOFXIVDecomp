#pragma once

struct Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::DataPage>
{
	Scaleform::Render::MatrixPoolImpl::DataPage * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::MatrixPoolImpl::DataPage * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::MatrixPoolImpl::DataPage>();
	Scaleform::Render::MatrixPoolImpl::DataPage * GetPrev();
	Scaleform::Render::MatrixPoolImpl::DataPage * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::MatrixPoolImpl::DataPage *);
	void InsertNodeAfter(Scaleform::Render::MatrixPoolImpl::DataPage *);
	void InsertNodeBefore(Scaleform::Render::MatrixPoolImpl::DataPage *);
};
struct Scaleform::ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase>
{
	Scaleform::Render::MatrixPoolImpl::HandlePageBase * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::MatrixPoolImpl::HandlePageBase * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::MatrixPoolImpl::HandlePageBase>();
	Scaleform::Render::MatrixPoolImpl::HandlePageBase * GetPrev();
	Scaleform::Render::MatrixPoolImpl::HandlePageBase * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::MatrixPoolImpl::HandlePageBase *);
	void InsertNodeAfter(Scaleform::Render::MatrixPoolImpl::HandlePageBase *);
	void InsertNodeBefore(Scaleform::Render::MatrixPoolImpl::HandlePageBase *);
};
struct Scaleform::ListNode<Scaleform::Render::TreeCacheNode>
{
	Scaleform::Render::TreeCacheNode * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::TreeCacheNode * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::TreeCacheNode>();
	Scaleform::Render::TreeCacheNode * GetPrev();
	Scaleform::Render::TreeCacheNode * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::TreeCacheNode *);
	void InsertNodeAfter(Scaleform::Render::TreeCacheNode *);
	void InsertNodeBefore(Scaleform::Render::TreeCacheNode *);
};
struct Scaleform::ListNode<Scaleform::Render::PrimitiveBatch>
{
	Scaleform::Render::PrimitiveBatch * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::PrimitiveBatch * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::PrimitiveBatch>();
	Scaleform::Render::PrimitiveBatch * GetPrev();
	Scaleform::Render::PrimitiveBatch * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::PrimitiveBatch *);
	void InsertNodeAfter(Scaleform::Render::PrimitiveBatch *);
	void InsertNodeBefore(Scaleform::Render::PrimitiveBatch *);
};
struct Scaleform::ListNode<Scaleform::Render::FontCacheHandle>
{
	Scaleform::Render::FontCacheHandle * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::FontCacheHandle * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::FontCacheHandle>();
	Scaleform::Render::FontCacheHandle * GetPrev();
	Scaleform::Render::FontCacheHandle * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::FontCacheHandle *);
	void InsertNodeAfter(Scaleform::Render::FontCacheHandle *);
	void InsertNodeBefore(Scaleform::Render::FontCacheHandle *);
};
class Scaleform::List<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify,Scaleform::ListNodeSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify> >
{
	class ValueType;
private:
	List<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify,Scaleform::ListNodeSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify> >(const Scaleform::List<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify,Scaleform::ListNode<Scaleform::Render::HALNotify> > &);
public:
	List<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify,Scaleform::ListNodeSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify> >();
	void Clear();
	Scaleform::Render::HALNotify * GetFirst();
	Scaleform::Render::HALNotify * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::HALNotify *);
	bool IsLast(const Scaleform::Render::HALNotify *);
	bool IsNull(const Scaleform::Render::HALNotify *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::HALNotify * GetPrev(const Scaleform::Render::HALNotify *);
	static Scaleform::Render::HALNotify * GetNext(const Scaleform::Render::HALNotify *);
	void PushFront(Scaleform::Render::HALNotify *);
	void PushBack(Scaleform::Render::HALNotify *);
	static void Remove(Scaleform::Render::HALNotify *);
	void BringToFront(Scaleform::Render::HALNotify *);
	void SendToBack(Scaleform::Render::HALNotify *);
	void PushListToFront(Scaleform::List<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify,Scaleform::ListNode<Scaleform::Render::HALNotify> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify,Scaleform::ListNode<Scaleform::Render::HALNotify> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify,Scaleform::ListNode<Scaleform::Render::HALNotify> > &, Scaleform::Render::HALNotify *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify,Scaleform::ListNode<Scaleform::Render::HALNotify> > &, Scaleform::Render::HALNotify *);
	void PushListItemsToFront(Scaleform::Render::HALNotify *, Scaleform::Render::HALNotify *);
private:
	Scaleform::ListNodeSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify> Root; // 0x0
};
class Scaleform::List<Scaleform::Render::Texture,Scaleform::Render::Texture,Scaleform::ListNodeSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> >
{
	class ValueType;
private:
	List<Scaleform::Render::Texture,Scaleform::Render::Texture,Scaleform::ListNodeSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> >(const Scaleform::List<Scaleform::Render::Texture,Scaleform::Render::Texture,Scaleform::ListNode<Scaleform::Render::Texture> > &);
public:
	List<Scaleform::Render::Texture,Scaleform::Render::Texture,Scaleform::ListNodeSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> >();
	void Clear();
	Scaleform::Render::Texture * GetFirst();
	Scaleform::Render::Texture * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::Texture *);
	bool IsLast(const Scaleform::Render::Texture *);
	bool IsNull(const Scaleform::Render::Texture *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::Texture * GetPrev(const Scaleform::Render::Texture *);
	static Scaleform::Render::Texture * GetNext(const Scaleform::Render::Texture *);
	void PushFront(Scaleform::Render::Texture *);
	void PushBack(Scaleform::Render::Texture *);
	static void Remove(Scaleform::Render::Texture *);
	void BringToFront(Scaleform::Render::Texture *);
	void SendToBack(Scaleform::Render::Texture *);
	void PushListToFront(Scaleform::List<Scaleform::Render::Texture,Scaleform::Render::Texture,Scaleform::ListNode<Scaleform::Render::Texture> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::Texture,Scaleform::Render::Texture,Scaleform::ListNode<Scaleform::Render::Texture> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::Texture,Scaleform::Render::Texture,Scaleform::ListNode<Scaleform::Render::Texture> > &, Scaleform::Render::Texture *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::Texture,Scaleform::Render::Texture,Scaleform::ListNode<Scaleform::Render::Texture> > &, Scaleform::Render::Texture *);
	void PushListItemsToFront(Scaleform::Render::Texture *, Scaleform::Render::Texture *);
private:
	Scaleform::ListNodeSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> Root; // 0x0
};
class Scaleform::List<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface,Scaleform::ListNodeSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface> >
{
	class ValueType;
private:
	List<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface,Scaleform::ListNodeSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface> >(const Scaleform::List<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface,Scaleform::ListNode<Scaleform::Render::DepthStencilSurface> > &);
public:
	List<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface,Scaleform::ListNodeSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface> >();
	void Clear();
	Scaleform::Render::DepthStencilSurface * GetFirst();
	Scaleform::Render::DepthStencilSurface * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::DepthStencilSurface *);
	bool IsLast(const Scaleform::Render::DepthStencilSurface *);
	bool IsNull(const Scaleform::Render::DepthStencilSurface *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::DepthStencilSurface * GetPrev(const Scaleform::Render::DepthStencilSurface *);
	static Scaleform::Render::DepthStencilSurface * GetNext(const Scaleform::Render::DepthStencilSurface *);
	void PushFront(Scaleform::Render::DepthStencilSurface *);
	void PushBack(Scaleform::Render::DepthStencilSurface *);
	static void Remove(Scaleform::Render::DepthStencilSurface *);
	void BringToFront(Scaleform::Render::DepthStencilSurface *);
	void SendToBack(Scaleform::Render::DepthStencilSurface *);
	void PushListToFront(Scaleform::List<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface,Scaleform::ListNode<Scaleform::Render::DepthStencilSurface> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface,Scaleform::ListNode<Scaleform::Render::DepthStencilSurface> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface,Scaleform::ListNode<Scaleform::Render::DepthStencilSurface> > &, Scaleform::Render::DepthStencilSurface *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface,Scaleform::ListNode<Scaleform::Render::DepthStencilSurface> > &, Scaleform::Render::DepthStencilSurface *);
	void PushListItemsToFront(Scaleform::Render::DepthStencilSurface *, Scaleform::Render::DepthStencilSurface *);
private:
	Scaleform::ListNodeSafe<Scaleform::Render::DepthStencilSurface,Scaleform::Render::DepthStencilSurface> Root; // 0x0
};