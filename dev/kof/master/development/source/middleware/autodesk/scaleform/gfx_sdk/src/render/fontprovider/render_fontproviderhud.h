#pragma once

class Scaleform::Render::ExternalFontHUD :
	Scaleform::Render::Font
{
public:
	ExternalFontHUD(const Scaleform::Render::ExternalFontHUD &);
	ExternalFontHUD(Scaleform::Render::FontProviderHUD *, const char *, unsigned long);
	virtual ~ExternalFontHUD();
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
	static unsigned long GetMonoFontWidth();
	static unsigned long GetMonoFontHeight();
	static unsigned long GetMonoFontBaseLine();
	static const unsigned char * GetGlyphBits(unsigned short);
private:
	static long getGlyphIndex(unsigned short);
	Scaleform::Ptr<Scaleform::Render::FontProviderHUD> pFontProvider; // 0x38
	Scaleform::Array<char,2,Scaleform::ArrayDefaultPolicy> Name; // 0x40
	float Advance; // 0x58
public:
	Scaleform::Render::ExternalFontHUD & operator=(const Scaleform::Render::ExternalFontHUD &);
};
class Scaleform::Ptr<Scaleform::Render::FontProviderHUD>
{
protected:
	Scaleform::Render::FontProviderHUD * pObject; // 0x0
public:
	Ptr<Scaleform::Render::FontProviderHUD>(const Scaleform::Ptr<Scaleform::Render::FontProviderHUD> &);
	Ptr<Scaleform::Render::FontProviderHUD>(Scaleform::Render::FontProviderHUD *);
	Ptr<Scaleform::Render::FontProviderHUD>(Scaleform::Ptr<Scaleform::Render::FontProviderHUD> &, Scaleform::PickType);
	Ptr<Scaleform::Render::FontProviderHUD>(Scaleform::Pickable<Scaleform::Render::FontProviderHUD>);
	Ptr<Scaleform::Render::FontProviderHUD>(Scaleform::Render::FontProviderHUD &);
	Ptr<Scaleform::Render::FontProviderHUD>();
	~Ptr<Scaleform::Render::FontProviderHUD>();
	bool operator==(Scaleform::Render::FontProviderHUD *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::FontProviderHUD> &);
	bool operator!=(Scaleform::Render::FontProviderHUD *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::FontProviderHUD> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::FontProviderHUD> &);
	Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & operator=(Scaleform::Pickable<Scaleform::Render::FontProviderHUD>);
	const Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & operator=(Scaleform::Render::FontProviderHUD &);
	const Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & operator=(Scaleform::Render::FontProviderHUD *);
	const Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & operator=(const Scaleform::Ptr<Scaleform::Render::FontProviderHUD> &);
	Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & SetPtr(Scaleform::Pickable<Scaleform::Render::FontProviderHUD>);
	Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & SetPtr(Scaleform::Render::FontProviderHUD &);
	Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & SetPtr(Scaleform::Render::FontProviderHUD *);
	Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & SetPtr(const Scaleform::Ptr<Scaleform::Render::FontProviderHUD> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::FontProviderHUD * & GetRawRef();
	Scaleform::Render::FontProviderHUD * GetPtr();
	Scaleform::Render::FontProviderHUD & operator*();
	Scaleform::Render::FontProviderHUD * operator->();
	Scaleform::Render::FontProviderHUD * operator class Scaleform::Render::FontProviderHUD *();
	Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & Pick(Scaleform::Render::FontProviderHUD *);
	Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & Pick(Scaleform::Pickable<Scaleform::Render::FontProviderHUD>);
	Scaleform::Ptr<Scaleform::Render::FontProviderHUD> & Pick(Scaleform::Ptr<Scaleform::Render::FontProviderHUD> &);
};
class Scaleform::Array<char,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<char,Scaleform::AllocatorGH<char,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef char ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<char,2,Scaleform::ArrayDefaultPolicy> &);
	Array<char,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<char,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<char,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<char,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<char,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<char,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Render::FontProviderHUD :
	Scaleform::Render::FontProvider
{
public:
	FontProviderHUD(const Scaleform::Render::FontProviderHUD &);
	FontProviderHUD();
	virtual ~FontProviderHUD();
	virtual Scaleform::Render::Font * CreateFontW(const char *, unsigned long);
	virtual void LoadFontNames(Scaleform::StringHash<Scaleform::String,Scaleform::AllocatorGH<Scaleform::String,2> > &);
	Scaleform::Render::FontProviderHUD & operator=(const Scaleform::Render::FontProviderHUD &);
};