#pragma once

enum Scaleform::Render::RenderBufferType
{
	RBuffer_None = 0,
	RBuffer_Default = 1,
	RBuffer_User = 2,
	RBuffer_Temporary = 3,
	RBuffer_Texture = 4,
	RBuffer_DepthStencil = 5,
	RBuffer_UserDepthStencil = 6,
};
class Scaleform::Render::RenderTargetData :
	Scaleform::NewOverrideBase<72>
{
public:
	Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> pDepthStencilBuffer; // 0x8
	unsigned long long CacheID; // 0x10
	RenderTargetData(const Scaleform::Render::RenderTargetData &);
	RenderTargetData(Scaleform::Render::RenderBuffer *, Scaleform::Render::DepthStencilBuffer *);
	~RenderTargetData();
	void StripDepthStencilTarget();
	bool ReplaceDepthStencilBuffer(Scaleform::Render::DepthStencilBuffer *);
protected:
	Scaleform::Render::RenderBuffer * pBuffer; // 0x18
public:
	Scaleform::Render::RenderTargetData & operator=(const Scaleform::Render::RenderTargetData &);
};
class Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer>
{
protected:
	Scaleform::Render::DepthStencilBuffer * pObject; // 0x0
public:
	Ptr<Scaleform::Render::DepthStencilBuffer>(const Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> &);
	Ptr<Scaleform::Render::DepthStencilBuffer>(Scaleform::Render::DepthStencilBuffer *);
	Ptr<Scaleform::Render::DepthStencilBuffer>(Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> &, Scaleform::PickType);
	Ptr<Scaleform::Render::DepthStencilBuffer>(Scaleform::Pickable<Scaleform::Render::DepthStencilBuffer>);
	Ptr<Scaleform::Render::DepthStencilBuffer>(Scaleform::Render::DepthStencilBuffer &);
	Ptr<Scaleform::Render::DepthStencilBuffer>();
	~Ptr<Scaleform::Render::DepthStencilBuffer>();
	bool operator==(Scaleform::Render::DepthStencilBuffer *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> &);
	bool operator!=(Scaleform::Render::DepthStencilBuffer *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> &);
	Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & operator=(Scaleform::Pickable<Scaleform::Render::DepthStencilBuffer>);
	const Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & operator=(Scaleform::Render::DepthStencilBuffer &);
	const Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & operator=(Scaleform::Render::DepthStencilBuffer *);
	const Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & operator=(const Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> &);
	Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & SetPtr(Scaleform::Pickable<Scaleform::Render::DepthStencilBuffer>);
	Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & SetPtr(Scaleform::Render::DepthStencilBuffer &);
	Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & SetPtr(Scaleform::Render::DepthStencilBuffer *);
	Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & SetPtr(const Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::DepthStencilBuffer * & GetRawRef();
	Scaleform::Render::DepthStencilBuffer * GetPtr();
	Scaleform::Render::DepthStencilBuffer & operator*();
	Scaleform::Render::DepthStencilBuffer * operator->();
	Scaleform::Render::DepthStencilBuffer * operator class Scaleform::Render::DepthStencilBuffer *();
	Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & Pick(Scaleform::Render::DepthStencilBuffer *);
	Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & Pick(Scaleform::Pickable<Scaleform::Render::DepthStencilBuffer>);
	Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> & Pick(Scaleform::Ptr<Scaleform::Render::DepthStencilBuffer> &);
};
void Scaleform::Render::RenderTargetData::StripDepthStencilTarget(); // 0x1405C3750
bool Scaleform::Render::RenderTargetData::ReplaceDepthStencilBuffer(Scaleform::Render::DepthStencilBuffer * pdsb); // 0x1405C0FA0
class Scaleform::Render::RenderBuffer :
	Scaleform::NewOverrideBase<72>,
	Scaleform::RefCountVImpl,
	Unassignable
{
public:
	RenderBuffer(const Scaleform::Render::RenderBuffer &);
	RenderBuffer(Scaleform::Render::RenderBufferManager *, Scaleform::Render::RenderBufferType, const Scaleform::Render::Size<unsigned long> &);
	virtual ~RenderBuffer();
	virtual void AddRef();
	virtual void Release();
	void SetRenderTargetData(Scaleform::Render::RenderTargetData *);
	Scaleform::Render::RenderTargetData * GetRenderTargetData();
	Scaleform::Render::RenderBufferType GetType();
	const Scaleform::Render::Size<unsigned long> & GetBufferSize();
protected:
	Scaleform::Render::RenderBufferManager * getManager();
	void destroyRenderTargetData();
	const Scaleform::Render::RenderBufferType Type; // 0x14
	Scaleform::Render::RenderBufferManager * pManager; // 0x18
	Scaleform::Render::RenderTargetData * pRenderTargetData; // 0x20
	Scaleform::Render::Size<unsigned long> BufferSize; // 0x28
};
void Scaleform::Render::RenderBuffer::AddRef(); // 0x14027E270
void Scaleform::Render::RenderBuffer::Release(); // 0x14027E280
enum Scaleform::Render::RenderTargetStatus
{
	RTS_InUse = 0,
	RTS_Available = 1,
	RTS_Unresolved = 2,
	RTS_Lost = 3,
};
enum Scaleform::Render::RenderTargetUse
{
	RTUse_Unused = 0,
	RTUse_InUse = 1,
	RTUse_Unused_Cacheable = 2,
};
class Scaleform::Render::RenderTarget :
	Scaleform::Render::RenderBuffer
{
public:
	RenderTarget(Scaleform::Render::RenderTarget &);
	RenderTarget(const Scaleform::Render::RenderTarget &);
	RenderTarget(Scaleform::Render::RenderBufferManager *, Scaleform::Render::RenderBufferType, const Scaleform::Render::Size<unsigned long> &);
	const Scaleform::Render::Rect<int> & GetRect();
	void SetRect(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Size<unsigned long> GetSize();
	Scaleform::Render::Texture * GetTexture();
	Scaleform::Render::RenderTargetStatus GetStatus();
	void SetInUse(Scaleform::Render::RenderTargetUse);
protected:
	Scaleform::Render::Rect<int> ViewRect; // 0x30
public:
	virtual ~RenderTarget();
};
class Scaleform::Render::Rect<int> :
	Scaleform::Render::RectData<int>
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
	Rect<int>(Scaleform::Render::Rect<int>::BoundsType);
	Rect<int>(long, long, long, long);
	Rect<int>(long, long, const Scaleform::Render::Size<int> &);
	Rect<int>(const Scaleform::Render::Point<int> &, const Scaleform::Render::Size<int> &);
	Rect<int>(const Scaleform::Render::Point<int> &, const Scaleform::Render::Point<int> &);
	Rect<int>(long, long);
	Rect<int>(const Scaleform::Render::Size<int> &);
	Rect<int>(const Scaleform::Render::Rect<int> &);
	Rect<int>(long);
	Rect<int>(Scaleform::Render::Rect<int>::NoInitType);
	Rect<int>();
	void SetRect(Scaleform::Render::Rect<int>::BoundsType);
	void SetRect(const Scaleform::Render::Point<int> &, const Scaleform::Render::Size<int> &);
	void SetRect(long, long, const Scaleform::Render::Size<int> &);
	void SetRect(const Scaleform::Render::Point<int> &, const Scaleform::Render::Point<int> &);
	void SetRect(const Scaleform::Render::Rect<int> &);
	void SetRect(long, long);
	void SetRect(const Scaleform::Render::Size<int> &);
	void SetRect(long, long, long, long);
	Scaleform::Render::Rect<int> & SetLerp(const Scaleform::Render::Rect<int> &, const Scaleform::Render::Rect<int> &, long);
	void Clear();
	void Swap(Scaleform::Render::Rect<int> *);
	Scaleform::Render::Rect<int> & FromRectPS(const Scaleform::Render::Rect<int> *);
	void ToRectPS(Scaleform::Render::Rect<int> *);
	bool IsNull();
	bool IsEmpty();
	bool IsNormal();
	long X1();
	long Y1();
	long X2();
	long Y2();
	Scaleform::Render::Point<int> TopLeft();
	Scaleform::Render::Point<int> TopRight();
	Scaleform::Render::Point<int> BottomLeft();
	Scaleform::Render::Point<int> BottomRight();
	void SetTopLeft(const Scaleform::Render::Point<int> &);
	void SetTopRight(const Scaleform::Render::Point<int> &);
	void SetBottomLeft(const Scaleform::Render::Point<int> &);
	void SetBottomRight(const Scaleform::Render::Point<int> &);
	Scaleform::Render::Rect<int> TopSide(long);
	Scaleform::Render::Rect<int> BottomSide(long);
	Scaleform::Render::Rect<int> LeftSide(long);
	Scaleform::Render::Rect<int> RightSide(long);
	Scaleform::Render::Point<int> Center();
	long HCenter();
	long VCenter();
	void SetCenter(long, long);
	void SetCenter(const Scaleform::Render::Point<int> &);
	void SetHCenter(long);
	void SetVCenter(long);
	long Width();
	long Height();
	long CheckedWidth();
	long CheckedHeight();
	Scaleform::Render::Size<int> GetSize();
	Scaleform::Render::Size<int> CheckedSize();
	void SetSize(const Scaleform::Render::Size<int> &);
	void SetSize(long, long);
	void SetWidth(long);
	void SetHeight(long);
	long Area();
	void SetHRange(long, long);
	void SetVRange(long, long);
	Scaleform::Render::Rect<int> & Offset(const Scaleform::Render::Point<int> &);
	Scaleform::Render::Rect<int> & Offset(long, long);
	Scaleform::Render::Rect<int> & OffsetX(long);
	Scaleform::Render::Rect<int> & OffsetY(long);
	Scaleform::Render::Rect<int> & Expand(long, long);
	Scaleform::Render::Rect<int> & Expand(long);
	Scaleform::Render::Rect<int> & Expand(long, long, long, long);
	Scaleform::Render::Rect<int> & HExpand(long, long);
	Scaleform::Render::Rect<int> & HExpand(long);
	Scaleform::Render::Rect<int> & VExpand(long, long);
	Scaleform::Render::Rect<int> & VExpand(long);
	Scaleform::Render::Rect<int> & ExpandToPoint(long, long);
	Scaleform::Render::Rect<int> & ExpandToPoint(const Scaleform::Render::Point<int> &);
	Scaleform::Render::Rect<int> & Contract(long, long);
	Scaleform::Render::Rect<int> & Contract(long);
	Scaleform::Render::Rect<int> & Contract(long, long, long, long);
	Scaleform::Render::Rect<int> & HContract(long, long);
	Scaleform::Render::Rect<int> & HContract(long);
	Scaleform::Render::Rect<int> & VContract(long, long);
	Scaleform::Render::Rect<int> & VContract(long);
	Scaleform::Render::Rect<int> & Clamp(long, long, long, long);
	Scaleform::Render::Rect<int> & Clamp(const Scaleform::Render::Rect<int> &);
	Scaleform::Render::Rect<int> & HClamp(const Scaleform::Render::Rect<int> &);
	Scaleform::Render::Rect<int> & HClamp(long, long);
	Scaleform::Render::Rect<int> & VClamp(const Scaleform::Render::Rect<int> &);
	Scaleform::Render::Rect<int> & VClamp(long, long);
	Scaleform::Render::Rect<int> & Union(const Scaleform::Render::Rect<int> &);
	Scaleform::Render::Rect<int> & Union(long, long, long, long);
	Scaleform::Render::Rect<int> & Intersect(const Scaleform::Render::Rect<int> &);
	Scaleform::Render::Rect<int> & Intersect(long, long, long, long);
	void Normalize();
	void NormalizeX();
	void NormalizeY();
	Scaleform::Render::Rect<int> Normal();
	bool Contains(const Scaleform::Render::Rect<int> &);
	bool Contains(const Scaleform::Render::Point<int> &);
	bool Contains(long, long);
	bool Intersects(const Scaleform::Render::Rect<int> &);
	bool IntersectsEdge(const Scaleform::Render::Rect<int> &, long, long, long, long);
	bool IntersectsEdge(const Scaleform::Render::Rect<int> &, long);
	Scaleform::Render::Point<int> ClampPoint(const Scaleform::Render::Point<int> &);
	bool IntersectRect(Scaleform::Render::Rect<int> *, const Scaleform::Render::Rect<int> &);
	void UnionRect(Scaleform::Render::Rect<int> *, const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> & operator=(Scaleform::Render::Rect<int>::BoundsType);
	const Scaleform::Render::Rect<int> & operator=(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> & operator+=(long);
	const Scaleform::Render::Rect<int> & operator+=(const Scaleform::Render::Point<int> &);
	Scaleform::Render::Rect<int> & operator-=(long);
	Scaleform::Render::Rect<int> & operator-=(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Rect<int> & operator|=(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> & operator&=(const Scaleform::Render::Rect<int> &);
	bool operator==(const Scaleform::Render::Rect<int> &);
	bool operator!=(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> operator-(long);
	const Scaleform::Render::Rect<int> operator-(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Rect<int> operator-();
	const Scaleform::Render::Rect<int> operator+(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> operator+(long);
	const Scaleform::Render::Rect<int> operator+(const Scaleform::Render::Point<int> &);
	const Scaleform::Render::Rect<int> operator|(const Scaleform::Render::Rect<int> &);
	const Scaleform::Render::Rect<int> operator&(const Scaleform::Render::Rect<int> &);
};
Scaleform::Render::Texture * Scaleform::Render::RenderTarget::GetTexture(); // 0x1400470F0
Scaleform::Render::RenderTargetStatus Scaleform::Render::RenderTarget::GetStatus(); // 0x1400BBAA0
void Scaleform::Render::RenderTarget::SetInUse(Scaleform::Render::RenderTargetUse inUse); // 0x14002E7C0
class Scaleform::Render::DepthStencilBuffer :
	Scaleform::Render::RenderBuffer
{
public:
	DepthStencilBuffer(const Scaleform::Render::DepthStencilBuffer &);
	DepthStencilBuffer(Scaleform::Render::DepthStencilSurface *);
	DepthStencilBuffer(Scaleform::Render::RenderBufferManager *, const Scaleform::Render::Size<unsigned long> &, bool);
	virtual ~DepthStencilBuffer();
	Scaleform::Render::DepthStencilSurface * GetSurface();
protected:
	void initSurface(Scaleform::Render::DepthStencilSurface *);
	Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> pSurface; // 0x30
};
Scaleform::Render::DepthStencilSurface * Scaleform::Render::DepthStencilBuffer::GetSurface(); // 0x1406B4B30
void Scaleform::Render::DepthStencilBuffer::initSurface(Scaleform::Render::DepthStencilSurface * surface); // 0x1406FC110
class Scaleform::Ptr<Scaleform::Render::DepthStencilSurface>
{
protected:
	Scaleform::Render::DepthStencilSurface * pObject; // 0x0
public:
	Ptr<Scaleform::Render::DepthStencilSurface>(const Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> &);
	Ptr<Scaleform::Render::DepthStencilSurface>(Scaleform::Render::DepthStencilSurface *);
	Ptr<Scaleform::Render::DepthStencilSurface>(Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> &, Scaleform::PickType);
	Ptr<Scaleform::Render::DepthStencilSurface>(Scaleform::Pickable<Scaleform::Render::DepthStencilSurface>);
	Ptr<Scaleform::Render::DepthStencilSurface>(Scaleform::Render::DepthStencilSurface &);
	Ptr<Scaleform::Render::DepthStencilSurface>();
	~Ptr<Scaleform::Render::DepthStencilSurface>();
	bool operator==(Scaleform::Render::DepthStencilSurface *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> &);
	bool operator!=(Scaleform::Render::DepthStencilSurface *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> &);
	Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & operator=(Scaleform::Pickable<Scaleform::Render::DepthStencilSurface>);
	const Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & operator=(Scaleform::Render::DepthStencilSurface &);
	const Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & operator=(Scaleform::Render::DepthStencilSurface *);
	const Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & operator=(const Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> &);
	Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & SetPtr(Scaleform::Pickable<Scaleform::Render::DepthStencilSurface>);
	Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & SetPtr(Scaleform::Render::DepthStencilSurface &);
	Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & SetPtr(Scaleform::Render::DepthStencilSurface *);
	Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & SetPtr(const Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::DepthStencilSurface * & GetRawRef();
	Scaleform::Render::DepthStencilSurface * GetPtr();
	Scaleform::Render::DepthStencilSurface & operator*();
	Scaleform::Render::DepthStencilSurface * operator->();
	Scaleform::Render::DepthStencilSurface * operator class Scaleform::Render::DepthStencilSurface *();
	Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & Pick(Scaleform::Render::DepthStencilSurface *);
	Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & Pick(Scaleform::Pickable<Scaleform::Render::DepthStencilSurface>);
	Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> & Pick(Scaleform::Ptr<Scaleform::Render::DepthStencilSurface> &);
};
class Scaleform::RefCountBase<Scaleform::Render::RenderBufferManager,72> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 72,
	};
public:
	RefCountBase<Scaleform::Render::RenderBufferManager,72>(Scaleform::RefCountBase<Scaleform::Render::RenderBufferManager,72> &);
	RefCountBase<Scaleform::Render::RenderBufferManager,72>(const Scaleform::RefCountBase<Scaleform::Render::RenderBufferManager,72> &);
	RefCountBase<Scaleform::Render::RenderBufferManager,72>();
	virtual ~RefCountBase<Scaleform::Render::RenderBufferManager,72>();
	Scaleform::RefCountBase<Scaleform::Render::RenderBufferManager,72> & operator=(Scaleform::RefCountBase<Scaleform::Render::RenderBufferManager,72> &);
	Scaleform::RefCountBase<Scaleform::Render::RenderBufferManager,72> & operator=(const Scaleform::RefCountBase<Scaleform::Render::RenderBufferManager,72> &);
};
class Scaleform::Render::RenderBufferManager :
	Scaleform::RefCountBase<Scaleform::Render::RenderBufferManager,72>
{
public:
	virtual ~RenderBufferManager();
	bool Initialize(Scaleform::Render::TextureManager *);
	void Destroy();
	void EndFrame();
	void Reset();
	Scaleform::Render::RenderTarget * CreateRenderTarget(const Scaleform::Render::Size<unsigned long> &, Scaleform::Render::RenderBufferType, Scaleform::Render::ImageFormat, Scaleform::Render::Texture *);
	Scaleform::Render::RenderTarget * CreateTempRenderTarget(const Scaleform::Render::Size<unsigned long> &);
	Scaleform::Render::DepthStencilBuffer * CreateDepthStencilBuffer(const Scaleform::Render::Size<unsigned long> &, bool);
	RenderBufferManager(const Scaleform::Render::RenderBufferManager &);
	RenderBufferManager();
	Scaleform::Render::RenderBufferManager & operator=(const Scaleform::Render::RenderBufferManager &);
};