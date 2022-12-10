#pragma once

class Scaleform::GFx::TextureGlyphData :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261>
{
	struct TextureConfig;
	class ImageResourceHash;
private:
	Scaleform::GFx::FontPackParams::TextureConfig PackTextureConfig; // 0x10
	Scaleform::ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy> TextureGlyphs; // 0x20
	Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,261,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > GlyphsTextures; // 0x38
	bool FileCreation; // 0x40
public:
	TextureGlyphData(const Scaleform::GFx::TextureGlyphData &);
	TextureGlyphData(unsigned long, bool);
	void GetTextureConfig(Scaleform::GFx::FontPackParams::TextureConfig *);
	void SetTextureConfig(const Scaleform::GFx::FontPackParams::TextureConfig &);
	float GetTextureGlyphScale();
	bool IsLoadedFromFile();
	unsigned long GetTextureGlyphCount();
	const Scaleform::Render::TextureGlyph & GetTextureGlyph(unsigned long);
	void WipeTextureGlyphs();
	void AddTextureGlyph(unsigned long, const Scaleform::Render::TextureGlyph &);
	void AddTexture(Scaleform::GFx::ResourceId, const Scaleform::GFx::ResourceHandle &);
	void AddTexture(Scaleform::GFx::ResourceId, Scaleform::GFx::ImageResource *);
	unsigned long GetConfigTextureWidth();
	unsigned long GetConfigTextureHeight();
	long GetNominalSize();
	struct TextureGlyphVisitor;
	void VisitTextureGlyphs(Scaleform::GFx::TextureGlyphData::TextureGlyphVisitor *);
	struct TexturesVisitor;
	void VisitTextures(Scaleform::GFx::TextureGlyphData::TexturesVisitor *, Scaleform::GFx::ResourceBinding *);
	virtual ~TextureGlyphData();
	Scaleform::GFx::TextureGlyphData & operator=(const Scaleform::GFx::TextureGlyphData &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,261>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 261,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261>(Scaleform::RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261> &);
	RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261> &);
	RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::TextureGlyphData,261> &);
};
class Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> :
	Scaleform::GFx::ResourceHandle
{
public:
	ResourcePtr<Scaleform::GFx::ImageResource>(const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> &);
	ResourcePtr<Scaleform::GFx::ImageResource>(Scaleform::GFx::ImageResource *);
	ResourcePtr<Scaleform::GFx::ImageResource>();
	Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> & operator=(Scaleform::GFx::ImageResource *);
	Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> & operator=(const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> &);
	bool operator==(const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> &);
	bool operator!=(const Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource> &);
	void SetFromHandle(const Scaleform::GFx::ResourceHandle &);
	~ResourcePtr<Scaleform::GFx::ImageResource>();
};
class Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,261,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::ResourceId,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,261,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,(const Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,261,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > &);
	HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,261,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,(long);
	HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,261,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,();
	~HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,261,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>();
	void operator=(const Scaleform::HashLH<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>,261,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >,Scaleform::HashNode<Scaleform::GFx::ResourceId,Scaleform::GFx::ResourcePtr<Scaleform::GFx::ImageResource>,Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId> >::NodeHashF> > &);
};
class Scaleform::FixedSizeHash<Scaleform::GFx::ResourceId>
{
public:
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(const Scaleform::GFx::ResourceId &);
};
class Scaleform::ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::TextureGlyph,Scaleform::AllocatorLH<Scaleform::Render::TextureGlyph,261>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::TextureGlyph,261,Scaleform::ArrayDefaultPolicy>();
};
Scaleform::GFx::TextureGlyphData::TextureGlyphData(unsigned long glyphCount, bool isLoadedFromFile); // 0x1403E49F0
struct Scaleform::GFx::TextureGlyphData::TextureGlyphVisitor
{
	~TextureGlyphVisitor();
	void Visit(unsigned long, Scaleform::Render::TextureGlyph *);
	TextureGlyphVisitor(const Scaleform::GFx::TextureGlyphData::TextureGlyphVisitor &);
	TextureGlyphVisitor();
	Scaleform::GFx::TextureGlyphData::TextureGlyphVisitor & operator=(const Scaleform::GFx::TextureGlyphData::TextureGlyphVisitor &);
};
struct Scaleform::GFx::TextureGlyphData::TexturesVisitor
{
	~TexturesVisitor();
	void Visit(Scaleform::GFx::ResourceId, Scaleform::GFx::ImageResource *);
	TexturesVisitor(const Scaleform::GFx::TextureGlyphData::TexturesVisitor &);
	TexturesVisitor();
	Scaleform::GFx::TextureGlyphData::TexturesVisitor & operator=(const Scaleform::GFx::TextureGlyphData::TexturesVisitor &);
};
class Scaleform::GFx::FontData :
	Scaleform::Render::Font
{
public:
	FontData(const Scaleform::GFx::FontData &);
	FontData(const char *, unsigned long);
	FontData();
	virtual ~FontData();
	void Read(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &);
	void ReadFontInfo(Scaleform::GFx::Stream *, Scaleform::GFx::TagType);
	virtual long GetGlyphIndex(unsigned short);
	virtual float GetAdvance(unsigned long);
	virtual float GetKerningAdjustment(unsigned long, unsigned long);
	virtual long GetCharValue(unsigned long);
	virtual unsigned long GetGlyphShapeCount();
	virtual float GetGlyphWidth(unsigned long);
	virtual float GetGlyphHeight(unsigned long);
	virtual Scaleform::Render::Rect<float> & GetGlyphBounds(unsigned long, Scaleform::Render::Rect<float> *);
	virtual const char * GetName();
	virtual Scaleform::String GetCharRanges();
	virtual const Scaleform::Render::TextureGlyph * GetTextureGlyph(unsigned long);
	virtual float GetTextureGlyphHeight();
	virtual void * GetTextureGlyphData();
	virtual void SetTextureGlyphData(void *);
	virtual const Scaleform::Render::ShapeDataInterface * GetPermanentGlyphShape(unsigned long);
	virtual bool HasVectorOrRasterGlyphs();
private:
	void ReadCodeTable(Scaleform::GFx::Stream *);
	char * Name; // 0x38
	Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> pTGData; // 0x40
	Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261,Scaleform::ArrayDefaultPolicy> Glyphs; // 0x48
	class CodeTableType;
	Scaleform::HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> > CodeTable; // 0x60
	struct AdvanceEntry;
	Scaleform::ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy> AdvanceTable; // 0x68
	struct KerningPair;
	Scaleform::HashLH<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>,261,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> > KerningPairs; // 0x80
public:
	Scaleform::GFx::FontData & operator=(const Scaleform::GFx::FontData &);
};
unsigned long Scaleform::GFx::FontData::GetGlyphShapeCount(); // 0x1406C2200
const char * Scaleform::GFx::FontData::GetName(); // 0x1406B4B40
void * Scaleform::GFx::FontData::GetTextureGlyphData(); // 0x1403D6F90
void Scaleform::GFx::FontData::SetTextureGlyphData(void * pvdata); // 0x1403DACD0
bool Scaleform::GFx::FontData::HasVectorOrRasterGlyphs(); // 0x1403D6FE0
class Scaleform::Ptr<Scaleform::GFx::TextureGlyphData>
{
protected:
	Scaleform::GFx::TextureGlyphData * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::TextureGlyphData>(const Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> &);
	Ptr<Scaleform::GFx::TextureGlyphData>(Scaleform::GFx::TextureGlyphData *);
	Ptr<Scaleform::GFx::TextureGlyphData>(Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::TextureGlyphData>(Scaleform::Pickable<Scaleform::GFx::TextureGlyphData>);
	Ptr<Scaleform::GFx::TextureGlyphData>(Scaleform::GFx::TextureGlyphData &);
	Ptr<Scaleform::GFx::TextureGlyphData>();
	~Ptr<Scaleform::GFx::TextureGlyphData>();
	bool operator==(Scaleform::GFx::TextureGlyphData *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> &);
	bool operator!=(Scaleform::GFx::TextureGlyphData *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> &);
	Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & operator=(Scaleform::Pickable<Scaleform::GFx::TextureGlyphData>);
	const Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & operator=(Scaleform::GFx::TextureGlyphData &);
	const Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & operator=(Scaleform::GFx::TextureGlyphData *);
	const Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & operator=(const Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> &);
	Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & SetPtr(Scaleform::Pickable<Scaleform::GFx::TextureGlyphData>);
	Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & SetPtr(Scaleform::GFx::TextureGlyphData &);
	Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & SetPtr(Scaleform::GFx::TextureGlyphData *);
	Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::TextureGlyphData * & GetRawRef();
	Scaleform::GFx::TextureGlyphData * GetPtr();
	Scaleform::GFx::TextureGlyphData & operator*();
	Scaleform::GFx::TextureGlyphData * operator->();
	Scaleform::GFx::TextureGlyphData * operator class Scaleform::GFx::TextureGlyphData *();
	Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & Pick(Scaleform::GFx::TextureGlyphData *);
	Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & Pick(Scaleform::Pickable<Scaleform::GFx::TextureGlyphData>);
	Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> & Pick(Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> &);
};
class Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>,261,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::GFx::ShapeDataBase>
{
protected:
	Scaleform::GFx::ShapeDataBase * pObject; // 0x0
public:
	Ptr<Scaleform::GFx::ShapeDataBase>(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	Ptr<Scaleform::GFx::ShapeDataBase>(Scaleform::GFx::ShapeDataBase *);
	Ptr<Scaleform::GFx::ShapeDataBase>(Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &, Scaleform::PickType);
	Ptr<Scaleform::GFx::ShapeDataBase>(Scaleform::Pickable<Scaleform::GFx::ShapeDataBase>);
	Ptr<Scaleform::GFx::ShapeDataBase>(Scaleform::GFx::ShapeDataBase &);
	Ptr<Scaleform::GFx::ShapeDataBase>();
	~Ptr<Scaleform::GFx::ShapeDataBase>();
	bool operator==(Scaleform::GFx::ShapeDataBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	bool operator!=(Scaleform::GFx::ShapeDataBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & operator=(Scaleform::Pickable<Scaleform::GFx::ShapeDataBase>);
	const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & operator=(Scaleform::GFx::ShapeDataBase &);
	const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & operator=(Scaleform::GFx::ShapeDataBase *);
	const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & operator=(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & SetPtr(Scaleform::Pickable<Scaleform::GFx::ShapeDataBase>);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & SetPtr(Scaleform::GFx::ShapeDataBase &);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & SetPtr(Scaleform::GFx::ShapeDataBase *);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & SetPtr(const Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::GFx::ShapeDataBase * & GetRawRef();
	Scaleform::GFx::ShapeDataBase * GetPtr();
	Scaleform::GFx::ShapeDataBase & operator*();
	Scaleform::GFx::ShapeDataBase * operator->();
	Scaleform::GFx::ShapeDataBase * operator class Scaleform::GFx::ShapeDataBase *();
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & Pick(Scaleform::GFx::ShapeDataBase *);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & Pick(Scaleform::Pickable<Scaleform::GFx::ShapeDataBase>);
	Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> & Pick(Scaleform::Ptr<Scaleform::GFx::ShapeDataBase> &);
};
class Scaleform::HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> > :
	Scaleform::HashUncachedLH<unsigned short,unsigned short,Scaleform::IdentityHash<unsigned short>,261>
{
	class SelfType;
	class BaseType;
public:
	HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> >(const Scaleform::HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> > &);
	HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> >(long);
	HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> >();
	~HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> >();
	void operator=(const Scaleform::HashIdentityLH<unsigned short,unsigned short,261,Scaleform::IdentityHash<unsigned short> > &);
};
struct Scaleform::GFx::FontData::AdvanceEntry
{
	float Advance; // 0x0
	short Left; // 0x4
	short Top; // 0x6
	unsigned short Width; // 0x8
	unsigned short Height; // 0xA
};
class Scaleform::ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::FontData::AdvanceEntry,Scaleform::AllocatorLH<Scaleform::GFx::FontData::AdvanceEntry,261>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::GFx::FontData::AdvanceEntry,261,Scaleform::ArrayDefaultPolicy>();
};
struct Scaleform::GFx::FontData::KerningPair
{
	unsigned short Char0; // 0x0
	unsigned short Char1; // 0x2
	bool operator==(const Scaleform::GFx::FontData::KerningPair &);
};
class Scaleform::HashLH<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>,261,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontData::KerningPair,261>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>,261,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scalefo(const Scaleform::HashLH<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>,261,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> > &);
	HashLH<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>,261,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scalefo(long);
	HashLH<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>,261,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scalefo();
	~HashLH<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>,261,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scalef();
	void operator=(const Scaleform::HashLH<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>,261,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >,Scaleform::HashNode<Scaleform::GFx::FontData::KerningPair,float,Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair> >::NodeHashF> > &);
};
class Scaleform::FixedSizeHash<Scaleform::GFx::FontData::KerningPair>
{
public:
	static unsigned long long SDBM_Hash(const void *, unsigned long long, unsigned long long);
	unsigned long long operator()(const Scaleform::GFx::FontData::KerningPair &);
};
class Scaleform::GFx::FontDataCompactedSwf :
	Scaleform::Render::Font
{
	class ContainerType;
	class CompactedFontType;
public:
	FontDataCompactedSwf();
	virtual ~FontDataCompactedSwf();
	void Read(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &);
	virtual const char * GetName();
	virtual long GetGlyphIndex(unsigned short);
	virtual float GetAdvance(unsigned long);
	virtual float GetKerningAdjustment(unsigned long, unsigned long);
	virtual float GetGlyphWidth(unsigned long);
	virtual float GetGlyphHeight(unsigned long);
	virtual Scaleform::Render::Rect<float> & GetGlyphBounds(unsigned long, Scaleform::Render::Rect<float> *);
	virtual const Scaleform::Render::ShapeDataInterface * GetPermanentGlyphShape(unsigned long);
	virtual bool GetTemporaryGlyphShape(unsigned long, unsigned long, Scaleform::Render::GlyphShape *);
	virtual long GetCharValue(unsigned long);
	virtual unsigned long GetGlyphShapeCount();
	virtual Scaleform::String GetCharRanges();
	virtual bool HasVectorOrRasterGlyphs();
	const Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> & GetContainer();
	const Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > & GetCompactedFont();
private:
	Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> Container; // 0x38
	Scaleform::GFx::CompactedFont<Scaleform::ArrayPagedLH_POD<unsigned char,12,256,261> > CompactedFontValue; // 0x60
	unsigned long NumGlyphs; // 0xB8
};
class Scaleform::GFx::FontDataCompactedGfx :
	Scaleform::Render::Font
{
	class ContainerType;
	class CompactedFontType;
public:
	FontDataCompactedGfx();
	virtual ~FontDataCompactedGfx();
	void Read(Scaleform::GFx::LoadProcess *, const Scaleform::GFx::TagInfo &);
	virtual const char * GetName();
	virtual long GetGlyphIndex(unsigned short);
	virtual float GetAdvance(unsigned long);
	virtual float GetKerningAdjustment(unsigned long, unsigned long);
	virtual float GetGlyphWidth(unsigned long);
	virtual float GetGlyphHeight(unsigned long);
	virtual Scaleform::Render::Rect<float> & GetGlyphBounds(unsigned long, Scaleform::Render::Rect<float> *);
	virtual const Scaleform::Render::ShapeDataInterface * GetPermanentGlyphShape(unsigned long);
	virtual bool GetTemporaryGlyphShape(unsigned long, unsigned long, Scaleform::Render::GlyphShape *);
	virtual long GetCharValue(unsigned long);
	virtual unsigned long GetGlyphShapeCount();
	virtual Scaleform::String GetCharRanges();
	virtual bool HasVectorOrRasterGlyphs();
	const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> & GetContainer();
	const Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > & GetCompactedFont();
private:
	Scaleform::ArrayUnsafeLH_POD<unsigned char,261> Container; // 0x38
	Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > CompactedFontValue; // 0x50
};
class Scaleform::ArrayUnsafeLH_POD<unsigned char,261> :
	Scaleform::ArrayUnsafeBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,261> >
{
	typedef unsigned char ValueType;
	struct AllocatorType;
	class BaseType;
	class SelfType;
public:
	ArrayUnsafeLH_POD<unsigned char,261>(const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> &);
	ArrayUnsafeLH_POD<unsigned char,261>(unsigned long long);
	ArrayUnsafeLH_POD<unsigned char,261>();
	const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> & operator=(const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> &);
	~ArrayUnsafeLH_POD<unsigned char,261>();
};
class Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >,261>
{
	class PathDataDecoderType;
	class GlyphPathIteratorType;
private:
	CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >(const Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > &);
public:
	CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >(const Scaleform::ArrayUnsafeLH_POD<unsigned char,261> &);
	unsigned long AcquireFont(unsigned long);
	unsigned long GetNumGlyphs();
	long GetGlyphIndex(unsigned short);
	unsigned long GetGlyphCode(unsigned long);
	unsigned long GetAdvanceInt(unsigned long);
	float GetAdvance(unsigned long);
	float GetKerningAdjustment(unsigned long, unsigned long);
	float GetGlyphWidth(unsigned long);
	float GetGlyphHeight(unsigned long);
	Scaleform::Render::Rect<float> & GetGlyphBounds(unsigned long, Scaleform::Render::Rect<float> *);
	void GetGlyphShape(unsigned long, Scaleform::GFx::GlyphPathIterator<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > *);
	float GetAscent();
	float GetDescent();
	float GetLeading();
	const char * GetName();
	unsigned long GetFontFlags();
	unsigned long GetNominalSize();
	bool MatchFont(const char *, unsigned long);
private:
	const Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > & operator=(const Scaleform::GFx::CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > &);
	unsigned long getGlyphPos(unsigned long);
	const Scaleform::GFx::PathDataDecoder<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> > Decoder; // 0x10
	unsigned long NumGlyphs; // 0x18
	unsigned long GlyphInfoTablePos; // 0x1C
	unsigned long KerningTableSize; // 0x20
	unsigned long KerningTablePos; // 0x24
	Scaleform::ArrayUnsafePOD<char,2> Name; // 0x28
	unsigned long Flags; // 0x40
	unsigned long NominalSize; // 0x44
	float Ascent; // 0x48
	float Descent; // 0x4C
	float Leading; // 0x50
public:
	virtual ~CompactedFont<Scaleform::ArrayUnsafeLH_POD<unsigned char,261> >();
};
Scaleform::GFx::ResourceKey::KeyType Scaleform::GFx::GFxSystemFontResourceKeyInterface::GetKeyType(void * hdata); // 0x1400470F0
class Scaleform::GFx::FontDataBound :
	Scaleform::Render::Font
{
public:
	FontDataBound(Scaleform::GFx::FontDataBound &);
	FontDataBound(const Scaleform::GFx::FontDataBound &);
	FontDataBound(Scaleform::Render::Font *, Scaleform::GFx::ResourceBinding *);
	virtual const char * GetName();
	virtual long GetGlyphIndex(unsigned short);
	virtual float GetAdvance(unsigned long);
	virtual float GetKerningAdjustment(unsigned long, unsigned long);
	virtual float GetGlyphWidth(unsigned long);
	virtual float GetGlyphHeight(unsigned long);
	virtual Scaleform::Render::Rect<float> & GetGlyphBounds(unsigned long, Scaleform::Render::Rect<float> *);
	virtual bool IsHintedVectorGlyph(unsigned long, unsigned long);
	virtual bool IsHintedRasterGlyph(unsigned long, unsigned long);
	virtual const Scaleform::Render::TextureGlyph * GetTextureGlyph(unsigned long);
	virtual void * GetTextureGlyphData();
	virtual float GetTextureGlyphHeight();
	virtual const Scaleform::Render::ShapeDataInterface * GetPermanentGlyphShape(unsigned long);
	virtual bool GetTemporaryGlyphShape(unsigned long, unsigned long, Scaleform::Render::GlyphShape *);
	virtual bool GetGlyphRaster(unsigned long, unsigned long, Scaleform::Render::GlyphRaster *);
	virtual long GetCharValue(unsigned long);
	virtual unsigned long GetGlyphShapeCount();
	virtual bool HasVectorOrRasterGlyphs();
	virtual Scaleform::String GetCharRanges();
	virtual float GetNominalGlyphWidth();
	virtual float GetNominalGlyphHeight();
protected:
	Scaleform::Ptr<Scaleform::Render::Font> pFont; // 0x38
	Scaleform::Ptr<Scaleform::GFx::TextureGlyphData> pTGData; // 0x40
public:
	virtual ~FontDataBound();
	Scaleform::GFx::FontDataBound & operator=(Scaleform::GFx::FontDataBound &);
	Scaleform::GFx::FontDataBound & operator=(const Scaleform::GFx::FontDataBound &);
};
const char * Scaleform::GFx::FontDataBound::GetName(); // 0x1403D6E30
long Scaleform::GFx::FontDataBound::GetGlyphIndex(unsigned short code); // 0x1403D6640
float Scaleform::GFx::FontDataBound::GetAdvance(unsigned long glyphIndex); // 0x1403D58E0
float Scaleform::GFx::FontDataBound::GetKerningAdjustment(unsigned long lastCode, unsigned long thisCode); // 0x1403D6D80
float Scaleform::GFx::FontDataBound::GetGlyphWidth(unsigned long glyphIndex); // 0x1403D6990
float Scaleform::GFx::FontDataBound::GetGlyphHeight(unsigned long glyphIndex); // 0x1403D63C0
Scaleform::Render::Rect<float> & Scaleform::GFx::FontDataBound::GetGlyphBounds(unsigned long glyphIndex, Scaleform::Render::Rect<float> * prect); // 0x1403D61D0
bool Scaleform::GFx::FontDataBound::IsHintedVectorGlyph(unsigned long glyphIndex, unsigned long hintedSize); // 0x1403D7040
bool Scaleform::GFx::FontDataBound::IsHintedRasterGlyph(unsigned long glyphIndex, unsigned long hintedSize); // 0x1403D7030
float Scaleform::GFx::FontDataBound::GetTextureGlyphHeight(); // 0x1403D6FD0
const Scaleform::Render::ShapeDataInterface * Scaleform::GFx::FontDataBound::GetPermanentGlyphShape(unsigned long glyphIndex); // 0x1403D6E90
bool Scaleform::GFx::FontDataBound::GetTemporaryGlyphShape(unsigned long glyphIndex, unsigned long hintedSize, Scaleform::Render::GlyphShape * shape); // 0x1403D6EB0
bool Scaleform::GFx::FontDataBound::GetGlyphRaster(unsigned long glyphIndex, unsigned long hintedSize, Scaleform::Render::GlyphRaster * raster); // 0x1403D6670
long Scaleform::GFx::FontDataBound::GetCharValue(unsigned long glyphIndex); // 0x1403D5D20
unsigned long Scaleform::GFx::FontDataBound::GetGlyphShapeCount(); // 0x1403D6730
bool Scaleform::GFx::FontDataBound::HasVectorOrRasterGlyphs(); // 0x1403D7000
Scaleform::String Scaleform::GFx::FontDataBound::GetCharRanges(); // 0x1403D5C00
float Scaleform::GFx::FontDataBound::GetNominalGlyphWidth(); // 0x1403D6E60
float Scaleform::GFx::FontDataBound::GetNominalGlyphHeight(); // 0x1403D6E50
class Scaleform::Ptr<Scaleform::Render::Font>
{
protected:
	Scaleform::Render::Font * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Font>(const Scaleform::Ptr<Scaleform::Render::Font> &);
	Ptr<Scaleform::Render::Font>(Scaleform::Render::Font *);
	Ptr<Scaleform::Render::Font>(Scaleform::Ptr<Scaleform::Render::Font> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Font>(Scaleform::Pickable<Scaleform::Render::Font>);
	Ptr<Scaleform::Render::Font>(Scaleform::Render::Font &);
	Ptr<Scaleform::Render::Font>();
	~Ptr<Scaleform::Render::Font>();
	bool operator==(Scaleform::Render::Font *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Font> &);
	bool operator!=(Scaleform::Render::Font *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Font> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Font> &);
	Scaleform::Ptr<Scaleform::Render::Font> & operator=(Scaleform::Pickable<Scaleform::Render::Font>);
	const Scaleform::Ptr<Scaleform::Render::Font> & operator=(Scaleform::Render::Font &);
	const Scaleform::Ptr<Scaleform::Render::Font> & operator=(Scaleform::Render::Font *);
	const Scaleform::Ptr<Scaleform::Render::Font> & operator=(const Scaleform::Ptr<Scaleform::Render::Font> &);
	Scaleform::Ptr<Scaleform::Render::Font> & SetPtr(Scaleform::Pickable<Scaleform::Render::Font>);
	Scaleform::Ptr<Scaleform::Render::Font> & SetPtr(Scaleform::Render::Font &);
	Scaleform::Ptr<Scaleform::Render::Font> & SetPtr(Scaleform::Render::Font *);
	Scaleform::Ptr<Scaleform::Render::Font> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Font> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Font * & GetRawRef();
	Scaleform::Render::Font * GetPtr();
	Scaleform::Render::Font & operator*();
	Scaleform::Render::Font * operator->();
	Scaleform::Render::Font * operator class Scaleform::Render::Font *();
	Scaleform::Ptr<Scaleform::Render::Font> & Pick(Scaleform::Render::Font *);
	Scaleform::Ptr<Scaleform::Render::Font> & Pick(Scaleform::Pickable<Scaleform::Render::Font>);
	Scaleform::Ptr<Scaleform::Render::Font> & Pick(Scaleform::Ptr<Scaleform::Render::Font> &);
};
class Scaleform::GFx::FontResource :
	Scaleform::GFx::Resource
{
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
public:
	FontResource(const Scaleform::GFx::FontResource &);
	FontResource(Scaleform::Render::Font *, const Scaleform::GFx::ResourceKey &);
	FontResource(Scaleform::Render::Font *, Scaleform::GFx::ResourceBinding *);
	virtual ~FontResource();
	Scaleform::Render::Font * GetFont();
	Scaleform::GFx::ResourceBinding * GetBinding();
	bool MatchFont(const char *, unsigned long);
	bool MatchFontFlags(unsigned long);
	const char * GetName();
	unsigned long GetGlyphShapeCount();
	long GetGlyphIndex(unsigned short);
	bool IsHintedVectorGlyph(unsigned long, unsigned long);
	bool IsHintedRasterGlyph(unsigned long, unsigned long);
	float GetAdvance(unsigned long);
	float GetKerningAdjustment(unsigned long, unsigned long);
	float GetGlyphWidth(unsigned long);
	float GetGlyphHeight(unsigned long);
	Scaleform::Render::Rect<float> & GetGlyphBounds(unsigned long, Scaleform::Render::Rect<float> *);
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
	bool AreUnicodeChars();
	Scaleform::Render::Font::FontFlags GetCodePage();
	bool GlyphShapesStripped();
	bool HasLayout();
	bool AreWideCodes();
	bool IsPixelAligned();
	unsigned short GetLowerCaseTop(Scaleform::Log *);
	unsigned short GetUpperCaseTop(Scaleform::Log *);
	virtual unsigned long GetResourceTypeCode();
	virtual Scaleform::GFx::ResourceKey GetKey();
	static Scaleform::GFx::FontResource * CreateFontResource(const char *, unsigned long, Scaleform::GFx::FontProvider *, Scaleform::GFx::ResourceWeakLib *);
	static Scaleform::GFx::ResourceKey CreateFontResourceKey(const char *, unsigned long, Scaleform::GFx::FontProvider *);
	void ResolveTextureGlyphs();
private:
	unsigned short calcTopBound(unsigned short);
	void calcLowerUpperTop(Scaleform::Log *);
	Scaleform::Ptr<Scaleform::Render::Font> pFont; // 0x18
	Scaleform::GFx::ResourceBinding * pBinding; // 0x20
	Scaleform::GFx::ResourceKey FontKey; // 0x28
	short LowerCaseTop; // 0x38
	short UpperCaseTop; // 0x3A
public:
	Scaleform::GFx::FontResource & operator=(const Scaleform::GFx::FontResource &);
};
unsigned long Scaleform::GFx::FontResource::GetResourceTypeCode(); // 0x1403D6EA0
Scaleform::GFx::ResourceKey Scaleform::GFx::FontResource::GetKey(); // 0x1403D6E10