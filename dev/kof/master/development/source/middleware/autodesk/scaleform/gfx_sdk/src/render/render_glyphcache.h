#pragma once

struct Scaleform::Render::RasterGlyphVertex
{
	float x; // 0x0
	float y; // 0x4
	unsigned long Clr; // 0x8
	float u; // 0xC
	float v; // 0x10
	RasterGlyphVertex(float, float, float, float, unsigned long);
	RasterGlyphVertex();
	void Set(float, float, float, float, unsigned long);
	static Scaleform::Render::VertexElement Elements[4]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};
class Scaleform::Render::GlyphTextureImage :
	Scaleform::Render::TextureImage
{
public:
	GlyphTextureImage(Scaleform::Render::GlyphTextureImage &);
	GlyphTextureImage(const Scaleform::Render::GlyphTextureImage &);
	GlyphTextureImage(Scaleform::Render::GlyphCache *, unsigned long, const Scaleform::Render::Size<unsigned long> &, unsigned long);
	static Scaleform::Render::GlyphTextureImage * Create(Scaleform::MemoryHeap *, Scaleform::Render::TextureManager *, Scaleform::Render::GlyphCache *, unsigned long, const Scaleform::Render::Size<unsigned long> &, unsigned long);
	virtual void TextureLost(Scaleform::Render::Image::TextureLossReason);
private:
	Scaleform::Render::GlyphCache * pCache; // 0x38
	unsigned long TextureId; // 0x40
public:
	virtual ~GlyphTextureImage();
	Scaleform::Render::GlyphTextureImage & operator=(Scaleform::Render::GlyphTextureImage &);
	Scaleform::Render::GlyphTextureImage & operator=(const Scaleform::Render::GlyphTextureImage &);
};
class Scaleform::Render::GlyphTextureMapper
{
public:
	GlyphTextureMapper(Scaleform::Render::GlyphTextureMapper &);
	GlyphTextureMapper(const Scaleform::Render::GlyphTextureMapper &);
	GlyphTextureMapper();
	bool Create(unsigned long, Scaleform::MemoryHeap *, Scaleform::Render::TextureManager *, Scaleform::Render::PrimitiveFillManager *, Scaleform::Render::GlyphCache *, unsigned long, const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::ImagePlane * Map();
	bool Unmap();
	bool Update(const Scaleform::Render::Texture::UpdateDesc *, unsigned long);
	void Invalidate();
	bool IsValid();
	Scaleform::Render::PrimitiveFill * GetFill();
	const Scaleform::Render::PrimitiveFill * GetFill();
	Scaleform::Render::Image * GetImage();
private:
	bool Valid; // 0x0
	unsigned long Method; // 0x4
	Scaleform::Render::TextureManager * pTexMan; // 0x8
	Scaleform::Render::ImageData Data; // 0x10
	Scaleform::Ptr<Scaleform::Render::RawImage> pRawImg; // 0x50
	Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> pTexImg; // 0x58
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> pFill; // 0x60
	bool Mapped; // 0x68
public:
	unsigned long NumGlyphsToUpdate; // 0x6C
	~GlyphTextureMapper();
	Scaleform::Render::GlyphTextureMapper & operator=(Scaleform::Render::GlyphTextureMapper &);
	Scaleform::Render::GlyphTextureMapper & operator=(const Scaleform::Render::GlyphTextureMapper &);
};
class Scaleform::Ptr<Scaleform::Render::RawImage>
{
protected:
	Scaleform::Render::RawImage * pObject; // 0x0
public:
	Ptr<Scaleform::Render::RawImage>(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Render::RawImage *);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Ptr<Scaleform::Render::RawImage> &, Scaleform::PickType);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Pickable<Scaleform::Render::RawImage>);
	Ptr<Scaleform::Render::RawImage>(Scaleform::Render::RawImage &);
	Ptr<Scaleform::Render::RawImage>();
	~Ptr<Scaleform::Render::RawImage>();
	bool operator==(Scaleform::Render::RawImage *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	bool operator!=(Scaleform::Render::RawImage *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(Scaleform::Pickable<Scaleform::Render::RawImage>);
	const Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(Scaleform::Render::RawImage &);
	const Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(Scaleform::Render::RawImage *);
	const Scaleform::Ptr<Scaleform::Render::RawImage> & operator=(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(Scaleform::Pickable<Scaleform::Render::RawImage>);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(Scaleform::Render::RawImage &);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(Scaleform::Render::RawImage *);
	Scaleform::Ptr<Scaleform::Render::RawImage> & SetPtr(const Scaleform::Ptr<Scaleform::Render::RawImage> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::RawImage * & GetRawRef();
	Scaleform::Render::RawImage * GetPtr();
	Scaleform::Render::RawImage & operator*();
	Scaleform::Render::RawImage * operator->();
	Scaleform::Render::RawImage * operator class Scaleform::Render::RawImage *();
	Scaleform::Ptr<Scaleform::Render::RawImage> & Pick(Scaleform::Render::RawImage *);
	Scaleform::Ptr<Scaleform::Render::RawImage> & Pick(Scaleform::Pickable<Scaleform::Render::RawImage>);
	Scaleform::Ptr<Scaleform::Render::RawImage> & Pick(Scaleform::Ptr<Scaleform::Render::RawImage> &);
};
class Scaleform::Ptr<Scaleform::Render::GlyphTextureImage>
{
protected:
	Scaleform::Render::GlyphTextureImage * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GlyphTextureImage>(const Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> &);
	Ptr<Scaleform::Render::GlyphTextureImage>(Scaleform::Render::GlyphTextureImage *);
	Ptr<Scaleform::Render::GlyphTextureImage>(Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GlyphTextureImage>(Scaleform::Pickable<Scaleform::Render::GlyphTextureImage>);
	Ptr<Scaleform::Render::GlyphTextureImage>(Scaleform::Render::GlyphTextureImage &);
	Ptr<Scaleform::Render::GlyphTextureImage>();
	~Ptr<Scaleform::Render::GlyphTextureImage>();
	bool operator==(Scaleform::Render::GlyphTextureImage *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> &);
	bool operator!=(Scaleform::Render::GlyphTextureImage *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> &);
	Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & operator=(Scaleform::Pickable<Scaleform::Render::GlyphTextureImage>);
	const Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & operator=(Scaleform::Render::GlyphTextureImage &);
	const Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & operator=(Scaleform::Render::GlyphTextureImage *);
	const Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & operator=(const Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> &);
	Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & SetPtr(Scaleform::Pickable<Scaleform::Render::GlyphTextureImage>);
	Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & SetPtr(Scaleform::Render::GlyphTextureImage &);
	Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & SetPtr(Scaleform::Render::GlyphTextureImage *);
	Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GlyphTextureImage * & GetRawRef();
	Scaleform::Render::GlyphTextureImage * GetPtr();
	Scaleform::Render::GlyphTextureImage & operator*();
	Scaleform::Render::GlyphTextureImage * operator->();
	Scaleform::Render::GlyphTextureImage * operator class Scaleform::Render::GlyphTextureImage *();
	Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & Pick(Scaleform::Render::GlyphTextureImage *);
	Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & Pick(Scaleform::Pickable<Scaleform::Render::GlyphTextureImage>);
	Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> & Pick(Scaleform::Ptr<Scaleform::Render::GlyphTextureImage> &);
};
class Scaleform::Render::GlyphScanlineFilter
{
public:
	GlyphScanlineFilter(float, float, float);
	void Filter(const unsigned char *, unsigned char *);
private:
	unsigned char Primary[256]; // 0x0
	unsigned char Secondary[256]; // 0x100
	unsigned char Tertiary[256]; // 0x200
};
Scaleform::Render::GlyphScanlineFilter::GlyphScanlineFilter(float prim, float second, float tert); // 0x1403758F0
class Scaleform::Render::TextureUpdatePacker
{
public:
	TextureUpdatePacker(unsigned long, unsigned long);
	unsigned long GetWidth();
	unsigned long GetHeight();
	void Clear();
	bool Allocate(unsigned long, unsigned long, unsigned long *, unsigned long *);
private:
	unsigned long Width; // 0x0
	unsigned long Height; // 0x4
	unsigned long LastX; // 0x8
	unsigned long LastY; // 0xC
	unsigned long LastMaxHeight; // 0x10
};
class Scaleform::Render::GlyphCache :
	Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2>,
	Scaleform::Render::CacheBase,
	Scaleform::Render::GlyphCacheConfig
{
	enum <unnamed-enum-SID>
	{
		SID = 2,
	};
	enum <unnamed-enum-TexturePoolSize>
	{
		TexturePoolSize = 32,
	};
	class EvictNotifier;
	enum TextureUpdateMethod
	{
		TU_DirectMap = 0,
		TU_MultipleUpdate = 1,
		TU_WholeImage = 2,
	};
	enum RasResult
	{
		Res_Success = 0,
		Res_ShapeIsEmpty = 1,
		Res_ShapeNotFound = 2,
		Res_ShapeIsTooBig = 3,
		Res_NoRasterCache = 4,
		Res_CacheFull = 5,
	};
public:
	GlyphCache(Scaleform::MemoryHeap *);
	virtual ~GlyphCache();
	void Initialize(Scaleform::Render::HAL *, Scaleform::Render::PrimitiveFillManager *);
	void Destroy();
	void OnBeginFrame();
	void OnEndFrame();
	bool CanReset();
	virtual void ClearCache();
	virtual bool SetParams(const Scaleform::Render::GlyphCacheParams &);
	virtual const Scaleform::Render::GlyphCacheParams & GetParams();
	Scaleform::MemoryHeap * GetHeap();
	Scaleform::Render::TextureManager * GetTextureManager();
	Scaleform::Render::PrimitiveFillManager * GetPrimitiveFillManager();
	float GetMaxRasterScale();
	float GetScaleU();
	float GetScaleV();
	virtual void UnlockBuffers();
	void TextureLost(unsigned long, unsigned long);
	void CleanUpFont(Scaleform::Render::FontCacheHandle *);
	void MergeCacheSlots();
	void UnpinAllSlots();
	void EvictText(Scaleform::Render::TextMeshProvider *);
	void ApplyInUseList();
	bool UpdatePinList();
	void AddToInUseList(Scaleform::Render::TextMeshProvider *);
	void PinSlot(Scaleform::Render::GlyphSlot *);
	void UnpinSlot(Scaleform::Render::GlyphSlot *, Scaleform::Render::Fence *);
	void RemoveNotifier(Scaleform::Render::TextNotifier *);
	long CmpFills(unsigned long, unsigned long);
	Scaleform::Render::PrimitiveFill * GetFill(Scaleform::Render::TextLayerType, unsigned long);
	Scaleform::Render::Image * GetImage(unsigned long);
	Scaleform::Render::FontCacheHandle * RegisterFont(Scaleform::Render::Font *);
	float GetCachedFontSize(const Scaleform::Render::GlyphParam &, float, bool);
	float GetCachedShadowSize(float, const Scaleform::Render::GlyphRaster *);
	Scaleform::Render::GlyphNode * FindGlyph(Scaleform::Render::TextMeshProvider *, const Scaleform::Render::GlyphParam &);
	Scaleform::Render::GlyphNode * RasterizeGlyph(Scaleform::Render::HAL *, Scaleform::Render::GlyphRunData &, Scaleform::Render::TextMeshProvider *, const Scaleform::Render::GlyphParam &);
	Scaleform::Render::GlyphNode * RasterizeShadow(Scaleform::Render::HAL *, Scaleform::Render::GlyphRunData &, Scaleform::Render::TextMeshProvider *, const Scaleform::Render::GlyphParam &, float, const Scaleform::Render::GlyphRaster *);
	Scaleform::Render::GlyphCache::RasResult GetRasResult();
	unsigned short GetTextureId(const Scaleform::Render::GlyphNode *);
	unsigned long GetMaxGlyphHeight();
	void LogWarning(const char *, ...);
	void LogError(const char *, ...);
	unsigned long GetRasterizationCount();
	void ResetRasterizationCount();
	Scaleform::Render::VectorGlyphShape * CreateGlyphShape(Scaleform::Render::GlyphRunData &, const Scaleform::Render::ToleranceParams &, unsigned long, float, bool, bool, unsigned long, bool);
	float SnapFontSizeToRamp(float);
	float SnapShadowSizeToRamp(float);
	bool GlyphFits(unsigned long);
	void PrintMemStats();
	void VisitGlyphs(Scaleform::Render::GlyphQueueVisitor *);
	unsigned long GetNumRasterizedGlyphs();
	unsigned long GetNumTextures();
	unsigned long ComputeUsedArea();
	unsigned long ComputeTotalArea();
	unsigned long long GetBytes();
private:
	void initialize();
	struct UpdateRect;
	struct UpdateDesc;
	void getGlyphBounds(Scaleform::Render::VectorGlyphShape *, const Scaleform::Render::ShapeDataInterface *);
	bool isOuterContourCW(const Scaleform::Render::ShapeDataInterface *);
	void copyAndTransformShape(Scaleform::Render::VectorGlyphShape *, const Scaleform::Render::ToleranceParams &, const Scaleform::Render::ShapeDataInterface *, bool, bool, unsigned long, float, float);
	Scaleform::Render::GlyphNode * allocateGlyph(Scaleform::Render::TextMeshProvider *, const Scaleform::Render::GlyphParam &, unsigned long, unsigned long);
	Scaleform::Render::GlyphNode * getPrerasterizedGlyph(Scaleform::Render::GlyphRunData &, Scaleform::Render::TextMeshProvider *, const Scaleform::Render::GlyphParam &);
	void partialUpdateTextures();
	void copyImageData(Scaleform::Render::ImagePlane *, const unsigned char *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
	void releaseAllTextures();
	void addShapeToRasterizer(const Scaleform::Render::ShapeDataInterface *, const Scaleform::Render::ToleranceParams &, float, float);
	void addShapeAutoFit(const Scaleform::Render::ShapeDataInterface *, const Scaleform::Render::ToleranceParams &, unsigned long, long, long, float, float);
	void recursiveBlur(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, float, float);
	void strengthenImage(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long, float, long);
	void filterScanline(unsigned char *, unsigned long);
	void knockOut(unsigned char *);
	void cacheFullWarning();
	void rasterTooBigWarning();
	bool checkInitialization();
	bool updateTextureGlyph(const Scaleform::Render::GlyphNode *);
	Scaleform::Render::GlyphNode * createShadowFromRaster(Scaleform::Render::GlyphRunData &, Scaleform::Render::TextMeshProvider *, const Scaleform::Render::GlyphParam &, float, const Scaleform::Render::GlyphRaster *);
	class VectorGlyphHashSet;
	Scaleform::Render::GlyphCacheParams Param; // 0x20
	Scaleform::MemoryHeap * pHeap; // 0x58
	Scaleform::Render::HAL * pRenderer; // 0x60
	Scaleform::Render::PrimitiveFillManager * pFillMan; // 0x68
	Scaleform::Render::TextureManager * pTexMan; // 0x70
	unsigned long TextureWidth; // 0x78
	unsigned long TextureHeight; // 0x7C
	unsigned long MaxNumTextures; // 0x80
	unsigned long MaxSlotHeight; // 0x84
	unsigned long SlotPadding; // 0x88
	float ScaleU; // 0x8C
	float ScaleV; // 0x90
	float ShadowQuality; // 0x94
	Scaleform::Render::GlyphTextureMapper Textures[32]; // 0x98
	Scaleform::Render::GlyphQueue Queue; // 0xE98
	Scaleform::Render::GlyphCache::TextureUpdateMethod Method; // 0xFE0
	Scaleform::Render::TextureUpdatePacker UpdatePacker; // 0xFE4
	Scaleform::Ptr<Scaleform::Render::RawImage> UpdateBuffer; // 0xFF8
	Scaleform::ArrayPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,6,16,2> GlyphsToUpdate; // 0x1000
	Scaleform::ArrayUnsafeLH_POD<Scaleform::Render::Texture::UpdateDesc,2> RectsToUpdate; // 0x1028
	Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > TextInUse; // 0x1040
	Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > TextInPin; // 0x1050
	Scaleform::Render::GlyphCache::EvictNotifier Notifier; // 0x1060
	Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> pFontHandleManager; // 0x1070
	Scaleform::Render::RQCacheInterface * pRQCaches; // 0x1078
	Scaleform::Log * pLog; // 0x1080
	Scaleform::List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> > VectorGlyphShapeList; // 0x1088
	Scaleform::HashSetLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > VectorGlyphCache; // 0x1098
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> pSolidFill; // 0x10A0
	Scaleform::Ptr<Scaleform::Render::PrimitiveFill> pMaskFill; // 0x10A8
	unsigned char FontSizeMap[256]; // 0x10B0
	Scaleform::Render::GlyphCache::RasResult Result; // 0x11B0
	Scaleform::Render::GlyphFitter Fitter; // 0x11B8
	Scaleform::Render::Rasterizer Ras; // 0x12D8
	Scaleform::Render::GlyphScanlineFilter ScanlineFilter; // 0x15A8
	Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> RasterData; // 0x18A8
	Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> RasterDataSrc; // 0x18C0
	Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> KnockOutCopy; // 0x18D8
	unsigned long RasterPitch; // 0x18F0
	Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> BlurStack; // 0x18F8
	Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy> BlurSum; // 0x1910
	Scaleform::Render::LinearHeap LHeap1; // 0x1928
	Scaleform::Render::LinearHeap LHeap2; // 0x1950
	Scaleform::Render::Stroker mStroker; // 0x1978
	Scaleform::Render::VertexPath TmpPath1; // 0x19D0
	Scaleform::Render::VertexPath TmpPath2; // 0x1A30
	unsigned long RasterizationCount; // 0x1A90
	bool RasterCacheWarning; // 0x1A94
	bool RasterTooBigWarning; // 0x1A95
};
class Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 2,
	};
public:
	RefCountBase<Scaleform::Render::GlyphCache,2>(Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2> &);
	RefCountBase<Scaleform::Render::GlyphCache,2>(const Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2> &);
	RefCountBase<Scaleform::Render::GlyphCache,2>();
	virtual ~RefCountBase<Scaleform::Render::GlyphCache,2>();
	Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2> & operator=(Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2> &);
	Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2> & operator=(const Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2> &);
};
class Scaleform::Render::GlyphCache::EvictNotifier :
	Scaleform::Render::GlyphEvictNotifier
{
public:
	Scaleform::Render::GlyphCache * pCache; // 0x8
	virtual void Evict(Scaleform::Render::TextMeshProvider *);
	virtual void ApplyInUseList();
	virtual bool UpdatePinList();
	EvictNotifier(Scaleform::Render::GlyphCache::EvictNotifier &);
	EvictNotifier(const Scaleform::Render::GlyphCache::EvictNotifier &);
	EvictNotifier();
	virtual ~EvictNotifier();
	Scaleform::Render::GlyphCache::EvictNotifier & operator=(Scaleform::Render::GlyphCache::EvictNotifier &);
	Scaleform::Render::GlyphCache::EvictNotifier & operator=(const Scaleform::Render::GlyphCache::EvictNotifier &);
};
void Scaleform::Render::GlyphCache::EvictNotifier::Evict(Scaleform::Render::TextMeshProvider * p); // 0x140377230
void Scaleform::Render::GlyphCache::EvictNotifier::ApplyInUseList(); // 0x1403761B0
bool Scaleform::Render::GlyphCache::EvictNotifier::UpdatePinList(); // 0x140378EE0
const Scaleform::Render::GlyphCacheParams & Scaleform::Render::GlyphCache::GetParams(); // 0x1400D7970
struct Scaleform::Render::GlyphCache::UpdateRect
{
	unsigned long SrcX; // 0x0
	unsigned long SrcY; // 0x4
	unsigned long DstX; // 0x8
	unsigned long DstY; // 0xC
	unsigned long w; // 0x10
	unsigned long h; // 0x14
	unsigned long TextureId; // 0x18
};
class Scaleform::HashSetLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > :
	Scaleform::HashSet<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >
{
	class SelfType;
	class BaseType;
	class ValueType;
public:
	HashSetLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scalef(const Scaleform::HashSetLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > &);
	HashSetLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scalef(long);
	HashSetLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scalef();
	~HashSetLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scale();
	void operator=(const Scaleform::HashSetLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,2,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > &);
};
class Scaleform::ArrayPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,6,16,2> :
	Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2> >
{
	class SelfType;
	struct ValueType;
	struct AllocatorType;
public:
	ArrayPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,6,16,2>();
	~ArrayPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,6,16,2>();
};
class Scaleform::ArrayUnsafeLH_POD<Scaleform::Render::Texture::UpdateDesc,2> :
	Scaleform::ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> >
{
	struct ValueType;
	struct AllocatorType;
	class BaseType;
	class SelfType;
public:
	ArrayUnsafeLH_POD<Scaleform::Render::Texture::UpdateDesc,2>(const Scaleform::ArrayUnsafeLH_POD<Scaleform::Render::Texture::UpdateDesc,2> &);
	ArrayUnsafeLH_POD<Scaleform::Render::Texture::UpdateDesc,2>(unsigned long long);
	ArrayUnsafeLH_POD<Scaleform::Render::Texture::UpdateDesc,2>();
	const Scaleform::ArrayUnsafeLH_POD<Scaleform::Render::Texture::UpdateDesc,2> & operator=(const Scaleform::ArrayUnsafeLH_POD<Scaleform::Render::Texture::UpdateDesc,2> &);
	~ArrayUnsafeLH_POD<Scaleform::Render::Texture::UpdateDesc,2>();
};
class Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> >
{
	class ValueType;
private:
	List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> >(const Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > &);
public:
	List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> >();
	void Clear();
	Scaleform::Render::TextMeshProvider * GetFirst();
	Scaleform::Render::TextMeshProvider * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::TextMeshProvider *);
	bool IsLast(const Scaleform::Render::TextMeshProvider *);
	bool IsNull(const Scaleform::Render::TextMeshProvider *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::TextMeshProvider * GetPrev(const Scaleform::Render::TextMeshProvider *);
	static Scaleform::Render::TextMeshProvider * GetNext(const Scaleform::Render::TextMeshProvider *);
	void PushFront(Scaleform::Render::TextMeshProvider *);
	void PushBack(Scaleform::Render::TextMeshProvider *);
	static void Remove(Scaleform::Render::TextMeshProvider *);
	void BringToFront(Scaleform::Render::TextMeshProvider *);
	void SendToBack(Scaleform::Render::TextMeshProvider *);
	void PushListToFront(Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > &, Scaleform::Render::TextMeshProvider *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > &, Scaleform::Render::TextMeshProvider *);
	void PushListItemsToFront(Scaleform::Render::TextMeshProvider *, Scaleform::Render::TextMeshProvider *);
private:
	const Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > & operator=(const Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > &);
	Scaleform::ListNode<Scaleform::Render::TextMeshProvider> Root; // 0x0
};
class Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager>
{
protected:
	Scaleform::Render::FontCacheHandleManager * pObject; // 0x0
public:
	Ptr<Scaleform::Render::FontCacheHandleManager>(const Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> &);
	Ptr<Scaleform::Render::FontCacheHandleManager>(Scaleform::Render::FontCacheHandleManager *);
	Ptr<Scaleform::Render::FontCacheHandleManager>(Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> &, Scaleform::PickType);
	Ptr<Scaleform::Render::FontCacheHandleManager>(Scaleform::Pickable<Scaleform::Render::FontCacheHandleManager>);
	Ptr<Scaleform::Render::FontCacheHandleManager>(Scaleform::Render::FontCacheHandleManager &);
	Ptr<Scaleform::Render::FontCacheHandleManager>();
	~Ptr<Scaleform::Render::FontCacheHandleManager>();
	bool operator==(Scaleform::Render::FontCacheHandleManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> &);
	bool operator!=(Scaleform::Render::FontCacheHandleManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> &);
	Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & operator=(Scaleform::Pickable<Scaleform::Render::FontCacheHandleManager>);
	const Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & operator=(Scaleform::Render::FontCacheHandleManager &);
	const Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & operator=(Scaleform::Render::FontCacheHandleManager *);
	const Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & operator=(const Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> &);
	Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & SetPtr(Scaleform::Pickable<Scaleform::Render::FontCacheHandleManager>);
	Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & SetPtr(Scaleform::Render::FontCacheHandleManager &);
	Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & SetPtr(Scaleform::Render::FontCacheHandleManager *);
	Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & SetPtr(const Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::FontCacheHandleManager * & GetRawRef();
	Scaleform::Render::FontCacheHandleManager * GetPtr();
	Scaleform::Render::FontCacheHandleManager & operator*();
	Scaleform::Render::FontCacheHandleManager * operator->();
	Scaleform::Render::FontCacheHandleManager * operator class Scaleform::Render::FontCacheHandleManager *();
	Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & Pick(Scaleform::Render::FontCacheHandleManager *);
	Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & Pick(Scaleform::Pickable<Scaleform::Render::FontCacheHandleManager>);
	Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> & Pick(Scaleform::Ptr<Scaleform::Render::FontCacheHandleManager> &);
};
class Scaleform::List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> >
{
	struct ValueType;
private:
	List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> >(const Scaleform::List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> > &);
public:
	List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> >();
	void Clear();
	Scaleform::Render::VectorGlyphShape * GetFirst();
	Scaleform::Render::VectorGlyphShape * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::VectorGlyphShape *);
	bool IsLast(const Scaleform::Render::VectorGlyphShape *);
	bool IsNull(const Scaleform::Render::VectorGlyphShape *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::VectorGlyphShape * GetPrev(const Scaleform::Render::VectorGlyphShape *);
	static Scaleform::Render::VectorGlyphShape * GetNext(const Scaleform::Render::VectorGlyphShape *);
	void PushFront(Scaleform::Render::VectorGlyphShape *);
	void PushBack(Scaleform::Render::VectorGlyphShape *);
	static void Remove(Scaleform::Render::VectorGlyphShape *);
	void BringToFront(Scaleform::Render::VectorGlyphShape *);
	void SendToBack(Scaleform::Render::VectorGlyphShape *);
	void PushListToFront(Scaleform::List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> > &, Scaleform::Render::VectorGlyphShape *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> > &, Scaleform::Render::VectorGlyphShape *);
	void PushListItemsToFront(Scaleform::Render::VectorGlyphShape *, Scaleform::Render::VectorGlyphShape *);
private:
	const Scaleform::List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> > & operator=(const Scaleform::List<Scaleform::Render::VectorGlyphShape,Scaleform::Render::VectorGlyphShape,Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> > &);
	Scaleform::ListNode<Scaleform::Render::VectorGlyphShape> Root; // 0x0
};
class Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef float ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>();
};