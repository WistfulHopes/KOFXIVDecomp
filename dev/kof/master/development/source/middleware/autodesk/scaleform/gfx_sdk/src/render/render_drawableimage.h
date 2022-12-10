#pragma once

class Scaleform::Render::DrawableImageContext :
	Scaleform::Render::ContextImpl::ContextCaptureNotify
{
private:
	Scaleform::Render::DrawableImageContext * getThis();
public:
	DrawableImageContext(const Scaleform::Render::DrawableImageContext &);
	DrawableImageContext(Scaleform::Render::ContextImpl::Context *, Scaleform::Render::ThreadCommandQueue *, const Scaleform::Render::Interfaces &);
	virtual ~DrawableImageContext();
	void SetQueue(Scaleform::Render::ThreadCommandQueue *);
	Scaleform::Render::ThreadCommandQueue * GetQueue();
	Scaleform::Render::ContextImpl::Context * GetControlContext();
	void SetDisallowTextureMapping(bool);
	bool GetDisallowTextureMapping();
	void GetRenderInterfacesRT(Scaleform::Render::Interfaces *);
	virtual void OnCapture();
	virtual void OnNextCapture(Scaleform::Render::ContextImpl::RenderNotify *);
	virtual void OnShutdown(bool);
	void ExecuteNextCapture(Scaleform::Render::ContextImpl::RenderNotify *);
	void AddTreeRootToKillList(Scaleform::Render::TreeRoot *);
	bool IsShutdownComplete();
protected:
	void processTreeRootKillList();
	Scaleform::Render::ContextImpl::Context * RContext; // 0x20
	char RContextBacking[280]; // 0x28
	Scaleform::Render::ContextImpl::Context * pControlContext; // 0x140
	Scaleform::Render::ThreadCommandQueue * pRTCommandQueue; // 0x148
	Scaleform::Lock * getLock();
	Scaleform::Lock TreeRootKillListLock; // 0x150
	Scaleform::ArrayLH<Scaleform::Render::TreeRoot *,2,Scaleform::ArrayDefaultPolicy> TreeRootKillList; // 0x180
	Scaleform::Ptr<Scaleform::Render::DICommandQueue> Queue; // 0x198
	bool DisallowTextureMapping; // 0x1A0
private:
	Scaleform::Render::Interfaces IDefaults; // 0x1A8
public:
	Scaleform::Render::DrawableImageContext & operator=(const Scaleform::Render::DrawableImageContext &);
};
class Scaleform::ArrayLH<Scaleform::Render::TreeRoot *,2,Scaleform::ArrayDefaultPolicy> :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::TreeRoot *,Scaleform::AllocatorLH<Scaleform::Render::TreeRoot *,2>,Scaleform::ArrayDefaultPolicy> >
{
	typedef Scaleform::Render::TreeRoot ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::TreeRoot *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayLH<Scaleform::Render::TreeRoot *,2,Scaleform::ArrayDefaultPolicy> &);
	ArrayLH<Scaleform::Render::TreeRoot *,2,Scaleform::ArrayDefaultPolicy>(const Scaleform::ArrayDefaultPolicy &);
	ArrayLH<Scaleform::Render::TreeRoot *,2,Scaleform::ArrayDefaultPolicy>(long);
	ArrayLH<Scaleform::Render::TreeRoot *,2,Scaleform::ArrayDefaultPolicy>();
	const Scaleform::ArrayLH<Scaleform::Render::TreeRoot *,2,Scaleform::ArrayDefaultPolicy> & operator=(const Scaleform::ArrayLH<Scaleform::Render::TreeRoot *,2,Scaleform::ArrayDefaultPolicy> &);
	~ArrayLH<Scaleform::Render::TreeRoot *,2,Scaleform::ArrayDefaultPolicy>();
};
class Scaleform::Ptr<Scaleform::Render::DICommandQueue>
{
protected:
	Scaleform::Render::DICommandQueue * pObject; // 0x0
public:
	Ptr<Scaleform::Render::DICommandQueue>(const Scaleform::Ptr<Scaleform::Render::DICommandQueue> &);
	Ptr<Scaleform::Render::DICommandQueue>(Scaleform::Render::DICommandQueue *);
	Ptr<Scaleform::Render::DICommandQueue>(Scaleform::Ptr<Scaleform::Render::DICommandQueue> &, Scaleform::PickType);
	Ptr<Scaleform::Render::DICommandQueue>(Scaleform::Pickable<Scaleform::Render::DICommandQueue>);
	Ptr<Scaleform::Render::DICommandQueue>(Scaleform::Render::DICommandQueue &);
	Ptr<Scaleform::Render::DICommandQueue>();
	~Ptr<Scaleform::Render::DICommandQueue>();
	bool operator==(Scaleform::Render::DICommandQueue *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::DICommandQueue> &);
	bool operator!=(Scaleform::Render::DICommandQueue *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::DICommandQueue> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::DICommandQueue> &);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue> & operator=(Scaleform::Pickable<Scaleform::Render::DICommandQueue>);
	const Scaleform::Ptr<Scaleform::Render::DICommandQueue> & operator=(Scaleform::Render::DICommandQueue &);
	const Scaleform::Ptr<Scaleform::Render::DICommandQueue> & operator=(Scaleform::Render::DICommandQueue *);
	const Scaleform::Ptr<Scaleform::Render::DICommandQueue> & operator=(const Scaleform::Ptr<Scaleform::Render::DICommandQueue> &);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue> & SetPtr(Scaleform::Pickable<Scaleform::Render::DICommandQueue>);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue> & SetPtr(Scaleform::Render::DICommandQueue &);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue> & SetPtr(Scaleform::Render::DICommandQueue *);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue> & SetPtr(const Scaleform::Ptr<Scaleform::Render::DICommandQueue> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::DICommandQueue * & GetRawRef();
	Scaleform::Render::DICommandQueue * GetPtr();
	Scaleform::Render::DICommandQueue & operator*();
	Scaleform::Render::DICommandQueue * operator->();
	Scaleform::Render::DICommandQueue * operator class Scaleform::Render::DICommandQueue *();
	Scaleform::Ptr<Scaleform::Render::DICommandQueue> & Pick(Scaleform::Render::DICommandQueue *);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue> & Pick(Scaleform::Pickable<Scaleform::Render::DICommandQueue>);
	Scaleform::Ptr<Scaleform::Render::DICommandQueue> & Pick(Scaleform::Ptr<Scaleform::Render::DICommandQueue> &);
};
struct Scaleform::ListNode<Scaleform::Render::DrawableImage>
{
	Scaleform::Render::DrawableImage * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::DrawableImage * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::DrawableImage>();
	Scaleform::Render::DrawableImage * GetPrev();
	Scaleform::Render::DrawableImage * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::DrawableImage *);
	void InsertNodeAfter(Scaleform::Render::DrawableImage *);
	void InsertNodeBefore(Scaleform::Render::DrawableImage *);
};
class Scaleform::Render::DrawableImage :
	Scaleform::Render::Image,
	Scaleform::ListNode<Scaleform::Render::DrawableImage>,
	Scaleform::Render::FenceResource
{
	enum DrawableImageStateFlags
	{
		DIState_Mapped = 1,
		DIState_MappedRead = 2,
		DIState_CPUDirty = 8,
		DIState_GPUDirty = 16,
		DIState_Disposed = 32,
	};
public:
	DrawableImage(const Scaleform::Render::DrawableImage &);
	DrawableImage(Scaleform::Render::ImageFormat, Scaleform::Render::Size<unsigned long>, bool, Scaleform::Render::Color, Scaleform::Render::DrawableImageContext *);
	DrawableImage(bool, Scaleform::Render::ImageBase *, Scaleform::Render::DrawableImageContext *);
	virtual void Release();
	virtual ~DrawableImage();
	bool IsTransparent();
	Scaleform::Render::DrawableImageContext * GetContext();
	Scaleform::Render::RenderTarget * GetRenderTarget();
	static bool MapImageSource(Scaleform::Render::ImageData *, Scaleform::Render::ImageBase *);
	void ApplyFilter(Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, Scaleform::Render::Filter *);
	static void CalcFilterRect(Scaleform::Render::Rect<float> *, const Scaleform::Render::Rect<long> &, Scaleform::Render::Filter *);
	void ColorTransform(const Scaleform::Render::Rect<long> &, const Scaleform::Render::Cxform &);
	void Compare(Scaleform::Render::DrawableImage *, Scaleform::Render::DrawableImage *);
	enum ChannelBits
	{
		Channel_Red = 1,
		Channel_Green = 2,
		Channel_Blue = 4,
		Channel_Alpha = 8,
		Channel_RGB = 7,
	};
	void CopyChannel(Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, Scaleform::Render::DrawableImage::ChannelBits, Scaleform::Render::DrawableImage::ChannelBits);
	void CopyPixels(Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, Scaleform::Render::DrawableImage *, const Scaleform::Render::Point<long> *, bool);
	void Draw(Scaleform::Render::Image *, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Cxform &, Scaleform::Render::BlendMode, const Scaleform::Render::Rect<long> *, bool);
	void Draw(Scaleform::Render::TreeNode *, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Cxform &, Scaleform::Render::BlendMode, const Scaleform::Render::Rect<long> *);
	void Dispose();
	void FillRect(const Scaleform::Render::Rect<long> &, Scaleform::Render::Color);
	void FloodFill(const Scaleform::Render::Point<long> &, Scaleform::Render::Color);
	Scaleform::Render::Rect<long> GetColorBoundsRect(unsigned long, unsigned long, bool);
	Scaleform::Render::Color GetPixel(long, long);
	Scaleform::Render::Color GetPixel32(long, long);
	bool GetPixels(Scaleform::Render::DIPixelProvider &, const Scaleform::Render::Rect<long> &);
	void Histogram(Scaleform::Render::Rect<long> *, unsigned long[256] *);
	bool HitTest(Scaleform::Render::ImageBase *, const Scaleform::Render::Point<long> &, const Scaleform::Render::Point<long> &, unsigned long, unsigned long);
	bool HitTest(const Scaleform::Render::Point<long> &, Scaleform::Render::Rect<long> &, unsigned long);
	void Merge(Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, unsigned long, unsigned long, unsigned long, unsigned long);
	void Noise(unsigned long, unsigned long, unsigned long, unsigned long, bool);
	void PaletteMap(Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, unsigned long * *);
	void PerlinNoise(float, float, unsigned long, unsigned long, bool, bool, unsigned long, bool, float *, unsigned long);
	unsigned long PixelDissolve(Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, unsigned long, unsigned long, Scaleform::Render::Color);
	void Scroll(long, long);
	void SetPixel(long, long, Scaleform::Render::Color);
	void SetPixel32(long, long, Scaleform::Render::Color);
	bool SetPixels(const Scaleform::Render::Rect<long> &, Scaleform::Render::DIPixelProvider &);
	enum OperationType
	{
		Operator_LT = 0,
		Operator_LE = 1,
		Operator_GT = 2,
		Operator_GE = 3,
		Operator_EQ = 4,
		Operator_NE = 5,
	};
	void Threshold(Scaleform::Render::DrawableImage *, const Scaleform::Render::Rect<long> &, const Scaleform::Render::Point<long> &, Scaleform::Render::DrawableImage::OperationType, unsigned long, unsigned long, unsigned long, bool);
	virtual Scaleform::Render::ImageBase::ImageType GetImageType();
	virtual Scaleform::Render::ImageFormat GetFormat();
	virtual unsigned long GetUse();
	virtual Scaleform::Render::Size<unsigned long> GetSize();
	virtual unsigned long GetMipmapCount();
	virtual Scaleform::Render::Texture * GetTexture(Scaleform::Render::TextureManager *);
	virtual bool Decode(Scaleform::Render::ImageData *, void(*)(unsigned char *, const unsigned char *, unsigned long long, Scaleform::Render::Palette *, void *), void *);
	virtual Scaleform::Render::Image * GetAsImage();
	virtual void TextureLost(Scaleform::Render::Image::TextureLossReason);
protected:
	bool createTextureFromManager(Scaleform::Render::HAL *, Scaleform::Render::TextureManager *);
	bool mapTextureRT(bool);
	bool ensureGPURenderable();
	void unmapTextureRT();
	void updateRenderTargetRT();
	void updateStagingTargetRT();
	Scaleform::Render::ImageData & getMappedData();
	bool isMapped();
	void addToCPUModifiedList();
	void addToGPUModifiedListRT();
	bool isRenderableRT();
	bool ensureRenderableRT();
	void initialize(Scaleform::Render::ImageFormat, const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::DrawableImageContext *);
	void setViewProj3DHelper(Scaleform::Render::TreeNode *, Scaleform::Render::TreeRoot *);
private:
	Scaleform::Render::ImageFormat Format; // 0x40
	Scaleform::Render::Size<unsigned long> ISize; // 0x44
	volatile unsigned long DrawableImageState; // 0x4C
	bool Transparent; // 0x50
	Scaleform::Ptr<Scaleform::Render::DICommandQueue> pQueue; // 0x58
	Scaleform::Render::ImageData MappedData; // 0x60
	Scaleform::Ptr<Scaleform::Render::DrawableImage> pCPUModifiedNext; // 0xA0
	Scaleform::Ptr<Scaleform::Render::DrawableImage> pGPUModifiedNext; // 0xA8
	Scaleform::Ptr<Scaleform::Render::ImageBase> pDelegateImage; // 0xB0
	Scaleform::Ptr<Scaleform::Render::DrawableImageContext> pContext; // 0xB8
	Scaleform::Ptr<Scaleform::Render::RenderTarget> pRT; // 0xC0
public:
	Scaleform::Render::DrawableImage & operator=(const Scaleform::Render::DrawableImage &);
};
Scaleform::Render::RenderTarget * Scaleform::Render::DrawableImage::GetRenderTarget(); // 0x14032E070
class Scaleform::Render::Point<long>
{
public:
	long x; // 0x0
	long y; // 0x4
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
	Point<long>(const Scaleform::Render::Point<long> &);
	Point<long>(long, long);
	Point<long>(long);
	Point<long>();
	void SetPoint(Scaleform::Render::Point<long>::BoundsType);
	void SetPoint(const Scaleform::Render::Point<long> &);
	void SetPoint(long, long);
	void SetPoint(long);
	void Clear();
	void Swap(Scaleform::Render::Point<long> *);
	Scaleform::Render::Point<long> & SetLerp(const Scaleform::Render::Point<long> &, const Scaleform::Render::Point<long> &, long);
	bool IsNull();
	Scaleform::Render::Point<long> & Offset(long, long);
	Scaleform::Render::Point<long> & Offset(long);
	Scaleform::Render::Point<long> & Offset(const Scaleform::Render::Size<long> &);
	Scaleform::Render::Point<long> & Offset(const Scaleform::Render::Point<long> &);
	Scaleform::Render::Point<long> & Mul(long, long);
	Scaleform::Render::Point<long> & Mul(long);
	Scaleform::Render::Point<long> & Mul(const Scaleform::Render::Point<long> &);
	Scaleform::Render::Point<long> & Div(long, long);
	Scaleform::Render::Point<long> & Div(long);
	Scaleform::Render::Point<long> & Div(const Scaleform::Render::Point<long> &);
	long Dot(const Scaleform::Render::Point<long> &);
	long Dot(long, long);
	long Angle(const Scaleform::Render::Point<long> &);
	long Angle(long, long);
	long DistanceSquared();
	long DistanceSquared(const Scaleform::Render::Point<long> &);
	long DistanceSquared(long, long);
	long Distance();
	long Distance(const Scaleform::Render::Point<long> &);
	long Distance(long, long);
	long DistanceL1(const Scaleform::Render::Point<long> &);
	long DistanceL1(long, long);
	long DistanceLn(const Scaleform::Render::Point<long> &);
	long DistanceLn(long, long);
	void Clamp(long, long);
	void ClampMin(long);
	void ClampMax(long);
	Scaleform::Render::Point<long> & Absolute();
	bool BitwiseEqual(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Point<long> & operator=(Scaleform::Render::Point<long>::BoundsType);
	const Scaleform::Render::Point<long> & operator=(long);
	const Scaleform::Render::Point<long> & operator=(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Point<long> operator-(long);
	const Scaleform::Render::Point<long> operator-(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Point<long> operator-(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Point<long> operator-();
	const Scaleform::Render::Point<long> & operator+=(long);
	const Scaleform::Render::Point<long> & operator+=(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Point<long> & operator+=(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Point<long> & operator-=(long);
	const Scaleform::Render::Point<long> & operator-=(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Point<long> & operator-=(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Point<long> & operator*=(long);
	const Scaleform::Render::Point<long> & operator*=(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Point<long> & operator/=(long);
	const Scaleform::Render::Point<long> & operator/=(const Scaleform::Render::Point<long> &);
	bool operator==(const Scaleform::Render::Point<long> &);
	bool operator!=(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Point<long> operator+(long);
	const Scaleform::Render::Point<long> operator+(const Scaleform::Render::Size<long> &);
	const Scaleform::Render::Point<long> operator+(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Point<long> operator*(long);
	const Scaleform::Render::Point<long> operator*(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Point<long> operator/(long);
	const Scaleform::Render::Point<long> operator/(const Scaleform::Render::Point<long> &);
};
class Scaleform::Render::Rect<long> :
	Scaleform::Render::RectData<long>
{
	enum NoInitType
	{
		NoInit = 0,
	};
	enum BoundsType
	{
		Min = 0,
		Max = 1,
	};
public:
	Rect<long>(Scaleform::Render::Rect<long>::BoundsType);
	Rect<long>(long, long, long, long);
	Rect<long>(long, long, const Scaleform::Render::Size<long> &);
	Rect<long>(const Scaleform::Render::Point<long> &, const Scaleform::Render::Size<long> &);
	Rect<long>(const Scaleform::Render::Point<long> &, const Scaleform::Render::Point<long> &);
	Rect<long>(long, long);
	Rect<long>(const Scaleform::Render::Size<long> &);
	Rect<long>(const Scaleform::Render::Rect<long> &);
	Rect<long>(long);
	Rect<long>(Scaleform::Render::Rect<long>::NoInitType);
	Rect<long>();
	void SetRect(Scaleform::Render::Rect<long>::BoundsType);
	void SetRect(const Scaleform::Render::Point<long> &, const Scaleform::Render::Size<long> &);
	void SetRect(long, long, const Scaleform::Render::Size<long> &);
	void SetRect(const Scaleform::Render::Point<long> &, const Scaleform::Render::Point<long> &);
	void SetRect(const Scaleform::Render::Rect<long> &);
	void SetRect(long, long);
	void SetRect(const Scaleform::Render::Size<long> &);
	void SetRect(long, long, long, long);
	Scaleform::Render::Rect<long> & SetLerp(const Scaleform::Render::Rect<long> &, const Scaleform::Render::Rect<long> &, long);
	void Clear();
	void Swap(Scaleform::Render::Rect<long> *);
	Scaleform::Render::Rect<long> & FromRectPS(const Scaleform::Render::Rect<long> *);
	void ToRectPS(Scaleform::Render::Rect<long> *);
	bool IsNull();
	bool IsEmpty();
	bool IsNormal();
	long X1();
	long Y1();
	long X2();
	long Y2();
	Scaleform::Render::Point<long> TopLeft();
	Scaleform::Render::Point<long> TopRight();
	Scaleform::Render::Point<long> BottomLeft();
	Scaleform::Render::Point<long> BottomRight();
	void SetTopLeft(const Scaleform::Render::Point<long> &);
	void SetTopRight(const Scaleform::Render::Point<long> &);
	void SetBottomLeft(const Scaleform::Render::Point<long> &);
	void SetBottomRight(const Scaleform::Render::Point<long> &);
	Scaleform::Render::Rect<long> TopSide(long);
	Scaleform::Render::Rect<long> BottomSide(long);
	Scaleform::Render::Rect<long> LeftSide(long);
	Scaleform::Render::Rect<long> RightSide(long);
	Scaleform::Render::Point<long> Center();
	long HCenter();
	long VCenter();
	void SetCenter(long, long);
	void SetCenter(const Scaleform::Render::Point<long> &);
	void SetHCenter(long);
	void SetVCenter(long);
	long Width();
	long Height();
	long CheckedWidth();
	long CheckedHeight();
	Scaleform::Render::Size<long> GetSize();
	Scaleform::Render::Size<long> CheckedSize();
	void SetSize(const Scaleform::Render::Size<long> &);
	void SetSize(long, long);
	void SetWidth(long);
	void SetHeight(long);
	long Area();
	void SetHRange(long, long);
	void SetVRange(long, long);
	Scaleform::Render::Rect<long> & Offset(const Scaleform::Render::Point<long> &);
	Scaleform::Render::Rect<long> & Offset(long, long);
	Scaleform::Render::Rect<long> & OffsetX(long);
	Scaleform::Render::Rect<long> & OffsetY(long);
	Scaleform::Render::Rect<long> & Expand(long, long);
	Scaleform::Render::Rect<long> & Expand(long);
	Scaleform::Render::Rect<long> & Expand(long, long, long, long);
	Scaleform::Render::Rect<long> & HExpand(long, long);
	Scaleform::Render::Rect<long> & HExpand(long);
	Scaleform::Render::Rect<long> & VExpand(long, long);
	Scaleform::Render::Rect<long> & VExpand(long);
	Scaleform::Render::Rect<long> & ExpandToPoint(long, long);
	Scaleform::Render::Rect<long> & ExpandToPoint(const Scaleform::Render::Point<long> &);
	Scaleform::Render::Rect<long> & Contract(long, long);
	Scaleform::Render::Rect<long> & Contract(long);
	Scaleform::Render::Rect<long> & Contract(long, long, long, long);
	Scaleform::Render::Rect<long> & HContract(long, long);
	Scaleform::Render::Rect<long> & HContract(long);
	Scaleform::Render::Rect<long> & VContract(long, long);
	Scaleform::Render::Rect<long> & VContract(long);
	Scaleform::Render::Rect<long> & Clamp(long, long, long, long);
	Scaleform::Render::Rect<long> & Clamp(const Scaleform::Render::Rect<long> &);
	Scaleform::Render::Rect<long> & HClamp(const Scaleform::Render::Rect<long> &);
	Scaleform::Render::Rect<long> & HClamp(long, long);
	Scaleform::Render::Rect<long> & VClamp(const Scaleform::Render::Rect<long> &);
	Scaleform::Render::Rect<long> & VClamp(long, long);
	Scaleform::Render::Rect<long> & Union(const Scaleform::Render::Rect<long> &);
	Scaleform::Render::Rect<long> & Union(long, long, long, long);
	Scaleform::Render::Rect<long> & Intersect(const Scaleform::Render::Rect<long> &);
	Scaleform::Render::Rect<long> & Intersect(long, long, long, long);
	void Normalize();
	void NormalizeX();
	void NormalizeY();
	Scaleform::Render::Rect<long> Normal();
	bool Contains(const Scaleform::Render::Rect<long> &);
	bool Contains(const Scaleform::Render::Point<long> &);
	bool Contains(long, long);
	bool Intersects(const Scaleform::Render::Rect<long> &);
	bool IntersectsEdge(const Scaleform::Render::Rect<long> &, long, long, long, long);
	bool IntersectsEdge(const Scaleform::Render::Rect<long> &, long);
	Scaleform::Render::Point<long> ClampPoint(const Scaleform::Render::Point<long> &);
	bool IntersectRect(Scaleform::Render::Rect<long> *, const Scaleform::Render::Rect<long> &);
	void UnionRect(Scaleform::Render::Rect<long> *, const Scaleform::Render::Rect<long> &);
	const Scaleform::Render::Rect<long> & operator=(Scaleform::Render::Rect<long>::BoundsType);
	const Scaleform::Render::Rect<long> & operator=(const Scaleform::Render::Rect<long> &);
	const Scaleform::Render::Rect<long> & operator+=(long);
	const Scaleform::Render::Rect<long> & operator+=(const Scaleform::Render::Point<long> &);
	Scaleform::Render::Rect<long> & operator-=(long);
	Scaleform::Render::Rect<long> & operator-=(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Rect<long> & operator|=(const Scaleform::Render::Rect<long> &);
	const Scaleform::Render::Rect<long> & operator&=(const Scaleform::Render::Rect<long> &);
	bool operator==(const Scaleform::Render::Rect<long> &);
	bool operator!=(const Scaleform::Render::Rect<long> &);
	const Scaleform::Render::Rect<long> operator-(long);
	const Scaleform::Render::Rect<long> operator-(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Rect<long> operator-();
	const Scaleform::Render::Rect<long> operator+(const Scaleform::Render::Rect<long> &);
	const Scaleform::Render::Rect<long> operator+(long);
	const Scaleform::Render::Rect<long> operator+(const Scaleform::Render::Point<long> &);
	const Scaleform::Render::Rect<long> operator|(const Scaleform::Render::Rect<long> &);
	const Scaleform::Render::Rect<long> operator&(const Scaleform::Render::Rect<long> &);
};
Scaleform::Render::ImageBase::ImageType Scaleform::Render::DrawableImage::GetImageType(); // 0x1406F7470
Scaleform::Render::ImageFormat Scaleform::Render::DrawableImage::GetFormat(); // 0x14032DD10
unsigned long Scaleform::Render::DICommand_ApplyFilter::GetCPUCaps(); // 0x1400470F0
Scaleform::Render::Size<unsigned long> Scaleform::Render::DrawableImage::GetSize(); // 0x14032E120
unsigned long Scaleform::Render::DICommand_Clear::GetCPUCaps(); // 0x1400482A0
Scaleform::Render::Image * Scaleform::Render::DrawableImage::GetAsImage(); // 0x14004EB00
class Scaleform::Ptr<Scaleform::Render::DrawableImage>
{
protected:
	Scaleform::Render::DrawableImage * pObject; // 0x0
public:
	Ptr<Scaleform::Render::DrawableImage>(const Scaleform::Ptr<Scaleform::Render::DrawableImage> &);
	Ptr<Scaleform::Render::DrawableImage>(Scaleform::Render::DrawableImage *);
	Ptr<Scaleform::Render::DrawableImage>(Scaleform::Ptr<Scaleform::Render::DrawableImage> &, Scaleform::PickType);
	Ptr<Scaleform::Render::DrawableImage>(Scaleform::Pickable<Scaleform::Render::DrawableImage>);
	Ptr<Scaleform::Render::DrawableImage>(Scaleform::Render::DrawableImage &);
	Ptr<Scaleform::Render::DrawableImage>();
	~Ptr<Scaleform::Render::DrawableImage>();
	bool operator==(Scaleform::Render::DrawableImage *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::DrawableImage> &);
	bool operator!=(Scaleform::Render::DrawableImage *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::DrawableImage> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::DrawableImage> &);
	Scaleform::Ptr<Scaleform::Render::DrawableImage> & operator=(Scaleform::Pickable<Scaleform::Render::DrawableImage>);
	const Scaleform::Ptr<Scaleform::Render::DrawableImage> & operator=(Scaleform::Render::DrawableImage &);
	const Scaleform::Ptr<Scaleform::Render::DrawableImage> & operator=(Scaleform::Render::DrawableImage *);
	const Scaleform::Ptr<Scaleform::Render::DrawableImage> & operator=(const Scaleform::Ptr<Scaleform::Render::DrawableImage> &);
	Scaleform::Ptr<Scaleform::Render::DrawableImage> & SetPtr(Scaleform::Pickable<Scaleform::Render::DrawableImage>);
	Scaleform::Ptr<Scaleform::Render::DrawableImage> & SetPtr(Scaleform::Render::DrawableImage &);
	Scaleform::Ptr<Scaleform::Render::DrawableImage> & SetPtr(Scaleform::Render::DrawableImage *);
	Scaleform::Ptr<Scaleform::Render::DrawableImage> & SetPtr(const Scaleform::Ptr<Scaleform::Render::DrawableImage> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::DrawableImage * & GetRawRef();
	Scaleform::Render::DrawableImage * GetPtr();
	Scaleform::Render::DrawableImage & operator*();
	Scaleform::Render::DrawableImage * operator->();
	Scaleform::Render::DrawableImage * operator class Scaleform::Render::DrawableImage *();
	Scaleform::Ptr<Scaleform::Render::DrawableImage> & Pick(Scaleform::Render::DrawableImage *);
	Scaleform::Ptr<Scaleform::Render::DrawableImage> & Pick(Scaleform::Pickable<Scaleform::Render::DrawableImage>);
	Scaleform::Ptr<Scaleform::Render::DrawableImage> & Pick(Scaleform::Ptr<Scaleform::Render::DrawableImage> &);
};
class Scaleform::Ptr<Scaleform::Render::ImageBase>
{
protected:
	Scaleform::Render::ImageBase * pObject; // 0x0
public:
	Ptr<Scaleform::Render::ImageBase>(const Scaleform::Ptr<Scaleform::Render::ImageBase> &);
	Ptr<Scaleform::Render::ImageBase>(Scaleform::Render::ImageBase *);
	Ptr<Scaleform::Render::ImageBase>(Scaleform::Ptr<Scaleform::Render::ImageBase> &, Scaleform::PickType);
	Ptr<Scaleform::Render::ImageBase>(Scaleform::Pickable<Scaleform::Render::ImageBase>);
	Ptr<Scaleform::Render::ImageBase>(Scaleform::Render::ImageBase &);
	Ptr<Scaleform::Render::ImageBase>();
	~Ptr<Scaleform::Render::ImageBase>();
	bool operator==(Scaleform::Render::ImageBase *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::ImageBase> &);
	bool operator!=(Scaleform::Render::ImageBase *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::ImageBase> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::ImageBase> &);
	Scaleform::Ptr<Scaleform::Render::ImageBase> & operator=(Scaleform::Pickable<Scaleform::Render::ImageBase>);
	const Scaleform::Ptr<Scaleform::Render::ImageBase> & operator=(Scaleform::Render::ImageBase &);
	const Scaleform::Ptr<Scaleform::Render::ImageBase> & operator=(Scaleform::Render::ImageBase *);
	const Scaleform::Ptr<Scaleform::Render::ImageBase> & operator=(const Scaleform::Ptr<Scaleform::Render::ImageBase> &);
	Scaleform::Ptr<Scaleform::Render::ImageBase> & SetPtr(Scaleform::Pickable<Scaleform::Render::ImageBase>);
	Scaleform::Ptr<Scaleform::Render::ImageBase> & SetPtr(Scaleform::Render::ImageBase &);
	Scaleform::Ptr<Scaleform::Render::ImageBase> & SetPtr(Scaleform::Render::ImageBase *);
	Scaleform::Ptr<Scaleform::Render::ImageBase> & SetPtr(const Scaleform::Ptr<Scaleform::Render::ImageBase> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::ImageBase * & GetRawRef();
	Scaleform::Render::ImageBase * GetPtr();
	Scaleform::Render::ImageBase & operator*();
	Scaleform::Render::ImageBase * operator->();
	Scaleform::Render::ImageBase * operator class Scaleform::Render::ImageBase *();
	Scaleform::Ptr<Scaleform::Render::ImageBase> & Pick(Scaleform::Render::ImageBase *);
	Scaleform::Ptr<Scaleform::Render::ImageBase> & Pick(Scaleform::Pickable<Scaleform::Render::ImageBase>);
	Scaleform::Ptr<Scaleform::Render::ImageBase> & Pick(Scaleform::Ptr<Scaleform::Render::ImageBase> &);
};
class Scaleform::Ptr<Scaleform::Render::DrawableImageContext>
{
protected:
	Scaleform::Render::DrawableImageContext * pObject; // 0x0
public:
	Ptr<Scaleform::Render::DrawableImageContext>(const Scaleform::Ptr<Scaleform::Render::DrawableImageContext> &);
	Ptr<Scaleform::Render::DrawableImageContext>(Scaleform::Render::DrawableImageContext *);
	Ptr<Scaleform::Render::DrawableImageContext>(Scaleform::Ptr<Scaleform::Render::DrawableImageContext> &, Scaleform::PickType);
	Ptr<Scaleform::Render::DrawableImageContext>(Scaleform::Pickable<Scaleform::Render::DrawableImageContext>);
	Ptr<Scaleform::Render::DrawableImageContext>(Scaleform::Render::DrawableImageContext &);
	Ptr<Scaleform::Render::DrawableImageContext>();
	~Ptr<Scaleform::Render::DrawableImageContext>();
	bool operator==(Scaleform::Render::DrawableImageContext *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::DrawableImageContext> &);
	bool operator!=(Scaleform::Render::DrawableImageContext *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::DrawableImageContext> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::DrawableImageContext> &);
	Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & operator=(Scaleform::Pickable<Scaleform::Render::DrawableImageContext>);
	const Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & operator=(Scaleform::Render::DrawableImageContext &);
	const Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & operator=(Scaleform::Render::DrawableImageContext *);
	const Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & operator=(const Scaleform::Ptr<Scaleform::Render::DrawableImageContext> &);
	Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & SetPtr(Scaleform::Pickable<Scaleform::Render::DrawableImageContext>);
	Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & SetPtr(Scaleform::Render::DrawableImageContext &);
	Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & SetPtr(Scaleform::Render::DrawableImageContext *);
	Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & SetPtr(const Scaleform::Ptr<Scaleform::Render::DrawableImageContext> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::DrawableImageContext * & GetRawRef();
	Scaleform::Render::DrawableImageContext * GetPtr();
	Scaleform::Render::DrawableImageContext & operator*();
	Scaleform::Render::DrawableImageContext * operator->();
	Scaleform::Render::DrawableImageContext * operator class Scaleform::Render::DrawableImageContext *();
	Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & Pick(Scaleform::Render::DrawableImageContext *);
	Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & Pick(Scaleform::Pickable<Scaleform::Render::DrawableImageContext>);
	Scaleform::Ptr<Scaleform::Render::DrawableImageContext> & Pick(Scaleform::Ptr<Scaleform::Render::DrawableImageContext> &);
};
class Scaleform::Ptr<Scaleform::Render::RenderTarget>
{
protected:
	Scaleform::Render::RenderTarget * pObject; // 0x0
public:
	Ptr<Scaleform::Render::RenderTarget>(const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	Ptr<Scaleform::Render::RenderTarget>(Scaleform::Render::RenderTarget *);
	Ptr<Scaleform::Render::RenderTarget>(Scaleform::Ptr<Scaleform::Render::RenderTarget> &, Scaleform::PickType);
	Ptr<Scaleform::Render::RenderTarget>(Scaleform::Pickable<Scaleform::Render::RenderTarget>);
	Ptr<Scaleform::Render::RenderTarget>(Scaleform::Render::RenderTarget &);
	Ptr<Scaleform::Render::RenderTarget>();
	~Ptr<Scaleform::Render::RenderTarget>();
	bool operator==(Scaleform::Render::RenderTarget *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	bool operator!=(Scaleform::Render::RenderTarget *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & operator=(Scaleform::Pickable<Scaleform::Render::RenderTarget>);
	const Scaleform::Ptr<Scaleform::Render::RenderTarget> & operator=(Scaleform::Render::RenderTarget &);
	const Scaleform::Ptr<Scaleform::Render::RenderTarget> & operator=(Scaleform::Render::RenderTarget *);
	const Scaleform::Ptr<Scaleform::Render::RenderTarget> & operator=(const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & SetPtr(Scaleform::Pickable<Scaleform::Render::RenderTarget>);
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & SetPtr(Scaleform::Render::RenderTarget &);
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & SetPtr(Scaleform::Render::RenderTarget *);
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & SetPtr(const Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::RenderTarget * & GetRawRef();
	Scaleform::Render::RenderTarget * GetPtr();
	Scaleform::Render::RenderTarget & operator*();
	Scaleform::Render::RenderTarget * operator->();
	Scaleform::Render::RenderTarget * operator class Scaleform::Render::RenderTarget *();
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & Pick(Scaleform::Render::RenderTarget *);
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & Pick(Scaleform::Pickable<Scaleform::Render::RenderTarget>);
	Scaleform::Ptr<Scaleform::Render::RenderTarget> & Pick(Scaleform::Ptr<Scaleform::Render::RenderTarget> &);
};
class Scaleform::Render::DIPixelProvider
{
public:
	~DIPixelProvider();
	unsigned long long GetLength();
	unsigned long ReadNextPixel();
	void WriteNextPixel(unsigned long);
	DIPixelProvider(const Scaleform::Render::DIPixelProvider &);
	DIPixelProvider();
	Scaleform::Render::DIPixelProvider & operator=(const Scaleform::Render::DIPixelProvider &);
};