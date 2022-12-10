#pragma once

enum Scaleform::Render::HALConfigFlagsType
{
	HALConfig_SoftwareDeferredContext = -2147483648,
	HALConfig_DisableRenderEvents = 1073741824,
	HALConfig_FencePerDrawCall = 536870912,
	HALConfig_DisableFilterScaling = 268435456,
	HALConfig_DisableImplicitSubmit = 134217728,
	HALConfig_DynamicShaderInit = 67108864,
};
enum Scaleform::Render::DisplayPass
{
	Display_Prepass = 1,
	Display_Final = 2,
	Display_All = 3,
};
enum Scaleform::Render::HALNotifyType
{
	HAL_Initialize = 0,
	HAL_Shutdown = 1,
	HAL_PrepareForReset = 2,
	HAL_RestoreAfterReset = 3,
	HAL_FinalPassBegin = 4,
};
struct Scaleform::ListNodeSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify>
{
	ListNodeSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify>();
	Scaleform::Render::HALNotify * GetPrev();
	Scaleform::Render::HALNotify * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::HALNotify *);
	void InsertNodeAfter(Scaleform::Render::HALNotify *);
	void InsertNodeBefore(Scaleform::Render::HALNotify *);
private:
	void RemoveNodeUnsafe();
	void ReplaceNodeWithUnsafe(Scaleform::Render::HALNotify *);
	void InsertNodeAfterUnsafe(Scaleform::Render::HALNotify *);
	void InsertNodeBeforeUnsafe(Scaleform::Render::HALNotify *);
	Scaleform::Render::HALNotify * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::HALNotify * pNext; // 0x8
	void * pVoidNext; // 0x8
};
class Scaleform::Render::HALNotify :
	Scaleform::ListNodeSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify>
{
public:
	HALNotify(const Scaleform::Render::HALNotify &);
	HALNotify();
	~HALNotify();
	void OnHALEvent(Scaleform::Render::HALNotifyType);
	Scaleform::Render::HALNotify & operator=(const Scaleform::Render::HALNotify &);
};
struct Scaleform::Render::HALInitParams
{
	Scaleform::Render::MemoryManager * pMemoryManager; // 0x0
	unsigned long ConfigFlags; // 0x8
	unsigned long RenderThreadId; // 0xC
	Scaleform::Ptr<Scaleform::Render::TextureManager> pTextureManager; // 0x10
	Scaleform::Ptr<Scaleform::Render::RenderBufferManager> pRenderBufferManager; // 0x18
	unsigned long RenderQueueSize; // 0x20
	HALInitParams(Scaleform::Render::HALInitParams &);
	HALInitParams(const Scaleform::Render::HALInitParams &);
	HALInitParams(Scaleform::Render::MemoryManager *, unsigned long, unsigned long);
	~HALInitParams();
	Scaleform::Render::HALInitParams & operator=(Scaleform::Render::HALInitParams &);
	Scaleform::Render::HALInitParams & operator=(const Scaleform::Render::HALInitParams &);
	void __dflt_ctor_closure();
};
class Scaleform::Ptr<Scaleform::Render::TextureManager>
{
protected:
	Scaleform::Render::TextureManager * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TextureManager>(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Render::TextureManager *);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Ptr<Scaleform::Render::TextureManager> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	Ptr<Scaleform::Render::TextureManager>(Scaleform::Render::TextureManager &);
	Ptr<Scaleform::Render::TextureManager>();
	~Ptr<Scaleform::Render::TextureManager>();
	bool operator==(Scaleform::Render::TextureManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	bool operator!=(Scaleform::Render::TextureManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	const Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(Scaleform::Render::TextureManager &);
	const Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(Scaleform::Render::TextureManager *);
	const Scaleform::Ptr<Scaleform::Render::TextureManager> & operator=(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(Scaleform::Render::TextureManager &);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(Scaleform::Render::TextureManager *);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TextureManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TextureManager * & GetRawRef();
	Scaleform::Render::TextureManager * GetPtr();
	Scaleform::Render::TextureManager & operator*();
	Scaleform::Render::TextureManager * operator->();
	Scaleform::Render::TextureManager * operator class Scaleform::Render::TextureManager *();
	Scaleform::Ptr<Scaleform::Render::TextureManager> & Pick(Scaleform::Render::TextureManager *);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & Pick(Scaleform::Pickable<Scaleform::Render::TextureManager>);
	Scaleform::Ptr<Scaleform::Render::TextureManager> & Pick(Scaleform::Ptr<Scaleform::Render::TextureManager> &);
};
class Scaleform::Ptr<Scaleform::Render::RenderBufferManager>
{
protected:
	Scaleform::Render::RenderBufferManager * pObject; // 0x0
public:
	Ptr<Scaleform::Render::RenderBufferManager>(const Scaleform::Ptr<Scaleform::Render::RenderBufferManager> &);
	Ptr<Scaleform::Render::RenderBufferManager>(Scaleform::Render::RenderBufferManager *);
	Ptr<Scaleform::Render::RenderBufferManager>(Scaleform::Ptr<Scaleform::Render::RenderBufferManager> &, Scaleform::PickType);
	Ptr<Scaleform::Render::RenderBufferManager>(Scaleform::Pickable<Scaleform::Render::RenderBufferManager>);
	Ptr<Scaleform::Render::RenderBufferManager>(Scaleform::Render::RenderBufferManager &);
	Ptr<Scaleform::Render::RenderBufferManager>();
	~Ptr<Scaleform::Render::RenderBufferManager>();
	bool operator==(Scaleform::Render::RenderBufferManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::RenderBufferManager> &);
	bool operator!=(Scaleform::Render::RenderBufferManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::RenderBufferManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::RenderBufferManager> &);
	Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & operator=(Scaleform::Pickable<Scaleform::Render::RenderBufferManager>);
	const Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & operator=(Scaleform::Render::RenderBufferManager &);
	const Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & operator=(Scaleform::Render::RenderBufferManager *);
	const Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & operator=(const Scaleform::Ptr<Scaleform::Render::RenderBufferManager> &);
	Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & SetPtr(Scaleform::Pickable<Scaleform::Render::RenderBufferManager>);
	Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & SetPtr(Scaleform::Render::RenderBufferManager &);
	Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & SetPtr(Scaleform::Render::RenderBufferManager *);
	Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & SetPtr(const Scaleform::Ptr<Scaleform::Render::RenderBufferManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::RenderBufferManager * & GetRawRef();
	Scaleform::Render::RenderBufferManager * GetPtr();
	Scaleform::Render::RenderBufferManager & operator*();
	Scaleform::Render::RenderBufferManager * operator->();
	Scaleform::Render::RenderBufferManager * operator class Scaleform::Render::RenderBufferManager *();
	Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & Pick(Scaleform::Render::RenderBufferManager *);
	Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & Pick(Scaleform::Pickable<Scaleform::Render::RenderBufferManager>);
	Scaleform::Ptr<Scaleform::Render::RenderBufferManager> & Pick(Scaleform::Ptr<Scaleform::Render::RenderBufferManager> &);
};
class Scaleform::Render::BeginDisplayData :
	Scaleform::ListNode<Scaleform::Render::BeginDisplayData>
{
public:
	BeginDisplayData(Scaleform::Render::BeginDisplayData &);
	BeginDisplayData(const Scaleform::Render::BeginDisplayData &);
	BeginDisplayData(const Scaleform::Render::Color &, const Scaleform::Render::Viewport &, bool, const Scaleform::Render::Matrix2x4<float> &);
	BeginDisplayData();
	Scaleform::Render::Color BackgroundColor; // 0x10
	Scaleform::Render::Viewport VP; // 0x14
	bool FullSceneBlendTarget; // 0x40
	Scaleform::Render::Matrix2x4<float> ViewMatrix; // 0x50
	Scaleform::Render::BeginDisplayData & operator=(Scaleform::Render::BeginDisplayData &);
	Scaleform::Render::BeginDisplayData & operator=(const Scaleform::Render::BeginDisplayData &);
};
struct Scaleform::ListNode<Scaleform::Render::BeginDisplayData>
{
	Scaleform::Render::BeginDisplayData * pPrev; // 0x0
	void * pVoidPrev; // 0x0
	Scaleform::Render::BeginDisplayData * pNext; // 0x8
	void * pVoidNext; // 0x8
	ListNode<Scaleform::Render::BeginDisplayData>();
	Scaleform::Render::BeginDisplayData * GetPrev();
	Scaleform::Render::BeginDisplayData * GetNext();
	bool IsInList();
	void RemoveNode();
	void ReplaceNodeWith(Scaleform::Render::BeginDisplayData *);
	void InsertNodeAfter(Scaleform::Render::BeginDisplayData *);
	void InsertNodeBefore(Scaleform::Render::BeginDisplayData *);
};
class Scaleform::RefCountBase<Scaleform::Render::HAL,65> :
	Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>
{
	enum <unnamed-enum-StatType>
	{
		StatType = 65,
	};
public:
	RefCountBase<Scaleform::Render::HAL,65>(Scaleform::RefCountBase<Scaleform::Render::HAL,65> &);
	RefCountBase<Scaleform::Render::HAL,65>(const Scaleform::RefCountBase<Scaleform::Render::HAL,65> &);
	RefCountBase<Scaleform::Render::HAL,65>();
	virtual ~RefCountBase<Scaleform::Render::HAL,65>();
	Scaleform::RefCountBase<Scaleform::Render::HAL,65> & operator=(Scaleform::RefCountBase<Scaleform::Render::HAL,65> &);
	Scaleform::RefCountBase<Scaleform::Render::HAL,65> & operator=(const Scaleform::RefCountBase<Scaleform::Render::HAL,65> &);
};
class Scaleform::Render::HAL :
	Scaleform::RefCountBase<Scaleform::Render::HAL,65>,
	Scaleform::Render::ContextImpl::RenderNotify
{
	enum HALStateFlags
	{
		HS_Initialized = 1,
		HS_InFrame = 2,
		HS_InScene = 4,
		HS_InDisplay = 8,
		HS_InRenderTarget = 16,
		HS_ViewValid = 32,
		HS_DrawingMask = 64,
		HS_DrawingFilter = 128,
		HS_InCachedFilter = 256,
		HS_InCachedBlend = 512,
		HS_SceneInDisplay = 1024,
		HS_InCachedTarget = 768,
		HS_DeviceValid = 4096,
		HS_ReadyForReset = 8192,
		HS_InGxmScene = 65536,
		HS_SceneChanged = 131072,
		HS_GnmNeedsInit = 262144,
	};
	enum PushRenderTargetFlags
	{
		PRT_NoClear = 1,
		PRT_Resolve = 2,
		PRT_NoSet = 4,
		PRT_Subscene = 8,
		PRT_NoEvent = 16,
	};
	enum RasterModeType
	{
		RasterMode_Solid = 0,
		RasterMode_Wireframe = 1,
		RasterMode_Point = 2,
		RasterMode_Count = 3,
		RasterMode_Default = 0,
	};
	struct Stats;
public:
	HAL(Scaleform::Render::ThreadCommandQueue *);
	virtual ~HAL();
	const Scaleform::Render::ToleranceParams & GetToleranceParams();
	void SetToleranceParams(const Scaleform::Render::ToleranceParams &);
	const Scaleform::Render::MeshCacheParams & GetMeshCacheParams();
	void SetMeshCacheParams(const Scaleform::Render::MeshCacheParams &);
	const Scaleform::Render::GlyphCacheParams & GetGlyphCacheParams();
	void SetGlyphCacheParams(const Scaleform::Render::GlyphCacheParams &);
	void AddNotify(Scaleform::Render::HALNotify *);
	void RemoveNotify(Scaleform::Render::HALNotify *);
	Scaleform::Render::RenderTarget * CreateRenderTarget(Scaleform::Render::Texture *, bool);
	Scaleform::Render::RenderTarget * CreateTempRenderTarget(const Scaleform::Render::Size<unsigned long> &, bool);
	bool SetRenderTarget(Scaleform::Render::RenderTarget *, bool);
	bool PushRenderTarget(Scaleform::Render::RenderTarget *, unsigned long, const Scaleform::Render::Rect<int>, Scaleform::Render::Color);
	bool PopRenderTarget(unsigned long);
	bool IsInitialized();
	bool InitHAL(const Scaleform::Render::HALInitParams &);
	bool ShutdownHAL();
	bool PrepareForReset();
	bool RestoreAfterReset();
	bool BeginFrame();
	void EndFrame();
	void Flush();
	bool Submit();
	bool BeginScene();
	bool EndScene();
	void BeginDisplay(Scaleform::Render::Color, const Scaleform::Render::Viewport &, bool, const Scaleform::Render::Matrix2x4<float> &);
	void EndDisplay();
	void Display(const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> &);
	void Draw(Scaleform::Render::RenderQueueItem::Interface *, void *);
	void Draw(const Scaleform::Render::RenderQueueItem &);
	void Draw(Scaleform::Render::TreeRoot *);
	void Draw(const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> &);
	void ClearSolidRectangle(const Scaleform::Render::Rect<int> &, Scaleform::Render::Color, bool);
	void ForceUpdateImages(Scaleform::Render::ContextImpl::Context *);
	Scaleform::Render::ContextImpl::RenderNotify * GetContextNotify();
	Scaleform::Render::MemoryManager * GetMemoryManager();
	Scaleform::Render::RenderBufferManager * GetRenderBufferManager();
	const Scaleform::Render::ProfileViews & GetProfiler();
	Scaleform::Render::ProfileViews & GetProfiler();
	Scaleform::Render::RQCacheInterface & GetRQCacheInterface();
	Scaleform::Render::RenderQueueProcessor & GetRQProcessor();
	Scaleform::Render::RenderSync * GetRenderSync();
	Scaleform::Render::PrimitiveFillManager & GetPrimitiveFillManager();
	Scaleform::Render::GlyphCache * GetGlyphCache();
	Scaleform::Render::MeshKeyManager * GetMeshKeyManager();
	Scaleform::Render::MeshGenerator * GetMeshGen();
	Scaleform::Render::StrokeGenerator * GetStrokeGen();
	Scaleform::Render::MatrixPoolImpl::MatrixPool & GetMatrixPool();
	Scaleform::Render::MatrixStateFactory & GetMatrixStateFactory();
	Scaleform::Render::MatrixState * GetMatrices();
	Scaleform::Render::RenderEvents & GetEvents();
	void GetStats(Scaleform::Render::HAL::Stats *, bool);
	Scaleform::Render::TextureManager * GetTextureManager();
	Scaleform::Render::MeshCache & GetMeshCache();
	Scaleform::Render::GraphicsDevice * GetGraphicsDeviceBase();
	unsigned long GetHALState();
	unsigned long GetConfigFlags();
	unsigned long GetRenderThreadId();
	float GetViewportScaling();
	const Scaleform::Render::Viewport & GetVP();
	bool IsRasterModeSupported(Scaleform::Render::HAL::RasterModeType);
	bool IsPrepassRequired();
	Scaleform::Render::DisplayPass GetDisplayPass();
	void SetRasterMode(Scaleform::Render::HAL::RasterModeType);
	void SetStereoImpl(Scaleform::Render::StereoImplBase *);
	void SetStereoParams(Scaleform::Render::StereoParams);
	void SetStereoDisplay(Scaleform::Render::StereoDisplay, bool);
	void SetDisplayPass(Scaleform::Render::DisplayPass);
	void DrawBundleEntries(Scaleform::Render::BundleIterator &);
	void DrawProcessedPrimitive(Scaleform::Render::Primitive *, Scaleform::Render::PrimitiveBatch *, Scaleform::Render::PrimitiveBatch *);
	void DrawProcessedComplexMeshes(Scaleform::Render::ComplexMesh *, const Scaleform::Render::StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix> &);
	void PushMask_BeginSubmit(Scaleform::Render::MaskPrimitive *);
	void EndMaskSubmit();
	void PopMask();
	void PushBlendMode(Scaleform::Render::BlendPrimitive *);
	void PopBlendMode();
	void ApplyBlendMode(Scaleform::Render::BlendMode, bool, bool);
	void PrepareCacheable(Scaleform::Render::CacheablePrimitive *, bool);
	void PushFilters(Scaleform::Render::FilterPrimitive *);
	void PopFilters();
	void PushView3D(const Scaleform::Render::Matrix3x4<float> &);
	void PushProj3D(const Scaleform::Render::Matrix4x4<float> &);
	void PopView3D();
	void PopProj3D();
	void PushUserData(const Scaleform::Render::UserDataState::Data *);
	void PopUserData();
	unsigned long DrawableCommandGetFlags(const Scaleform::Render::DICommand *);
	void DrawableCxform(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Cxform *);
	void DrawableCompare(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	void DrawableCopyChannel(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix4x4<float> *);
	void DrawableMerge(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix4x4<float> *);
	void DrawableCopyPixels(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix2x4<float> &, bool, bool);
	void DrawablePaletteMap(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix2x4<float> &, unsigned long, const unsigned long *);
	void DrawableCopyback(Scaleform::Render::Texture *, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, unsigned long);
	void MapVertexFormat(Scaleform::Render::PrimitiveFillType, const Scaleform::Render::VertexFormat *, const Scaleform::Render::VertexFormat * *, const Scaleform::Render::VertexFormat * *, const Scaleform::Render::VertexFormat * *, unsigned long);
	unsigned long GetMaximumBatchCount(Scaleform::Render::Primitive *);
	bool ShouldRenderFilters(const Scaleform::Render::FilterPrimitive *);
	bool ShouldRenderTargetBlend(const Scaleform::Render::BlendPrimitive *);
	enum EnableIgnoreValue
	{
		EnableIgnore_Off = 0,
		EnableIgnore_On = 1,
		EnableIgnore_Ignore = 2,
	};
	enum BlendOp
	{
		BlendOp_ADD = 0,
		BlendOp_MAX = 1,
		BlendOp_MIN = 2,
		BlendOp_REVSUBTRACT = 3,
		BlendOp_Count = 4,
	};
	enum BlendFactor
	{
		BlendFactor_ZERO = 0,
		BlendFactor_ONE = 1,
		BlendFactor_SRCALPHA = 2,
		BlendFactor_INVSRCALPHA = 3,
		BlendFactor_DESTCOLOR = 4,
		BlendFactor_INVDESTCOLOR = 5,
		BlendFactor_Count = 6,
	};
	enum DepthStencilMode
	{
		DepthStencil_Invalid = 0,
		DepthStencil_Disabled = 1,
		DepthStencil_StencilClear = 2,
		DepthStencil_StencilClearHigher = 3,
		DepthStencil_StencilIncrementEqual = 4,
		DepthStencil_StencilTestLessEqual = 5,
		DepthStencil_DepthWrite = 6,
		DepthStencil_DepthTestEqual = 7,
		DepthStencil_Count = 8,
	};
	enum DepthStencilFunction
	{
		DepthStencilFunction_Ignore = 0,
		DepthStencilFunction_Never = 1,
		DepthStencilFunction_Less = 2,
		DepthStencilFunction_Equal = 3,
		DepthStencilFunction_LessEqual = 4,
		DepthStencilFunction_Greater = 5,
		DepthStencilFunction_NotEqual = 6,
		DepthStencilFunction_GreaterEqual = 7,
		DepthStencilFunction_Always = 8,
		DepthStencilFunction_Count = 9,
	};
	enum StencilOp
	{
		StencilOp_Ignore = 0,
		StencilOp_Keep = 1,
		StencilOp_Replace = 2,
		StencilOp_Increment = 3,
		StencilOp_Count = 4,
	};
	struct HALDepthStencilDescriptor;
	struct HALBlendModeDescriptor;
	struct HALBlendState;
	struct MaskStackEntry;
	struct BlendModeStackEntry;
	struct FilterStackEntry;
	struct NeverShrinkPolicy;
	class BeginDisplayDataType;
	class ViewMatrix3DStackType;
	class ProjectionMatrix3DStackType;
	class BlendStackType;
	class MaskStackType;
	class FilterStackType;
	class UserDataStackType;
	struct RenderTargetEntry;
	class RenderTargetStackType;
protected:
	Scaleform::Render::HAL * getThis();
	void notifyHandlers(Scaleform::Render::HALNotifyType);
	void checkState_EmitWarnings(unsigned long, const char *);
	bool checkState(unsigned long, const char *);
	void beginDisplay(Scaleform::Render::BeginDisplayData *);
	void endDisplay();
	void updateViewport();
	void calcHWViewMatrix(unsigned long, Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Rect<int> &, long, long);
	bool createDefaultRenderBuffer();
	void destroyDefaultRenderBuffer();
	void setRenderTargetImpl(Scaleform::Render::RenderTargetData *, unsigned long, const Scaleform::Render::Color &);
	Scaleform::Render::BlendMode getLastBlendModeOrDefault();
	void applyBlendMode(const Scaleform::Render::HAL::HALBlendState &);
	void applyBlendModeImpl(Scaleform::Render::BlendMode, bool, bool);
	void applyBlendModeEnable(bool);
	void applyBlendModeEnableImpl(bool);
	void profilerApplyUniform(Scaleform::Render::ProfilerUniform, unsigned long, float *);
	void profilerDrawCacheablePrimArea(const Scaleform::Render::CacheablePrimitive *);
	void applyDepthStencilMode(Scaleform::Render::HAL::DepthStencilMode, unsigned long);
	bool checkDepthStencilBufferCaps();
	void drawMaskClearRectangles(const Scaleform::Render::Matrix2x4<float> *, unsigned long long);
	void drawMaskClearRectangles(const Scaleform::Render::MatrixPoolImpl::HMatrix *, unsigned long long);
	void beginMaskDisplay();
	void endMaskDisplay();
	void drawUncachedFilter(const Scaleform::Render::HAL::FilterStackEntry &);
	void drawCachedFilter(Scaleform::Render::FilterPrimitive *);
	void drawScreenQuad();
	void applyRasterMode(Scaleform::Render::HAL::RasterModeType);
	void applyRasterModeImpl(Scaleform::Render::HAL::RasterModeType);
	virtual void entryChanges(Scaleform::Render::ContextImpl::Context &, Scaleform::Render::PagedItemBuffer<Scaleform::Render::ContextImpl::EntryChange,63> &, bool);
	virtual void entryDestroy(Scaleform::Render::ContextImpl::Entry *);
	virtual void entryFlush(Scaleform::Render::ContextImpl::Entry *);
	void addComplexMeshToUpdateList(Scaleform::Render::ComplexMesh::UpdateNode &);
	void updateComplexMeshes();
	Scaleform::MemoryHeap * pHeap; // 0x48
	unsigned long RenderThreadID; // 0x50
	unsigned long ConfigFlags; // 0x54
	volatile unsigned long HALState; // 0x58
	Scaleform::Render::DisplayPass CurrentPass; // 0x5C
	Scaleform::Render::ToleranceParams ToleranceParamsStore; // 0x60
	Scaleform::Render::MeshCacheParams MeshCacheParamsStore; // 0xB0
	Scaleform::Render::GlyphCacheParams GlyphCacheParamsStore; // 0xF8
	Scaleform::List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> > ComplexMeshUpdateList; // 0x130
	Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > RenderRoots; // 0x140
	Scaleform::ListSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify> NotifyList; // 0x150
	Scaleform::ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > BlendModeStack; // 0x160
	Scaleform::ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > FilterStack; // 0x178
	Scaleform::ArrayLH<Scaleform::Render::Matrix4x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> > ProjectionMatrix3DStack; // 0x190
	Scaleform::ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > RenderTargetStack; // 0x1A8
	Scaleform::ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> > UserDataStack; // 0x1C0
	Scaleform::ArrayLH<Scaleform::Render::Matrix3x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> > ViewMatrix3DStack; // 0x1D8
	Scaleform::Ptr<Scaleform::Render::RenderTarget> FullSceneBlendTarget; // 0x1F0
	Scaleform::Render::HAL::DepthStencilMode CurrentDepthStencilState; // 0x1F8
	unsigned long CurrentStencilRef; // 0x1FC
	Scaleform::Render::HAL::RasterModeType NextSceneRasterMode; // 0x200
	Scaleform::Render::HAL::RasterModeType CurrentSceneRasterMode; // 0x204
	Scaleform::Render::HAL::RasterModeType AppliedSceneRasterMode; // 0x208
	Scaleform::Render::HAL::HALBlendState CurrentBlendState; // 0x20C
	unsigned long FillFlags; // 0x214
	Scaleform::Render::PrimitiveFillManager FillManager; // 0x218
	Scaleform::Ptr<Scaleform::Render::MeshKeyManager> pMeshKeyManager; // 0x240
	Scaleform::Ptr<Scaleform::Render::GlyphCache> pGlyphCache; // 0x248
	Scaleform::Render::MatrixStateFactory * pMatrixFactory; // 0x250
	Scaleform::Ptr<Scaleform::Render::MatrixState> Matrices; // 0x258
	Scaleform::Ptr<Scaleform::Render::RenderBufferManager> pRenderBufferManager; // 0x260
	Scaleform::Ptr<Scaleform::Render::MemoryManager> pMemoryManager; // 0x268
	Scaleform::Render::HAL::Stats AccumulatedStats; // 0x270
	Scaleform::Render::ProfileViews Profiler; // 0x288
	Scaleform::Render::MeshGenerator MeshGen; // 0x2A0
	Scaleform::Render::StrokeGenerator StrokeGen; // 0xD48
	Scaleform::Render::MatrixPoolImpl::MatrixPool MPool; // 0xF20
	Scaleform::Render::RenderQueue Queue; // 0xFA8
	Scaleform::Render::RenderQueueProcessor QueueProcessor; // 0xFC8
	Scaleform::ListAllocLH_POD<Scaleform::Render::BeginDisplayData,127,2> BeginDisplayDataList; // 0x1110
	long CacheableIndex; // 0x1138
	long CacheablePrepIndex; // 0x113C
	long CacheablePrepStart; // 0x1140
	Scaleform::Render::Viewport VP; // 0x1144
	Scaleform::Render::Rect<int> ViewRect; // 0x1170
	Scaleform::Render::Matrix2x4<float> ViewportMatrix; // 0x1180
	static Scaleform::Render::HAL::HALDepthStencilDescriptor DepthStencilModeTable[8]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::HAL::HALBlendModeDescriptor BlendModeTable[20]; // 0xFFFFFFFFFFFFFFFF
};
struct Scaleform::Render::HAL::Stats
{
	unsigned long Primitives; // 0x0
	unsigned long Meshes; // 0x4
	unsigned long Triangles; // 0x8
	unsigned long Masks; // 0xC
	unsigned long RTChanges; // 0x10
	unsigned long Filters; // 0x14
	Stats();
	void Clear();
};
bool Scaleform::Render::HAL::IsInitialized(); // 0x14031A160
class Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> :
	Scaleform::Render::ContextImpl::RTHandle
{
public:
	DisplayHandle<Scaleform::Render::TreeRoot>(const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> &);
	DisplayHandle<Scaleform::Render::TreeRoot>(const Scaleform::Render::ContextImpl::RTHandle &);
	DisplayHandle<Scaleform::Render::TreeRoot>(Scaleform::Render::TreeRoot *);
	DisplayHandle<Scaleform::Render::TreeRoot>();
	void operator=(const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> &);
	bool operator==(const Scaleform::Render::ContextImpl::DisplayHandle<Scaleform::Render::TreeRoot> &);
	Scaleform::Render::TreeRoot * GetRenderEntry();
	~DisplayHandle<Scaleform::Render::TreeRoot>();
};
Scaleform::Render::ContextImpl::RenderNotify * Scaleform::Render::HAL::GetContextNotify(); // 0x140319CB0
Scaleform::Render::MemoryManager * Scaleform::Render::HAL::GetMemoryManager(); // 0x140319E80
Scaleform::Render::RenderBufferManager * Scaleform::Render::HAL::GetRenderBufferManager(); // 0x140319EF0
Scaleform::Render::ProfileViews & Scaleform::Render::HAL::GetProfiler(); // 0x140319EC0
Scaleform::Render::RQCacheInterface & Scaleform::Render::HAL::GetRQCacheInterface(); // 0x140319ED0
Scaleform::Render::RenderQueueProcessor & Scaleform::Render::HAL::GetRQProcessor(); // 0x140319EE0
Scaleform::Render::PrimitiveFillManager & Scaleform::Render::HAL::GetPrimitiveFillManager(); // 0x140319EB0
Scaleform::Render::GlyphCache * Scaleform::Render::HAL::GetGlyphCache(); // 0x140319D90
Scaleform::Render::MeshKeyManager * Scaleform::Render::HAL::GetMeshKeyManager(); // 0x140319EA0
Scaleform::Render::MeshGenerator * Scaleform::Render::HAL::GetMeshGen(); // 0x140319E90
Scaleform::Render::StrokeGenerator * Scaleform::Render::HAL::GetStrokeGen(); // 0x140319F40
Scaleform::Render::MatrixPoolImpl::MatrixPool & Scaleform::Render::HAL::GetMatrixPool(); // 0x140319E60
Scaleform::Render::MatrixStateFactory & Scaleform::Render::HAL::GetMatrixStateFactory(); // 0x140319E70
Scaleform::Render::MatrixState * Scaleform::Render::HAL::GetMatrices(); // 0x140319E50
float Scaleform::Render::HAL::GetViewportScaling(); // 0x140319F70
const Scaleform::Render::Viewport & Scaleform::Render::HAL::GetVP(); // 0x140319F60
bool Scaleform::Render::ProfileViews::IsBlendCachingEnabled(); // 0x1400B8180
Scaleform::Render::DisplayPass Scaleform::Render::HAL::GetDisplayPass(); // 0x140319D00
void Scaleform::Render::HAL::SetDisplayPass(Scaleform::Render::DisplayPass pass); // 0x14031C4D0
class Scaleform::Render::StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix>
{
private:
	Scaleform::Render::MatrixPoolImpl::HMatrix * pData; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long StrideSize; // 0x10
public:
	StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix>(const Scaleform::Render::StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix> &, unsigned long long, unsigned long long);
	StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix>(Scaleform::Render::MatrixPoolImpl::HMatrix *, unsigned long long, unsigned long long);
	Scaleform::Render::MatrixPoolImpl::HMatrix * GetDataStart();
	unsigned long long GetSize();
	unsigned long long GetStride();
	const Scaleform::Render::MatrixPoolImpl::HMatrix & operator[](unsigned long long);
	Scaleform::Render::MatrixPoolImpl::HMatrix & operator[](unsigned long long);
};
bool Scaleform::Render::ProfileViews::IsCxformChanged(); // 0x14004BBE0
struct Scaleform::Render::HAL::HALDepthStencilDescriptor
{
	Scaleform::Render::HAL::EnableIgnoreValue DepthTestEnable; // 0x0
	Scaleform::Render::HAL::EnableIgnoreValue DepthWriteEnable; // 0x4
	Scaleform::Render::HAL::EnableIgnoreValue StencilEnable; // 0x8
	Scaleform::Render::HAL::EnableIgnoreValue ColorWriteEnable; // 0xC
	Scaleform::Render::HAL::DepthStencilFunction DepthFunction; // 0x10
	Scaleform::Render::HAL::DepthStencilFunction StencilFunction; // 0x14
	Scaleform::Render::HAL::StencilOp StencilPassOp; // 0x18
	Scaleform::Render::HAL::StencilOp StencilFailOp; // 0x1C
	Scaleform::Render::HAL::StencilOp StencilZFailOp; // 0x20
};
struct Scaleform::Render::HAL::HALBlendModeDescriptor
{
	Scaleform::Render::HAL::BlendOp Operator; // 0x0
	Scaleform::Render::HAL::BlendFactor SourceColor; // 0x4
	Scaleform::Render::HAL::BlendFactor DestColor; // 0x8
	Scaleform::Render::HAL::BlendOp AlphaOperator; // 0xC
	Scaleform::Render::HAL::BlendFactor SourceAlpha; // 0x10
	Scaleform::Render::HAL::BlendFactor DestAlpha; // 0x14
};
struct Scaleform::Render::HAL::HALBlendState
{
	HALBlendState();
	bool operator==(const Scaleform::Render::HAL::HALBlendState &);
	Scaleform::Render::BlendMode Mode; // 0x0
	bool SourceAc; // 0x4
	bool ForceAc; // 0x5
	bool BlendEnable; // 0x6
};
struct Scaleform::Render::HAL::MaskStackEntry
{
	Scaleform::Ptr<Scaleform::Render::MaskPrimitive> pPrimitive; // 0x0
	bool OldViewportValid; // 0x8
	Scaleform::Render::Rect<int> OldViewRect; // 0xC
	MaskStackEntry(Scaleform::Render::HAL::MaskStackEntry &);
	MaskStackEntry(const Scaleform::Render::HAL::MaskStackEntry &);
	MaskStackEntry();
	~MaskStackEntry();
	Scaleform::Render::HAL::MaskStackEntry & operator=(Scaleform::Render::HAL::MaskStackEntry &);
	Scaleform::Render::HAL::MaskStackEntry & operator=(const Scaleform::Render::HAL::MaskStackEntry &);
};
class Scaleform::Ptr<Scaleform::Render::MaskPrimitive>
{
protected:
	Scaleform::Render::MaskPrimitive * pObject; // 0x0
public:
	Ptr<Scaleform::Render::MaskPrimitive>(const Scaleform::Ptr<Scaleform::Render::MaskPrimitive> &);
	Ptr<Scaleform::Render::MaskPrimitive>(Scaleform::Render::MaskPrimitive *);
	Ptr<Scaleform::Render::MaskPrimitive>(Scaleform::Ptr<Scaleform::Render::MaskPrimitive> &, Scaleform::PickType);
	Ptr<Scaleform::Render::MaskPrimitive>(Scaleform::Pickable<Scaleform::Render::MaskPrimitive>);
	Ptr<Scaleform::Render::MaskPrimitive>(Scaleform::Render::MaskPrimitive &);
	Ptr<Scaleform::Render::MaskPrimitive>();
	~Ptr<Scaleform::Render::MaskPrimitive>();
	bool operator==(Scaleform::Render::MaskPrimitive *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::MaskPrimitive> &);
	bool operator!=(Scaleform::Render::MaskPrimitive *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::MaskPrimitive> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::MaskPrimitive> &);
	Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & operator=(Scaleform::Pickable<Scaleform::Render::MaskPrimitive>);
	const Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & operator=(Scaleform::Render::MaskPrimitive &);
	const Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & operator=(Scaleform::Render::MaskPrimitive *);
	const Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & operator=(const Scaleform::Ptr<Scaleform::Render::MaskPrimitive> &);
	Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & SetPtr(Scaleform::Pickable<Scaleform::Render::MaskPrimitive>);
	Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & SetPtr(Scaleform::Render::MaskPrimitive &);
	Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & SetPtr(Scaleform::Render::MaskPrimitive *);
	Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & SetPtr(const Scaleform::Ptr<Scaleform::Render::MaskPrimitive> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::MaskPrimitive * & GetRawRef();
	Scaleform::Render::MaskPrimitive * GetPtr();
	Scaleform::Render::MaskPrimitive & operator*();
	Scaleform::Render::MaskPrimitive * operator->();
	Scaleform::Render::MaskPrimitive * operator class Scaleform::Render::MaskPrimitive *();
	Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & Pick(Scaleform::Render::MaskPrimitive *);
	Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & Pick(Scaleform::Pickable<Scaleform::Render::MaskPrimitive>);
	Scaleform::Ptr<Scaleform::Render::MaskPrimitive> & Pick(Scaleform::Ptr<Scaleform::Render::MaskPrimitive> &);
};
struct Scaleform::Render::HAL::BlendModeStackEntry
{
	Scaleform::Ptr<Scaleform::Render::BlendPrimitive> pPrimitive; // 0x0
	Scaleform::Ptr<Scaleform::Render::RenderTarget> pRenderTarget; // 0x8
	Scaleform::Ptr<Scaleform::Render::RenderTarget> pLayerAlpha; // 0x10
	bool LayerAlphaCleared; // 0x18
	bool NoLayerParent; // 0x19
	BlendModeStackEntry(Scaleform::Render::HAL::BlendModeStackEntry &);
	BlendModeStackEntry(const Scaleform::Render::HAL::BlendModeStackEntry &);
	BlendModeStackEntry();
	~BlendModeStackEntry();
	Scaleform::Render::HAL::BlendModeStackEntry & operator=(Scaleform::Render::HAL::BlendModeStackEntry &);
	Scaleform::Render::HAL::BlendModeStackEntry & operator=(const Scaleform::Render::HAL::BlendModeStackEntry &);
};
class Scaleform::Ptr<Scaleform::Render::BlendPrimitive>
{
protected:
	Scaleform::Render::BlendPrimitive * pObject; // 0x0
public:
	Ptr<Scaleform::Render::BlendPrimitive>(const Scaleform::Ptr<Scaleform::Render::BlendPrimitive> &);
	Ptr<Scaleform::Render::BlendPrimitive>(Scaleform::Render::BlendPrimitive *);
	Ptr<Scaleform::Render::BlendPrimitive>(Scaleform::Ptr<Scaleform::Render::BlendPrimitive> &, Scaleform::PickType);
	Ptr<Scaleform::Render::BlendPrimitive>(Scaleform::Pickable<Scaleform::Render::BlendPrimitive>);
	Ptr<Scaleform::Render::BlendPrimitive>(Scaleform::Render::BlendPrimitive &);
	Ptr<Scaleform::Render::BlendPrimitive>();
	~Ptr<Scaleform::Render::BlendPrimitive>();
	bool operator==(Scaleform::Render::BlendPrimitive *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::BlendPrimitive> &);
	bool operator!=(Scaleform::Render::BlendPrimitive *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::BlendPrimitive> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::BlendPrimitive> &);
	Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & operator=(Scaleform::Pickable<Scaleform::Render::BlendPrimitive>);
	const Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & operator=(Scaleform::Render::BlendPrimitive &);
	const Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & operator=(Scaleform::Render::BlendPrimitive *);
	const Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & operator=(const Scaleform::Ptr<Scaleform::Render::BlendPrimitive> &);
	Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & SetPtr(Scaleform::Pickable<Scaleform::Render::BlendPrimitive>);
	Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & SetPtr(Scaleform::Render::BlendPrimitive &);
	Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & SetPtr(Scaleform::Render::BlendPrimitive *);
	Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & SetPtr(const Scaleform::Ptr<Scaleform::Render::BlendPrimitive> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::BlendPrimitive * & GetRawRef();
	Scaleform::Render::BlendPrimitive * GetPtr();
	Scaleform::Render::BlendPrimitive & operator*();
	Scaleform::Render::BlendPrimitive * operator->();
	Scaleform::Render::BlendPrimitive * operator class Scaleform::Render::BlendPrimitive *();
	Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & Pick(Scaleform::Render::BlendPrimitive *);
	Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & Pick(Scaleform::Pickable<Scaleform::Render::BlendPrimitive>);
	Scaleform::Ptr<Scaleform::Render::BlendPrimitive> & Pick(Scaleform::Ptr<Scaleform::Render::BlendPrimitive> &);
};
struct Scaleform::Render::HAL::FilterStackEntry
{
	Scaleform::Ptr<Scaleform::Render::FilterPrimitive> pPrimitive; // 0x0
	Scaleform::Ptr<Scaleform::Render::RenderTarget> pRenderTarget; // 0x8
	FilterStackEntry(Scaleform::Render::HAL::FilterStackEntry &);
	FilterStackEntry(const Scaleform::Render::HAL::FilterStackEntry &);
	FilterStackEntry();
	~FilterStackEntry();
	Scaleform::Render::HAL::FilterStackEntry & operator=(Scaleform::Render::HAL::FilterStackEntry &);
	Scaleform::Render::HAL::FilterStackEntry & operator=(const Scaleform::Render::HAL::FilterStackEntry &);
};
class Scaleform::Ptr<Scaleform::Render::FilterPrimitive>
{
protected:
	Scaleform::Render::FilterPrimitive * pObject; // 0x0
public:
	Ptr<Scaleform::Render::FilterPrimitive>(const Scaleform::Ptr<Scaleform::Render::FilterPrimitive> &);
	Ptr<Scaleform::Render::FilterPrimitive>(Scaleform::Render::FilterPrimitive *);
	Ptr<Scaleform::Render::FilterPrimitive>(Scaleform::Ptr<Scaleform::Render::FilterPrimitive> &, Scaleform::PickType);
	Ptr<Scaleform::Render::FilterPrimitive>(Scaleform::Pickable<Scaleform::Render::FilterPrimitive>);
	Ptr<Scaleform::Render::FilterPrimitive>(Scaleform::Render::FilterPrimitive &);
	Ptr<Scaleform::Render::FilterPrimitive>();
	~Ptr<Scaleform::Render::FilterPrimitive>();
	bool operator==(Scaleform::Render::FilterPrimitive *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::FilterPrimitive> &);
	bool operator!=(Scaleform::Render::FilterPrimitive *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::FilterPrimitive> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::FilterPrimitive> &);
	Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & operator=(Scaleform::Pickable<Scaleform::Render::FilterPrimitive>);
	const Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & operator=(Scaleform::Render::FilterPrimitive &);
	const Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & operator=(Scaleform::Render::FilterPrimitive *);
	const Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & operator=(const Scaleform::Ptr<Scaleform::Render::FilterPrimitive> &);
	Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & SetPtr(Scaleform::Pickable<Scaleform::Render::FilterPrimitive>);
	Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & SetPtr(Scaleform::Render::FilterPrimitive &);
	Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & SetPtr(Scaleform::Render::FilterPrimitive *);
	Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & SetPtr(const Scaleform::Ptr<Scaleform::Render::FilterPrimitive> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::FilterPrimitive * & GetRawRef();
	Scaleform::Render::FilterPrimitive * GetPtr();
	Scaleform::Render::FilterPrimitive & operator*();
	Scaleform::Render::FilterPrimitive * operator->();
	Scaleform::Render::FilterPrimitive * operator class Scaleform::Render::FilterPrimitive *();
	Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & Pick(Scaleform::Render::FilterPrimitive *);
	Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & Pick(Scaleform::Pickable<Scaleform::Render::FilterPrimitive>);
	Scaleform::Ptr<Scaleform::Render::FilterPrimitive> & Pick(Scaleform::Ptr<Scaleform::Render::FilterPrimitive> &);
};
class Scaleform::ListAllocLH_POD<Scaleform::Render::BeginDisplayData,127,2> :
	Scaleform::ListAllocBase<Scaleform::Render::BeginDisplayData,127,Scaleform::AllocatorLH_POD<Scaleform::Render::BeginDisplayData,2> >
{
	class SelfType;
	class ValueType;
	struct AllocatorType;
public:
	ListAllocLH_POD<Scaleform::Render::BeginDisplayData,127,2>();
	~ListAllocLH_POD<Scaleform::Render::BeginDisplayData,127,2>();
};
class Scaleform::ArrayLH<Scaleform::Render::Matrix3x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Matrix3x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix3x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1> > >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::Matrix3x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayLH<Scaleform::Render::Matrix3x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	ArrayLH<Scaleform::Render::Matrix3x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayConstPolicy<0,8,1> &);
	ArrayLH<Scaleform::Render::Matrix3x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> >(long);
	ArrayLH<Scaleform::Render::Matrix3x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> >();
	const Scaleform::ArrayLH<Scaleform::Render::Matrix3x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> > & operator=(const Scaleform::ArrayLH<Scaleform::Render::Matrix3x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	~ArrayLH<Scaleform::Render::Matrix3x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> >();
};
class Scaleform::ArrayLH<Scaleform::Render::Matrix4x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::Matrix4x4<float>,Scaleform::AllocatorLH<Scaleform::Render::Matrix4x4<float>,2>,Scaleform::ArrayConstPolicy<0,8,1> > >
{
	class ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::Matrix4x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayLH<Scaleform::Render::Matrix4x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	ArrayLH<Scaleform::Render::Matrix4x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayConstPolicy<0,8,1> &);
	ArrayLH<Scaleform::Render::Matrix4x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> >(long);
	ArrayLH<Scaleform::Render::Matrix4x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> >();
	const Scaleform::ArrayLH<Scaleform::Render::Matrix4x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> > & operator=(const Scaleform::ArrayLH<Scaleform::Render::Matrix4x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	~ArrayLH<Scaleform::Render::Matrix4x4<float>,2,Scaleform::ArrayConstPolicy<0,8,1> >();
};
class Scaleform::ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayConstPolicy<0,8,1> &);
	ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(long);
	ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >();
	const Scaleform::ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > & operator=(const Scaleform::ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	~ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >();
};
class Scaleform::ArrayLH<Scaleform::Render::HAL::MaskStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::HAL::MaskStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayLH<Scaleform::Render::HAL::MaskStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	ArrayLH<Scaleform::Render::HAL::MaskStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayConstPolicy<0,8,1> &);
	ArrayLH<Scaleform::Render::HAL::MaskStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(long);
	ArrayLH<Scaleform::Render::HAL::MaskStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >();
	const Scaleform::ArrayLH<Scaleform::Render::HAL::MaskStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > & operator=(const Scaleform::ArrayLH<Scaleform::Render::HAL::MaskStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	~ArrayLH<Scaleform::Render::HAL::MaskStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >();
};
class Scaleform::ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::HAL::FilterStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::FilterStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayConstPolicy<0,8,1> &);
	ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(long);
	ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >();
	const Scaleform::ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > & operator=(const Scaleform::ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	~ArrayLH<Scaleform::Render::HAL::FilterStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >();
};
class Scaleform::ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::UserDataState::Data const *,Scaleform::AllocatorLH<Scaleform::Render::UserDataState::Data const *,2>,Scaleform::ArrayConstPolicy<0,8,1> > >
{
	typedef const Scaleform::Render::UserDataState::Data ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayConstPolicy<0,8,1> &);
	ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> >(long);
	ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> >();
	const Scaleform::ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> > & operator=(const Scaleform::ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	~ArrayLH<Scaleform::Render::UserDataState::Data const *,2,Scaleform::ArrayConstPolicy<0,8,1> >();
};
struct Scaleform::Render::HAL::RenderTargetEntry
{
	Scaleform::Ptr<Scaleform::Render::RenderTarget> pRenderTarget; // 0x0
	Scaleform::Render::MatrixState OldMatrixState; // 0x10
	Scaleform::Render::Rect<int> OldViewRect; // 0x2D0
	Scaleform::Render::Viewport OldViewport; // 0x2E0
	unsigned long PushFlags; // 0x30C
	Scaleform::Render::Color ClearColor; // 0x310
	unsigned long MaskStackTop; // 0x314
	Scaleform::ArrayLH<Scaleform::Render::HAL::MaskStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > MaskStack; // 0x318
	bool StencilChecked; // 0x330
	bool StencilAvailable; // 0x331
	bool MultiBitStencil; // 0x332
	bool DepthBufferAvailable; // 0x333
	RenderTargetEntry(Scaleform::Render::HAL::RenderTargetEntry &);
	RenderTargetEntry(const Scaleform::Render::HAL::RenderTargetEntry &);
	RenderTargetEntry();
	~RenderTargetEntry();
	Scaleform::Render::HAL::RenderTargetEntry & operator=(Scaleform::Render::HAL::RenderTargetEntry &);
	Scaleform::Render::HAL::RenderTargetEntry & operator=(const Scaleform::Render::HAL::RenderTargetEntry &);
};
class Scaleform::ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > :
	Scaleform::ArrayBase<Scaleform::ArrayData<Scaleform::Render::HAL::RenderTargetEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::RenderTargetEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > >
{
	struct ValueType;
	struct AllocatorType;
	struct SizePolicyType;
	class SelfType;
	class BaseType;
public:
	ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(const Scaleform::ArrayConstPolicy<0,8,1> &);
	ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >(long);
	ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >();
	const Scaleform::ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > & operator=(const Scaleform::ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > &);
	~ArrayLH<Scaleform::Render::HAL::RenderTargetEntry,2,Scaleform::ArrayConstPolicy<0,8,1> >();
};
class Scaleform::List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> >
{
	struct ValueType;
private:
	List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> >(const Scaleform::List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> > &);
public:
	List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> >();
	void Clear();
	Scaleform::Render::ComplexMesh::UpdateNode * GetFirst();
	Scaleform::Render::ComplexMesh::UpdateNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::ComplexMesh::UpdateNode *);
	bool IsLast(const Scaleform::Render::ComplexMesh::UpdateNode *);
	bool IsNull(const Scaleform::Render::ComplexMesh::UpdateNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::ComplexMesh::UpdateNode * GetPrev(const Scaleform::Render::ComplexMesh::UpdateNode *);
	static Scaleform::Render::ComplexMesh::UpdateNode * GetNext(const Scaleform::Render::ComplexMesh::UpdateNode *);
	void PushFront(Scaleform::Render::ComplexMesh::UpdateNode *);
	void PushBack(Scaleform::Render::ComplexMesh::UpdateNode *);
	static void Remove(Scaleform::Render::ComplexMesh::UpdateNode *);
	void BringToFront(Scaleform::Render::ComplexMesh::UpdateNode *);
	void SendToBack(Scaleform::Render::ComplexMesh::UpdateNode *);
	void PushListToFront(Scaleform::List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> > &, Scaleform::Render::ComplexMesh::UpdateNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> > &, Scaleform::Render::ComplexMesh::UpdateNode *);
	void PushListItemsToFront(Scaleform::Render::ComplexMesh::UpdateNode *, Scaleform::Render::ComplexMesh::UpdateNode *);
private:
	const Scaleform::List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> > & operator=(const Scaleform::List<Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::Render::ComplexMesh::UpdateNode,Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> > &);
	Scaleform::ListNode<Scaleform::Render::ComplexMesh::UpdateNode> Root; // 0x0
};
class Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> >
{
	class ValueType;
private:
	List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> >(const Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > &);
public:
	List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> >();
	void Clear();
	Scaleform::Render::TreeCacheNode * GetFirst();
	Scaleform::Render::TreeCacheNode * GetLast();
	bool IsEmpty();
	bool IsFirst(const Scaleform::Render::TreeCacheNode *);
	bool IsLast(const Scaleform::Render::TreeCacheNode *);
	bool IsNull(const Scaleform::Render::TreeCacheNode *);
	bool HasOneElem();
	bool HasTwoPlusElems();
	static Scaleform::Render::TreeCacheNode * GetPrev(const Scaleform::Render::TreeCacheNode *);
	static Scaleform::Render::TreeCacheNode * GetNext(const Scaleform::Render::TreeCacheNode *);
	void PushFront(Scaleform::Render::TreeCacheNode *);
	void PushBack(Scaleform::Render::TreeCacheNode *);
	static void Remove(Scaleform::Render::TreeCacheNode *);
	void BringToFront(Scaleform::Render::TreeCacheNode *);
	void SendToBack(Scaleform::Render::TreeCacheNode *);
	void PushListToFront(Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > &);
	void PushListToBack(Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > &);
	void PushFollowingListItemsToFront(Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > &, Scaleform::Render::TreeCacheNode *);
	void PushPrecedingListItemsToFront(Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > &, Scaleform::Render::TreeCacheNode *);
	void PushListItemsToFront(Scaleform::Render::TreeCacheNode *, Scaleform::Render::TreeCacheNode *);
private:
	const Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > & operator=(const Scaleform::List<Scaleform::Render::TreeCacheNode,Scaleform::Render::TreeCacheNode,Scaleform::ListNode<Scaleform::Render::TreeCacheNode> > &);
	Scaleform::ListNode<Scaleform::Render::TreeCacheNode> Root; // 0x0
};
class Scaleform::ListSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify> :
	Scaleform::List<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify,Scaleform::ListNodeSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify> >
{
public:
	ListSafe<Scaleform::Render::HALNotify,Scaleform::Render::HALNotify>();
};
class Scaleform::Ptr<Scaleform::Render::GlyphCache>
{
protected:
	Scaleform::Render::GlyphCache * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GlyphCache>(const Scaleform::Ptr<Scaleform::Render::GlyphCache> &);
	Ptr<Scaleform::Render::GlyphCache>(Scaleform::Render::GlyphCache *);
	Ptr<Scaleform::Render::GlyphCache>(Scaleform::Ptr<Scaleform::Render::GlyphCache> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GlyphCache>(Scaleform::Pickable<Scaleform::Render::GlyphCache>);
	Ptr<Scaleform::Render::GlyphCache>(Scaleform::Render::GlyphCache &);
	Ptr<Scaleform::Render::GlyphCache>();
	~Ptr<Scaleform::Render::GlyphCache>();
	bool operator==(Scaleform::Render::GlyphCache *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GlyphCache> &);
	bool operator!=(Scaleform::Render::GlyphCache *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GlyphCache> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GlyphCache> &);
	Scaleform::Ptr<Scaleform::Render::GlyphCache> & operator=(Scaleform::Pickable<Scaleform::Render::GlyphCache>);
	const Scaleform::Ptr<Scaleform::Render::GlyphCache> & operator=(Scaleform::Render::GlyphCache &);
	const Scaleform::Ptr<Scaleform::Render::GlyphCache> & operator=(Scaleform::Render::GlyphCache *);
	const Scaleform::Ptr<Scaleform::Render::GlyphCache> & operator=(const Scaleform::Ptr<Scaleform::Render::GlyphCache> &);
	Scaleform::Ptr<Scaleform::Render::GlyphCache> & SetPtr(Scaleform::Pickable<Scaleform::Render::GlyphCache>);
	Scaleform::Ptr<Scaleform::Render::GlyphCache> & SetPtr(Scaleform::Render::GlyphCache &);
	Scaleform::Ptr<Scaleform::Render::GlyphCache> & SetPtr(Scaleform::Render::GlyphCache *);
	Scaleform::Ptr<Scaleform::Render::GlyphCache> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GlyphCache> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GlyphCache * & GetRawRef();
	Scaleform::Render::GlyphCache * GetPtr();
	Scaleform::Render::GlyphCache & operator*();
	Scaleform::Render::GlyphCache * operator->();
	Scaleform::Render::GlyphCache * operator class Scaleform::Render::GlyphCache *();
	Scaleform::Ptr<Scaleform::Render::GlyphCache> & Pick(Scaleform::Render::GlyphCache *);
	Scaleform::Ptr<Scaleform::Render::GlyphCache> & Pick(Scaleform::Pickable<Scaleform::Render::GlyphCache>);
	Scaleform::Ptr<Scaleform::Render::GlyphCache> & Pick(Scaleform::Ptr<Scaleform::Render::GlyphCache> &);
};
class Scaleform::Ptr<Scaleform::Render::MatrixState>
{
protected:
	Scaleform::Render::MatrixState * pObject; // 0x0
public:
	Ptr<Scaleform::Render::MatrixState>(const Scaleform::Ptr<Scaleform::Render::MatrixState> &);
	Ptr<Scaleform::Render::MatrixState>(Scaleform::Render::MatrixState *);
	Ptr<Scaleform::Render::MatrixState>(Scaleform::Ptr<Scaleform::Render::MatrixState> &, Scaleform::PickType);
	Ptr<Scaleform::Render::MatrixState>(Scaleform::Pickable<Scaleform::Render::MatrixState>);
	Ptr<Scaleform::Render::MatrixState>(Scaleform::Render::MatrixState &);
	Ptr<Scaleform::Render::MatrixState>();
	~Ptr<Scaleform::Render::MatrixState>();
	bool operator==(Scaleform::Render::MatrixState *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::MatrixState> &);
	bool operator!=(Scaleform::Render::MatrixState *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::MatrixState> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::MatrixState> &);
	Scaleform::Ptr<Scaleform::Render::MatrixState> & operator=(Scaleform::Pickable<Scaleform::Render::MatrixState>);
	const Scaleform::Ptr<Scaleform::Render::MatrixState> & operator=(Scaleform::Render::MatrixState &);
	const Scaleform::Ptr<Scaleform::Render::MatrixState> & operator=(Scaleform::Render::MatrixState *);
	const Scaleform::Ptr<Scaleform::Render::MatrixState> & operator=(const Scaleform::Ptr<Scaleform::Render::MatrixState> &);
	Scaleform::Ptr<Scaleform::Render::MatrixState> & SetPtr(Scaleform::Pickable<Scaleform::Render::MatrixState>);
	Scaleform::Ptr<Scaleform::Render::MatrixState> & SetPtr(Scaleform::Render::MatrixState &);
	Scaleform::Ptr<Scaleform::Render::MatrixState> & SetPtr(Scaleform::Render::MatrixState *);
	Scaleform::Ptr<Scaleform::Render::MatrixState> & SetPtr(const Scaleform::Ptr<Scaleform::Render::MatrixState> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::MatrixState * & GetRawRef();
	Scaleform::Render::MatrixState * GetPtr();
	Scaleform::Render::MatrixState & operator*();
	Scaleform::Render::MatrixState * operator->();
	Scaleform::Render::MatrixState * operator class Scaleform::Render::MatrixState *();
	Scaleform::Ptr<Scaleform::Render::MatrixState> & Pick(Scaleform::Render::MatrixState *);
	Scaleform::Ptr<Scaleform::Render::MatrixState> & Pick(Scaleform::Pickable<Scaleform::Render::MatrixState>);
	Scaleform::Ptr<Scaleform::Render::MatrixState> & Pick(Scaleform::Ptr<Scaleform::Render::MatrixState> &);
};