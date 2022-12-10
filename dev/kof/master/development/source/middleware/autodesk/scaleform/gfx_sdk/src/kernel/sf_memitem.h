#pragma once

class Scaleform::RefCountBase<Scaleform::MemItemExtra,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::MemItemExtra,2>(Scaleform::RefCountBase<Scaleform::MemItemExtra,2> &);
	RefCountBase<Scaleform::MemItemExtra,2>(const Scaleform::RefCountBase<Scaleform::MemItemExtra,2> &);
	RefCountBase<Scaleform::MemItemExtra,2>();
	virtual ~RefCountBase<Scaleform::MemItemExtra,2>();
	Scaleform::RefCountBase<Scaleform::MemItemExtra,2> & operator=(Scaleform::RefCountBase<Scaleform::MemItemExtra,2> &);
	Scaleform::RefCountBase<Scaleform::MemItemExtra,2> & operator=(const Scaleform::RefCountBase<Scaleform::MemItemExtra,2> &);
};
struct Scaleform::MemItemExtra :
	Scaleform::RefCountBase<Scaleform::MemItemExtra,2>
{
	unsigned long ImageId; // 0x10
	unsigned long AtlasId; // 0x14
	long AtlasRectTop; // 0x18
	long AtlasRectBottom; // 0x1C
	long AtlasRectLeft; // 0x20
	long AtlasRectRight; // 0x24
	MemItemExtra(Scaleform::MemItemExtra &);
	MemItemExtra(const Scaleform::MemItemExtra &);
	MemItemExtra(unsigned long);
	void Read(Scaleform::File &, unsigned long);
	void Write(Scaleform::File &, unsigned long);
	virtual ~MemItemExtra();
	Scaleform::MemItemExtra & operator=(Scaleform::MemItemExtra &);
	Scaleform::MemItemExtra & operator=(const Scaleform::MemItemExtra &);
};
struct Scaleform::MemItem :
	Scaleform::RefCountBase<Scaleform::MemItem,2>
{
	Scaleform::StringLH Name; // 0x10
	unsigned long Value; // 0x18
	bool HasValue; // 0x1C
	bool StartExpanded; // 0x1D
	unsigned long ID; // 0x20
	Scaleform::Ptr<Scaleform::MemItemExtra> ImageExtraData; // 0x28
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::MemItem>,2,Scaleform::ArrayDefaultPolicy> Children; // 0x30
	MemItem(const Scaleform::MemItem &);
	MemItem(unsigned long);
	void SetValue(unsigned long);
	Scaleform::MemItem * AddChild(unsigned long, const char *, unsigned long);
	Scaleform::MemItem * AddChild(unsigned long, const char *);
	Scaleform::MemItem * SearchForName(const char *);
	unsigned long SumValues(const char *);
	unsigned long GetValue(const char *);
	unsigned long GetMaxId();
	Scaleform::MemItem & operator=(const Scaleform::MemItem &);
	Scaleform::MemItem & operator/=(unsigned long);
	Scaleform::MemItem & operator*=(unsigned long);
	bool Merge(const Scaleform::MemItem &);
	void Read(Scaleform::File &, unsigned long);
	void Write(Scaleform::File &, unsigned long);
	void ToString(Scaleform::StringBuffer *, unsigned char);
	void ToXml(Scaleform::StringBuffer *, unsigned char);
	virtual ~MemItem();
};
class Scaleform::RefCountBase<Scaleform::MemItem,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::MemItem,2>(Scaleform::RefCountBase<Scaleform::MemItem,2> &);
	RefCountBase<Scaleform::MemItem,2>(const Scaleform::RefCountBase<Scaleform::MemItem,2> &);
	RefCountBase<Scaleform::MemItem,2>();
	virtual ~RefCountBase<Scaleform::MemItem,2>();
	Scaleform::RefCountBase<Scaleform::MemItem,2> & operator=(Scaleform::RefCountBase<Scaleform::MemItem,2> &);
	Scaleform::RefCountBase<Scaleform::MemItem,2> & operator=(const Scaleform::RefCountBase<Scaleform::MemItem,2> &);
};
class Scaleform::Ptr<Scaleform::MemItemExtra>
{
protected:
	Scaleform::MemItemExtra * pObject; // 0x0
public:
	Ptr<Scaleform::MemItemExtra>(const Scaleform::Ptr<Scaleform::MemItemExtra> &);
	Ptr<Scaleform::MemItemExtra>(Scaleform::MemItemExtra *);
	Ptr<Scaleform::MemItemExtra>(Scaleform::Ptr<Scaleform::MemItemExtra> &, Scaleform::PickType);
	Ptr<Scaleform::MemItemExtra>(Scaleform::Pickable<Scaleform::MemItemExtra>);
	Ptr<Scaleform::MemItemExtra>(Scaleform::MemItemExtra &);
	Ptr<Scaleform::MemItemExtra>();
	~Ptr<Scaleform::MemItemExtra>();
	bool operator==(Scaleform::MemItemExtra *);
	bool operator==(const Scaleform::Ptr<Scaleform::MemItemExtra> &);
	bool operator!=(Scaleform::MemItemExtra *);
	bool operator!=(const Scaleform::Ptr<Scaleform::MemItemExtra> &);
	bool operator<(const Scaleform::Ptr<Scaleform::MemItemExtra> &);
	Scaleform::Ptr<Scaleform::MemItemExtra> & operator=(Scaleform::Pickable<Scaleform::MemItemExtra>);
	const Scaleform::Ptr<Scaleform::MemItemExtra> & operator=(Scaleform::MemItemExtra &);
	const Scaleform::Ptr<Scaleform::MemItemExtra> & operator=(Scaleform::MemItemExtra *);
	const Scaleform::Ptr<Scaleform::MemItemExtra> & operator=(const Scaleform::Ptr<Scaleform::MemItemExtra> &);
	Scaleform::Ptr<Scaleform::MemItemExtra> & SetPtr(Scaleform::Pickable<Scaleform::MemItemExtra>);
	Scaleform::Ptr<Scaleform::MemItemExtra> & SetPtr(Scaleform::MemItemExtra &);
	Scaleform::Ptr<Scaleform::MemItemExtra> & SetPtr(Scaleform::MemItemExtra *);
	Scaleform::Ptr<Scaleform::MemItemExtra> & SetPtr(const Scaleform::Ptr<Scaleform::MemItemExtra> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::MemItemExtra * & GetRawRef();
	Scaleform::MemItemExtra * GetPtr();
	Scaleform::MemItemExtra & operator*();
	Scaleform::MemItemExtra * operator->();
	Scaleform::MemItemExtra * operator struct Scaleform::MemItemExtra *();
	Scaleform::Ptr<Scaleform::MemItemExtra> & Pick(Scaleform::MemItemExtra *);
	Scaleform::Ptr<Scaleform::MemItemExtra> & Pick(Scaleform::Pickable<Scaleform::MemItemExtra>);
	Scaleform::Ptr<Scaleform::MemItemExtra> & Pick(Scaleform::Ptr<Scaleform::MemItemExtra> &);
};
class Scaleform::Ptr<Scaleform::MemItem>
{
protected:
	Scaleform::MemItem * pObject; // 0x0
public:
	Ptr<Scaleform::MemItem>(const Scaleform::Ptr<Scaleform::MemItem> &);
	Ptr<Scaleform::MemItem>(Scaleform::MemItem *);
	Ptr<Scaleform::MemItem>(Scaleform::Ptr<Scaleform::MemItem> &, Scaleform::PickType);
	Ptr<Scaleform::MemItem>(Scaleform::Pickable<Scaleform::MemItem>);
	Ptr<Scaleform::MemItem>(Scaleform::MemItem &);
	Ptr<Scaleform::MemItem>();
	~Ptr<Scaleform::MemItem>();
	bool operator==(Scaleform::MemItem *);
	bool operator==(const Scaleform::Ptr<Scaleform::MemItem> &);
	bool operator!=(Scaleform::MemItem *);
	bool operator!=(const Scaleform::Ptr<Scaleform::MemItem> &);
	bool operator<(const Scaleform::Ptr<Scaleform::MemItem> &);
	Scaleform::Ptr<Scaleform::MemItem> & operator=(Scaleform::Pickable<Scaleform::MemItem>);
	const Scaleform::Ptr<Scaleform::MemItem> & operator=(Scaleform::MemItem &);
	const Scaleform::Ptr<Scaleform::MemItem> & operator=(Scaleform::MemItem *);
	const Scaleform::Ptr<Scaleform::MemItem> & operator=(const Scaleform::Ptr<Scaleform::MemItem> &);
	Scaleform::Ptr<Scaleform::MemItem> & SetPtr(Scaleform::Pickable<Scaleform::MemItem>);
	Scaleform::Ptr<Scaleform::MemItem> & SetPtr(Scaleform::MemItem &);
	Scaleform::Ptr<Scaleform::MemItem> & SetPtr(Scaleform::MemItem *);
	Scaleform::Ptr<Scaleform::MemItem> & SetPtr(const Scaleform::Ptr<Scaleform::MemItem> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::MemItem * & GetRawRef();
	Scaleform::MemItem * GetPtr();
	Scaleform::MemItem & operator*();
	Scaleform::MemItem * operator->();
	Scaleform::MemItem * operator struct Scaleform::MemItem *();
	Scaleform::Ptr<Scaleform::MemItem> & Pick(Scaleform::MemItem *);
	Scaleform::Ptr<Scaleform::MemItem> & Pick(Scaleform::Pickable<Scaleform::MemItem>);
	Scaleform::Ptr<Scaleform::MemItem> & Pick(Scaleform::Ptr<Scaleform::MemItem> &);
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::MemItem>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::MemItem>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::MemItem>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::MemItem>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::MemItem>,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Ptr<Scaleform::MemItem>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Ptr<Scaleform::MemItem>,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Ptr<Scaleform::MemItem>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::MemItem>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::MemItem>,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Ptr<Scaleform::MemItem>,2,Scaleform::ArrayDefaultPolicy>();
};