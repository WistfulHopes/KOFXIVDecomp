#pragma once

struct Scaleform::GFx::AS3::SDBMHash
{
	static unsigned long long SDBM_Hash(const void *, unsigned long, unsigned long);
};
struct Scaleform::GFx::AS3::DefHTTraits
{
	bool Equal();
};
struct Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd
{
	struct SelfType;
	KeyInd(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::DataInd &);
	KeyInd(unsigned long long);
	KeyInd();
	bool IsValid();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd operator++(long);
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd & operator++();
	bool operator<(unsigned long long);
	Scaleform::GFx::AS3::Object::DynAttrsKey & GetKey(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData &);
	Scaleform::GFx::AS3::Value & GetVal(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData &);
private:
	static unsigned long long GetInvalidValue();
	unsigned long long Ind; // 0x0
};
struct Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RangeUnsafe
{
	class ValueType;
	struct KeyType;
	struct Value;
protected:
	RangeUnsafe(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData *);
	const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData * GetData();
private:
	const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData * RD; // 0x0
};
class Scaleform::GFx::AS3::FixedBitSetView<unsigned __int64>
{
	struct Ref;
	enum <unnamed-enum-DTSize>
	{
		DTSize = 8,
		DTBitSize = 64,
		DTMask = 63,
		DTShift = 6,
	};
public:
	FixedBitSetView<unsigned __int64>(unsigned long long *, unsigned long long);
	unsigned long long GetBitsCount();
	void Set(unsigned long long, bool);
	void Set(unsigned long long);
	void Clear(unsigned long long);
	bool IsSet(unsigned long long);
	Scaleform::GFx::AS3::FixedBitSetView<unsigned __int64>::Ref operator[](unsigned long long);
	bool operator[](unsigned long long);
	static unsigned long long GetFirstSetBit(unsigned long long);
	static unsigned long long GetFirstUnsetBit(unsigned long long);
	unsigned long long GetSectionNum();
	unsigned long long GetSection(unsigned long);
	bool GetPosOfFirstSetBit(unsigned long long &);
	struct ForwardRange1;
	struct ForwardRange1Unsafe;
protected:
	unsigned long long * pData; // 0x0
	unsigned long long BitsCount; // 0x8
};
struct Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::ForwardRangeUnsafe :
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RangeUnsafe
{
protected:
	ForwardRangeUnsafe(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData *, unsigned long long);
public:
	ForwardRangeUnsafe(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332> &, unsigned long long);
	ForwardRangeUnsafe(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332> &);
	bool IsEmpty();
	void PopFront();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd FrontKeyInd();
	unsigned long long FrontKeyIndVal();
	Scaleform::GFx::AS3::Object::DynAttrsKey & FrontKey();
	Scaleform::GFx::AS3::Value & FrontVal();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RangeUnsafe::Value Front();
protected:
	Scaleform::GFx::AS3::FixedBitSetView<unsigned __int64>::ForwardRange1Unsafe br; // 0x8
};
void Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::ForwardRangeUnsafe::PopFront(); // 0x14049ACE0
struct Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::ResultUnsafe :
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RangeUnsafe
{
protected:
	ResultUnsafe(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData *, Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd);
public:
	ResultUnsafe(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332> &, Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd);
	bool IsEmpty();
	void PopFront();
	void PopBack();
	Scaleform::GFx::AS3::Object::DynAttrsKey & FrontKey();
	Scaleform::GFx::AS3::Value & FrontVal();
	Scaleform::GFx::AS3::Object::DynAttrsKey & BackKey();
	Scaleform::GFx::AS3::Value & BackVal();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RangeUnsafe::Value Front();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RangeUnsafe::Value Back();
protected:
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd Ind; // 0x8
};
struct Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd
{
	TblInd(const unsigned long long, const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData &);
	TblInd();
	bool operator==(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd &);
	bool operator!=(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd &);
	bool IsEmpty();
	bool IsValid();
	void FirstBlankBucket(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData &);
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::Bucket & GetBucket(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData &);
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::Bucket * GetBucketPtr(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData &);
private:
	static unsigned long long GetInvalidValue();
	unsigned long long Ind; // 0x0
};
struct Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::DataInd
{
	DataInd(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd &);
	DataInd();
	bool IsEmpty();
	bool IsValid();
	void SetEmpty();
private:
	static unsigned long long GetInvalidValue();
	unsigned long long Ind; // 0x0
};
struct Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::Bucket
{
	bool IsEmpty();
	bool HasNext();
	bool IsLastInChain();
	void SetEmpty();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::DataInd Data; // 0x0
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd Next; // 0x8
	Bucket();
};
struct Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData
{
	unsigned long long * GetBitSetPtr();
	Scaleform::GFx::AS3::Object::DynAttrsKey * GetKeyPtr();
	Scaleform::GFx::AS3::Value * GetValPtr();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::Bucket * GetBucketPtr(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd &);
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::Bucket * GetBucketPtr();
	unsigned long GetTableSize();
	unsigned long GetSizeMask();
	unsigned long GetKeyCapacity();
	unsigned long GetEntryNum();
	unsigned long long GetNumOfBitSetSections();
	unsigned long long GetNumOfBits();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd GetFirstInd();
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd GetNextInd(Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd);
	bool IsEmptyKV(Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd);
	void ForEachKV(void(*)(Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd, Scaleform::GFx::AS3::FixedBitSetView<unsigned __int64> &));
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::Bucket & GetBucket(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd &);
	Scaleform::GFx::AS3::Object::DynAttrsKey & GetKey(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd &);
	Scaleform::GFx::AS3::Value & GetVal(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd &);
	void CleanKV(Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd, Scaleform::GFx::AS3::FixedBitSetView<unsigned __int64> &);
	bool IsEmptyBucket(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd &);
	bool HasNext(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd &);
	bool IsLastInChain(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd &);
	void Add(const Scaleform::GFx::AS3::Object::DynAttrsKey &, const Scaleform::GFx::AS3::Value &, const unsigned long long);
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd AddKeyValue(const Scaleform::GFx::AS3::Object::DynAttrsKey &, const Scaleform::GFx::AS3::Value &);
	unsigned long long GetHashValue(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd &);
	void SetAdd(const Scaleform::GFx::AS3::Object::DynAttrsKey &, const Scaleform::GFx::AS3::Value &, const unsigned long long);
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd Find(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
	void RemoveKeyValue(const Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd &);
	bool Remove(const Scaleform::GFx::AS3::Object::DynAttrsKey &);
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd GetFirstBlankKeyInd(const Scaleform::GFx::AS3::FixedBitSetView<unsigned __int64> &);
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd GetFirstBlankBucketInd(Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::TblInd);
	void DestroyKV();
	RawData();
	unsigned long SizeMask; // 0x0
	unsigned long KeyCapacity; // 0x4
	unsigned long EntryNum; // 0x8
	Scaleform::MemoryHeap * MHeap; // 0x10
	Scaleform::GFx::AS3::Object::DynAttrsKey * KeyPtr; // 0x18
	Scaleform::GFx::AS3::Value * ValuePtr; // 0x20
	Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::Bucket * BucketPtr; // 0x28
	unsigned long long BitSet[1]; // 0x30
};
void Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData::ForEachKV(void(*funct)(Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd, Scaleform::GFx::AS3::FixedBitSetView<unsigned __int64> &)); // 0x140480940
void Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData::CleanKV(Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd ind, Scaleform::GFx::AS3::FixedBitSetView<unsigned __int64> & v); // 0x140465230
void Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData::Add(const Scaleform::GFx::AS3::Object::DynAttrsKey & k, const Scaleform::GFx::AS3::Value & v, const unsigned long long hashValue); // 0x14045BAF0
Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::KeyInd Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData::AddKeyValue(const Scaleform::GFx::AS3::Object::DynAttrsKey & k, const Scaleform::GFx::AS3::Value & v); // 0x14045DCC0
void Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData::SetAdd(const Scaleform::GFx::AS3::Object::DynAttrsKey & k, const Scaleform::GFx::AS3::Value & v, const unsigned long long hashValue); // 0x1404A7A20
bool Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::RawData::Remove(const Scaleform::GFx::AS3::Object::DynAttrsKey & k); // 0x1404A16F0
void Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::SetTableSize(unsigned long newTableSize, Scaleform::MemoryHeap * mh, const unsigned long sid); // 0x1404AA930
void Scaleform::GFx::AS3::HashTable<Scaleform::GFx::AS3::Object::DynAttrsKey,Scaleform::GFx::AS3::Value,Scaleform::GFx::AS3::Object::DynAttrsKey::HashFunctor,332>::CheckExpand(Scaleform::MemoryHeap * mh, const unsigned long sid); // 0x140465090