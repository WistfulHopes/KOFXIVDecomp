#pragma once

class Scaleform::Render::GlyphRaster :
	Scaleform::RefCountBaseNTS<Scaleform::Render::GlyphRaster,75>
{
public:
	GlyphRaster(Scaleform::Render::GlyphRaster &);
	GlyphRaster(const Scaleform::Render::GlyphRaster &);
	GlyphRaster();
	Scaleform::ArrayLH_POD<unsigned char,75,Scaleform::ArrayDefaultPolicy> Raster; // 0x10
	unsigned long Width; // 0x28
	unsigned long Height; // 0x2C
	long OriginX; // 0x30
	long OriginY; // 0x34
	unsigned long HintedSize; // 0x38
	virtual ~GlyphRaster();
	Scaleform::Render::GlyphRaster & operator=(Scaleform::Render::GlyphRaster &);
	Scaleform::Render::GlyphRaster & operator=(const Scaleform::Render::GlyphRaster &);
};
class Scaleform::RefCountBaseNTS<Scaleform::Render::GlyphRaster,75> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,75>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 75,
	};
public:
	RefCountBaseNTS<Scaleform::Render::GlyphRaster,75>(Scaleform::RefCountBaseNTS<Scaleform::Render::GlyphRaster,75> &);
	RefCountBaseNTS<Scaleform::Render::GlyphRaster,75>(const Scaleform::RefCountBaseNTS<Scaleform::Render::GlyphRaster,75> &);
	RefCountBaseNTS<Scaleform::Render::GlyphRaster,75>();
	virtual ~RefCountBaseNTS<Scaleform::Render::GlyphRaster,75>();
	Scaleform::RefCountBaseNTS<Scaleform::Render::GlyphRaster,75> & operator=(Scaleform::RefCountBaseNTS<Scaleform::Render::GlyphRaster,75> &);
	Scaleform::RefCountBaseNTS<Scaleform::Render::GlyphRaster,75> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::Render::GlyphRaster,75> &);
};
class Scaleform::ArrayLH_POD<unsigned char,75,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,75>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<unsigned char,75,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<unsigned char,75,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<unsigned char,75,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<unsigned char,75,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<unsigned char,75,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<unsigned char,75,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<unsigned char,75,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<unsigned char,75,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Render::GlyphShape :
	Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >
{
	class ContainerType;
public:
	GlyphShape(Scaleform::Render::GlyphShape &);
	GlyphShape(const Scaleform::Render::GlyphShape &);
	GlyphShape();
	void Clear();
	virtual bool IsEmpty();
	void SetHintedSize(unsigned long);
	unsigned long GetHintedSize();
private:
	Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> Data; // 0x60
	unsigned long HintedSize; // 0x78
	Scaleform::Render::Rect<float> Bounds; // 0x80
public:
	virtual ~GlyphShape();
	Scaleform::Render::GlyphShape & operator=(Scaleform::Render::GlyphShape &);
	Scaleform::Render::GlyphShape & operator=(const Scaleform::Render::GlyphShape &);
};
class Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > :
	Scaleform::Render::ShapeDataInterface
{
public:
	ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(const Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *, unsigned long, float);
	unsigned long AddFillStyle(const Scaleform::Render::FillStyleType &);
	unsigned long AddStrokeStyle(const Scaleform::Render::StrokeStyleType &);
	void UpdateFillStyle(unsigned long, const Scaleform::Render::FillStyleType &);
	void UpdateStrokeStyle(unsigned long, const Scaleform::Render::StrokeStyleType &);
	void StartPath(Scaleform::Render::ShapePosInfo *, Scaleform::Render::ShapePathType, unsigned long, unsigned long, unsigned long, float, float);
	void LineTo(Scaleform::Render::ShapePosInfo *, float, float);
	void QuadTo(Scaleform::Render::ShapePosInfo *, float, float, float, float);
	void ClosePath(Scaleform::Render::ShapePosInfo *);
	void EndPath();
	void EndShape();
	virtual bool IsEmpty();
	virtual unsigned long GetFillStyleCount();
	virtual unsigned long GetStrokeStyleCount();
	virtual void GetFillStyle(unsigned long, Scaleform::Render::FillStyleType *);
	virtual void GetStrokeStyle(unsigned long, Scaleform::Render::StrokeStyleType *);
	virtual unsigned long GetStartingPos();
	virtual Scaleform::Render::ShapePathType ReadPathInfo(Scaleform::Render::ShapePosInfo *, float *, unsigned long *);
	virtual Scaleform::Render::PathEdgeType ReadEdge(Scaleform::Render::ShapePosInfo *, float *);
private:
	Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> * pContainer; // 0x10
	Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > Decoder; // 0x18
	unsigned long StartingPos; // 0x28
	float Multiplier; // 0x2C
	Scaleform::ArrayLH<Scaleform::Render::FillStyleType,2,Scaleform::ArrayDefaultPolicy> FillStyles; // 0x30
	Scaleform::ArrayLH<Scaleform::Render::StrokeStyleType,2,Scaleform::ArrayDefaultPolicy> StrokeStyles; // 0x48
public:
	virtual ~ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >();
	Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > & operator=(Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
	Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > & operator=(const Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > &);
};
void Scaleform::Render::GlyphShape::Clear(); // 0x1403763A0
bool Scaleform::Render::GlyphShape::IsEmpty(); // 0x140377740
class Scaleform::Render::FontCacheHandleRef
{
private:
	Scaleform::AtomicPtr<Scaleform::Render::FontCacheHandleManager> pManager; // 0x0
	Scaleform::Render::FontCacheHandle * pFontHandle; // 0x8
	void releaseFont();
	void releaseFont_NoNotify();
public:
	FontCacheHandleRef(const Scaleform::Render::FontCacheHandleRef &);
	FontCacheHandleRef();
	~FontCacheHandleRef();
	Scaleform::Render::FontCacheHandleRef & operator=(const Scaleform::Render::FontCacheHandleRef &);
};
class Scaleform::AtomicPtr<Scaleform::Render::FontCacheHandleManager> :
	Scaleform::AtomicValueBase<Scaleform::Render::FontCacheHandleManager *>
{
	class Ops;
public:
	AtomicPtr<Scaleform::Render::FontCacheHandleManager>(Scaleform::AtomicPtr<Scaleform::Render::FontCacheHandleManager> &);
	AtomicPtr<Scaleform::Render::FontCacheHandleManager>(const Scaleform::AtomicPtr<Scaleform::Render::FontCacheHandleManager> &);
	AtomicPtr<Scaleform::Render::FontCacheHandleManager>(Scaleform::Render::FontCacheHandleManager *);
	AtomicPtr<Scaleform::Render::FontCacheHandleManager>();
	Scaleform::Render::FontCacheHandleManager * operator->();
	Scaleform::Render::FontCacheHandleManager * operator class Scaleform::Render::FontCacheHandleManager *();
	Scaleform::AtomicPtr<Scaleform::Render::FontCacheHandleManager> & operator=(Scaleform::AtomicPtr<Scaleform::Render::FontCacheHandleManager> &);
	Scaleform::AtomicPtr<Scaleform::Render::FontCacheHandleManager> & operator=(const Scaleform::AtomicPtr<Scaleform::Render::FontCacheHandleManager> &);
	Scaleform::Render::FontCacheHandleManager * operator=(Scaleform::Render::FontCacheHandleManager *);
	Scaleform::Render::FontCacheHandleManager * operator++(long);
	Scaleform::Render::FontCacheHandleManager * operator++();
	Scaleform::Render::FontCacheHandleManager * operator--(long);
	Scaleform::Render::FontCacheHandleManager * operator--();
};
class Scaleform::RefCountBase<Scaleform::Render::Font,75> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,75>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 75,
	};
public:
	RefCountBase<Scaleform::Render::Font,75>(Scaleform::RefCountBase<Scaleform::Render::Font,75> &);
	RefCountBase<Scaleform::Render::Font,75>(const Scaleform::RefCountBase<Scaleform::Render::Font,75> &);
	RefCountBase<Scaleform::Render::Font,75>();
	virtual ~RefCountBase<Scaleform::Render::Font,75>();
	Scaleform::RefCountBase<Scaleform::Render::Font,75> & operator=(Scaleform::RefCountBase<Scaleform::Render::Font,75> &);
	Scaleform::RefCountBase<Scaleform::Render::Font,75> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Font,75> &);
};
class Scaleform::Render::Font :
	Scaleform::RefCountBase<Scaleform::Render::Font,75>
{
public:
	Font(const Scaleform::Render::Font &);
	Font(unsigned long);
	virtual ~Font();
	enum FontFlags
	{
		FF_Italic = 1,
		FF_Bold = 2,
		FF_BoldItalic = 3,
		FF_Style_Mask = 3,
		FF_DeviceFont = 16,
		FF_NativeHinting = 32,
		FF_NotResolved = 64,
		FF_RasterOnly = 128,
		FF_CodePage_Mask = 768,
		FF_CodePage_Unicode = 0,
		FF_CodePage_Ansi = 256,
		FF_CodePage_ShiftJis = 512,
		FF_CreateFont_Mask = 771,
		FF_GlyphShapesStripped = 4096,
		FF_HasLayout = 8192,
		FF_WideCodes = 16384,
		FF_PixelAligned = 32768,
		FF_DistanceFieldAlpha = 65536,
	};
	enum NativeHintingRange
	{
		DontHint = 0,
		HintCJK = 1,
		HintAll = 2,
	};
	struct NativeHintingType;
	static bool IsMissingGlyph(unsigned long);
	bool MatchSubstituteFont(Scaleform::Render::Font *);
	const char * GetName();
	long GetGlyphIndex(unsigned short);
	float GetAdvance(unsigned long);
	float GetKerningAdjustment(unsigned long, unsigned long);
	float GetGlyphWidth(unsigned long);
	float GetGlyphHeight(unsigned long);
	Scaleform::Render::Rect<float> & GetGlyphBounds(unsigned long, Scaleform::Render::Rect<float> *);
	bool IsHintedVectorGlyph(unsigned long, unsigned long);
	bool IsHintedRasterGlyph(unsigned long, unsigned long);
	const Scaleform::Render::TextureGlyph * GetTextureGlyph(unsigned long);
	void * GetTextureGlyphData();
	void SetTextureGlyphData(void *);
	float GetTextureGlyphHeight();
	const Scaleform::Render::ShapeDataInterface * GetPermanentGlyphShape(unsigned long);
	bool GetTemporaryGlyphShape(unsigned long, unsigned long, Scaleform::Render::GlyphShape *);
	bool GetGlyphRaster(unsigned long, unsigned long, Scaleform::Render::GlyphRaster *);
	long GetCharValue(unsigned long);
	unsigned long GetGlyphShapeCount();
	bool HasVectorOrRasterGlyphs();
	Scaleform::String GetCharRanges();
	float GetNominalGlyphWidth();
	float GetNominalGlyphHeight();
	bool HasTextureGlyphs();
	float GetLeading();
	float GetDescent();
	float GetAscent();
	unsigned long GetFontFlags();
	unsigned long GetFontStyleFlags();
	unsigned long GetCreateFontFlags();
	bool IsItalic();
	bool IsBold();
	bool IsDeviceFont();
	bool HasNativeHinting();
	bool IsRasterOnly();
	Scaleform::Render::Font::FontFlags GetCodePage();
	bool AreUnicodeChars();
	bool GlyphShapesStripped();
	bool HasLayout();
	bool AreWideCodes();
	bool IsPixelAligned();
	bool IsResolved();
	void SetNotResolvedFlag();
	static bool MatchFontFlags_Static(unsigned long, unsigned long);
	bool IsCJK(unsigned short);
	bool MatchFontFlags(unsigned long);
	bool MatchFont(const char *, unsigned long);
	unsigned short GetLowerCaseTop(Scaleform::Render::GlyphCache *);
	unsigned short GetUpperCaseTop(Scaleform::Render::GlyphCache *);
protected:
	unsigned short calcTopBound(unsigned short);
	void calcLowerUpperTop(Scaleform::Render::GlyphCache *);
	void SetFontMetrics(float, float, float);
	void SetItalic(bool);
	void SetBold(bool);
	void SetCodePage(Scaleform::Render::Font::FontFlags);
	void SetGlyphShapesStripped();
	void SetHasLayout(bool);
	void SetWideCodes(bool);
	void SetPixelAligned(bool);
	float Ascent; // 0x10
	float Descent; // 0x14
	float Leading; // 0x18
	unsigned long Flags; // 0x1C
	short LowerCaseTop; // 0x20
	short UpperCaseTop; // 0x22
	Scaleform::Render::FontCacheHandleRef hRef; // 0x28
public:
	Scaleform::Render::Font & operator=(const Scaleform::Render::Font &);
	void __dflt_ctor_closure();
};
struct Scaleform::Render::Font::NativeHintingType
{
	Scaleform::String Typeface; // 0x0
	Scaleform::Render::Font::NativeHintingRange RasterRange; // 0x8
	Scaleform::Render::Font::NativeHintingRange VectorRange; // 0xC
	unsigned long MaxRasterHintedSize; // 0x10
	unsigned long MaxVectorHintedSize; // 0x14
	NativeHintingType(Scaleform::Render::Font::NativeHintingType &);
	NativeHintingType(const Scaleform::Render::Font::NativeHintingType &);
	NativeHintingType();
	~NativeHintingType();
	Scaleform::Render::Font::NativeHintingType & operator=(Scaleform::Render::Font::NativeHintingType &);
	Scaleform::Render::Font::NativeHintingType & operator=(const Scaleform::Render::Font::NativeHintingType &);
};
bool Scaleform::Render::Font::GetGlyphRaster(unsigned long glyphIndex, unsigned long hintedSize, Scaleform::Render::GlyphRaster * raster); // 0x14004BBE0
unsigned long Scaleform::Render::Font::GetGlyphShapeCount(); // 0x1400470F0
void Scaleform::Render::Font::SetTextureGlyphData(void * __formal); // 0x14002E7C0
float Scaleform::Render::Font::GetTextureGlyphHeight(); // 0x140271040
long Scaleform::Render::Font::GetCharValue(unsigned long glyphIndex); // 0x1400FB800
bool Scaleform::Render::Font::HasVectorOrRasterGlyphs(); // 0x1400B8180
Scaleform::String Scaleform::Render::Font::GetCharRanges(); // 0x140271050
float Scaleform::Render::Font::GetNominalGlyphWidth(); // 0x140271080
float Scaleform::Render::Font::GetNominalGlyphHeight(); // 0x140271090
class Scaleform::Render::FontProvider :
	Scaleform::RefCountBase<Scaleform::Render::FontProvider,75>
{
public:
	virtual ~FontProvider();
	Scaleform::Render::Font * CreateFontW(const char *, unsigned long);
	void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
	FontProvider(const Scaleform::Render::FontProvider &);
	FontProvider();
	Scaleform::Render::FontProvider & operator=(const Scaleform::Render::FontProvider &);
};
class Scaleform::RefCountBase<Scaleform::Render::FontProvider,75> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,75>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 75,
	};
public:
	RefCountBase<Scaleform::Render::FontProvider,75>(Scaleform::RefCountBase<Scaleform::Render::FontProvider,75> &);
	RefCountBase<Scaleform::Render::FontProvider,75>(const Scaleform::RefCountBase<Scaleform::Render::FontProvider,75> &);
	RefCountBase<Scaleform::Render::FontProvider,75>();
	virtual ~RefCountBase<Scaleform::Render::FontProvider,75>();
	Scaleform::RefCountBase<Scaleform::Render::FontProvider,75> & operator=(Scaleform::RefCountBase<Scaleform::Render::FontProvider,75> &);
	Scaleform::RefCountBase<Scaleform::Render::FontProvider,75> & operator=(const Scaleform::RefCountBase<Scaleform::Render::FontProvider,75> &);
};
class Scaleform::Render::FontProvider :
	Scaleform::RefCountBase<Scaleform::Render::FontProvider,75>
{
public:
	virtual ~FontProvider();
	Scaleform::Render::Font * CreateFont(const char *, unsigned long);
	void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
	FontProvider(const Scaleform::Render::FontProvider &);
	FontProvider();
	Scaleform::Render::FontProvider & operator=(const Scaleform::Render::FontProvider &);
};
class Scaleform::Render::FontProvider :
	Scaleform::RefCountBase<Scaleform::Render::FontProvider,75>
{
public:
	virtual ~FontProvider();
	Scaleform::Render::Font * CreateFontA(const char *, unsigned long);
	void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
	FontProvider(const Scaleform::Render::FontProvider &);
	FontProvider();
	Scaleform::Render::FontProvider & operator=(const Scaleform::Render::FontProvider &);
};
class Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > :
	Scaleform::Hash<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF> > >
{
	class ValueType;
	class SelfType;
	class BaseType;
public:
	void operator=(const Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
	Scaleform::String * GetCaseInsensitive(const Scaleform::String &);
	const Scaleform::String * GetCaseInsensitive(const Scaleform::String &);
	bool GetCaseInsensitive(const Scaleform::String &, Scaleform::String *);
	struct base_iterator;
	Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeAltHashF,Scaleform::AllocatorGH<Scaleform::String,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>,Scaleform::HashNode<Scaleform::String,Scaleform::String,Scaleform::String::NoCaseHashFunctor>::NodeHashF> >::Iterator FindCaseInsensitive(const Scaleform::String &);
	void SetCaseInsensitive(const Scaleform::String &, const Scaleform::String &);
	StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> >(const Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
	StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> >();
	~StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> >();
};