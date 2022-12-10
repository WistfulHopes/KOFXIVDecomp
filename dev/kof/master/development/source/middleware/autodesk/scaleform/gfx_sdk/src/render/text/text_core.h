#pragma once

class Scaleform::RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74>(Scaleform::RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74> &);
	RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74>(const Scaleform::RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74> &);
	RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74>();
	virtual ~RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74>();
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74> & operator=(Scaleform::RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74> &);
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74> &);
};
struct Scaleform::Render::Text::ImageDesc :
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::ImageDesc,74>
{
	class MatrixType;
	Scaleform::Ptr<Scaleform::Render::Image> pImage; // 0x10
	float BaseLineX; // 0x18
	float BaseLineY; // 0x1C
	float ScreenWidth; // 0x20
	float ScreenHeight; // 0x24
	Scaleform::Render::Matrix2x4<float> Matrix; // 0x30
	ImageDesc(Scaleform::Render::Text::ImageDesc &);
	ImageDesc(const Scaleform::Render::Text::ImageDesc &);
	ImageDesc();
	float GetScreenWidth();
	float GetScreenHeight();
	float GetBaseLineX();
	float GetBaseLineY();
	float GetXScale();
	float GetYScale();
	virtual ~ImageDesc();
	Scaleform::Render::Text::ImageDesc & operator=(Scaleform::Render::Text::ImageDesc &);
	Scaleform::Render::Text::ImageDesc & operator=(const Scaleform::Render::Text::ImageDesc &);
};
Scaleform::Render::Text::ImageDesc::ImageDesc(); // 0x14044EE20
struct Scaleform::Render::Text::HTMLImageTagDesc :
	Scaleform::Render::Text::ImageDesc
{
	Scaleform::StringLH Url; // 0x50
	Scaleform::StringLH Id; // 0x58
	long VSpace; // 0x60
	long HSpace; // 0x64
	unsigned long ParaId; // 0x68
	enum <unnamed-enum-Align_BaseLine>
	{
		Align_BaseLine = 0,
		Align_Right = 1,
		Align_Left = 2,
	};
	unsigned char Alignment; // 0x6C
	HTMLImageTagDesc(Scaleform::Render::Text::HTMLImageTagDesc &);
	HTMLImageTagDesc(const Scaleform::Render::Text::HTMLImageTagDesc &);
	HTMLImageTagDesc();
	unsigned long long GetHash();
	bool operator==(const Scaleform::Render::Text::HTMLImageTagDesc &);
	virtual ~HTMLImageTagDesc();
	Scaleform::Render::Text::HTMLImageTagDesc & operator=(Scaleform::Render::Text::HTMLImageTagDesc &);
	Scaleform::Render::Text::HTMLImageTagDesc & operator=(const Scaleform::Render::Text::HTMLImageTagDesc &);
};
Scaleform::Render::Text::HTMLImageTagDesc::HTMLImageTagDesc(); // 0x140389090
bool Scaleform::Render::Text::HTMLImageTagDesc::operator==(const Scaleform::Render::Text::HTMLImageTagDesc & f); // 0x1402F66C0
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
class Scaleform::Render::Text::TextFormat :
	Scaleform::NewOverrideBase<74>
{
	struct HashFunctor;
private:
	Scaleform::Render::Text::Allocator * pAllocator; // 0x0
	unsigned long RefCount; // 0x8
protected:
	Scaleform::StringDH FontList; // 0x10
	Scaleform::StringDH Url; // 0x20
	Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> pImageDesc; // 0x30
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> pFontHandle; // 0x38
	unsigned long ColorV; // 0x40
	float LetterSpacing; // 0x44
	unsigned short FontSize; // 0x48
	enum <unnamed-enum-Format_Bold>
	{
		Format_Bold = 1,
		Format_Italic = 2,
		Format_Underline = 4,
		Format_Kerning = 8,
	};
	unsigned char FormatFlags; // 0x4A
	enum <unnamed-enum-PresentMask_Color>
	{
		PresentMask_Color = 1,
		PresentMask_LetterSpacing = 2,
		PresentMask_FontList = 4,
		PresentMask_FontSize = 8,
		PresentMask_Bold = 16,
		PresentMask_Italic = 32,
		PresentMask_Underline = 64,
		PresentMask_Kerning = 128,
		PresentMask_Url = 256,
		PresentMask_ImageDesc = 512,
		PresentMask_Alpha = 1024,
		PresentMask_FontHandle = 2048,
		PresentMask_SingleFontName = 4096,
	};
	unsigned short PresentMask; // 0x4C
public:
	TextFormat(const Scaleform::Render::Text::TextFormat &, Scaleform::Render::Text::Allocator *);
	TextFormat(Scaleform::Render::Text::Allocator *);
	TextFormat(Scaleform::MemoryHeap *);
	~TextFormat();
	Scaleform::Render::Text::TextFormat & operator=(const Scaleform::Render::Text::TextFormat &);
	void AddRef();
	void Release();
	unsigned long GetRefCount();
	Scaleform::MemoryHeap * GetHeap();
	Scaleform::Render::Text::Allocator * GetAllocator();
	void SetBold(bool);
	void ClearBold();
	bool IsBold();
	void SetItalic(bool);
	void ClearItalic();
	bool IsItalic();
	void SetUnderline(bool);
	void ClearUnderline();
	bool IsUnderline();
	void SetKerning(bool);
	void ClearKerning();
	bool IsKerning();
	void SetColor(const Scaleform::Render::Color &);
	Scaleform::Render::Color GetColor();
	void SetColor32(unsigned long);
	unsigned long GetColor32();
	void ClearColor();
	void SetAlpha(unsigned char);
	unsigned char GetAlpha();
	void ClearAlpha();
	void SetLetterSpacing(float);
	float GetLetterSpacing();
	void SetLetterSpacingInFixp(long);
	short GetLetterSpacingInFixp();
	void ClearLetterSpacing();
	void SetFontSizeInFixp(unsigned long);
	unsigned long GetFontSizeInFixp();
	void SetFontSize(float);
	float GetFontSize();
	float GetFontSize(float);
	void ClearFontSize();
	void SetFontName(const wchar_t *, unsigned long long);
	void SetFontName(const char *, unsigned long long);
	void SetFontName(const Scaleform::String &);
	void SetFontList(const wchar_t *, unsigned long long);
	void SetFontList(const char *, unsigned long long);
	void SetFontList(const Scaleform::String &);
	const Scaleform::String & GetFontList();
	void ClearFontList();
	void SetFontHandle(Scaleform::Render::Text::FontHandle *);
	Scaleform::Render::Text::FontHandle * GetFontHandle();
	void ClearFontHandle();
	void SetImageDesc(Scaleform::Render::Text::HTMLImageTagDesc *);
	Scaleform::Render::Text::HTMLImageTagDesc * GetImageDesc();
	void ClearImageDesc();
	void SetUrl(const Scaleform::String &);
	void SetUrl(const wchar_t *, unsigned long long);
	void SetUrl(const char *, unsigned long long);
	const Scaleform::String & GetUrl();
	const char * GetUrlCStr();
	void ClearUrl();
	bool IsBoldSet();
	bool IsItalicSet();
	bool IsUnderlineSet();
	bool IsKerningSet();
	bool IsFontSizeSet();
	bool IsFontListSet();
	bool IsSingleFontNameSet();
	bool IsFontHandleSet();
	bool IsImageDescSet();
	bool IsColorSet();
	bool IsAlphaSet();
	bool IsLetterSpacingSet();
	bool IsUrlSet();
	bool IsUrlCleared();
	Scaleform::Render::Text::TextFormat Merge(const Scaleform::Render::Text::TextFormat &);
	Scaleform::Render::Text::TextFormat Intersection(const Scaleform::Render::Text::TextFormat &);
	bool operator==(const Scaleform::Render::Text::TextFormat &);
	bool IsFontSame(const Scaleform::Render::Text::TextFormat &);
	bool IsHTMLFontTagSame(const Scaleform::Render::Text::TextFormat &);
	void InitByDefaultValues();
	void __dflt_ctor_closure();
	void __copy_ctor_closure(Scaleform::Render::Text::TextFormat &);
};
struct Scaleform::Render::Text::TextFormat::HashFunctor
{
	static unsigned long long CalcHash(const Scaleform::Render::Text::TextFormat &);
	unsigned long long operator()(const Scaleform::Render::Text::TextFormat *);
	unsigned long long operator()(const Scaleform::Render::Text::TextFormat &);
};
class Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc>
{
protected:
	Scaleform::Render::Text::HTMLImageTagDesc * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::HTMLImageTagDesc>(const Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> &);
	Ptr<Scaleform::Render::Text::HTMLImageTagDesc>(Scaleform::Render::Text::HTMLImageTagDesc *);
	Ptr<Scaleform::Render::Text::HTMLImageTagDesc>(Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::HTMLImageTagDesc>(Scaleform::Pickable<Scaleform::Render::Text::HTMLImageTagDesc>);
	Ptr<Scaleform::Render::Text::HTMLImageTagDesc>(Scaleform::Render::Text::HTMLImageTagDesc &);
	Ptr<Scaleform::Render::Text::HTMLImageTagDesc>();
	~Ptr<Scaleform::Render::Text::HTMLImageTagDesc>();
	bool operator==(Scaleform::Render::Text::HTMLImageTagDesc *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> &);
	bool operator!=(Scaleform::Render::Text::HTMLImageTagDesc *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> &);
	Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & operator=(Scaleform::Pickable<Scaleform::Render::Text::HTMLImageTagDesc>);
	const Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & operator=(Scaleform::Render::Text::HTMLImageTagDesc &);
	const Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & operator=(Scaleform::Render::Text::HTMLImageTagDesc *);
	const Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> &);
	Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::HTMLImageTagDesc>);
	Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & SetPtr(Scaleform::Render::Text::HTMLImageTagDesc &);
	Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & SetPtr(Scaleform::Render::Text::HTMLImageTagDesc *);
	Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::HTMLImageTagDesc * & GetRawRef();
	Scaleform::Render::Text::HTMLImageTagDesc * GetPtr();
	Scaleform::Render::Text::HTMLImageTagDesc & operator*();
	Scaleform::Render::Text::HTMLImageTagDesc * operator->();
	Scaleform::Render::Text::HTMLImageTagDesc * operator struct Scaleform::Render::Text::HTMLImageTagDesc *();
	Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & Pick(Scaleform::Render::Text::HTMLImageTagDesc *);
	Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & Pick(Scaleform::Pickable<Scaleform::Render::Text::HTMLImageTagDesc>);
	Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> & Pick(Scaleform::Ptr<Scaleform::Render::Text::HTMLImageTagDesc> &);
};
class Scaleform::Ptr<Scaleform::Render::Text::FontHandle>
{
protected:
	Scaleform::Render::Text::FontHandle * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Text::FontHandle>(const Scaleform::Ptr<Scaleform::Render::Text::FontHandle> &);
	Ptr<Scaleform::Render::Text::FontHandle>(Scaleform::Render::Text::FontHandle *);
	Ptr<Scaleform::Render::Text::FontHandle>(Scaleform::Ptr<Scaleform::Render::Text::FontHandle> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Text::FontHandle>(Scaleform::Pickable<Scaleform::Render::Text::FontHandle>);
	Ptr<Scaleform::Render::Text::FontHandle>(Scaleform::Render::Text::FontHandle &);
	Ptr<Scaleform::Render::Text::FontHandle>();
	~Ptr<Scaleform::Render::Text::FontHandle>();
	bool operator==(Scaleform::Render::Text::FontHandle *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Text::FontHandle> &);
	bool operator!=(Scaleform::Render::Text::FontHandle *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Text::FontHandle> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Text::FontHandle> &);
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & operator=(Scaleform::Pickable<Scaleform::Render::Text::FontHandle>);
	const Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & operator=(Scaleform::Render::Text::FontHandle &);
	const Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & operator=(Scaleform::Render::Text::FontHandle *);
	const Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & operator=(const Scaleform::Ptr<Scaleform::Render::Text::FontHandle> &);
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & SetPtr(Scaleform::Pickable<Scaleform::Render::Text::FontHandle>);
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & SetPtr(Scaleform::Render::Text::FontHandle &);
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & SetPtr(Scaleform::Render::Text::FontHandle *);
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Text::FontHandle> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Text::FontHandle * & GetRawRef();
	Scaleform::Render::Text::FontHandle * GetPtr();
	Scaleform::Render::Text::FontHandle & operator*();
	Scaleform::Render::Text::FontHandle * operator->();
	Scaleform::Render::Text::FontHandle * operator class Scaleform::Render::Text::FontHandle *();
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & Pick(Scaleform::Render::Text::FontHandle *);
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & Pick(Scaleform::Pickable<Scaleform::Render::Text::FontHandle>);
	Scaleform::Ptr<Scaleform::Render::Text::FontHandle> & Pick(Scaleform::Ptr<Scaleform::Render::Text::FontHandle> &);
};
void Scaleform::Render::Text::TextFormat::SetFontSize(float fontSize); // 0x14038AAC0
Scaleform::Render::Text::FontHandle * Scaleform::Render::Text::TextFormat::GetFontHandle(); // 0x1402F71E0
Scaleform::Render::Text::HTMLImageTagDesc * Scaleform::Render::Text::TextFormat::GetImageDesc(); // 0x1402F73E0
bool Scaleform::Render::Text::TextFormat::IsUrlSet(); // 0x1402F8060
bool Scaleform::Render::Text::TextFormat::operator==(const Scaleform::Render::Text::TextFormat & f); // 0x1402F67C0
class Scaleform::Render::Text::ParagraphFormat :
	Scaleform::NewOverrideBase<74>
{
	struct HashFunctor;
	enum AlignType
	{
		Align_Left = 0,
		Align_Right = 1,
		Align_Justify = 2,
		Align_Center = 3,
	};
	enum DisplayType
	{
		Display_Inline = 0,
		Display_Block = 1,
		Display_None = 2,
	};
private:
	Scaleform::Render::Text::Allocator * pAllocator; // 0x0
	unsigned long RefCount; // 0x8
protected:
	unsigned long * pTabStops; // 0x10
	unsigned short BlockIndent; // 0x18
	short Indent; // 0x1A
	short Leading; // 0x1C
	unsigned short LeftMargin; // 0x1E
	unsigned short RightMargin; // 0x20
	enum <unnamed-enum-PresentMask_Alignment>
	{
		PresentMask_Alignment = 1,
		PresentMask_BlockIndent = 2,
		PresentMask_Indent = 4,
		PresentMask_Leading = 8,
		PresentMask_LeftMargin = 16,
		PresentMask_RightMargin = 32,
		PresentMask_TabStops = 64,
		PresentMask_Bullet = 128,
		PresentMask_Display = 256,
		Mask_Align = 1536,
		Shift_Align = 9,
		Mask_Display = 6144,
		Shift_Display = 11,
		Mask_Bullet = 32768,
	};
	unsigned short PresentMask; // 0x22
public:
	ParagraphFormat(const Scaleform::Render::Text::ParagraphFormat &, Scaleform::Render::Text::Allocator *);
	ParagraphFormat();
	~ParagraphFormat();
	void AddRef();
	void Release();
	unsigned long GetRefCount();
	Scaleform::Render::Text::Allocator * GetAllocator();
	void SetAlignment(Scaleform::Render::Text::ParagraphFormat::AlignType);
	void ClearAlignment();
	bool IsAlignmentSet();
	bool IsLeftAlignment();
	bool IsRightAlignment();
	bool IsCenterAlignment();
	bool IsJustifyAlignment();
	Scaleform::Render::Text::ParagraphFormat::AlignType GetAlignment();
	void SetBullet(bool);
	void ClearBullet();
	bool IsBulletSet();
	bool IsBullet();
	void SetBlockIndent(unsigned long);
	unsigned long GetBlockIndent();
	void ClearBlockIndent();
	bool IsBlockIndentSet();
	void SetIndent(long);
	long GetIndent();
	void ClearIndent();
	bool IsIndentSet();
	void SetLeading(long);
	long GetLeading();
	void ClearLeading();
	bool IsLeadingSet();
	void SetLeftMargin(unsigned long);
	unsigned long GetLeftMargin();
	void ClearLeftMargin();
	bool IsLeftMarginSet();
	void SetRightMargin(unsigned long);
	unsigned long GetRightMargin();
	void ClearRightMargin();
	bool IsRightMarginSet();
	void SetTabStops(const unsigned long *);
	void SetTabStops(unsigned long, ...);
	const unsigned long * GetTabStops();
	const unsigned long * GetTabStops(unsigned long *);
	void SetTabStopsNum(unsigned long);
	void SetTabStopsElement(unsigned long, unsigned long);
	void ClearTabStops();
	bool IsTabStopsSet();
	void SetDisplay(Scaleform::Render::Text::ParagraphFormat::DisplayType);
	void ClearDisplay();
	bool IsDisplaySet();
	Scaleform::Render::Text::ParagraphFormat::DisplayType GetDisplay();
	Scaleform::Render::Text::ParagraphFormat Merge(const Scaleform::Render::Text::ParagraphFormat &);
	Scaleform::Render::Text::ParagraphFormat Intersection(const Scaleform::Render::Text::ParagraphFormat &);
	Scaleform::Render::Text::ParagraphFormat & operator=(const Scaleform::Render::Text::ParagraphFormat &);
	bool operator==(const Scaleform::Render::Text::ParagraphFormat &);
	void InitByDefaultValues();
protected:
	void AllocTabStops(unsigned long);
	void FreeTabStops();
	bool TabStopsEqual(const unsigned long *);
	void CopyTabStops(const unsigned long *);
public:
	void __copy_ctor_closure(Scaleform::Render::Text::ParagraphFormat &);
};
struct Scaleform::Render::Text::ParagraphFormat::HashFunctor
{
	static unsigned long long CalcHash(const Scaleform::Render::Text::ParagraphFormat &);
	unsigned long long operator()(const Scaleform::Render::Text::ParagraphFormat *);
	unsigned long long operator()(const Scaleform::Render::Text::ParagraphFormat &);
};
Scaleform::Render::Text::ParagraphFormat::ParagraphFormat(const Scaleform::Render::Text::ParagraphFormat & src, Scaleform::Render::Text::Allocator * allocator); // 0x140272A90
bool Scaleform::Render::Text::ParagraphFormat::operator==(const Scaleform::Render::Text::ParagraphFormat & f); // 0x1402F6760
class Scaleform::RefCountBaseNTS<Scaleform::Render::Text::Allocator,74> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,74>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 74,
	};
public:
	RefCountBaseNTS<Scaleform::Render::Text::Allocator,74>(Scaleform::RefCountBaseNTS<Scaleform::Render::Text::Allocator,74> &);
	RefCountBaseNTS<Scaleform::Render::Text::Allocator,74>(const Scaleform::RefCountBaseNTS<Scaleform::Render::Text::Allocator,74> &);
	RefCountBaseNTS<Scaleform::Render::Text::Allocator,74>();
	virtual ~RefCountBaseNTS<Scaleform::Render::Text::Allocator,74>();
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::Allocator,74> & operator=(Scaleform::RefCountBaseNTS<Scaleform::Render::Text::Allocator,74> &);
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::Allocator,74> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::Render::Text::Allocator,74> &);
};
class Scaleform::Render::Text::Allocator :
	Scaleform::RefCountBaseNTS<Scaleform::Render::Text::Allocator,74>
{
	enum FlagsEnum
	{
		Flags_Global = 1,
	};
	enum <unnamed-enum-InitialFormatCacheCap>
	{
		InitialFormatCacheCap = 100,
		FormatCacheCapacityDelta = 10,
	};
	class TextFormatStorageType;
	class ParagraphFormatStorageType;
protected:
	Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > TextFormatStorage; // 0x10
	Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > ParagraphFormatStorage; // 0x18
	unsigned long TextFormatStorageCap; // 0x20
	unsigned long ParagraphFormatStorageCap; // 0x24
	unsigned long NewParagraphId; // 0x28
	Scaleform::MemoryHeap * pHeap; // 0x30
	Scaleform::Render::Text::TextFormat EntryTextFormat; // 0x38
	unsigned char Flags; // 0x88
	void Remove(Scaleform::Render::Text::ParagraphFormat *);
	void Remove(Scaleform::Render::Text::TextFormat *);
	Scaleform::Render::Text::Allocator * _GetThis();
public:
	Allocator(const Scaleform::Render::Text::Allocator &);
	Allocator(Scaleform::MemoryHeap *, unsigned char);
	virtual ~Allocator();
	Scaleform::MemoryHeap * GetHeap();
	wchar_t * AllocText(unsigned long long);
	wchar_t * ReallocText(wchar_t *, unsigned long long, unsigned long long);
	void FreeText(wchar_t *);
	void * AllocRaw(unsigned long long);
	void FreeRaw(void *);
	Scaleform::Render::Text::TextFormat * AllocateTextFormat(const Scaleform::Render::Text::TextFormat &);
	Scaleform::Render::Text::TextFormat * AllocateDefaultTextFormat();
	Scaleform::Render::Text::ParagraphFormat * AllocateParagraphFormat(const Scaleform::Render::Text::ParagraphFormat &);
	bool FlushTextFormatCache(bool);
	bool FlushParagraphFormatCache(bool);
	struct TextFormatVisitor;
	void VisitTextFormatCache(Scaleform::Render::Text::Allocator::TextFormatVisitor &);
	Scaleform::Render::Text::Paragraph * AllocateParagraph(const Scaleform::Render::Text::Paragraph &);
	Scaleform::Render::Text::Paragraph * AllocateParagraph();
	unsigned long AllocateParagraphId();
	unsigned long GetNextParagraphId();
	Scaleform::Render::Text::Allocator & operator=(const Scaleform::Render::Text::Allocator &);
};
class Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > :
	Scaleform::HashSet<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> >
{
	class SelfType;
	class BaseType;
	class ValueType;
public:
	HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scal(const Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > &);
	HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scal(long);
	HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scal();
	~HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Sca();
	void operator=(const Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor,Scaleform::Render::Text::TextFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>,Scaleform::Render::Text::TextFormat::HashFunctor> > &);
};
class Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *>
{
private:
	Scaleform::Render::Text::TextFormat * P; // 0x0
public:
	PtrCompare<Scaleform::Render::Text::TextFormat *>(const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> &);
	PtrCompare<Scaleform::Render::Text::TextFormat *>(Scaleform::Render::Text::TextFormat *);
	PtrCompare<Scaleform::Render::Text::TextFormat *>();
	~PtrCompare<Scaleform::Render::Text::TextFormat *>();
	Scaleform::Render::Text::TextFormat * operator class Scaleform::Render::Text::TextFormat *();
	Scaleform::Render::Text::TextFormat * operator->();
	bool operator==(const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> &);
	bool operator==(Scaleform::Render::Text::TextFormat *);
	Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> & operator=(Scaleform::Render::Text::TextFormat *);
	Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> & operator=(const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::TextFormat *> &);
};
class Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > :
	Scaleform::HashSet<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::AllocatorLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,74>,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> >
{
	class SelfType;
	class BaseType;
	class ValueType;
public:
	HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::(const Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > &);
	HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::(long);
	HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::();
	~HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text:();
	void operator=(const Scaleform::HashSetLH<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor,Scaleform::Render::Text::ParagraphFormat::HashFunctor,74,Scaleform::HashsetCachedEntry<Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>,Scaleform::Render::Text::ParagraphFormat::HashFunctor> > &);
};
class Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *>
{
private:
	Scaleform::Render::Text::ParagraphFormat * P; // 0x0
public:
	PtrCompare<Scaleform::Render::Text::ParagraphFormat *>(const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *> &);
	PtrCompare<Scaleform::Render::Text::ParagraphFormat *>(Scaleform::Render::Text::ParagraphFormat *);
	PtrCompare<Scaleform::Render::Text::ParagraphFormat *>();
	~PtrCompare<Scaleform::Render::Text::ParagraphFormat *>();
	Scaleform::Render::Text::ParagraphFormat * operator class Scaleform::Render::Text::ParagraphFormat *();
	Scaleform::Render::Text::ParagraphFormat * operator->();
	bool operator==(const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *> &);
	bool operator==(Scaleform::Render::Text::ParagraphFormat *);
	Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *> & operator=(Scaleform::Render::Text::ParagraphFormat *);
	Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *> & operator=(const Scaleform::Render::Text::PtrCompare<Scaleform::Render::Text::ParagraphFormat *> &);
};
Scaleform::Render::Text::Allocator::Allocator(Scaleform::MemoryHeap * pheap, unsigned char flags); // 0x1402F0870
Scaleform::Render::Text::Allocator::~Allocator(); // 0x1402F1140
struct Scaleform::Render::Text::Allocator::TextFormatVisitor
{
	~TextFormatVisitor();
	bool Visit(const Scaleform::Render::Text::TextFormat &);
	TextFormatVisitor(const Scaleform::Render::Text::Allocator::TextFormatVisitor &);
	TextFormatVisitor();
	Scaleform::Render::Text::Allocator::TextFormatVisitor & operator=(const Scaleform::Render::Text::Allocator::TextFormatVisitor &);
};