#pragma once

class Scaleform::GFx::AS3::Bubble
{
public:
	Bubble(Scaleform::MemoryHeap *, unsigned char, unsigned char, unsigned long);
	~Bubble();
	void Release();
	void * Alloc(unsigned long long);
	void * AllocAligned(unsigned long long, unsigned char);
	void * AllocAligned(unsigned long long);
	class Page;
	enum <unnamed-enum-KB>
	{
		KB = 1024,
		MinMemAlignment = 8,
		MaxMemAlignment = 64,
	};
private:
	void AllocLarge(const unsigned long long, unsigned char);
	void * CutTail(const unsigned long long, const unsigned long long);
	void * AllocAlignedInternal(unsigned long long, unsigned char);
	const unsigned char DefAlignment; // 0x0
	const unsigned char DefPageSizeKB; // 0x1
	const unsigned long StatID; // 0x4
	Scaleform::MemoryHeap * Heap; // 0x8
	Scaleform::GFx::AS3::Bubble::Page * FreePage; // 0x10
	Scaleform::List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> > Pages; // 0x18
};
class Scaleform::GFx::AS3::Bubble::Page :
	Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page>
{
public:
	Page(unsigned long long);
	unsigned long long GetSize();
	static void * operator new(unsigned long long, void *);
private:
	unsigned long long size; // 0x10
};
struct Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page>
{
	Scaleform::GFx::AS3::Bubble::Page * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::GFx::AS3::Bubble::Page * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::GFx::AS3::Bubble::Page>();
	Scaleform::GFx::AS3::Bubble::Page * GetPrev();
	Scaleform::GFx::AS3::Bubble::Page * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::GFx::AS3::Bubble::Page *);
	void InsertNodeAfter(Scaleform::GFx::AS3::Bubble::Page *);
	void InsertNodeBefore(Scaleform::GFx::AS3::Bubble::Page *);
};
class Scaleform::List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> >
{
	class ValueType;
private:
	List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> >(const Scaleform::List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> > &);
public:
	List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> >();
	void Clear();
	Scaleform::GFx::AS3::Bubble::Page * GetFirst();
	Scaleform::GFx::AS3::Bubble::Page * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::GFx::AS3::Bubble::Page *);
	bool IsLast(const Scaleform::GFx::AS3::Bubble::Page *);
	bool IsNull(const Scaleform::GFx::AS3::Bubble::Page *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::GFx::AS3::Bubble::Page * GetPrev(const Scaleform::GFx::AS3::Bubble::Page *);
	static Scaleform::GFx::AS3::Bubble::Page * GetNext(const Scaleform::GFx::AS3::Bubble::Page *);
	void PushFront(Scaleform::GFx::AS3::Bubble::Page *);
	void PushBack(Scaleform::GFx::AS3::Bubble::Page *);
	static void Remove(Scaleform::GFx::AS3::Bubble::Page *);
	void BringToFront(Scaleform::GFx::AS3::Bubble::Page *);
	void SendToBack(Scaleform::GFx::AS3::Bubble::Page *);
	void PushListToFront(Scaleform::List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> > &);
	void PushListToBack(Scaleform::List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> > &, Scaleform::GFx::AS3::Bubble::Page *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> > &, Scaleform::GFx::AS3::Bubble::Page *);
	void PushListItemsToFront(Scaleform::GFx::AS3::Bubble::Page *, Scaleform::GFx::AS3::Bubble::Page *);
private:
	const Scaleform::List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> > & operator=(const Scaleform::List<Scaleform::GFx::AS3::Bubble::Page,Scaleform::GFx::AS3::Bubble::Page,Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> > &);
	Scaleform::ListNode<Scaleform::GFx::AS3::Bubble::Page> Root; // 0x0
};