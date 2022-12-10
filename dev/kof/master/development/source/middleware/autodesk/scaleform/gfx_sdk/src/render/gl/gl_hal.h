#pragma once

enum Scaleform::Render::GL::HALConfigFlags
{
	HALConfig_DynamicShaderCompile = 67108864,
	HALConfig_DisableBinaryShaders = 2,
	HALConfig_MultipleShaderCacheFiles = 4,
	HALConfig_DisableShaderPipelines = 8,
	HALConfig_DisableMultipassShaderCompile = 16,
	HALConfig_DebugMessages = 32,
	HALConfig_NoVAO = 64,
	HALConfig_TraceGLExecution = 128,
};
struct Scaleform::Render::GL::HALInitParams :
	Scaleform::Render::HALInitParams
{
	Scaleform::String BinaryShaderPath; // 0x28
	HALInitParams(Scaleform::Render::GL::HALInitParams &);
	HALInitParams(const Scaleform::Render::GL::HALInitParams &);
	HALInitParams(unsigned long, unsigned long, const Scaleform::String &);
	void SetTextureManager(Scaleform::Render::GL::TextureManager *);
	Scaleform::Render::GL::TextureManager * GetTextureManager();
	~HALInitParams();
	Scaleform::Render::GL::HALInitParams & operator=(Scaleform::Render::GL::HALInitParams &);
	Scaleform::Render::GL::HALInitParams & operator=(const Scaleform::Render::GL::HALInitParams &);
	void __dflt_ctor_closure();
};
class Scaleform::Render::GL::HAL :
	Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>
{
	class BaseHAL;
public:
	HAL(Scaleform::Render::ThreadCommandQueue *);
	virtual ~HAL();
	virtual Scaleform::Render::RenderTarget * CreateRenderTarget(Scaleform::Render::Texture *, bool);
	Scaleform::Render::RenderTarget * CreateRenderTarget(unsigned long);
	virtual Scaleform::Render::RenderTarget * CreateTempRenderTarget(const Scaleform::Render::Size<unsigned long> &, bool);
	virtual bool InitHAL(const Scaleform::Render::HALInitParams &);
	virtual bool ShutdownHAL();
	virtual bool PrepareForReset();
	virtual bool RestoreAfterReset();
	virtual bool BeginScene();
	virtual bool EndScene();
	virtual bool Submit();
	virtual void ClearSolidRectangle(const Scaleform::Render::Rect<int> &, Scaleform::Render::Color, bool);
	virtual bool IsRasterModeSupported(Scaleform::Render::HAL::RasterModeType);
	virtual float GetViewportScaling();
	virtual Scaleform::Render::RenderSync * GetRenderSync();
	virtual Scaleform::Render::RenderEvents & GetEvents();
	virtual Scaleform::Render::TextureManager * GetTextureManager();
	virtual Scaleform::Render::GL::MeshCache & GetMeshCache();
	Scaleform::Render::GL::GraphicsDevice * GetGraphicsDevice();
	virtual Scaleform::Render::GraphicsDevice * GetGraphicsDeviceBase();
	virtual void MapVertexFormat(Scaleform::Render::PrimitiveFillType, const Scaleform::Render::VertexFormat *, const Scaleform::Render::VertexFormat * *, const Scaleform::Render::VertexFormat * *, const Scaleform::Render::VertexFormat * *, unsigned long);
	Scaleform::Render::GL::ShaderObject * GetStaticShader(Scaleform::Render::GL::ShaderDesc::ShaderType);
	bool ShouldUseVAOs();
	Scaleform::Render::GL::HAL * GetHAL();
	bool CheckGLVersion(unsigned long, unsigned long);
	bool CheckExtension(Scaleform::Render::GL::GLExtensionType);
	unsigned long GetCaps();
protected:
	virtual void beginDisplay(Scaleform::Render::BeginDisplayData *);
	virtual void updateViewport();
	virtual bool createDefaultRenderBuffer();
	virtual void setRenderTargetImpl(Scaleform::Render::RenderTargetData *, unsigned long, const Scaleform::Render::Color &);
	virtual bool checkDepthStencilBufferCaps();
	virtual void applyDepthStencilMode(Scaleform::Render::HAL::DepthStencilMode, unsigned long);
	virtual void applyRasterModeImpl(Scaleform::Render::HAL::RasterModeType);
	virtual void applyBlendModeImpl(Scaleform::Render::BlendMode, bool, bool);
	virtual void applyBlendModeEnableImpl(bool);
	virtual void setBatchUnitSquareVertexStream();
	void setVertexArray(const Scaleform::Render::VertexFormat *, Scaleform::Render::GL::HALGLBuffer *, Scaleform::Render::GL::HALGLVertexArray *);
	unsigned long long setVertexArray(const Scaleform::Render::VertexFormat *, Scaleform::Render::MeshCacheItem *, unsigned long long);
	virtual unsigned long long setVertexArray(const Scaleform::Render::ComplexMesh::FillRecord &, unsigned long, Scaleform::Render::MeshCacheItem *);
	virtual unsigned long long setVertexArray(Scaleform::Render::PrimitiveBatch *, Scaleform::Render::MeshCacheItem *);
	virtual void drawPrimitive(unsigned long, unsigned long);
	virtual void drawIndexedPrimitive(unsigned long, unsigned long, unsigned long, unsigned long long, unsigned long long);
	virtual void drawIndexedInstanced(unsigned long, unsigned long, unsigned long, unsigned long long, unsigned long long);
	Scaleform::Render::Size<unsigned long> getFboInfo(Scaleform::Render::GL::HALGLFramebuffer *, Scaleform::Render::GL::HALGLFramebuffer * &, bool);
	Scaleform::Render::DepthStencilBuffer * createCompatibleDepthStencil(const Scaleform::Render::Size<unsigned long> &, bool);
	long EnabledVertexArrays; // 0xCA840
	long MaxVertexAttributes; // 0xCA844
	bool FilterVertexBufferSet; // 0xCA848
	bool DeterminedDepthStencilFormat; // 0xCA849
	Scaleform::Render::GL::MeshCache Cache; // 0xCA850
	Scaleform::Render::GL::RenderSync RSync; // 0xCAAB8
	Scaleform::Ptr<Scaleform::Render::GL::TextureManager> pTextureManager; // 0xCAB90
	Scaleform::Render::GL::RenderEvents Events; // 0xCAB98
	Scaleform::Render::GL::GraphicsDeviceImmediate ImmediateDevice; // 0xCAC10
	Scaleform::Render::GL::GraphicsDevice * pDevice; // 0xCB538
	Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> pRecordingDevice; // 0xCB540
	Scaleform::Render::PrimitiveBatch::BatchType PrevBatchType; // 0xCB548
};
class Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> :
	Scaleform::Render::HAL
{
	struct Shader;
public:
	ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>(Scaleform::Render::ThreadCommandQueue *);
	virtual bool InitHAL(const Scaleform::Render::HALInitParams &);
	virtual bool ShutdownHAL();
	virtual bool BeginScene();
	virtual bool EndScene();
	virtual unsigned long GetMaximumBatchCount(Scaleform::Render::Primitive *);
	virtual void PushBlendMode(Scaleform::Render::BlendPrimitive *);
	virtual void PopBlendMode();
	virtual void ClearSolidRectangle(const Scaleform::Render::Rect<int> &, Scaleform::Render::Color, bool);
	virtual void DrawProcessedPrimitive(Scaleform::Render::Primitive *, Scaleform::Render::PrimitiveBatch *, Scaleform::Render::PrimitiveBatch *);
	virtual void DrawProcessedComplexMeshes(Scaleform::Render::ComplexMesh *, const Scaleform::Render::StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix> &);
	virtual void DrawableCxform(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Cxform *);
	virtual void DrawableCompare(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *);
	virtual void DrawableCopyChannel(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix4x4<float> *);
	virtual void DrawableMerge(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix4x4<float> *);
	virtual void DrawableCopyPixels(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix2x4<float> &, bool, bool);
	virtual void DrawablePaletteMap(Scaleform::Render::Texture * *, const Scaleform::Render::Matrix2x4<float> *, const Scaleform::Render::Matrix2x4<float> &, unsigned long, const unsigned long *);
	virtual void DrawableCopyback(Scaleform::Render::Texture *, const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Matrix2x4<float> &, unsigned long);
	Scaleform::Render::GL::ShaderManager SManager; // 0x11A0
	Scaleform::Render::GL::ShaderInterface ShaderData; // 0xC97A0
protected:
	void setBatchUnitSquareVertexStream();
	void setBatchUnitSquareVertexStreamPerDraw();
	unsigned long long setVertexArray(const Scaleform::Render::ComplexMesh::FillRecord &, unsigned long, Scaleform::Render::MeshCacheItem *);
	unsigned long long setVertexArray(Scaleform::Render::PrimitiveBatch *, Scaleform::Render::MeshCacheItem *);
	void setVertexArrayPerDraw(const Scaleform::Render::ComplexMesh::FillRecord &, unsigned long, Scaleform::Render::MeshCacheItem *);
	void setVertexArrayPerDraw(Scaleform::Render::PrimitiveBatch *, Scaleform::Render::MeshCacheItem *);
	void setLinearStreamSource(Scaleform::Render::PrimitiveBatch::BatchType);
	void setInstancedStreamSource(unsigned long long, unsigned long long);
	void drawPrimitive(unsigned long, unsigned long);
	void drawIndexedPrimitive(unsigned long, unsigned long, unsigned long, unsigned long long, unsigned long long);
	void drawIndexedInstanced(unsigned long, unsigned long, unsigned long, unsigned long long, unsigned long long);
	virtual void drawScreenQuad();
	virtual void drawMaskClearRectangles(const Scaleform::Render::Matrix2x4<float> *, unsigned long long);
	void drawFilter(const Scaleform::Render::Matrix2x4<float> &, const Scaleform::Render::Cxform &, const Scaleform::Render::Filter *, Scaleform::Ptr<Scaleform::Render::RenderTarget> *, unsigned long *, unsigned long, unsigned long, Scaleform::Render::VertexFormat *);
	virtual void drawUncachedFilter(const Scaleform::Render::HAL::FilterStackEntry &);
	virtual void drawCachedFilter(Scaleform::Render::FilterPrimitive *);
	void drawBlendPrimitive(Scaleform::Render::BlendPrimitive *, Scaleform::Render::Texture *, Scaleform::Render::Texture *, Scaleform::Render::Texture *);
	virtual void profilerDrawCacheablePrimArea(const Scaleform::Render::CacheablePrimitive *);
	virtual void profilerApplyUniform(Scaleform::Render::ProfilerUniform, unsigned long, float *);
	Scaleform::Render::VertexFormat * MappedXY16iAlphaTexture[3]; // 0xCA810
	Scaleform::Render::VertexFormat * MappedXY16iAlphaSolid[3]; // 0xCA828
public:
	virtual ~ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>();
};
float Scaleform::Render::GL::HAL::GetViewportScaling(); // 0x1405BF5D0
Scaleform::Render::TextureManager * Scaleform::Render::GL::HAL::GetTextureManager(); // 0x1405BF530
Scaleform::Render::GL::MeshCache & Scaleform::Render::GL::HAL::GetMeshCache(); // 0x1405BF3C0
Scaleform::Render::GL::GraphicsDevice * Scaleform::Render::GL::HAL::GetGraphicsDevice(); // 0x1405BF310
class Scaleform::Ptr<Scaleform::Render::GL::TextureManager>
{
protected:
	Scaleform::Render::GL::TextureManager * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GL::TextureManager>(const Scaleform::Ptr<Scaleform::Render::GL::TextureManager> &);
	Ptr<Scaleform::Render::GL::TextureManager>(Scaleform::Render::GL::TextureManager *);
	Ptr<Scaleform::Render::GL::TextureManager>(Scaleform::Ptr<Scaleform::Render::GL::TextureManager> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GL::TextureManager>(Scaleform::Pickable<Scaleform::Render::GL::TextureManager>);
	Ptr<Scaleform::Render::GL::TextureManager>(Scaleform::Render::GL::TextureManager &);
	Ptr<Scaleform::Render::GL::TextureManager>();
	~Ptr<Scaleform::Render::GL::TextureManager>();
	bool operator==(Scaleform::Render::GL::TextureManager *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GL::TextureManager> &);
	bool operator!=(Scaleform::Render::GL::TextureManager *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GL::TextureManager> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GL::TextureManager> &);
	Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & operator=(Scaleform::Pickable<Scaleform::Render::GL::TextureManager>);
	const Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & operator=(Scaleform::Render::GL::TextureManager &);
	const Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & operator=(Scaleform::Render::GL::TextureManager *);
	const Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & operator=(const Scaleform::Ptr<Scaleform::Render::GL::TextureManager> &);
	Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & SetPtr(Scaleform::Pickable<Scaleform::Render::GL::TextureManager>);
	Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & SetPtr(Scaleform::Render::GL::TextureManager &);
	Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & SetPtr(Scaleform::Render::GL::TextureManager *);
	Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GL::TextureManager> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GL::TextureManager * & GetRawRef();
	Scaleform::Render::GL::TextureManager * GetPtr();
	Scaleform::Render::GL::TextureManager & operator*();
	Scaleform::Render::GL::TextureManager * operator->();
	Scaleform::Render::GL::TextureManager * operator class Scaleform::Render::GL::TextureManager *();
	Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & Pick(Scaleform::Render::GL::TextureManager *);
	Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & Pick(Scaleform::Pickable<Scaleform::Render::GL::TextureManager>);
	Scaleform::Ptr<Scaleform::Render::GL::TextureManager> & Pick(Scaleform::Ptr<Scaleform::Render::GL::TextureManager> &);
};
class Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder>
{
protected:
	Scaleform::Render::GL::GraphicsDeviceRecorder * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder>(const Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> &);
	Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder>(Scaleform::Render::GL::GraphicsDeviceRecorder *);
	Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder>(Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder>(Scaleform::Pickable<Scaleform::Render::GL::GraphicsDeviceRecorder>);
	Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder>(Scaleform::Render::GL::GraphicsDeviceRecorder &);
	Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder>();
	~Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder>();
	bool operator==(Scaleform::Render::GL::GraphicsDeviceRecorder *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> &);
	bool operator!=(Scaleform::Render::GL::GraphicsDeviceRecorder *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> &);
	Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & operator=(Scaleform::Pickable<Scaleform::Render::GL::GraphicsDeviceRecorder>);
	const Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & operator=(Scaleform::Render::GL::GraphicsDeviceRecorder &);
	const Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & operator=(Scaleform::Render::GL::GraphicsDeviceRecorder *);
	const Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & operator=(const Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> &);
	Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & SetPtr(Scaleform::Pickable<Scaleform::Render::GL::GraphicsDeviceRecorder>);
	Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & SetPtr(Scaleform::Render::GL::GraphicsDeviceRecorder &);
	Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & SetPtr(Scaleform::Render::GL::GraphicsDeviceRecorder *);
	Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GL::GraphicsDeviceRecorder * & GetRawRef();
	Scaleform::Render::GL::GraphicsDeviceRecorder * GetPtr();
	Scaleform::Render::GL::GraphicsDeviceRecorder & operator*();
	Scaleform::Render::GL::GraphicsDeviceRecorder * operator->();
	Scaleform::Render::GL::GraphicsDeviceRecorder * operator class Scaleform::Render::GL::GraphicsDeviceRecorder *();
	Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & Pick(Scaleform::Render::GL::GraphicsDeviceRecorder *);
	Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & Pick(Scaleform::Pickable<Scaleform::Render::GL::GraphicsDeviceRecorder>);
	Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> & Pick(Scaleform::Ptr<Scaleform::Render::GL::GraphicsDeviceRecorder> &);
};
class Scaleform::Render::GL::ProfilerHAL :
	Scaleform::Render::ProfilerHAL<Scaleform::Render::GL::HAL>
{
public:
	ProfilerHAL(Scaleform::Render::ThreadCommandQueue *);
	virtual ~ProfilerHAL();
};
class Scaleform::Render::ProfilerHAL<Scaleform::Render::GL::HAL> :
	Scaleform::Render::GL::HAL
{
public:
	ProfilerHAL<Scaleform::Render::GL::HAL>(Scaleform::Render::ThreadCommandQueue *);
	virtual ~ProfilerHAL<Scaleform::Render::GL::HAL>();
};
class Scaleform::Render::GL::RenderTargetData :
	Scaleform::Render::RenderTargetData
{
public:
	Scaleform::Render::GL::HAL * pHAL; // 0x20
	Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> FBOID; // 0x28
	static void UpdateData(Scaleform::Render::RenderBuffer *, Scaleform::Render::GL::HAL *, Scaleform::Render::GL::HALGLFramebuffer *, Scaleform::Render::DepthStencilBuffer *);
	static void UpdateData(Scaleform::Render::RenderBuffer *, Scaleform::Render::GL::HAL *, unsigned long, Scaleform::Render::DepthStencilBuffer *);
	virtual ~RenderTargetData();
	Scaleform::Render::GL::HAL * GetHAL();
	RenderTargetData(const Scaleform::Render::GL::RenderTargetData &);
private:
	RenderTargetData(Scaleform::Render::RenderBuffer *, Scaleform::Render::GL::HAL *, Scaleform::Render::GL::HALGLFramebuffer *, Scaleform::Render::DepthStencilBuffer *);
public:
	Scaleform::Render::GL::RenderTargetData & operator=(const Scaleform::Render::GL::RenderTargetData &);
};
Scaleform::Render::GL::RenderTargetData::RenderTargetData(Scaleform::Render::RenderBuffer * buffer, Scaleform::Render::GL::HAL * hal, Scaleform::Render::GL::HALGLFramebuffer * fboID, Scaleform::Render::DepthStencilBuffer * pdsb); // 0x1405BB780