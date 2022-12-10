#pragma once

struct HDC__
{
	long unused; // 0x0
};
struct _FIXED
{
	unsigned short fract; // 0x0
	short value; // 0x2
};
struct HFONT__
{
	long unused; // 0x0
};
struct Scaleform::Render::FontSysDataWinAPI
{
	enum <unnamed-enum-BufSizeInc>
	{
		BufSizeInc = 1016,
	};
	Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> GlyphBuffer; // 0x0
	HDC__ * WinHDC; // 0x18
	FontSysDataWinAPI(Scaleform::Render::FontSysDataWinAPI &);
	FontSysDataWinAPI(const Scaleform::Render::FontSysDataWinAPI &);
	FontSysDataWinAPI(HDC__ *);
	~FontSysDataWinAPI();
	Scaleform::Render::FontSysDataWinAPI & operator=(Scaleform::Render::FontSysDataWinAPI &);
	Scaleform::Render::FontSysDataWinAPI & operator=(const Scaleform::Render::FontSysDataWinAPI &);
};
class Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<unsigned char,Scaleform::AllocatorGH<unsigned char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Render::ExternalFontWinAPI :
	Scaleform::Render::Font
{
	enum <unnamed-enum-GGO_FontHeight>
	{
		GGO_FontHeight = 240,
	};
public:
	ExternalFontWinAPI(const Scaleform::Render::ExternalFontWinAPI &);
	ExternalFontWinAPI(Scaleform::Render::FontProviderWinAPI *, Scaleform::Render::FontSysDataWinAPI *, const char *, unsigned long, Scaleform::Lock *);
	virtual ~ExternalFontWinAPI();
	bool IsValid();
	void SetHinting(const Scaleform::Render::Font::NativeHintingType &);
	virtual const char * GetName();
	virtual long GetGlyphIndex(unsigned short);
	virtual float GetAdvance(unsigned long);
	virtual float GetKerningAdjustment(unsigned long, unsigned long);
	virtual float GetGlyphWidth(unsigned long);
	virtual float GetGlyphHeight(unsigned long);
	virtual Scaleform::Render::Rect<float> & GetGlyphBounds(unsigned long, Scaleform::Render::Rect<float> *);
	virtual bool IsHintedVectorGlyph(unsigned long, unsigned long);
	virtual bool IsHintedRasterGlyph(unsigned long, unsigned long);
	virtual const Scaleform::Render::ShapeDataInterface * GetPermanentGlyphShape(unsigned long);
	virtual bool GetTemporaryGlyphShape(unsigned long, unsigned long, Scaleform::Render::GlyphShape *);
	virtual bool GetGlyphRaster(unsigned long, unsigned long, Scaleform::Render::GlyphRaster *);
private:
	bool decomposeGlyphOutline(const unsigned char *, unsigned long, Scaleform::Render::GlyphShape *, unsigned long);
	void decomposeGlyphBitmap(const unsigned char *, long, long, long, long, Scaleform::Render::GlyphRaster *);
	void loadKerningPairs();
	static float FxToTwips(_FIXED);
	static float FxToS1024(_FIXED);
	struct GlyphType;
	struct KerningPairType;
	Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> pFontProvider; // 0x38
	Scaleform::Render::FontSysDataWinAPI * pSysData; // 0x40
	Scaleform::ArrayLH<char,2,Scaleform::ArrayDefaultPolicy> Name; // 0x48
	Scaleform::ArrayLH<wchar_t,2,Scaleform::ArrayDefaultPolicy> NameW; // 0x60
	HFONT__ * MasterFont; // 0x78
	HFONT__ * HintedFont; // 0x80
	unsigned long LastHintedFontSize; // 0x88
	Scaleform::ArrayLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2,Scaleform::ArrayDefaultPolicy> Glyphs; // 0x90
	Scaleform::HashIdentityLH<unsigned short,unsigned int,2,Scaleform::IdentityHash<unsigned short> > CodeTable; // 0xA8
	Scaleform::HashLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>,2,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > KerningPairs; // 0xB0
	float Scale1024; // 0xB8
	Scaleform::Render::Font::NativeHintingType Hinting; // 0xC0
	Scaleform::Lock * pFontLock; // 0xD8
public:
	Scaleform::Render::ExternalFontWinAPI & operator=(const Scaleform::Render::ExternalFontWinAPI &);
};
const Scaleform::Render::ShapeDataInterface * Scaleform::Render::ExternalFontWinAPI::GetPermanentGlyphShape(unsigned long glyphIndex); // 0x1400470F0
struct Scaleform::Render::ExternalFontWinAPI::GlyphType
{
	unsigned long Code; // 0x0
	float Advance; // 0x4
	Scaleform::Render::Rect<float> Bounds; // 0x10
	GlyphType(Scaleform::Render::ExternalFontWinAPI::GlyphType &);
	GlyphType(const Scaleform::Render::ExternalFontWinAPI::GlyphType &);
	GlyphType();
	Scaleform::Render::ExternalFontWinAPI::GlyphType & operator=(Scaleform::Render::ExternalFontWinAPI::GlyphType &);
	Scaleform::Render::ExternalFontWinAPI::GlyphType & operator=(const Scaleform::Render::ExternalFontWinAPI::GlyphType &);
};
struct Scaleform::Render::ExternalFontWinAPI::KerningPairType
{
	unsigned short Char0; // 0x0
	unsigned short Char1; // 0x2
	bool operator==(const Scaleform::Render::ExternalFontWinAPI::KerningPairType &);
};
class Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI>
{
protected:
	Scaleform::Render::FontProviderWinAPI * pObject; // 0x0
public:
	Ptr<Scaleform::Render::FontProviderWinAPI>(const Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> &);
	Ptr<Scaleform::Render::FontProviderWinAPI>(Scaleform::Render::FontProviderWinAPI *);
	Ptr<Scaleform::Render::FontProviderWinAPI>(Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> &, Scaleform::PickType);
	Ptr<Scaleform::Render::FontProviderWinAPI>(Scaleform::Pickable<Scaleform::Render::FontProviderWinAPI>);
	Ptr<Scaleform::Render::FontProviderWinAPI>(Scaleform::Render::FontProviderWinAPI &);
	Ptr<Scaleform::Render::FontProviderWinAPI>();
	~Ptr<Scaleform::Render::FontProviderWinAPI>();
	bool operator==(Scaleform::Render::FontProviderWinAPI *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> &);
	bool operator!=(Scaleform::Render::FontProviderWinAPI *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> &);
	Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & operator=(Scaleform::Pickable<Scaleform::Render::FontProviderWinAPI>);
	const Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & operator=(Scaleform::Render::FontProviderWinAPI &);
	const Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & operator=(Scaleform::Render::FontProviderWinAPI *);
	const Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & operator=(const Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> &);
	Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & SetPtr(Scaleform::Pickable<Scaleform::Render::FontProviderWinAPI>);
	Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & SetPtr(Scaleform::Render::FontProviderWinAPI &);
	Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & SetPtr(Scaleform::Render::FontProviderWinAPI *);
	Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & SetPtr(const Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::FontProviderWinAPI * & GetRawRef();
	Scaleform::Render::FontProviderWinAPI * GetPtr();
	Scaleform::Render::FontProviderWinAPI & operator*();
	Scaleform::Render::FontProviderWinAPI * operator->();
	Scaleform::Render::FontProviderWinAPI * operator class Scaleform::Render::FontProviderWinAPI *();
	Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & Pick(Scaleform::Render::FontProviderWinAPI *);
	Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & Pick(Scaleform::Pickable<Scaleform::Render::FontProviderWinAPI>);
	Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> & Pick(Scaleform::Ptr<Scaleform::Render::FontProviderWinAPI> &);
};
class Scaleform::ArrayLH<char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<char,Scaleform::AllocatorLH<char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<char,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<char,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<char,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<char,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<wchar_t,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<wchar_t,Scaleform::AllocatorLH<wchar_t,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef wchar_t ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<wchar_t,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<wchar_t,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<wchar_t,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<wchar_t,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<wchar_t,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<wchar_t,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<wchar_t,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<wchar_t,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::ArrayLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::ExternalFontWinAPI::GlyphType,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::ExternalFontWinAPI::GlyphType,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::HashIdentityLH<unsigned short,unsigned int,2,Scaleform::IdentityHash<unsigned short> > :
	Scaleform::HashUncachedLH<unsigned short,unsigned int,Scaleform::IdentityHash<unsigned short>,2>
{
	class SelfType;
	class BaseType;
public:
	HashIdentityLH<unsigned short,unsigned int,2,Scaleform::IdentityHash<unsigned short> >(const Scaleform::HashIdentityLH<unsigned short,unsigned int,2,Scaleform::IdentityHash<unsigned short> > &);
	HashIdentityLH<unsigned short,unsigned int,2,Scaleform::IdentityHash<unsigned short> >(long);
	HashIdentityLH<unsigned short,unsigned int,2,Scaleform::IdentityHash<unsigned short> >();
	~HashIdentityLH<unsigned short,unsigned int,2,Scaleform::IdentityHash<unsigned short> >();
	void operator=(const Scaleform::HashIdentityLH<unsigned short,unsigned int,2,Scaleform::IdentityHash<unsigned short> > &);
};
class Scaleform::HashLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>,2,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>,2,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash(const Scaleform::HashLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>,2,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > &);
	HashLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>,2,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash(long);
	HashLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>,2,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash();
	~HashLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>,2,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHas();
	void operator=(const Scaleform::HashLH<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType>,2,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >,Scaleform::HashNode<Scaleform::Render::ExternalFontWinAPI::KerningPairType,float,Scaleform::FixedSizeHash<Scaleform::Render::ExternalFontWinAPI::KerningPairType> >::NodeHashF> > &);
};
class Scaleform::Render::FontProviderWinAPI :
	Scaleform::Render::FontProvider
{
public:
	FontProviderWinAPI(const Scaleform::Render::FontProviderWinAPI &);
	FontProviderWinAPI(HDC__ *);
	virtual ~FontProviderWinAPI();
	void SetHintingAllFonts(Scaleform::Render::Font::NativeHintingRange, Scaleform::Render::Font::NativeHintingRange, unsigned long, unsigned long);
	void SetHinting(const char *, Scaleform::Render::Font::NativeHintingRange, Scaleform::Render::Font::NativeHintingRange, unsigned long, unsigned long);
	Scaleform::Render::Font * CreateFont(const char *, unsigned long);
	virtual void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
private:
	Scaleform::Render::Font::NativeHintingType * findNativeHinting(const char *);
	Scaleform::Render::FontSysDataWinAPI SysData; // 0x10
	Scaleform::Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy> NativeHinting; // 0x30
	Scaleform::Lock FontLock; // 0x48
public:
	Scaleform::Render::FontProviderWinAPI & operator=(const Scaleform::Render::FontProviderWinAPI &);
};
class Scaleform::Render::FontProviderWinAPI :
	Scaleform::Render::FontProvider
{
public:
	FontProviderWinAPI(const Scaleform::Render::FontProviderWinAPI &);
	FontProviderWinAPI(HDC__ *);
	virtual ~FontProviderWinAPI();
	void SetHintingAllFonts(Scaleform::Render::Font::NativeHintingRange, Scaleform::Render::Font::NativeHintingRange, unsigned long, unsigned long);
	void SetHinting(const char *, Scaleform::Render::Font::NativeHintingRange, Scaleform::Render::Font::NativeHintingRange, unsigned long, unsigned long);
	virtual Scaleform::Render::Font * CreateFont(const char *, unsigned long);
	virtual void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
private:
	Scaleform::Render::Font::NativeHintingType * findNativeHinting(const char *);
	Scaleform::Render::FontSysDataWinAPI SysData; // 0x10
	Scaleform::Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy> NativeHinting; // 0x30
	Scaleform::Lock FontLock; // 0x48
public:
	Scaleform::Render::FontProviderWinAPI & operator=(const Scaleform::Render::FontProviderWinAPI &);
};
class Scaleform::Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Font::NativeHintingType,Scaleform::AllocatorGH<Scaleform::Render::Font::NativeHintingType,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Render::Font::NativeHintingType,2,Scaleform::ArrayDefaultPolicy>();
};