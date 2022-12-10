#pragma once

class Scaleform::Render::Filter :
	Scaleform::RefCountBase<Scaleform::Render::Filter,2>
{
public:
	Filter(Scaleform::Render::Filter &);
	Filter(const Scaleform::Render::Filter &);
	Filter(Scaleform::Render::FilterType);
	Scaleform::Render::FilterType GetFilterType();
	bool IsFrozen();
	void Freeze();
	Scaleform::Render::Filter * Clone(Scaleform::MemoryHeap *);
	bool IsContributing();
	bool CanCacheAcrossTransform(bool, bool, bool);
protected:
	Scaleform::Render::FilterType Type; // 0x10
	bool Frozen; // 0x14
public:
	virtual ~Filter();
	Scaleform::Render::Filter & operator=(Scaleform::Render::Filter &);
	Scaleform::Render::Filter & operator=(const Scaleform::Render::Filter &);
};
class Scaleform::RefCountBase<Scaleform::Render::Filter,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::Filter,2>(Scaleform::RefCountBase<Scaleform::Render::Filter,2> &);
	RefCountBase<Scaleform::Render::Filter,2>(const Scaleform::RefCountBase<Scaleform::Render::Filter,2> &);
	RefCountBase<Scaleform::Render::Filter,2>();
	virtual ~RefCountBase<Scaleform::Render::Filter,2>();
	Scaleform::RefCountBase<Scaleform::Render::Filter,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::Filter,2> &);
	Scaleform::RefCountBase<Scaleform::Render::Filter,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::Filter,2> &);
};
class Scaleform::Render::BlurFilterImpl :
	Scaleform::Render::Filter
{
public:
	BlurFilterImpl(Scaleform::Render::BlurFilterImpl &);
	BlurFilterImpl(const Scaleform::Render::BlurFilterImpl &);
	BlurFilterImpl(Scaleform::Render::FilterType, const Scaleform::Render::BlurFilterParams &);
	BlurFilterImpl(Scaleform::Render::FilterType);
	Scaleform::Render::BlurFilterParams & GetParams();
	const Scaleform::Render::BlurFilterParams & GetParams();
	void SetParams(const Scaleform::Render::BlurFilterParams &);
	void SetFlags(unsigned long);
	unsigned long GetFlags();
	float GetDistance();
	float GetAngle();
	Scaleform::Render::Point<float> GetOffset();
	void SetAngleDistance(float, float);
	virtual bool CanCacheAcrossTransform(bool, bool, bool);
protected:
	Scaleform::Render::BlurFilterParams Params; // 0x18
	float Distance; // 0x48
	float Angle; // 0x4C
public:
	virtual ~BlurFilterImpl();
	Scaleform::Render::BlurFilterImpl & operator=(Scaleform::Render::BlurFilterImpl &);
	Scaleform::Render::BlurFilterImpl & operator=(const Scaleform::Render::BlurFilterImpl &);
};
class Scaleform::Render::BlurFilter :
	Scaleform::Render::BlurFilterImpl
{
public:
	BlurFilter(const Scaleform::Render::BlurFilter &);
	BlurFilter(const Scaleform::Render::BlurFilterParams &);
	BlurFilter(float, float, unsigned long);
	Scaleform::Render::BlurFilter & operator=(const Scaleform::Render::BlurFilter &);
	virtual Scaleform::Render::Filter * Clone(Scaleform::MemoryHeap *);
	virtual bool IsContributing();
	virtual ~BlurFilter();
	void __dflt_ctor_closure();
};
class Scaleform::Render::ShadowFilter :
	Scaleform::Render::BlurFilterImpl
{
public:
	ShadowFilter(const Scaleform::Render::ShadowFilter &);
	ShadowFilter(const Scaleform::Render::BlurFilterParams &, float, float);
	ShadowFilter(float, float, float, float, unsigned long);
	Scaleform::Render::ShadowFilter & operator=(const Scaleform::Render::ShadowFilter &);
	virtual Scaleform::Render::Filter * Clone(Scaleform::MemoryHeap *);
	virtual bool IsContributing();
	virtual bool CanCacheAcrossTransform(bool, bool, bool);
	virtual ~ShadowFilter();
	void __dflt_ctor_closure();
};
Scaleform::Render::ShadowFilter::ShadowFilter(float angle, float dist, float blurx, float blury, unsigned long passes); // 0x1403F17D0
Scaleform::Render::ShadowFilter::ShadowFilter(const Scaleform::Render::BlurFilterParams & params, float angle, float dist); // 0x140393BA0
class Scaleform::Render::GlowFilter :
	Scaleform::Render::BlurFilterImpl
{
public:
	GlowFilter(const Scaleform::Render::GlowFilter &);
	GlowFilter(const Scaleform::Render::BlurFilterParams &);
	GlowFilter(float, float, unsigned long);
	Scaleform::Render::GlowFilter & operator=(const Scaleform::Render::GlowFilter &);
	virtual Scaleform::Render::Filter * Clone(Scaleform::MemoryHeap *);
	virtual bool IsContributing();
	virtual ~GlowFilter();
	void __dflt_ctor_closure();
};
Scaleform::Render::GlowFilter::GlowFilter(float blurx, float blury, unsigned long passes); // 0x1403F1720
class Scaleform::Render::BevelFilter :
	Scaleform::Render::BlurFilterImpl
{
public:
	BevelFilter(const Scaleform::Render::BevelFilter &);
	BevelFilter(const Scaleform::Render::BlurFilterParams &, float, float);
	BevelFilter(float, float, unsigned long);
	Scaleform::Render::BevelFilter & operator=(const Scaleform::Render::BevelFilter &);
	virtual Scaleform::Render::Filter * Clone(Scaleform::MemoryHeap *);
	virtual bool IsContributing();
	virtual bool CanCacheAcrossTransform(bool, bool, bool);
	virtual ~BevelFilter();
	void __dflt_ctor_closure();
};
Scaleform::Render::BevelFilter::BevelFilter(float blurx, float blury, unsigned long passes); // 0x1404DB870
Scaleform::Render::BevelFilter::BevelFilter(const Scaleform::Render::BlurFilterParams & params, float angle, float dist); // 0x1403936E0
class Scaleform::Render::GradientFilter :
	Scaleform::Render::BlurFilterImpl
{
public:
	GradientFilter(Scaleform::Render::GradientFilter &);
	GradientFilter(const Scaleform::Render::GradientFilter &);
	GradientFilter(Scaleform::Render::FilterType, const Scaleform::Render::BlurFilterParams &, float, float);
	GradientFilter(Scaleform::Render::FilterType, Scaleform::Render::GradientData *, float, float, float, float, unsigned long);
	virtual Scaleform::Render::Filter * Clone(Scaleform::MemoryHeap *);
	virtual bool IsContributing();
	virtual bool CanCacheAcrossTransform(bool, bool, bool);
	Scaleform::Render::Image * GetGradientImage();
	void GenerateGradientImage(Scaleform::Render::PrimitiveFillManager &);
protected:
	Scaleform::Ptr<Scaleform::Render::Image> GradientImage; // 0x50
public:
	virtual ~GradientFilter();
	Scaleform::Render::GradientFilter & operator=(Scaleform::Render::GradientFilter &);
	Scaleform::Render::GradientFilter & operator=(const Scaleform::Render::GradientFilter &);
};
class Scaleform::Render::ColorMatrixFilter :
	Scaleform::Render::Filter
{
public:
	ColorMatrixFilter(const Scaleform::Render::ColorMatrixFilter &);
	ColorMatrixFilter();
	virtual ~ColorMatrixFilter();
	static const unsigned long ColorMatrixEntries; // 0xFFFFFFFFFFFFFFFF
	float & operator[](unsigned long);
	float operator[](unsigned long);
	virtual Scaleform::Render::Filter * Clone(Scaleform::MemoryHeap *);
	virtual bool IsContributing();
	virtual bool CanCacheAcrossTransform(bool, bool, bool);
protected:
	float MatrixData[20]; // 0x18
public:
	Scaleform::Render::ColorMatrixFilter & operator=(const Scaleform::Render::ColorMatrixFilter &);
};
class Scaleform::Render::CacheAsBitmapFilter :
	Scaleform::Render::Filter
{
public:
	CacheAsBitmapFilter(const Scaleform::Render::CacheAsBitmapFilter &);
	CacheAsBitmapFilter();
	virtual Scaleform::Render::Filter * Clone(Scaleform::MemoryHeap *);
	Scaleform::Render::CacheAsBitmapFilter & operator=(const Scaleform::Render::CacheAsBitmapFilter &);
	virtual bool IsContributing();
	virtual bool CanCacheAcrossTransform(bool, bool, bool);
	virtual ~CacheAsBitmapFilter();
};
bool Scaleform::Render::CacheAsBitmapFilter::IsContributing(); // 0x1400B8180
class Scaleform::Render::DisplacementMapFilter :
	Scaleform::Render::Filter
{
	enum DisplacementMode
	{
		DisplacementMode_Wrap = 0,
		DisplacementMode_Clamp = 1,
		DisplacementMode_Ignore = 2,
		DisplacementMode_Color = 3,
		DisplacementMode_Count = 4,
	};
public:
	DisplacementMapFilter(Scaleform::Render::DisplacementMapFilter &);
	DisplacementMapFilter(const Scaleform::Render::DisplacementMapFilter &);
	DisplacementMapFilter(Scaleform::Render::Image *, Scaleform::Render::Point<float>, Scaleform::Render::DrawableImage::ChannelBits, Scaleform::Render::DrawableImage::ChannelBits, Scaleform::Render::DisplacementMapFilter::DisplacementMode, float, float, Scaleform::Render::Color);
	virtual bool IsContributing();
	virtual bool CanCacheAcrossTransform(bool, bool, bool);
	virtual Scaleform::Render::Filter * Clone(Scaleform::MemoryHeap *);
	Scaleform::Ptr<Scaleform::Render::Image> DisplacementMap; // 0x18
	Scaleform::Render::Point<float> MapPoint; // 0x20
	Scaleform::Render::DrawableImage::ChannelBits ComponentX; // 0x28
	Scaleform::Render::DrawableImage::ChannelBits ComponentY; // 0x2C
	Scaleform::Render::DisplacementMapFilter::DisplacementMode Mode; // 0x30
	float ScaleX; // 0x34
	float ScaleY; // 0x38
	Scaleform::Render::Color ColorValue; // 0x3C
	virtual ~DisplacementMapFilter();
	Scaleform::Render::DisplacementMapFilter & operator=(Scaleform::Render::DisplacementMapFilter &);
	Scaleform::Render::DisplacementMapFilter & operator=(const Scaleform::Render::DisplacementMapFilter &);
	void __dflt_ctor_closure();
};
class Scaleform::Render::FilterSet :
	Scaleform::RefCountBase<Scaleform::Render::FilterSet,2>
{
public:
	FilterSet(const Scaleform::Render::FilterSet &);
	FilterSet(Scaleform::Render::Filter *);
	virtual ~FilterSet();
	bool IsFrozen();
	void Freeze();
	unsigned long GetFilterCount();
	const Scaleform::Render::Filter * GetFilter(unsigned long long);
	void SetFilter(unsigned long long, Scaleform::Render::Filter *);
	void AddFilter(Scaleform::Render::Filter *);
	void InsertFilterAt(unsigned long long, Scaleform::Render::Filter *);
	void RemoveFilterAt(unsigned long long);
	void RemoveFilter(Scaleform::Render::Filter *);
	const Scaleform::Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy> & GetFilters();
	bool GetCacheAsBitmap();
	void SetCacheAsBitmap(bool);
	Scaleform::Render::FilterSet * Clone(bool, Scaleform::MemoryHeap *);
	bool IsContributing();
	bool CanCacheAcrossTransform(bool, bool, bool);
protected:
	Scaleform::Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy> Filters; // 0x10
	bool Frozen; // 0x28
	bool CacheAsBitmap; // 0x29
	Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> pCacheAsBitmapFilter; // 0x30
public:
	Scaleform::Render::FilterSet & operator=(const Scaleform::Render::FilterSet &);
	void __dflt_ctor_closure();
};
class Scaleform::RefCountBase<Scaleform::Render::FilterSet,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::FilterSet,2>(Scaleform::RefCountBase<Scaleform::Render::FilterSet,2> &);
	RefCountBase<Scaleform::Render::FilterSet,2>(const Scaleform::RefCountBase<Scaleform::Render::FilterSet,2> &);
	RefCountBase<Scaleform::Render::FilterSet,2>();
	virtual ~RefCountBase<Scaleform::Render::FilterSet,2>();
	Scaleform::RefCountBase<Scaleform::Render::FilterSet,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::FilterSet,2> &);
	Scaleform::RefCountBase<Scaleform::Render::FilterSet,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::FilterSet,2> &);
};
class Scaleform::Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Ptr<Scaleform::Render::Filter>,Scaleform::AllocatorGH<Scaleform::Ptr<Scaleform::Render::Filter>,2>,Scaleform::ArrayDefaultPolicy> >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy> &);
	Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy>(long);
	Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy> &);
	~Array<Scaleform::Ptr<Scaleform::Render::Filter>,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::Render::Filter>
{
protected:
	Scaleform::Render::Filter * pObject; // 0x0
public:
	Ptr<Scaleform::Render::Filter>(const Scaleform::Ptr<Scaleform::Render::Filter> &);
	Ptr<Scaleform::Render::Filter>(Scaleform::Render::Filter *);
	Ptr<Scaleform::Render::Filter>(Scaleform::Ptr<Scaleform::Render::Filter> &, Scaleform::PickType);
	Ptr<Scaleform::Render::Filter>(Scaleform::Pickable<Scaleform::Render::Filter>);
	Ptr<Scaleform::Render::Filter>(Scaleform::Render::Filter &);
	Ptr<Scaleform::Render::Filter>();
	~Ptr<Scaleform::Render::Filter>();
	bool operator==(Scaleform::Render::Filter *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::Filter> &);
	bool operator!=(Scaleform::Render::Filter *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::Filter> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::Filter> &);
	Scaleform::Ptr<Scaleform::Render::Filter> & operator=(Scaleform::Pickable<Scaleform::Render::Filter>);
	const Scaleform::Ptr<Scaleform::Render::Filter> & operator=(Scaleform::Render::Filter &);
	const Scaleform::Ptr<Scaleform::Render::Filter> & operator=(Scaleform::Render::Filter *);
	const Scaleform::Ptr<Scaleform::Render::Filter> & operator=(const Scaleform::Ptr<Scaleform::Render::Filter> &);
	Scaleform::Ptr<Scaleform::Render::Filter> & SetPtr(Scaleform::Pickable<Scaleform::Render::Filter>);
	Scaleform::Ptr<Scaleform::Render::Filter> & SetPtr(Scaleform::Render::Filter &);
	Scaleform::Ptr<Scaleform::Render::Filter> & SetPtr(Scaleform::Render::Filter *);
	Scaleform::Ptr<Scaleform::Render::Filter> & SetPtr(const Scaleform::Ptr<Scaleform::Render::Filter> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::Filter * & GetRawRef();
	Scaleform::Render::Filter * GetPtr();
	Scaleform::Render::Filter & operator*();
	Scaleform::Render::Filter * operator->();
	Scaleform::Render::Filter * operator class Scaleform::Render::Filter *();
	Scaleform::Ptr<Scaleform::Render::Filter> & Pick(Scaleform::Render::Filter *);
	Scaleform::Ptr<Scaleform::Render::Filter> & Pick(Scaleform::Pickable<Scaleform::Render::Filter>);
	Scaleform::Ptr<Scaleform::Render::Filter> & Pick(Scaleform::Ptr<Scaleform::Render::Filter> &);
};
class Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter>
{
protected:
	Scaleform::Render::CacheAsBitmapFilter * pObject; // 0x0
public:
	Ptr<Scaleform::Render::CacheAsBitmapFilter>(const Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> &);
	Ptr<Scaleform::Render::CacheAsBitmapFilter>(Scaleform::Render::CacheAsBitmapFilter *);
	Ptr<Scaleform::Render::CacheAsBitmapFilter>(Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> &, Scaleform::PickType);
	Ptr<Scaleform::Render::CacheAsBitmapFilter>(Scaleform::Pickable<Scaleform::Render::CacheAsBitmapFilter>);
	Ptr<Scaleform::Render::CacheAsBitmapFilter>(Scaleform::Render::CacheAsBitmapFilter &);
	Ptr<Scaleform::Render::CacheAsBitmapFilter>();
	~Ptr<Scaleform::Render::CacheAsBitmapFilter>();
	bool operator==(Scaleform::Render::CacheAsBitmapFilter *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> &);
	bool operator!=(Scaleform::Render::CacheAsBitmapFilter *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> &);
	Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & operator=(Scaleform::Pickable<Scaleform::Render::CacheAsBitmapFilter>);
	const Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & operator=(Scaleform::Render::CacheAsBitmapFilter &);
	const Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & operator=(Scaleform::Render::CacheAsBitmapFilter *);
	const Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & operator=(const Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> &);
	Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & SetPtr(Scaleform::Pickable<Scaleform::Render::CacheAsBitmapFilter>);
	Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & SetPtr(Scaleform::Render::CacheAsBitmapFilter &);
	Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & SetPtr(Scaleform::Render::CacheAsBitmapFilter *);
	Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & SetPtr(const Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::CacheAsBitmapFilter * & GetRawRef();
	Scaleform::Render::CacheAsBitmapFilter * GetPtr();
	Scaleform::Render::CacheAsBitmapFilter & operator*();
	Scaleform::Render::CacheAsBitmapFilter * operator->();
	Scaleform::Render::CacheAsBitmapFilter * operator class Scaleform::Render::CacheAsBitmapFilter *();
	Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & Pick(Scaleform::Render::CacheAsBitmapFilter *);
	Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & Pick(Scaleform::Pickable<Scaleform::Render::CacheAsBitmapFilter>);
	Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> & Pick(Scaleform::Ptr<Scaleform::Render::CacheAsBitmapFilter> &);
};