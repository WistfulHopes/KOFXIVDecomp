#pragma once

class Scaleform::RefCountBase<Scaleform::Render::FontCacheHandleManager,75> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,75>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 75,
	};
public:
	RefCountBase<Scaleform::Render::FontCacheHandleManager,75>(Scaleform::RefCountBase<Scaleform::Render::FontCacheHandleManager,75> &);
	RefCountBase<Scaleform::Render::FontCacheHandleManager,75>(const Scaleform::RefCountBase<Scaleform::Render::FontCacheHandleManager,75> &);
	RefCountBase<Scaleform::Render::FontCacheHandleManager,75>();
	virtual ~RefCountBase<Scaleform::Render::FontCacheHandleManager,75>();
	Scaleform::RefCountBase<Scaleform::Render::FontCacheHandleManager,75> & operator=(Scaleform::RefCountBase<Scaleform::Render::FontCacheHandleManager,75> &);
	Scaleform::RefCountBase<Scaleform::Render::FontCacheHandleManager,75> & operator=(const Scaleform::RefCountBase<Scaleform::Render::FontCacheHandleManager,75> &);
};
class Scaleform::Render::FontCacheHandleManager :
	Scaleform::RefCountBase<Scaleform::Render::FontCacheHandleManager,75>
{
public:
	FontCacheHandleManager(Scaleform::MemoryHeap *, Scaleform::Render::GlyphCache *);
	virtual ~FontCacheHandleManager();
	void ProcessKillList();
	void DestroyAllFonts();
	Scaleform::Render::FontCacheHandle * RegisterFont(Scaleform::Render::Font *);
	enum FontListType
	{
		Font_LiveList = 0,
		Font_KillList = 1,
		Font_List_Count = 2,
	};
private:
	Scaleform::Lock * getLock();
	void fontLost(Scaleform::Render::FontCacheHandleRef *);
	void destroyFontList_NTS(Scaleform::Render::FontCacheHandleManager::FontListType);
	Scaleform::Lock FontLock; // 0x10
	Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > Fonts[2]; // 0x40
	Scaleform::MemoryHeap * pRenderHeap; // 0x60
	Scaleform::Render::GlyphCache * pCache; // 0x68
};
Scaleform::Render::FontCacheHandleManager::FontCacheHandleManager(Scaleform::MemoryHeap * renderHeap, Scaleform::Render::GlyphCache * q); // 0x140375400
class Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> >
{
	class ValueType;
private:
	List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> >(const Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > &);
public:
	List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> >();
	void Clear();
	Scaleform::Render::FontCacheHandle * GetFirst();
	Scaleform::Render::FontCacheHandle * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::FontCacheHandle *);
	bool IsLast(const Scaleform::Render::FontCacheHandle *);
	bool IsNull(const Scaleform::Render::FontCacheHandle *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::FontCacheHandle * GetPrev(const Scaleform::Render::FontCacheHandle *);
	static Scaleform::Render::FontCacheHandle * GetNext(const Scaleform::Render::FontCacheHandle *);
	void PushFront(Scaleform::Render::FontCacheHandle *);
	void PushBack(Scaleform::Render::FontCacheHandle *);
	static void Remove(Scaleform::Render::FontCacheHandle *);
	void BringToFront(Scaleform::Render::FontCacheHandle *);
	void SendToBack(Scaleform::Render::FontCacheHandle *);
	void PushListToFront(Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > &, Scaleform::Render::FontCacheHandle *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > &, Scaleform::Render::FontCacheHandle *);
	void PushListItemsToFront(Scaleform::Render::FontCacheHandle *, Scaleform::Render::FontCacheHandle *);
private:
	const Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > & operator=(const Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > &);
	Scaleform::ListNode<Scaleform::Render::FontCacheHandle> Root; // 0x0
};
class Scaleform::NewOverrideBase<75>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 75,
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
class Scaleform::Render::FontCacheHandle :
	Scaleform::ListNode<Scaleform::Render::FontCacheHandle>,
	Scaleform::NewOverrideBase<75>
{
public:
	FontCacheHandle(Scaleform::Render::FontCacheHandleManager *, Scaleform::Render::Font *);
	Scaleform::Render::FontCacheHandleManager * pManager; // 0x10
	Scaleform::Render::Font * pFont; // 0x18
};