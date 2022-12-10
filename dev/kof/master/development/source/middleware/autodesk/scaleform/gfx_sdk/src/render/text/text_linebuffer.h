#pragma once

struct Scaleform::Render::Text::LineBufferGeometry
{
	class Matrix;
	LineBufferGeometry(Scaleform::Render::Text::LineBufferGeometry &);
	LineBufferGeometry(const Scaleform::Render::Text::LineBufferGeometry &);
	LineBufferGeometry();
	unsigned long FirstVisibleLinePos; // 0x0
	Scaleform::Render::Rect<float> VisibleRect; // 0x10
	unsigned long HScrollOffset; // 0x20
	enum <unnamed-enum-Flag_InvalidCache>
	{
		Flag_InvalidCache = 1,
		Flag_BatchHasUnderline = 2,
		Flag_StaticText = 4,
		Flag_Readability = 8,
		Flag_CheckPreciseScale = 16,
		Flag_NoClipping = 32,
	};
	unsigned char Flags; // 0x24
	void InvalidateCache();
	void ValidateCache();
	bool IsCacheInvalid();
	void SetBatchHasUnderline();
	void ClearBatchHasUnderline();
	bool HasBatchUnderline();
	void SetStaticText();
	bool IsStaticText();
	void SetReadability();
	void ClearReadability();
	bool IsReadability();
	void SetCheckPreciseScale();
	void ClearCheckPreciseScale();
	bool NeedsCheckPreciseScale();
	void SetNoClipping();
	void ClearNoClipping();
	bool IsNoClipping();
	Scaleform::Render::Text::LineBufferGeometry & operator=(Scaleform::Render::Text::LineBufferGeometry &);
	Scaleform::Render::Text::LineBufferGeometry & operator=(const Scaleform::Render::Text::LineBufferGeometry &);
};
class Scaleform::Render::Text::LineBuffer
{
	class Matrix;
	enum LineType
	{
		Line8 = 0,
		Line32 = 1,
	};
	class GlyphEntry;
	union FormatDataEntry;
	class GlyphIterator;
	class GlyphInserter;
	struct LineData32;
	struct LineData8;
	class Line;
	struct LineIndexComparator;
	struct LineYOffsetComparator;
public:
	static void ReleasePartOfLine(Scaleform::Render::Text::LineBuffer::GlyphEntry *, unsigned long, Scaleform::Render::Text::LineBuffer::FormatDataEntry *);
	LineBuffer(const Scaleform::Render::Text::LineBuffer &);
	LineBuffer();
	~LineBuffer();
	void CreateVisibleTextLayout(Scaleform::Render::TextLayout::Builder &, const Scaleform::Render::Text::Highlighter *, const Scaleform::Render::TextFieldParam &);
	const Scaleform::Render::Text::LineBuffer::Line & operator[](unsigned long);
	Scaleform::Render::Text::LineBuffer::Line & operator[](unsigned long);
	unsigned long GetSize();
	void ResetCache();
	void ClearLines();
	class ConstIterator;
	class Iterator;
	Scaleform::Render::Text::LineBuffer::ConstIterator Begin();
	Scaleform::Render::Text::LineBuffer::Iterator Begin();
	Scaleform::Render::Text::LineBuffer::ConstIterator BeginVisible(float);
	Scaleform::Render::Text::LineBuffer::Iterator BeginVisible(float);
	Scaleform::Render::Text::LineBuffer::ConstIterator Last();
	Scaleform::Render::Text::LineBuffer::Iterator Last();
	Scaleform::Render::Text::LineBuffer::ConstIterator FindLineByTextPos(unsigned long long);
	Scaleform::Render::Text::LineBuffer::Iterator FindLineByTextPos(unsigned long long);
	Scaleform::Render::Text::LineBuffer::ConstIterator FindLineAtYOffset(float);
	Scaleform::Render::Text::LineBuffer::Iterator FindLineAtYOffset(float);
	Scaleform::Render::Text::LineBuffer::Iterator FindLineAtOffset(const Scaleform::Render::Point<float> &);
	void SetVisibleRect(const Scaleform::Render::Rect<float> &);
	const Scaleform::Render::Text::LineBuffer::Line * GetLine(unsigned long);
	Scaleform::Render::Text::LineBuffer::Line * GetLine(unsigned long);
	Scaleform::Render::Text::LineBuffer::Line * InsertNewLine(unsigned long, unsigned long, unsigned long, Scaleform::Render::Text::LineBuffer::LineType);
	void RemoveLines(unsigned long, unsigned long);
	static unsigned long CalcLineSize(unsigned long, unsigned long, Scaleform::Render::Text::LineBuffer::LineType);
	void SetFirstVisibleLine(unsigned long);
	unsigned long GetFirstVisibleLineIndex();
	unsigned long GetVScrollOffsetInFixp();
	void SetHScrollOffset(unsigned long);
	unsigned long GetHScrollOffset();
	void InvalidateCache();
	void ValidateCache();
	bool IsCacheInvalid();
	void SetBatchHasUnderline();
	void ClearBatchHasUnderline();
	bool HasBatchUnderline();
	void SetStaticText();
	bool IsStaticText();
	bool IsLineVisible(unsigned long, float);
	bool IsLineVisible(unsigned long);
	bool IsPartiallyVisible(float);
	void Scale(float);
	long GetMinLineHeight();
	Scaleform::Render::Text::FontHandle * FindFirstFontInfo();
	void Dump();
	void CheckIntegrity();
	Scaleform::ArrayLH<Scaleform::Render::Text::LineBuffer::Line *,2,Scaleform::ArrayDefaultPolicy> Lines; // 0x0
	Scaleform::Render::Text::LineBufferGeometry Geom; // 0x20
	class TextLineAllocator;
	Scaleform::Render::Text::LineBuffer::TextLineAllocator LineAllocator; // 0x50
	unsigned long LastHScrollOffset; // 0x54
	Scaleform::Render::Text::LineBuffer & operator=(const Scaleform::Render::Text::LineBuffer &);
};
class Scaleform::Render::Text::LineBuffer::GlyphEntry
{
protected:
	unsigned short Index; // 0x0
	unsigned short Advance; // 0x2
	unsigned short LenAndFontSize; // 0x4
	enum <unnamed-enum-Mask_Length>
	{
		Mask_Length = 15,
		Shift_Length = 12,
		Mask_FontSize = 4095,
		Shift_FontSize = 0,
		Flags_NextFormat = 16384,
		Flags_FmtHasFont = 8192,
		Flags_FmtHasColor = 4096,
		Flags_FmtHasImage = 2048,
		Flags_Underline = 1024,
		Flags_InvisibleChar = 512,
		Flags_NewLineChar = 256,
		Flags_Url = 128,
		Flags_NegAdvance = 64,
		Flags_FractionalFontSize = 16,
		Flags_WordWrapSeparator = 8,
		Flags_ComposStrGlyph = 4,
		Flags_SpaceChar = 2,
	};
	unsigned short Flags; // 0x6
	void SetNegAdvance();
	void ClearNegAdvance();
	bool IsNegAdvance();
public:
	GlyphEntry();
	void Init();
	void SetIndex(unsigned long);
	unsigned long GetIndex();
	unsigned long GetLength();
	void SetLength(unsigned long);
	void SetFontSize(float);
	void SetFontSize(unsigned long);
	void SetFontSizeInFixp(unsigned long);
	float GetFontSize();
	void SetComposStrGlyph();
	void ClearComposStrGlyph();
	bool IsComposStrGlyph();
	void SetNextFormat();
	void ClearNextFormat();
	bool IsNextFormat();
	void SetFmtHasFont();
	void ClearFmtHasFont();
	bool HasFmtFont();
	void SetFmtHasColor();
	void ClearFmtHasColor();
	bool HasFmtColor();
	void SetFmtHasImage();
	void ClearFmtHasImage();
	bool HasFmtImage();
	void ClearFmtData();
	unsigned long GetFormatDataElementsCount();
	void SetUnderline();
	void ClearUnderline();
	bool IsUnderline();
	void SetInvisibleChar();
	void ClearInvisibleChar();
	bool IsCharInvisible();
	void SetNewLineChar();
	void ClearNewLineChar();
	bool IsNewLineChar();
	bool IsEOFChar();
	void SetUrl();
	void ClearUrl();
	bool IsUrl();
	void SetWordWrapSeparator();
	void ClearWordWrapSeparator();
	bool IsWordWrapSeparator();
	void SetSpaceChar();
	void ClearSpaceChar();
	bool IsSpaceChar();
	void SetAdvance(long);
	long GetAdvance();
	void ClearFlags();
};
union Scaleform::Render::Text::LineBuffer::FormatDataEntry
{
public:
	Scaleform::Render::Text::FontHandle * pFont; // 0x0
	Scaleform::Render::Text::ImageDesc * pImage; // 0x0
	unsigned long ColorV; // 0x0
};
class Scaleform::Render::Text::LineBuffer::GlyphIterator
{
private:
	Scaleform::Render::Text::LineBuffer::GlyphEntry * pGlyphs; // 0x0
	Scaleform::Render::Text::LineBuffer::GlyphEntry * pEndGlyphs; // 0x8
	Scaleform::Render::Text::LineBuffer::FormatDataEntry * pNextFormatData; // 0x10
	Scaleform::Render::Text::HighlighterPosIterator HighlighterIter; // 0x18
	unsigned long ColorV; // 0x70
	unsigned long OrigColor; // 0x74
	unsigned long UnderlineColor; // 0x78
	unsigned long SelectionColor; // 0x7C
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> pFontHandle; // 0x80
	Scaleform::Ptr<Scaleform::Render::Text::ImageDesc> pImage; // 0x88
	Scaleform::Render::Text::HighlightInfo::UnderlineStyle UnderlineStyle; // 0x90
	unsigned long Delta; // 0x94
	void UpdateDesc();
public:
	GlyphIterator(Scaleform::Render::Text::LineBuffer::GlyphIterator &);
	GlyphIterator(const Scaleform::Render::Text::LineBuffer::GlyphIterator &);
	GlyphIterator(void *, unsigned long, Scaleform::Render::Text::LineBuffer::FormatDataEntry *, const Scaleform::Render::Text::Highlighter &, unsigned long long);
	GlyphIterator(void *, unsigned long, Scaleform::Render::Text::LineBuffer::FormatDataEntry *);
	bool IsFinished();
	void operator++();
	Scaleform::Render::Font * GetFont();
	Scaleform::Render::Text::FontHandle * GetFontHandle();
	bool IsFauxBold();
	bool IsFauxItalic();
	bool IsFauxBoldItalic();
	unsigned long GetFauxFontStyle();
	bool IsAutoFitDisabled();
	Scaleform::Render::Color GetColor();
	Scaleform::Render::Text::LineBuffer::GlyphEntry & GetGlyph();
	Scaleform::Render::Text::ImageDesc * GetImage();
	bool HasImage();
	bool IsUnderline();
	bool IsSingleUnderline();
	bool IsThickUnderline();
	bool IsDottedUnderline();
	bool IsDitheredSingleUnderline();
	bool IsDitheredThickUnderline();
	Scaleform::Render::Color GetUnderlineColor();
	Scaleform::Render::Text::HighlightInfo::UnderlineStyle GetUnderlineStyle();
	bool IsSelected();
	Scaleform::Render::Color GetSelectionColor();
	~GlyphIterator();
	Scaleform::Render::Text::LineBuffer::GlyphIterator & operator=(Scaleform::Render::Text::LineBuffer::GlyphIterator &);
	Scaleform::Render::Text::LineBuffer::GlyphIterator & operator=(const Scaleform::Render::Text::LineBuffer::GlyphIterator &);
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
Scaleform::Render::Text::LineBuffer::GlyphIterator::GlyphIterator(void * pglyphs, unsigned long glyphsCount, Scaleform::Render::Text::LineBuffer::FormatDataEntry * pfmtData); // 0x14038C060
Scaleform::Render::Text::LineBuffer::GlyphIterator::GlyphIterator(void * pglyphs, unsigned long glyphsCount, Scaleform::Render::Text::LineBuffer::FormatDataEntry * pfmtData, const Scaleform::Render::Text::Highlighter & highlighter, unsigned long long lineStartPos); // 0x14038C0E0
class Scaleform::Render::Text::LineBuffer::GlyphInserter
{
private:
	Scaleform::Render::Text::LineBuffer::GlyphEntry * pGlyphs; // 0x0
	Scaleform::Render::Text::LineBuffer::FormatDataEntry * pNextFormatData; // 0x8
	unsigned long GlyphIndex; // 0x10
	unsigned long GlyphsCount; // 0x14
	unsigned long FormatDataIndex; // 0x18
public:
	GlyphInserter(const Scaleform::Render::Text::LineBuffer::GlyphInserter &);
	GlyphInserter(Scaleform::Render::Text::LineBuffer::GlyphEntry *, unsigned long, Scaleform::Render::Text::LineBuffer::FormatDataEntry *);
	GlyphInserter();
	Scaleform::Render::Text::LineBuffer::GlyphInserter & operator=(const Scaleform::Render::Text::LineBuffer::GlyphInserter &);
	void Reset();
	bool IsFinished();
	void operator++(long);
	void operator++();
	Scaleform::Render::Text::LineBuffer::GlyphEntry & GetGlyph();
	void AddFont(Scaleform::Render::Text::FontHandle *);
	void AddColor(Scaleform::Render::Color);
	void AddImage(Scaleform::Render::Text::ImageDesc *);
	unsigned long GetFormatDataElementsCount();
	unsigned long GetGlyphIndex();
	void ResetTo(const Scaleform::Render::Text::LineBuffer::GlyphInserter &);
	Scaleform::Render::Text::LineBuffer::GlyphEntry * GetReadyGlyphs(unsigned long *);
};
struct Scaleform::Render::Text::LineBuffer::LineData32
{
	unsigned long GlyphsCount; // 0x0
	unsigned long TextPos; // 0x4
	long OffsetX; // 0x8
	long OffsetY; // 0xC
	unsigned long Width; // 0x10
	unsigned long Height; // 0x14
	unsigned long ParagraphId; // 0x18
	unsigned long TextLength; // 0x1C
	unsigned short ParagraphModId; // 0x20
	unsigned short BaseLineOffset; // 0x22
	short Leading; // 0x24
	void Init();
	static unsigned long GetLineStructSize();
	unsigned long GetTextPos();
	void SetTextPos(unsigned long);
	unsigned long GetNumGlyphs();
	void SetNumGlyphs(unsigned long);
	Scaleform::Render::Text::LineBuffer::GlyphEntry * GetGlyphs();
	void SetTextLength(unsigned long);
	unsigned long GetTextLength();
	void SetBaseLineOffset(float);
	float GetBaseLineOffset();
	void SetLeading(long);
	long GetLeading();
	long GetNonNegLeading();
	void SetDimensions(long, long);
	long GetWidth();
	long GetHeight();
	void SetOffset(long, long);
	Scaleform::Render::Point<int> GetOffset();
	long GetOffsetX();
	long GetOffsetY();
	void SetOffsetX(long);
	void SetOffsetY(long);
	unsigned long GetParagraphId();
	void SetParagraphId(unsigned long);
	unsigned short GetParagraphModId();
	void SetParagraphModId(unsigned short);
};
struct Scaleform::Render::Text::LineBuffer::LineData8
{
	unsigned long ParagraphId; // 0x0
	unsigned long TextPosAndLength; // 0x4
	long OffsetX; // 0x8
	long OffsetY; // 0xC
	unsigned short Width; // 0x10
	unsigned short Height; // 0x12
	unsigned short ParagraphModId; // 0x14
	unsigned short BaseLineOffset; // 0x16
	unsigned char GlyphsCount; // 0x18
	char Leading; // 0x19
	enum <unnamed-enum-Mask_TextPos>
	{
		Mask_TextPos = 16777215,
		Shift_TextPos = 0,
		Mask_TextLength = 255,
		Shift_TextLength = 24,
	};
	void Init();
	static unsigned long GetLineStructSize();
	unsigned long GetTextPos();
	void SetTextPos(unsigned long);
	unsigned long GetNumGlyphs();
	void SetNumGlyphs(unsigned long);
	Scaleform::Render::Text::LineBuffer::GlyphEntry * GetGlyphs();
	void SetTextLength(unsigned long);
	unsigned long GetTextLength();
	void SetBaseLineOffset(float);
	float GetBaseLineOffset();
	void SetLeading(long);
	long GetLeading();
	long GetNonNegLeading();
	void SetDimensions(long, long);
	long GetWidth();
	long GetHeight();
	void SetOffset(long, long);
	Scaleform::Render::Point<int> GetOffset();
	long GetOffsetX();
	long GetOffsetY();
	void SetOffsetX(long);
	void SetOffsetY(long);
	unsigned long GetParagraphId();
	void SetParagraphId(unsigned long);
	unsigned short GetParagraphModId();
	void SetParagraphModId(unsigned short);
};
class Scaleform::Render::Text::LineBuffer::Line
{
private:
	unsigned long MemSize; // 0x0
	enum Flags
	{
		Flags_Data8 = -2147483648,
		Flags_Initialized = 1073741824,
		Flags_RightToLeft = 536870912,
		Mask_MemSize = 134217727,
		Shift_MemSize = 0,
		Mask_Alignment = 3,
		Shift_Alignment = 27,
	};
	Scaleform::Render::Text::LineBuffer::LineData32 Data32; // 0x4
	Scaleform::Render::Text::LineBuffer::LineData8 Data8; // 0x4
	enum Alignment
	{
		Align_Left = 0,
		Align_Right = 1,
		Align_Center = 2,
	};
public:
	Line();
	void InitLine8();
	void InitLine32();
	void ClearInitialized();
	bool IsInitialized();
	static unsigned long GetLineStructSize(Scaleform::Render::Text::LineBuffer::LineType);
	void Release();
	bool IsData8();
	bool IsData32();
	void SetMemSize(unsigned long);
	unsigned long GetMemSize();
	void SetRightToLeft();
	bool IsRightToLeft();
	void SetAlignment(Scaleform::Render::Text::LineBuffer::Line::Alignment);
	Scaleform::Render::Text::LineBuffer::Line::Alignment GetAlignment();
	bool IsLeftAlignment();
	bool IsRightAlignment();
	bool IsCenterAlignment();
	unsigned long GetTextPos();
	void SetTextPos(unsigned long);
	unsigned long GetNumGlyphs();
	void SetNumGlyphs(unsigned long);
	Scaleform::Render::Text::LineBuffer::GlyphEntry * GetGlyphs();
	Scaleform::Render::Text::LineBuffer::FormatDataEntry * GetFormatData();
	void SetTextLength(unsigned long);
	unsigned long GetTextLength();
	void SetBaseLineOffset(float);
	float GetBaseLineOffset();
	float GetAscent();
	float GetDescent();
	void SetLeading(long);
	long GetLeading();
	long GetNonNegLeading();
	void SetDimensions(long, long);
	long GetWidth();
	long GetHeight();
	void SetOffset(long, long);
	Scaleform::Render::Point<int> GetOffset();
	long GetOffsetX();
	long GetOffsetY();
	void SetOffsetX(long);
	void SetOffsetY(long);
	unsigned long GetParagraphId();
	unsigned short GetParagraphModId();
	void SetParagraphId(unsigned long);
	void SetParagraphModId(unsigned short);
	Scaleform::Render::Text::LineBuffer::GlyphIterator Begin(const Scaleform::Render::Text::Highlighter *);
	Scaleform::Render::Text::LineBuffer::GlyphIterator Begin();
	bool HasNewLine();
};
float Scaleform::Render::Text::LineBuffer::Line::GetAscent(); // 0x14038D770
long Scaleform::Render::Text::LineBuffer::Line::GetNonNegLeading(); // 0x14038D880
long Scaleform::Render::Text::LineBuffer::Line::GetHeight(); // 0x14038D7E0
Scaleform::Render::Text::LineBuffer::GlyphIterator Scaleform::Render::Text::LineBuffer::Line::Begin(const Scaleform::Render::Text::Highlighter * phighlighter); // 0x14038C390
struct Scaleform::Render::Text::LineBuffer::LineIndexComparator
{
	static long Compare(const Scaleform::Render::Text::LineBuffer::Line *, long);
	static long Less(const Scaleform::Render::Text::LineBuffer::Line *, long);
};
struct Scaleform::Render::Text::LineBuffer::LineYOffsetComparator
{
	static long Compare(const Scaleform::Render::Text::LineBuffer::Line *, float);
	static long Less(const Scaleform::Render::Text::LineBuffer::Line *, float);
};
class Scaleform::Render::Text::LineBuffer::ConstIterator
{
private:
	const Scaleform::Render::Text::LineBuffer * pLineBuffer; // 0x0
	const Scaleform::Render::Text::Highlighter * pHighlight; // 0x8
	unsigned long CurrentPos; // 0x10
	float YOffset; // 0x14
	bool StaticText; // 0x18
public:
	ConstIterator(const Scaleform::Render::Text::LineBuffer &, unsigned long, float);
	ConstIterator();
private:
	ConstIterator(const Scaleform::Render::Text::LineBuffer &);
public:
	bool IsFinished();
	bool IsVisible();
	Scaleform::Render::Text::LineBuffer::ConstIterator operator++(long);
	Scaleform::Render::Text::LineBuffer::ConstIterator & operator++();
	Scaleform::Render::Text::LineBuffer::ConstIterator operator--(long);
	Scaleform::Render::Text::LineBuffer::ConstIterator & operator--();
	Scaleform::Render::Text::LineBuffer::ConstIterator operator+(unsigned long);
	Scaleform::Render::Text::LineBuffer::ConstIterator operator-(unsigned long);
	const Scaleform::Render::Text::LineBuffer::Line & operator*();
	const Scaleform::Render::Text::LineBuffer::Line * operator->();
	const Scaleform::Render::Text::LineBuffer::Line * GetPtr();
	unsigned long GetIndex();
	void SetHighlighter(const Scaleform::Render::Text::Highlighter *);
	const Scaleform::Render::Text::Highlighter * GetGighlighter();
};
class Scaleform::Render::Text::LineBuffer::Iterator
{
private:
	Scaleform::Render::Text::LineBuffer * pLineBuffer; // 0x0
	const Scaleform::Render::Text::Highlighter * pHighlight; // 0x8
	unsigned long CurrentPos; // 0x10
	float YOffset; // 0x14
	bool StaticText; // 0x18
public:
	Iterator();
private:
	Iterator(Scaleform::Render::Text::LineBuffer &, unsigned long, float);
	Iterator(Scaleform::Render::Text::LineBuffer &);
public:
	bool IsFinished();
	bool IsVisible();
	Scaleform::Render::Text::LineBuffer::Iterator operator++(long);
	Scaleform::Render::Text::LineBuffer::Iterator & operator++();
	Scaleform::Render::Text::LineBuffer::Iterator operator--(long);
	Scaleform::Render::Text::LineBuffer::Iterator & operator--();
	Scaleform::Render::Text::LineBuffer::Line & operator*();
	Scaleform::Render::Text::LineBuffer::Line * operator->();
	Scaleform::Render::Text::LineBuffer::Line * GetPtr();
	void Remove(unsigned long);
	Scaleform::Render::Text::LineBuffer::Iterator operator+(unsigned long);
	Scaleform::Render::Text::LineBuffer::Iterator operator-(unsigned long);
	Scaleform::Render::Text::LineBuffer::Line * InsertNewLine(unsigned long, unsigned long, Scaleform::Render::Text::LineBuffer::LineType);
	unsigned long GetIndex();
	void SetHighlighter(const Scaleform::Render::Text::Highlighter *);
	const Scaleform::Render::Text::Highlighter * GetHighlighter();
	Scaleform::Render::Text::LineBuffer::ConstIterator GetConstIterator();
};
bool Scaleform::Render::Text::LineBuffer::IsLineVisible(unsigned long lineIndex); // 0x14042A930
class Scaleform::ArrayLH<Scaleform::Render::Text::LineBuffer::Line *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::Render::Text::LineBuffer::Line ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::Text::LineBuffer::Line *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::Text::LineBuffer::Line *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::Text::LineBuffer::Line *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::Text::LineBuffer::Line *,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::Text::LineBuffer::Line *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::Text::LineBuffer::Line *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::Text::LineBuffer::Line *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::Text::LineBuffer::Line *,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Render::Text::LineBuffer::TextLineAllocator
{
public:
	Scaleform::Render::Text::LineBuffer::Line * AllocLine(unsigned long, Scaleform::Render::Text::LineBuffer::LineType);
	void FreeLine(Scaleform::Render::Text::LineBuffer::Line *);
};