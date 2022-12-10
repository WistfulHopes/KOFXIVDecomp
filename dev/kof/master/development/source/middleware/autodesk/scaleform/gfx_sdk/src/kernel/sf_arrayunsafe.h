#pragma once

void Scaleform::ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> >::Reserve(unsigned long long cap, unsigned long long extraTail); // 0x1403DA9C0
void Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> >::Reserve(unsigned long long cap, unsigned long long extraTail); // 0x1403DAA70
void Scaleform::ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> >::Reserve(unsigned long long cap, unsigned long long extraTail); // 0x140378A20
void Scaleform::ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> >::Reserve(unsigned long long cap, unsigned long long extraTail); // 0x140406530
class Scaleform::ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> >
{
	class SelfType;
	typedef char ValueType;
	struct AllocatorType;
public:
	~ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> >();
	ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> >(const Scaleform::ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> > &);
	ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> >(unsigned long long);
	ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> >();
	void Clear();
	void ClearAndRelease();
	void CutAt(unsigned long long);
	void Reserve(unsigned long long, unsigned long long);
	unsigned long long GetCapacity();
	unsigned long long GetNumBytes();
	void Resize(unsigned long long, unsigned long long);
	void Zero();
	void PushBack(const char &);
	void InsertAt(unsigned long long, const char &);
	void RemoveAt(unsigned long long);
	unsigned long long GetSize();
	const Scaleform::ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> > & operator=(const Scaleform::ArrayUnsafeBase<char,Scaleform::AllocatorGH_POD<char,2> > &);
	char & operator[](unsigned long long);
	const char & operator[](unsigned long long);
	char & At(unsigned long long);
	const char & At(unsigned long long);
	char ValueAt(unsigned long long);
	char * GetDataPtr();
	const char * GetDataPtr();
private:
	char * Data; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Capacity; // 0x10
};
struct Scaleform::AllocatorGH_POD<unsigned char,2> :
	Scaleform::AllocatorBaseGH<2>,
	Scaleform::ConstructorPOD<unsigned char>
{
};
struct Scaleform::AllocatorGH_POD<char,2> :
	Scaleform::AllocatorBaseGH<2>,
	Scaleform::ConstructorPOD<char>
{
};
class Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2> >
{
	class SelfType;
	typedef unsigned char ValueType;
	struct AllocatorType;
public:
	~ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2> >();
	ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2> >(const Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2> > &);
	ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2> >(unsigned long long);
	ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2> >();
	void Clear();
	void ClearAndRelease();
	void CutAt(unsigned long long);
	void Reserve(unsigned long long, unsigned long long);
	unsigned long long GetCapacity();
	unsigned long long GetNumBytes();
	void Resize(unsigned long long, unsigned long long);
	void Zero();
	void PushBack(const unsigned char &);
	void InsertAt(unsigned long long, const unsigned char &);
	void RemoveAt(unsigned long long);
	unsigned long long GetSize();
	const Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2> > & operator=(const Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH_POD<unsigned char,2> > &);
	unsigned char & operator[](unsigned long long);
	const unsigned char & operator[](unsigned long long);
	unsigned char & At(unsigned long long);
	const unsigned char & At(unsigned long long);
	unsigned char ValueAt(unsigned long long);
	unsigned char * GetDataPtr();
	const unsigned char * GetDataPtr();
private:
	unsigned char * Data; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Capacity; // 0x10
};
class Scaleform::ArrayUnsafeBase<short,Scaleform::AllocatorGH<short,2> >
{
	class SelfType;
	typedef short ValueType;
	struct AllocatorType;
public:
	~ArrayUnsafeBase<short,Scaleform::AllocatorGH<short,2> >();
	ArrayUnsafeBase<short,Scaleform::AllocatorGH<short,2> >(const Scaleform::ArrayUnsafeBase<short,Scaleform::AllocatorGH<short,2> > &);
	ArrayUnsafeBase<short,Scaleform::AllocatorGH<short,2> >(unsigned long long);
	ArrayUnsafeBase<short,Scaleform::AllocatorGH<short,2> >();
	void Clear();
	void ClearAndRelease();
	void CutAt(unsigned long long);
	void Reserve(unsigned long long, unsigned long long);
	unsigned long long GetCapacity();
	unsigned long long GetNumBytes();
	void Resize(unsigned long long, unsigned long long);
	void Zero();
	void PushBack(const short &);
	void InsertAt(unsigned long long, const short &);
	void RemoveAt(unsigned long long);
	unsigned long long GetSize();
	const Scaleform::ArrayUnsafeBase<short,Scaleform::AllocatorGH<short,2> > & operator=(const Scaleform::ArrayUnsafeBase<short,Scaleform::AllocatorGH<short,2> > &);
	short & operator[](unsigned long long);
	const short & operator[](unsigned long long);
	short & At(unsigned long long);
	const short & At(unsigned long long);
	short ValueAt(unsigned long long);
	short * GetDataPtr();
	const short * GetDataPtr();
private:
	short * Data; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Capacity; // 0x10
};
struct Scaleform::AllocatorGH<short,2> :
	Scaleform::AllocatorBaseGH<2>,
	Scaleform::ConstructorMov<short>
{
};
class Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH<unsigned char,2> >
{
	class SelfType;
	typedef unsigned char ValueType;
	struct AllocatorType;
public:
	~ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH<unsigned char,2> >();
	ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH<unsigned char,2> >(const Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH<unsigned char,2> > &);
	ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH<unsigned char,2> >(unsigned long long);
	ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH<unsigned char,2> >();
	void Clear();
	void ClearAndRelease();
	void CutAt(unsigned long long);
	void Reserve(unsigned long long, unsigned long long);
	unsigned long long GetCapacity();
	unsigned long long GetNumBytes();
	void Resize(unsigned long long, unsigned long long);
	void Zero();
	void PushBack(const unsigned char &);
	void InsertAt(unsigned long long, const unsigned char &);
	void RemoveAt(unsigned long long);
	unsigned long long GetSize();
	const Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH<unsigned char,2> > & operator=(const Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorGH<unsigned char,2> > &);
	unsigned char & operator[](unsigned long long);
	const unsigned char & operator[](unsigned long long);
	unsigned char & At(unsigned long long);
	const unsigned char & At(unsigned long long);
	unsigned char ValueAt(unsigned long long);
	unsigned char * GetDataPtr();
	const unsigned char * GetDataPtr();
private:
	unsigned char * Data; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Capacity; // 0x10
};
struct Scaleform::AllocatorGH<unsigned char,2> :
	Scaleform::AllocatorBaseGH<2>,
	Scaleform::ConstructorMov<unsigned char>
{
};
class Scaleform::ArrayUnsafeBase<int,Scaleform::AllocatorGH<int,2> >
{
	class SelfType;
	typedef long ValueType;
	struct AllocatorType;
public:
	~ArrayUnsafeBase<int,Scaleform::AllocatorGH<int,2> >();
	ArrayUnsafeBase<int,Scaleform::AllocatorGH<int,2> >(const Scaleform::ArrayUnsafeBase<int,Scaleform::AllocatorGH<int,2> > &);
	ArrayUnsafeBase<int,Scaleform::AllocatorGH<int,2> >(unsigned long long);
	ArrayUnsafeBase<int,Scaleform::AllocatorGH<int,2> >();
	void Clear();
	void ClearAndRelease();
	void CutAt(unsigned long long);
	void Reserve(unsigned long long, unsigned long long);
	unsigned long long GetCapacity();
	unsigned long long GetNumBytes();
	void Resize(unsigned long long, unsigned long long);
	void Zero();
	void PushBack(const long &);
	void InsertAt(unsigned long long, const long &);
	void RemoveAt(unsigned long long);
	unsigned long long GetSize();
	const Scaleform::ArrayUnsafeBase<int,Scaleform::AllocatorGH<int,2> > & operator=(const Scaleform::ArrayUnsafeBase<int,Scaleform::AllocatorGH<int,2> > &);
	long & operator[](unsigned long long);
	const long & operator[](unsigned long long);
	long & At(unsigned long long);
	const long & At(unsigned long long);
	long ValueAt(unsigned long long);
	long * GetDataPtr();
	const long * GetDataPtr();
private:
	long * Data; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Capacity; // 0x10
};
struct Scaleform::AllocatorGH<int,2> :
	Scaleform::AllocatorBaseGH<2>,
	Scaleform::ConstructorMov<int>
{
};
class Scaleform::ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	~ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> >();
	ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> >(const Scaleform::ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> > &);
	ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> >(unsigned long long);
	ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> >();
	void Clear();
	void ClearAndRelease();
	void CutAt(unsigned long long);
	void Reserve(unsigned long long, unsigned long long);
	unsigned long long GetCapacity();
	unsigned long long GetNumBytes();
	void Resize(unsigned long long, unsigned long long);
	void Zero();
	void PushBack(const Scaleform::Render::Texture::UpdateDesc &);
	void InsertAt(unsigned long long, const Scaleform::Render::Texture::UpdateDesc &);
	void RemoveAt(unsigned long long);
	unsigned long long GetSize();
	const Scaleform::ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> > & operator=(const Scaleform::ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> > &);
	Scaleform::Render::Texture::UpdateDesc & operator[](unsigned long long);
	const Scaleform::Render::Texture::UpdateDesc & operator[](unsigned long long);
	Scaleform::Render::Texture::UpdateDesc & At(unsigned long long);
	const Scaleform::Render::Texture::UpdateDesc & At(unsigned long long);
	Scaleform::Render::Texture::UpdateDesc ValueAt(unsigned long long);
	Scaleform::Render::Texture::UpdateDesc * GetDataPtr();
	const Scaleform::Render::Texture::UpdateDesc * GetDataPtr();
private:
	Scaleform::Render::Texture::UpdateDesc * Data; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Capacity; // 0x10
};
class Scaleform::ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	~ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> >();
	ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> >(const Scaleform::ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> > &);
	ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> >(unsigned long long);
	ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> >();
	void Clear();
	void ClearAndRelease();
	void CutAt(unsigned long long);
	void Reserve(unsigned long long, unsigned long long);
	unsigned long long GetCapacity();
	unsigned long long GetNumBytes();
	void Resize(unsigned long long, unsigned long long);
	void Zero();
	void PushBack(const Scaleform::Render::GlyphBand &);
	void InsertAt(unsigned long long, const Scaleform::Render::GlyphBand &);
	void RemoveAt(unsigned long long);
	unsigned long long GetSize();
	const Scaleform::ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> > & operator=(const Scaleform::ArrayUnsafeBase<Scaleform::Render::GlyphBand,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> > &);
	Scaleform::Render::GlyphBand & operator[](unsigned long long);
	const Scaleform::Render::GlyphBand & operator[](unsigned long long);
	Scaleform::Render::GlyphBand & At(unsigned long long);
	const Scaleform::Render::GlyphBand & At(unsigned long long);
	Scaleform::Render::GlyphBand ValueAt(unsigned long long);
	Scaleform::Render::GlyphBand * GetDataPtr();
	const Scaleform::Render::GlyphBand * GetDataPtr();
private:
	Scaleform::Render::GlyphBand * Data; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Capacity; // 0x10
};
class Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> >
{
	class SelfType;
	typedef unsigned char ValueType;
	struct AllocatorType;
public:
	~ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> >();
	ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> >(const Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> > &);
	ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> >(unsigned long long);
	ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> >();
	void Clear();
	void ClearAndRelease();
	void CutAt(unsigned long long);
	void Reserve(unsigned long long, unsigned long long);
	unsigned long long GetCapacity();
	unsigned long long GetNumBytes();
	void Resize(unsigned long long, unsigned long long);
	void Zero();
	void PushBack(const unsigned char &);
	void InsertAt(unsigned long long, const unsigned char &);
	void RemoveAt(unsigned long long);
	unsigned long long GetSize();
	const Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> > & operator=(const Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> > &);
	unsigned char & operator[](unsigned long long);
	const unsigned char & operator[](unsigned long long);
	unsigned char & At(unsigned long long);
	const unsigned char & At(unsigned long long);
	unsigned char ValueAt(unsigned long long);
	unsigned char * GetDataPtr();
	const unsigned char * GetDataPtr();
private:
	unsigned char * Data; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Capacity; // 0x10
};
struct Scaleform::AllocatorLH_POD<unsigned char,261> :
	Scaleform::AllocatorBaseLH<261>,
	Scaleform::ConstructorPOD<unsigned char>
{
};
struct Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> :
	Scaleform::AllocatorBaseLH<2>,
	Scaleform::ConstructorPOD<Scaleform::Render::Texture::UpdateDesc>
{
};
struct Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphBand,75> :
	Scaleform::AllocatorBaseLH<75>,
	Scaleform::ConstructorPOD<Scaleform::Render::GlyphBand>
{
};