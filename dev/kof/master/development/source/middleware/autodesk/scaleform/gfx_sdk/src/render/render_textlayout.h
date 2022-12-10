#pragma once

class Scaleform::RefCountBase<Scaleform::Render::TextLayout,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBase<Scaleform::Render::TextLayout,74>(Scaleform::RefCountBase<Scaleform::Render::TextLayout,74> &);
	RefCountBase<Scaleform::Render::TextLayout,74>(const Scaleform::RefCountBase<Scaleform::Render::TextLayout,74> &);
	RefCountBase<Scaleform::Render::TextLayout,74>();
	virtual ~RefCountBase<Scaleform::Render::TextLayout,74>();
	Scaleform::RefCountBase<Scaleform::Render::TextLayout,74> & operator=(Scaleform::RefCountBase<Scaleform::Render::TextLayout,74> &);
	Scaleform::RefCountBase<Scaleform::Render::TextLayout,74> & operator=(const Scaleform::RefCountBase<Scaleform::Render::TextLayout,74> &);
};
class Scaleform::Render::TextLayout :
	Scaleform::RefCountBase<Scaleform::Render::TextLayout,74>
{
	enum RecordType
	{
		Record_Char = 0,
		Record_Color = 1,
		Record_Background = 2,
		Record_NewLine = 3,
		Record_Font = 4,
		Record_Selection = 5,
		Record_Underline = 6,
		Record_Cursor = 7,
		Record_Image = 8,
		Record_RefCntData = 9,
	};
	enum CharFlags
	{
		Flag_Invisible = 1,
		Flag_FauxBold = 2,
		Flag_FauxItalic = 4,
	};
	struct CharRecord;
	struct ColorRecord;
	struct BackgroundRecord;
	struct FontRecord;
	struct LineRecord;
	struct SelectionRecord;
	struct UnderlineRecord;
	struct CursorRecord;
	struct ImageRecord;
	struct RefCntDataRecord;
	enum RecordSizes
	{
		Size_Char = 8,
		Size_Color = 8,
		Size_Background = 12,
		Size_Font = 16,
		Size_Line = 12,
		Size_Selection = 24,
		Size_Underline = 20,
		Size_Cursor = 24,
		Size_Image = 32,
		Size_RefCntData = 16,
	};
	union Record;
	class Builder;
private:
	TextLayout(const Scaleform::Render::TextLayout &);
public:
	TextLayout(const Scaleform::Render::TextLayout::Builder &);
	TextLayout();
	virtual ~TextLayout();
	void Clear();
	void Create(const Scaleform::Render::TextLayout::Builder &);
	void SetBounds(const Scaleform::Render::Rect<float> &);
	void SetParam(const Scaleform::Render::TextFieldParam &);
	const Scaleform::Render::Rect<float> & GetBounds();
	const Scaleform::Render::Rect<float> & GetClipBox();
	const Scaleform::Render::TextFieldParam & GetParam();
	Scaleform::Render::TextLayout::RecordType GetRecordType(const Scaleform::Render::TextLayout::Record &);
	unsigned long long ReadNext(unsigned long long, Scaleform::Render::TextLayout::Record *);
private:
	void operator=(const Scaleform::Render::TextLayout &);
	Scaleform::Render::TextFieldParam Param; // 0x10
	Scaleform::Render::Rect<float> Bounds; // 0x50
	Scaleform::Render::Rect<float> ClipBox; // 0x60
	Scaleform::ArrayLH_POD<unsigned char,74,Scaleform::ArrayDefaultPolicy> Data; // 0x70
	unsigned long long DataSize; // 0x88
	Scaleform::Render::Font * * pFonts; // 0x90
	unsigned long long FontCount; // 0x98
	Scaleform::Render::Image * * pImages; // 0xA0
	unsigned long long ImageCount; // 0xA8
	Scaleform::RefCountImpl * * pRefCntData; // 0xB0
	unsigned long long RefCntCount; // 0xB8
};
struct Scaleform::Render::TextLayout::CharRecord
{
	unsigned char Tag; // 0x0
	unsigned char Flags; // 0x1
	unsigned short GlyphIndex; // 0x2
	float Advance; // 0x4
};
struct Scaleform::Render::TextLayout::ColorRecord
{
	unsigned char Tag; // 0x0
	unsigned char Flags; // 0x1
	unsigned short Filler; // 0x2
	unsigned long mColor; // 0x4
};
struct Scaleform::Render::TextLayout::BackgroundRecord
{
	unsigned char Tag; // 0x0
	unsigned char Flags; // 0x1
	unsigned short Filler; // 0x2
	unsigned long BackgroundColor; // 0x4
	unsigned long BorderColor; // 0x8
};
struct Scaleform::Render::TextLayout::FontRecord
{
	unsigned char Tag; // 0x0
	unsigned char Flags; // 0x1
	unsigned short Filler; // 0x2
	float mSize; // 0x4
	Scaleform::Render::Font * pFont; // 0x8
};
struct Scaleform::Render::TextLayout::LineRecord
{
	unsigned char Tag; // 0x0
	unsigned char Flags; // 0x1
	unsigned short Filler; // 0x2
	float x; // 0x4
	float y; // 0x8
};
struct Scaleform::Render::TextLayout::SelectionRecord
{
	unsigned char Tag; // 0x0
	unsigned char Flags; // 0x1
	unsigned short Filler; // 0x2
	unsigned long mColor; // 0x4
	float x1; // 0x8
	float y1; // 0xC
	float x2; // 0x10
	float y2; // 0x14
};
struct Scaleform::Render::TextLayout::UnderlineRecord
{
	unsigned char Tag; // 0x0
	unsigned char Flags; // 0x1
	unsigned short Style; // 0x2
	float x; // 0x4
	float y; // 0x8
	float Len; // 0xC
	unsigned long mColor; // 0x10
};
struct Scaleform::Render::TextLayout::CursorRecord
{
	unsigned char Tag; // 0x0
	unsigned char Flags; // 0x1
	unsigned short Filler; // 0x2
	unsigned long mColor; // 0x4
	float x1; // 0x8
	float y1; // 0xC
	float x2; // 0x10
	float y2; // 0x14
};
struct Scaleform::Render::TextLayout::ImageRecord
{
	unsigned char Tag; // 0x0
	unsigned char Flags; // 0x1
	unsigned short Filler; // 0x2
	Scaleform::Render::Image * pImage; // 0x8
	float ScaleX; // 0x10
	float ScaleY; // 0x14
	float BaseLine; // 0x18
	float Advance; // 0x1C
};
struct Scaleform::Render::TextLayout::RefCntDataRecord
{
	unsigned char Tag; // 0x0
	unsigned char Flags; // 0x1
	Scaleform::RefCountImpl * pData; // 0x8
};
union Scaleform::Render::TextLayout::Record
{
public:
	Scaleform::Render::TextLayout::CharRecord mChar; // 0x0
	Scaleform::Render::TextLayout::BackgroundRecord mBackground; // 0x0
	Scaleform::Render::TextLayout::FontRecord mFont; // 0x0
	Scaleform::Render::TextLayout::ColorRecord mColor; // 0x0
	Scaleform::Render::TextLayout::LineRecord mLine; // 0x0
	Scaleform::Render::TextLayout::SelectionRecord mSelection; // 0x0
	Scaleform::Render::TextLayout::UnderlineRecord mUnderline; // 0x0
	Scaleform::Render::TextLayout::CursorRecord mCursor; // 0x0
	Scaleform::Render::TextLayout::ImageRecord mImage; // 0x0
	Scaleform::Render::TextLayout::RefCntDataRecord mRefCntData; // 0x0
};
class Scaleform::Render::TextLayout::Builder
{
	enum <unnamed-enum-StaticDataSize>
	{
		StaticDataSize = 1024,
		StaticFontSize = 32,
		StaticImageSize = 32,
		StaticRefCntSize = 32,
	};
private:
	Builder(const Scaleform::Render::TextLayout::Builder &);
public:
	Builder(Scaleform::MemoryHeap *);
	void SetBounds(const Scaleform::Render::Rect<float> &);
	void SetClipBox(const Scaleform::Render::Rect<float> &);
	void SetParam(const Scaleform::Render::TextFieldParam &);
	void AddChar(unsigned long, float, bool, bool, bool);
	void AddText(const char *);
	void AddImage(Scaleform::Render::Image *, float, float, float, float);
	void AddSelection(const Scaleform::Render::Rect<float> &, unsigned long);
	void AddUnderline(float, float, float, Scaleform::Render::TextUnderlineStyle, unsigned long);
	void AddCursor(const Scaleform::Render::Rect<float> &, unsigned long);
	void AddRefCntData(Scaleform::RefCountImpl *);
	void ChangeColor(unsigned long);
	void SetBackground(unsigned long, unsigned long);
	void ChangeFont(Scaleform::Render::Font *, float);
	void SetNewLine(float, float);
private:
	void operator=(const Scaleform::Render::TextLayout::Builder &);
	void recordData(const unsigned char *);
	Scaleform::Render::TextFieldParam Param; // 0x0
	Scaleform::Render::Rect<float> Bounds; // 0x40
	Scaleform::Render::Rect<float> ClipBox; // 0x50
	Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> Data; // 0x60
	Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2> Fonts; // 0x480
	Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Image *,32,2> Images; // 0x5A0
	Scaleform::ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2> RefCntData; // 0x6C0
	Scaleform::Render::Font * LastFont; // 0x7E0
	float LastScale; // 0x7E8
public:
	~Builder();
};
class Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2>
{
	typedef unsigned char ValueType;
private:
	ArrayStaticBuffPOD<unsigned char,1024,2>(const Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> &);
public:
	ArrayStaticBuffPOD<unsigned char,1024,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<unsigned char,1024,2>();
	void Clear();
	void PushBack(const unsigned char &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	unsigned char & operator[](unsigned long long);
	const unsigned char & operator[](unsigned long long);
	unsigned char & At(unsigned long long);
	const unsigned char & At(unsigned long long);
	unsigned char ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> & operator=(const Scaleform::ArrayStaticBuffPOD<unsigned char,1024,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	unsigned char Static[1024]; // 0x18
	unsigned char * Data; // 0x418
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2>
{
	typedef Scaleform::Render::Font ValueType;
private:
	ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2>(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2> &);
public:
	ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2>();
	void Clear();
	void PushBack(Scaleform::Render::Font * &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	Scaleform::Render::Font * & operator[](unsigned long long);
	Scaleform::Render::Font * & operator[](unsigned long long);
	Scaleform::Render::Font * & At(unsigned long long);
	Scaleform::Render::Font * & At(unsigned long long);
	Scaleform::Render::Font * ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2> & operator=(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Font *,32,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	Scaleform::Render::Font * Static[32]; // 0x18
	Scaleform::Render::Font * * Data; // 0x118
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Image *,32,2>
{
	typedef Scaleform::Render::Image ValueType;
private:
	ArrayStaticBuffPOD<Scaleform::Render::Image *,32,2>(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Image *,32,2> &);
public:
	ArrayStaticBuffPOD<Scaleform::Render::Image *,32,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<Scaleform::Render::Image *,32,2>();
	void Clear();
	void PushBack(Scaleform::Render::Image * &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	Scaleform::Render::Image * & operator[](unsigned long long);
	Scaleform::Render::Image * & operator[](unsigned long long);
	Scaleform::Render::Image * & At(unsigned long long);
	Scaleform::Render::Image * & At(unsigned long long);
	Scaleform::Render::Image * ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Image *,32,2> & operator=(const Scaleform::ArrayStaticBuffPOD<Scaleform::Render::Image *,32,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	Scaleform::Render::Image * Static[32]; // 0x18
	Scaleform::Render::Image * * Data; // 0x118
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2>
{
	typedef Scaleform::RefCountImpl ValueType;
private:
	ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2>(const Scaleform::ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2> &);
public:
	ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2>();
	void Clear();
	void PushBack(Scaleform::RefCountImpl * &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	Scaleform::RefCountImpl * & operator[](unsigned long long);
	Scaleform::RefCountImpl * & operator[](unsigned long long);
	Scaleform::RefCountImpl * & At(unsigned long long);
	Scaleform::RefCountImpl * & At(unsigned long long);
	Scaleform::RefCountImpl * ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2> & operator=(const Scaleform::ArrayStaticBuffPOD<Scaleform::RefCountImpl *,32,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	Scaleform::RefCountImpl * Static[32]; // 0x18
	Scaleform::RefCountImpl * * Data; // 0x118
public:
	void __dflt_ctor_closure();
};
class Scaleform::ArrayLH_POD<unsigned char,74,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,74>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<unsigned char,74,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<unsigned char,74,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<unsigned char,74,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<unsigned char,74,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<unsigned char,74,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<unsigned char,74,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<unsigned char,74,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<unsigned char,74,Scaleform::ArrayDefaultPolicy>();
};