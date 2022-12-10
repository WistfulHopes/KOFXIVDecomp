#pragma once

struct Scaleform::Render::Text::HighlightInfo :
	Scaleform::NewOverrideBase<74>
{
	enum UnderlineStyle
	{
		Underline_None = 0,
		Underline_Single = 1,
		Underline_Thick = 2,
		Underline_Dotted = 3,
		Underline_DottedThick = 4,
		Underline_DitheredSingle = 5,
		Underline_DitheredThick = 6,
	};
	enum <unnamed-enum-Flag_UnderlineStyle>
	{
		Flag_UnderlineStyle = 7,
		Flag_Background = 8,
		Flag_TextColor = 16,
		Flag_UnderlineColor = 32,
	};
	Scaleform::Render::Color BackgroundColor; // 0x0
	Scaleform::Render::Color TextColor; // 0x4
	Scaleform::Render::Color UnderlineColor; // 0x8
	unsigned char Flags; // 0xC
	HighlightInfo(Scaleform::Render::Text::HighlightInfo &);
	HighlightInfo(const Scaleform::Render::Text::HighlightInfo &);
	HighlightInfo(Scaleform::Render::Text::HighlightInfo::UnderlineStyle);
	HighlightInfo();
	void Reset();
	void Append(const Scaleform::Render::Text::HighlightInfo &);
	void Prepend(const Scaleform::Render::Text::HighlightInfo &);
	bool IsEqualWithFlags(const Scaleform::Render::Text::HighlightInfo &, unsigned long);
	void SetSingleUnderline();
	bool IsSingleUnderline();
	void SetThickUnderline();
	bool IsThickUnderline();
	void SetDottedUnderline();
	bool IsDottedUnderline();
	void SetDottedThickUnderline();
	bool IsDottedThickUnderline();
	void SetDitheredSingleUnderline();
	bool IsDitheredSingleUnderline();
	void SetDitheredThickUnderline();
	bool IsDitheredThickUnderline();
	Scaleform::Render::Text::HighlightInfo::UnderlineStyle GetUnderlineStyle();
	bool HasUnderlineStyle();
	void ClearUnderlineStyle();
	void SetUnderlineStyle(Scaleform::Render::Text::HighlightInfo::UnderlineStyle);
	void SetBackgroundColor(const Scaleform::Render::Color &);
	Scaleform::Render::Color GetBackgroundColor();
	void ClearBackgroundColor();
	bool HasBackgroundColor();
	void SetTextColor(const Scaleform::Render::Color &);
	Scaleform::Render::Color GetTextColor();
	void ClearTextColor();
	bool HasTextColor();
	void SetUnderlineColor(const Scaleform::Render::Color &);
	Scaleform::Render::Color GetUnderlineColor();
	void ClearUnderlineColor();
	bool HasUnderlineColor();
	Scaleform::Render::Text::HighlightInfo & operator=(Scaleform::Render::Text::HighlightInfo &);
	Scaleform::Render::Text::HighlightInfo & operator=(const Scaleform::Render::Text::HighlightInfo &);
};
class Scaleform::NewOverrideBase<74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
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
struct Scaleform::Render::Text::HighlightDesc
{
	unsigned long long StartPos; // 0x0
	unsigned long long Length; // 0x8
	long long Offset; // 0x10
	unsigned long long AdjStartPos; // 0x18
	unsigned long long GlyphNum; // 0x20
	unsigned long Id; // 0x28
	Scaleform::Render::Text::HighlightInfo Info; // 0x2C
	HighlightDesc(Scaleform::Render::Text::HighlightDesc &);
	HighlightDesc(const Scaleform::Render::Text::HighlightDesc &);
	HighlightDesc(long long, unsigned long long);
	HighlightDesc();
	bool ContainsPos(unsigned long long);
	bool ContainsIndex(unsigned long long);
	bool IsEmpty();
	Scaleform::Render::Text::HighlightDesc & operator=(Scaleform::Render::Text::HighlightDesc &);
	Scaleform::Render::Text::HighlightDesc & operator=(const Scaleform::Render::Text::HighlightDesc &);
};
class Scaleform::Render::Text::HighlighterPosIterator
{
private:
	const Scaleform::Render::Text::Highlighter * pManager; // 0x0
	unsigned long long CurAdjStartPos; // 0x8
	unsigned long long NumGlyphs; // 0x10
	Scaleform::Render::Text::HighlightDesc CurDesc; // 0x18
	void InitCurDesc();
public:
	HighlighterPosIterator(Scaleform::Render::Text::HighlighterPosIterator &);
	HighlighterPosIterator(const Scaleform::Render::Text::HighlighterPosIterator &);
	HighlighterPosIterator(const Scaleform::Render::Text::Highlighter *, unsigned long long, unsigned long long);
	HighlighterPosIterator();
	const Scaleform::Render::Text::HighlightDesc & operator*();
	void operator++();
	void operator++(long);
	void operator+=(unsigned long long);
	bool IsFinished();
	Scaleform::Render::Text::HighlighterPosIterator & operator=(Scaleform::Render::Text::HighlighterPosIterator &);
	Scaleform::Render::Text::HighlighterPosIterator & operator=(const Scaleform::Render::Text::HighlighterPosIterator &);
};
class Scaleform::Render::Text::HighlighterRangeIterator
{
private:
	const Scaleform::Render::Text::Highlighter * pManager; // 0x0
	unsigned long long CurTextPos; // 0x8
	unsigned long long CurRangeIndex; // 0x10
	Scaleform::Render::Text::HighlightDesc CurDesc; // 0x18
	unsigned long Flags; // 0x58
	void InitCurDesc();
public:
	HighlighterRangeIterator(Scaleform::Render::Text::HighlighterRangeIterator &);
	HighlighterRangeIterator(const Scaleform::Render::Text::HighlighterRangeIterator &);
	HighlighterRangeIterator(const Scaleform::Render::Text::Highlighter *, unsigned long long, unsigned long);
	HighlighterRangeIterator(const Scaleform::Render::Text::Highlighter *, unsigned long);
	Scaleform::Render::Text::HighlightDesc operator*();
	void operator++();
	void operator++(long);
	bool IsFinished();
	Scaleform::Render::Text::HighlighterRangeIterator & operator=(Scaleform::Render::Text::HighlighterRangeIterator &);
	Scaleform::Render::Text::HighlighterRangeIterator & operator=(const Scaleform::Render::Text::HighlighterRangeIterator &);
};
class Scaleform::Render::Text::Highlighter :
	Scaleform::NewOverrideBase<74>
{
protected:
	Scaleform::ArrayLH<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy> Highlighters; // 0x0
	unsigned long LastId; // 0x18
	unsigned long long CorrectionPos; // 0x20
	unsigned long long CorrectionLen; // 0x28
	bool Valid; // 0x30
	char HasUnderline; // 0x31
public:
	Highlighter(Scaleform::Render::Text::Highlighter &);
	Highlighter(const Scaleform::Render::Text::Highlighter &);
	Highlighter();
	bool IsEmpty();
	Scaleform::Render::Text::HighlightDesc * CreateNewHighlighter(Scaleform::Render::Text::HighlightDesc *);
	Scaleform::Render::Text::HighlightDesc * CreateHighlighter(const Scaleform::Render::Text::HighlightDesc &);
	Scaleform::Render::Text::HighlightDesc * CreateEmptyHighlighter(unsigned long *);
	Scaleform::Render::Text::HighlightDesc GetHighlighter(unsigned long);
	Scaleform::Render::Text::HighlightDesc * GetHighlighterPtr(unsigned long);
	bool SetHighlighter(unsigned long, const Scaleform::Render::Text::HighlightInfo &);
	bool FreeHighlighter(unsigned long);
	Scaleform::Render::Text::HighlighterPosIterator GetPosIterator(unsigned long long, unsigned long long);
	Scaleform::Render::Text::HighlighterRangeIterator GetRangeIterator(unsigned long long, unsigned long);
	void UpdateGlyphIndices(const Scaleform::Render::Text::CompositionStringBase *);
	void Invalidate();
	void Validate();
	bool IsValid();
	bool HasUnderlineHighlight();
	void Add(Scaleform::Render::Text::HighlightDesc &);
	void Remove(const Scaleform::Render::Text::HighlightDesc &);
	void SetSelectColor(const Scaleform::Render::Color &);
	bool IsAnyCharSelected(unsigned long long, unsigned long long);
	~Highlighter();
	Scaleform::Render::Text::Highlighter & operator=(Scaleform::Render::Text::Highlighter &);
	Scaleform::Render::Text::Highlighter & operator=(const Scaleform::Render::Text::Highlighter &);
};
class Scaleform::ArrayLH<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Text::HighlightDesc,Scaleform::AllocatorLH<Scaleform::Render::Text::HighlightDesc,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::Text::HighlightDesc,2,Scaleform::ArrayDefaultPolicy>();
};