#pragma once

struct Scaleform::Render::Text::Style :
	Scaleform::NewOverrideBase<74>
{
	Scaleform::Render::Text::TextFormat mTextFormat; // 0x0
	Scaleform::Render::Text::ParagraphFormat mParagraphFormat; // 0x50
	Style(Scaleform::Render::Text::Style &);
	Style(const Scaleform::Render::Text::Style &);
	Style(Scaleform::MemoryHeap *);
	void Reset();
	~Style();
	Scaleform::Render::Text::Style & operator=(Scaleform::Render::Text::Style &);
	Scaleform::Render::Text::Style & operator=(const Scaleform::Render::Text::Style &);
};
class Scaleform::Render::Text::StyleManagerBase
{
	enum KeyType
	{
		CSS_Tag = 0,
		CSS_Class = 1,
		CSS_None = 2,
	};
public:
	~StyleManagerBase();
	const Scaleform::Render::Text::Style * GetStyle(Scaleform::Render::Text::StyleManagerBase::KeyType, const wchar_t *, unsigned long long);
	const Scaleform::Render::Text::Style * GetStyle(Scaleform::Render::Text::StyleManagerBase::KeyType, const char *, unsigned long long);
	const Scaleform::Render::Text::Style * GetStyle(Scaleform::Render::Text::StyleManagerBase::KeyType, const Scaleform::String &);
	StyleManagerBase(const Scaleform::Render::Text::StyleManagerBase &);
	StyleManagerBase();
	Scaleform::Render::Text::StyleManagerBase & operator=(const Scaleform::Render::Text::StyleManagerBase &);
};
class Scaleform::Render::Text::Paragraph :
	Scaleform::NewOverrideBase<74>
{
	class TextFormatArrayType;
	class TextFormatRunType;
	class TextBuffer;
public:
	void SetStartIndex(unsigned long long);
	Scaleform::Render::Text::TextFormat * GetTextFormatPtr(unsigned long long);
	void SetFormat(Scaleform::Render::Text::Allocator *, const Scaleform::Render::Text::ParagraphFormat &);
	void SetFormat(const Scaleform::Render::Text::ParagraphFormat *);
	void AppendTermNull(Scaleform::Render::Text::Allocator *, const Scaleform::Render::Text::TextFormat *);
	void RemoveTermNull();
	bool HasTermNull();
	bool HasNewLine();
	void SetTermNullFormat();
	bool IsEmpty();
	void MarkToReformat();
	struct StyledTextRun;
	class FormatRunIterator;
	struct CharacterInfo;
	class CharactersIterator;
	Scaleform::Render::Text::Paragraph::CharactersIterator GetCharactersIterator(unsigned long long);
	Scaleform::Render::Text::Paragraph::CharactersIterator GetCharactersIterator();
	Paragraph();
	Paragraph(const Scaleform::Render::Text::Paragraph &, Scaleform::Render::Text::Allocator *);
	Paragraph(Scaleform::Render::Text::Allocator *);
private:
	Paragraph(const Scaleform::Render::Text::Paragraph &);
public:
	~Paragraph();
	Scaleform::Render::Text::Paragraph::FormatRunIterator GetIterator();
	Scaleform::Render::Text::Paragraph::FormatRunIterator GetIteratorAt(unsigned long long);
	unsigned long long GetStartIndex();
	unsigned long long GetLength();
	unsigned long long GetSize();
	unsigned long long GetNextIndex();
	wchar_t * GetText();
	const wchar_t * GetText();
	wchar_t * CreatePosition(Scaleform::Render::Text::Allocator *, unsigned long long, unsigned long long);
	void InsertString(Scaleform::Render::Text::Allocator *, const wchar_t *, unsigned long long, unsigned long long);
	void InsertString(Scaleform::Render::Text::Allocator *, const wchar_t *, unsigned long long, unsigned long long, const Scaleform::Render::Text::TextFormat *);
	void AppendPlainText(Scaleform::Render::Text::Allocator *, const char *, unsigned long long);
	void AppendPlainText(Scaleform::Render::Text::Allocator *, const wchar_t *, unsigned long long);
	void Remove(unsigned long long, unsigned long long);
	void Clear();
	void FreeText(Scaleform::Render::Text::Allocator *);
	void SetText(Scaleform::Render::Text::Allocator *, const wchar_t *, unsigned long long);
	void SetTextFormat(Scaleform::Render::Text::Allocator *, const Scaleform::Render::Text::TextFormat &, unsigned long long, unsigned long long);
	Scaleform::Render::Text::TextFormat GetTextFormat(unsigned long long, unsigned long long);
	void ClearTextFormat(unsigned long long, unsigned long long);
	const Scaleform::Render::Text::ParagraphFormat * GetFormat();
	unsigned long GetId();
	unsigned short GetModCounter();
	void Copy(Scaleform::Render::Text::Allocator *, const Scaleform::Render::Text::Paragraph &, unsigned long long, unsigned long long, unsigned long long);
	void Shrink(unsigned long long);
	void CheckIntegrity();
private:
	Scaleform::Render::Text::Paragraph::TextBuffer Text; // 0x0
	Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> pFormat; // 0x18
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > FormatInfo; // 0x20
	unsigned long long StartIndex; // 0x38
	unsigned long UniqueId; // 0x40
	unsigned short ModCounter; // 0x44
};
class Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,Scaleform::AllocatorLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > :
	Scaleform::Range
{
private:
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> Data; // 0x10
public:
	RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >(Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > &);
	RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >(const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > &);
	RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >(long long, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >();
	const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & GetData();
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & GetData();
	const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & operator->();
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & operator->();
	const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & operator*();
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & operator*();
	void SetData(const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	bool IsDataEqual(const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	~RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >();
	Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > & operator=(Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > &);
	Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > & operator=(const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > &);
};
class Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >
{
private:
	unsigned long long FindRangeIndex(long long);
	unsigned long long FindNearestRangeIndex(long long);
	class TypedRangeData;
	class RangeArrayType;
public:
	Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> Ranges; // 0x0
	const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > & operator[](unsigned long long);
	Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > & operator[](unsigned long long);
	unsigned long long Count();
	void SetRange(const Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > &);
	void SetRange(long long, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	void ClearRange(long long, unsigned long long);
	Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> > & Append(unsigned long long, const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	void InsertRange(long long, unsigned long long, const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	void ExpandRange(long long, unsigned long long);
	void RemoveRange(long long, unsigned long long);
	void RemoveAll();
	class Iterator;
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator Begin();
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator Begin();
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator Last();
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator Last();
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator GetIteratorAt(long long);
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator GetIteratorAt(long long);
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator GetIteratorByNearestIndex(long long);
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::Iterator GetIteratorByNearestIndex(long long);
	class ConstIterator;
	class ConstPositionIterator;
	void CheckIntegrity();
	RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > &);
	RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > &);
	RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >();
	~RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > &);
};
class Scaleform::Ptr<Scaleform::Render::Text::TextFormat>
{
protected:
	Scaleform::Render::Text::TextFormat * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::TextFormat>(const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	Ptr<Scaleform::Render::Text::TextFormat>(Scaleform::Render::Text::TextFormat *);
	Ptr<Scaleform::Render::Text::TextFormat>(Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::TextFormat>(Scaleform::Pickable<Scaleform::Render::Text::TextFormat>);
	Ptr<Scaleform::Render::Text::TextFormat>(Scaleform::Render::Text::TextFormat &);
	Ptr<Scaleform::Render::Text::TextFormat>();
	~Ptr<Scaleform::Render::Text::TextFormat>();
	bool operator==(Scaleform::Render::Text::TextFormat *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	bool operator!=(Scaleform::Render::Text::TextFormat *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & operator=(Scaleform::Pickable<Scaleform::Render::Text::TextFormat>);
	const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & operator=(Scaleform::Render::Text::TextFormat &);
	const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & operator=(Scaleform::Render::Text::TextFormat *);
	const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::TextFormat>);
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & SetPtr(Scaleform::Render::Text::TextFormat &);
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & SetPtr(Scaleform::Render::Text::TextFormat *);
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::TextFormat * & GetRawRef();
	Scaleform::Render::Text::TextFormat * GetPtr();
	Scaleform::Render::Text::TextFormat & operator*();
	Scaleform::Render::Text::TextFormat * operator->();
	Scaleform::Render::Text::TextFormat * operator class Scaleform::Render::Text::TextFormat *();
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & Pick(Scaleform::Render::Text::TextFormat *);
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & Pick(Scaleform::Pickable<Scaleform::Render::Text::TextFormat>);
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> & Pick(Scaleform::Ptr<Scaleform::Render::Text::TextFormat> &);
};
class Scaleform::Render::Text::Paragraph::TextBuffer
{
private:
	wchar_t * pText; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Allocated; // 0x10
public:
	TextBuffer(const Scaleform::Render::Text::Paragraph::TextBuffer &, Scaleform::Render::Text::Allocator *);
	TextBuffer();
private:
	TextBuffer(const Scaleform::Render::Text::Paragraph::TextBuffer &);
public:
	~TextBuffer();
	wchar_t * ToWStr();
	unsigned long long GetSize();
	unsigned long long GetLength();
	const wchar_t * GetCharPtrAt(unsigned long long);
	void SetString(Scaleform::Render::Text::Allocator *, const wchar_t *, unsigned long long);
	void SetString(Scaleform::Render::Text::Allocator *, const char *, unsigned long long);
	wchar_t * CreatePosition(Scaleform::Render::Text::Allocator *, unsigned long long, unsigned long long);
	void Remove(unsigned long long, unsigned long long);
	void Clear();
	void Free(Scaleform::Render::Text::Allocator *);
	static long long StrChr(const wchar_t *, unsigned long long, wchar_t);
	long long StrChr(wchar_t);
	void StripTrailingNewLines();
	void StripTrailingNull();
	void AppendTrailingNull(Scaleform::Render::Text::Allocator *);
	static unsigned long long StrLen(const wchar_t *);
private:
	Scaleform::Render::Text::Paragraph::TextBuffer & operator=(Scaleform::Render::Text::Paragraph::TextBuffer &);
};
struct Scaleform::Render::Text::Paragraph::StyledTextRun
{
	const wchar_t * pText; // 0x0
	long long Index; // 0x8
	unsigned long long Length; // 0x10
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> pFormat; // 0x18
	StyledTextRun(Scaleform::Render::Text::Paragraph::StyledTextRun &);
	StyledTextRun(const Scaleform::Render::Text::Paragraph::StyledTextRun &);
	StyledTextRun(const wchar_t *, long long, unsigned long long, Scaleform::Render::Text::TextFormat *);
	StyledTextRun();
	Scaleform::Render::Text::Paragraph::StyledTextRun & Set(const wchar_t *, long long, unsigned long long, Scaleform::Render::Text::TextFormat *);
	~StyledTextRun();
	Scaleform::Render::Text::Paragraph::StyledTextRun & operator=(Scaleform::Render::Text::Paragraph::StyledTextRun &);
	Scaleform::Render::Text::Paragraph::StyledTextRun & operator=(const Scaleform::Render::Text::Paragraph::StyledTextRun &);
};
Scaleform::Render::Text::Paragraph::StyledTextRun & Scaleform::Render::Text::Paragraph::StyledTextRun::Set(const wchar_t * ptext, long long index, unsigned long long len, Scaleform::Render::Text::TextFormat * pfmt); // 0x1402FFDE0
class Scaleform::Render::Text::Paragraph::FormatRunIterator
{
private:
	Scaleform::Render::Text::Paragraph::StyledTextRun PlaceHolder; // 0x0
	const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > * pFormatInfo; // 0x20
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator FormatIterator; // 0x28
	const Scaleform::Render::Text::Paragraph::TextBuffer * pText; // 0x38
	unsigned long long CurTextIndex; // 0x40
public:
	FormatRunIterator(const Scaleform::Render::Text::Paragraph::FormatRunIterator &);
	FormatRunIterator(const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > &, const Scaleform::Render::Text::Paragraph::TextBuffer &, unsigned long long);
	FormatRunIterator(const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > &, const Scaleform::Render::Text::Paragraph::TextBuffer &);
	Scaleform::Render::Text::Paragraph::FormatRunIterator & operator=(const Scaleform::Render::Text::Paragraph::FormatRunIterator &);
	bool IsFinished();
	const Scaleform::Render::Text::Paragraph::StyledTextRun & operator*();
	const Scaleform::Render::Text::Paragraph::StyledTextRun * operator->();
	void operator++(long);
	void operator++();
	void SetTextPos(unsigned long long);
	~FormatRunIterator();
};
struct Scaleform::Render::Text::Paragraph::CharacterInfo
{
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> pFormat; // 0x0
	unsigned long long Index; // 0x8
	wchar_t Character; // 0x10
	CharacterInfo(Scaleform::Render::Text::Paragraph::CharacterInfo &);
	CharacterInfo(const Scaleform::Render::Text::Paragraph::CharacterInfo &);
	CharacterInfo(wchar_t, unsigned long long, Scaleform::Render::Text::TextFormat *);
	CharacterInfo();
	~CharacterInfo();
	Scaleform::Render::Text::Paragraph::CharacterInfo & operator=(Scaleform::Render::Text::Paragraph::CharacterInfo &);
	Scaleform::Render::Text::Paragraph::CharacterInfo & operator=(const Scaleform::Render::Text::Paragraph::CharacterInfo &);
};
class Scaleform::Render::Text::Paragraph::CharactersIterator
{
private:
	Scaleform::Render::Text::Paragraph::CharacterInfo PlaceHolder; // 0x0
	const Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> > * pFormatInfo; // 0x18
	Scaleform::RangeDataArray<Scaleform::Ptr<Scaleform::Render::Text::TextFormat>,Scaleform::ArrayLH<Scaleform::RangeData<Scaleform::Ptr<Scaleform::Render::Text::TextFormat> >,2,Scaleform::ArrayDefaultPolicy> >::ConstIterator FormatIterator; // 0x20
	const Scaleform::Render::Text::Paragraph::TextBuffer * pText; // 0x30
	unsigned long long CurTextIndex; // 0x38
public:
	CharactersIterator(Scaleform::Render::Text::Paragraph::CharactersIterator &);
	CharactersIterator(const Scaleform::Render::Text::Paragraph::CharactersIterator &);
	CharactersIterator(const Scaleform::Render::Text::Paragraph *, unsigned long long);
	CharactersIterator(const Scaleform::Render::Text::Paragraph *);
	CharactersIterator(const Scaleform::Render::Text::Paragraph::TextBuffer &);
	CharactersIterator();
	bool IsFinished();
	const Scaleform::Render::Text::Paragraph::CharacterInfo & operator*();
	Scaleform::Render::Text::Paragraph::CharacterInfo & operator*();
	const Scaleform::Render::Text::Paragraph::CharacterInfo * operator->();
	Scaleform::Render::Text::Paragraph::CharacterInfo * operator->();
	void operator++(long);
	void operator++();
	void operator+=(unsigned long long);
	const wchar_t * GetRemainingTextPtr(unsigned long long *);
	unsigned long long GetCurTextIndex();
	~CharactersIterator();
	Scaleform::Render::Text::Paragraph::CharactersIterator & operator=(Scaleform::Render::Text::Paragraph::CharactersIterator &);
	Scaleform::Render::Text::Paragraph::CharactersIterator & operator=(const Scaleform::Render::Text::Paragraph::CharactersIterator &);
};
void Scaleform::Render::Text::Paragraph::InsertString(Scaleform::Render::Text::Allocator * pallocator, const wchar_t * pstr, unsigned long long pos, unsigned long long length); // 0x1402FE460
class Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat>
{
protected:
	Scaleform::Render::Text::ParagraphFormat * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::ParagraphFormat>(const Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> &);
	Ptr<Scaleform::Render::Text::ParagraphFormat>(Scaleform::Render::Text::ParagraphFormat *);
	Ptr<Scaleform::Render::Text::ParagraphFormat>(Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::ParagraphFormat>(Scaleform::Pickable<Scaleform::Render::Text::ParagraphFormat>);
	Ptr<Scaleform::Render::Text::ParagraphFormat>(Scaleform::Render::Text::ParagraphFormat &);
	Ptr<Scaleform::Render::Text::ParagraphFormat>();
	~Ptr<Scaleform::Render::Text::ParagraphFormat>();
	bool operator==(Scaleform::Render::Text::ParagraphFormat *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> &);
	bool operator!=(Scaleform::Render::Text::ParagraphFormat *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> &);
	Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & operator=(Scaleform::Pickable<Scaleform::Render::Text::ParagraphFormat>);
	const Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & operator=(Scaleform::Render::Text::ParagraphFormat &);
	const Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & operator=(Scaleform::Render::Text::ParagraphFormat *);
	const Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> &);
	Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::ParagraphFormat>);
	Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & SetPtr(Scaleform::Render::Text::ParagraphFormat &);
	Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & SetPtr(Scaleform::Render::Text::ParagraphFormat *);
	Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::ParagraphFormat * & GetRawRef();
	Scaleform::Render::Text::ParagraphFormat * GetPtr();
	Scaleform::Render::Text::ParagraphFormat & operator*();
	Scaleform::Render::Text::ParagraphFormat * operator->();
	Scaleform::Render::Text::ParagraphFormat * operator class Scaleform::Render::Text::ParagraphFormat *();
	Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & Pick(Scaleform::Render::Text::ParagraphFormat *);
	Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & Pick(Scaleform::Pickable<Scaleform::Render::Text::ParagraphFormat>);
	Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> & Pick(Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> &);
};
class Scaleform::RefCountBaseNTS<Scaleform::Render::Text::StyledText,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBaseNTS<Scaleform::Render::Text::StyledText,74>(Scaleform::RefCountBaseNTS<Scaleform::Render::Text::StyledText,74> &);
	RefCountBaseNTS<Scaleform::Render::Text::StyledText,74>(const Scaleform::RefCountBaseNTS<Scaleform::Render::Text::StyledText,74> &);
	RefCountBaseNTS<Scaleform::Render::Text::StyledText,74>();
	virtual ~RefCountBaseNTS<Scaleform::Render::Text::StyledText,74>();
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::StyledText,74> & operator=(Scaleform::RefCountBaseNTS<Scaleform::Render::Text::StyledText,74> &);
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::StyledText,74> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::Render::Text::StyledText,74> &);
};
class Scaleform::Render::Text::StyledText :
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::StyledText,74>
{
	class ParagraphPtrWrapper;
	struct HTMLImageTagInfo;
	class HTMLImageTagInfoArray;
	class ParagraphArrayType;
	class ParagraphsIterator;
	class ParagraphsConstIterator;
	struct CharacterInfo;
	class CharactersIterator;
	struct ParagraphComparator;
private:
	void EnsureTermNull();
public:
	StyledText(const Scaleform::Render::Text::StyledText &);
	StyledText(Scaleform::Render::Text::Allocator *);
	StyledText();
	virtual ~StyledText();
	void Clear();
	unsigned long long GetLength();
	void SetText(const wchar_t *, unsigned long long);
	void SetText(const char *, unsigned long long);
	void GetText(Scaleform::WStringBuffer *, unsigned long long, unsigned long long);
	void GetText(Scaleform::WStringBuffer *);
	Scaleform::String & GetText(Scaleform::String *);
	Scaleform::String GetText();
	Scaleform::Render::Text::StyledText * CopyStyledText(unsigned long long, unsigned long long);
	void CopyStyledText(Scaleform::Render::Text::StyledText *, unsigned long long, unsigned long long);
	void SetHtml(const wchar_t *, unsigned long long);
	void SetHtml(const Scaleform::String &);
	Scaleform::StringBuffer & GetHtml(Scaleform::StringBuffer *);
	Scaleform::String & GetHtml(Scaleform::String *);
	Scaleform::String GetHtml();
	bool GetTextAndParagraphFormat(const Scaleform::Render::Text::TextFormat * *, const Scaleform::Render::Text::ParagraphFormat * *, unsigned long long);
	void GetTextAndParagraphFormat(Scaleform::Render::Text::TextFormat *, Scaleform::Render::Text::ParagraphFormat *, unsigned long long, unsigned long long);
	void SetTextFormat(const Scaleform::Render::Text::TextFormat &, unsigned long long, unsigned long long);
	void SetParagraphFormat(const Scaleform::Render::Text::ParagraphFormat &, unsigned long long, unsigned long long);
	void ClearTextFormat(unsigned long long, unsigned long long);
	void SetDefaultTextFormat(const Scaleform::Render::Text::TextFormat &);
	void SetDefaultTextFormat(const Scaleform::Render::Text::TextFormat *);
	void SetDefaultParagraphFormat(const Scaleform::Render::Text::ParagraphFormat &);
	void SetDefaultParagraphFormat(const Scaleform::Render::Text::ParagraphFormat *);
	const Scaleform::Render::Text::TextFormat * GetDefaultTextFormat();
	const Scaleform::Render::Text::ParagraphFormat * GetDefaultParagraphFormat();
	const Scaleform::Render::Text::Paragraph * GetParagraph(unsigned long);
	unsigned long GetParagraphsCount();
	wchar_t * CreatePosition(unsigned long long, unsigned long long);
	enum NewLinePolicy
	{
		NLP_CompressCRLF = 0,
		NLP_ReplaceCRLF = 1,
		NLP_IgnoreCRLF = 2,
	};
	unsigned long long AppendString(const wchar_t *, unsigned long long, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	unsigned long long AppendString(const wchar_t *, unsigned long long, Scaleform::Render::Text::StyledText::NewLinePolicy, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	unsigned long long AppendString(const wchar_t *, unsigned long long, Scaleform::Render::Text::StyledText::NewLinePolicy);
	unsigned long long AppendString(const char *, unsigned long long, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	unsigned long long AppendString(const char *, unsigned long long, Scaleform::Render::Text::StyledText::NewLinePolicy, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	unsigned long long AppendString(const char *, unsigned long long, Scaleform::Render::Text::StyledText::NewLinePolicy);
	unsigned long long InsertString(const wchar_t *, unsigned long long, unsigned long long, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	unsigned long long InsertString(const wchar_t *, unsigned long long, unsigned long long, Scaleform::Render::Text::StyledText::NewLinePolicy, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	unsigned long long InsertString(const wchar_t *, unsigned long long, unsigned long long, Scaleform::Render::Text::StyledText::NewLinePolicy);
	unsigned long long InsertStyledText(const Scaleform::Render::Text::StyledText &, unsigned long long, unsigned long long);
	void Remove(unsigned long long, unsigned long long);
	Scaleform::Render::Text::StyledText::CharactersIterator GetCharactersIterator();
	void SetNewLine0D();
	void ClearNewLine0D();
	bool IsNewLine0D();
	unsigned char NewLineChar();
	const char * NewLineStr();
	void CheckIntegrity();
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator GetParagraphByIndex(unsigned long long, unsigned long long *);
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator GetParagraphByIndex(unsigned long long, unsigned long long *);
protected:
	bool ParseHtml(const wchar_t *, unsigned long long, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *, bool, bool, const Scaleform::Render::Text::StyleManagerBase *, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	bool ParseHtml(const char *, unsigned long long, Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> *, bool, bool, const Scaleform::Render::Text::StyleManagerBase *, const Scaleform::Render::Text::TextFormat *, const Scaleform::Render::Text::ParagraphFormat *);
	void RemoveParagraph(Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator &, Scaleform::Render::Text::Paragraph *);
	Scaleform::MemoryHeap * GetHeap();
	Scaleform::Render::Text::Allocator * GetAllocator();
	void SetMayHaveUrl();
	void ClearMayHaveUrl();
	bool MayHaveUrl();
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator GetNearestParagraphByIndex(unsigned long long, unsigned long long *);
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator GetNearestParagraphByIndex(unsigned long long, unsigned long long *);
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator GetParagraphIterator();
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator GetParagraphIterator();
	Scaleform::Render::Text::Paragraph * AppendNewParagraph(const Scaleform::Render::Text::ParagraphFormat *);
	Scaleform::Render::Text::Paragraph * InsertNewParagraph(Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator &, const Scaleform::Render::Text::ParagraphFormat *);
	Scaleform::Render::Text::Paragraph * AppendCopyOfParagraph(const Scaleform::Render::Text::Paragraph &);
	Scaleform::Render::Text::Paragraph * InsertCopyOfParagraph(Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator &, const Scaleform::Render::Text::Paragraph &);
	const Scaleform::Render::Text::Paragraph * GetLastParagraph();
	Scaleform::Render::Text::Paragraph * GetLastParagraph();
	void OnTextInserting(unsigned long long, unsigned long long, const char *);
	void OnTextInserting(unsigned long long, unsigned long long, const wchar_t *);
	void OnTextRemoving(unsigned long long, unsigned long long);
	void OnTextInserted(unsigned long long, unsigned long long, const wchar_t *);
	void OnParagraphRemoving(const Scaleform::Render::Text::Paragraph &);
	void OnDocumentChanged();
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> pTextAllocator; // 0x10
	Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> Paragraphs; // 0x18
	Scaleform::Ptr<Scaleform::Render::Text::ParagraphFormat> pDefaultParagraphFormat; // 0x30
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> pDefaultTextFormat; // 0x38
	enum <unnamed-enum-RTFlags_MayHaveUrl>
	{
		RTFlags_MayHaveUrl = 1,
		RTFlags_NewLine0D = 2,
	};
	unsigned char RTFlags; // 0x40
public:
	Scaleform::Render::Text::StyledText & operator=(const Scaleform::Render::Text::StyledText &);
};
class Scaleform::Render::Text::StyledText::ParagraphPtrWrapper
{
private:
	Scaleform::Render::Text::Paragraph * pPara; // 0x0
public:
	ParagraphPtrWrapper(const Scaleform::Render::Text::StyledText::ParagraphPtrWrapper &);
	ParagraphPtrWrapper(const Scaleform::Render::Text::Paragraph *);
	ParagraphPtrWrapper(Scaleform::Render::Text::Paragraph *);
	ParagraphPtrWrapper();
	~ParagraphPtrWrapper();
	const Scaleform::Render::Text::Paragraph & operator*();
	Scaleform::Render::Text::Paragraph & operator*();
	const Scaleform::Render::Text::Paragraph * operator->();
	Scaleform::Render::Text::Paragraph * operator->();
	const Scaleform::Render::Text::Paragraph * GetPtr();
	Scaleform::Render::Text::Paragraph * GetPtr();
	Scaleform::Render::Text::Paragraph * operator class Scaleform::Render::Text::Paragraph *();
	const Scaleform::Render::Text::Paragraph * operator const class Scaleform::Render::Text::Paragraph *();
	Scaleform::Render::Text::StyledText::ParagraphPtrWrapper & operator=(const Scaleform::Render::Text::StyledText::ParagraphPtrWrapper &);
	Scaleform::Render::Text::StyledText::ParagraphPtrWrapper & operator=(Scaleform::Render::Text::Paragraph *);
	Scaleform::Render::Text::StyledText::ParagraphPtrWrapper & operator=(const Scaleform::Render::Text::Paragraph *);
	bool operator==(const Scaleform::Render::Text::Paragraph *);
	bool operator==(const Scaleform::Render::Text::StyledText::ParagraphPtrWrapper &);
};
struct Scaleform::Render::Text::StyledText::HTMLImageTagInfo :
	Scaleform::NewOverrideBase<74>
{
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> pTextImageDesc; // 0x0
	Scaleform::StringDH Url; // 0x8
	Scaleform::StringDH Id; // 0x18
	unsigned long Width; // 0x28
	unsigned long Height; // 0x2C
	long VSpace; // 0x30
	long HSpace; // 0x34
	unsigned long ParaId; // 0x38
	enum <unnamed-enum-Align_BaseLine>
	{
		Align_BaseLine = 0,
		Align_Right = 1,
		Align_Left = 2,
	};
	unsigned char Alignment; // 0x3C
	HTMLImageTagInfo(Scaleform::Render::Text::StyledText::HTMLImageTagInfo &);
	HTMLImageTagInfo(const Scaleform::Render::Text::StyledText::HTMLImageTagInfo &);
	HTMLImageTagInfo(Scaleform::MemoryHeap *);
	~HTMLImageTagInfo();
	Scaleform::Render::Text::StyledText::HTMLImageTagInfo & operator=(Scaleform::Render::Text::StyledText::HTMLImageTagInfo &);
	Scaleform::Render::Text::StyledText::HTMLImageTagInfo & operator=(const Scaleform::Render::Text::StyledText::HTMLImageTagInfo &);
};
class Scaleform::Ptr<Scaleform::Render::Text::ImageDesc>
{
protected:
	Scaleform::Render::Text::ImageDesc * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::ImageDesc>(const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
	Ptr<Scaleform::Render::Text::ImageDesc>(Scaleform::Render::Text::ImageDesc *);
	Ptr<Scaleform::Render::Text::ImageDesc>(Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::ImageDesc>(Scaleform::Pickable<Scaleform::Render::Text::ImageDesc>);
	Ptr<Scaleform::Render::Text::ImageDesc>(Scaleform::Render::Text::ImageDesc &);
	Ptr<Scaleform::Render::Text::ImageDesc>();
	~Ptr<Scaleform::Render::Text::ImageDesc>();
	bool operator==(Scaleform::Render::Text::ImageDesc *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
	bool operator!=(Scaleform::Render::Text::ImageDesc *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & operator=(Scaleform::Pickable<Scaleform::Render::Text::ImageDesc>);
	const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & operator=(Scaleform::Render::Text::ImageDesc &);
	const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & operator=(Scaleform::Render::Text::ImageDesc *);
	const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::ImageDesc>);
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & SetPtr(Scaleform::Render::Text::ImageDesc &);
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & SetPtr(Scaleform::Render::Text::ImageDesc *);
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::ImageDesc * & GetRawRef();
	Scaleform::Render::Text::ImageDesc * GetPtr();
	Scaleform::Render::Text::ImageDesc & operator*();
	Scaleform::Render::Text::ImageDesc * operator->();
	Scaleform::Render::Text::ImageDesc * operator struct Scaleform::Render::Text::ImageDesc *();
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & Pick(Scaleform::Render::Text::ImageDesc *);
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & Pick(Scaleform::Pickable<Scaleform::Render::Text::ImageDesc>);
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> & Pick(Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> &);
};
class Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayDataDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,Scaleform::AllocatorDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, const Scaleform::ArrayDefaultPolicy &);
	ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *, long);
	ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy>(Scaleform::MemoryHeap *);
	const Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayDH<Scaleform::Render::Text::StyledText::HTMLImageTagInfo,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::Render::Text::StyledText::CharacterInfo
{
	Scaleform::Ptr<Scaleform::Render::Text::TextFormat> pOriginalFormat; // 0x0
	Scaleform::Render::Text::Paragraph * pParagraph; // 0x8
	unsigned long long Index; // 0x10
	wchar_t Character; // 0x18
	CharacterInfo(Scaleform::Render::Text::StyledText::CharacterInfo &);
	CharacterInfo(const Scaleform::Render::Text::StyledText::CharacterInfo &);
	CharacterInfo();
	~CharacterInfo();
	Scaleform::Render::Text::StyledText::CharacterInfo & operator=(Scaleform::Render::Text::StyledText::CharacterInfo &);
	Scaleform::Render::Text::StyledText::CharacterInfo & operator=(const Scaleform::Render::Text::StyledText::CharacterInfo &);
};
class Scaleform::Render::Text::StyledText::CharactersIterator
{
private:
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,Scaleform::AllocatorLH<Scaleform::Render::Text::StyledText::ParagraphPtrWrapper,2>,Scaleform::ArrayDefaultPolicy> >::Iterator Paragraphs; // 0x0
	Scaleform::Render::Text::Paragraph::CharactersIterator Characters; // 0x10
	Scaleform::Ptr<Scaleform::Render::Text::StyledText> pText; // 0x50
	unsigned long long FirstCharInParagraphIndex; // 0x58
	Scaleform::Render::Text::StyledText::CharacterInfo CharInfoPlaceHolder; // 0x60
public:
	CharactersIterator(Scaleform::Render::Text::StyledText::CharactersIterator &);
	CharactersIterator(const Scaleform::Render::Text::StyledText::CharactersIterator &);
	CharactersIterator(Scaleform::Render::Text::StyledText *, long);
	CharactersIterator(Scaleform::Render::Text::StyledText *);
	bool IsFinished();
	Scaleform::Render::Text::StyledText::CharacterInfo & operator*();
	void operator++(long);
	void operator++();
	~CharactersIterator();
	Scaleform::Render::Text::StyledText::CharactersIterator & operator=(Scaleform::Render::Text::StyledText::CharactersIterator &);
	Scaleform::Render::Text::StyledText::CharactersIterator & operator=(const Scaleform::Render::Text::StyledText::CharactersIterator &);
};
class Scaleform::Ptr<Scaleform::Render::Text::StyledText>
{
protected:
	Scaleform::Render::Text::StyledText * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::StyledText>(const Scaleform::Ptr<Scaleform::Render::Text::StyledText> &);
	Ptr<Scaleform::Render::Text::StyledText>(Scaleform::Render::Text::StyledText *);
	Ptr<Scaleform::Render::Text::StyledText>(Scaleform::Ptr<Scaleform::Render::Text::StyledText> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::StyledText>(Scaleform::Pickable<Scaleform::Render::Text::StyledText>);
	Ptr<Scaleform::Render::Text::StyledText>(Scaleform::Render::Text::StyledText &);
	Ptr<Scaleform::Render::Text::StyledText>();
	~Ptr<Scaleform::Render::Text::StyledText>();
	bool operator==(Scaleform::Render::Text::StyledText *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::StyledText> &);
	bool operator!=(Scaleform::Render::Text::StyledText *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::StyledText> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::StyledText> &);
	Scaleform::Ptr<Scaleform::Render::Text::StyledText> & operator=(Scaleform::Pickable<Scaleform::Render::Text::StyledText>);
	const Scaleform::Ptr<Scaleform::Render::Text::StyledText> & operator=(Scaleform::Render::Text::StyledText &);
	const Scaleform::Ptr<Scaleform::Render::Text::StyledText> & operator=(Scaleform::Render::Text::StyledText *);
	const Scaleform::Ptr<Scaleform::Render::Text::StyledText> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::StyledText> &);
	Scaleform::Ptr<Scaleform::Render::Text::StyledText> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::StyledText>);
	Scaleform::Ptr<Scaleform::Render::Text::StyledText> & SetPtr(Scaleform::Render::Text::StyledText &);
	Scaleform::Ptr<Scaleform::Render::Text::StyledText> & SetPtr(Scaleform::Render::Text::StyledText *);
	Scaleform::Ptr<Scaleform::Render::Text::StyledText> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::StyledText> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::StyledText * & GetRawRef();
	Scaleform::Render::Text::StyledText * GetPtr();
	Scaleform::Render::Text::StyledText & operator*();
	Scaleform::Render::Text::StyledText * operator->();
	Scaleform::Render::Text::StyledText * operator class Scaleform::Render::Text::StyledText *();
	Scaleform::Ptr<Scaleform::Render::Text::StyledText> & Pick(Scaleform::Render::Text::StyledText *);
	Scaleform::Ptr<Scaleform::Render::Text::StyledText> & Pick(Scaleform::Pickable<Scaleform::Render::Text::StyledText>);
	Scaleform::Ptr<Scaleform::Render::Text::StyledText> & Pick(Scaleform::Ptr<Scaleform::Render::Text::StyledText> &);
};
struct Scaleform::Render::Text::StyledText::ParagraphComparator
{
	static long Compare(const Scaleform::Render::Text::Paragraph *, unsigned long long);
	static long Less(const Scaleform::Render::Text::Paragraph *, unsigned long long);
};
Scaleform::Render::Text::StyledText::~StyledText(); // 0x1402F98E0
Scaleform::Render::Text::Allocator * Scaleform::Render::Text::StyledText::GetAllocator(); // 0x1402FB660
class Scaleform::Ptr<Scaleform::Render::Text::Allocator>
{
protected:
	Scaleform::Render::Text::Allocator * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::Allocator>(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	Ptr<Scaleform::Render::Text::Allocator>(Scaleform::Render::Text::Allocator *);
	Ptr<Scaleform::Render::Text::Allocator>(Scaleform::Ptr<Scaleform::Render::Text::Allocator> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::Allocator>(Scaleform::Pickable<Scaleform::Render::Text::Allocator>);
	Ptr<Scaleform::Render::Text::Allocator>(Scaleform::Render::Text::Allocator &);
	Ptr<Scaleform::Render::Text::Allocator>();
	~Ptr<Scaleform::Render::Text::Allocator>();
	bool operator==(Scaleform::Render::Text::Allocator *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	bool operator!=(Scaleform::Render::Text::Allocator *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & operator=(Scaleform::Pickable<Scaleform::Render::Text::Allocator>);
	const Scaleform::Ptr<Scaleform::Render::Text::Allocator> & operator=(Scaleform::Render::Text::Allocator &);
	const Scaleform::Ptr<Scaleform::Render::Text::Allocator> & operator=(Scaleform::Render::Text::Allocator *);
	const Scaleform::Ptr<Scaleform::Render::Text::Allocator> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::Allocator>);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & SetPtr(Scaleform::Render::Text::Allocator &);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & SetPtr(Scaleform::Render::Text::Allocator *);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::Allocator * & GetRawRef();
	Scaleform::Render::Text::Allocator * GetPtr();
	Scaleform::Render::Text::Allocator & operator*();
	Scaleform::Render::Text::Allocator * operator->();
	Scaleform::Render::Text::Allocator * operator class Scaleform::Render::Text::Allocator *();
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & Pick(Scaleform::Render::Text::Allocator *);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & Pick(Scaleform::Pickable<Scaleform::Render::Text::Allocator>);
	Scaleform::Ptr<Scaleform::Render::Text::Allocator> & Pick(Scaleform::Ptr<Scaleform::Render::Text::Allocator> &);
};