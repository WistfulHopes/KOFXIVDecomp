#pragma once

class Scaleform::GFx::FontGlyphPacker :
	Scaleform::RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2>
{
	struct GlyphInfo;
	struct GlyphGeometryKey;
private:
	FontGlyphPacker(const Scaleform::GFx::FontGlyphPacker &);
public:
	FontGlyphPacker(Scaleform::GFx::FontPackParams *, Scaleform::GFx::ImageCreator *, Scaleform::Log *, Scaleform::GFx::ResourceId *, Scaleform::MemoryHeap *, bool);
	virtual ~FontGlyphPacker();
	void GenerateFontBitmaps(const Scaleform::Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy> &);
private:
	const Scaleform::GFx::FontGlyphPacker & operator=(const Scaleform::GFx::FontGlyphPacker &);
	void generateGlyphInfo(Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *, Scaleform::GFx::FontResource *);
	unsigned long packGlyphRects(Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *);
	unsigned long packGlyphRects(Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *, unsigned long, unsigned long, unsigned long);
	void rasterizeGlyph(Scaleform::Render::RawImage *, Scaleform::GFx::FontGlyphPacker::GlyphInfo *);
	void generateTextures(Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> *, unsigned long);
	class GlyphGeometryHashType;
	Scaleform::GFx::FontPackParams * pFontPackParams; // 0x10
	Scaleform::GFx::FontPackParams::TextureConfig PackTextureConfig; // 0x18
	Scaleform::GFx::ResourceId * pTextureIdGen; // 0x28
	Scaleform::Ptr<Scaleform::GFx::ImageCreator> pImageCreator; // 0x30
	Scaleform::Ptr<Scaleform::Log> pLog; // 0x38
	Scaleform::MemoryHeap * pFontHeap; // 0x40
	Scaleform::Render::RectPacker Packer; // 0x48
	Scaleform::Render::Rasterizer Ras; // 0x128
	Scaleform::HashLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > GlyphGeometryHash; // 0x3F8
	bool ThreadedLoading; // 0x400
};
class Scaleform::RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountNTSImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2>(Scaleform::RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2> &);
	RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2>(const Scaleform::RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2> &);
	RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2>();
	virtual ~RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2>();
	Scaleform::RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2> & operator=(Scaleform::RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2> &);
	Scaleform::RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2> & operator=(const Scaleform::RefCountBaseNTS<Scaleform::GFx::FontGlyphPacker,2> &);
};
struct Scaleform::GFx::FontGlyphPacker::GlyphInfo
{
	Scaleform::GFx::FontResource * pFont; // 0x0
	unsigned long GlyphIndex; // 0x8
	unsigned long GlyphReuse; // 0xC
	unsigned long TextureIdx; // 0x10
	Scaleform::Render::Rect<float> Bounds; // 0x20
	Scaleform::Render::Point<float> Origin; // 0x30
	GlyphInfo(Scaleform::GFx::FontGlyphPacker::GlyphInfo &);
	GlyphInfo(const Scaleform::GFx::FontGlyphPacker::GlyphInfo &);
	GlyphInfo();
	Scaleform::GFx::FontGlyphPacker::GlyphInfo & operator=(Scaleform::GFx::FontGlyphPacker::GlyphInfo &);
	Scaleform::GFx::FontGlyphPacker::GlyphInfo & operator=(const Scaleform::GFx::FontGlyphPacker::GlyphInfo &);
};
struct Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey
{
	const Scaleform::GFx::FontResource * pFont; // 0x0
	const Scaleform::Render::ShapeDataInterface * pShape; // 0x8
	unsigned long Hash; // 0x10
	GlyphGeometryKey(const Scaleform::GFx::FontResource *, const Scaleform::Render::ShapeDataInterface *, unsigned long);
	GlyphGeometryKey();
	unsigned long long operator()(const Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey &);
	bool operator==(const Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey &);
};
class Scaleform::Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::FontResource *,Scaleform::AllocatorGH<Scaleform::GFx::FontResource *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::GFx::FontResource ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::FontResource *,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::GFx::FontGlyphPacker::GlyphInfo,Scaleform::AllocatorGH<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2>,Scaleform::ArrayDefaultPolicy> >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::GFx::FontGlyphPacker::GlyphInfo,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::HashLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > :
	Scaleform::Hash<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > >
{
	class SelfType;
	class BaseType;
public:
	HashLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,(const Scaleform::HashLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > &);
	HashLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,(long);
	HashLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,();
	~HashLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>();
	void operator=(const Scaleform::HashLH<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,2,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>,Scaleform::HashNode<Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey,unsigned int,Scaleform::GFx::FontGlyphPacker::GlyphGeometryKey>::NodeHashF> > &);
};