#pragma once

class Scaleform::Range
{
public:
	long long Index; // 0x0
	unsigned long long Length; // 0x8
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Range(Scaleform::Range::BoundsType);
	Range(const Scaleform::Range &);
	Range(long long, unsigned long long);
	Range(unsigned long long);
	Range();
	void SetRange(Scaleform::Range::BoundsType);
	void SetRange(const Scaleform::Range &);
	void SetRange(long long, unsigned long long);
	void SetRange(unsigned long long);
	long long MoveIndex(long long);
	long long MoveRange(long long);
	unsigned long long ShrinkRange(unsigned long long);
	unsigned long long ExpandRange(unsigned long long);
	long long NextIndex();
	long long LastIndex();
	long long FirstIndex();
	bool IsEmpty();
	void Clear();
	bool Contains(const Scaleform::Range &);
	bool Contains(long long);
	bool Intersects(const Scaleform::Range &);
	long CompareTo(long long);
};
class Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,Scaleform::AllocatorGH<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> :
	Scaleform::Range
{
private:
	Scaleform::GFx::TextField::CSSHolderBase::UrlZone Data; // 0x10
public:
	RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>(Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> &);
	RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>(const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> &);
	RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>(long long, unsigned long long, const Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>();
	const Scaleform::GFx::TextField::CSSHolderBase::UrlZone & GetData();
	Scaleform::GFx::TextField::CSSHolderBase::UrlZone & GetData();
	const Scaleform::GFx::TextField::CSSHolderBase::UrlZone & operator->();
	Scaleform::GFx::TextField::CSSHolderBase::UrlZone & operator->();
	const Scaleform::GFx::TextField::CSSHolderBase::UrlZone & operator*();
	Scaleform::GFx::TextField::CSSHolderBase::UrlZone & operator*();
	void SetData(const Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	bool IsDataEqual(const Scaleform::GFx::TextField::CSSHolderBase::UrlZone &);
	~RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>();
	Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> & operator=(Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> &);
	Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> & operator=(const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> &);
};
class Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator
{
private:
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > * pArray; // 0x0
	long long Index; // 0x8
public:
	Iterator();
private:
	Iterator(Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > &, bool);
	Iterator(Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> > &);
	void InsertBefore(const Scaleform::RangeData<void *> &);
	void InsertAfter(const Scaleform::RangeData<void *> &);
	void Remove();
public:
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator operator++(long);
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator & operator++();
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator operator--(long);
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator & operator--();
	Scaleform::RangeData<void *> & operator*();
	Scaleform::RangeData<void *> * operator->();
	Scaleform::RangeData<void *> * GetPtr();
	bool operator==(const Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator &);
	Scaleform::RangeDataArray<void *,Scaleform::ArrayLH<Scaleform::RangeData<void *>,2,Scaleform::ArrayDefaultPolicy> >::Iterator operator+(long long);
	bool IsFinished();
};
class Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator
{
private:
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > * pArray; // 0x0
	long long Index; // 0x8
public:
	Iterator();
private:
	Iterator(Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > &, bool);
	Iterator(Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> > &);
	void InsertBefore(const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> &);
	void InsertAfter(const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> &);
	void Remove();
public:
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator operator++(long);
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator & operator++();
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator operator--(long);
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator & operator--();
	Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> & operator*();
	Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> * operator->();
	Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> * GetPtr();
	bool operator==(const Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator &);
	Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator operator+(long long);
	bool IsFinished();
};
class Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator
{
private:
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > * pArray; // 0x0
	long long Index; // 0x8
public:
	Iterator();
private:
	Iterator(Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > &, bool);
	Iterator(Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > &);
	void InsertBefore(const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > &);
	void InsertAfter(const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > &);
	void Remove();
public:
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator operator++(long);
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator & operator++();
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator operator--(long);
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator & operator--();
	Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > & operator*();
	Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > * operator->();
	Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > * GetPtr();
	bool operator==(const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator &);
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator operator+(long long);
	bool IsFinished();
};
bool Scaleform::RangeDataArray<void * __ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void * __ptr64>,2,Scaleform::ArrayDefaultPolicy> >::Iterator::IsFinished(); // 0x14042A910
bool Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::Iterator::IsFinished(); // 0x14042A910
bool Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator::IsFinished(); // 0x14042A910
class Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator
{
private:
	const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > * pArray; // 0x0
	long long Index; // 0x8
public:
	ConstIterator();
private:
	ConstIterator(const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > &, bool);
	ConstIterator(const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > &);
public:
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator operator++(long);
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator & operator++();
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator operator--(long);
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator & operator--();
	const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > & operator*();
	const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > * operator->();
	const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > * GetPtr();
	bool operator==(const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator &);
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator operator+(long long);
	bool IsFinished();
};
void Scaleform::RangeDataArray<void * __ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void * __ptr64>,2,Scaleform::ArrayDefaultPolicy> >::Iterator::Remove(); // 0x14042BF90
unsigned long long Scaleform::RangeDataArray<void * __ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void * __ptr64>,2,Scaleform::ArrayDefaultPolicy> >::FindRangeIndex(long long index); // 0x14042A470
unsigned long long Scaleform::RangeDataArray<void * __ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void * __ptr64>,2,Scaleform::ArrayDefaultPolicy> >::FindNearestRangeIndex(long long index); // 0x1402FB510
unsigned long long Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::FindNearestRangeIndex(long long index); // 0x1403F3500
unsigned long long Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::FindNearestRangeIndex(long long index); // 0x1402FB510
Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::GetIteratorByNearestIndex(long long index); // 0x1402FD3D0
void Scaleform::RangeDataArray<void * __ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void * __ptr64>,2,Scaleform::ArrayDefaultPolicy> >::SetRange(const Scaleform::RangeData<void *> & range); // 0x14042C600
void Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::SetRange(const Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone> & range); // 0x1403F7540
void Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::SetRange(const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > & range); // 0x140300270
void Scaleform::RangeDataArray<Scaleform::GFx::TextField::CSSHolderBase::UrlZone,Scaleform::Array<Scaleform::RangeData<Scaleform::GFx::TextField::CSSHolderBase::UrlZone>,2,Scaleform::ArrayDefaultPolicy> >::ExpandRange(long long startPos, unsigned long long length); // 0x1403F3430
void Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ExpandRange(long long startPos, unsigned long long length); // 0x1402FB430
void Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::RemoveRange(long long startPos, unsigned long long length); // 0x1402FF880
void Scaleform::RangeDataArray<void * __ptr64,Scaleform::ArrayLH<Scaleform::RangeData<void * __ptr64>,2,Scaleform::ArrayDefaultPolicy> >::ClearRange(long long startPos, unsigned long long length); // 0x140429EE0