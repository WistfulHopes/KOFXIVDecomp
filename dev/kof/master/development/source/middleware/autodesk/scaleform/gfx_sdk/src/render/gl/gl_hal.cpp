#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_texture.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffergeneric.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecachegeneric.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_sync.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_extensions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_graphicsdevice.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_graphicsdevice.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shaderhal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"

class Scaleform::Render::GL::MatrixState :
	Scaleform::Render::MatrixState
{
public:
	MatrixState(Scaleform::Render::GL::MatrixState &);
	MatrixState(const Scaleform::Render::GL::MatrixState &);
	MatrixState();
	MatrixState(Scaleform::Render::GL::HAL *);
protected:
	virtual void recalculateUVPOC();
public:
	virtual ~MatrixState();
	Scaleform::Render::GL::MatrixState & operator=(Scaleform::Render::GL::MatrixState &);
	Scaleform::Render::GL::MatrixState & operator=(const Scaleform::Render::GL::MatrixState &);
};
unsigned long Scaleform::Render::VertexTypeSizes[6]; // 0x140A076C0
void Scaleform::Render::GL::MatrixState::recalculateUVPOC(); // 0x1405C6860
class Scaleform::Render::GL::MatrixStateFactory :
	Scaleform::Render::MatrixStateFactory
{
public:
	MatrixStateFactory(Scaleform::Render::GL::MatrixStateFactory &);
	MatrixStateFactory(const Scaleform::Render::GL::MatrixStateFactory &);
	MatrixStateFactory(Scaleform::Render::GL::HAL *, Scaleform::MemoryHeap *);
	virtual Scaleform::Render::GL::MatrixState * CreateMatrixState();
private:
	Scaleform::Render::GL::HAL * pHAL; // 0x10
public:
	virtual ~MatrixStateFactory();
	Scaleform::Render::GL::MatrixStateFactory & operator=(Scaleform::Render::GL::MatrixStateFactory &);
	Scaleform::Render::GL::MatrixStateFactory & operator=(const Scaleform::Render::GL::MatrixStateFactory &);
};
Scaleform::Render::GL::MatrixState * Scaleform::Render::GL::MatrixStateFactory::CreateMatrixState(); // 0x1405BCFC0
Scaleform::Render::GL::HAL::HAL(Scaleform::Render::ThreadCommandQueue * commandQueue); // 0x1405BB650
Scaleform::Render::GL::HAL::~HAL(); // 0x1405BBE20
Scaleform::Render::RenderTarget * Scaleform::Render::GL::HAL::CreateRenderTarget(unsigned long fbo); // 0x1405BD050
Scaleform::Render::RenderTarget * Scaleform::Render::GL::HAL::CreateRenderTarget(Scaleform::Render::Texture * texture, bool needsStencil); // 0x1405BD190
Scaleform::Render::RenderTarget * Scaleform::Render::GL::HAL::CreateTempRenderTarget(const Scaleform::Render::Size<unsigned long> & size, bool needsStencil); // 0x1405BD3E0
bool Scaleform::Render::GL::HAL::InitHAL(const Scaleform::Render::HALInitParams & paramsIn); // 0x1405BF690
class Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric>
{
protected:
	Scaleform::Render::TextureCacheGeneric * pObject; // 0x0
public:
	Ptr<Scaleform::Render::TextureCacheGeneric>(const Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> &);
	Ptr<Scaleform::Render::TextureCacheGeneric>(Scaleform::Render::TextureCacheGeneric *);
	Ptr<Scaleform::Render::TextureCacheGeneric>(Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> &, Scaleform::PickType);
	Ptr<Scaleform::Render::TextureCacheGeneric>(Scaleform::Pickable<Scaleform::Render::TextureCacheGeneric>);
	Ptr<Scaleform::Render::TextureCacheGeneric>(Scaleform::Render::TextureCacheGeneric &);
	Ptr<Scaleform::Render::TextureCacheGeneric>();
	~Ptr<Scaleform::Render::TextureCacheGeneric>();
	bool operator==(Scaleform::Render::TextureCacheGeneric *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> &);
	bool operator!=(Scaleform::Render::TextureCacheGeneric *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> &);
	Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & operator=(Scaleform::Pickable<Scaleform::Render::TextureCacheGeneric>);
	const Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & operator=(Scaleform::Render::TextureCacheGeneric &);
	const Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & operator=(Scaleform::Render::TextureCacheGeneric *);
	const Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & operator=(const Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> &);
	Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & SetPtr(Scaleform::Pickable<Scaleform::Render::TextureCacheGeneric>);
	Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & SetPtr(Scaleform::Render::TextureCacheGeneric &);
	Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & SetPtr(Scaleform::Render::TextureCacheGeneric *);
	Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & SetPtr(const Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::TextureCacheGeneric * & GetRawRef();
	Scaleform::Render::TextureCacheGeneric * GetPtr();
	Scaleform::Render::TextureCacheGeneric & operator*();
	Scaleform::Render::TextureCacheGeneric * operator->();
	Scaleform::Render::TextureCacheGeneric * operator class Scaleform::Render::TextureCacheGeneric *();
	Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & Pick(Scaleform::Render::TextureCacheGeneric *);
	Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & Pick(Scaleform::Pickable<Scaleform::Render::TextureCacheGeneric>);
	Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> & Pick(Scaleform::Ptr<Scaleform::Render::TextureCacheGeneric> &);
};
class Scaleform::Render::GL::ScopedImmediateDeviceUsage
{
public:
	ScopedImmediateDeviceUsage(Scaleform::Render::GL::HAL *, bool);
	~ScopedImmediateDeviceUsage();
private:
	Scaleform::Render::GL::HAL * pHAL; // 0x0
	Scaleform::Render::GL::GraphicsDevice * pPreviousGraphicsDevice; // 0x8
};
bool Scaleform::Render::GL::HAL::ShutdownHAL(); // 0x1405C3340
bool Scaleform::Render::GL::HAL::PrepareForReset(); // 0x1405C0AE0
bool Scaleform::Render::GL::HAL::RestoreAfterReset(); // 0x1405C11A0
bool Scaleform::Render::GL::HAL::BeginScene(); // 0x1405BC800
bool Scaleform::Render::GL::HAL::EndScene(); // 0x1405BEE90
bool Scaleform::Render::GL::HAL::Submit(); // 0x1405C3760
void Scaleform::Render::GL::HAL::ClearSolidRectangle(const Scaleform::Render::Rect<int> & r, Scaleform::Render::Color color, bool blend); // 0x1405BCCC0
bool Scaleform::Render::GL::HAL::IsRasterModeSupported(Scaleform::Render::HAL::RasterModeType mode); // 0x1400B8180
Scaleform::Render::RenderSync * Scaleform::Render::GL::HAL::GetRenderSync(); // 0x1405BF410
void Scaleform::Render::GL::HAL::MapVertexFormat(Scaleform::Render::PrimitiveFillType fill, const Scaleform::Render::VertexFormat * sourceFormat, const Scaleform::Render::VertexFormat * * single, const Scaleform::Render::VertexFormat * * batch, const Scaleform::Render::VertexFormat * * instanced, unsigned long __formal); // 0x1405C01F0
Scaleform::Render::GL::ShaderObject * Scaleform::Render::GL::HAL::GetStaticShader(Scaleform::Render::GL::ShaderDesc::ShaderType shaderType); // 0x1405BF450
bool Scaleform::Render::GL::HAL::ShouldUseVAOs(); // 0x1405C31B0
bool Scaleform::Render::GL::HAL::CheckGLVersion(unsigned long reqMajor, unsigned long reqMinor); // 0x1405BC9C0
bool Scaleform::Render::GL::HAL::CheckExtension(Scaleform::Render::GL::GLExtensionType type); // 0x1405BC990
unsigned long Scaleform::Render::GL::HAL::GetCaps(); // 0x1405BF290
void Scaleform::Render::GL::HAL::beginDisplay(Scaleform::Render::BeginDisplayData * data); // 0x1405C3F60
void Scaleform::Render::GL::HAL::updateViewport(); // 0x1405C72D0
bool Scaleform::Render::GL::HAL::createDefaultRenderBuffer(); // 0x1405C4520
void Scaleform::Render::GL::HAL::setRenderTargetImpl(Scaleform::Render::RenderTargetData * phdinput, unsigned long flags, const Scaleform::Render::Color & clearColor); // 0x1405C6E00
bool Scaleform::Render::GL::HAL::checkDepthStencilBufferCaps(); // 0x1405C4070
void Scaleform::Render::GL::HAL::applyDepthStencilMode(Scaleform::Render::HAL::DepthStencilMode mode, unsigned long stencilRef); // 0x1405C3C70
void Scaleform::Render::GL::HAL::applyRasterModeImpl(Scaleform::Render::HAL::RasterModeType mode); // 0x1405C3F10
void Scaleform::Render::GL::HAL::applyBlendModeImpl(Scaleform::Render::BlendMode mode, bool sourceAc, bool forceAc); // 0x1405C3B10
void Scaleform::Render::GL::HAL::applyBlendModeEnableImpl(bool enabled); // 0x1405C3AC0
bool Scaleform::Render::GL::VertexBuilderVET(unsigned long attr, unsigned long & vet, bool & norm); // 0x1405C39A0
class Scaleform::Render::GL::VertexBuilder_Legacy
{
public:
	Scaleform::Render::GL::HAL * pHal; // 0x0
	unsigned long Stride; // 0x8
	unsigned char * VertexOffset; // 0x10
	VertexBuilder_Legacy(Scaleform::Render::GL::HAL *, unsigned long, Scaleform::Render::GL::HALGLBuffer *, Scaleform::Render::GL::HALGLBuffer *, unsigned char *);
	Scaleform::Render::GL::HAL * GetHAL();
	void Add(long, long, long, long);
	void Finish(long);
};
void Scaleform::Render::GL::VertexBuilder_Legacy::Add(long vi, long attr, long ac, long offset); // 0x1405BC680
class Scaleform::Render::GL::VertexBuilder_Core30
{
public:
	Scaleform::Render::GL::HAL * pHal; // 0x0
	unsigned long Stride; // 0x8
	Scaleform::Render::GL::MeshCacheItem * pMesh; // 0x10
	bool NeedsGeneration; // 0x18
	unsigned char * VertexOffset; // 0x20
	VertexBuilder_Core30(Scaleform::Render::GL::HAL *, const Scaleform::Render::VertexFormat *, Scaleform::Render::GL::MeshCacheItem *, unsigned long long);
	Scaleform::Render::GL::HAL * GetHAL();
	void Add(long, long, long, long);
	void Finish(long);
};
Scaleform::Render::GL::VertexBuilder_Core30::VertexBuilder_Core30(Scaleform::Render::GL::HAL * phal, const Scaleform::Render::VertexFormat * pformat, Scaleform::Render::GL::MeshCacheItem * pmesh, unsigned long long vbOffset); // 0x1405BB810
Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::~FramebufferAttachment(); // 0x1405BBC80
Scaleform::Render::GL::GraphicsDevice::~GraphicsDevice(); // 0x1405BBD00
unsigned long long Scaleform::Render::GL::HAL::setVertexArray(Scaleform::Render::PrimitiveBatch * pbatch, Scaleform::Render::MeshCacheItem * pmesh); // 0x1405C7250
unsigned long long Scaleform::Render::GL::HAL::setVertexArray(const Scaleform::Render::ComplexMesh::FillRecord & fr, unsigned long formatIndex, Scaleform::Render::MeshCacheItem * pmesh); // 0x1405C71C0
unsigned long long Scaleform::Render::GL::HAL::setVertexArray(const Scaleform::Render::VertexFormat * pformat, Scaleform::Render::MeshCacheItem * pmeshBase, unsigned long long vboffset); // 0x1405C7070
void Scaleform::Render::GL::HAL::setVertexArray(const Scaleform::Render::VertexFormat * pFormat, Scaleform::Render::GL::HALGLBuffer * buffer, Scaleform::Render::GL::HALGLVertexArray * vao); // 0x1405C6FB0
void Scaleform::Render::GL::HAL::setBatchUnitSquareVertexStream(); // 0x1405C6C90
void Scaleform::Render::GL::HAL::drawPrimitive(unsigned long indexCount, unsigned long meshCount); // 0x1405C5750
void Scaleform::Render::GL::HAL::drawIndexedPrimitive(unsigned long indexCount, unsigned long vertexCount, unsigned long meshCount, unsigned long long indexPtr, unsigned long long vertexOffset); // 0x1405C53A0
void Scaleform::Render::GL::HAL::drawIndexedInstanced(unsigned long indexCount, unsigned long vertexCount, unsigned long meshCount, unsigned long long indexPtr, unsigned long long vertexOffset); // 0x1405C5350
Scaleform::Render::Size<unsigned long> Scaleform::Render::GL::HAL::getFboInfo(Scaleform::Render::GL::HALGLFramebuffer * fbo, Scaleform::Render::GL::HALGLFramebuffer * & currentFBO, bool useCurrent); // 0x1405C6210
Scaleform::Render::DepthStencilBuffer * Scaleform::Render::GL::HAL::createCompatibleDepthStencil(const Scaleform::Render::Size<unsigned long> & size, bool temporary); // 0x1405C42D0
void Scaleform::Render::GL::RenderEvents::beginImpl(const char * eventName); // 0x1405C3FA0
void Scaleform::Render::GL::RenderEvents::endImpl(); // 0x1405C5F70
void Scaleform::Render::GL::RenderTargetData::UpdateData(Scaleform::Render::RenderBuffer * buffer, Scaleform::Render::GL::HAL * phal, unsigned long fboID, Scaleform::Render::DepthStencilBuffer * pdsb); // 0x1405C3820
void Scaleform::Render::GL::RenderTargetData::UpdateData(Scaleform::Render::RenderBuffer * buffer, Scaleform::Render::GL::HAL * phal, Scaleform::Render::GL::HALGLFramebuffer * fboID, Scaleform::Render::DepthStencilBuffer * pdsb); // 0x1405C38D0
Scaleform::Render::GL::RenderTargetData::~RenderTargetData(); // 0x1405BBEF0
Scaleform::Render::GL::ShaderManager::~ShaderManager(); // 0x1405BBF90
Scaleform::Render::RenderEvents & Scaleform::Render::GL::HAL::GetEvents(); // 0x1405BF300//decompilation failure at 140A076C0!
void __fastcall Scaleform::Render::BuildVertexArray<Scaleform::Render::GL::VertexBuilder_Core30>(
        const Scaleform::Render::VertexFormat *pfmt,
        Scaleform::Render::GL::VertexBuilder_Core30 *output)
{
  Scaleform::Render::VertexElement *pElements; // rbx
  unsigned int v3; // esi
  unsigned int Attribute; // ecx
  unsigned int v6; // edx
  __int64 Offset; // r15
  unsigned int v8; // edi
  unsigned int v9; // ebp
  Scaleform::Render::GL::GraphicsDevice *v10; // rax
  Scaleform::Render::GL::GraphicsDevice *v11; // rax
  int v12; // [rsp+20h] [rbp-48h]
  bool norm; // [rsp+70h] [rbp+8h] BYREF
  unsigned int vet; // [rsp+80h] [rbp+18h] BYREF

  pElements = pfmt->pElements;
  v3 = 0;
  Attribute = pElements->Attribute;
  while ( Attribute )
  {
    v6 = pElements[1].Attribute;
    Offset = (int)pElements->Offset;
    v8 = Attribute & 0xF;
    if ( (((unsigned __int16)Attribute | (unsigned __int16)v6) & 0xFF00) == 12800 )
    {
      ++pElements;
    }
    else
    {
      if ( (v6 & 0xF00) != 1024
        || (((unsigned __int16)Attribute | (unsigned __int16)pElements[2].Attribute) & 0xFF00) != 12800 )
      {
        goto LABEL_8;
      }
      pElements += 2;
    }
    v8 = 4;
LABEL_8:
    if ( output->NeedsGeneration && Scaleform::Render::GL::VertexBuilderVET(pElements->Attribute, &vet, &norm) )
    {
      v9 = vet;
      if ( vet == 5121 && v8 < 4 )
        v8 = 4;
      v10 = output->pHal->GetGraphicsDevice(output->pHal);
      v10->glEnableVertexAttribArray(v10, v3);
      v11 = output->pHal->GetGraphicsDevice(output->pHal);
      LOBYTE(v12) = norm;
      v11->glVertexAttribPointer(v11, v3, v8, v9, v12, output->Stride, &output->VertexOffset[Offset]);
    }
    Attribute = pElements[1].Attribute;
    ++pElements;
    ++v3;
  }
}

void __fastcall Scaleform::Render::BuildVertexArray<Scaleform::Render::GL::VertexBuilder_Legacy>(
        const Scaleform::Render::VertexFormat *pfmt,
        Scaleform::Render::GL::VertexBuilder_Legacy *output)
{
  Scaleform::Render::VertexElement *pElements; // rbx
  int v3; // edi
  unsigned int i; // er8
  unsigned int Attribute; // ecx
  int offset; // edx
  int v8; // er9
  Scaleform::Render::GL::HAL *pHal; // rcx
  int j; // ebx
  __int64 v11; // rax

  pElements = pfmt->pElements;
  v3 = 0;
  for ( i = pElements->Attribute; i; ++v3 )
  {
    Attribute = pElements[1].Attribute;
    offset = pElements->Offset;
    v8 = i & 0xF;
    if ( (((unsigned __int16)i | (unsigned __int16)Attribute) & 0xFF00) == 12800 )
    {
      ++pElements;
    }
    else
    {
      if ( (Attribute & 0xF00) != 1024
        || (((unsigned __int16)i | (unsigned __int16)pElements[2].Attribute) & 0xFF00) != 12800 )
      {
        goto LABEL_8;
      }
      pElements += 2;
    }
    v8 = 4;
LABEL_8:
    Scaleform::Render::GL::VertexBuilder_Legacy::Add(output, v3, pElements->Attribute, v8, offset);
    i = pElements[1].Attribute;
    ++pElements;
  }
  pHal = output->pHal;
  for ( j = v3 - 1; v3 < output->pHal->EnabledVertexArrays; ++v3 )
  {
    v11 = (__int64)pHal->GetGraphicsDevice(pHal);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v11 + 360i64))(v11, (unsigned int)v3);
    pHal = output->pHal;
  }
  pHal->EnabledVertexArrays = j;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeRef *key)
{
  const Scaleform::Render::SourceFormatHash *pFirst; // r11
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *pTable; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  __int64 v14; // rcx
  const Scaleform::Render::ResultFormat *pSecond; // rax

  pFirst = key->pFirst;
  v7 = 16i64;
  v8 = 5381i64;
  do
  {
    v9 = *((unsigned __int8 *)pFirst + --v7);
    v8 = v9 + 65599 * v8;
  }
  while ( v7 );
  pTable = this->pTable;
  if ( !this->pTable )
    goto LABEL_14;
  v11 = v8 & pTable->SizeMask;
  v12 = v11;
  v13 = (__int64)&pTable[1] + 56 * v11;
  if ( *(_QWORD *)v13 == -2i64 || *(_QWORD *)(v13 + 8) != v11 )
    goto LABEL_14;
  while ( *(_QWORD *)(v13 + 8) != v11
       || pFirst->FillType != *(_DWORD *)(v13 + 16)
       || pFirst->SourceFormat != *(const Scaleform::Render::VertexFormat **)(v13 + 24)
       || pFirst->FormatFlags != *(_DWORD *)(v13 + 20) )
  {
    v12 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 == -1i64 )
      goto LABEL_14;
    v13 = (__int64)&pTable[1] + 56 * v12;
  }
  if ( v12 >= 0 )
  {
    v14 = 56 * v12;
    *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *)((char *)pTable + v14 + 32) = *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *)pFirst;
    pSecond = key->pSecond;
    *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *)((char *)pTable + v14 + 48) = *(Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *)&pSecond->single;
    *(unsigned __int64 *)((char *)&pTable[4].EntryCount + v14) = (unsigned __int64)pSecond->instanced;
  }
  else
  {
LABEL_14:
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *pTable; // r10
  char *v9; // rdx
  __int64 v10; // r11
  __int64 v11; // rcx
  __int64 v12; // r9
  __int64 v13; // rax
  const Scaleform::Render::VertexFormat *instanced; // xmm0_8
  unsigned __int64 *i; // r8

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = (char *)this->pTable + 56 * v7;
  v10 = *((_QWORD *)v9 + 2);
  if ( v10 == -2 )
  {
    *((_QWORD *)v9 + 2) = -1i64;
    *((_QWORD *)v9 + 3) = 0i64;
    *((_OWORD *)v9 + 2) = key->First;
    *((_OWORD *)v9 + 3) = *(_OWORD *)&key->Second.single;
    *((_QWORD *)v9 + 8) = key->Second.instanced;
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( *(&pTable[1].EntryCount + 7 * v11) != -2i64 );
    v12 = (__int64)&pTable[1] + 56 * v11;
    v13 = *((_QWORD *)v9 + 3);
    if ( v13 == v7 )
    {
      if ( v12 )
      {
        *(_QWORD *)v12 = v10;
        *(_QWORD *)(v12 + 8) = *((_QWORD *)v9 + 3);
        *(_OWORD *)(v12 + 16) = *((_OWORD *)v9 + 2);
        *(_OWORD *)(v12 + 32) = *((_OWORD *)v9 + 3);
        *(_QWORD *)(v12 + 48) = *((_QWORD *)v9 + 8);
      }
      *((_OWORD *)v9 + 2) = key->First;
      *((_OWORD *)v9 + 3) = *(_OWORD *)&key->Second.single;
      instanced = key->Second.instanced;
      *((_QWORD *)v9 + 2) = v11;
    }
    else
    {
      for ( i = &pTable[1].EntryCount + 7 * v13; *i != v7; i = &pTable[1].EntryCount + 7 * *i )
        ;
      if ( v12 )
      {
        *(_QWORD *)v12 = v10;
        *(_QWORD *)(v12 + 8) = *((_QWORD *)v9 + 3);
        *(_OWORD *)(v12 + 16) = *((_OWORD *)v9 + 2);
        *(_OWORD *)(v12 + 32) = *((_OWORD *)v9 + 3);
        *(_QWORD *)(v12 + 48) = *((_QWORD *)v9 + 8);
      }
      *i = v11;
      *((_OWORD *)v9 + 2) = key->First;
      *((_OWORD *)v9 + 3) = *(_OWORD *)&key->Second.single;
      instanced = key->Second.instanced;
      *((_QWORD *)v9 + 2) = -1i64;
    }
    *((_QWORD *)v9 + 8) = instanced;
  }
  *((_QWORD *)v9 + 3) = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *v11; // r8
  char *v12; // rdx
  __int64 v13; // r11
  const Scaleform::Render::ResultFormat *pSecond; // rax
  __int64 v15; // rcx
  __int64 v16; // r10
  __int64 v17; // rax
  const Scaleform::Render::ResultFormat *v18; // rax
  unsigned __int64 *i; // r9
  const Scaleform::Render::ResultFormat *v20; // rax

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v8 = 2 * SizeMask + 2;
  }
  else
  {
    v8 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = (char *)this->pTable + 56 * v10;
  v13 = *((_QWORD *)v12 + 2);
  if ( v13 == -2 )
  {
    *((_QWORD *)v12 + 2) = -1i64;
    *((_QWORD *)v12 + 3) = 0i64;
    *((_OWORD *)v12 + 2) = *key->pFirst;
    pSecond = key->pSecond;
    *((_OWORD *)v12 + 3) = *(_OWORD *)&pSecond->single;
    *((_QWORD *)v12 + 8) = pSecond->instanced;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( *(&v11[1].EntryCount + 7 * v15) != -2i64 );
    v16 = (__int64)&v11[1] + 56 * v15;
    v17 = *((_QWORD *)v12 + 3);
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *(_QWORD *)v16 = v13;
        *(_QWORD *)(v16 + 8) = *((_QWORD *)v12 + 3);
        *(_OWORD *)(v16 + 16) = *((_OWORD *)v12 + 2);
        *(_OWORD *)(v16 + 32) = *((_OWORD *)v12 + 3);
        *(_QWORD *)(v16 + 48) = *((_QWORD *)v12 + 8);
      }
      *((_OWORD *)v12 + 2) = *key->pFirst;
      v18 = key->pSecond;
      *((_OWORD *)v12 + 3) = *(_OWORD *)&v18->single;
      *((_QWORD *)v12 + 8) = v18->instanced;
      *((_QWORD *)v12 + 2) = v15;
    }
    else
    {
      for ( i = &v11[1].EntryCount + 7 * v17; *i != v10; i = &v11[1].EntryCount + 7 * *i )
        ;
      if ( v16 )
      {
        *(_QWORD *)v16 = v13;
        *(_QWORD *)(v16 + 8) = *((_QWORD *)v12 + 3);
        *(_OWORD *)(v16 + 16) = *((_OWORD *)v12 + 2);
        *(_OWORD *)(v16 + 32) = *((_OWORD *)v12 + 3);
        *(_QWORD *)(v16 + 48) = *((_QWORD *)v12 + 8);
      }
      *i = v15;
      *((_OWORD *)v12 + 2) = *key->pFirst;
      v20 = key->pSecond;
      *((_OWORD *)v12 + 3) = *(_OWORD *)&v20->single;
      *((_QWORD *)v12 + 8) = v20->instanced;
      *((_QWORD *)v12 + 2) = -1i64;
    }
  }
  *((_QWORD *)v12 + 3) = v10;
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::ThreadCommandQueue *commandQueue)
{
  Scaleform::Render::HAL::HAL(this, commandQueue);
  this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *)&Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::HAL,65>'};
  this->Scaleform::Render::HAL::Scaleform::Render::ContextImpl::RenderNotify::__vftable = (Scaleform::Render::ContextImpl::RenderNotify_vtbl *)&Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::`vftable'{for `Scaleform::Render::ContextImpl::RenderNotify'};
  Scaleform::Render::GL::ShaderManager::ShaderManager(&this->SManager, &this->Profiler);
  Scaleform::Render::GL::ShaderInterface::ShaderInterface(&this->ShaderData, this);
  this->MappedXY16iAlphaTexture[0] = 0i64;
  this->MappedXY16iAlphaTexture[1] = 0i64;
  this->MappedXY16iAlphaTexture[2] = 0i64;
  this->MappedXY16iAlphaSolid[0] = 0i64;
  this->MappedXY16iAlphaSolid[1] = 0i64;
  this->MappedXY16iAlphaSolid[2] = 0i64;
}

void __fastcall Scaleform::Render::GL::HAL::HAL(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::ThreadCommandQueue *commandQueue)
{
  Scaleform::Render::MeshCacheParams params; // [rsp+20h] [rbp-58h] BYREF

  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>(
    this,
    commandQueue);
  this->EnabledVertexArrays = -1;
  this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::GL::HAL_vtbl *)&Scaleform::Render::GL::HAL::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::HAL,65>'};
  params.MemReserve = 3145728i64;
  this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::Render::ContextImpl::RenderNotify::__vftable = (Scaleform::Render::ContextImpl::RenderNotify_vtbl *)&Scaleform::Render::GL::HAL::`vftable'{for `Scaleform::Render::ContextImpl::RenderNotify'};
  this->MaxVertexAttributes = 0;
  *(_WORD *)&this->FilterVertexBufferSet = 0;
  params.MemLimit = 0x1000000i64;
  params.MemGranularity = 3145728i64;
  params.LRUTailSize = 10485760i64;
  params.StagingBufferSize = 0x200000i64;
  params.VBLockEvictSizeLimit = 0x40000i64;
  params.MaxBatchInstances = 24;
  params.InstancingThreshold = 5;
  params.NoBatchVerticesSizeThreshold = 0x2000;
  params.MaxVerticesSizeInBatch = 0x4000;
  params.MaxIndicesInBatch = 6144;
  Scaleform::Render::GL::MeshCache::MeshCache(&this->Cache, Scaleform::Memory::pGlobalHeap, &params);
  Scaleform::Render::GL::RenderSync::RenderSync(&this->RSync);
  this->pTextureManager.pObject = 0i64;
  this->Events.Disabled = 0;
  memset(this->Events.OpenCount, 0, sizeof(this->Events.OpenCount));
  this->Events.pHAL = this;
  this->Events.__vftable = (Scaleform::Render::GL::RenderEvents_vtbl *)&Scaleform::Render::GL::RenderEvents::`vftable';
  Scaleform::Render::GL::GraphicsDeviceImmediate::GraphicsDeviceImmediate(&this->ImmediateDevice);
  this->pDevice = 0i64;
  this->pRecordingDevice.pObject = 0i64;
  this->PrevBatchType = DP_None;
}

void __fastcall Scaleform::Render::GL::RenderTargetData::RenderTargetData(
        Scaleform::Render::GL::RenderTargetData *this,
        Scaleform::Render::RenderBuffer *buffer,
        Scaleform::Render::GL::HAL *hal,
        Scaleform::Render::GL::HALGLFramebuffer *fboID,
        Scaleform::Render::DepthStencilBuffer *pdsb)
{
  this->__vftable = (Scaleform::Render::GL::RenderTargetData_vtbl *)&Scaleform::Render::RenderTargetData::`vftable';
  if ( pdsb )
    pdsb->AddRef(pdsb);
  this->pDepthStencilBuffer.pObject = pdsb;
  this->__vftable = (Scaleform::Render::GL::RenderTargetData_vtbl *)&Scaleform::Render::GL::RenderTargetData::`vftable';
  this->CacheID = 0i64;
  this->pBuffer = buffer;
  this->pHAL = hal;
  if ( fboID )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)fboID);
  this->FBOID.pObject = fboID;
}

void __fastcall Scaleform::Render::GL::VertexBuilder_Core30::VertexBuilder_Core30(
        Scaleform::Render::GL::VertexBuilder_Core30 *this,
        Scaleform::Render::GL::HAL *phal,
        const Scaleform::Render::VertexFormat *pformat,
        Scaleform::Render::GL::MeshCacheItem *pmesh,
        unsigned __int64 vbOffset)
{
  unsigned __int8 *v8; // rdx
  Scaleform::Render::GL::MeshCacheItem *v9; // rax
  Scaleform::Render::GL::GraphicsDevice *v10; // rax
  __int64 v11; // rax
  Scaleform::Render::GL::HALGLVertexArray *v12; // rbx
  Scaleform::Render::GL::MeshCacheItem *v13; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::GL::GraphicsDevice *v15; // rax
  Scaleform::Render::GL::GraphicsDevice *v16; // rax
  Scaleform::Render::GL::MeshBuffer *pVertexBuffer; // rbx
  Scaleform::RefCountVImpl *v18; // rcx
  Scaleform::Render::GL::MeshBuffer *pIndexBuffer; // rdi
  Scaleform::RefCountVImpl *v20; // rbx
  Scaleform::RefCountVImpl *v21; // rcx
  Scaleform::RefCountVImpl *v22; // rdi
  Scaleform::Render::GL::GraphicsDevice *v23; // rax
  Scaleform::Render::GL::GraphicsDevice *v24; // rax

  this->pHal = phal;
  this->Stride = pformat->Size;
  this->pMesh = pmesh;
  this->NeedsGeneration = 0;
  this->VertexOffset = 0i64;
  v8 = &Scaleform::Render::GL::MeshBuffer::GetBufferBase(pmesh->pVertexBuffer)[pmesh->VBAllocOffset + vbOffset];
  v9 = this->pMesh;
  this->VertexOffset = v8;
  if ( *(_OWORD *)&v9->VAOFormat != __PAIR128__((unsigned __int64)v8, (unsigned __int64)pformat) || !v9->VAO.pObject )
  {
    if ( v9->VAO.pObject )
    {
      v10 = this->pHal->GetGraphicsDevice(this->pHal);
      v10->glDeleteVertexArrays(v10, 1, &this->pMesh->VAO.pObject);
    }
    v11 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
            Scaleform::Memory::pGlobalHeap,
            32i64);
    v12 = (Scaleform::Render::GL::HALGLVertexArray *)v11;
    if ( v11 )
    {
      *(_DWORD *)(v11 + 16) = 0;
      *(_QWORD *)v11 = &Scaleform::RefCountImplCore::`vftable';
      *(_QWORD *)v11 = &Scaleform::Render::GL::HALGLVertexArray::`vftable';
      *(_DWORD *)(v11 + 8) = 1;
      *(_QWORD *)(v11 + 24) = 0i64;
    }
    else
    {
      v12 = 0i64;
    }
    v13 = this->pMesh;
    pObject = (Scaleform::RefCountVImpl *)v13->VAO.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    v13->VAO.pObject = v12;
    v15 = this->pHal->GetGraphicsDevice(this->pHal);
    v15->glGenVertexArrays(v15, 1, &this->pMesh->VAO.pObject);
    this->pMesh->VAOOffset = this->VertexOffset;
    this->pMesh->VAOFormat = pformat;
    this->NeedsGeneration = 1;
  }
  v16 = this->pHal->GetGraphicsDevice(this->pHal);
  v16->glBindVertexArray(v16, this->pMesh->VAO.pObject);
  if ( this->NeedsGeneration )
  {
    pVertexBuffer = pmesh->pVertexBuffer;
    v18 = (Scaleform::RefCountVImpl *)pVertexBuffer->Buffer.pObject;
    if ( v18 )
      Scaleform::Render::RenderBuffer::AddRef(v18);
    pIndexBuffer = pmesh->pIndexBuffer;
    v20 = (Scaleform::RefCountVImpl *)pVertexBuffer->Buffer.pObject;
    v21 = (Scaleform::RefCountVImpl *)pIndexBuffer->Buffer.pObject;
    if ( v21 )
      Scaleform::Render::RenderBuffer::AddRef(v21);
    v22 = (Scaleform::RefCountVImpl *)pIndexBuffer->Buffer.pObject;
    v23 = this->pHal->GetGraphicsDevice(this->pHal);
    v23->glBindBuffer(v23, 34962u, (Scaleform::Render::GL::HALGLBuffer *)v20);
    v24 = this->pHal->GetGraphicsDevice(this->pHal);
    v24->glBindBuffer(v24, 34963u, (Scaleform::Render::GL::HALGLBuffer *)v22);
    if ( v22 )
      Scaleform::RefCountImpl::Release(v22);
    if ( v20 )
      Scaleform::RefCountImpl::Release(v20);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this)
{
  __int64 v2; // rbx
  unsigned __int64 v3; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rdi

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
      {
        Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::~FramebufferAttachment((Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *)&pTable[v2 + 2].SizeMask);
        pTable[v2 + 1].EntryCount = -2i64;
      }
      v2 += 3i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v4; // rbx
  Scaleform::RefCountVImpl *EntryCount; // rcx
  Scaleform::RefCountVImpl *SizeMask; // rcx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      v4 = &this->pTable[v2];
      if ( v4[1].EntryCount != -2i64 )
      {
        EntryCount = (Scaleform::RefCountVImpl *)v4[3].EntryCount;
        if ( EntryCount )
          Scaleform::RefCountImpl::Release(EntryCount);
        SizeMask = (Scaleform::RefCountVImpl *)v4[2].SizeMask;
        if ( SizeMask )
          Scaleform::RefCountImpl::Release(SizeMask);
        v4[1].EntryCount = -2i64;
      }
      v2 += 3i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rbx
  Scaleform::RefCountVImpl *SizeMask; // rcx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( this->pTable[v2 + 1].EntryCount != -2i64 )
      {
        SizeMask = (Scaleform::RefCountVImpl *)pTable[v2 + 2].SizeMask;
        if ( SizeMask )
          Scaleform::RefCountImpl::Release(SizeMask);
        pTable[v2 + 1].EntryCount = -2i64;
      }
      v2 += 2i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::~PagedItemBuffer<Scaleform::Render::VertexElement,32>(
        Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32> *this)
{
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page *pPages; // rbx
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page *v2; // rax

  pPages = this->pPages;
  v2 = 0i64;
  if ( this->pPages )
  {
    do
    {
      if ( v2 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v2);
      v2 = pPages;
      pPages = pPages->pNext;
    }
    while ( pPages );
    if ( v2 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v2);
    this->pPages = 0i64;
    this->pLast = 0i64;
  }
  else
  {
    this->pPages = 0i64;
    this->pLast = 0i64;
  }
}

void __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::~StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *pTable; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *v5; // rax

  this->__vftable = (Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>_vtbl *)&Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::`vftable';
  pTable = this->VertexFormatComputedHash.mHash.pTable;
  if ( pTable )
  {
    v3 = 0i64;
    v4 = pTable->SizeMask + 1;
    do
    {
      v5 = this->VertexFormatComputedHash.mHash.pTable;
      if ( *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) != -2i64 )
        *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) = -2i64;
      v3 += 56i64;
      --v4;
    }
    while ( v4 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->VertexFormatComputedHash.mHash.pTable);
    this->VertexFormatComputedHash.mHash.pTable = 0i64;
  }
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::freePages(
    &this->VFormats.ValueBuffer,
    0);
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::~PagedItemBuffer<Scaleform::Render::VertexElement,32>(&this->VFormats.KeyBuffer);
}

void __fastcall Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::~FramebufferAttachment(
        Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx
  __int64 v4; // rcx
  unsigned __int64 v5; // rdx

  pObject = (Scaleform::RefCountVImpl *)this->Texture.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->RenderBuffer.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  if ( this->Parameters.mHash.pTable )
  {
    v4 = 0i64;
    v5 = this->Parameters.mHash.pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&this->Parameters.mHash.pTable[1].EntryCount + v4) != -2i64 )
        *(unsigned __int64 *)((char *)&this->Parameters.mHash.pTable[1].EntryCount + v4) = -2i64;
      v4 += 24i64;
      --v5;
    }
    while ( v5 );
    if ( this->Parameters.mHash.pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->Parameters.mHash.pTable = 0i64;
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDevice::~GraphicsDevice(Scaleform::Render::GL::GraphicsDevice *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_BindingIndexerFramebuffers; // r14
  __int64 v5; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  __int64 v7; // rdi
  __int64 v8; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v9; // rbx
  Scaleform::RefCountVImpl *SizeMask; // rcx

  pObject = (Scaleform::RefCountVImpl *)this->BindingVertexArray.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->BindingProgramPipeline.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>(&this->BindingIndexerRenderbuffers.mHash);
  p_BindingIndexerFramebuffers = &this->BindingIndexerFramebuffers;
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers);
  v5 = 5i64;
  do
  {
    pTable = p_BindingIndexerFramebuffers[-1].mHash.pTable;
    --p_BindingIndexerFramebuffers;
    --v5;
    if ( pTable )
    {
      v7 = 0i64;
      v8 = pTable->SizeMask + 1;
      do
      {
        v9 = p_BindingIndexerFramebuffers->mHash.pTable;
        if ( p_BindingIndexerFramebuffers->mHash.pTable[v7 + 1].EntryCount != -2i64 )
        {
          SizeMask = (Scaleform::RefCountVImpl *)v9[v7 + 2].SizeMask;
          if ( SizeMask )
            Scaleform::RefCountImpl::Release(SizeMask);
          v9[v7 + 1].EntryCount = -2i64;
        }
        v7 += 2i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, p_BindingIndexerFramebuffers->mHash.pTable);
      p_BindingIndexerFramebuffers->mHash.pTable = 0i64;
    }
  }
  while ( v5 );
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerBuffers);
  this->__vftable = (Scaleform::Render::GL::GraphicsDevice_vtbl *)&Scaleform::Render::GraphicsDevice::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::GL::HAL::~HAL(Scaleform::Render::GL::HAL *this)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx

  this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::GL::HAL_vtbl *)&Scaleform::Render::GL::HAL::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::HAL,65>'};
  this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::Render::ContextImpl::RenderNotify::__vftable = (Scaleform::Render::ContextImpl::RenderNotify_vtbl *)&Scaleform::Render::GL::HAL::`vftable'{for `Scaleform::Render::ContextImpl::RenderNotify'};
  Scaleform::Render::GL::HAL::ShutdownHAL(this);
  pObject = (Scaleform::RefCountVImpl *)this->pRecordingDevice.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  Scaleform::Render::GL::GraphicsDevice::~GraphicsDevice(&this->ImmediateDevice);
  this->Events.__vftable = (Scaleform::Render::GL::RenderEvents_vtbl *)&Scaleform::Render::RenderEvents::`vftable';
  v3 = (Scaleform::RefCountVImpl *)this->pTextureManager.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  Scaleform::Render::RenderSync::~RenderSync(&this->RSync);
  Scaleform::Render::GL::MeshCache::~MeshCache(&this->Cache);
  this->ShaderData.Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::__vftable = (Scaleform::Render::GL::ShaderInterface_vtbl *)&Scaleform::Render::GL::ShaderInterface::`vftable';
  ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)&this->ShaderData);
  this->ShaderData.Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::__vftable = (Scaleform::Render::GL::ShaderInterface_vtbl *)&Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::`vftable';
  Scaleform::Render::GL::ShaderManager::~ShaderManager(&this->SManager);
  Scaleform::Render::HAL::~HAL(this);
}

void __fastcall Scaleform::Render::GL::RenderTargetData::~RenderTargetData(
        Scaleform::Render::GL::RenderTargetData *this)
{
  Scaleform::Render::GL::TextureManager *v2; // rax
  Scaleform::Render::GL::GraphicsDevice *v3; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::DepthStencilBuffer *v5; // rcx

  this->__vftable = (Scaleform::Render::GL::RenderTargetData_vtbl *)&Scaleform::Render::GL::RenderTargetData::`vftable';
  if ( (unsigned int)(this->pBuffer->Type - 1) > 1 )
  {
    v2 = (Scaleform::Render::GL::TextureManager *)this->pHAL->GetTextureManager(this->pHAL);
    if ( v2 )
    {
      Scaleform::Render::GL::TextureManager::DestroyFBO(v2, this->FBOID.pObject);
    }
    else
    {
      v3 = this->pHAL->GetGraphicsDevice(this->pHAL);
      v3->glDeleteFramebuffers(v3, 1, &this->FBOID.pObject);
    }
  }
  pObject = (Scaleform::RefCountVImpl *)this->FBOID.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->__vftable = (Scaleform::Render::GL::RenderTargetData_vtbl *)&Scaleform::Render::RenderTargetData::`vftable';
  v5 = this->pDepthStencilBuffer.pObject;
  if ( v5 )
    v5->Release(v5);
}

void __fastcall Scaleform::Render::GL::ShaderManager::~ShaderManager(Scaleform::Render::GL::ShaderManager *this)
{
  volatile int *v2; // rbx
  Scaleform::Render::GL::ShaderObject *p_DynamicLoopShaderHash; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *pTable; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  __int64 v7; // rdi

  v2 = (volatile int *)(this->BinaryShaderPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(v2 + 2, -1) == 1 )
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, (void *)v2);
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>(&this->CompiledShaderHash.mHash);
  p_DynamicLoopShaderHash = (Scaleform::Render::GL::ShaderObject *)&this->DynamicLoopShaderHash;
  pTable = this->DynamicLoopShaderHash.mHash.pTable;
  if ( pTable )
  {
    v5 = 0i64;
    v6 = pTable->SizeMask + 1;
    do
    {
      if ( *(Scaleform::Render::ContextImpl::RenderNotify_vtbl **)((char *)&p_DynamicLoopShaderHash->pHal->__vftable + v5) != (Scaleform::Render::ContextImpl::RenderNotify_vtbl *)-2i64 )
        *(Scaleform::Render::ContextImpl::RenderNotify_vtbl **)((char *)&p_DynamicLoopShaderHash->pHal->__vftable + v5) = (Scaleform::Render::ContextImpl::RenderNotify_vtbl *)-2i64;
      v5 += 40i64;
      --v6;
    }
    while ( v6 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, p_DynamicLoopShaderHash->pHal);
    p_DynamicLoopShaderHash->pHal = 0i64;
  }
  v7 = 873i64;
  do
  {
    Scaleform::Render::GL::ShaderObject::~ShaderObject(--p_DynamicLoopShaderHash);
    --v7;
  }
  while ( v7 );
  Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::~StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>(this);
}

Scaleform::Render::VertexFormat *__fastcall Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::Add(
        Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8> *this,
        Scaleform::Render::VertexElement **ppnewKeys,
        Scaleform::Render::VertexElement *keys,
        unsigned int count)
{
  char *v7; // rdx
  Scaleform::Render::VertexFormat *result; // rax

  *ppnewKeys = Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::AddItems(
                 &this->KeyBuffer,
                 keys,
                 count);
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::ensureCountAvailable(
    &this->ValueBuffer,
    1u);
  v7 = (char *)this->ValueBuffer.pLast->Items + 32 * this->ValueBuffer.pLast->Count + 8 * this->ValueBuffer.pLast->Count;
  if ( v7 )
    *((_QWORD *)v7 + 4) = 0i64;
  ++this->ValueBuffer.pLast->Count;
  if ( !*ppnewKeys || !v7 )
    return 0i64;
  *(_QWORD *)v7 = *ppnewKeys;
  result = (Scaleform::Render::VertexFormat *)(v7 + 16);
  *((_DWORD *)v7 + 2) = count;
  return result;
}

void __fastcall Scaleform::Render::GL::VertexBuilder_Legacy::Add(
        Scaleform::Render::GL::VertexBuilder_Legacy *this,
        int vi,
        int attr,
        int ac,
        int offset)
{
  Scaleform::Render::GL::GraphicsDevice *v8; // rax
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  bool norm; // [rsp+40h] [rbp-18h] BYREF
  unsigned int vet[5]; // [rsp+44h] [rbp-14h] BYREF

  if ( Scaleform::Render::GL::VertexBuilderVET(attr, vet, &norm) )
  {
    if ( this->pHal->EnabledVertexArrays < vi )
    {
      v8 = this->pHal->GetGraphicsDevice(this->pHal);
      v8->glEnableVertexAttribArray(v8, vi);
      ++this->pHal->EnabledVertexArrays;
    }
    if ( vet[0] == 5121 && ac < 4 )
      ac = 4;
    v9 = this->pHal->GetGraphicsDevice(this->pHal);
    v9->glVertexAttribPointer(v9, vi, ac, vet[0], norm, this->Stride, &this->VertexOffset[offset]);
  }
}

Scaleform::Render::VertexElement *__fastcall Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::AddItems(
        Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32> *this,
        Scaleform::Render::VertexElement *source,
        unsigned int count)
{
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page *pLast; // r9
  Scaleform::Render::VertexElement *result; // rax
  Scaleform::Render::VertexElement *v8; // r9
  signed __int64 v9; // rbx
  __int64 v10; // rdx

  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::ensureCountAvailable(this, count);
  pLast = this->pLast;
  result = &pLast->Items[pLast->Count];
  if ( count )
  {
    v8 = &pLast->Items[pLast->Count];
    v9 = (char *)source - (char *)result;
    v10 = count;
    do
    {
      if ( v8 )
        *v8 = *(Scaleform::Render::VertexElement *)((char *)v8 + v9);
      ++v8;
      --v10;
    }
    while ( v10 );
  }
  this->pLast->Count += count;
  return result;
}

char __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::BeginScene(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this)
{
  char result; // al

  result = Scaleform::Render::HAL::BeginScene(this);
  if ( result )
  {
    Scaleform::Render::GL::ShaderManager::BeginScene(&this->SManager);
    Scaleform::Render::GL::ShaderInterface::BeginScene(&this->ShaderData);
    return 1;
  }
  return result;
}

char __fastcall Scaleform::Render::GL::HAL::BeginScene(Scaleform::Render::GL::HAL *this)
{
  Scaleform::Render::GL::GraphicsDevice *v2; // rax
  Scaleform::Render::GL::GraphicsDevice *v3; // rax
  Scaleform::Render::GL::GraphicsDevice *v4; // rax
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rcx
  Scaleform::Render::GL::GraphicsDevice *v6; // rax
  int v7; // edi
  Scaleform::Render::GL::GraphicsDevice *v8; // rax

  if ( !Scaleform::Render::HAL::BeginScene(this) )
    return 0;
  Scaleform::Render::GL::ShaderManager::BeginScene(&this->SManager);
  Scaleform::Render::GL::ShaderInterface::BeginScene(&this->ShaderData);
  v2 = this->GetGraphicsDevice(this);
  v2->glDisable(v2, 2884u);
  v3 = this->GetGraphicsDevice(this);
  v3->glDisable(v3, 2929u);
  v4 = this->GetGraphicsDevice(this);
  v4->glStencilMask(v4, 0xFFFFFFFF);
  pDevice = this->pDevice;
  if ( pDevice )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *, __int64))pDevice->CheckGLVersion)(
           pDevice,
           3i64) )
    {
      goto LABEL_7;
    }
  }
  else if ( !warned_5 )
  {
    warned_5 = 1;
  }
  v6 = this->GetGraphicsDevice(this);
  v6->glDisable(v6, 3008u);
LABEL_7:
  if ( !Scaleform::Render::GL::HAL::ShouldUseVAOs(this) )
  {
    v7 = 0;
    for ( this->EnabledVertexArrays = -1; v7 < this->MaxVertexAttributes; ++v7 )
    {
      v8 = this->GetGraphicsDevice(this);
      v8->glDisableVertexAttribArray(v8, v7);
    }
  }
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

bool __fastcall Scaleform::Render::GL::HAL::CheckExtension(Scaleform::Render::GL::HAL *this, __int64 type)
{
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rcx
  char v3; // cl
  bool result; // al

  pDevice = this->pDevice;
  if ( pDevice )
    return pDevice->CheckExtension(pDevice, (Scaleform::Render::GL::GLExtensionType)type);
  v3 = warned_6;
  if ( !warned_6 )
    v3 = 1;
  result = 0;
  warned_6 = v3;
  return result;
}

bool __fastcall Scaleform::Render::GL::HAL::CheckGLVersion(
        Scaleform::Render::GL::HAL *this,
        __int64 reqMajor,
        __int64 reqMinor)
{
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rcx
  char v4; // cl
  bool result; // al

  pDevice = this->pDevice;
  if ( pDevice )
    return pDevice->CheckGLVersion(pDevice, reqMajor, reqMinor);
  v4 = warned_5;
  if ( !warned_5 )
    v4 = 1;
  result = 0;
  warned_5 = v4;
  return result;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > *this)
{
  __int64 v2; // rdx
  unsigned __int64 v3; // r8

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
        *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) = -2i64;
      v2 += 56i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::ClearSolidRectangle(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        const Scaleform::Render::Rect<int> *r,
        Scaleform::Render::Color *color,
        bool blend)
{
  Scaleform::Render::RenderEvents *v8; // r14
  bool v9; // r9
  Scaleform::Render::BlendMode v10; // edx
  Scaleform::Render::ProfileViews *v11; // rax
  int x1; // ecx
  unsigned int v13; // eax
  Scaleform::Render::Matrix2x4<float> *p_UserView; // r8
  __m128i v15; // xmm1
  int y1; // ecx
  __m128i v17; // xmm0
  int v18; // eax
  Scaleform::Render::Color Raw; // [rsp+40h] [rbp-98h] BYREF
  char v20[4]; // [rsp+44h] [rbp-94h] BYREF
  Scaleform::Render::HAL::HALBlendState state; // [rsp+48h] [rbp-90h] BYREF
  Scaleform::Render::Matrix2x4<float> m0; // [rsp+50h] [rbp-88h] BYREF
  Scaleform::Render::Matrix2x4<float> v23; // [rsp+70h] [rbp-68h] BYREF
  float pr; // [rsp+90h] [rbp-48h] BYREF
  float pg; // [rsp+94h] [rbp-44h] BYREF
  float pb; // [rsp+98h] [rbp-40h] BYREF
  float pa; // [rsp+9Ch] [rbp-3Ch] BYREF

  v8 = this->GetEvents(this);
  v8->Begin(v8, Event_Clear, "HAL::ClearSolidRectangle");
  Scaleform::Render::HAL::applyRasterMode(this, RasterMode_Solid);
  state = this->CurrentBlendState;
  if ( blend )
  {
    v9 = 1;
    v10 = Blend_Normal;
  }
  else
  {
    v9 = 0;
    v10 = Blend_OverwriteAll;
  }
  Scaleform::Render::HAL::ApplyBlendMode(this, v10, 0, v9);
  v11 = this->GetProfiler(this);
  Raw = (Scaleform::Render::Color)color->Raw;
  *color = *(Scaleform::Render::Color *)((__int64 (__fastcall *)(Scaleform::Render::ProfileViews *, char *, Scaleform::Render::Color *))v11->GetClearColor)(
                                          v11,
                                          v20,
                                          &Raw);
  Scaleform::Render::Color::GetRGBAFloat(color, &pr, &pg, &pb, &pa);
  x1 = r->x1;
  v13 = r->x2 - r->x1;
  p_UserView = &this->Matrices.pObject->UserView;
  *(_QWORD *)&m0.M[0][1] = 0i64;
  v15 = _mm_cvtsi32_si128(x1);
  y1 = r->y1;
  v17 = _mm_cvtsi32_si128(v13);
  v18 = r->y2 - y1;
  m0.M[1][0] = 0.0;
  *(_QWORD *)&m0.M[0][0] = _mm_cvtepi32_ps(v17).m128_u32[0];
  LODWORD(m0.M[0][3]) = _mm_cvtepi32_ps(v15).m128_u32[0];
  *(_QWORD *)&m0.M[1][1] = COERCE_UNSIGNED_INT((float)v18);
  m0.M[1][3] = (float)y1;
  Scaleform::Render::Matrix2x4<float>::SetToAppend(&v23, &m0, p_UserView);
  this->ShaderData.SetStaticShader(&this->ShaderData, ST_BatchSolid, this->MappedXY16iAlphaSolid[1]);
  if ( !this->ShaderData.PrimitiveOpen )
  {
    this->ShaderData.PrimitiveOpen = 1;
    this->ShaderData.CurrentPrimitiveMeshCount = 1;
    *(_QWORD *)this->ShaderData.UniformSet = 0i64;
    *(_QWORD *)&this->ShaderData.UniformSet[8] = 0i64;
    *(_QWORD *)&this->ShaderData.UniformSet[16] = 0i64;
    *(_WORD *)&this->ShaderData.UniformSet[24] = 0;
    this->ShaderData.Textures[0] = 0i64;
    this->ShaderData.Textures[1] = 0i64;
    this->ShaderData.Textures[2] = 0i64;
    this->ShaderData.Textures[3] = 0i64;
  }
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    &this->ShaderData,
    &this->ShaderData.CurShader,
    0xEu,
    (const float *)&v23,
    8u,
    0,
    0);
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    &this->ShaderData,
    &this->ShaderData.CurShader,
    6u,
    &pr,
    4u,
    0,
    0);
  Scaleform::Render::GL::ShaderInterface::Finish(&this->ShaderData, 1u);
  this->drawScreenQuad(this);
  Scaleform::Render::HAL::applyBlendMode(this, &state);
  Scaleform::Render::HAL::applyRasterMode(this, this->CurrentSceneRasterMode);
  v8->End(v8, Event_Clear);
}

void __fastcall Scaleform::Render::GL::HAL::ClearSolidRectangle(
        Scaleform::Render::GL::HAL *this,
        const Scaleform::Render::Rect<int> *r,
        Scaleform::Render::Color *color,
        bool blend)
{
  __int64 v6; // r12
  Scaleform::Render::GL::GraphicsDevice *v7; // rax
  float v8; // xmm1_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float *pObject; // rax
  float v12; // xmm4_4
  float v13; // xmm6_4
  float v14; // xmm2_4
  float v15; // xmm5_4
  unsigned int v16; // esi
  int v17; // ebx
  unsigned int v18; // ebp
  int v19; // edi
  Scaleform::Render::GL::GraphicsDevice *v20; // rax
  Scaleform::Render::GL::GraphicsDevice *v21; // rax
  Scaleform::Render::GL::GraphicsDevice *v22; // rax
  Scaleform::Render::GL::HAL_vtbl *v23; // rax
  __int64 v24; // rax
  Scaleform::Render::GL::GraphicsDevice *v25; // rax
  __int64 v26; // rax
  Scaleform::Render::Color colora; // [rsp+88h] [rbp+20h] BYREF

  if ( blend && color->Channels.Alpha != 0xFF || (this->VP.Flags & 0xC0) != 0 )
  {
    colora = (Scaleform::Render::Color)color->Raw;
    Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::ClearSolidRectangle(
      this,
      r,
      &colora,
      blend);
  }
  else
  {
    v6 = ((__int64 (*)(void))this->GetEvents)();
    (*(void (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)v6 + 8i64))(
      v6,
      5i64,
      "HAL::clearSolidRectangle");
    v7 = this->GetGraphicsDevice(this);
    v7->glEnable(v7, 3089u);
    v8 = (float)(this->VP.Left + r->x1);
    v9 = (float)(this->VP.Top + r->y1);
    v10 = (float)(this->VP.Left + r->x2);
    pObject = (float *)this->Matrices.pObject;
    v12 = (float)((float)(v8 * pObject[92]) + (float)(v9 * pObject[93])) + pObject[95];
    v13 = (float)((float)(v9 * pObject[89]) + (float)(v8 * pObject[88])) + pObject[91];
    v14 = (float)((float)(v10 * pObject[92]) + (float)((float)(this->VP.Top + r->y2) * pObject[93])) + pObject[95];
    v15 = (float)((float)((float)(this->VP.Top + r->y2) * pObject[89]) + (float)(v10 * pObject[88])) + pObject[91];
    v16 = (int)fminf(v12, v14);
    v17 = (int)fmaxf(v12, v14);
    v18 = (int)fminf(v13, v15);
    v19 = (int)fmaxf(v13, v15);
    v20 = this->GetGraphicsDevice(this);
    v20->glScissor(v20, v18, v16, v19 - v18, v17 - v16);
    v21 = this->GetGraphicsDevice(this);
    ((void (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *))v21->glClearColor)(v21);
    v22 = this->GetGraphicsDevice(this);
    v22->glClear(v22, 0x4000u);
    v23 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    if ( (this->VP.Flags & 4) != 0 )
    {
      v24 = (__int64)v23->GetGraphicsDevice(this);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v24 + 392i64))(v24, 3089i64);
      v25 = this->GetGraphicsDevice(this);
      v25->glScissor(
        v25,
        this->VP.ScissorLeft,
        this->VP.BufferHeight - this->VP.ScissorTop - this->VP.ScissorHeight,
        this->VP.ScissorWidth,
        this->VP.ScissorHeight);
    }
    else
    {
      v26 = (__int64)v23->GetGraphicsDevice(this);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v26 + 352i64))(v26, 3089i64);
    }
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16i64))(v6, 5i64);
  }
}

Scaleform::Render::GL::MatrixState *__fastcall Scaleform::Render::GL::MatrixStateFactory::CreateMatrixState(
        Scaleform::Render::GL::MatrixStateFactory *this)
{
  Scaleform::Render::GL::MatrixState *result; // rax
  Scaleform::Render::GL::MatrixState *v3; // rbx

  result = (Scaleform::Render::GL::MatrixState *)this->pHeap->Alloc(this->pHeap, 704i64, 0i64);
  v3 = result;
  if ( result )
  {
    Scaleform::Render::MatrixState::MatrixState(result, this->pHAL);
    v3->__vftable = (Scaleform::Render::GL::MatrixState_vtbl *)&Scaleform::Render::GL::MatrixState::`vftable';
    *(_QWORD *)&v3->FullViewportMVP.M[0][0] = 0x40000000i64;
    v3->FullViewportMVP.M[0][2] = 0.0;
    v3->FullViewportMVP.M[0][3] = -1.0;
    v3->FullViewportMVP.M[1][0] = 0.0;
    result = v3;
    *(_QWORD *)&v3->FullViewportMVP.M[1][1] = 0x40000000i64;
    v3->FullViewportMVP.M[1][3] = -1.0;
  }
  return result;
}

Scaleform::Render::RenderBuffer *__fastcall Scaleform::Render::GL::HAL::CreateRenderTarget(
        Scaleform::Render::GL::HAL *this,
        unsigned int fbo)
{
  Scaleform::Render::GL::HALGLFramebuffer *v4; // rax
  Scaleform::Render::RenderBuffer *v5; // rbp
  Scaleform::Render::GL::HALGLFramebuffer *v6; // rax
  Scaleform::Render::GL::HALGLFramebuffer *v7; // r14
  Scaleform::Render::RenderBufferManager *pObject; // rbx
  Scaleform::Render::RenderBufferManager_vtbl *v9; // rdi
  Scaleform::Render::Size<unsigned long> *FboInfo; // rax
  Scaleform::Render::RenderBuffer *v11; // rax
  Scaleform::Render::RenderBuffer *v12; // rbx
  Scaleform::Render::HAL::RenderTargetEntry *Data; // rax
  Scaleform::Render::RenderTargetData *pRenderTargetData; // rdi
  Scaleform::Render::GL::GraphicsDevice *v15; // rax
  Scaleform::Render::GL::HALGLFramebuffer *currentFBO; // [rsp+60h] [rbp+8h] BYREF
  Scaleform::Render::Size<unsigned long> result; // [rsp+70h] [rbp+18h] BYREF

  v4 = (Scaleform::Render::GL::HALGLFramebuffer *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    32i64);
  v5 = 0i64;
  if ( v4 )
  {
    Scaleform::Render::GL::HALGLFramebuffer::HALGLFramebuffer(v4, fbo, 0x8D40u, &this->ImmediateDevice);
    v7 = v6;
  }
  else
  {
    v7 = 0i64;
  }
  pObject = this->pRenderBufferManager.pObject;
  currentFBO = 0i64;
  v9 = pObject->__vftable;
  FboInfo = Scaleform::Render::GL::HAL::getFboInfo(this, &result, v7, &currentFBO, 0);
  v11 = (Scaleform::Render::RenderBuffer *)((__int64 (__fastcall *)(Scaleform::Render::RenderBufferManager *, Scaleform::Render::Size<unsigned long> *, __int64))v9->CreateRenderTarget)(
                                             pObject,
                                             FboInfo,
                                             2i64);
  v12 = v11;
  if ( v11 )
  {
    if ( !v11->pRenderTargetData )
    {
      Scaleform::Render::GL::RenderTargetData::UpdateData(v11, this, fbo, 0i64);
      if ( this->RenderTargetStack.Data.Size )
      {
        Data = this->RenderTargetStack.Data.Data;
        if ( Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject )
        {
          pRenderTargetData = Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject->pRenderTargetData;
          if ( pRenderTargetData )
          {
            v15 = this->GetGraphicsDevice(this);
            v15->glBindFramebuffer(
              v15,
              36160u,
              (Scaleform::Render::GL::HALGLFramebuffer *)pRenderTargetData[1].pDepthStencilBuffer.pObject);
          }
        }
      }
    }
    v5 = v12;
  }
  if ( v7 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v7);
  return v5;
}

Scaleform::Render::RenderTarget *__fastcall Scaleform::Render::GL::HAL::CreateRenderTarget(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::Texture *texture,
        bool needsStencil)
{
  Scaleform::Render::RenderBufferManager *pObject; // rdi
  Scaleform::Render::RenderBufferManager_vtbl *v7; // rbx
  Scaleform::Render::ImageFormat v8; // eax
  Scaleform::Render::RenderTarget *result; // rax
  Scaleform::Render::RenderTarget *v10; // rbp
  __int64 v11; // rdi
  Scaleform::Render::DepthStencilBuffer *v12; // rbx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::RefCountVImpl *v14; // rdi
  Scaleform::Render::GL::HALGLFramebuffer *v15; // rax
  Scaleform::Render::GL::GraphicsDevice *v16; // rax
  Scaleform::Render::GL::GraphicsDevice *v17; // rax
  Scaleform::Render::GL::HAL_vtbl *v18; // rax
  __int64 v19; // rax
  Scaleform::Render::HAL::RenderTargetEntry *Data; // rax
  Scaleform::Render::RenderTargetData *pRenderTargetData; // r14
  Scaleform::Render::GL::GraphicsDevice *v22; // rax
  Scaleform::Render::Size<unsigned long> size; // [rsp+30h] [rbp-38h] BYREF
  Scaleform::Render::GL::HALGLFramebuffer *fboID; // [rsp+78h] [rbp+10h] BYREF
  Scaleform::Render::Size<unsigned long> ImgSize; // [rsp+88h] [rbp+20h] BYREF

  if ( !texture || texture->TextureCount != 1 )
    return 0i64;
  ImgSize = texture->ImgSize;
  pObject = this->pRenderBufferManager.pObject;
  v7 = pObject->__vftable;
  v8 = texture->GetFormat(texture);
  result = v7->CreateRenderTarget(pObject, &ImgSize, RBuffer_Texture, v8, texture);
  v10 = result;
  if ( result )
  {
    v11 = *(_QWORD *)&texture[1].RefCount;
    v12 = 0i64;
    v13 = *(Scaleform::RefCountVImpl **)(v11 + 8);
    if ( v13 )
      Scaleform::Render::RenderBuffer::AddRef(v13);
    v14 = *(Scaleform::RefCountVImpl **)(v11 + 8);
    v15 = (Scaleform::Render::GL::HALGLFramebuffer *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       32i64);
    if ( v15 )
    {
      v15->__vftable = (Scaleform::Render::GL::HALGLFramebuffer_vtbl *)&Scaleform::RefCountImplCore::`vftable';
      v15->__vftable = (Scaleform::Render::GL::HALGLFramebuffer_vtbl *)&Scaleform::Render::GL::HALGLFramebuffer::`vftable';
      v15->RefCount = 1;
      v15->BindingIndexerAttachments.mHash.pTable = 0i64;
      v15->Name = 0;
    }
    else
    {
      v15 = 0i64;
    }
    fboID = v15;
    v16 = this->GetGraphicsDevice(this);
    v16->glGenFramebuffers(v16, 1, &fboID);
    v17 = this->GetGraphicsDevice(this);
    v17->glBindFramebuffer(v17, 36160u, fboID);
    v18 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    ++this->AccumulatedStats.RTChanges;
    v19 = (__int64)v18->GetGraphicsDevice(this);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, Scaleform::RefCountVImpl *, _DWORD))(*(_QWORD *)v19 + 440i64))(
      v19,
      36160i64,
      36064i64,
      3553i64,
      v14,
      0);
    if ( needsStencil )
    {
      size = texture->ImgSize;
      v12 = Scaleform::Render::GL::HAL::createCompatibleDepthStencil(this, &size, 0);
    }
    Scaleform::Render::GL::RenderTargetData::UpdateData(v10, this, fboID, v12);
    if ( this->RenderTargetStack.Data.Size )
    {
      Data = this->RenderTargetStack.Data.Data;
      if ( Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject )
      {
        pRenderTargetData = Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject->pRenderTargetData;
        if ( pRenderTargetData )
        {
          v22 = this->GetGraphicsDevice(this);
          v22->glBindFramebuffer(
            v22,
            36160u,
            (Scaleform::Render::GL::HALGLFramebuffer *)pRenderTargetData[1].pDepthStencilBuffer.pObject);
        }
      }
    }
    if ( fboID )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)fboID);
    if ( v14 )
      Scaleform::RefCountImpl::Release(v14);
    if ( v12 )
      v12->Release(v12);
    return v10;
  }
  return result;
}

Scaleform::Render::RenderTarget *__fastcall Scaleform::Render::GL::HAL::CreateTempRenderTarget(
        Scaleform::Render::GL::HAL *this,
        const Scaleform::Render::Size<unsigned long> *size,
        bool needsStencil)
{
  Scaleform::Render::RenderTarget *result; // rax
  Scaleform::Render::RenderTarget *v6; // r15
  Scaleform::Render::Size<unsigned long> *v7; // r13
  Scaleform::Render::RenderTargetData *pRenderTargetData; // rbp
  Scaleform::Render::DepthStencilBuffer *v9; // rbx
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::Render::Size<unsigned long> BufferSize; // rdi
  Scaleform::RefCountVImpl *v12; // rdi
  __int64 v13; // rax
  Scaleform::RefCountVImpl *v14; // r14
  Scaleform::Render::GL::HAL_vtbl *v15; // rax
  __int64 v16; // rax
  Scaleform::Render::GL::GraphicsDevice *v17; // rax
  Scaleform::Render::GL::HAL_vtbl *v18; // rax
  __int64 v19; // rax
  Scaleform::Render::HAL::RenderTargetEntry *Data; // rax
  Scaleform::Render::RenderTargetData *v21; // rbp
  Scaleform::Render::GL::GraphicsDevice *v22; // rax
  Scaleform::RefCountVImpl *pObject; // [rsp+70h] [rbp+8h] BYREF
  Scaleform::Render::Size<unsigned long> sizea; // [rsp+88h] [rbp+20h] BYREF

  result = this->pRenderBufferManager.pObject->CreateTempRenderTarget(this->pRenderBufferManager.pObject, size);
  v6 = result;
  if ( result )
  {
    result = (Scaleform::Render::RenderTarget *)result->GetTexture(result);
    v7 = (Scaleform::Render::Size<unsigned long> *)result;
    if ( result )
    {
      pRenderTargetData = v6->pRenderTargetData;
      if ( !pRenderTargetData || needsStencil && !pRenderTargetData->pDepthStencilBuffer.pObject )
      {
        v9 = 0i64;
        pObject = 0i64;
        v10 = 0i64;
        BufferSize = result[1].BufferSize;
        if ( *(_QWORD *)(*(_QWORD *)&BufferSize + 8i64) )
        {
          Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)(*(_QWORD *)&BufferSize + 8i64));
          v10 = pObject;
        }
        v12 = *(Scaleform::RefCountVImpl **)(*(_QWORD *)&BufferSize + 8i64);
        if ( pRenderTargetData )
        {
          if ( pRenderTargetData[1].pDepthStencilBuffer.pObject )
          {
            Scaleform::Render::RenderBuffer::AddRef(pRenderTargetData[1].pDepthStencilBuffer.pObject);
            v10 = pObject;
          }
          if ( v10 )
            Scaleform::RefCountImpl::Release(v10);
          pObject = pRenderTargetData[1].pDepthStencilBuffer.pObject;
        }
        else
        {
          v13 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                  Scaleform::Memory::pGlobalHeap,
                  32i64);
          v14 = (Scaleform::RefCountVImpl *)v13;
          if ( v13 )
          {
            *(_QWORD *)v13 = &Scaleform::RefCountImplCore::`vftable';
            *(_QWORD *)v13 = &Scaleform::Render::GL::HALGLFramebuffer::`vftable';
            *(_DWORD *)(v13 + 8) = 1;
            *(_QWORD *)(v13 + 16) = 0i64;
            *(_DWORD *)(v13 + 24) = 0;
          }
          else
          {
            v14 = 0i64;
          }
          if ( pObject )
            Scaleform::RefCountImpl::Release(pObject);
          v15 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
          pObject = v14;
          v16 = (__int64)v15->GetGraphicsDevice(this);
          (*(void (__fastcall **)(__int64, __int64, Scaleform::RefCountVImpl **))(*(_QWORD *)v16 + 456i64))(
            v16,
            1i64,
            &pObject);
        }
        v17 = this->GetGraphicsDevice(this);
        v17->glBindFramebuffer(v17, 36160u, (Scaleform::Render::GL::HALGLFramebuffer *)pObject);
        v18 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
        ++this->AccumulatedStats.RTChanges;
        v19 = (__int64)v18->GetGraphicsDevice(this);
        (*(void (__fastcall **)(__int64, __int64, __int64, __int64, Scaleform::RefCountVImpl *, _DWORD))(*(_QWORD *)v19 + 440i64))(
          v19,
          36160i64,
          36064i64,
          3553i64,
          v12,
          0);
        if ( needsStencil )
        {
          sizea = v7[7];
          v9 = Scaleform::Render::GL::HAL::createCompatibleDepthStencil(this, &sizea, 1);
        }
        Scaleform::Render::GL::RenderTargetData::UpdateData(
          v6,
          this,
          (Scaleform::Render::GL::HALGLFramebuffer *)pObject,
          v9);
        if ( this->RenderTargetStack.Data.Size )
        {
          Data = this->RenderTargetStack.Data.Data;
          if ( Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject )
          {
            v21 = Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject->pRenderTargetData;
            if ( v21 )
            {
              v22 = this->GetGraphicsDevice(this);
              v22->glBindFramebuffer(
                v22,
                36160u,
                (Scaleform::Render::GL::HALGLFramebuffer *)v21[1].pDepthStencilBuffer.pObject);
            }
          }
        }
        if ( v9 )
          v9->Release(v9);
        if ( v12 )
          Scaleform::RefCountImpl::Release(v12);
        if ( pObject )
          Scaleform::RefCountImpl::Release(pObject);
      }
      return v6;
    }
  }
  return result;
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::DrawProcessedComplexMeshes(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::ComplexMesh *complexMesh,
        const Scaleform::Render::StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix> *matrices)
{
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v3; // rax
  const Scaleform::Render::StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix> *v4; // rbx
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *v6; // r14
  __int64 v7; // r15
  Scaleform::Render::MeshCacheItem *pCacheMeshItem; // rdi
  unsigned int Size; // ecx
  Scaleform::Render::Matrix2x4<float> *Data; // rax
  unsigned int v11; // er15
  Scaleform::Render::ComplexMesh::FillRecord *v12; // r12
  unsigned int v13; // er13
  Scaleform::Render::GL::ShaderManager *p_SManager; // rax
  Scaleform::Render::GL::ShaderInterface *p_ShaderData; // rdi
  __int64 v16; // rax
  __int64 v17; // rax
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v18; // rax
  unsigned int v19; // esi
  int v20; // esi
  __int64 v21; // r12
  const Scaleform::Render::StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix> *v22; // rdi
  __int64 v23; // r15
  __int64 **v24; // rbx
  __int64 v25; // r9
  __int64 v26; // rdx
  Scaleform::Render::Cxform *v27; // r8
  Scaleform::Render::PrimitiveFillType v28; // eax
  unsigned int v29; // er15
  Scaleform::Render::PrimitiveFillType v30; // esi
  Scaleform::Render::VertexFormat *v31; // rbx
  Scaleform::Render::GL::ShaderDesc::ShaderType v32; // eax
  const Scaleform::Render::GL::ShaderPair *p_CurShader; // r13
  __int64 v34; // rax
  __int64 v35; // rax
  _BOOL8 v36; // rdx
  unsigned int v37; // ebx
  __int64 v38; // rax
  int Type; // eax
  unsigned int v40; // er15
  const Scaleform::Render::Matrix2x4<float> *p_VertexMatrix; // r8
  unsigned int v42; // ecx
  __int64 v43; // rax
  const Scaleform::Render::MatrixPoolImpl::HMatrix *m2; // rbx
  const Scaleform::Render::MatrixState *Matrices; // rax
  int v46; // esi
  __int64 v47; // rax
  unsigned __int8 *v48; // rax
  _QWORD *pVDesc; // rdx
  float v50; // xmm0_4
  __m128i v51; // xmm1
  int v52; // ecx
  __int64 v53; // rax
  char v54; // r9
  unsigned __int8 v55; // al
  __int64 v56; // r9
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rdx
  Scaleform::Render::Cxform *v58; // r8
  const float *v59; // rbx
  unsigned int v60; // esi
  Scaleform::Render::ComplexMesh::FillRecord *v61; // rbx
  __int64 v62; // r12
  __int64 v63; // r15
  unsigned int v64; // er14
  unsigned int *FillMatrixIndex; // r13
  Scaleform::Render::PrimitiveFill *pObject; // rax
  Scaleform::Render::Texture *v67; // rbx
  int TextureCount; // eax
  bool v69; // cf
  Scaleform::Render::RenderSync *v70; // rax
  Scaleform::Render::RenderSync *v71; // rax
  Scaleform::Render::MeshCacheListSet *pCacheList; // rdx
  __int64 v73; // rcx
  Scaleform::Render::MeshCacheListSet *v74; // rcx
  unsigned int v75; // edx
  int v76; // esi
  unsigned int v77; // ebx
  unsigned __int8 v78; // [rsp+40h] [rbp-C0h]
  unsigned int batchCount; // [rsp+44h] [rbp-BCh]
  bool IsSolid; // [rsp+48h] [rbp-B8h]
  Scaleform::Render::ImageFillMode fm; // [rsp+49h] [rbp-B7h] BYREF
  unsigned int fillflags; // [rsp+4Ch] [rbp-B4h] BYREF
  unsigned int v83; // [rsp+50h] [rbp-B0h]
  unsigned int v84; // [rsp+54h] [rbp-ACh]
  unsigned int batchType; // [rsp+58h] [rbp-A8h]
  int v86; // [rsp+5Ch] [rbp-A4h]
  unsigned int v87; // [rsp+60h] [rbp-A0h]
  unsigned int v88; // [rsp+64h] [rbp-9Ch]
  Scaleform::Render::ComplexMesh::FillRecord *v89; // [rsp+68h] [rbp-98h]
  Scaleform::Render::MeshCacheItem *v90; // [rsp+70h] [rbp-90h]
  unsigned int Raw; // [rsp+78h] [rbp-88h] BYREF
  unsigned int v92; // [rsp+80h] [rbp-80h]
  unsigned int v93; // [rsp+84h] [rbp-7Ch]
  const Scaleform::Render::StrideArray<Scaleform::Render::MatrixPoolImpl::HMatrix> *v94; // [rsp+88h] [rbp-78h]
  Scaleform::Render::ComplexMesh *v95; // [rsp+90h] [rbp-70h]
  __int64 v96; // [rsp+98h] [rbp-68h]
  __int64 v97; // [rsp+A0h] [rbp-60h]
  char v98[8]; // [rsp+A8h] [rbp-58h] BYREF
  Scaleform::Render::Matrix2x4<float> *v99; // [rsp+B0h] [rbp-50h]
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *v100; // [rsp+B8h] [rbp-48h]
  Scaleform::Render::Matrix2x4<float> *v101; // [rsp+C0h] [rbp-40h]
  Scaleform::Render::RenderEvents *v102; // [rsp+C8h] [rbp-38h]
  Scaleform::Render::Cxform v103; // [rsp+D0h] [rbp-30h] BYREF
  int v104[4]; // [rsp+F0h] [rbp-10h] BYREF

  v3 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v4 = matrices;
  v94 = matrices;
  v95 = complexMesh;
  v6 = this;
  v100 = this;
  v102 = v3->GetEvents(this);
  v7 = (__int64)v102;
  v102->Begin(v102, Event_DrawComplex, "HAL::DrawProcessedComplexMeshes");
  pCacheMeshItem = complexMesh->pCacheMeshItem;
  v90 = pCacheMeshItem;
  if ( !Scaleform::Render::HAL::checkState(v6, 8u, "HAL::DrawProcessedComplexMeshes") || !pCacheMeshItem )
    goto LABEL_63;
  Size = complexMesh->FillRecords.Data.Size;
  Data = complexMesh->FillMatrixCache.Data.Data;
  v11 = v4->Size;
  v12 = complexMesh->FillRecords.Data.Data;
  v13 = 1;
  batchCount = 1;
  v89 = v12;
  v93 = Size;
  v84 = v11;
  v99 = Data;
  v87 = 0;
  if ( !Size )
    goto LABEL_58;
  p_SManager = &v6->SManager;
  p_ShaderData = &v6->ShaderData;
  do
  {
    if ( v11 > 1
      && Scaleform::Render::GL::ShaderManager::HasInstancingSupport(p_SManager)
      && (v6->GetProfiler(v6), v12->pFormats[1]) )
    {
      v16 = (__int64)v6->GetMeshCache(v6);
      v17 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)(v16 + 8) + 16i64))(v16 + 8);
      batchType = 2;
      v83 = 1;
      v13 = *(_DWORD *)(v17 + 48);
      if ( v11 < v13 )
        v13 = v11;
      batchCount = v13;
    }
    else
    {
      v18 = v6->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      batchType = 0;
      v83 = 0;
      v18->setLinearStreamSource(v6, DP_Single);
    }
    v19 = v6->FillFlags;
    fillflags = v19;
    if ( v11 )
    {
      v20 = v4->pData->pHandle->pHeader->Format & 0x10 | v19;
      fillflags = v20;
      v21 = v84;
      v22 = v94;
      v23 = 0i64;
      do
      {
        v24 = (__int64 **)((char *)v22->pData + v22->StrideSize * v23);
        v25 = (__int64)v6->GetProfiler(v6);
        v26 = **v24;
        if ( (*(_BYTE *)(v26 + 15) & 1) != 0 )
          v27 = (Scaleform::Render::Cxform *)(v26
                                            + 16
                                            * (Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[*(_BYTE *)(v26 + 15) & 0xF].Offsets[0]
                                             + 1i64));
        else
          v27 = &Scaleform::Render::Cxform::Identity;
        (*(void (__fastcall **)(__int64, Scaleform::Render::Cxform *, Scaleform::Render::Cxform *))(*(_QWORD *)v25
                                                                                                  + 96i64))(
          v25,
          &v103,
          v27);
        if ( !Scaleform::Render::Cxform::operator==(&v103, &Scaleform::Render::Cxform::Identity) )
        {
          v20 |= 8u;
          fillflags = v20;
        }
        if ( v103.M[0][3] < 1.0 )
        {
          v20 |= 0x20u;
          fillflags = v20;
        }
        ++v23;
        --v21;
      }
      while ( v21 );
      v12 = v89;
      p_ShaderData = &v6->ShaderData;
      v13 = batchCount;
    }
    v28 = v6->Profiler.GetFillType(&v6->Profiler, v12->pFill.pObject->Data.Type);
    v29 = v83;
    v30 = v28;
    v31 = v12->pFormats[v83];
    v32 = Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill(
            &v6->SManager,
            v12->pFill.pObject,
            &fillflags,
            batchType);
    p_ShaderData->SetStaticShader(p_ShaderData, v32, v31);
    if ( !p_ShaderData->PrimitiveOpen )
    {
      p_ShaderData->PrimitiveOpen = 1;
      p_ShaderData->CurrentPrimitiveMeshCount = v13;
      *(_QWORD *)p_ShaderData->UniformSet = 0i64;
      *(_QWORD *)&p_ShaderData->UniformSet[8] = 0i64;
      *(_QWORD *)&p_ShaderData->UniformSet[16] = 0i64;
      *(_WORD *)&p_ShaderData->UniformSet[24] = 0;
      p_ShaderData->Textures[0] = 0i64;
      p_ShaderData->Textures[1] = 0i64;
      p_ShaderData->Textures[2] = 0i64;
      p_ShaderData->Textures[3] = 0i64;
    }
    p_CurShader = &p_ShaderData->CurShader;
    v34 = (__int64)v6->GetProfiler(v6);
    (*(void (__fastcall **)(__int64, Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *, Scaleform::Render::ComplexMesh *, _QWORD))(*(_QWORD *)v34 + 112i64))(
      v34,
      v6,
      v95,
      v87);
    v35 = v6->setVertexArray(v6, v12, v29, v90);
    v37 = fillflags;
    v96 = v35;
    LOBYTE(v36) = (fillflags & 0x20) != 0
               || Scaleform::Render::PrimitiveFillData::RequiresBlend((Scaleform::Render::PrimitiveFillData *)&v12->pFill.pObject->Data);
    v6->applyBlendModeEnable(v6, v36);
    v38 = (__int64)v6->GetProfiler(v6);
    (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v38 + 104i64))(v38, v37);
    Type = v12->pFill.pObject->Data.Type;
    if ( Type < 5 )
      v78 = 0;
    else
      v78 = ((unsigned int)(Type - 9) <= 1) + 1;
    v40 = 0;
    IsSolid = Scaleform::Render::PrimitiveFill::IsSolid(v30);
    v88 = 0;
    if ( v84 )
    {
      p_VertexMatrix = &v95->VertexMatrix;
      v86 = v84 - 1;
      v42 = batchCount;
      v43 = 0i64;
      v97 = 0i64;
      v101 = &v95->VertexMatrix;
      do
      {
        m2 = (Scaleform::Render::MatrixPoolImpl::HMatrix *)((char *)v94->pData + v94->StrideSize * v43);
        Matrices = v6->Matrices.pObject;
        v46 = v40 % v42;
        v92 = v40 % v42;
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetMatrix(
          p_ShaderData,
          p_CurShader,
          0xEu,
          p_VertexMatrix,
          m2,
          Matrices,
          0,
          v40 % v42);
        if ( IsSolid )
        {
          v47 = (__int64)v6->GetProfiler(v6);
          Raw = v12->pFill.pObject->Data.SolidColor.Raw;
          v48 = (unsigned __int8 *)(*(__int64 (__fastcall **)(__int64, char *, unsigned int *))(*(_QWORD *)v47 + 80i64))(
                                     v47,
                                     v98,
                                     &Raw);
          pVDesc = p_CurShader->pVDesc;
          v50 = (float)v48[2];
          v51 = _mm_cvtsi32_si128(v48[1]);
          v52 = *v48;
          LODWORD(v48) = v48[3];
          *(float *)v104 = v50 * 0.0039215689;
          *(float *)&v104[1] = _mm_cvtepi32_ps(v51).m128_f32[0] * 0.0039215689;
          *(float *)&v104[3] = (float)(int)v48 * 0.0039215689;
          *(float *)&v104[2] = (float)v52 * 0.0039215689;
          v53 = pVDesc[3];
          v54 = *(_BYTE *)(v53 + 19);
          if ( v54 < 0 && (pVDesc = p_CurShader->pFDesc, v53 = pVDesc[3], v54 = *(_BYTE *)(v53 + 19), v54 < 0) )
          {
            p_ShaderData->SetUniformRaw(p_ShaderData, p_CurShader, 6u, (const float *)v104, 4u, 0, v46);
            v55 = 0;
            v78 = 0;
          }
          else
          {
            p_ShaderData->SetUniformRaw(
              p_ShaderData,
              p_CurShader,
              *(char *)(v53 + 18),
              (const float *)v104,
              4u,
              v54 + v46 * *(unsigned __int8 *)(pVDesc[2] + 10i64 * (unsigned int)*(char *)(v53 + 18) + 9),
              0);
            v55 = 0;
            v78 = 0;
          }
        }
        else
        {
          if ( (fillflags & 8) != 0 )
          {
            v56 = (__int64)v6->GetProfiler(v6);
            pHeader = m2->pHandle->pHeader;
            if ( (pHeader->Format & 1) != 0 )
              v58 = (Scaleform::Render::Cxform *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[0]
                                                        + 1];
            else
              v58 = &Scaleform::Render::Cxform::Identity;
            v59 = (const float *)(*(__int64 (__fastcall **)(__int64, Scaleform::Render::Cxform *, Scaleform::Render::Cxform *))(*(_QWORD *)v56 + 96i64))(
                                   v56,
                                   &v103,
                                   v58);
            Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
              p_ShaderData,
              p_CurShader,
              6u,
              v59,
              4u,
              0,
              v46);
            Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
              p_ShaderData,
              p_CurShader,
              5u,
              v59 + 4,
              4u,
              0,
              v46);
          }
          v55 = v78;
        }
        v60 = 0;
        if ( v55 )
        {
          v61 = v89;
          v62 = 4i64;
          v63 = 0i64;
          v64 = 0;
          FillMatrixIndex = v89->FillMatrixIndex;
          do
          {
            Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
              p_ShaderData,
              &p_ShaderData->CurShader,
              0x16u,
              (const float *)&v99[*FillMatrixIndex],
              8u,
              2 * v60,
              v92);
            pObject = v61->pFill.pObject;
            v67 = (Scaleform::Render::Texture *)(&v61->pFill.pObject->__vftable)[v62];
            fm.Fill = pObject->Data.FillModes[v63].Fill;
            Scaleform::Render::GL::ShaderInterface::SetTexture(
              p_ShaderData,
              &p_ShaderData->CurShader,
              0x15u,
              v67,
              (Scaleform::Render::ImageFillMode)&fm,
              v64);
            TextureCount = v67->TextureCount;
            ++v63;
            ++FillMatrixIndex;
            v61 = v89;
            ++v62;
            v64 += TextureCount;
            ++v60;
          }
          while ( v60 < v78 );
          v6 = v100;
          p_CurShader = &p_ShaderData->CurShader;
          v40 = v88;
          v12 = v89;
        }
        if ( batchType == 2 )
        {
          v42 = batchCount;
          v75 = (v40 + 1) % batchCount;
          if ( !v75 && v40 )
          {
            v76 = v86;
          }
          else
          {
            v76 = v86;
            if ( v40 != v86 )
              goto LABEL_55;
          }
          v77 = batchCount;
          if ( v40 == v76 && v75 )
            v77 = (v40 + 1) % batchCount;
          v6->setInstancedStreamSource(v6, v77, v12->IndexCount);
          Scaleform::Render::GL::ShaderInterface::Finish(p_ShaderData, v77);
          v6->setVertexArrayPerDraw(v6, v12, v83, v90);
          v6->drawIndexedInstanced(v6, v12->IndexCount, v12->VertexCount, v77, v96 + v12->IndexOffset, 0i64);
          ++v6->AccumulatedStats.Primitives;
          v42 = batchCount;
          if ( v40 == v76 || p_ShaderData->PrimitiveOpen )
            goto LABEL_55;
          p_ShaderData->CurrentPrimitiveMeshCount = batchCount;
        }
        else
        {
          Scaleform::Render::GL::ShaderInterface::Finish(p_ShaderData, 1u);
          v6->setVertexArrayPerDraw(v6, v12, v83, v90);
          v6->drawIndexedPrimitive(v6, v12->IndexCount, v12->VertexCount, 1u, v96 + v12->IndexOffset, 0i64);
          ++v6->AccumulatedStats.Primitives;
          v42 = batchCount;
          if ( v40 == v86 || p_ShaderData->PrimitiveOpen )
            goto LABEL_55;
          p_ShaderData->CurrentPrimitiveMeshCount = 1;
        }
        p_ShaderData->PrimitiveOpen = 1;
        *(_QWORD *)p_ShaderData->UniformSet = 0i64;
        *(_QWORD *)&p_ShaderData->UniformSet[8] = 0i64;
        *(_QWORD *)&p_ShaderData->UniformSet[16] = 0i64;
        *(_WORD *)&p_ShaderData->UniformSet[24] = 0;
        p_ShaderData->Textures[0] = 0i64;
        p_ShaderData->Textures[1] = 0i64;
        p_ShaderData->Textures[2] = 0i64;
        p_ShaderData->Textures[3] = 0i64;
LABEL_55:
        ++v40;
        p_VertexMatrix = v101;
        v43 = v97 + 1;
        v88 = v40;
        ++v97;
      }
      while ( v40 < v84 );
    }
    ++v12;
    v13 = batchCount;
    v69 = v87 + 1 < v93;
    v4 = v94;
    v11 = v84;
    ++v87;
    p_SManager = &v6->SManager;
    v89 = v12;
  }
  while ( v69 );
  pCacheMeshItem = v90;
LABEL_58:
  if ( v6->GetRenderSync(v6) )
  {
    v70 = v6->GetRenderSync(v6);
    Scaleform::Render::RenderSync::AddFenceResource(v70, &pCacheMeshItem->Scaleform::Render::FenceResource);
  }
  if ( v6->GetRenderSync(v6) )
  {
    v71 = v6->GetRenderSync(v6);
    Scaleform::Render::RenderSync::NotifySubmission(v71, SubmissionType_DrawCall);
  }
  pCacheList = pCacheMeshItem->pCacheList;
  v7 = (__int64)v102;
  pCacheMeshItem->pPrev->Scaleform::Render::FenceResource::pNext = pCacheMeshItem->pNext;
  pCacheMeshItem->pNext->Scaleform::Render::FenceResource::pPrev = pCacheMeshItem->pPrev;
  pCacheMeshItem->pPrev = (Scaleform::Render::MeshCacheItem *)-1i64;
  pCacheMeshItem->pNext = (Scaleform::Render::MeshCacheItem *)-1i64;
  v73 = 3 * ((int)pCacheMeshItem->ListType + 1i64);
  *((_QWORD *)&pCacheList->pCache + v73) -= pCacheMeshItem->AllocSize;
  v74 = pCacheMeshItem->pCacheList;
  pCacheMeshItem->ListType = MCL_ThisFrame;
  pCacheMeshItem->pNext = v74->Slots[2].Root.pNext;
  pCacheMeshItem->pPrev = (Scaleform::Render::MeshCacheItem *)&v74->Slots[1].Size;
  v74->Slots[2].Root.pNext->pPrev = pCacheMeshItem;
  v74->Slots[2].Root.pNext = pCacheMeshItem;
  v74->Slots[2].Size += pCacheMeshItem->AllocSize;
LABEL_63:
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 16i64))(v7, 10i64);
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::DrawProcessedPrimitive(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::Primitive *pprimitive,
        Scaleform::Render::PrimitiveBatch *pstart,
        Scaleform::Render::PrimitiveBatch *pend)
{
  Scaleform::Render::PrimitiveBatch *v4; // rdi
  Scaleform::Render::RenderEvents *v8; // rsi
  unsigned int v9; // er12
  Scaleform::Render::MeshCacheItem *pMeshItem; // rsi
  __int64 MeshIndex; // r8
  unsigned int meshCount; // er14
  unsigned int v13; // edx
  const Scaleform::Render::GL::ShaderPair *v14; // r15
  Scaleform::Render::ProfileViews *v15; // rax
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v16; // rax
  __int64 v17; // rdx
  unsigned __int64 v18; // rax
  __int64 VertexCount; // r8
  __int64 IndexCount; // rdx
  Scaleform::Render::RenderSync *v21; // rax
  Scaleform::Render::MeshCacheListSet *pCacheList; // rdx
  unsigned __int64 *p_Size; // rcx
  Scaleform::Render::MeshCacheListSet *v24; // rcx
  Scaleform::Render::RenderSync *v25; // rax
  Scaleform::Render::RenderEvents *v26; // [rsp+50h] [rbp-48h]
  unsigned int fillFlags; // [rsp+A0h] [rbp+8h] BYREF
  Scaleform::Render::PrimitiveBatch *v28; // [rsp+B8h] [rbp+20h]

  v28 = pend;
  v4 = pend;
  v26 = this->GetEvents(this);
  v8 = v26;
  v26->Begin(v26, Event_DrawPrimitive, "HAL::DrawProcessedPrimitive");
  if ( Scaleform::Render::HAL::checkState(this, 8u, "HAL::DrawProcessedPrimitive")
    && LODWORD(pprimitive->Meshes.Data.Size) )
  {
    if ( !pstart )
      pstart = pprimitive->Batches.Root.pNext;
    v9 = 0;
    if ( pstart != v4 )
    {
      do
      {
        pMeshItem = pstart->MeshNode.pMeshItem;
        MeshIndex = pstart->MeshIndex;
        meshCount = pstart->MeshCount;
        if ( pMeshItem )
        {
          v13 = this->FillFlags;
          fillFlags = v13;
          if ( meshCount )
            fillFlags = pprimitive->Meshes.Data.Data->M.pHandle->pHeader->Format & 0x10 | v13;
          if ( !this->ShaderData.PrimitiveOpen )
          {
            this->ShaderData.PrimitiveOpen = 1;
            this->ShaderData.CurrentPrimitiveMeshCount = meshCount;
            *(_QWORD *)this->ShaderData.UniformSet = 0i64;
            *(_QWORD *)&this->ShaderData.UniformSet[8] = 0i64;
            *(_QWORD *)&this->ShaderData.UniformSet[16] = 0i64;
            *(_WORD *)&this->ShaderData.UniformSet[24] = 0;
            this->ShaderData.Textures[0] = 0i64;
            this->ShaderData.Textures[1] = 0i64;
            this->ShaderData.Textures[2] = 0i64;
            this->ShaderData.Textures[3] = 0i64;
          }
          v14 = Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetPrimitiveFill(
                  &this->SManager,
                  pprimitive->pFill.pObject,
                  &fillFlags,
                  pstart->Type,
                  pstart->pFormat,
                  meshCount,
                  this->Matrices.pObject,
                  &pprimitive->Meshes.Data.Data[MeshIndex],
                  &this->ShaderData);
          v15 = this->GetProfiler(this);
          v15->SetBatch(v15, this, pprimitive, v9);
          v16 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
          if ( pstart->Type == DP_Instanced )
            v16->setInstancedStreamSource(this, pstart->MeshCount, pMeshItem->IndexCount);
          else
            ((void (__fastcall *)(Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *))v16->setLinearStreamSource)(this);
          Scaleform::Render::GL::ShaderInterface::Finish(&this->ShaderData, meshCount);
          if ( (this->HALState & 0x20) != 0 && v14->pShaderObj && v14->pVDesc && v14->pFDesc )
          {
            v17 = fillFlags >> 5;
            LOBYTE(v17) = (fillFlags & 0x20) != 0;
            this->applyBlendModeEnable(this, v17);
            v18 = this->setVertexArray(this, pstart, pMeshItem);
            VertexCount = pMeshItem->VertexCount;
            IndexCount = pMeshItem->IndexCount;
            if ( pstart->Type == DP_Instanced )
              this->drawIndexedInstanced(this, IndexCount, VertexCount, pstart->MeshCount, v18, 0i64);
            else
              this->drawIndexedPrimitive(this, IndexCount, VertexCount, pMeshItem->MeshCount, v18, 0i64);
          }
          if ( this->GetRenderSync(this) )
          {
            v21 = this->GetRenderSync(this);
            Scaleform::Render::RenderSync::AddFenceResource(v21, &pMeshItem->Scaleform::Render::FenceResource);
          }
          pCacheList = pMeshItem->pCacheList;
          v4 = v28;
          pMeshItem->pPrev->Scaleform::Render::FenceResource::pNext = pMeshItem->pNext;
          pMeshItem->pNext->Scaleform::Render::FenceResource::pPrev = pMeshItem->pPrev;
          pMeshItem->pPrev = (Scaleform::Render::MeshCacheItem *)-1i64;
          pMeshItem->pNext = (Scaleform::Render::MeshCacheItem *)-1i64;
          p_Size = &pCacheList->Slots[pMeshItem->ListType].Size;
          *p_Size -= pMeshItem->AllocSize;
          v24 = pMeshItem->pCacheList;
          pMeshItem->ListType = MCL_ThisFrame;
          pMeshItem->pNext = v24->Slots[2].Root.pNext;
          pMeshItem->pPrev = (Scaleform::Render::MeshCacheItem *)&v24->Slots[1].Size;
          v24->Slots[2].Root.pNext->pPrev = pMeshItem;
          v24->Slots[2].Root.pNext = pMeshItem;
          v24->Slots[2].Size += pMeshItem->AllocSize;
        }
        pstart = pstart->pNext;
        ++v9;
      }
      while ( pstart != v4 );
      v8 = v26;
    }
    if ( this->GetRenderSync(this) )
    {
      v25 = this->GetRenderSync(this);
      Scaleform::Render::RenderSync::NotifySubmission(v25, SubmissionType_DrawCall);
    }
  }
  v8->End(v8, Event_DrawPrimitive);
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::DrawableCompare(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen)
{
  Scaleform::Render::RenderEvents *v6; // rsi
  Scaleform::Render::RenderTarget *pObject; // rcx
  Scaleform::Render::Size<int> texsize; // [rsp+40h] [rbp-18h] BYREF

  v6 = this->GetEvents(this);
  v6->Begin(v6, Event_DICompare, "HAL::DrawableCompare");
  pObject = this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject;
  texsize.Width = pObject->ViewRect.x2 - pObject->ViewRect.x1;
  texsize.Height = pObject->ViewRect.y2 - pObject->ViewRect.y1;
  Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableCompare(
    &this->SManager,
    tex,
    texgen,
    (const Scaleform::Render::Size<int>)&texsize,
    this->MappedXY16iAlphaTexture[1],
    &this->ShaderData,
    2u);
  this->drawScreenQuad(this);
  v6->End(v6, Event_DICompare);
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::DrawableCopyChannel(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Matrix4x4<float> *cxmul)
{
  this->DrawableMerge(this, tex, texgen, cxmul);
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::DrawableCopyPixels(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Matrix2x4<float> *mvp,
        bool mergeAlpha,
        bool destAlpha)
{
  Scaleform::Render::RenderEvents *v10; // r14
  Scaleform::Render::RenderTarget *pObject; // rcx
  Scaleform::Render::Size<int> texsize; // [rsp+50h] [rbp-18h] BYREF

  v10 = this->GetEvents(this);
  v10->Begin(v10, Event_DICopyPixels, "HAL::DrawableCopyPixels");
  pObject = this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject;
  texsize.Width = pObject->ViewRect.x2 - pObject->ViewRect.x1;
  texsize.Height = pObject->ViewRect.y2 - pObject->ViewRect.y1;
  Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableCopyPixelsFill(
    &this->SManager,
    tex,
    texgen,
    (const Scaleform::Render::Size<int>)&texsize,
    mvp,
    mergeAlpha,
    destAlpha,
    this->MappedXY16iAlphaTexture[1],
    &this->ShaderData,
    2u);
  this->drawScreenQuad(this);
  v10->End(v10, Event_DICopyPixels);
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::DrawableCopyback(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::Texture *source,
        const Scaleform::Render::Matrix2x4<float> *mvpOriginal,
        const Scaleform::Render::Matrix2x4<float> *texgen)
{
  Scaleform::Render::RenderEvents *v8; // r14
  Scaleform::Render::ImageFillMode fm; // [rsp+40h] [rbp-78h] BYREF
  float v[4]; // [rsp+50h] [rbp-68h] BYREF
  __int128 v11; // [rsp+60h] [rbp-58h]

  v8 = this->GetEvents(this);
  v8->Begin(v8, Event_DICopyback, "HAL::DrawableCopyback");
  this->ShaderData.SetStaticShader(&this->ShaderData, ST_BatchTexTG, this->MappedXY16iAlphaTexture[1]);
  if ( !this->ShaderData.PrimitiveOpen )
  {
    this->ShaderData.PrimitiveOpen = 1;
    this->ShaderData.CurrentPrimitiveMeshCount = 1;
    *(_QWORD *)this->ShaderData.UniformSet = 0i64;
    *(_QWORD *)&this->ShaderData.UniformSet[8] = 0i64;
    *(_QWORD *)&this->ShaderData.UniformSet[16] = 0i64;
    *(_WORD *)&this->ShaderData.UniformSet[24] = 0;
    this->ShaderData.Textures[0] = 0i64;
    this->ShaderData.Textures[1] = 0i64;
    this->ShaderData.Textures[2] = 0i64;
    this->ShaderData.Textures[3] = 0i64;
  }
  *(_OWORD *)v = *(_OWORD *)&mvpOriginal->M[0][0];
  v11 = *(_OWORD *)&mvpOriginal->M[1][0];
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    &this->ShaderData,
    &this->ShaderData.CurShader,
    0xEu,
    v,
    8u,
    0,
    0);
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    &this->ShaderData,
    &this->ShaderData.CurShader,
    0x16u,
    (const float *)texgen,
    8u,
    0,
    0);
  fm.Fill = 1;
  Scaleform::Render::GL::ShaderInterface::SetTexture(
    &this->ShaderData,
    &this->ShaderData.CurShader,
    0x15u,
    source,
    (Scaleform::Render::ImageFillMode)&fm,
    0);
  Scaleform::Render::GL::ShaderInterface::Finish(&this->ShaderData, 1u);
  this->drawScreenQuad(this);
  v8->End(v8, Event_DICopyback);
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::DrawableCxform(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Cxform *cx)
{
  Scaleform::Render::RenderEvents *v8; // r14
  Scaleform::Render::RenderTarget *pObject; // rcx
  Scaleform::Render::Size<int> texsize; // [rsp+40h] [rbp-18h] BYREF

  v8 = this->GetEvents(this);
  v8->Begin(v8, Event_DICxform, "HAL::DrawableCxform");
  pObject = this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject;
  texsize.Width = pObject->ViewRect.x2 - pObject->ViewRect.x1;
  texsize.Height = pObject->ViewRect.y2 - pObject->ViewRect.y1;
  Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableCxform(
    &this->SManager,
    tex,
    texgen,
    (const Scaleform::Render::Size<int>)&texsize,
    cx,
    this->MappedXY16iAlphaTexture[1],
    &this->ShaderData,
    2u);
  this->drawScreenQuad(this);
  v8->End(v8, Event_DICxform);
}

char __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::DrawableFinish(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        unsigned int srcCount,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Size<int> texsize,
        const Scaleform::Render::Matrix2x4<float> *mvpOriginal,
        Scaleform::Render::GL::ShaderInterface *psi,
        unsigned int flags)
{
  float v11; // xmm1_4
  float v12; // xmm6_4
  float v13; // xmm7_4
  float v14; // xmm9_4
  float v15; // xmm10_4
  float v16; // xmm0_4
  float v17; // xmm11_4
  float v18; // xmm0_4
  unsigned int index; // ebx
  unsigned int v20; // edi
  Scaleform::Render::Texture *v21; // r9
  Scaleform::Render::ImageFillMode fm; // [rsp+40h] [rbp-D8h] BYREF
  float v; // [rsp+50h] [rbp-C8h] BYREF
  float v25; // [rsp+54h] [rbp-C4h]
  float v26; // [rsp+58h] [rbp-C0h]
  float v27; // [rsp+5Ch] [rbp-BCh]
  float v28; // [rsp+60h] [rbp-B8h]
  float v29; // [rsp+64h] [rbp-B4h]
  float v30; // [rsp+68h] [rbp-B0h]
  float v31; // [rsp+6Ch] [rbp-ACh]

  v11 = mvpOriginal->M[0][0];
  v12 = mvpOriginal->M[0][3];
  v13 = mvpOriginal->M[1][3];
  v14 = mvpOriginal->M[0][1];
  v15 = mvpOriginal->M[1][0];
  v26 = mvpOriginal->M[0][2];
  v16 = mvpOriginal->M[1][2];
  v17 = mvpOriginal->M[1][1];
  v = v11;
  v25 = v14;
  v27 = v12;
  v28 = v15;
  v29 = v17;
  v30 = v16;
  v31 = v13;
  if ( (flags & 2) != 0 )
  {
    v30 = 0.0;
    v26 = 0.0;
    v = v11 + (float)(v14 * 0.0);
    v28 = v15 + (float)(v17 * 0.0);
    v25 = (float)(v11 * 0.0) - (float)(v14 * 1.0);
    v12 = (float)(v12 + (float)((float)(v11 * 0.0) + v14)) + (float)((float)(v11 * 0.0) + (float)(v14 * 0.0));
    v13 = (float)(v13 + (float)((float)(v15 * 0.0) + v17)) + (float)((float)(v15 * 0.0) + (float)(v17 * 0.0));
    v29 = (float)(v15 * 0.0) - (float)(v17 * 1.0);
    v27 = v12;
    v31 = v13;
  }
  if ( (flags & 1) != 0 )
  {
    v18 = (float)*(int *)(*(_QWORD *)&texsize + 4i64);
    v27 = v12 - (float)(1.0 / (float)*(int *)texsize.Width);
    v31 = v13 + (float)(1.0 / v18);
  }
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    psi,
    &psi->CurShader,
    0xEu,
    &v,
    8u,
    0,
    0);
  index = 0;
  if ( srcCount )
  {
    v20 = 0;
    do
    {
      v21 = *tex;
      fm.Fill = 1;
      Scaleform::Render::GL::ShaderInterface::SetTexture(
        psi,
        &psi->CurShader,
        0x15u,
        v21,
        (Scaleform::Render::ImageFillMode)&fm,
        index);
      Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
        psi,
        &psi->CurShader,
        0x16u,
        (const float *)texgen,
        8u,
        v20,
        0);
      ++index;
      ++tex;
      v20 += 2;
      ++texgen;
    }
    while ( index < srcCount );
  }
  Scaleform::Render::GL::ShaderInterface::Finish(psi, 1u);
  return 1;
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::DrawableMerge(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Matrix4x4<float> *cxmul)
{
  Scaleform::Render::RenderEvents *v8; // r14
  Scaleform::Render::RenderTarget *pObject; // rcx
  Scaleform::Render::Size<int> texsize; // [rsp+40h] [rbp-18h] BYREF

  v8 = this->GetEvents(this);
  v8->Begin(v8, Event_DIMerge, "HAL::DrawableMerge");
  pObject = this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject;
  texsize.Width = pObject->ViewRect.x2 - pObject->ViewRect.x1;
  texsize.Height = pObject->ViewRect.y2 - pObject->ViewRect.y1;
  Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableMergeFill(
    &this->SManager,
    tex,
    texgen,
    (const Scaleform::Render::Size<int>)&texsize,
    cxmul,
    this->MappedXY16iAlphaTexture[1],
    &this->ShaderData,
    2u);
  this->drawScreenQuad(this);
  v8->End(v8, Event_DIMerge);
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::DrawablePaletteMap(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Matrix2x4<float> *mvp,
        unsigned int channelMask,
        const unsigned int *values)
{
  Scaleform::Render::RenderEvents *v7; // rsi
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v8; // rax
  __int64 v9; // rax
  __int64 v10; // rdi
  __int64 v11; // rbx
  unsigned int v12; // eax
  Scaleform::Render::Size<int> v13; // rax
  Scaleform::Render::Texture *paletteMap; // rbx
  unsigned int v15; // ebx
  int v17; // er15
  int v18; // er12
  unsigned int v19; // edi
  unsigned __int8 *v20; // r14
  unsigned int *v21; // rsi
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *v22; // rdi
  Scaleform::Render::RenderTarget *pObject; // rdx
  Scaleform::Render::Palette *v24; // rbx
  int v25[2]; // [rsp+58h] [rbp-59h] BYREF
  Scaleform::Render::RenderEvents *v26; // [rsp+60h] [rbp-51h]
  Scaleform::Render::Size<int> texsize; // [rsp+68h] [rbp-49h] BYREF
  Scaleform::Render::ImageData v28; // [rsp+78h] [rbp-39h] BYREF

  v26 = this->GetEvents(this);
  v7 = v26;
  v26->Begin(v26, Event_DIPaletteMap, "HAL::DrawablePaletteMap");
  *(_DWORD *)&v28.Flags = 0x10000;
  *(_QWORD *)&v28.Format = 0i64;
  v28.pPlanes = &v28.Plane0;
  v8 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  memset(&v28.pPalette, 0, 40);
  v9 = (__int64)v8->GetTextureManager(this);
  v25[0] = 256;
  v10 = v9;
  v25[1] = 4;
  v11 = *(_QWORD *)v9;
  v12 = (*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v9 + 120i64))(v9);
  v13 = (Scaleform::Render::Size<int>)(*(__int64 (__fastcall **)(__int64, _QWORD, __int64, int *, int, _QWORD, _QWORD))(v11 + 16))(
                                        v10,
                                        v12,
                                        1i64,
                                        v25,
                                        192,
                                        0i64,
                                        0i64);
  texsize = v13;
  paletteMap = (Scaleform::Render::Texture *)v13;
  if ( v13 )
  {
    if ( (*(unsigned __int8 (__fastcall **)(Scaleform::Render::Size<int>, Scaleform::Render::ImageData *, _QWORD, __int64))(**(_QWORD **)&v13 + 112i64))(
           v13,
           &v28,
           0i64,
           1i64) )
    {
      v15 = 0;
      v17 = 0;
      v18 = 1;
      do
      {
        v19 = 0;
        v20 = &v28.pPlanes->pData[v15 * v28.pPlanes->Pitch];
        if ( (v18 & channelMask) != 0 )
        {
          v21 = (unsigned int *)values;
          do
            Scaleform::Render::ImageData::SetPixelInScanline(&v28, v20, v19++, *v21++);
          while ( v19 < 0x100 );
        }
        else
        {
          do
          {
            Scaleform::Render::ImageData::SetPixelInScanline(&v28, v20, v19, v19 << v17);
            ++v19;
          }
          while ( v19 < 0x100 );
        }
        ++v15;
        v18 = __ROL4__(v18, 1);
        v17 += 8;
        values += 256;
      }
      while ( v17 < 32 );
      paletteMap = (Scaleform::Render::Texture *)texsize;
      if ( (*(unsigned __int8 (__fastcall **)(Scaleform::Render::Size<int>))(**(_QWORD **)&texsize + 120i64))(texsize) )
      {
        v22 = this;
        Scaleform::Render::HAL::ApplyBlendMode(this, Blend_OverwriteAll, 1, 1);
        pObject = v22->RenderTargetStack.Data.Data[v22->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject;
        texsize.Width = pObject->ViewRect.x2 - pObject->ViewRect.x1;
        texsize.Height = pObject->ViewRect.y2 - pObject->ViewRect.y1;
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawablePaletteMap(
          &v22->SManager,
          tex,
          texgen,
          (const Scaleform::Render::Size<int>)&texsize,
          mvp,
          paletteMap,
          v22->MappedXY16iAlphaTexture[1],
          &v22->ShaderData,
          2u);
        v22->drawScreenQuad(v22);
      }
      v7 = v26;
    }
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)paletteMap);
  }
  Scaleform::Render::ImageData::freePlanes(&v28);
  v24 = v28.pPalette.pObject;
  if ( v28.pPalette.pObject
    && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(&v28.pPalette.pObject->RefCount.Value, -1) == 1 )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v24);
  }
  v7->End(v7, Event_DIPaletteMap);
}

bool __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::EndScene(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this)
{
  return (unsigned __int8)Scaleform::Render::HAL::EndScene(this) != 0;
}

char __fastcall Scaleform::Render::GL::HAL::EndScene(Scaleform::Render::GL::HAL *this)
{
  char result; // al
  Scaleform::Render::GL::GraphicsDevice *v3; // rax
  Scaleform::Render::GL::GraphicsDevice *v4; // rax
  Scaleform::Render::GL::GraphicsDevice *v5; // rax
  Scaleform::Render::GL::GraphicsDevice *v6; // rax
  Scaleform::Render::GraphicsDevice *v7; // rax

  result = Scaleform::Render::HAL::EndScene(this);
  if ( result )
  {
    if ( Scaleform::Render::GL::HAL::ShouldUseVAOs(this) )
    {
      v3 = this->GetGraphicsDevice(this);
      v3->glBindVertexArray(v3, 0i64);
    }
    v4 = this->GetGraphicsDevice(this);
    v4->glBindBuffer(v4, 34962u, 0i64);
    v5 = this->GetGraphicsDevice(this);
    v5->glBindBuffer(v5, 34963u, 0i64);
    v6 = this->GetGraphicsDevice(this);
    v6->glUseProgram(v6, 0i64);
    if ( this->GetGraphicsDeviceBase(this) )
    {
      v7 = this->GetGraphicsDeviceBase(this);
      v7->End(v7);
    }
    if ( (this->ConfigFlags & 0x8000000) == 0
      && Concurrency::details::platform::GetCurrentThreadId() == this->RenderThreadID )
    {
      this->Submit(this);
    }
    return 1;
  }
  return result;
}

Scaleform::Render::VertexFormat *__fastcall Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::Find(
        Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8> *this,
        Scaleform::Render::VertexElement *keys,
        unsigned int count)
{
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page *pPages; // r14
  unsigned int v4; // esi
  unsigned int v5; // ebx
  Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem *Items; // r10
  __int64 v7; // rax
  Scaleform::Render::VertexElement *pKey; // r11

  pPages = this->ValueBuffer.pPages;
  if ( !pPages )
    return 0i64;
  while ( 1 )
  {
    v4 = pPages->Count;
    v5 = 0;
    if ( v4 )
      break;
LABEL_12:
    pPages = pPages->pNext;
    if ( !pPages )
      return 0i64;
  }
  Items = pPages->Items;
  while ( 1 )
  {
    if ( Items->KeyCount == count )
    {
      v7 = 0i64;
      if ( count )
      {
        pKey = Items->pKey;
        do
        {
          if ( pKey[v7].Offset != keys[v7].Offset )
            break;
          if ( pKey[v7].Attribute != keys[v7].Attribute )
            break;
          v7 = (unsigned int)(v7 + 1);
        }
        while ( (unsigned int)v7 < count );
      }
      if ( (_DWORD)v7 == count )
        return &Items->Value;
    }
    ++v5;
    ++Items;
    if ( v5 >= v4 )
      goto LABEL_12;
  }
}

void __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::GenerateBlurFilterParameters(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        const Scaleform::Render::BlurFilterParams *params,
        Scaleform::Render::GL::ShaderDesc::ShaderType type,
        unsigned int pass,
        float *fsize,
        const Scaleform::Render::Matrix2x4<float> *viewMatrix,
        float *texscale,
        unsigned int passCount)
{
  float v11; // xmm7_4
  float Strength; // xmm9_4
  float v13; // xmm8_4
  float v14; // xmm1_4
  float *v15; // rbx
  float v16; // xmm1_4
  float v17; // xmm8_4
  float v18; // xmm1_4
  float v19; // xmm6_4
  float v20; // xmm8_4
  float v21; // xmm1_4
  float v22; // xmm0_4
  float v23; // xmm1_4

  v11 = (float)(params->Passes != 0);
  Strength = *(float *)&FLOAT_1_0;
  v13 = fmaxf(1.0, floorf((float)(v11 * params->BlurX) * 0.050000001));
  v14 = fmaxf(1.0, floorf((float)(v11 * params->BlurY) * 0.050000001));
  if ( (unsigned int)(type - 0x200000) <= 1 )
  {
    v15 = fsize;
    if ( (pass & 1) != 0 )
    {
      v21 = (float)((float)(v14 - 1.0) * 0.5) * viewMatrix->M[1][1];
      fsize[1] = 0.0;
      *fsize = v21;
      fsize[3] = 1.0 / floorf((float)(v21 + v21) + 1.0);
      *texscale = 0.0;
    }
    else
    {
      v20 = (float)((float)(v13 - 1.0) * 0.5) * viewMatrix->M[0][0];
      fsize[1] = 0.0;
      *fsize = v20;
      fsize[3] = 1.0 / floorf((float)(v20 + v20) + 1.0);
      texscale[1] = 0.0;
    }
  }
  else if ( pass == passCount - 1 && pass )
  {
    v15 = fsize;
    *fsize = 0.0;
    v16 = (float)((float)(v14 - 1.0) * 0.5) * viewMatrix->M[1][1];
    fsize[1] = v16;
    fsize[3] = 1.0 / floorf((float)(v16 + v16) + 1.0);
  }
  else
  {
    v15 = fsize;
    v17 = (float)((float)(v13 - 1.0) * 0.5) * viewMatrix->M[0][0];
    *fsize = v17;
    v18 = (float)((float)(v14 - 1.0) * 0.5) * viewMatrix->M[1][1];
    fsize[1] = v18;
    v19 = floorf((float)(v18 + v18) + 1.0);
    fsize[3] = 1.0 / (float)(v19 * floorf((float)(v17 + v17) + 1.0));
  }
  if ( pass == passCount - 1 )
    Strength = params->Strength;
  v22 = fmaxf(1.0e-12, *v15);
  v23 = fmaxf(1.0e-12, v15[1]);
  v15[2] = Strength;
  *v15 = v22;
  v15[1] = v23;
}

__int64 __fastcall Scaleform::Render::GL::HAL::GetCaps(Scaleform::Render::GL::HAL *this)
{
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rcx
  char v2; // cl
  __int64 result; // rax

  pDevice = this->pDevice;
  if ( pDevice )
    return Scaleform::Render::GL::GraphicsDevice::GetCaps(pDevice);
  v2 = warned_7;
  if ( !warned_7 )
    v2 = 1;
  result = 0i64;
  warned_7 = v2;
  return result;
}

Scaleform::Render::Cxform *__fastcall Scaleform::Render::MatrixPoolImpl::HMatrix::GetCxform(
        Scaleform::Render::MatrixPoolImpl::HMatrix *this)
{
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rcx

  pHeader = this->pHandle->pHeader;
  if ( (pHeader->Format & 1) != 0 )
    return (Scaleform::Render::Cxform *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[0]
                                               + 1];
  else
    return &Scaleform::Render::Cxform::Identity;
}

Scaleform::Render::GL::RenderEvents *__fastcall Scaleform::Render::GL::HAL::GetEvents(Scaleform::Render::GL::HAL *this)
{
  return &this->Events;
}

Scaleform::Render::GL::GraphicsDevice *__fastcall Scaleform::Render::GL::HAL::GetGraphicsDevice(
        Scaleform::Render::GL::HAL *this)
{
  return this->pDevice;
}

__int64 __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::GetMaximumBatchCount(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::Primitive *prim)
{
  __int64 result; // rax
  char v4; // dl
  Scaleform::Render::PrimitiveFill *pObject; // r8
  unsigned int v6; // ebx
  Scaleform::Render::PrimitiveFillType Type; // ecx
  __int32 v8; // eax
  bool v9; // cf
  int v10; // ecx

  if ( prim )
  {
    pObject = prim->pFill.pObject;
    v6 = (prim->Meshes.Data.Data->M.pHandle->pHeader->Format & 0x10 | 0x20u) >> 3;
    if ( pObject )
    {
      Type = pObject->Data.Type;
      if ( (unsigned int)(Type - 5) > 5 )
      {
        v10 = 0;
      }
      else
      {
        v8 = Type - 9;
        v9 = Type == PrimFill_2Texture;
        v10 = 4;
        if ( !v9 && v8 != 1 )
          v10 = 2;
      }
      v6 += v10;
    }
    result = this->SManager.GetNumberOfUniforms(&this->SManager) / v6;
    if ( (unsigned int)result > 0x18 )
      return 24i64;
  }
  else
  {
    result = 1i64;
    v4 = `Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::GetMaximumBatchCount'::`6'::warned;
    if ( !`Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::GetMaximumBatchCount'::`6'::warned )
      v4 = 1;
    `Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::GetMaximumBatchCount'::`6'::warned = v4;
  }
  return result;
}

Scaleform::Render::GL::MeshCache *__fastcall Scaleform::Render::GL::HAL::GetMeshCache(Scaleform::Render::GL::HAL *this)
{
  return &this->Cache;
}

__int64 __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::GetNumberOfUniforms(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this)
{
  return 256i64;
}

__int64 __fastcall Scaleform::Render::Texture::GetPlaneCount(Scaleform::Render::Texture *this)
{
  int MipLevels; // ebx
  Scaleform::Render::ImageFormat v2; // eax

  MipLevels = 1;
  if ( (this->Use & 2) == 0 )
    MipLevels = this->MipLevels;
  v2 = this->GetFormat(this);
  return MipLevels * (unsigned int)Scaleform::Render::ImageData::GetFormatPlaneCount(v2);
}

Scaleform::Render::GL::RenderSync *__fastcall Scaleform::Render::GL::HAL::GetRenderSync(
        Scaleform::Render::GL::HAL *this)
{
  if ( this->Cache.GetBufferUpdateType(&this->Cache) )
    return 0i64;
  else
    return &this->RSync;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

Scaleform::Render::GL::ShaderObject *__fastcall Scaleform::Render::GL::HAL::GetStaticShader(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::GL::ShaderDesc::ShaderType shaderType)
{
  unsigned int ShaderComboIndex; // eax
  __int64 v4; // rsi
  bool separable; // al

  ShaderComboIndex = Scaleform::Render::GL::FragShaderDesc::GetShaderComboIndex(shaderType, this->SManager.GLSLVersion);
  v4 = ShaderComboIndex;
  if ( ShaderComboIndex >= 0x369 )
    return 0i64;
  if ( (this->ConfigFlags & 0x4000000) != 0
    && !Scaleform::Render::GL::ShaderObject::IsInitialized(&this->SManager.StaticShaders[ShaderComboIndex]) )
  {
    separable = Scaleform::Render::GL::ShaderManager::UsingSeparateShaderObject(&this->SManager);
    if ( !Scaleform::Render::GL::ShaderObject::Init(
            &this->SManager.StaticShaders[v4],
            this,
            this->SManager.GLSLVersion,
            v4,
            separable,
            &this->SManager.CompiledShaderHash,
            0,
            1) )
      return 0i64;
    Scaleform::Render::GL::ShaderManager::addShaderToValidationQueue(&this->SManager, v4);
  }
  return &this->SManager.StaticShaders[v4];
}

Concurrency::details::ScheduleGroupSegmentBase *__fastcall Scaleform::SwitchFormatter::GetSize(
        Concurrency::details::ContextBase *this)
{
  return this->m_pSegment;
}

Scaleform::Render::GL::TextureManager *__fastcall Scaleform::Render::GL::HAL::GetTextureManager(
        Scaleform::Render::GL::HAL *this)
{
  return this->pTextureManager.pObject;
}

__int64 __fastcall Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::GetUniformSize(
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair> *this,
        const Scaleform::Render::GL::ShaderPair *sd,
        unsigned int i)
{
  const Scaleform::Render::GL::VertexShaderDesc *pVDesc; // r9
  __int64 v4; // rcx
  __int64 v5; // r10
  const Scaleform::Render::GL::BatchVar *v6; // r8
  __int64 v8; // rcx
  const Scaleform::Render::GL::UniformVar *Uniforms; // rax
  const Scaleform::Render::GL::FragShaderDesc *pFDesc; // rdx
  const Scaleform::Render::GL::BatchVar *v11; // r8

  pVDesc = sd->pVDesc;
  v4 = i;
  v5 = i;
  v6 = &pVDesc->BatchUniforms[v5];
  if ( v6->Array <= 25 )
    return pVDesc->Uniforms[v6->Array].ElementSize * (unsigned int)v6->Size;
  v8 = v4;
  Uniforms = pVDesc->Uniforms;
  if ( Uniforms[v8].Location >= 0 )
    return (unsigned int)Uniforms[v8].Size;
  pFDesc = sd->pFDesc;
  v11 = &pFDesc->BatchUniforms[v5];
  if ( v11->Array <= 25 )
    return pFDesc->Uniforms[v11->Array].ElementSize * (unsigned int)v11->Size;
  Uniforms = pFDesc->Uniforms;
  if ( Uniforms[v8].Location >= 0 )
    return (unsigned int)Uniforms[v8].Size;
  return 0i64;
}

float __fastcall Scaleform::GFx::SpriteDef::GetWidth(Scaleform::Render::GL::HAL *this)
{
  return *(float *)&FLOAT_1_0;
}

bool __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::InitHAL(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        const Scaleform::Render::HALInitParams *params)
{
  this->MapVertexFormat(
    this,
    PrimFill_Texture,
    &Scaleform::Render::VertexXY16iAlpha::Format,
    (const Scaleform::Render::VertexFormat **)this->MappedXY16iAlphaTexture,
    (const Scaleform::Render::VertexFormat **)&this->MappedXY16iAlphaTexture[1],
    (const Scaleform::Render::VertexFormat **)&this->MappedXY16iAlphaTexture[2],
    0);
  this->MapVertexFormat(
    this,
    PrimFill_SolidColor,
    &Scaleform::Render::VertexXY16iAlpha::Format,
    (const Scaleform::Render::VertexFormat **)this->MappedXY16iAlphaSolid,
    (const Scaleform::Render::VertexFormat **)&this->MappedXY16iAlphaSolid[1],
    (const Scaleform::Render::VertexFormat **)&this->MappedXY16iAlphaSolid[2],
    0);
  return Scaleform::Render::HAL::InitHAL(this, params);
}

char __fastcall Scaleform::Render::GL::HAL::InitHAL(
        Scaleform::Render::GL::HAL *this,
        const Scaleform::Render::HALInitParams *paramsIn)
{
  Scaleform::Render::GL::GraphicsDeviceImmediate *p_ImmediateDevice; // r15
  Scaleform::Render::GL::GraphicsDevice *v5; // rax
  Scaleform::Render::GL::GraphicsDevice *v6; // rax
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rcx
  Scaleform::Render::GL::GraphicsDeviceRecorder *v8; // r14
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  unsigned int i; // ebx
  Scaleform::Render::GL::GraphicsDevice *v11; // rax
  const char *v12; // rax
  void *v13; // rbx
  Scaleform::Render::GL::TextureManager *pObject; // rbx
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::Render::GL::TextureManager *v16; // rax
  Scaleform::Render::GL::TextureManager *v17; // rax
  Scaleform::Render::GL::TextureManager *v18; // rbx
  Scaleform::RefCountVImpl *v19; // rcx
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::RefCountVImpl *v21; // rcx
  Scaleform::Render::RenderBufferManager *v22; // rax
  Scaleform::Render::RBGenericImpl::RenderBufferManager *v23; // rax
  Scaleform::Render::RenderBufferManager *v24; // rax
  Scaleform::Render::RenderBufferManager *v25; // rbx
  Scaleform::RefCountVImpl *v26; // rcx
  Scaleform::Render::GL::GraphicsDevice *v28; // rax
  _BOOL8 v29; // r8
  Scaleform::RefCountVImpl *v30; // rbx
  Scaleform::Render::GL::HALGLFramebuffer *v31; // rax
  Scaleform::RefCountVImpl *v32; // rax
  Scaleform::Render::GL::GraphicsDevice *v33; // rax
  Scaleform::Render::GL::HAL_vtbl *v34; // rax
  __int64 v35; // rax
  Scaleform::Render::MatrixStateFactory *v36; // rax
  Scaleform::Render::MatrixStateFactory *v37; // rsi
  char v38; // di
  Scaleform::Render::GL::GraphicsDeviceRecorder *v39; // rax
  Scaleform::Render::GL::GraphicsDeviceRecorder *v40; // rax
  Scaleform::RefCountVImpl *v41; // rcx
  unsigned int v42; // [rsp+60h] [rbp+8h] BYREF
  int v43; // [rsp+64h] [rbp+Ch]
  unsigned int name; // [rsp+68h] [rbp+10h] BYREF
  char v45; // [rsp+70h] [rbp+18h] BYREF
  Scaleform::String v46; // [rsp+78h] [rbp+20h] BYREF

  p_ImmediateDevice = &this->ImmediateDevice;
  this->ImmediateDevice.Initialize(&this->ImmediateDevice, paramsIn->ConfigFlags);
  this->pDevice = p_ImmediateDevice;
  if ( (Scaleform::Render::GL::GraphicsDevice::GetCaps(p_ImmediateDevice) & 0x400) != 0 )
    this->GetProfiler(this);
  Scaleform::String::operator=(&this->SManager.BinaryShaderPath, (const Scaleform::String *)&paramsIn[1]);
  v5 = this->GetGraphicsDevice(this);
  v5->glGetIntegerv(v5, 34921u, &this->MaxVertexAttributes);
  v6 = this->GetGraphicsDevice(this);
  v6->glGetIntegerv(v6, 3379u, (int *)&v45);
  pDevice = this->pDevice;
  v8 = 0i64;
  if ( pDevice )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *, __int64))pDevice->CheckGLVersion)(
           pDevice,
           3i64) )
    {
      Scaleform::String::String(&v46);
      v9 = this->GetGraphicsDevice(this);
      v9->glGetIntegerv(v9, 33309u, (int *)&v42);
      for ( i = 0; i < v42; ++i )
      {
        v11 = this->GetGraphicsDevice(this);
        v12 = (const char *)v11->glGetStringi(v11, 7939u, i);
        Scaleform::String::AppendString(&v46, v12, -1i64);
        Scaleform::String::AppendString(&v46, " ", -1i64);
        if ( (unsigned __int64)Scaleform::String::GetLength(&v46) > 0x400 )
          Scaleform::String::operator=(&v46, &pnewText);
      }
      v13 = (void *)(v46.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                           (volatile int *)((v46.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                           -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v13);
    }
  }
  else if ( !warned_5 )
  {
    warned_5 = 1;
  }
  this->RSync.SetContext(&this->RSync, this);
  pObject = (Scaleform::Render::GL::TextureManager *)paramsIn->pTextureManager.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)paramsIn->pTextureManager.pObject);
  v15 = (Scaleform::RefCountVImpl *)this->pTextureManager.pObject;
  if ( v15 )
    Scaleform::RefCountImpl::Release(v15);
  this->pTextureManager.pObject = pObject;
  if ( !pObject )
  {
    v42 = 72;
    v16 = (Scaleform::Render::GL::TextureManager *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     this,
                                                     472i64,
                                                     &v42);
    if ( v16 )
    {
      Scaleform::Render::GL::TextureManager::TextureManager(v16, paramsIn->RenderThreadId, this->pRTCommandQueue, 0i64);
      v18 = v17;
    }
    else
    {
      v18 = 0i64;
    }
    v19 = (Scaleform::RefCountVImpl *)this->pTextureManager.pObject;
    if ( v19 )
      Scaleform::RefCountImpl::Release(v19);
    this->pTextureManager.pObject = v18;
  }
  Scaleform::Render::GL::TextureManager::Initialize(this->pTextureManager.pObject, this);
  v20 = (Scaleform::RefCountVImpl *)paramsIn->pRenderBufferManager.pObject;
  if ( v20 )
    Scaleform::Render::RenderBuffer::AddRef(v20);
  v21 = (Scaleform::RefCountVImpl *)this->pRenderBufferManager.pObject;
  if ( v21 )
    Scaleform::RefCountImpl::Release(v21);
  v22 = paramsIn->pRenderBufferManager.pObject;
  this->pRenderBufferManager.pObject = v22;
  if ( !v22 )
  {
    v42 = 72;
    v23 = (Scaleform::Render::RBGenericImpl::RenderBufferManager *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                     Scaleform::Memory::pGlobalHeap,
                                                                     this,
                                                                     176i64,
                                                                     &v42);
    if ( v23 )
    {
      Scaleform::Render::RBGenericImpl::RenderBufferManager::RenderBufferManager(v23, DSSM_Exact, 0x3000000ui64, 0i64);
      v25 = v24;
    }
    else
    {
      v25 = 0i64;
    }
    v26 = (Scaleform::RefCountVImpl *)this->pRenderBufferManager.pObject;
    if ( v26 )
      Scaleform::RefCountImpl::Release(v26);
    this->pRenderBufferManager.pObject = v25;
    if ( !v25 || !v25->Initialize(v25, this->pTextureManager.pObject) )
    {
      this->ShutdownHAL(this);
      return 0;
    }
  }
  if ( !Scaleform::Render::GL::ShaderManager::Initialize(&this->SManager, this, paramsIn->ConfigFlags)
    || !Scaleform::Render::GL::MeshCache::Initialize(&this->Cache, this) )
  {
    return 0;
  }
  v28 = this->GetGraphicsDevice(this);
  v28->glGetIntegerv(v28, 36006u, (int *)&name);
  v30 = 0i64;
  if ( name )
  {
    v31 = (Scaleform::Render::GL::HALGLFramebuffer *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       32i64);
    if ( v31 )
    {
      Scaleform::Render::GL::HALGLFramebuffer::HALGLFramebuffer(v31, name, 0x8D40u, p_ImmediateDevice);
      v30 = v32;
    }
    v33 = this->GetGraphicsDevice(this);
    v33->glBindFramebuffer(v33, 36160u, (Scaleform::Render::GL::HALGLFramebuffer *)v30);
  }
  if ( (paramsIn->ConfigFlags & 0x80000000) != 0 )
  {
    v34 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    LOBYTE(v29) = 1;
    v42 = 64;
    v43 = 64;
    v35 = (__int64)v34->CreateTempRenderTarget(this, (const Scaleform::Render::Size<unsigned long> *)&v42, v29);
    if ( v35 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16i64))(v35);
  }
  v36 = (Scaleform::Render::MatrixStateFactory *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))this->pHeap->Alloc)(
                                                   this->pHeap,
                                                   24i64);
  v37 = v36;
  if ( v36 )
  {
    Scaleform::Render::MatrixStateFactory::MatrixStateFactory(v36, this->pHeap);
    v37[1].__vftable = (Scaleform::Render::MatrixStateFactory_vtbl *)this;
    v37->__vftable = (Scaleform::Render::MatrixStateFactory_vtbl *)&Scaleform::Render::GL::MatrixStateFactory::`vftable';
  }
  else
  {
    v37 = 0i64;
  }
  this->pMatrixFactory = v37;
  if ( Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::InitHAL(
         this,
         paramsIn) )
  {
    if ( (paramsIn->ConfigFlags & 0x80000000) == 0 )
    {
      this->pDevice = p_ImmediateDevice;
    }
    else
    {
      v39 = (Scaleform::Render::GL::GraphicsDeviceRecorder *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                               Scaleform::Memory::pGlobalHeap,
                                                               904i64,
                                                               0i64);
      if ( v39 )
      {
        Scaleform::Render::GL::GraphicsDeviceRecorder::GraphicsDeviceRecorder(v39, p_ImmediateDevice);
        v8 = v40;
      }
      v41 = (Scaleform::RefCountVImpl *)this->pRecordingDevice.pObject;
      if ( v41 )
        Scaleform::RefCountImpl::Release(v41);
      this->pRecordingDevice.pObject = v8;
      this->pDevice = v8;
    }
    v38 = 1;
  }
  else
  {
    v38 = 0;
  }
  if ( v30 )
    Scaleform::RefCountImpl::Release(v30);
  return v38;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

void __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::MapVertexFormat(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        __int64 fill,
        const Scaleform::Render::VertexFormat *sourceFormat,
        const Scaleform::Render::VertexFormat **single,
        const Scaleform::Render::VertexFormat **batch,
        const Scaleform::Render::VertexFormat **instanced,
        unsigned int flags)
{
  Scaleform::Render::ProfileViews *Profiler; // rcx
  int v11; // eax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *pTable; // r10
  __int64 v13; // rdx
  __int64 v14; // r8
  __int64 v15; // rcx
  __int64 v16; // rcx
  __int64 v17; // r9
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __m128i v21; // xmm2
  const Scaleform::Render::VertexFormat *v22; // xmm1_8
  int v23; // er15
  Scaleform::Render::GL::ShaderDesc::ShaderType v24; // ebx
  Scaleform::Render::GL::ShaderDesc::ShaderVersion v25; // eax
  const Scaleform::Render::GL::VertexShaderDesc *Desc; // rax
  const Scaleform::Render::GL::VertexShaderDesc *v27; // r13
  int v28; // er8
  unsigned int v29; // ebx
  int v30; // er12
  int v31; // er10
  __int64 v32; // rdx
  unsigned int *p_Attr; // r9
  unsigned int v34; // eax
  int v35; // eax
  Scaleform::Render::VertexElement *pElements; // rcx
  unsigned int Attribute; // eax
  const Scaleform::Render::VertexFormat **v38; // rcx
  unsigned int v39; // er8
  int v40; // eax
  unsigned int v41; // er8
  unsigned int v42; // ecx
  const Scaleform::Render::SourceFormatHash *pFirst; // rsi
  $8382DC5CC677AD350D79D297AC46FF33 *v44; // r13
  Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8> *p_SourceFormat; // rsi
  Scaleform::Render::VertexElement *v46; // r14
  signed int v47; // er15
  Scaleform::Render::VertexFormat *v48; // rdx
  char v49; // dl
  Scaleform::Render::VertexFormat *v50; // rdx
  unsigned int v51; // er8
  __int64 v52; // rdx
  __int64 v53; // rcx
  unsigned int v54; // eax
  Scaleform::Render::VertexFormat *v55; // rdx
  const Scaleform::Render::VertexFormat **v56; // rcx
  unsigned int v57; // [rsp+20h] [rbp-C1h]
  int v58; // [rsp+20h] [rbp-C1h]
  Scaleform::Render::VertexElement *ppnewKeys; // [rsp+28h] [rbp-B9h] BYREF
  int v60; // [rsp+30h] [rbp-B1h]
  int v61; // [rsp+34h] [rbp-ADh]
  int v62; // [rsp+38h] [rbp-A9h]
  const Scaleform::Render::VertexFormat **v63; // [rsp+40h] [rbp-A1h]
  const Scaleform::Render::VertexFormat **v64; // [rsp+48h] [rbp-99h]
  const Scaleform::Render::VertexFormat **v65; // [rsp+50h] [rbp-91h]
  Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeRef key; // [rsp+58h] [rbp-89h] BYREF
  int v67[2]; // [rsp+68h] [rbp-79h] BYREF
  const Scaleform::Render::VertexFormat *v68; // [rsp+70h] [rbp-71h]
  __m128i v69; // [rsp+78h] [rbp-69h] BYREF
  const Scaleform::Render::VertexFormat *v70; // [rsp+88h] [rbp-59h]
  void *pmemAddr; // [rsp+90h] [rbp-51h]
  Scaleform::Render::VertexElement keys; // [rsp+A0h] [rbp-41h] BYREF
  __int64 v73[7]; // [rsp+A8h] [rbp-39h]

  key.pFirst = (const Scaleform::Render::SourceFormatHash *)this;
  Profiler = this->Profiler;
  v64 = single;
  v65 = batch;
  v63 = instanced;
  v11 = Profiler->GetFillType(Profiler, (Scaleform::Render::PrimitiveFillType)fill);
  pTable = this->VertexFormatComputedHash.mHash.pTable;
  v67[0] = v11;
  v67[1] = flags;
  v68 = sourceFormat;
  pmemAddr = &this->VertexFormatComputedHash;
  if ( pTable )
  {
    v13 = 16i64;
    v14 = 5381i64;
    do
    {
      v15 = *((unsigned __int8 *)&key.pSecond + v13-- + 7);
      v16 = 65599 * v14 + v15;
      v14 = v16;
    }
    while ( v13 );
    v17 = v16 & pTable->SizeMask;
    v18 = v17;
    v19 = (__int64)&pTable[1] + 56 * v17;
    if ( *(_QWORD *)v19 != -2i64 && *(_QWORD *)(v19 + 8) == v17 )
    {
      while ( *(_QWORD *)(v19 + 8) != v17
           || v11 != *(_DWORD *)(v19 + 16)
           || sourceFormat != *(const Scaleform::Render::VertexFormat **)(v19 + 24)
           || flags != *(_DWORD *)(v19 + 20) )
      {
        v18 = *(_QWORD *)v19;
        if ( *(_QWORD *)v19 == -1i64 )
          goto LABEL_15;
        v19 = (__int64)&pTable[1] + 56 * v18;
      }
      if ( v18 >= 0 )
      {
        v20 = (__int64)&pTable[2] + 56 * v18;
        if ( v20 )
        {
          v21 = *(__m128i *)(v20 + 16);
          v69 = v21;
          v22 = *(const Scaleform::Render::VertexFormat **)(v20 + 32);
          *single = (const Scaleform::Render::VertexFormat *)v21.m128i_i64[0];
          v70 = v22;
          *batch = (const Scaleform::Render::VertexFormat *)_mm_srli_si128(v21, 8).m128i_u64[0];
          *instanced = v22;
          return;
        }
      }
    }
  }
LABEL_15:
  v23 = 1;
  switch ( v11 )
  {
    case 3:
      v24 = ST_Vertex;
      break;
    case 4:
      v24 = ST_VertexEAlpha;
      break;
    case 5:
      v24 = ST_base_Mul;
      break;
    case 6:
      v24 = ST_TexTGEAlpha;
      break;
    case 7:
      v24 = ST_TexTGVertex;
      break;
    case 8:
      v24 = ST_TexTGVertexEAlpha;
      break;
    case 9:
      v24 = ST_TexTGTexTG;
      break;
    case 10:
      v24 = ST_TexTGTexTGEAlpha;
      break;
    case 11:
      v24 = ST_TexUV;
      break;
    case 12:
      v24 = ST_Text;
      break;
    default:
      v24 = ST_start_base_text;
      break;
  }
  v25 = this->GetShaderVersion(this);
  Desc = Scaleform::Render::GL::VertexShaderDesc::GetDesc(v24, v25);
  v27 = Desc;
  if ( !Desc )
  {
    *v63 = 0i64;
    *v64 = 0i64;
    *batch = 0i64;
    return;
  }
  v60 = 0;
  v28 = 4;
  v29 = 0;
  v30 = 0;
  v57 = 4;
  v31 = 0;
  v61 = -1;
  v62 = -1;
  if ( Desc->NumAttribs <= 0 )
    goto LABEL_52;
  v32 = 0i64;
  p_Attr = &Desc->Attributes[0].Attr;
  do
  {
    if ( (*p_Attr & 0xFF0F) == 4612 )
    {
      *(&keys.Offset + 2 * v32) = v29;
      v34 = v29 + 3;
      if ( (flags & 0x20) != 0 )
      {
        *(&keys.Attribute + 2 * v32++) = 4625;
        *(&keys.Offset + 2 * v32) = v34;
        v35 = 1;
        *(&keys.Attribute + 2 * v32) = 8721;
      }
      else
      {
        *(&keys.Attribute + 2 * v32++) = 8721;
        *(&keys.Offset + 2 * v32) = v34;
        v35 = 2;
        *(&keys.Attribute + 2 * v32) = 4625;
      }
      v28 = v57;
      v62 = v30 + 1;
      v61 = v29 + v35;
      v29 += 4;
      ++v30;
      goto LABEL_50;
    }
    pElements = sourceFormat->pElements;
    Attribute = pElements->Attribute;
    if ( !Attribute )
    {
LABEL_39:
      v38 = v65;
      *v63 = 0i64;
      *v64 = 0i64;
      *v38 = 0i64;
      return;
    }
    while ( (Attribute & 0xFF00) != (*p_Attr & 0xFF00) )
    {
      Attribute = pElements[1].Attribute;
      ++pElements;
      if ( !Attribute )
        goto LABEL_39;
    }
    *(&keys + v32) = *pElements;
    *(&keys.Offset + 2 * v32) = v29;
    v39 = pElements->Attribute;
    v40 = v39 & 0xFFF;
    if ( (flags & 4) != 0 )
    {
      if ( v40 == 532 )
      {
        v41 = v39 & 0xFFFFF000 | 0x251;
LABEL_45:
        *(&keys.Attribute + 2 * v32) = v41;
      }
    }
    else if ( v40 == 593 )
    {
      v41 = v39 & 0xFFFFF000 | 0x214;
      goto LABEL_45;
    }
    v42 = Scaleform::Render::VertexTypeSizes_0[((pElements->Attribute >> 4) & 0xF) - 1];
    if ( v42 < v57 )
      v42 = v57;
    v28 = v42;
    v57 = v42;
    v29 += (*(&keys.Attribute + 2 * v32) & 0xF)
         * Scaleform::Render::VertexTypeSizes_0[((*(&keys.Attribute + 2 * v32) >> 4) & 0xF) - 1];
    if ( (flags & 2) != 0 )
      v29 = (v29 + 3) & 0xFFFFFFFC;
LABEL_50:
    ++v30;
    ++v31;
    p_Attr += 4;
    ++v32;
  }
  while ( v31 < v27->NumAttribs );
  v60 = v30;
LABEL_52:
  pFirst = key.pFirst;
  if ( (flags & 1) != 0 )
    v23 = v28;
  *(&keys.Attribute + 2 * v30) = 0;
  v44 = &keys.4 + 2 * v30;
  v58 = v23;
  p_SourceFormat = (Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8> *)&pFirst->SourceFormat;
  v46 = &keys + v30;
  v46->Offset = 0;
  v47 = v30 + 1;
  ppnewKeys = &keys;
  v48 = Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::Find(
          p_SourceFormat,
          &keys,
          v30 + 1);
  if ( !v48 )
  {
    v48 = Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::Add(
            p_SourceFormat,
            &ppnewKeys,
            &keys,
            v47);
    if ( v48 )
    {
      v48->pElements = ppnewKeys;
      v48->Size = ~(v58 - 1) & (v29 + v58 - 1);
    }
    else
    {
      v48 = 0i64;
    }
  }
  *v64 = v48;
  v49 = flags;
  if ( (flags & 8) != 0 )
  {
    v44->Attribute = 66673;
    v46->Offset = 0;
    *((_QWORD *)&keys + v47) = 0i64;
    ppnewKeys = &keys;
    v50 = Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::Find(
            p_SourceFormat,
            &keys,
            v30 + 2);
    if ( !v50 )
    {
      v50 = Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::Add(
              p_SourceFormat,
              &ppnewKeys,
              &keys,
              v30 + 2);
      if ( !v50 )
      {
        v30 = v60;
        *v63 = 0i64;
        v49 = flags;
        goto LABEL_65;
      }
      v50->pElements = ppnewKeys;
      v50->Size = ~(v58 - 1) & (v29 + v58 - 1);
    }
    v30 = v60;
    *v63 = v50;
    v49 = flags;
  }
  else
  {
    *v63 = 0i64;
  }
LABEL_65:
  if ( (v49 & 0x10) != 0 )
  {
    v56 = v65;
    *v65 = 0i64;
  }
  else
  {
    v51 = v61;
    if ( v61 < 0 )
    {
      v44->Attribute = 66593;
      v54 = v29;
      if ( (v49 & 0x20) != 0 )
        v54 = v29 + 3;
      v46->Offset = v54;
      v29 += (v46->Attribute & 0xF) * Scaleform::Render::VertexTypeSizes_0[((v46->Attribute >> 4) & 0xF) - 1];
      if ( (v49 & 2) != 0 )
        v29 = (v29 + 3) & 0xFFFFFFFC;
    }
    else
    {
      v52 = v62;
      v53 = v30 - 1;
      if ( v53 >= v62 )
      {
        do
        {
          v73[v53] = *((_QWORD *)&keys + v53);
          --v53;
        }
        while ( v53 >= v52 );
      }
      *(&keys.Attribute + 2 * v52) = 66593;
      *(&keys.Offset + 2 * v52) = v51;
    }
    *((_QWORD *)&keys + v47) = 0i64;
    ppnewKeys = &keys;
    v55 = Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::Find(
            p_SourceFormat,
            &keys,
            v30 + 2);
    if ( !v55 )
    {
      v55 = Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::Add(
              p_SourceFormat,
              &ppnewKeys,
              &keys,
              v30 + 2);
      if ( !v55 )
      {
        v56 = v65;
        *v65 = 0i64;
        goto LABEL_80;
      }
      v55->pElements = ppnewKeys;
      v55->Size = ~(v58 - 1) & (v29 + v58 - 1);
    }
    v56 = v65;
    *v65 = v55;
  }
LABEL_80:
  v69.m128i_i64[0] = (__int64)*v64;
  v69.m128i_i64[1] = (__int64)*v56;
  v70 = *v63;
  key.pFirst = (const Scaleform::Render::SourceFormatHash *)v67;
  key.pSecond = (const Scaleform::Render::ResultFormat *)&v69;
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeRef>(
    (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > *)pmemAddr,
    pmemAddr,
    &key);
}

void __fastcall Scaleform::Render::GL::HAL::MapVertexFormat(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::PrimitiveFillType fill,
        const Scaleform::Render::VertexFormat *sourceFormat,
        const Scaleform::Render::VertexFormat **single,
        const Scaleform::Render::VertexFormat **batch,
        const Scaleform::Render::VertexFormat **instanced)
{
  unsigned int Caps; // eax
  char v11; // di

  Caps = Scaleform::Render::GL::GraphicsDevice::GetCaps(this->pDevice);
  v11 = Caps;
  Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::MapVertexFormat(
    &this->SManager,
    (unsigned int)fill,
    sourceFormat,
    single,
    batch,
    instanced,
    Caps & 3 | (Caps >> 8) & 8);
  if ( (v11 & 0x10) != 0 )
    *batch = 0i64;
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::PopBlendMode(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this)
{
  __int64 v2; // r14
  Scaleform::Render::HAL::BlendModeStackEntry *Data; // rdi
  unsigned __int64 Size; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::RenderTarget *v6; // rcx
  Scaleform::Render::RenderTarget *v7; // rcx
  bool NoLayerParent; // al
  unsigned __int64 v9; // rdi
  Scaleform::Render::HAL::BlendModeStackEntry *v10; // rax
  __int64 v11; // rbx
  Scaleform::Render::BlendMode LastBlendModeOrDefault; // er14
  unsigned int v13; // er15
  Scaleform::Render::BlendMode RefCount; // er13
  _BOOL8 v15; // rdx
  const Scaleform::Render::Size<unsigned long> *v16; // rdi
  unsigned __int64 v17; // rdi
  Scaleform::Render::HAL::RenderTargetEntry *v18; // rbx
  Scaleform::Render::RenderTarget *v19; // rcx
  __int64 v20; // rsi
  Scaleform::Render::RenderTarget *v21; // rbx
  Scaleform::Render::Cxform *Cxform; // rax
  char v23; // r14
  __int64 v24; // rdx
  unsigned __int64 v25; // r14
  Scaleform::Render::HAL::RenderTargetEntry *v26; // rbx
  Scaleform::Render::RenderTarget *v27; // rcx
  Scaleform::Render::RenderTarget *v28; // r14
  int v29; // eax
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v30; // rax
  __int64 v31; // rax
  Scaleform::Render::Size<unsigned long> v32; // rdx
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v33; // r15
  __int64 v34; // rax
  Scaleform::Render::RenderTarget *v35; // rsi
  Scaleform::Render::HAL::RenderTargetEntry *v36; // rdx
  float x1; // xmm3_4
  unsigned __int64 v38; // rax
  float v39; // xmm1_4
  __int64 MaskStackTop; // r8
  __int64 v41; // rdx
  Scaleform::Render::BlendMode v42; // ecx
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v43; // r14
  __int64 v44; // rax
  Scaleform::Render::ProfileViews *v45; // rax
  Scaleform::Render::RenderTargetData *pRenderTargetData; // r15
  Scaleform::Render::ProfileViews *v47; // rax
  Scaleform::Render::BlendMode mode; // [rsp+30h] [rbp-D0h]
  unsigned int v49; // [rsp+34h] [rbp-CCh]
  Scaleform::RefCountVImpl *v50; // [rsp+38h] [rbp-C8h]
  Scaleform::Render::RenderTarget *v51; // [rsp+40h] [rbp-C0h]
  Scaleform::Render::RenderTarget *v52; // [rsp+48h] [rbp-B8h]
  bool LayerAlphaCleared; // [rsp+50h] [rbp-B0h]
  bool v54; // [rsp+51h] [rbp-AFh]
  int v55; // [rsp+58h] [rbp-A8h] BYREF
  Scaleform::Render::RenderEvents *v56; // [rsp+60h] [rbp-A0h]
  Scaleform::Render::Texture *v57; // [rsp+68h] [rbp-98h]
  Scaleform::Render::Texture *v58; // [rsp+70h] [rbp-90h]
  Scaleform::Render::RenderTarget *v59; // [rsp+78h] [rbp-88h] BYREF
  __int64 v60; // [rsp+80h] [rbp-80h] BYREF
  int v61; // [rsp+88h] [rbp-78h]
  int v62; // [rsp+8Ch] [rbp-74h]
  Scaleform::Render::RenderTarget *results; // [rsp+98h] [rbp-68h] BYREF
  __int64 v64; // [rsp+A0h] [rbp-60h]
  __int128 v65; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v66; // [rsp+C0h] [rbp-40h]
  Scaleform::Render::Matrix2x4<float> result; // [rsp+D0h] [rbp-30h] BYREF

  if ( !Scaleform::Render::HAL::checkState(
          this,
          8u,
          "Scaleform::Render::ShaderHAL<class Scaleform::Render::GL::ShaderManager,class Scaleform::Render::GL::ShaderInt"
          "erface>::PopBlendMode") )
    return;
  v56 = this->GetEvents(this);
  v2 = (__int64)v56;
  Data = this->BlendModeStack.Data.Data;
  Size = this->BlendModeStack.Data.Size;
  pObject = (Scaleform::RefCountVImpl *)Data[Size - 1].pPrimitive.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v6 = Data[Size - 1].pRenderTarget.pObject;
  v50 = (Scaleform::RefCountVImpl *)Data[Size - 1].pPrimitive.pObject;
  if ( v6 )
    v6->AddRef(v6);
  v7 = Data[Size - 1].pLayerAlpha.pObject;
  v51 = Data[Size - 1].pRenderTarget.pObject;
  if ( v7 )
    v7->AddRef(v7);
  v52 = Data[Size - 1].pLayerAlpha.pObject;
  LayerAlphaCleared = Data[Size - 1].LayerAlphaCleared;
  NoLayerParent = Data[Size - 1].NoLayerParent;
  v9 = this->BlendModeStack.Data.Size;
  v54 = NoLayerParent;
  Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
    &this->BlendModeStack.Data,
    &this->BlendModeStack,
    v9 - 1);
  if ( v9 - 1 > v9 )
  {
    v10 = &this->BlendModeStack.Data.Data[v9];
    v11 = -1i64;
    do
    {
      if ( v10 )
      {
        v10->pPrimitive.pObject = 0i64;
        v10->pRenderTarget.pObject = 0i64;
        v10->pLayerAlpha.pObject = 0i64;
      }
      ++v10;
      --v11;
    }
    while ( v11 );
  }
  if ( (this->HALState & 0x100) != 0
    || (this->HALState & 0x300) != 0 && this->CacheableIndex < SLODWORD(this->BlendModeStack.Data.Size) )
  {
    v35 = v52;
    goto LABEL_68;
  }
  LastBlendModeOrDefault = (unsigned int)Scaleform::Render::HAL::getLastBlendModeOrDefault(this);
  v13 = this->HALState & 0x300;
  this->CacheableIndex = -1;
  mode = LastBlendModeOrDefault;
  v49 = v13;
  RefCount = v50[4].RefCount;
  if ( !Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode(RefCount) )
  {
    if ( (unsigned int)(RefCount - 11) <= 1 )
    {
      if ( v54 )
        LastBlendModeOrDefault = Blend_Normal;
      else
        this->PopRenderTarget(this, 0);
    }
    goto LABEL_108;
  }
  LOBYTE(v15) = 1;
  v16 = 0i64;
  this->applyBlendModeEnable(this, v15);
  if ( v13 )
  {
    Scaleform::Render::CacheablePrimitive::GetCacheResults((Scaleform::Render::CacheablePrimitive *)v50, &results, 2u);
    v21 = results;
    if ( results )
      results->AddRef(results);
    v20 = v64;
    if ( v64 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v64 + 8i64))(v64);
    goto LABEL_80;
  }
  v17 = this->RenderTargetStack.Data.Size;
  v18 = this->RenderTargetStack.Data.Data;
  v19 = v18[v17 - 1].pRenderTarget.pObject;
  if ( v19 )
    v19->AddRef(v19);
  v20 = (__int64)v52;
  v16 = (const Scaleform::Render::Size<unsigned long> *)v18[v17 - 1].pRenderTarget.pObject;
  if ( v52 )
    v52->AddRef(v52);
  if ( v16 )
    (*(void (__fastcall **)(const Scaleform::Render::Size<unsigned long> *))(*(_QWORD *)v16 + 8i64))(v16);
  v21 = (Scaleform::Render::RenderTarget *)v16;
  if ( v51 )
  {
    if ( RefCount != Blend_Layer )
      goto LABEL_30;
    if ( v52 )
    {
      if ( !LayerAlphaCleared )
      {
        Cxform = Scaleform::Render::MatrixPoolImpl::HMatrix::GetCxform((Scaleform::Render::MatrixPoolImpl::HMatrix *)v50[3].__vftable);
        if ( Scaleform::Render::Cxform::operator==(Cxform, &Scaleform::Render::Cxform::Identity) )
        {
          v23 = 1;
          goto LABEL_31;
        }
      }
LABEL_30:
      v23 = 0;
LABEL_31:
      v24 = 4i64;
      if ( v23 )
        v24 = 0i64;
      this->PopRenderTarget(this, v24);
      if ( !v23 )
      {
        v25 = this->RenderTargetStack.Data.Size;
        v26 = this->RenderTargetStack.Data.Data;
        v27 = v26[v25 - 1].pRenderTarget.pObject;
        if ( v27 )
          v27->AddRef(v27);
        v28 = v26[v25 - 1].pRenderTarget.pObject;
        v21 = this->CreateTempRenderTarget(this, &v16[5], 0i64);
        if ( v16 )
          (*(void (__fastcall **)(const Scaleform::Render::Size<unsigned long> *))(*(_QWORD *)v16 + 16i64))(v16);
        if ( !v21 )
        {
          Scaleform::Render::HAL::ApplyBlendMode(this, mode, 0, (this->HALState & 0x10) != 0);
          if ( v28 )
            v28->Release(v28);
          goto LABEL_61;
        }
        v29 = v21->ViewRect.y2 - v21->ViewRect.y1;
        v61 = v21->ViewRect.x2 - v21->ViewRect.x1;
        v62 = v29;
        v30 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
        v55 = 0;
        v60 = 0i64;
        ((void (__fastcall *)(Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *, Scaleform::Render::RenderTarget *, __int64, __int64 *, int *))v30->PushRenderTarget)(
          this,
          v21,
          8i64,
          &v60,
          &v55);
        if ( !`Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::PopBlendMode'::`22'::warned )
          `Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::PopBlendMode'::`22'::warned = RefCount != Blend_Layer && (!v28 || !v28->GetTexture(v28));
        if ( v28 && v28->GetTexture(v28) || v52 && v52->GetTexture(v52) )
        {
          Scaleform::Render::HAL::ApplyBlendMode(this, Blend_OverwriteAll, 0, 1);
          if ( v52 && LayerAlphaCleared )
          {
            v57 = v52->GetTexture(v52);
            v31 = 0i64;
          }
          else
          {
            v31 = 0i64;
            v57 = 0i64;
          }
          if ( RefCount != Blend_Layer )
            v31 = (__int64)v28->GetTexture(v28);
          v32 = *v16;
          v33 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
          v58 = (Scaleform::Render::Texture *)v31;
          v34 = (*(__int64 (__fastcall **)(const Scaleform::Render::Size<unsigned long> *))(*(_QWORD *)&v32 + 24i64))(v16);
          v33->drawBlendPrimitive(
            this,
            (Scaleform::Render::BlendPrimitive *)v50,
            (Scaleform::Render::Texture *)v34,
            v58,
            v57);
          v13 = v49;
        }
        this->PopRenderTarget(this, 0);
        if ( v28 )
          v28->Release(v28);
      }
LABEL_80:
      Scaleform::Render::operator*(
        &result,
        &this->Matrices.pObject->UserView,
        (const Scaleform::Render::Matrix2x4<float> *)(*(_QWORD *)v50[3].~RefCountImplCore
                                                    + 16
                                                    * (Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[*(_BYTE *)(*(_QWORD *)v50[3].~RefCountImplCore + 15i64) & 0xF].Offsets[4]
                                                     + 1i64)));
      v36 = this->RenderTargetStack.Data.Data;
      v65 = _xmm;
      v66 = _xmm;
      x1 = (float)v21->ViewRect.x1;
      *((float *)&v66 + 3) = (float)v21->ViewRect.y1 + 0.0;
      *((float *)&v65 + 3) = x1 + 0.0;
      v38 = this->RenderTargetStack.Data.Size;
      v39 = (float)(v21->ViewRect.x2 - v21->ViewRect.x1) / (float)(int)v21->BufferSize.Width;
      *((float *)&v66 + 1) = (float)(v21->ViewRect.y2 - v21->ViewRect.y1) / (float)(int)v21->BufferSize.Height;
      *(float *)&v65 = v39;
      *((float *)&v65 + 3) = (float)(x1 + 0.0) * v39;
      *((float *)&v65 + 1) = v39 * 0.0;
      *((float *)&v65 + 2) = v39 * 0.0;
      *((float *)&v66 + 3) = *((float *)&v66 + 3) * *((float *)&v66 + 1);
      *(float *)&v66 = *((float *)&v66 + 1) * 0.0;
      *((float *)&v66 + 2) = *((float *)&v66 + 1) * 0.0;
      if ( v36[v38 - 1].MaskStackTop )
      {
        MaskStackTop = v36[v38 - 1].MaskStackTop;
        if ( (this->HALState & 0x40) != 0 )
          MaskStackTop = (unsigned int)(MaskStackTop - 1);
        if ( v36[v38 - 1].StencilAvailable )
        {
          v41 = 5 - (unsigned int)((this->HALState & 0x40) != 0);
LABEL_87:
          this->applyDepthStencilMode(this, (Scaleform::Render::HAL::DepthStencilMode)v41, MaskStackTop);
          goto LABEL_88;
        }
        if ( v36[v38 - 1].DepthBufferAvailable )
        {
          v41 = 7 - (unsigned int)((this->HALState & 0x40) != 0);
          goto LABEL_87;
        }
      }
LABEL_88:
      v42 = Blend_OverwriteAll;
      if ( RefCount == Blend_Layer )
        v42 = Blend_Layer;
      Scaleform::Render::HAL::ApplyBlendMode(this, v42, 1, (this->HALState & 0x10) != 0);
      v43 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      v44 = (__int64)v21->GetTexture(v21);
      v43->DrawableCopyback(
        this,
        (Scaleform::Render::Texture *)v44,
        &result,
        (const Scaleform::Render::Matrix2x4<float> *)&v65,
        0);
      if ( v13 || (v45 = this->GetProfiler(this), !v45->IsBlendCachingEnabled(v45)) )
      {
        v47 = this->GetProfiler(this);
        if ( !v47->IsBlendCachingEnabled(v47) )
          Scaleform::Render::CacheablePrimitive::SetCacheResults(
            (Scaleform::Render::CacheablePrimitive *)v50,
            Cache_Mesh,
            0i64,
            0);
      }
      else
      {
        pRenderTargetData = v21->pRenderTargetData;
        v59 = v21;
        Scaleform::Render::CacheablePrimitive::SetCacheResults(
          (Scaleform::Render::CacheablePrimitive *)v50,
          Cache_Count,
          &v59,
          1u);
        pRenderTargetData->CacheID = (unsigned __int64)v50;
        v13 = v49;
      }
      if ( v16 )
        (*(void (__fastcall **)(const Scaleform::Render::Size<unsigned long> *, _QWORD))(*(_QWORD *)v16 + 40i64))(
          v16,
          0i64);
      if ( v20 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v20 + 40i64))(v20, 0i64);
      v21->SetInUse(v21, RTUse_Unused_Cacheable);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v20 + 16i64))(v20);
      v21->Release(v21);
      if ( v16 )
        (*(void (__fastcall **)(const Scaleform::Render::Size<unsigned long> *))(*(_QWORD *)v16 + 16i64))(v16);
      LastBlendModeOrDefault = mode;
LABEL_108:
      if ( v13 )
      {
        this->GetRQProcessor(this)->QueueEmitFilter = QPF_All;
        this->HALState &= 0xFFFFFCFF;
      }
      Scaleform::Render::HAL::ApplyBlendMode(this, LastBlendModeOrDefault, 0, (this->HALState & 0x10) != 0);
      v35 = v52;
      goto LABEL_67;
    }
  }
  Scaleform::Render::HAL::ApplyBlendMode(this, LastBlendModeOrDefault, 0, (this->HALState & 0x10) != 0);
LABEL_61:
  v35 = v52;
  if ( v52 )
    v52->Release(v52);
  if ( v21 )
    v21->Release(v21);
  if ( v16 )
    (*(void (__fastcall **)(const Scaleform::Render::Size<unsigned long> *))(*(_QWORD *)v16 + 16i64))(v16);
LABEL_67:
  v2 = (__int64)v56;
LABEL_68:
  if ( v35 )
    v35->Release(v35);
  if ( v51 )
    v51->Release(v51);
  if ( v50 )
    Scaleform::RefCountImpl::Release(v50);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v2 + 16i64))(v2, 15i64);
}

__int64 __fastcall Scaleform::Render::GL::HAL::PrepareForReset(Scaleform::Render::GL::HAL *this)
{
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rsi
  Scaleform::Render::GL::GraphicsDeviceRecorder *pObject; // rcx
  unsigned __int8 v4; // di
  Scaleform::Render::RenderBufferManager *v5; // rcx

  pDevice = this->pDevice;
  pObject = this->pRecordingDevice.pObject;
  if ( pDevice == pObject )
  {
    pObject->End(pObject);
    this->pRecordingDevice.pObject->ExecuteRecording(
      &this->pRecordingDevice.pObject->Scaleform::Render::GraphicsDeviceRecorder,
      &this->ImmediateDevice);
  }
  Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(this->pDevice);
  this->pDevice = &this->ImmediateDevice;
  this->RSync.SetContext(&this->RSync, 0i64);
  if ( Scaleform::Render::HAL::PrepareForReset(this) )
  {
    Scaleform::Render::GL::TextureManager::NotifyLostContext(this->pTextureManager.pObject);
    v5 = this->pRenderBufferManager.pObject;
    if ( v5 )
      v5->Reset(v5);
    Scaleform::Render::GL::MeshCache::Reset(&this->Cache, 1);
    Scaleform::Render::GL::ShaderManager::Reset(&this->SManager, 1);
    ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)&this->ShaderData);
    v4 = 1;
  }
  else
  {
    v4 = 0;
  }
  Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(this->pDevice);
  this->pDevice = pDevice;
  return v4;
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::PushBlendMode(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::BlendPrimitive *prim)
{
  Scaleform::Render::RenderEvents *v4; // rax
  Scaleform::Render::BlendMode BlendModeValue; // er14
  Scaleform::ArrayLH<Scaleform::Render::HAL::BlendModeStackEntry,2,Scaleform::ArrayConstPolicy<0,8,1> > *p_BlendModeStack; // r12
  unsigned __int64 v7; // r8
  int v8; // er13
  Scaleform::Render::HAL::BlendModeStackEntry *v9; // rbx
  Scaleform::Render::HAL::BlendModeStackEntry *Data; // r15
  unsigned __int64 Size; // rbx
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rdx
  float *v13; // r14
  Scaleform::Render::RenderTarget *v14; // rax
  Scaleform::Render::RenderTarget *pObject; // rcx
  Scaleform::Render::RenderTarget *v16; // r12
  float v17; // xmm1_4
  float v18; // xmm2_4
  float v19; // xmm3_4
  float v20; // xmm0_4
  Scaleform::Render::RenderTarget *v21; // rax
  Scaleform::Render::RenderTarget *v22; // rcx
  Scaleform::Render::RenderTarget *v23; // r14
  int v24; // edx
  __int64 v25; // r8
  __int64 v26; // rcx
  __int64 v27; // rbx
  __int64 v28; // rdx
  float *v29; // rax
  __int64 v30; // rdx
  float v31; // xmm2_4
  float v32; // xmm3_4
  float v33; // xmm0_4
  int v34[2]; // [rsp+30h] [rbp-39h] BYREF
  int v35[2]; // [rsp+38h] [rbp-31h] BYREF
  int v36[6]; // [rsp+40h] [rbp-29h] BYREF
  int v37[6]; // [rsp+58h] [rbp-11h] BYREF
  Scaleform::Render::BlendPrimitive *v38; // [rsp+70h] [rbp+7h]
  __int128 v39; // [rsp+78h] [rbp+Fh]
  __int16 v40; // [rsp+88h] [rbp+1Fh]
  int v41; // [rsp+E0h] [rbp+77h] BYREF
  int v42; // [rsp+E8h] [rbp+7Fh] BYREF

  if ( Scaleform::Render::HAL::checkState(
         this,
         8u,
         "Scaleform::Render::ShaderHAL<class Scaleform::Render::GL::ShaderManager,class Scaleform::Render::GL::ShaderInte"
         "rface>::PushBlendMode") )
  {
    v4 = this->GetEvents(this);
    v4->Begin(v4, Event_BlendMode, "HAL::PushBlendMode");
    BlendModeValue = prim->BlendModeValue;
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)prim);
    p_BlendModeStack = &this->BlendModeStack;
    v38 = prim;
    v7 = this->BlendModeStack.Data.Size + 1;
    v40 = 0;
    v39 = 0i64;
    Scaleform::ArrayDataBase<Scaleform::Render::HAL::BlendModeStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::BlendModeStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::ResizeNoConstruct(
      &this->BlendModeStack.Data,
      &this->BlendModeStack,
      v7);
    v8 = 0;
    v9 = &this->BlendModeStack.Data.Data[this->BlendModeStack.Data.Size - 1];
    if ( v9 )
    {
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)prim);
      v9->pPrimitive.pObject = prim;
      v9->pRenderTarget.pObject = 0i64;
      v9->pLayerAlpha.pObject = 0i64;
      *(_WORD *)&v9->LayerAlphaCleared = 0;
    }
    if ( (this->HALState & 0x300) != 0 )
      goto LABEL_28;
    Data = p_BlendModeStack->Data.Data;
    Size = this->BlendModeStack.Data.Size;
    if ( Scaleform::Render::BlendState::IsTargetAllocationNeededForBlendMode(prim->BlendModeValue) )
    {
      if ( prim->Caching )
      {
        this->HALState |= 0x200u;
        this->CacheableIndex = LODWORD(this->BlendModeStack.Data.Size) - 1;
        this->GetRQProcessor(this)->QueueEmitFilter = QPF_CacheableOnly;
LABEL_28:
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)prim);
        return;
      }
      pHeader = Data[Size - 1].pPrimitive.pObject->PrimitiveArea.Data.Data->pHandle->pHeader;
      v13 = (float *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
                            + 1];
      v34[0] = (int)*v13;
      v34[1] = (int)v13[5];
      v14 = this->CreateTempRenderTarget(this, v34, 0i64);
      pObject = Data[Size - 1].pRenderTarget.pObject;
      v16 = v14;
      if ( pObject )
        pObject->Release(pObject);
      Data[Size - 1].pRenderTarget.pObject = v16;
      if ( v16 )
      {
        v17 = v13[3];
        v18 = v13[7];
        v41 = 0;
        v19 = v17 + *v13;
        v20 = v18 + v13[5];
        v36[0] = (int)v17;
        v36[1] = (int)v18;
        v36[2] = (int)v19;
        v36[3] = (int)v20;
        ((void (__fastcall *)(Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *, Scaleform::Render::RenderTarget *, __int64, int *, int *))this->PushRenderTarget)(
          this,
          v16,
          8i64,
          v36,
          &v41);
      }
      if ( prim->BlendModeValue == Blend_Layer )
      {
        v35[0] = (int)*v13;
        v35[1] = (int)v13[5];
        v21 = this->CreateTempRenderTarget(this, v35, 0i64);
        v22 = Data[Size - 1].pLayerAlpha.pObject;
        v23 = v21;
        if ( v22 )
          v22->Release(v22);
        Data[Size - 1].pLayerAlpha.pObject = v23;
      }
      BlendModeValue = Blend_Normal;
      this->applyDepthStencilMode(this, DepthStencil_Disabled, 0);
    }
    else if ( (unsigned int)(prim->BlendModeValue - 11) <= 1 )
    {
      v24 = LODWORD(this->BlendModeStack.Data.Size) - 1;
      if ( v24 >= 0 )
      {
        v25 = v24;
        v26 = (__int64)&p_BlendModeStack->Data.Data[v24];
        do
        {
          if ( *(_DWORD *)(*(_QWORD *)v26 + 72i64) == 2 )
            break;
          --v24;
          v26 -= 32i64;
          --v25;
        }
        while ( v25 >= 0 );
      }
      if ( !`Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::PushBlendMode'::`26'::warned )
        `Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::PushBlendMode'::`26'::warned = v24 < 0;
      if ( v24 < 0 )
      {
        BlendModeValue = Blend_Ignore;
        Data[Size - 1].NoLayerParent = 1;
      }
      else
      {
        v27 = (__int64)&p_BlendModeStack->Data.Data[v24];
        v42 = -16777216;
        v28 = ***(_QWORD ***)(*(_QWORD *)v27 + 48i64);
        v29 = (float *)(v28
                      + 16
                      * (Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[*(_BYTE *)(v28 + 15) & 0xF].Offsets[4]
                       + 1i64));
        v30 = *(_QWORD *)(v27 + 16);
        LOBYTE(v8) = *(_BYTE *)(v27 + 24) != 0;
        v31 = v29[7];
        v32 = v29[3] + *v29;
        v33 = v31 + v29[5];
        v37[0] = (int)v29[3];
        v37[1] = (int)v31;
        v37[2] = (int)v32;
        v37[3] = (int)v33;
        ((void (__fastcall *)(Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *, __int64, _QWORD, int *, int *))this->PushRenderTarget)(
          this,
          v30,
          (unsigned int)(v8 + 8),
          v37,
          &v42);
        *(_BYTE *)(v27 + 24) = 1;
      }
    }
    Scaleform::Render::HAL::ApplyBlendMode(this, BlendModeValue, 0, (this->HALState & 0x10) != 0);
    goto LABEL_28;
  }
}

char __fastcall Scaleform::Render::RenderTargetData::ReplaceDepthStencilBuffer(
        Scaleform::Render::RenderTargetData *this,
        Scaleform::Render::DepthStencilBuffer *pdsb)
{
  Scaleform::Render::DepthStencilBuffer *pObject; // rcx

  if ( pdsb )
    pdsb->AddRef(pdsb);
  pObject = this->pDepthStencilBuffer.pObject;
  if ( pObject )
    pObject->Release(pObject);
  this->pDepthStencilBuffer.pObject = pdsb;
  return 1;
}

bool __fastcall Scaleform::Render::PrimitiveFillData::RequiresBlend(Scaleform::Render::PrimitiveFillData *this)
{
  bool result; // al
  int v2; // ebx
  Scaleform::Ptr<Scaleform::Render::Texture> *i; // rdi

  switch ( this->Type )
  {
    case PrimFill_None:
    case PrimFill_Mask:
      result = 0;
      break;
    case PrimFill_SolidColor:
      result = this->SolidColor.Channels.Alpha != 0xFF;
      break;
    case PrimFill_Texture:
    case PrimFill_2Texture:
    case PrimFill_UVTexture:
      v2 = 0;
      for ( i = this->Textures; !i->pObject; ++i )
      {
$LN4_96:
        if ( ++v2 >= 2 )
          return 0;
      }
      switch ( i->pObject->GetFormat(i->pObject) )
      {
        case Image_R8G8B8:
        case Image_B8G8R8:
        case Image_PVRTC_RGB_4BPP:
        case Image_PVRTC_RGB_2BPP:
        case Image_ATCIC:
        case Image_VideoFormat_Start:
          goto $LN4_96;
        default:
          result = 1;
          break;
      }
      break;
    default:
      result = 1;
      break;
  }
  return result;
}

_BOOL8 __fastcall Scaleform::Render::GL::HAL::RestoreAfterReset(Scaleform::Render::GL::HAL *this)
{
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rsi
  Scaleform::Render::GL::GraphicsDeviceRecorder *pObject; // rcx
  bool v4; // di

  pDevice = this->pDevice;
  pObject = this->pRecordingDevice.pObject;
  if ( pDevice == pObject )
  {
    pObject->End(pObject);
    this->pRecordingDevice.pObject->ExecuteRecording(
      &this->pRecordingDevice.pObject->Scaleform::Render::GraphicsDeviceRecorder,
      &this->ImmediateDevice);
  }
  Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(this->pDevice);
  this->pDevice = &this->ImmediateDevice;
  this->RSync.SetContext(&this->RSync, this);
  v4 = 0;
  if ( Scaleform::Render::HAL::RestoreAfterReset(this) )
  {
    Scaleform::Render::GL::TextureManager::Initialize(this->pTextureManager.pObject, this);
    if ( Scaleform::Render::GL::ShaderManager::Initialize(&this->SManager, this, this->ConfigFlags)
      && Scaleform::Render::GL::MeshCache::Initialize(&this->Cache, this) )
    {
      v4 = 1;
    }
  }
  Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(this->pDevice);
  this->pDevice = pDevice;
  return v4;
}

void __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetBlendFill(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        Scaleform::Render::BlendMode mode,
        const Scaleform::Render::Matrix2x4<float> *mvp,
        const Scaleform::Render::Cxform *cx,
        Scaleform::Render::Texture **ptextures,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::VertexFormat *pvf,
        Scaleform::Render::GL::ShaderInterface *psi)
{
  Scaleform::Render::Texture **v8; // rdi
  unsigned int v9; // ebp
  int v12; // er10
  char v13; // cl
  Scaleform::Render::GL::ShaderInterface *v14; // rbx
  const Scaleform::Render::Matrix2x4<float> *v15; // r14
  Scaleform::Render::Texture *v16; // r9
  Scaleform::Render::Texture *v17; // r9
  Scaleform::Render::Texture *v18; // r9
  Scaleform::Render::ImageFillMode fm; // [rsp+78h] [rbp+10h] BYREF

  v8 = ptextures;
  v9 = 19;
  v12 = 0x80000;
  switch ( mode )
  {
    case Blend_Layer:
      if ( ptextures[2] )
      {
        v12 = 5767169;
      }
      else
      {
        if ( !`Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetBlendFill'::`12'::warned )
          `Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetBlendFill'::`12'::warned = ptextures[1] != 0i64;
        v9 = 21;
        v12 = 259;
      }
      break;
    case Blend_Lighten:
      v12 = 5767168;
      break;
    case Blend_Darken:
      v12 = 5767184;
      break;
    case Blend_Difference:
      v12 = 5767170;
      break;
    case Blend_Overlay:
      v12 = 5767176;
      break;
    case Blend_HardLight:
      v12 = 5767172;
      break;
    default:
      v13 = `Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetBlendFill'::`5'::warned;
      if ( !`Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetBlendFill'::`5'::warned )
        v13 = 1;
      `Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetBlendFill'::`5'::warned = v13;
      break;
  }
  v14 = psi;
  psi->SetStaticShader(psi, (Scaleform::Render::GL::ShaderDesc::ShaderType)v12, pvf);
  if ( !v14->PrimitiveOpen )
  {
    v14->PrimitiveOpen = 1;
    v14->CurrentPrimitiveMeshCount = 1;
    *(_QWORD *)v14->UniformSet = 0i64;
    *(_QWORD *)&v14->UniformSet[8] = 0i64;
    *(_QWORD *)&v14->UniformSet[16] = 0i64;
    *(_WORD *)&v14->UniformSet[24] = 0;
    v14->Textures[0] = 0i64;
    v14->Textures[1] = 0i64;
    v14->Textures[2] = 0i64;
    v14->Textures[3] = 0i64;
  }
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    v14,
    &v14->CurShader,
    0xEu,
    (const float *)mvp,
    8u,
    0,
    0);
  v15 = texgen;
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    v14,
    &v14->CurShader,
    0x16u,
    (const float *)texgen,
    8u,
    0,
    0);
  v16 = *v8;
  fm.Fill = 1;
  Scaleform::Render::GL::ShaderInterface::SetTexture(
    v14,
    &v14->CurShader,
    v9,
    v16,
    (Scaleform::Render::ImageFillMode)&fm,
    0);
  if ( v8[1] )
  {
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      v14,
      &v14->CurShader,
      0x16u,
      (const float *)&v15[1],
      8u,
      2u,
      0);
    v17 = v8[1];
    fm.Fill = 1;
    Scaleform::Render::GL::ShaderInterface::SetTexture(
      v14,
      &v14->CurShader,
      8u,
      v17,
      (Scaleform::Render::ImageFillMode)&fm,
      0);
  }
  if ( v8[2] )
  {
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      v14,
      &v14->CurShader,
      0x16u,
      (const float *)&v15[2],
      8u,
      2u,
      0);
    v18 = v8[2];
    fm.Fill = 1;
    Scaleform::Render::GL::ShaderInterface::SetTexture(
      v14,
      &v14->CurShader,
      0,
      v18,
      (Scaleform::Render::ImageFillMode)&fm,
      0);
  }
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetCxform(
    v14,
    &v14->CurShader,
    cx,
    0,
    0);
  Scaleform::Render::GL::ShaderInterface::Finish(v14, 1u);
}

void __fastcall Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetColor(
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair> *this,
        const Scaleform::Render::GL::ShaderPair *sd,
        unsigned int var,
        unsigned __int8 *c,
        unsigned int index,
        unsigned int batch)
{
  int v6; // eax
  float v7; // xmm0_4
  __m128i v8; // xmm1
  int v9; // eax
  float v[4]; // [rsp+40h] [rbp-28h] BYREF

  v6 = c[1];
  v[0] = (float)c[2] * 0.0039215689;
  v7 = (float)v6;
  v8 = _mm_cvtsi32_si128(*c);
  v9 = c[3];
  v[1] = v7 * 0.0039215689;
  v[2] = _mm_cvtepi32_ps(v8).m128_f32[0] * 0.0039215689;
  v[3] = (float)v9 * 0.0039215689;
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    this,
    sd,
    var,
    v,
    4u,
    index,
    batch);
}

void __fastcall Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetCxform(
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair> *this,
        const Scaleform::Render::GL::ShaderPair *sd,
        const Scaleform::Render::Cxform *cx,
        unsigned int index,
        unsigned int batch)
{
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    this,
    sd,
    6u,
    (const float *)cx,
    4u,
    index,
    batch);
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    this,
    sd,
    5u,
    cx->M[1],
    4u,
    index,
    batch);
}

char __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableCompare(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Size<int> texsize,
        const Scaleform::Render::VertexFormat *pvf,
        Scaleform::Render::GL::ShaderInterface *psi,
        unsigned int flags)
{
  char result; // al
  Scaleform::Render::Size<int> v12; // [rsp+40h] [rbp-38h] BYREF
  Scaleform::Render::Matrix2x4<float> mvpOriginal; // [rsp+50h] [rbp-28h] BYREF

  result = psi->SetStaticShader(psi, ST_start_DrawableCompare, pvf);
  if ( result )
  {
    if ( !psi->PrimitiveOpen )
    {
      psi->PrimitiveOpen = 1;
      psi->CurrentPrimitiveMeshCount = 1;
      *(_QWORD *)psi->UniformSet = 0i64;
      *(_QWORD *)&psi->UniformSet[8] = 0i64;
      *(_QWORD *)&psi->UniformSet[16] = 0i64;
      *(_WORD *)&psi->UniformSet[24] = 0;
      psi->Textures[0] = 0i64;
      psi->Textures[1] = 0i64;
      psi->Textures[2] = 0i64;
      psi->Textures[3] = 0i64;
    }
    v12 = **(Scaleform::Render::Size<int> **)&texsize;
    *(_OWORD *)&mvpOriginal.M[0][0] = _xmm_bf800000000000000000000040000000;
    *(_OWORD *)&mvpOriginal.M[1][0] = _xmm;
    return Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::DrawableFinish(
             this,
             2u,
             tex,
             texgen,
             (const Scaleform::Render::Size<int>)&v12,
             &mvpOriginal,
             psi,
             flags);
  }
  return result;
}

char __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableCopyPixelsFill(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Size<int> texsize,
        const Scaleform::Render::Matrix2x4<float> *mvp,
        bool mergeAlpha,
        bool destAlpha,
        const Scaleform::Render::VertexFormat *pvf,
        Scaleform::Render::GL::ShaderInterface *psi,
        unsigned int flags)
{
  __int64 v11; // rdx
  char result; // al
  bool v16; // zf
  Scaleform::Render::Size<int> v17; // [rsp+40h] [rbp-18h] BYREF

  v11 = 3670144i64;
  if ( !tex[2] )
    v11 = 3670016i64;
  if ( destAlpha )
  {
    if ( mergeAlpha )
      v11 = (unsigned int)(v11 + 64);
  }
  else
  {
    v11 = (unsigned int)(v11 + 32);
  }
  result = psi->SetStaticShader(psi, (Scaleform::Render::GL::ShaderDesc::ShaderType)v11, pvf);
  if ( result )
  {
    if ( !psi->PrimitiveOpen )
    {
      psi->PrimitiveOpen = 1;
      psi->CurrentPrimitiveMeshCount = 1;
      *(_QWORD *)psi->UniformSet = 0i64;
      *(_QWORD *)&psi->UniformSet[8] = 0i64;
      *(_QWORD *)&psi->UniformSet[16] = 0i64;
      *(_WORD *)&psi->UniformSet[24] = 0;
      psi->Textures[0] = 0i64;
      psi->Textures[1] = 0i64;
      psi->Textures[2] = 0i64;
      psi->Textures[3] = 0i64;
    }
    v16 = tex[2] == 0i64;
    v17 = **(Scaleform::Render::Size<int> **)&texsize;
    return Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::DrawableFinish(
             this,
             !v16 + 2,
             tex,
             texgen,
             (const Scaleform::Render::Size<int>)&v17,
             mvp,
             psi,
             flags);
  }
  return result;
}

char __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableCxform(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Size<int> texsize,
        const Scaleform::Render::Cxform *cx,
        const Scaleform::Render::VertexFormat *pvf,
        Scaleform::Render::GL::ShaderInterface *psi,
        unsigned int flags)
{
  char result; // al
  Scaleform::Render::Size<int> texsizea; // [rsp+40h] [rbp-38h] BYREF
  Scaleform::Render::Matrix2x4<float> mvpOriginal; // [rsp+50h] [rbp-28h] BYREF

  result = psi->SetStaticShader(psi, ST_BatchTexTGCxform, pvf);
  if ( result )
  {
    if ( !psi->PrimitiveOpen )
    {
      psi->PrimitiveOpen = 1;
      psi->CurrentPrimitiveMeshCount = 1;
      *(_QWORD *)psi->UniformSet = 0i64;
      *(_QWORD *)&psi->UniformSet[8] = 0i64;
      *(_QWORD *)&psi->UniformSet[16] = 0i64;
      *(_WORD *)&psi->UniformSet[24] = 0;
      psi->Textures[0] = 0i64;
      psi->Textures[1] = 0i64;
      psi->Textures[2] = 0i64;
      psi->Textures[3] = 0i64;
    }
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetCxform(
      psi,
      &psi->CurShader,
      cx,
      0,
      0);
    texsizea = **(Scaleform::Render::Size<int> **)&texsize;
    *(_OWORD *)&mvpOriginal.M[0][0] = _xmm_bf800000000000000000000040000000;
    *(_OWORD *)&mvpOriginal.M[1][0] = _xmm;
    return Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::DrawableFinish(
             this,
             1u,
             tex,
             texgen,
             (const Scaleform::Render::Size<int>)&texsizea,
             &mvpOriginal,
             psi,
             flags);
  }
  return result;
}

char __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawableMergeFill(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Size<int> texsize,
        const Scaleform::Render::Matrix4x4<float> *cxmul,
        const Scaleform::Render::VertexFormat *pvf,
        Scaleform::Render::GL::ShaderInterface *psi,
        unsigned int flags)
{
  char result; // al
  Scaleform::Render::Size<int> texsizea; // [rsp+40h] [rbp-58h] BYREF
  Scaleform::Render::Matrix2x4<float> mvpOriginal; // [rsp+50h] [rbp-48h] BYREF

  result = psi->SetStaticShader(psi, ST_start_DrawableMerge, pvf);
  if ( result )
  {
    if ( !psi->PrimitiveOpen )
    {
      psi->PrimitiveOpen = 1;
      psi->CurrentPrimitiveMeshCount = 1;
      *(_QWORD *)psi->UniformSet = 0i64;
      *(_QWORD *)&psi->UniformSet[8] = 0i64;
      *(_QWORD *)&psi->UniformSet[16] = 0i64;
      *(_WORD *)&psi->UniformSet[24] = 0;
      psi->Textures[0] = 0i64;
      psi->Textures[1] = 0i64;
      psi->Textures[2] = 0i64;
      psi->Textures[3] = 0i64;
    }
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      psi,
      &psi->CurShader,
      6u,
      (const float *)cxmul,
      0x10u,
      0,
      0);
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      psi,
      &psi->CurShader,
      7u,
      (const float *)&cxmul[1],
      0x10u,
      0,
      0);
    texsizea = **(Scaleform::Render::Size<int> **)&texsize;
    *(_OWORD *)&mvpOriginal.M[0][0] = _xmm_bf800000000000000000000040000000;
    *(_OWORD *)&mvpOriginal.M[1][0] = _xmm;
    return Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::DrawableFinish(
             this,
             2u,
             tex,
             texgen,
             (const Scaleform::Render::Size<int>)&texsizea,
             &mvpOriginal,
             psi,
             flags);
  }
  return result;
}

char __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetDrawablePaletteMap(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        Scaleform::Render::Texture **tex,
        const Scaleform::Render::Matrix2x4<float> *texgen,
        const Scaleform::Render::Size<int> texsize,
        const Scaleform::Render::Matrix2x4<float> *mvp,
        Scaleform::Render::Texture *paletteMap,
        const Scaleform::Render::VertexFormat *pvf,
        Scaleform::Render::GL::ShaderInterface *psi,
        unsigned int flags)
{
  Scaleform::Render::GL::ShaderInterface *v9; // rbx
  char result; // al
  Scaleform::Render::Size<int> texsizea; // [rsp+40h] [rbp-18h] BYREF

  v9 = psi;
  result = psi->SetStaticShader(psi, ST_start_DrawablePaletteMap, pvf);
  if ( result )
  {
    if ( !v9->PrimitiveOpen )
    {
      v9->PrimitiveOpen = 1;
      v9->CurrentPrimitiveMeshCount = 1;
      *(_QWORD *)v9->UniformSet = 0i64;
      *(_QWORD *)&v9->UniformSet[8] = 0i64;
      *(_QWORD *)&v9->UniformSet[16] = 0i64;
      *(_WORD *)&v9->UniformSet[24] = 0;
      v9->Textures[0] = 0i64;
      v9->Textures[1] = 0i64;
      v9->Textures[2] = 0i64;
      v9->Textures[3] = 0i64;
    }
    LOBYTE(psi) = 1;
    Scaleform::Render::GL::ShaderInterface::SetTexture(
      v9,
      &v9->CurShader,
      0x13u,
      paletteMap,
      (Scaleform::Render::ImageFillMode)&psi,
      0);
    texsizea = **(Scaleform::Render::Size<int> **)&texsize;
    return Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::DrawableFinish(
             this,
             1u,
             tex,
             texgen,
             (const Scaleform::Render::Size<int>)&texsizea,
             mvp,
             v9,
             flags);
  }
  return result;
}

bool __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetFilterFill(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        const Scaleform::Render::Matrix2x4<float> *mvp,
        const Scaleform::Render::Cxform *cx,
        const Scaleform::Render::Matrix2x4<float> *viewMatrix,
        const Scaleform::Render::Filter *filter,
        Scaleform::Ptr<Scaleform::Render::RenderTarget> *targets,
        unsigned int *shaders,
        unsigned int pass,
        unsigned int passCount,
        const Scaleform::Render::VertexFormat *pvf,
        Scaleform::Render::GL::ShaderInterface *psi)
{
  Scaleform::Render::GL::ShaderDesc::ShaderType v12; // er9
  bool result; // al
  int **v14; // rbx
  Scaleform::Render::Texture *v15; // r13
  int *v16; // rcx
  float v17; // xmm3_4
  int Width; // eax
  float v19; // xmm1_4
  Scaleform::Render::FilterType Type; // eax
  float Height; // xmm1_4
  Scaleform::Render::GL::ShaderDesc::ShaderType v22; // er8
  __int64 v23; // rcx
  Scaleform::Render::Texture *v24; // rbx
  Scaleform::Render::Texture *v25; // rax
  Scaleform::RefCountBase<Scaleform::Render::Filter,2> v26; // xmm0
  __int128 v27; // xmm3
  float v28; // xmm5_4
  float v29; // xmm6_4
  float v30; // xmm7_4
  __int128 v31; // xmm2
  Scaleform::RefCountBase<Scaleform::Render::Filter,2> v32; // xmm4
  float v33; // xmm8_4
  __int128 v34; // xmm9
  float v35; // xmm1_4
  unsigned __int8 v36; // bl
  Scaleform::Render::Texture *v37; // r15
  Scaleform::Render::FilterType v38; // ecx
  __int32 v39; // ecx
  __int32 v40; // ecx
  __int32 v41; // ecx
  float v42; // xmm2_4
  Scaleform::Render::Filter_vtbl *v43; // rcx
  float v44; // xmm5_4
  float v45; // xmm3_4
  float v46; // xmm2_4
  int v47; // eax
  float v48; // xmm1_4
  float v49; // xmm0_4
  unsigned int v50; // ebx
  unsigned int v51; // er12
  int v52; // ebx
  int *v53; // rax
  Scaleform::Render::Filter_vtbl *v54; // rcx
  float v55; // xmm0_4
  Scaleform::Render::ImageFillMode v56; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::ImageFillMode fm; // [rsp+41h] [rbp-BFh] BYREF
  float v58[4]; // [rsp+50h] [rbp-B0h] BYREF
  __int128 v59; // [rsp+60h] [rbp-A0h]
  float *v; // [rsp+70h] [rbp-90h] BYREF
  __int64 v61; // [rsp+78h] [rbp-88h]
  float v62[2]; // [rsp+80h] [rbp-80h] BYREF
  __int64 v63; // [rsp+88h] [rbp-78h]
  Scaleform::Render::Cxform *v64; // [rsp+90h] [rbp-70h] BYREF
  __int64 v65; // [rsp+98h] [rbp-68h]
  float v66[2]; // [rsp+A0h] [rbp-60h] BYREF
  __int64 v67; // [rsp+A8h] [rbp-58h]
  Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *v68; // [rsp+B0h] [rbp-50h] BYREF
  float v69; // [rsp+B8h] [rbp-48h] BYREF
  float v70; // [rsp+BCh] [rbp-44h] BYREF
  float v71[4]; // [rsp+C0h] [rbp-40h] BYREF
  __int128 v72; // [rsp+D0h] [rbp-30h]
  __int128 v73; // [rsp+E0h] [rbp-20h]
  Scaleform::RefCountBase<Scaleform::Render::Filter,2> v74; // [rsp+F0h] [rbp-10h]
  float v75[4]; // [rsp+100h] [rbp+0h] BYREF
  float pr; // [rsp+120h] [rbp+20h] BYREF
  float pg; // [rsp+124h] [rbp+24h] BYREF
  float pb; // [rsp+128h] [rbp+28h] BYREF
  float pa; // [rsp+12Ch] [rbp+2Ch] BYREF
  float v80; // [rsp+130h] [rbp+30h] BYREF
  float v81; // [rsp+134h] [rbp+34h] BYREF
  float v82; // [rsp+138h] [rbp+38h] BYREF
  float v83[3]; // [rsp+13Ch] [rbp+3Ch] BYREF
  float fsize[4]; // [rsp+148h] [rbp+48h] BYREF

  *(_QWORD *)v62 = targets;
  v12 = shaders[pass];
  v64 = (Scaleform::Render::Cxform *)cx;
  v = (float *)mvp;
  v68 = this;
  *(_QWORD *)v66 = shaders;
  result = Scaleform::Render::GL::ShaderInterface::SetFilterShader(psi, viewMatrix, filter, v12, pass, passCount, pvf);
  if ( result )
  {
    if ( !psi->PrimitiveOpen )
    {
      psi->PrimitiveOpen = 1;
      psi->CurrentPrimitiveMeshCount = 1;
      *(_QWORD *)psi->UniformSet = 0i64;
      *(_QWORD *)&psi->UniformSet[8] = 0i64;
      *(_QWORD *)&psi->UniformSet[16] = 0i64;
      *(_WORD *)&psi->UniformSet[24] = 0;
      psi->Textures[0] = 0i64;
      psi->Textures[1] = 0i64;
      psi->Textures[2] = 0i64;
      psi->Textures[3] = 0i64;
    }
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      psi,
      &psi->CurShader,
      0xEu,
      v,
      8u,
      0,
      0);
    v14 = *(int ***)v62;
    v56.Fill = shaders[pass] - 2621440 <= 0x53001;
    v15 = (Scaleform::Render::Texture *)(*(__int64 (__fastcall **)(_QWORD))(***(_QWORD ***)v62 + 24i64))(**(_QWORD **)v62);
    fm.Fill = 3;
    Scaleform::Render::GL::ShaderInterface::SetTexture(
      psi,
      &psi->CurShader,
      0x15u,
      v15,
      (Scaleform::Render::ImageFillMode)&fm,
      0);
    v16 = *v14;
    *(_OWORD *)v58 = _xmm;
    v59 = _xmm;
    v17 = (float)v16[12] + 0.0;
    *((float *)&v59 + 3) = (float)v16[13] + 0.0;
    v58[3] = v17;
    Width = v15->ImgSize.Width;
    v19 = (float)(v16[14] - v16[12]);
    *((float *)&v59 + 1) = (float)(v16[15] - v16[13]) / (float)(int)v15->ImgSize.Height;
    v58[0] = v19 / (float)Width;
    v58[1] = v58[0] * 0.0;
    v58[2] = v58[0] * 0.0;
    *(float *)&v59 = *((float *)&v59 + 1) * 0.0;
    *((float *)&v59 + 2) = *((float *)&v59 + 1) * 0.0;
    v58[3] = v58[0] * v17;
    *((float *)&v59 + 3) = *((float *)&v59 + 1) * *((float *)&v59 + 3);
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      psi,
      &psi->CurShader,
      0x16u,
      v58,
      8u,
      0,
      0);
    Type = filter->Type;
    if ( Type <= Filter_GradientBevel )
    {
      Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetCxform(
        psi,
        &psi->CurShader,
        v64,
        0,
        0);
      Height = (float)(int)v15->ImgSize.Height;
      *(float *)&v = 1.0 / (float)(int)v15->ImgSize.Width;
      v22 = *(_DWORD *)(*(_QWORD *)v66 + 4i64 * pass);
      *((float *)&v + 1) = 1.0 / Height;
      Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::GenerateBlurFilterParameters(
        v68,
        (const Scaleform::Render::BlurFilterParams *)&filter[1],
        v22,
        pass,
        fsize,
        viewMatrix,
        (float *)&v,
        passCount);
      Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
        psi,
        &psi->CurShader,
        9u,
        fsize,
        4u,
        0,
        0);
      Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
        psi,
        &psi->CurShader,
        0x17u,
        (const float *)&v,
        2u,
        0,
        0);
      if ( v56.Fill )
      {
        Scaleform::Render::Color::GetRGBAFloat((Scaleform::Render::Color *)&filter[2].__vftable + 1, &pr, &pg, &pb, &pa);
        Scaleform::Render::Color::GetRGBAFloat((Scaleform::Render::Color *)&filter[2].RefCount, &v80, &v81, &v82, v83);
        v23 = *(_QWORD *)(*(_QWORD *)v62 + 16i64);
        *(float *)&v64 = (float)(*(float *)&filter[1].Type * -0.050000001) * viewMatrix->M[0][0];
        *((float *)&v64 + 1) = (float)(*(float *)&filter[1].Frozen * -0.050000001) * viewMatrix->M[1][1];
        if ( v23 )
        {
          v24 = (Scaleform::Render::Texture *)(*(__int64 (__fastcall **)(__int64))(*(_QWORD *)v23 + 24i64))(v23);
          v62[0] = 1.0 / (float)((float)(int)v24->ImgSize.Width * *(float *)&v);
          v62[1] = 1.0 / (float)((float)(int)v24->ImgSize.Height * *((float *)&v + 1));
          Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
            psi,
            &psi->CurShader,
            0x14u,
            v62,
            2u,
            0,
            0);
          v56.Fill = 3;
          Scaleform::Render::GL::ShaderInterface::SetTexture(
            psi,
            &psi->CurShader,
            0x13u,
            v24,
            (Scaleform::Render::ImageFillMode)&v56,
            0);
        }
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
          psi,
          &psi->CurShader,
          0xFu,
          (const float *)&v64,
          2u,
          0,
          0);
        if ( filter->Type == Filter_Bevel )
          Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
            psi,
            &psi->CurShader,
            0x12u,
            &v80,
            4u,
            0,
            0);
        if ( (unsigned int)(filter->Type - 4) <= 1 )
        {
          v25 = (Scaleform::Render::Texture *)(*(__int64 (__fastcall **)(_QWORD, Scaleform::Render::TextureManager *))(**(_QWORD **)&filter[3].RefCount + 168i64))(
                                                *(_QWORD *)&filter[3].RefCount,
                                                v15->pManagerLocks.pObject->pManager);
          v56.Fill = 3;
          Scaleform::Render::GL::ShaderInterface::SetTexture(
            psi,
            &psi->CurShader,
            0xAu,
            v25,
            (Scaleform::Render::ImageFillMode)&v56,
            0);
        }
        else
        {
          Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
            psi,
            &psi->CurShader,
            0x11u,
            &pr,
            4u,
            0,
            0);
        }
      }
      goto LABEL_37;
    }
    if ( Type == Filter_ColorMatrix )
    {
      v26 = filter[1].Scaleform::RefCountBase<Scaleform::Render::Filter,2>;
      v27 = *(_OWORD *)&filter[2].RefCount;
      v28 = v64->M[0][0];
      v29 = v64->M[0][1];
      v30 = v64->M[0][2];
      v31 = *(_OWORD *)&filter[1].Type;
      v32 = filter[3].Scaleform::RefCountBase<Scaleform::Render::Filter,2>;
      *(Scaleform::RefCountBase<Scaleform::Render::Filter,2> *)v71 = v26;
      v73 = v27;
      v72 = v31;
      v74 = v32;
      v33 = v64->M[0][3];
      v71[0] = (float)(*(float *)&v26.__vftable * v28) * v33;
      v71[2] = (float)(*(float *)&v26.RefCount * v30) * v33;
      v71[1] = (float)(*((float *)&v26.__vftable + 1) * v29) * v33;
      v71[3] = *((float *)&v26.RefCount + 1) * v33;
      *((float *)&v72 + 2) = (float)(*((float *)&v31 + 2) * v30) * v33;
      *((float *)&v72 + 1) = (float)(*((float *)&v31 + 1) * v29) * v33;
      *((float *)&v72 + 3) = *((float *)&v31 + 3) * v33;
      *((float *)&v73 + 2) = (float)(*((float *)&v27 + 2) * v30) * v33;
      *((float *)&v73 + 1) = (float)(*((float *)&v27 + 1) * v29) * v33;
      *((float *)&v73 + 3) = *((float *)&v27 + 3) * v33;
      v34 = *(_OWORD *)&filter[3].Type;
      *(_OWORD *)v75 = v34;
      *(float *)&v73 = (float)(*(float *)&v27 * v28) * v33;
      *(float *)&v74.RefCount = (float)(*(float *)&v32.RefCount * v30) * v33;
      *((float *)&v74.__vftable + 1) = (float)(*((float *)&v32.__vftable + 1) * v29) * v33;
      *((float *)&v74.RefCount + 1) = *((float *)&v32.RefCount + 1) * v33;
      *(float *)&v72 = (float)(*(float *)&v31 * v28) * v33;
      *(float *)&v74.__vftable = (float)(*(float *)&v32.__vftable * v28) * v33;
      v75[0] = (float)((float)(v64->M[1][0] / 255.0) + (float)((float)(*(float *)&v34 * v28) * v33)) * v33;
      v35 = v64->M[1][2];
      v75[1] = (float)((float)(v64->M[1][1] / 255.0) + (float)((float)(*((float *)&v34 + 1) * v29) * v33)) * v33;
      *(float *)&v26.__vftable = v64->M[1][3];
      v75[2] = (float)((float)(v35 / 255.0) + (float)((float)(*((float *)&v34 + 2) * v30) * v33)) * v33;
      v75[3] = (float)((float)(*(float *)&v26.__vftable / 255.0) + (float)(*((float *)&v34 + 3) * v33)) * v33;
      Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
        psi,
        &psi->CurShader,
        5u,
        v75,
        4u,
        0,
        0);
      Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
        psi,
        &psi->CurShader,
        6u,
        v71,
        0x10u,
        0,
        0);
LABEL_37:
      Scaleform::Render::GL::ShaderInterface::Finish(psi, 1u);
      return 1;
    }
    if ( Type != Filter_DisplacementMap )
      goto LABEL_37;
    v36 = (LODWORD(filter[2].__vftable) != 0) + 2;
    v37 = (Scaleform::Render::Texture *)(*((__int64 (__fastcall **)(Scaleform::Render::Filter_vtbl *, _QWORD))filter[1].~RefCountImplCore
                                         + 21))(
                                          filter[1].__vftable,
                                          0i64);
    v56.Fill = v36;
    Scaleform::Render::GL::ShaderInterface::SetTexture(
      psi,
      &psi->CurShader,
      0xCu,
      v37,
      (Scaleform::Render::ImageFillMode)&v56,
      0);
    v38 = filter[1].Type;
    v64 = 0i64;
    v65 = 0i64;
    *(_QWORD *)v62 = 0i64;
    v63 = 0i64;
    v = 0i64;
    v61 = 0i64;
    *(_QWORD *)v66 = 0i64;
    v67 = 0i64;
    v39 = v38 - 1;
    if ( v39 )
    {
      v40 = v39 - 1;
      if ( !v40 )
      {
        HIDWORD(v64) = 1065353216;
        goto LABEL_24;
      }
      v41 = v40 - 2;
      if ( !v41 )
      {
        LODWORD(v65) = 1065353216;
        goto LABEL_24;
      }
      if ( v41 == 4 )
      {
        HIDWORD(v65) = 1065353216;
        goto LABEL_24;
      }
    }
    LODWORD(v64) = 1065353216;
LABEL_24:
    if ( *(_DWORD *)&filter[1].Frozen != 1 )
    {
      switch ( *(_DWORD *)&filter[1].Frozen )
      {
        case 2:
          v62[1] = 1.0;
          goto LABEL_32;
        case 4:
          LODWORD(v63) = 1065353216;
          goto LABEL_32;
        case 8:
          HIDWORD(v63) = 1065353216;
          goto LABEL_32;
      }
    }
    v62[0] = 1.0;
LABEL_32:
    v42 = *((float *)&filter[2].__vftable + 1);
    v43 = filter[1].__vftable;
    v44 = (float)(int)v15->ImgSize.Width;
    v45 = (float)(int)v15->ImgSize.Height;
    *(float *)&v = (float)(v44 / (float)(int)v37->ImgSize.Width) / viewMatrix->M[0][0];
    v46 = (float)(v42 / v44) * viewMatrix->M[0][0];
    *((float *)&v + 1) = (float)(v45 / (float)(int)v37->ImgSize.Height) / viewMatrix->M[1][1];
    *(float *)&v61 = *(float *)&filter[1].RefCount / (float)(int)v37->ImgSize.Width;
    v47 = v37->ImgSize.Height;
    v48 = *((float *)&filter[1].RefCount + 1);
    v66[0] = v46;
    v49 = *(float *)&filter[2].RefCount;
    *((float *)&v61 + 1) = v48 / (float)v47;
    v66[1] = (float)(v49 / v45) * viewMatrix->M[1][1];
    v50 = v37->ImgSize.Width;
    v51 = v37->ImgSize.Height;
    if ( *(_QWORD *)(*((__int64 (__fastcall **)(Scaleform::Render::Filter_vtbl *, Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> **))v43->~RefCountImplCore
                     + 5))(
                      v43,
                      &v68) == __PAIR64__(v51, v50) )
    {
      v67 = 0x3F8000003F800000i64;
    }
    else
    {
      v52 = v37->ImgSize.Width;
      v53 = (int *)(*((__int64 (__fastcall **)(Scaleform::Render::Filter_vtbl *, Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> **))filter[1].~RefCountImplCore
                    + 5))(
                     filter[1].__vftable,
                     &v68);
      v54 = filter[1].__vftable;
      *(float *)&v67 = (float)((float)*v53 - 1.0) / (float)v52;
      v55 = (float)(int)v37->ImgSize.Height;
      *((float *)&v67 + 1) = (float)((float)*(int *)((*((__int64 (__fastcall **)(Scaleform::Render::Filter_vtbl *, Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> **))v54->~RefCountImplCore
                                                      + 5))(
                                                       v54,
                                                       &v68)
                                                   + 4)
                                   - 1.0)
                           / v55;
    }
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      psi,
      &psi->CurShader,
      3u,
      (const float *)&v64,
      4u,
      0,
      0);
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      psi,
      &psi->CurShader,
      4u,
      v62,
      4u,
      0,
      0);
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      psi,
      &psi->CurShader,
      0xBu,
      (const float *)&v,
      4u,
      0,
      0);
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      psi,
      &psi->CurShader,
      0x10u,
      v66,
      4u,
      0,
      0);
    if ( LODWORD(filter[2].__vftable) == 3 )
    {
      Scaleform::Render::Color::GetRGBAFloat(
        (Scaleform::Render::Color *)&filter[2].RefCount + 1,
        (float *)&v68,
        (float *)&v68 + 1,
        &v69,
        &v70);
      Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
        psi,
        &psi->CurShader,
        1u,
        (const float *)&v68,
        4u,
        0,
        0);
    }
    goto LABEL_37;
  }
  return result;
}

void __fastcall Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetMatrix(
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair> *this,
        const Scaleform::Render::GL::ShaderPair *sd,
        unsigned int var,
        const Scaleform::Render::Matrix2x4<float> *m1,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m2,
        const Scaleform::Render::MatrixState *Matrices,
        unsigned int index,
        unsigned int batch)
{
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rcx
  Scaleform::Render::Matrix3x4<float> *Matrix3D; // rax
  Scaleform::Render::Matrix4x4<float> *UVP; // rax
  Scaleform::Render::Matrix3x4<float> v15; // [rsp+40h] [rbp-A8h] BYREF
  Scaleform::Render::Matrix4x4<float> v16; // [rsp+70h] [rbp-78h] BYREF

  pHeader = m2->pHandle->pHeader;
  if ( (pHeader->Format & 0x10) != 0 )
  {
    Matrix3D = Scaleform::Render::MatrixPoolImpl::HMatrix::GetMatrix3D((Scaleform::Render::MatrixPoolImpl::HMatrix *)m2);
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v15, Matrix3D, m1);
    UVP = Scaleform::Render::MatrixState::GetUVP((Scaleform::Render::MatrixState *)Matrices);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v16, UVP, &v15);
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      this,
      sd,
      var,
      (const float *)&v16,
      0x10u,
      index,
      batch);
  }
  else
  {
    Scaleform::Render::Matrix2x4<float>::SetToAppend(
      (Scaleform::Render::Matrix2x4<float> *)&v15,
      m1,
      (const Scaleform::Render::Matrix2x4<float> *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
                                                          + 1],
      &Matrices->UserView);
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      this,
      sd,
      var,
      (const float *)&v15,
      8u,
      2 * index,
      batch);
  }
}

Scaleform::Render::GL::ShaderPair *__fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetPrimitiveFill(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        Scaleform::Render::PrimitiveFill *pfill,
        unsigned int *fillFlags,
        unsigned int batchType,
        const Scaleform::Render::VertexFormat *pvf,
        unsigned int meshCount,
        const Scaleform::Render::MatrixState *Matrices,
        const Scaleform::Render::Primitive::MeshEntry *pmeshes,
        Scaleform::Render::GL::ShaderInterface *psi)
{
  __int64 Type; // rdx
  unsigned int *v11; // rdi
  const Scaleform::Render::Primitive::MeshEntry *v12; // r12
  Scaleform::Render::ProfileViews *Profiler; // rcx
  int v14; // eax
  bool v15; // zf
  int v16; // er15
  unsigned int v17; // ebx
  const Scaleform::Render::Primitive::MeshEntry *v18; // rdi
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rcx
  const Scaleform::Render::Cxform *v20; // r8
  int v21; // eax
  bool v22; // cc
  Scaleform::Render::GL::ShaderDesc::ShaderType v23; // ebx
  unsigned __int8 *v24; // rax
  Scaleform::Render::Texture *pObject; // rbx
  Scaleform::Render::Texture *v26; // r9
  unsigned int v27; // ebx
  const Scaleform::Render::Primitive::MeshEntry *v28; // r14
  const Scaleform::Render::GL::VertexShaderDesc *pVDesc; // rcx
  const Scaleform::Render::GL::BatchVar *BatchUniforms; // rax
  unsigned __int8 v31; // dl
  unsigned __int16 v32; // r14
  const Scaleform::Render::GL::UniformVar *Uniforms; // rax
  __int16 v34; // dx
  const Scaleform::Render::GL::FragShaderDesc *pFDesc; // rdx
  const Scaleform::Render::GL::BatchVar *v36; // rcx
  unsigned __int8 v37; // r8
  const Scaleform::Render::GL::UniformVar *v38; // rcx
  __int16 Size; // dx
  unsigned int v40; // er15
  unsigned int v41; // er14
  __int64 v42; // rbx
  Scaleform::Render::Primitive::MeshEntry *v43; // r13
  unsigned __int8 *v44; // rax
  Scaleform::Render::GL::ShaderPair *p_CurShader; // rdx
  float v46; // xmm0_4
  __m128i v47; // xmm1
  int v48; // ecx
  __m128i v49; // xmm1
  const Scaleform::Render::GL::VertexShaderDesc *v50; // rax
  const Scaleform::Render::GL::BatchVar *v51; // rcx
  char Offset; // al
  Scaleform::Render::MatrixPoolImpl::DataHeader *v53; // rcx
  const Scaleform::Render::Cxform *v54; // r8
  Scaleform::Render::Cxform *v55; // rbx
  unsigned int i; // ebx
  const Scaleform::Render::Matrix2x4<float> *TextureMatrix; // rax
  Scaleform::Render::ImageFillMode fm; // [rsp+40h] [rbp-81h] BYREF
  unsigned int batchTypea; // [rsp+44h] [rbp-7Dh] BYREF
  Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *v61; // [rsp+48h] [rbp-79h]
  int v62; // [rsp+50h] [rbp-71h]
  const Scaleform::Render::VertexFormat *v63; // [rsp+58h] [rbp-69h] BYREF
  unsigned int *v64; // [rsp+60h] [rbp-61h]
  Scaleform::Render::MatrixState *v65; // [rsp+68h] [rbp-59h]
  Scaleform::Render::Cxform VertexMatrix; // [rsp+70h] [rbp-51h] BYREF
  int v67[4]; // [rsp+90h] [rbp-31h] BYREF

  Type = (unsigned int)pfill->Data.Type;
  v11 = fillFlags;
  v12 = pmeshes;
  v63 = pvf;
  v61 = this;
  Profiler = this->Profiler;
  v65 = (Scaleform::Render::MatrixState *)Matrices;
  batchTypea = batchType;
  v64 = fillFlags;
  v14 = Profiler->GetFillType(Profiler, (Scaleform::Render::PrimitiveFillType)Type);
  v15 = (*(_BYTE *)v11 & 0x20) == 0;
  v16 = v14;
  v62 = v14;
  if ( v15 && Scaleform::Render::PrimitiveFillData::RequiresBlend((Scaleform::Render::PrimitiveFillData *)&pfill->Data) )
    *v11 |= 0x20u;
  if ( (*(_BYTE *)v11 & 0x28) != 40 )
  {
    v17 = 0;
    if ( meshCount )
    {
      v18 = pmeshes;
      while ( 1 )
      {
        pHeader = v18->M.pHandle->pHeader;
        v20 = (pHeader->Format & 1) != 0 ? (const Scaleform::Render::Cxform *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[0]
                                                                                     + 1] : &Scaleform::Render::Cxform::Identity;
        v61->Profiler->GetCxform(v61->Profiler, &VertexMatrix, v20);
        if ( Scaleform::Render::Cxform::operator!=(&VertexMatrix, &Scaleform::Render::Cxform::Identity) )
          break;
        ++v17;
        ++v18;
        if ( v17 >= meshCount )
        {
          v11 = v64;
          goto LABEL_15;
        }
      }
      v11 = v64;
      v21 = *v64 | 8;
      v22 = VertexMatrix.M[0][3] >= 1.0;
      *v64 = v21;
      if ( !v22 )
        *v11 = v21 | 0x20;
    }
  }
LABEL_15:
  v23 = Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill(
          v61,
          pfill,
          v11,
          batchTypea);
  v61->Profiler->SetFillFlags(v61->Profiler, *v11);
  psi->SetStaticShader(psi, v23, v63);
  if ( Scaleform::Render::PrimitiveFill::IsSolid((Scaleform::Render::PrimitiveFillType)v16) )
  {
    batchTypea = pfill->Data.SolidColor.Raw;
    v24 = (unsigned __int8 *)((__int64 (__fastcall *)(Scaleform::Render::ProfileViews *, const Scaleform::Render::VertexFormat **, unsigned int *))v61->Profiler->GetColor)(
                               v61->Profiler,
                               &v63,
                               &batchTypea);
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetColor(
      psi,
      &psi->CurShader,
      6u,
      v24,
      0,
      0);
  }
  else if ( v16 >= 5 )
  {
    pObject = pfill->Data.Textures[0].pObject;
    fm.Fill = pfill->Data.FillModes[0].Fill;
    Scaleform::Render::GL::ShaderInterface::SetTexture(
      psi,
      &psi->CurShader,
      0x15u,
      pObject,
      (Scaleform::Render::ImageFillMode)&fm,
      0);
    if ( (unsigned int)(v16 - 9) <= 1 )
    {
      v26 = pfill->Data.Textures[1].pObject;
      fm.Fill = pfill->Data.FillModes[1].Fill;
      Scaleform::Render::GL::ShaderInterface::SetTexture(
        psi,
        &psi->CurShader,
        0x15u,
        v26,
        (Scaleform::Render::ImageFillMode)&fm,
        pObject->TextureCount);
    }
  }
  if ( v16 == 13 )
  {
    v27 = 0;
    if ( meshCount )
    {
      v28 = pmeshes;
      do
      {
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUserUniforms(
          psi,
          &psi->CurShader,
          &v28->M,
          v27++);
        ++v28;
      }
      while ( v27 < meshCount );
    }
  }
  pVDesc = psi->CurShader.pVDesc;
  BatchUniforms = pVDesc->BatchUniforms;
  if ( BatchUniforms[22].Offset >= 0 && (v31 = BatchUniforms[22].Size) != 0 )
  {
    v32 = v31;
  }
  else
  {
    Uniforms = pVDesc->Uniforms;
    if ( Uniforms[22].Location < 0 || (v34 = Uniforms[22].Size, v34 <= 0) )
    {
      pFDesc = psi->CurShader.pFDesc;
      v36 = pFDesc->BatchUniforms;
      if ( v36[22].Offset >= 0 && (v37 = v36[22].Size) != 0 )
      {
        v32 = v37;
      }
      else
      {
        v38 = pFDesc->Uniforms;
        if ( v38[22].Location < 0 || (Size = v38[22].Size, Size <= 0) )
          v32 = 0;
        else
          v32 = Size / Uniforms[22].ElementSize;
      }
    }
    else
    {
      v32 = v34 / Uniforms[22].ElementSize;
    }
  }
  v40 = 0;
  v41 = v32 >> 1;
  if ( meshCount )
  {
    v42 = v62;
    v43 = (Scaleform::Render::Primitive::MeshEntry *)pmeshes;
    do
    {
      Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetMatrix(
        psi,
        &psi->CurShader,
        0xEu,
        &v12->pMesh.pObject->VertexMatrix,
        &v43->M,
        v65,
        0,
        v40);
      if ( v42 == 1 )
      {
        batchTypea = -2139095040;
        v44 = (unsigned __int8 *)((__int64 (__fastcall *)(Scaleform::Render::ProfileViews *, const Scaleform::Render::VertexFormat **, unsigned int *))v61->Profiler->GetColor)(
                                   v61->Profiler,
                                   &v63,
                                   &batchTypea);
        p_CurShader = &psi->CurShader;
        v46 = (float)v44[2];
        v47 = _mm_cvtsi32_si128(v44[1]);
        v48 = *v44;
        LODWORD(v44) = v44[3];
        *(float *)v67 = v46 * 0.0039215689;
        *(float *)&v67[1] = _mm_cvtepi32_ps(v47).m128_f32[0] * 0.0039215689;
        v49 = _mm_cvtsi32_si128((unsigned int)v44);
        v50 = psi->CurShader.pVDesc;
        *(float *)&v67[3] = _mm_cvtepi32_ps(v49).m128_f32[0] * 0.0039215689;
        *(float *)&v67[2] = (float)v48 * 0.0039215689;
        v51 = v50->BatchUniforms;
        Offset = v51[6].Offset;
        if ( Offset < 0 && (v51 = psi->CurShader.pFDesc->BatchUniforms, Offset = v51[6].Offset, Offset < 0) )
          psi->SetUniformRaw(psi, p_CurShader, 6u, (const float *)v67, 4u, 0, 0);
        else
          psi->SetUniformRaw(psi, p_CurShader, v51[6].Array, (const float *)v67, 4u, Offset, 0);
      }
      else if ( (*(_BYTE *)v64 & 8) != 0 )
      {
        v53 = v12->M.pHandle->pHeader;
        if ( (v53->Format & 1) != 0 )
          v54 = (const Scaleform::Render::Cxform *)&v53[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v53->Format & 0xF].Offsets[0]
                                                      + 1];
        else
          v54 = &Scaleform::Render::Cxform::Identity;
        v55 = v61->Profiler->GetCxform(v61->Profiler, &VertexMatrix, v54);
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
          psi,
          &psi->CurShader,
          6u,
          (const float *)v55,
          4u,
          0,
          v40);
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
          psi,
          &psi->CurShader,
          5u,
          v55->M[1],
          4u,
          0,
          v40);
      }
      for ( i = 0; i < v41; ++i )
      {
        VertexMatrix = (Scaleform::Render::Cxform)v12->pMesh.pObject->VertexMatrix;
        TextureMatrix = Scaleform::Render::MatrixPoolImpl::HMatrix::GetTextureMatrix(&v43->M, i);
        Scaleform::Render::Matrix2x4<float>::Append((Scaleform::Render::Matrix2x4<float> *)&VertexMatrix, TextureMatrix);
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
          psi,
          &psi->CurShader,
          0x16u,
          (const float *)&VertexMatrix,
          8u,
          2 * i,
          v40);
      }
      v42 = v62;
      ++v40;
      ++v43;
      ++v12;
    }
    while ( v40 < meshCount );
  }
  return &psi->CurShader;
}

void __fastcall Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair> *this,
        const Scaleform::Render::GL::ShaderPair *sd,
        __int64 var,
        const float *v,
        unsigned int n,
        unsigned int index,
        unsigned int batch)
{
  const Scaleform::Render::GL::VertexShaderDesc *pVDesc; // r9
  __int64 v11; // rcx
  const Scaleform::Render::GL::BatchVar *BatchUniforms; // rdx
  char Offset; // si
  __int64 v14; // r8
  const Scaleform::Render::GL::FragShaderDesc *pFDesc; // rdx
  const Scaleform::Render::GL::BatchVar *v16; // rax
  char v17; // r9
  __int64 Array; // r8

  pVDesc = sd->pVDesc;
  v11 = (unsigned int)var;
  BatchUniforms = pVDesc->BatchUniforms;
  Offset = BatchUniforms[v11].Offset;
  if ( Offset < 0 )
  {
    pFDesc = sd->pFDesc;
    v16 = pFDesc->BatchUniforms;
    v17 = v16[v11].Offset;
    if ( v17 < 0 )
    {
      this->SetUniformRaw(this, sd, var, v, n, index, batch);
    }
    else
    {
      Array = (unsigned int)v16[(unsigned int)var].Array;
      this->SetUniformRaw(this, sd, Array, v, n, batch * pFDesc->Uniforms[Array].BatchSize + index + v17, 0);
    }
  }
  else
  {
    v14 = (unsigned int)BatchUniforms[(unsigned int)var].Array;
    this->SetUniformRaw(this, sd, v14, v, n, index + batch * pVDesc->Uniforms[v14].BatchSize + Offset, 0);
  }
}

void __fastcall Scaleform::Render::ShaderInterfaceBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniformRaw(
        Scaleform::Render::ShaderInterfaceBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair> *this,
        const Scaleform::Render::GL::ShaderPair *sd,
        unsigned int var,
        const float *v,
        unsigned int n,
        unsigned int index)
{
  __int64 v6; // rdi
  __int64 v10; // rbp
  const Scaleform::Render::GL::UniformVar *Uniforms; // r10
  const Scaleform::Render::GL::UniformVar *v12; // rdx

  v6 = var;
  v10 = var;
  Uniforms = sd->pVDesc->Uniforms;
  if ( Uniforms[v10].Size )
    memmove(&this->UniformData[Uniforms[v10].ShadowOffset + index * Uniforms[v10].ElementSize], v, 4i64 * n);
  v12 = sd->pFDesc->Uniforms;
  if ( v12[v10].Size )
    memmove(&this->UniformData[v12[v10].ShadowOffset + index * v12[v10].ElementSize], v, 4i64 * n);
  this->UniformSet[v6] = 1;
}

void __fastcall Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUserUniforms(
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair> *this,
        const Scaleform::Render::GL::ShaderPair *sd,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m,
        int batch)
{
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rcx
  Scaleform::Render::MatrixPoolImpl::DataHeader *v8; // rdi
  const unsigned __int8 *v9; // r14
  signed int i; // ebx
  unsigned __int8 v11; // bp
  unsigned int UniformSize; // eax
  __int64 n; // rsi
  Scaleform::Render::Texture *v14; // rax
  int Height; // ecx
  const float *v16; // r9
  int v17; // xmm1_4
  int v18[4]; // [rsp+40h] [rbp-68h] BYREF

  pHeader = m->pHandle->pHeader;
  if ( (pHeader->Format & 8) != 0 )
    v8 = &pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[3]
                + 1];
  else
    v8 = 0i64;
  v9 = Scaleform::Render::GL::Uniform::UniformFlags;
  for ( i = 0; i < 26; ++i )
  {
    v11 = *v9;
    if ( (*v9 & 1) == 0 )
    {
      UniformSize = Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::GetUniformSize(
                      this,
                      sd,
                      i);
      n = UniformSize;
      if ( UniformSize )
      {
        if ( (v11 & 2) != 0 && UniformSize <= 4 && (v14 = this->Textures[0]) != 0i64 )
        {
          Height = v14->ImgSize.Height;
          v16 = (const float *)v18;
          *(float *)v18 = (float)(1.0 / (float)(int)v14->ImgSize.Width) * *(float *)&v8->pHandle;
          *(float *)&v17 = (float)(1.0 / (float)Height) * *((float *)&v8->pHandle + 1);
          v18[2] = v8->RefCount;
          v18[1] = v17;
          v18[3] = *(_DWORD *)&v8->DataPageOffset;
        }
        else
        {
          v16 = (const float *)v8;
        }
        Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
          this,
          sd,
          (unsigned int)i,
          v16,
          n,
          0,
          batch);
        v8 = (Scaleform::Render::MatrixPoolImpl::DataHeader *)((char *)v8 + 4 * n);
      }
    }
    ++v9;
  }
}

bool __fastcall Scaleform::Render::GL::HAL::ShouldUseVAOs(Scaleform::Render::GL::HAL *this)
{
  Scaleform::Render::MeshCache *v2; // rax
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rcx
  Scaleform::Render::GL::GraphicsDevice *v5; // rcx
  bool v6; // al
  Scaleform::Render::GL::GraphicsDevice *v7; // rcx

  v2 = this->GetMeshCache(this);
  if ( ((unsigned int (__fastcall *)(Scaleform::Render::MeshCache *))v2->Scaleform::Render::CacheBase::__vftable[1].UnlockBuffers)(v2) == 1
    || (Scaleform::Render::GL::GraphicsDevice::GetCaps(this->pDevice) & 0x1000) != 0 )
  {
    return 0;
  }
  pDevice = this->pDevice;
  if ( pDevice )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *, __int64))pDevice->CheckGLVersion)(
           pDevice,
           3i64) )
    {
      return 1;
    }
  }
  else if ( !warned_5 )
  {
    warned_5 = 1;
  }
  v5 = this->pDevice;
  if ( v5 )
  {
    if ( v5->CheckExtension(v5, SF_GL_OES_vertex_array_object) )
      return 1;
    v6 = warned_6;
  }
  else
  {
    v6 = warned_6;
    if ( !warned_6 )
    {
      v6 = 1;
      warned_6 = 1;
    }
  }
  v7 = this->pDevice;
  if ( !v7 )
  {
    if ( !v6 )
    {
      warned_6 = 1;
      return 0;
    }
    return 0;
  }
  return v7->CheckExtension(v7, SF_GL_ARB_vertex_array_object);
}

char __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::ShutdownHAL(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this)
{
  char result; // al
  Scaleform::Render::VertexFormat **MappedXY16iAlphaSolid; // rbx
  __int64 v4; // rsi
  __int64 v5; // rdi
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::Render::VertexFormat *v7; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx

  result = Scaleform::Render::HAL::ShutdownHAL(this);
  if ( result )
  {
    MappedXY16iAlphaSolid = this->MappedXY16iAlphaSolid;
    v4 = 3i64;
    do
    {
      v5 = (__int64)*(MappedXY16iAlphaSolid - 3);
      if ( v5 )
      {
        v6 = *(Scaleform::RefCountVImpl **)(v5 + 16);
        if ( v6 )
          Scaleform::RefCountImpl::Release(v6);
        *(_QWORD *)(v5 + 16) = 0i64;
      }
      v7 = *MappedXY16iAlphaSolid;
      *(MappedXY16iAlphaSolid - 3) = 0i64;
      if ( v7 )
      {
        pObject = (Scaleform::RefCountVImpl *)v7->pSysFormat.pObject;
        if ( pObject )
          Scaleform::RefCountImpl::Release(pObject);
        v7->pSysFormat.pObject = 0i64;
      }
      *MappedXY16iAlphaSolid++ = 0i64;
      --v4;
    }
    while ( v4 );
    return 1;
  }
  return result;
}

char __fastcall Scaleform::Render::GL::HAL::ShutdownHAL(Scaleform::Render::GL::HAL *this)
{
  char result; // al
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rsi
  Scaleform::Render::GL::GraphicsDeviceRecorder *pObject; // rcx
  char v5; // di
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  if ( (this->HALState & 1) == 0 )
    return 1;
  pDevice = this->pDevice;
  pObject = this->pRecordingDevice.pObject;
  if ( pDevice == pObject )
  {
    pObject->End(pObject);
    this->pRecordingDevice.pObject->ExecuteRecording(
      &this->pRecordingDevice.pObject->Scaleform::Render::GraphicsDeviceRecorder,
      &this->ImmediateDevice);
  }
  Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(this->pDevice);
  this->pDevice = &this->ImmediateDevice;
  if ( Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::ShutdownHAL(this) )
  {
    this->destroyDefaultRenderBuffer(this);
    v6 = (Scaleform::RefCountVImpl *)this->pRenderBufferManager.pObject;
    if ( v6 )
      Scaleform::RefCountImpl::Release(v6);
    this->pRenderBufferManager.pObject = 0i64;
    this->pTextureManager.pObject->Reset(this->pTextureManager.pObject);
    v7 = (Scaleform::RefCountVImpl *)this->pTextureManager.pObject;
    if ( v7 )
      Scaleform::RefCountImpl::Release(v7);
    this->pTextureManager.pObject = 0i64;
    Scaleform::Render::GL::MeshCache::Reset(&this->Cache, 0);
    Scaleform::Render::GL::ShaderManager::Reset(&this->SManager, 0);
    v5 = 1;
  }
  else
  {
    v5 = 0;
  }
  Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(this->pDevice);
  result = v5;
  this->pDevice = pDevice;
  return result;
}

int __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        Scaleform::Render::PrimitiveFill *pfill,
        unsigned int *fillflags,
        unsigned int batchType)
{
  int v8; // edi
  unsigned __int8 *pObject; // rcx
  int v10; // ebp
  Scaleform::Render::ImageFormat v11; // eax
  int v12; // eax
  int v13; // eax
  int v14; // eax
  int v15; // edx
  unsigned int v16; // er8
  unsigned int v17; // esi
  int v18; // ecx
  int result; // eax

  v8 = this->Profiler->GetFillType(this->Profiler, pfill->Data.Type);
  if ( pfill->Data.Type < PrimFill_Texture )
    return Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill(
             this,
             (Scaleform::Render::PrimitiveFillType)v8,
             fillflags,
             batchType);
  pObject = (unsigned __int8 *)pfill->Data.Textures[0].pObject;
  v10 = 1;
  if ( (pObject[70] & 2) == 0 )
    v10 = pObject[68];
  v11 = (*(unsigned int (__fastcall **)(unsigned __int8 *))(*(_QWORD *)pObject + 32i64))(pObject);
  if ( v10 * (unsigned int)Scaleform::Render::ImageData::GetFormatPlaneCount(v11) <= 1
    || (pfill->Data.Textures[0].pObject->GetFormat(pfill->Data.Textures[0].pObject) < Image_VideoFormat_Start
     || pfill->Data.Textures[0].pObject->GetFormat(pfill->Data.Textures[0].pObject) > Image_Y4_U2_V2)
    && pfill->Data.Textures[0].pObject->GetFormat(pfill->Data.Textures[0].pObject) != Image_ETC1A_RGBA_4BPP )
  {
    return Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill(
             this,
             (Scaleform::Render::PrimitiveFillType)v8,
             fillflags,
             batchType);
  }
  v12 = ((__int64 (__fastcall *)(Scaleform::Render::Texture *))pfill->Data.Textures[0].pObject->GetFormat)(pfill->Data.Textures[0].pObject)
      - 66;
  if ( v12 )
  {
    v13 = v12 - 134;
    if ( v13 )
    {
      v14 = v13 - 1;
      if ( v14 )
      {
        if ( v14 == 1 )
        {
          if ( !`Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill'::`19'::warned )
            `Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill'::`19'::warned = (unsigned int)Scaleform::Render::Texture::GetPlaneCount(pfill->Data.Textures[0].pObject) != 1;
          v15 = 1310720;
        }
        else
        {
          v15 = 0x100000;
        }
      }
      else
      {
        if ( !`Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill'::`15'::warned )
          `Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill'::`15'::warned = (unsigned int)Scaleform::Render::Texture::GetPlaneCount(pfill->Data.Textures[0].pObject) != 4;
        v15 = 1179648;
      }
    }
    else
    {
      if ( !`Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill'::`11'::warned )
        `Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill'::`11'::warned = (unsigned int)Scaleform::Render::Texture::GetPlaneCount(pfill->Data.Textures[0].pObject) != 3;
      v15 = 0x100000;
    }
    goto LABEL_32;
  }
  if ( !`Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill'::`23'::warned )
    `Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill'::`23'::warned = (unsigned int)Scaleform::Render::Texture::GetPlaneCount(pfill->Data.Textures[0].pObject) != 2;
  if ( v8 < 7 )
    goto LABEL_31;
  if ( v8 <= 8 )
  {
    v15 = 16385;
    goto LABEL_32;
  }
  if ( v8 <= 10 )
  {
    v15 = 4097;
    goto LABEL_32;
  }
  if ( v8 != 11 )
  {
LABEL_31:
    v15 = 513;
LABEL_32:
    if ( v8 == 6 )
      v15 += 32;
    goto LABEL_34;
  }
  v15 = 786432;
LABEL_34:
  v16 = *fillflags;
  if ( (*(_BYTE *)fillflags & 0xC) == 12 )
  {
    v15 += 256;
  }
  else if ( (v16 & 8) != 0 )
  {
    v15 += 16;
  }
  v17 = batchType - 1;
  if ( v17 )
  {
    if ( v17 == 1 )
      v15 += 4;
  }
  else
  {
    v15 += 2;
  }
  v18 = v15 + 1;
  if ( (v16 & 1) == 0 )
    v18 = v15;
  result = v18 + 8;
  if ( (v16 & 0x10) == 0 )
    return v18;
  return result;
}

__int64 __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::StaticShaderForFill(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        Scaleform::Render::PrimitiveFillType fill,
        unsigned int *fillflags,
        unsigned int batchType)
{
  int v4; // ecx
  unsigned int v5; // er9
  unsigned int v6; // edx
  int v7; // eax
  unsigned int v8; // ecx
  __int64 result; // rax

  switch ( fill )
  {
    case PrimFill_VColor:
      v4 = 1025;
      goto LABEL_13;
    case PrimFill_VColor_EAlpha:
      v4 = 1057;
      goto LABEL_13;
    case PrimFill_Texture:
      v4 = 1;
      goto LABEL_13;
    case PrimFill_Texture_EAlpha:
      v4 = 33;
      goto LABEL_13;
    case PrimFill_Texture_VColor:
      v4 = 8193;
      goto LABEL_13;
    case PrimFill_Texture_VColor_EAlpha:
      v4 = 8225;
      goto LABEL_13;
    case PrimFill_2Texture:
      v4 = 2049;
      goto LABEL_13;
    case PrimFill_2Texture_EAlpha:
      v4 = 2081;
      goto LABEL_13;
    case PrimFill_UVTexture:
      v4 = 589824;
      goto LABEL_13;
    case PrimFill_UVTextureAlpha_VColor:
      *fillflags |= 8u;
      v4 = 557056;
      goto LABEL_17;
    default:
      *fillflags &= ~8u;
      v4 = 0x80000;
LABEL_13:
      if ( (*(_BYTE *)fillflags & 0xC) == 12 )
      {
        v4 += 256;
      }
      else if ( (*fillflags & 8) != 0 )
      {
        v4 += 16;
      }
LABEL_17:
      v5 = batchType - 1;
      if ( v5 )
      {
        if ( v5 == 1 )
          v4 += 4;
      }
      else
      {
        v4 += 2;
      }
      v6 = *fillflags;
      v7 = v4 + 1;
      if ( (*fillflags & 1) == 0 )
        v7 = v4;
      v8 = v7 + 64;
      if ( (v6 & 2) == 0 )
        v8 = v7;
      result = v8 + 8;
      if ( (v6 & 0x10) == 0 )
        return v8;
      return result;
  }
}

void __fastcall Scaleform::Render::RenderTargetData::StripDepthStencilTarget(Scaleform::Render::RenderTargetData *this)
{
  this->ReplaceDepthStencilBuffer(this, 0i64);
}

bool __fastcall Scaleform::Render::GL::HAL::Submit(Scaleform::Render::GL::HAL *this)
{
  bool result; // al
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rbx

  result = Scaleform::Render::HAL::Submit(this);
  if ( result )
  {
    if ( this->pRecordingDevice.pObject )
    {
      this->ImmediateDevice.Begin(&this->ImmediateDevice);
      this->pRecordingDevice.pObject->ExecuteRecording(
        &this->pRecordingDevice.pObject->Scaleform::Render::GraphicsDeviceRecorder,
        &this->ImmediateDevice);
      pDevice = this->pDevice;
      Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(pDevice);
      this->pDevice = &this->ImmediateDevice;
      Scaleform::Render::GL::ShaderManager::PerformShaderValidation(&this->SManager);
      Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(this->pDevice);
      result = 1;
      this->pDevice = pDevice;
    }
    else
    {
      Scaleform::Render::GL::ShaderManager::PerformShaderValidation(&this->SManager);
      return (this->ConfigFlags & 0x80000000) == 0;
    }
  }
  return result;
}

void __fastcall Scaleform::Render::GL::RenderTargetData::UpdateData(
        Scaleform::Render::RenderBuffer *buffer,
        Scaleform::Render::GL::HAL *phal,
        unsigned int fboID,
        Scaleform::Render::DepthStencilBuffer *pdsb)
{
  Scaleform::Render::GL::HALGLFramebuffer *v8; // rbx
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  Scaleform::Render::GL::HALGLFramebuffer *v10; // rax
  Scaleform::Render::GL::HALGLFramebuffer *v11; // rbx

  v8 = (Scaleform::Render::GL::HALGLFramebuffer *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    32i64);
  if ( v8 )
  {
    v9 = phal->GetGraphicsDevice(phal);
    Scaleform::Render::GL::HALGLFramebuffer::HALGLFramebuffer(v8, fboID, 0x8D40u, v9);
    v11 = v10;
  }
  else
  {
    v11 = 0i64;
  }
  Scaleform::Render::GL::RenderTargetData::UpdateData(buffer, phal, v11, pdsb);
  if ( v11 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v11);
}

void __fastcall Scaleform::Render::GL::RenderTargetData::UpdateData(
        Scaleform::Render::RenderBuffer *buffer,
        Scaleform::Render::GL::HAL *phal,
        Scaleform::Render::GL::HALGLFramebuffer *fboID,
        Scaleform::Render::DepthStencilBuffer *pdsb)
{
  Scaleform::Render::RenderTargetData *pRenderTargetData; // rbx
  Scaleform::Render::GL::RenderTargetData *v9; // rax
  Scaleform::Render::RenderTargetData *v10; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::DepthStencilBuffer *v12; // rcx

  if ( buffer )
  {
    pRenderTargetData = buffer->pRenderTargetData;
    if ( pRenderTargetData )
    {
      if ( fboID )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)fboID);
      pObject = pRenderTargetData[1].pDepthStencilBuffer.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      pRenderTargetData[1].pDepthStencilBuffer.pObject = (Scaleform::Render::DepthStencilBuffer *)fboID;
      if ( pdsb )
        pdsb->AddRef(pdsb);
      v12 = pRenderTargetData->pDepthStencilBuffer.pObject;
      if ( v12 )
        v12->Release(v12);
      pRenderTargetData->pDepthStencilBuffer.pObject = pdsb;
    }
    else
    {
      v9 = (Scaleform::Render::GL::RenderTargetData *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                        Scaleform::Memory::pGlobalHeap,
                                                        48i64,
                                                        0i64);
      if ( v9 )
      {
        Scaleform::Render::GL::RenderTargetData::RenderTargetData(v9, buffer, phal, fboID, pdsb);
        buffer->pRenderTargetData = v10;
      }
      else
      {
        buffer->pRenderTargetData = 0i64;
      }
    }
  }
}

bool __fastcall Scaleform::Render::GL::VertexBuilderVET(unsigned int attr, unsigned int *vet, bool *norm)
{
  bool result; // al

  switch ( attr & 0xF0 )
  {
    case 0x10u:
      *vet = 5121;
      result = 1;
      *norm = 1;
      break;
    case 0x20u:
      *vet = 5121;
      result = 1;
      *norm = 0;
      break;
    case 0x30u:
      *vet = 5122;
      result = 1;
      *norm = 0;
      break;
    case 0x40u:
      *vet = 5123;
      result = 1;
      *norm = 0;
      break;
    case 0x50u:
      *vet = 5125;
      result = 1;
      *norm = 0;
      break;
    case 0x60u:
      *vet = 5126;
      result = 1;
      *norm = 0;
      break;
    case 0x70u:
    case 0x80u:
      goto $LN10_154;
    default:
      *vet = 5126;
      *norm = 0;
$LN10_154:
      result = 0;
      break;
  }
  return result;
}

void __fastcall Scaleform::Render::GL::HAL::applyBlendModeEnableImpl(Scaleform::Render::GL::HAL *this, bool enabled)
{
  Scaleform::Render::GL::HAL_vtbl *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  if ( enabled )
  {
    v3 = ((__int64 (*)(void))v2->GetGraphicsDevice)();
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v3 + 392i64))(v3, 3042i64);
  }
  else
  {
    v4 = ((__int64 (*)(void))v2->GetGraphicsDevice)();
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v4 + 352i64))(v4, 3042i64);
  }
}

void __fastcall Scaleform::Render::GL::HAL::applyBlendModeImpl(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::BlendMode mode,
        __int64 sourceAc,
        __int64 forceAc)
{
  unsigned __int64 v5; // rdx
  __int64 v6; // rsi
  unsigned int v7; // ebx
  Scaleform::Render::GL::GraphicsDevice *v8; // rax
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  __int64 v10; // rax
  Scaleform::Render::GL::GraphicsDevice *v11; // rax

  v5 = 3i64 * (int)mode;
  v6 = 8 * v5;
  v7 = BlendFactors[Scaleform::Render::HAL::BlendModeTable[v5 / 3].SourceColor];
  if ( (_BYTE)sourceAc && v7 == 770 )
    v7 = 1;
  if ( (this->VP.Flags & 2) != 0 || (_BYTE)forceAc )
  {
    v10 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, unsigned __int64, __int64, __int64))this->GetGraphicsDevice)(
            this,
            v5,
            sourceAc,
            forceAc);
    (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, const unsigned int))(*(_QWORD *)v10 + 152i64))(
      v10,
      v7,
      BlendFactors[*(int *)((char *)&Scaleform::Render::HAL::BlendModeTable[0].DestColor + v6)],
      BlendFactors[*(int *)((char *)&Scaleform::Render::HAL::BlendModeTable[0].SourceAlpha + v6)],
      BlendFactors[*(int *)((char *)&Scaleform::Render::HAL::BlendModeTable[0].DestAlpha + v6)]);
    v11 = this->GetGraphicsDevice(this);
    v11->glBlendEquationSeparate(
      v11,
      BlendOps[*(int *)((char *)&Scaleform::Render::HAL::BlendModeTable[0].Operator + v6)],
      BlendOps[*(int *)((char *)&Scaleform::Render::HAL::BlendModeTable[0].AlphaOperator + v6)]);
  }
  else
  {
    v8 = this->GetGraphicsDevice(this);
    v8->glBlendFunc(v8, v7, BlendFactors[*(int *)((char *)&Scaleform::Render::HAL::BlendModeTable[0].DestColor + v6)]);
    v9 = this->GetGraphicsDevice(this);
    v9->glBlendEquation(v9, BlendOps[*(int *)((char *)&Scaleform::Render::HAL::BlendModeTable[0].Operator + v6)]);
  }
}

void __fastcall Scaleform::Render::GL::HAL::applyDepthStencilMode(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::HAL::DepthStencilMode mode,
        unsigned int stencilRef)
{
  __int64 v4; // r15
  Scaleform::Render::RenderEvents *v6; // r14
  Scaleform::Render::HAL::HALDepthStencilDescriptor *v7; // rdi
  Scaleform::Render::HAL::EnableIgnoreValue ColorWriteEnable; // eax
  Scaleform::Render::HAL::HALDepthStencilDescriptor *v9; // rsi
  bool v10; // zf
  Scaleform::Render::GL::HAL_vtbl *v11; // rax
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  Scaleform::Render::HAL::EnableIgnoreValue StencilEnable; // eax
  Scaleform::Render::GL::HAL_vtbl *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rax
  Scaleform::Render::GL::GraphicsDevice *v19; // rax
  Scaleform::Render::HAL::StencilOp StencilFailOp; // eax
  Scaleform::Render::HAL::StencilOp StencilPassOp; // eax
  Scaleform::Render::HAL::StencilOp StencilZFailOp; // eax
  Scaleform::Render::GL::GraphicsDevice *v23; // rax
  int v24; // eax
  int v25; // edx
  Scaleform::Render::GL::GraphicsDevice *v26; // rax
  Scaleform::Render::GL::GraphicsDevice *v27; // rax
  Scaleform::Render::HAL::DepthStencilFunction DepthFunction; // eax
  Scaleform::Render::GL::GraphicsDevice *v29; // rax
  Scaleform::Render::GL::GraphicsDevice *v30; // rax
  __int64 v31; // rdx
  char v32; // [rsp+20h] [rbp-28h]

  v4 = mode;
  v6 = this->GetEvents(this);
  v6->Begin(v6, Event_ApplyDepthStencil, "HAL::applyDepthStencilMode");
  v7 = &Scaleform::Render::HAL::DepthStencilModeTable[v4];
  ColorWriteEnable = v7->ColorWriteEnable;
  v9 = &Scaleform::Render::HAL::DepthStencilModeTable[this->CurrentDepthStencilState];
  if ( v9->ColorWriteEnable != ColorWriteEnable )
  {
    v10 = ColorWriteEnable == EnableIgnore_Off;
    v11 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    if ( v10 )
    {
      v12 = (__int64)v11->GetGraphicsDevice(this);
      v32 = 0;
      v13 = 0i64;
      v14 = 0i64;
    }
    else
    {
      v12 = (__int64)v11->GetGraphicsDevice(this);
      v32 = 1;
      v13 = 1i64;
      v14 = 1i64;
    }
    (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v12 + 208i64))(v12, v14, v13);
  }
  StencilEnable = v7->StencilEnable;
  if ( v9->StencilEnable != StencilEnable )
  {
    v10 = StencilEnable == EnableIgnore_Off;
    v16 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    if ( v10 )
    {
      v18 = (__int64)v16->GetGraphicsDevice(this);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 352i64))(v18, 2960i64);
    }
    else
    {
      v17 = (__int64)v16->GetGraphicsDevice(this);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v17 + 392i64))(v17, 2960i64);
    }
  }
  if ( v7->StencilEnable )
  {
    if ( (v19 = this->GetGraphicsDevice(this),
          ((void (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *, _QWORD, _QWORD, __int64, char))v19->glStencilFunc)(
            v19,
            DepthStencilCompareFunctions[v7->StencilFunction],
            stencilRef,
            255i64,
            v32),
          StencilFailOp = v7->StencilFailOp,
          v9->StencilFailOp != StencilFailOp)
      && StencilFailOp
      || (StencilPassOp = v7->StencilPassOp, v9->StencilPassOp != StencilPassOp) && StencilPassOp
      || (StencilZFailOp = v7->StencilZFailOp, v9->StencilZFailOp != StencilZFailOp) && StencilZFailOp )
    {
      v23 = this->GetGraphicsDevice(this);
      v23->glStencilOp(
        v23,
        StencilOps[v7->StencilFailOp],
        StencilOps[v7->StencilZFailOp],
        StencilOps[v7->StencilPassOp]);
    }
  }
  v24 = 0;
  if ( v9->DepthTestEnable || (v25 = 0, v9->DepthWriteEnable) )
    v25 = 1;
  if ( v7->DepthTestEnable || v7->DepthWriteEnable )
    v24 = 1;
  if ( v25 != v24 )
  {
    if ( v7->DepthTestEnable || v7->DepthWriteEnable )
    {
      v27 = this->GetGraphicsDevice(this);
      v27->glEnable(v27, 2929u);
    }
    else
    {
      v26 = this->GetGraphicsDevice(this);
      v26->glDisable(v26, 2929u);
    }
    if ( v7->DepthTestEnable )
    {
      DepthFunction = v7->DepthFunction;
      if ( v9->DepthFunction != DepthFunction )
      {
        if ( DepthFunction )
        {
          v29 = this->GetGraphicsDevice(this);
          v29->glDepthFunc(v29, DepthStencilCompareFunctions[v7->DepthFunction]);
        }
      }
    }
  }
  if ( v9->DepthWriteEnable != v7->DepthWriteEnable )
  {
    v30 = this->GetGraphicsDevice(this);
    LOBYTE(v31) = v7->DepthWriteEnable != EnableIgnore_Off;
    v30->glDepthMask(v30, v31);
  }
  this->CurrentDepthStencilState = v4;
  v6->End(v6, Event_ApplyDepthStencil);
}

void __fastcall Scaleform::Render::GL::HAL::applyRasterModeImpl(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::HAL::RasterModeType mode)
{
  __int32 v2; // edx
  unsigned int v3; // ebx
  Scaleform::Render::GL::GraphicsDevice *v4; // rax

  v2 = mode - 1;
  if ( v2 )
  {
    if ( v2 == 1 )
      v3 = 6912;
    else
      v3 = 6914;
  }
  else
  {
    v3 = 6913;
  }
  v4 = this->GetGraphicsDevice(this);
  v4->glPolygonMode(v4, 1032u, v3);
}

void __fastcall Scaleform::Render::GL::HAL::beginDisplay(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::BeginDisplayData *data)
{
  Scaleform::Render::GL::GraphicsDevice *v4; // rax

  v4 = this->GetGraphicsDevice(this);
  v4->glDisable(v4, 2960u);
  Scaleform::Render::HAL::beginDisplay(this, data);
}

void __fastcall Scaleform::Render::GL::RenderEvents::beginImpl(
        Scaleform::Render::GL::RenderEvents *this,
        const char *eventName)
{
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rcx
  Scaleform::Render::GL::GraphicsDevice *v5; // rax
  Scaleform::Render::GL::GraphicsDevice *v6; // rcx
  Scaleform::Render::GL::GraphicsDevice *v7; // rax

  pDevice = this->pHAL->pDevice;
  if ( pDevice )
  {
    if ( pDevice->CheckExtension(pDevice, SF_GL_EXT_debug_marker) )
    {
      v5 = this->pHAL->GetGraphicsDevice(this->pHAL);
      v5->glPushGroupMarker(v5, 0, eventName);
    }
  }
  else if ( !warned_6 )
  {
    warned_6 = 1;
  }
  v6 = this->pHAL->pDevice;
  if ( v6 )
  {
    if ( v6->CheckExtension(v6, SF_GL_GREMEDY_string_marker) )
    {
      v7 = this->pHAL->GetGraphicsDevice(this->pHAL);
      v7->glStringMarker(v7, 0, eventName);
    }
  }
  else if ( !warned_6 )
  {
    warned_6 = 1;
  }
}

bool __fastcall Scaleform::Render::GL::HAL::checkDepthStencilBufferCaps(Scaleform::Render::GL::HAL *this)
{
  Scaleform::Render::HAL::RenderTargetEntry *v2; // rbx
  Scaleform::Render::GL::GraphicsDevice *v3; // rax
  Scaleform::RefCountVImpl *BoundFramebuffer; // rax
  Scaleform::Render::GL::HALGLFramebuffer *v5; // rsi
  Scaleform::Render::GL::HAL_vtbl *v6; // rdx
  __int64 v7; // rax
  int v8; // ebp
  const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *v9; // rax
  const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *v10; // r14
  Scaleform::Render::GL::GraphicsDevice *v11; // rax
  Scaleform::Render::GL::GraphicsDevice *v12; // rax
  int v13; // eax
  Scaleform::Render::GL::HAL_vtbl *v14; // rax
  __int64 v15; // rax
  const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *Attachment; // rax
  const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *v17; // r14
  Scaleform::Render::GL::GraphicsDevice *v18; // rax
  Scaleform::Render::GL::GraphicsDevice *v19; // rax
  int v21; // [rsp+60h] [rbp+8h] BYREF
  int v22; // [rsp+68h] [rbp+10h] BYREF
  int v23; // [rsp+70h] [rbp+18h] BYREF
  int v24; // [rsp+78h] [rbp+20h] BYREF

  v2 = &this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1];
  if ( v2->StencilChecked )
    return v2->StencilAvailable || v2->DepthBufferAvailable;
  v3 = (Scaleform::Render::GL::GraphicsDevice *)((__int64 (*)(void))this->GetGraphicsDevice)();
  BoundFramebuffer = (Scaleform::RefCountVImpl *)Scaleform::Render::GL::GraphicsDevice::GetBoundFramebuffer(v3, 0x8D40u);
  v5 = (Scaleform::Render::GL::HALGLFramebuffer *)BoundFramebuffer;
  if ( BoundFramebuffer )
  {
    Scaleform::Render::RenderBuffer::AddRef(BoundFramebuffer);
    v6 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    v21 = 0;
    v7 = (__int64)v6->GetGraphicsDevice(this);
    (*(void (__fastcall **)(__int64, __int64, __int64, __int64, int *))(*(_QWORD *)v7 + 536i64))(
      v7,
      36160i64,
      36128i64,
      36048i64,
      &v23);
    v8 = 8;
    if ( !v23 )
    {
      v21 = 0;
LABEL_11:
      v14 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      v22 = 0;
      v15 = (__int64)v14->GetGraphicsDevice(this);
      (*(void (__fastcall **)(__int64, __int64, __int64, __int64, int *))(*(_QWORD *)v15 + 536i64))(
        v15,
        36160i64,
        36096i64,
        36048i64,
        &v24);
      if ( !v24 )
      {
        v8 = 0;
        goto LABEL_17;
      }
      Attachment = Scaleform::Render::GL::HALGLFramebuffer::GetAttachment(v5, 0x8D00u);
      v17 = Attachment;
      if ( Attachment )
      {
        if ( !Attachment->RenderBuffer.pObject )
        {
LABEL_17:
          v2->DepthBufferAvailable = v8 >= 1;
          goto LABEL_19;
        }
        v18 = this->GetGraphicsDevice(this);
        v18->glBindRenderbuffer(v18, 36161u, v17->RenderBuffer.pObject);
        v19 = this->GetGraphicsDevice(this);
        v19->glGetRenderbufferParameteriv(v19, 36161u, 36180u, &v22);
      }
      v8 = v22;
      goto LABEL_17;
    }
    v9 = Scaleform::Render::GL::HALGLFramebuffer::GetAttachment(v5, 0x8D20u);
    v10 = v9;
    if ( v9 )
    {
      if ( !v9->RenderBuffer.pObject )
      {
        v13 = 8;
        v21 = 8;
LABEL_8:
        v2->StencilAvailable = 1;
        v2->MultiBitStencil = v13 > 1;
        goto LABEL_11;
      }
      v11 = this->GetGraphicsDevice(this);
      v11->glBindRenderbuffer(v11, 36161u, v10->RenderBuffer.pObject);
      v12 = this->GetGraphicsDevice(this);
      v12->glGetRenderbufferParameteriv(v12, 36161u, 36181u, &v21);
    }
    v13 = v21;
    if ( v21 <= 0 )
      goto LABEL_11;
    goto LABEL_8;
  }
  *(_WORD *)&v2->StencilAvailable = 257;
  v2->DepthBufferAvailable = 1;
LABEL_19:
  v2->StencilChecked = 1;
  if ( v5 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v5);
  return v2->StencilAvailable || v2->DepthBufferAvailable;
}

Scaleform::Render::DepthStencilBuffer *__fastcall Scaleform::Render::GL::HAL::createCompatibleDepthStencil(
        Scaleform::Render::GL::HAL *this,
        const Scaleform::Render::Size<unsigned long> *size,
        _BOOL8 temporary)
{
  bool v4; // bp
  Scaleform::Render::DepthStencilBuffer *v6; // rsi
  Scaleform::Render::DepthStencilSurface_vtbl *v7; // rdi
  Scaleform::Render::GL::GraphicsDevice *v8; // rax
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  Scaleform::Render::GL::GraphicsDevice *v10; // rax
  unsigned int v11; // edi
  _BOOL8 v12; // r8
  Scaleform::Render::DepthStencilSurface_vtbl *v13; // rdi
  Scaleform::Render::GL::GraphicsDevice *v14; // rax
  Scaleform::Render::GL::GraphicsDevice *v15; // rax
  Scaleform::Render::GL::GraphicsDevice *v16; // rax
  Scaleform::Render::GL::GraphicsDevice *v17; // rax

  v4 = temporary;
  if ( temporary && this->DeterminedDepthStencilFormat )
    LOBYTE(temporary) = 1;
  else
    temporary = 0i64;
  v6 = this->pRenderBufferManager.pObject->CreateDepthStencilBuffer(this->pRenderBufferManager.pObject, size, temporary);
  v7 = v6->GetSurface(v6)[1].__vftable;
  v8 = this->GetGraphicsDevice(this);
  v8->glFramebufferRenderbuffer(v8, 36160u, 36128u, 36161u, (Scaleform::Render::GL::HALGLRenderbuffer *)v7);
  if ( Scaleform::Render::GL::DepthStencilSurface::CurrentFormatHasDepth() )
  {
    v9 = this->GetGraphicsDevice(this);
    v9->glFramebufferRenderbuffer(v9, 36160u, 36096u, 36161u, (Scaleform::Render::GL::HALGLRenderbuffer *)v7);
  }
  v10 = this->GetGraphicsDevice(this);
  v11 = v10->glCheckFramebufferStatus(v10, 36160u);
  if ( v11 == 36053 )
  {
LABEL_17:
    this->DeterminedDepthStencilFormat = 1;
  }
  else
  {
    while ( !this->DeterminedDepthStencilFormat && Scaleform::Render::GL::DepthStencilSurface::SetNextGLFormatIndex() )
    {
      if ( v4 && this->DeterminedDepthStencilFormat )
        LOBYTE(v12) = 1;
      else
        v12 = 0i64;
      v6 = this->pRenderBufferManager.pObject->CreateDepthStencilBuffer(this->pRenderBufferManager.pObject, size, v12);
      v13 = v6->GetSurface(v6)[1].__vftable;
      v14 = this->GetGraphicsDevice(this);
      v14->glFramebufferRenderbuffer(v14, 36160u, 36128u, 36161u, (Scaleform::Render::GL::HALGLRenderbuffer *)v13);
      Scaleform::Render::GL::DepthStencilSurface::CurrentFormatHasDepth();
      v15 = this->GetGraphicsDevice(this);
      ((void (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *, __int64, __int64))v15->glFramebufferRenderbuffer)(
        v15,
        36160i64,
        36096i64);
      v16 = this->GetGraphicsDevice(this);
      if ( v16->glCheckFramebufferStatus(v16, 36160u) == 36053 )
        goto LABEL_17;
    }
    v17 = this->GetGraphicsDevice(this);
    v17->glFramebufferRenderbuffer(v17, 36160u, 36128u, 36161u, 0i64);
    v6 = 0i64;
  }
  if ( !this->DeterminedDepthStencilFormat )
    Scaleform::Render::GL::DepthStencilSurface::ResetGLFormatIndex();
  return v6;
}

char __fastcall Scaleform::Render::GL::HAL::createDefaultRenderBuffer(Scaleform::Render::GL::HAL *this)
{
  Scaleform::Render::Size<unsigned long> *FboInfo; // rax
  unsigned int Width; // er14
  unsigned int Height; // er15
  Scaleform::Render::RenderTarget *v5; // rax
  Scaleform::Render::RenderTarget *v6; // rbx
  Scaleform::Render::DepthStencilBuffer *v7; // rax
  Scaleform::Render::DepthStencilBuffer *v8; // rdi
  _BOOL8 v9; // r8
  int v11; // [rsp+30h] [rbp-D0h] BYREF
  int v12; // [rsp+34h] [rbp-CCh] BYREF
  Scaleform::Render::GL::HALGLFramebuffer *currentFBO; // [rsp+38h] [rbp-C8h] BYREF
  Scaleform::Render::Size<unsigned long> result; // [rsp+40h] [rbp-C0h] BYREF
  __int64 v15; // [rsp+50h] [rbp-B0h]
  Scaleform::Render::MatrixState v16; // [rsp+60h] [rbp-A0h] BYREF
  __int128 v17; // [rsp+320h] [rbp+220h]
  __int64 v18; // [rsp+330h] [rbp+230h]
  __int64 v19; // [rsp+338h] [rbp+238h]
  int v20; // [rsp+340h] [rbp+240h]
  int v21; // [rsp+344h] [rbp+244h]
  __int64 v22; // [rsp+348h] [rbp+248h]
  __int64 v23; // [rsp+350h] [rbp+250h]
  int v24; // [rsp+358h] [rbp+258h]
  Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1> > v25; // [rsp+368h] [rbp+268h] BYREF

  v15 = 0i64;
  Scaleform::Render::MatrixState::MatrixState(&v16);
  v18 = 0i64;
  v17 = 0i64;
  v19 = 0i64;
  v21 = 1;
  v20 = 1;
  v23 = 0i64;
  v22 = 0i64;
  v24 = 0;
  memset(&v25, 0, sizeof(v25));
  currentFBO = 0i64;
  FboInfo = Scaleform::Render::GL::HAL::getFboInfo(this, &result, 0i64, &currentFBO, 1);
  v11 = 72;
  Width = FboInfo->Width;
  Height = FboInfo->Height;
  v5 = (Scaleform::Render::RenderTarget *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                            Scaleform::Memory::pGlobalHeap,
                                            this,
                                            64i64,
                                            &v11);
  v6 = v5;
  if ( v5 )
  {
    *(_QWORD *)&v5->RefCount = 0i64;
    v5->__vftable = (Scaleform::Render::RenderTarget_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v5->RefCount = 1;
    v5->Type = RBuffer_Default;
    v5->pManager = 0i64;
    v5->pRenderTargetData = 0i64;
    v5->BufferSize.Width = Width;
    v5->BufferSize.Height = Height;
    v5->__vftable = (Scaleform::Render::RenderTarget_vtbl *)&Scaleform::Render::RenderTarget::`vftable';
    *(_QWORD *)&v5->ViewRect.x1 = 0i64;
    v5->ViewRect.x2 = Width;
    v5->ViewRect.y2 = Height;
  }
  else
  {
    v6 = 0i64;
  }
  v12 = 72;
  v7 = (Scaleform::Render::DepthStencilBuffer *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                  Scaleform::Memory::pGlobalHeap,
                                                  this,
                                                  56i64,
                                                  &v12);
  v8 = v7;
  if ( v7 )
  {
    *(_QWORD *)&v7->RefCount = 0i64;
    v7->__vftable = (Scaleform::Render::DepthStencilBuffer_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    v7->RefCount = 1;
    v7->Type = RBuffer_UserDepthStencil;
    v7->pManager = 0i64;
    v7->pRenderTargetData = 0i64;
    v7->BufferSize.Width = Width;
    v7->BufferSize.Height = Height;
    v7->__vftable = (Scaleform::Render::DepthStencilBuffer_vtbl *)&Scaleform::Render::DepthStencilBuffer::`vftable';
    v7->pSurface.pObject = 0i64;
  }
  else
  {
    v8 = 0i64;
  }
  Scaleform::Render::GL::RenderTargetData::UpdateData(v6, this, currentFBO, v8);
  LOBYTE(v9) = 1;
  this->SetRenderTarget(this, v6, v9);
  if ( v8 )
    v8->Release(v8);
  if ( v6 )
    v6->Release(v6);
  Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::~ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>(&v25);
  if ( v16.S3DImpl.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v16.S3DImpl.pObject);
  Scaleform::RefCountImplCore::~RefCountImplCore(&v16);
  if ( v15 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
  return 1;
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawBlendPrimitive(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::BlendPrimitive *prim,
        Scaleform::Render::Texture *blendSource,
        Scaleform::Render::Texture *blendDest,
        Scaleform::Render::Texture *blendAlpha)
{
  Scaleform::Render::RenderTarget *pObject; // rdx
  int v10; // ecx
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v11; // rax
  __int64 v12; // rax
  Scaleform::Render::Matrix2x4<float> *v13; // rax
  Scaleform::Render::MatrixPoolImpl::HMatrix *Data; // rdx
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rcx
  Scaleform::Render::Cxform *v16; // rax
  __int64 v17; // rcx
  __int128 v18; // xmm1
  float *v19; // rax
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rax
  Scaleform::Render::MatrixPoolImpl::DataHeader *v21; // rdx
  __int64 v22; // rcx
  float *v23; // rdi
  __m128 v24; // xmm5
  __m128 v25; // xmm4
  __m128 v26; // xmm2
  __m128 v27; // xmm3
  __m128 v28; // xmm2
  __m128 v29; // xmm3
  const Scaleform::Render::HAL::RenderTargetEntry *v30; // rdx
  float v31; // xmm1_4
  int v32[2]; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Texture *ptextures[3]; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::Render::Matrix2x4<float> mvp; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::Render::Cxform v35; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::Render::HAL::RenderTargetEntry v36; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::Matrix2x4<float> texgen; // [rsp+3E0h] [rbp+2E0h] BYREF
  __m128 v38; // [rsp+400h] [rbp+300h]
  __m128 v39; // [rsp+410h] [rbp+310h]
  __m128 v40; // [rsp+420h] [rbp+320h]
  __m128 v41; // [rsp+430h] [rbp+330h]

  pObject = this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1].pRenderTarget.pObject;
  v10 = pObject->ViewRect.y2 - pObject->ViewRect.y1;
  v32[0] = pObject->ViewRect.x2 - pObject->ViewRect.x1;
  v11 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v32[1] = v10;
  v12 = (__int64)v11->GetMatrices(this);
  v13 = (Scaleform::Render::Matrix2x4<float> *)(*(__int64 (__fastcall **)(__int64, int *))(*(_QWORD *)v12 + 8i64))(
                                                 v12,
                                                 v32);
  Data = prim->PrimitiveArea.Data.Data;
  mvp = *v13;
  pHeader = Data->pHandle->pHeader;
  if ( (pHeader->Format & 1) != 0 )
    v16 = (Scaleform::Render::Cxform *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[0]
                                              + 1];
  else
    v16 = &Scaleform::Render::Cxform::Identity;
  v17 = 3i64;
  *(_OWORD *)&v35.M[0][0] = *(_OWORD *)&v16->M[0][0];
  v18 = *(_OWORD *)&v16->M[1][0];
  v19 = &texgen.M[0][2];
  *(_OWORD *)&v35.M[1][0] = v18;
  do
  {
    *((_QWORD *)v19 - 1) = 1065353216i64;
    *(_QWORD *)v19 = 0i64;
    v19[2] = 0.0;
    *(_QWORD *)(v19 + 3) = 1065353216i64;
    v19[5] = 0.0;
    v19 += 8;
    --v17;
  }
  while ( v17 );
  pHandle = Data->pHandle;
  ptextures[0] = blendSource;
  ptextures[1] = blendDest;
  v21 = pHandle->pHeader;
  v22 = pHandle->pHeader->Format & 0xF;
  LODWORD(pHandle) = blendSource->ImgSize.Width;
  v23 = (float *)&v21[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v22].Offsets[4] + 1];
  ptextures[2] = blendAlpha;
  v24 = (__m128)*(unsigned int *)v23;
  v25 = (__m128)*((unsigned int *)v23 + 5);
  v26 = v24;
  v27 = v25;
  v26.m128_f32[0] = v24.m128_f32[0] / (float)(int)pHandle;
  v27.m128_f32[0] = v25.m128_f32[0] / (float)(int)blendSource->ImgSize.Height;
  *(__m128 *)&texgen.M[0][0] = _mm_mul_ps(*(__m128 *)&texgen.M[0][0], _mm_shuffle_ps(v26, v26, 0));
  *(__m128 *)&texgen.M[1][0] = _mm_mul_ps(*(__m128 *)&texgen.M[1][0], _mm_shuffle_ps(v27, v27, 0));
  if ( blendAlpha )
  {
    v28 = v24;
    v29 = v25;
    v28.m128_f32[0] = v24.m128_f32[0] / (float)(int)blendAlpha->ImgSize.Width;
    v29.m128_f32[0] = v25.m128_f32[0] / (float)(int)blendAlpha->ImgSize.Height;
    v40 = _mm_mul_ps(v40, _mm_shuffle_ps(v28, v28, 0));
    v41 = _mm_mul_ps(v41, _mm_shuffle_ps(v29, v29, 0));
  }
  if ( blendDest )
  {
    v30 = &this->RenderTargetStack.Data.Data[this->RenderTargetStack.Data.Size - 1];
    v24.m128_f32[0] = v24.m128_f32[0] / (float)(int)blendDest->ImgSize.Width;
    v25.m128_f32[0] = v25.m128_f32[0] / (float)(int)blendDest->ImgSize.Height;
    v38 = _mm_mul_ps(v38, _mm_shuffle_ps(v24, v24, 0));
    v39 = _mm_mul_ps(v39, _mm_shuffle_ps(v25, v25, 0));
    Scaleform::Render::HAL::RenderTargetEntry::RenderTargetEntry(&v36, v30);
    v31 = v39.m128_f32[3] + (float)((float)(v23[7] - (float)v36.OldViewRect.y1) / (float)(int)blendDest->ImgSize.Height);
    v38.m128_f32[3] = v38.m128_f32[3]
                    + (float)((float)(v23[3] - (float)v36.OldViewRect.x1) / (float)(int)blendDest->ImgSize.Width);
    v39.m128_f32[3] = v31;
    Scaleform::ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>::~ArrayDataBase<Scaleform::Render::HAL::MaskStackEntry,Scaleform::AllocatorLH<Scaleform::Render::HAL::MaskStackEntry,2>,Scaleform::ArrayConstPolicy<0,8,1>>(&v36.MaskStack.Data);
    if ( v36.OldMatrixState.S3DImpl.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v36.OldMatrixState.S3DImpl.pObject);
    Scaleform::RefCountImplCore::~RefCountImplCore(&v36.OldMatrixState);
    if ( v36.pRenderTarget.pObject )
      v36.pRenderTarget.pObject->Release(v36.pRenderTarget.pObject);
  }
  Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetBlendFill(
    &this->SManager,
    prim->BlendModeValue,
    &mvp,
    &v35,
    ptextures,
    &texgen,
    this->MappedXY16iAlphaTexture[1],
    &this->ShaderData);
  this->drawScreenQuad(this);
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawCachedFilter(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::FilterPrimitive *primitive)
{
  Scaleform::Render::FilterPrimitive *v2; // r14
  int v4; // ecx
  unsigned int v5; // er9
  __int64 v6; // rdx
  Scaleform::Render::Texture *v7; // r12
  float x1; // xmm3_4
  float v9; // xmm1_4
  Scaleform::Render::BlendMode LastBlendModeOrDefault; // eax
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rdx
  const Scaleform::Render::Cxform *v12; // r8
  unsigned __int64 Size; // rax
  Scaleform::Render::HAL::RenderTargetEntry *Data; // rdx
  __int64 MaskStackTop; // r8
  __int64 v16; // rdx
  bool v17; // bl
  Scaleform::Render::BlendMode v18; // eax
  Scaleform::Render::RenderSync *v19; // rax
  Scaleform::Render::ProfileViews *v20; // rax
  Scaleform::Render::FilterSet *pObject; // rbx
  int FilterCount; // eax
  Scaleform::Render::Filter *Filter; // r15
  unsigned int v24; // er13
  Scaleform::Render::RenderTarget *v25; // rbx
  int v26; // ecx
  int v27; // eax
  __int64 v28; // rbx
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v29; // rax
  Scaleform::Render::RenderTarget *v30; // rbx
  __int64 v31; // rbx
  __int64 *v32; // rdi
  __int64 v33; // rsi
  char *v34; // rdi
  __int64 v35; // rcx
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v36; // rax
  Scaleform::Render::MatrixState *v37; // rcx
  int *v38; // rax
  __int64 v39; // rbx
  __int64 *v40; // rdi
  __int64 v41; // rsi
  char *v42; // rdi
  __int64 v43; // rcx
  Scaleform::Render::ImageFillMode fm; // [rsp+50h] [rbp-B0h] BYREF
  int v45; // [rsp+58h] [rbp-A8h] BYREF
  int v46; // [rsp+5Ch] [rbp-A4h]
  int v47; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::Render::RenderTarget *results; // [rsp+68h] [rbp-98h] BYREF
  int v49[2]; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::Render::RenderTarget *v50; // [rsp+78h] [rbp-88h] BYREF
  __int64 v51; // [rsp+80h] [rbp-80h] BYREF
  int v52; // [rsp+88h] [rbp-78h]
  int v53; // [rsp+8Ch] [rbp-74h]
  Scaleform::Render::RenderTarget *v54; // [rsp+98h] [rbp-68h] BYREF
  __int64 v55; // [rsp+A0h] [rbp-60h]
  float v[4]; // [rsp+B0h] [rbp-50h] BYREF
  __int128 v57; // [rsp+C0h] [rbp-40h]
  int v58[8]; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::Render::Matrix2x4<float> result; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::Render::RenderTarget *v60; // [rsp+110h] [rbp+10h] BYREF
  Scaleform::Render::RenderTarget *v61; // [rsp+118h] [rbp+18h]
  __int64 v62; // [rsp+120h] [rbp+20h]
  char v63; // [rsp+128h] [rbp+28h] BYREF
  unsigned int passes[120]; // [rsp+130h] [rbp+30h] BYREF

  v2 = primitive;
  LOBYTE(primitive) = 1;
  this->applyBlendModeEnable(this, (bool)primitive);
  if ( v2->Caching != Cache_Glyph )
  {
    if ( v2->Caching != Cache_Count )
      return;
    v4 = 260;
    if ( (this->FillFlags & 1) == 0 )
      v4 = 259;
    v5 = v4 + 64;
    if ( (this->FillFlags & 2) == 0 )
      v5 = v4;
    v6 = v5 + 8;
    if ( (this->FillFlags & 0x10) == 0 )
      v6 = v5;
    this->ShaderData.SetStaticShader(
      &this->ShaderData,
      (Scaleform::Render::GL::ShaderDesc::ShaderType)v6,
      this->MappedXY16iAlphaTexture[1]);
    if ( !this->ShaderData.PrimitiveOpen )
    {
      this->ShaderData.PrimitiveOpen = 1;
      this->ShaderData.CurrentPrimitiveMeshCount = 1;
      *(_QWORD *)this->ShaderData.UniformSet = 0i64;
      *(_QWORD *)&this->ShaderData.UniformSet[8] = 0i64;
      *(_QWORD *)&this->ShaderData.UniformSet[16] = 0i64;
      *(_WORD *)&this->ShaderData.UniformSet[24] = 0;
      this->ShaderData.Textures[0] = 0i64;
      this->ShaderData.Textures[1] = 0i64;
      this->ShaderData.Textures[2] = 0i64;
      this->ShaderData.Textures[3] = 0i64;
    }
    Scaleform::Render::CacheablePrimitive::GetCacheResults(v2, &results, 1u);
    v7 = results->GetTexture(results);
    Scaleform::Render::operator*(
      &result,
      &this->Matrices.pObject->UserView,
      (const Scaleform::Render::Matrix2x4<float> *)&v2->PrimitiveArea.Data.Data->pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v2->PrimitiveArea.Data.Data->pHandle->pHeader->Format & 0xF].Offsets[4]
                                                                                                + 1]);
    *(_OWORD *)v = _xmm;
    v57 = _xmm;
    x1 = (float)results->ViewRect.x1;
    *((float *)&v57 + 3) = (float)results->ViewRect.y1 + 0.0;
    v[3] = x1 + 0.0;
    v9 = (float)(results->ViewRect.x2 - results->ViewRect.x1) / (float)(int)v7->ImgSize.Width;
    *((float *)&v57 + 1) = (float)(results->ViewRect.y2 - results->ViewRect.y1) / (float)(int)v7->ImgSize.Height;
    v[0] = v9;
    v[3] = (float)(x1 + 0.0) * v9;
    v[1] = v9 * 0.0;
    v[2] = v9 * 0.0;
    *((float *)&v57 + 3) = *((float *)&v57 + 3) * *((float *)&v57 + 1);
    *(float *)&v57 = *((float *)&v57 + 1) * 0.0;
    *((float *)&v57 + 2) = *((float *)&v57 + 1) * 0.0;
    LastBlendModeOrDefault = (unsigned int)Scaleform::Render::HAL::getLastBlendModeOrDefault(this);
    Scaleform::Render::HAL::ApplyBlendMode(this, LastBlendModeOrDefault, 1, 1);
    pHeader = v2->PrimitiveArea.Data.Data->pHandle->pHeader;
    if ( (pHeader->Format & 1) != 0 )
      v12 = (const Scaleform::Render::Cxform *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[0]
                                                      + 1];
    else
      v12 = &Scaleform::Render::Cxform::Identity;
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetCxform(
      &this->ShaderData,
      &this->ShaderData.CurShader,
      v12,
      0,
      0);
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      &this->ShaderData,
      &this->ShaderData.CurShader,
      14i64,
      (const float *)&result,
      8u,
      0,
      0);
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      &this->ShaderData,
      &this->ShaderData.CurShader,
      22i64,
      v,
      8u,
      0,
      0);
    fm.Fill = 3;
    Scaleform::Render::GL::ShaderInterface::SetTexture(
      &this->ShaderData,
      &this->ShaderData.CurShader,
      0x15u,
      v7,
      (Scaleform::Render::ImageFillMode)&fm,
      0);
    Scaleform::Render::GL::ShaderInterface::Finish(&this->ShaderData, 1u);
    this->applyRasterModeImpl(this, this->CurrentSceneRasterMode);
    Size = this->RenderTargetStack.Data.Size;
    Data = this->RenderTargetStack.Data.Data;
    if ( !Data[Size - 1].MaskStackTop )
      goto LABEL_22;
    MaskStackTop = Data[Size - 1].MaskStackTop;
    if ( (this->HALState & 0x40) != 0 )
      MaskStackTop = (unsigned int)(MaskStackTop - 1);
    if ( Data[Size - 1].StencilAvailable )
    {
      v16 = 5 - (unsigned int)((this->HALState & 0x40) != 0);
    }
    else
    {
      if ( !Data[Size - 1].DepthBufferAvailable )
      {
LABEL_22:
        this->setBatchUnitSquareVertexStream(this);
        this->drawPrimitive(this, 6u, 1u);
        v17 = (this->HALState & 0x10) != 0;
        v18 = (unsigned int)Scaleform::Render::HAL::getLastBlendModeOrDefault(this);
        Scaleform::Render::HAL::ApplyBlendMode(this, v18, 0, v17);
        if ( this->GetRenderSync(this) )
        {
          v19 = this->GetRenderSync(this);
          Scaleform::Render::RenderSync::NotifySubmission(v19, SubmissionType_DrawCall);
        }
        results->SetInUse(results, RTUse_Unused_Cacheable);
        v20 = this->GetProfiler(this);
        if ( !v20->IsFilterCachingEnabled(v20) )
          Scaleform::Render::CacheablePrimitive::SetCacheResults(v2, Cache_Mesh, 0i64, 0);
        return;
      }
      v16 = 7 - (unsigned int)((this->HALState & 0x40) != 0);
    }
    this->applyDepthStencilMode(this, (Scaleform::Render::HAL::DepthStencilMode)v16, MaskStackTop);
    goto LABEL_22;
  }
  pObject = v2->pFilters.pObject;
  FilterCount = Scaleform::Render::FilterSet::GetFilterCount(pObject);
  Filter = Scaleform::Render::FilterSet::GetFilter(pObject, (unsigned int)(FilterCount - 1));
  v24 = Scaleform::Render::GL::ShaderManager::SetupFilter(&this->SManager, Filter, this->FillFlags, passes);
  v60 = 0i64;
  v61 = 0i64;
  v62 = 0i64;
  Scaleform::Render::CacheablePrimitive::GetCacheResults(v2, &v54, 2u);
  v25 = v54;
  if ( v54 )
    v54->AddRef(v54);
  if ( v60 )
    v60->Release(v60);
  v60 = v25;
  v26 = v25->ViewRect.y2 - v25->ViewRect.y1;
  v27 = v25->ViewRect.x2 - v25->ViewRect.x1;
  v28 = v55;
  v45 = v27;
  v46 = v26;
  if ( v55 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v55 + 8i64))(v55);
  if ( v62 )
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v62 + 16i64))(v62);
  v29 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v62 = v28;
  v30 = v29->CreateTempRenderTarget(this, (const Scaleform::Render::Size<unsigned long> *)&v45, 0);
  if ( v61 )
    v61->Release(v61);
  v61 = v30;
  if ( !`Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawCachedFilter'::`6'::warned )
    `Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawCachedFilter'::`6'::warned = v30 == 0i64;
  if ( v30 )
  {
    v52 = v45;
    v53 = v46;
    v36 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    v47 = 0;
    v51 = 0i64;
    ((void (__fastcall *)(Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *, Scaleform::Render::RenderTarget *, __int64, __int64 *, int *))v36->PushRenderTarget)(
      this,
      v30,
      8i64,
      &v51,
      &v47);
    v37 = this->Matrices.pObject;
    v49[0] = v45;
    v49[1] = v46;
    v38 = (int *)v37->GetFullViewportMatrix(v37, (const Scaleform::Render::Size<int> *)v49);
    v58[0] = *v38;
    v58[1] = v38[1];
    v58[2] = v38[2];
    v58[3] = v38[3];
    v58[4] = v38[4];
    v58[5] = v38[5];
    v58[6] = v38[6];
    v58[7] = v38[7];
    Scaleform::Render::HAL::ApplyBlendMode(this, Blend_Normal, 1, 1);
    this->drawFilter(
      this,
      (const Scaleform::Render::Matrix2x4<float> *)v58,
      &Scaleform::Render::Cxform::Identity,
      Filter,
      (Scaleform::Ptr<Scaleform::Render::RenderTarget> *)&v60,
      passes,
      v24 - 1,
      v24,
      this->MappedXY16iAlphaTexture[1]);
    this->PopRenderTarget(this, 0);
    v50 = v61;
    Scaleform::Render::CacheablePrimitive::SetCacheResults(v2, Cache_Count, &v50, 1u);
    v50->pRenderTargetData->CacheID = (unsigned __int64)v2;
    this->drawCachedFilter(this, v2);
    v39 = 3i64;
    v40 = (__int64 *)&v60;
    v41 = 3i64;
    do
    {
      if ( *v40 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v40 + 40i64))(*v40, 0i64);
      ++v40;
      --v41;
    }
    while ( v41 );
    v42 = &v63;
    do
    {
      v43 = *((_QWORD *)v42 - 1);
      v42 -= 8;
      --v39;
      if ( v43 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v43 + 16i64))(v43);
    }
    while ( v39 );
  }
  else
  {
    v31 = 3i64;
    v32 = (__int64 *)&v60;
    v33 = 3i64;
    do
    {
      if ( *v32 )
        (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)*v32 + 40i64))(*v32, 0i64);
      ++v32;
      --v33;
    }
    while ( v33 );
    Scaleform::Render::CacheablePrimitive::SetCacheResults(v2, Cache_Mesh, 0i64, 0);
    v34 = &v63;
    do
    {
      v35 = *((_QWORD *)v34 - 1);
      v34 -= 8;
      --v31;
      if ( v35 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v35 + 16i64))(v35);
    }
    while ( v31 );
  }
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawFilter(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        const Scaleform::Render::Matrix2x4<float> *mvp,
        const Scaleform::Render::Cxform *cx,
        const Scaleform::Render::Filter *filter,
        Scaleform::Ptr<Scaleform::Render::RenderTarget> *targets,
        unsigned int *shaders,
        unsigned int pass,
        unsigned int passCount,
        Scaleform::Render::VertexFormat *pvf)
{
  Scaleform::Render::Matrix2x4<float> *p_ViewportMatrix; // r9
  Scaleform::Render::RenderSync *v12; // rax

  p_ViewportMatrix = (Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152];
  if ( (this->ConfigFlags & 0x10000000) == 0 )
    p_ViewportMatrix = &this->ViewportMatrix;
  Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::SetFilterFill(
    &this->SManager,
    mvp,
    cx,
    p_ViewportMatrix,
    filter,
    targets,
    shaders,
    pass,
    passCount,
    pvf,
    &this->ShaderData);
  this->setBatchUnitSquareVertexStream(this);
  this->drawPrimitive(this, 6u, 1u);
  if ( this->GetRenderSync(this) )
  {
    v12 = this->GetRenderSync(this);
    Scaleform::Render::RenderSync::NotifySubmission(v12, SubmissionType_DrawCall);
  }
}

void __fastcall Scaleform::Render::GL::HAL::drawIndexedInstanced(
        Scaleform::Render::GL::HAL *this,
        __int64 indexCount,
        __int64 vertexCount,
        unsigned int meshCount,
        unsigned __int64 indexPtr,
        unsigned __int64 vertexOffset)
{
  unsigned int v6; // edi
  __int64 v7; // rax

  v6 = indexCount;
  v7 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, __int64, __int64))this->GetGraphicsDevice)(
         this,
         indexCount,
         vertexCount);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, unsigned __int64))(*(_QWORD *)v7 + 384i64))(
    v7,
    4i64,
    v6,
    5123i64,
    2 * indexPtr);
}

void __fastcall Scaleform::Render::GL::HAL::drawIndexedPrimitive(
        Scaleform::Render::GL::HAL *this,
        __int64 indexCount,
        __int64 vertexCount,
        __int64 meshCount,
        unsigned __int64 indexPtr,
        unsigned __int64 vertexOffset)
{
  unsigned int v6; // ebx
  __int64 v7; // rax

  v6 = indexCount;
  v7 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, __int64, __int64, __int64))this->GetGraphicsDevice)(
         this,
         indexCount,
         vertexCount,
         meshCount);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, unsigned __int64))(*(_QWORD *)v7 + 376i64))(
    v7,
    4i64,
    v6,
    5123i64,
    2 * indexPtr);
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawMaskClearRectangles(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        const Scaleform::Render::Matrix2x4<float> *matrices,
        unsigned __int64 count)
{
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v3; // rax
  __int64 v6; // rsi
  Scaleform::Render::GL::ShaderInterface *p_ShaderData; // rbx
  unsigned int v8; // er14
  unsigned __int64 v9; // r12
  unsigned int batch; // esi
  const float *v11; // rbp
  Scaleform::Render::ProfileViews *v12; // rax
  float v13; // xmm0_4
  float v14; // xmm0_4
  float v15; // xmm0_4
  float v16; // xmm0_4
  const Scaleform::Render::GL::VertexShaderDesc *pVDesc; // rax
  Scaleform::Render::GL::ShaderPair *p_CurShader; // rdx
  const Scaleform::Render::GL::BatchVar *BatchUniforms; // rcx
  char Offset; // al
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v21; // rax
  Scaleform::Render::RenderSync *v22; // rax
  unsigned __int8 v23; // [rsp+40h] [rbp-78h] BYREF
  unsigned __int8 v24; // [rsp+41h] [rbp-77h]
  unsigned __int8 v25; // [rsp+42h] [rbp-76h]
  unsigned __int8 v26; // [rsp+43h] [rbp-75h]
  int v27; // [rsp+44h] [rbp-74h] BYREF
  const Scaleform::Render::Matrix2x4<float> *v28; // [rsp+48h] [rbp-70h]
  __int64 v29; // [rsp+50h] [rbp-68h]
  int v30[4]; // [rsp+58h] [rbp-60h] BYREF

  v3 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v28 = matrices;
  v29 = ((__int64 (*)(void))v3->GetEvents)();
  v6 = v29;
  (*(void (__fastcall **)(__int64, __int64, const char *))(*(_QWORD *)v29 + 8i64))(
    v29,
    8i64,
    "HAL::drawMaskClearRectangles");
  p_ShaderData = &this->ShaderData;
  v8 = 24;
  if ( (unsigned int)count < 0x18 )
    v8 = count;
  this->ShaderData.SetStaticShader(&this->ShaderData, ST_BatchSolid, this->MappedXY16iAlphaSolid[1]);
  if ( !this->ShaderData.PrimitiveOpen )
  {
    this->ShaderData.PrimitiveOpen = 1;
    this->ShaderData.CurrentPrimitiveMeshCount = v8;
    *(_QWORD *)this->ShaderData.UniformSet = 0i64;
    *(_QWORD *)&this->ShaderData.UniformSet[8] = 0i64;
    *(_QWORD *)&this->ShaderData.UniformSet[16] = 0i64;
    *(_WORD *)&this->ShaderData.UniformSet[24] = 0;
    this->ShaderData.Textures[0] = 0i64;
    this->ShaderData.Textures[1] = 0i64;
    this->ShaderData.Textures[2] = 0i64;
    this->ShaderData.Textures[3] = 0i64;
  }
  v9 = 0i64;
  if ( count )
  {
    do
    {
      if ( v9 && !this->ShaderData.PrimitiveOpen )
      {
        this->ShaderData.PrimitiveOpen = 1;
        this->ShaderData.CurrentPrimitiveMeshCount = v8;
        *(_QWORD *)this->ShaderData.UniformSet = 0i64;
        *(_QWORD *)&this->ShaderData.UniformSet[8] = 0i64;
        *(_QWORD *)&this->ShaderData.UniformSet[16] = 0i64;
        *(_WORD *)&this->ShaderData.UniformSet[24] = 0;
        this->ShaderData.Textures[0] = 0i64;
        this->ShaderData.Textures[1] = 0i64;
        this->ShaderData.Textures[2] = 0i64;
        this->ShaderData.Textures[3] = 0i64;
      }
      batch = 0;
      if ( v8 )
      {
        v11 = (const float *)&v28[v9];
        do
        {
          Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
            &this->ShaderData,
            &this->ShaderData.CurShader,
            14i64,
            v11,
            8u,
            0,
            batch);
          v12 = this->GetProfiler(this);
          v27 = -16777089;
          ((void (__fastcall *)(Scaleform::Render::ProfileViews *, unsigned __int8 *, int *))v12->GetClearColor)(
            v12,
            &v23,
            &v27);
          if ( v25 )
            v13 = (float)v25 / 255.0;
          else
            v13 = 0.0;
          *(float *)v30 = v13;
          if ( v24 )
            v14 = (float)v24 / 255.0;
          else
            v14 = 0.0;
          *(float *)&v30[1] = v14;
          if ( v23 )
            v15 = (float)v23 / 255.0;
          else
            v15 = 0.0;
          *(float *)&v30[2] = v15;
          if ( v26 )
            v16 = (float)v26 / 255.0;
          else
            v16 = 0.0;
          pVDesc = this->ShaderData.CurShader.pVDesc;
          *(float *)&v30[3] = v16;
          p_CurShader = &this->ShaderData.CurShader;
          BatchUniforms = pVDesc->BatchUniforms;
          Offset = BatchUniforms[6].Offset;
          if ( Offset < 0
            && (BatchUniforms = this->ShaderData.CurShader.pFDesc->BatchUniforms,
                Offset = BatchUniforms[6].Offset,
                Offset < 0) )
          {
            p_ShaderData->SetUniformRaw(&this->ShaderData, p_CurShader, 6u, (const float *)v30, 4u, 0, 0);
          }
          else
          {
            p_ShaderData->SetUniformRaw(
              &this->ShaderData,
              p_CurShader,
              BatchUniforms[6].Array,
              (const float *)v30,
              4u,
              Offset,
              0);
          }
          ++batch;
          v11 += 8;
        }
        while ( batch < v8 );
      }
      Scaleform::Render::GL::ShaderInterface::Finish(&this->ShaderData, v8);
      v21 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
      if ( v9 )
        v21->setBatchUnitSquareVertexStreamPerDraw(this);
      else
        v21->setBatchUnitSquareVertexStream(this);
      this->drawPrimitive(this, 6 * v8, v8);
      v8 = 24;
      if ( (unsigned int)(count - v9) < 0x18 )
        v8 = count - v9;
      v9 += v8;
    }
    while ( v9 < count );
    v6 = v29;
  }
  if ( this->GetRenderSync(this) )
  {
    v22 = this->GetRenderSync(this);
    Scaleform::Render::RenderSync::NotifySubmission(v22, SubmissionType_DrawCall);
  }
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v6 + 16i64))(v6, 8i64);
}

void __fastcall Scaleform::Render::GL::HAL::drawPrimitive(
        Scaleform::Render::GL::HAL *this,
        __int64 indexCount,
        __int64 meshCount)
{
  unsigned int v3; // ebx
  __int64 v4; // rax

  v3 = indexCount;
  v4 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, __int64, __int64))this->GetGraphicsDevice)(
         this,
         indexCount,
         meshCount);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD))(*(_QWORD *)v4 + 368i64))(v4, 4i64, 0i64, v3);
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawScreenQuad(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this)
{
  Scaleform::Render::RenderSync *v2; // rax

  this->setBatchUnitSquareVertexStream(this);
  this->drawPrimitive(this, 6u, 1u);
  if ( this->GetRenderSync(this) )
  {
    v2 = this->GetRenderSync(this);
    Scaleform::Render::RenderSync::NotifySubmission(v2, SubmissionType_DrawCall);
  }
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawUncachedFilter(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        const Scaleform::Render::HAL::FilterStackEntry *e)
{
  Scaleform::Render::FilterPrimitive *pObject; // rax
  void *v4; // r12
  unsigned int FilterCount; // er15
  unsigned int v6; // esi
  unsigned int v7; // er13
  _DWORD *v8; // r8
  int v9; // eax
  _BOOL8 v10; // rdx
  unsigned int v11; // er14
  Scaleform::Render::Filter *Filter; // rax
  unsigned int FillFlags; // er8
  Scaleform::Render::Filter *v14; // rsi
  __int64 v15; // rcx
  Scaleform::Render::RenderTarget *v16; // rbx
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v17; // rax
  Scaleform::Render::MatrixState *v18; // rcx
  int *v19; // rax
  Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>_vtbl *v20; // r10
  unsigned int v21; // er12
  bool v22; // al
  Scaleform::Render::RenderTarget *v23; // rbx
  Scaleform::Render::RenderTarget *v24; // rdx
  Scaleform::Render::RenderTarget *v25; // rcx
  Scaleform::Render::ProfileViews *v26; // rax
  char v27; // cl
  __int64 v28; // rcx
  char v29; // cl
  __int64 v30; // rcx
  unsigned __int64 Size; // rax
  Scaleform::Render::HAL::RenderTargetEntry *Data; // rdx
  __int64 MaskStackTop; // r8
  __int64 v34; // rdx
  Scaleform::Render::CacheablePrimitive *v35; // rbx
  __int64 v36; // rdx
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rdx
  Scaleform::Render::BlendMode LastBlendModeOrDefault; // eax
  bool v39; // bl
  Scaleform::Render::BlendMode v40; // eax
  __int64 v41; // rbx
  Scaleform::Render::RenderTarget **v42; // rsi
  __int64 v43; // r14
  char *v44; // rdi
  __int64 v45; // rcx
  Scaleform::Render::VertexFormat *v46; // [rsp+40h] [rbp-C0h]
  char v47; // [rsp+50h] [rbp-B0h]
  Scaleform::Render::RenderTarget *results; // [rsp+58h] [rbp-A8h] BYREF
  Scaleform::Render::RenderTarget *v49; // [rsp+60h] [rbp-A0h]
  int v50; // [rsp+68h] [rbp-98h] BYREF
  int v51[2]; // [rsp+70h] [rbp-90h] BYREF
  const Scaleform::Render::Filter *v52; // [rsp+78h] [rbp-88h]
  int v53[2]; // [rsp+80h] [rbp-80h] BYREF
  const Scaleform::Render::Cxform *i; // [rsp+88h] [rbp-78h]
  Scaleform::Render::FilterSet *v55; // [rsp+90h] [rbp-70h]
  int v56[6]; // [rsp+98h] [rbp-68h] BYREF
  int v57[8]; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::Matrix2x4<float> result; // [rsp+D0h] [rbp-30h] BYREF
  Scaleform::Render::RenderTarget *v59; // [rsp+F0h] [rbp-10h] BYREF
  Scaleform::Render::RenderTarget *v60; // [rsp+F8h] [rbp-8h]
  Scaleform::Render::RenderTarget *v61; // [rsp+100h] [rbp+0h]
  char v62; // [rsp+108h] [rbp+8h] BYREF
  unsigned int passes[120]; // [rsp+110h] [rbp+10h] BYREF

  pObject = e->pPrimitive.pObject;
  v4 = (void *)e;
  results = (Scaleform::Render::RenderTarget *)e;
  v55 = pObject->pFilters.pObject;
  FilterCount = Scaleform::Render::FilterSet::GetFilterCount(v55);
  v6 = 0;
  v52 = 0i64;
  v7 = 0;
  if ( !*(_QWORD *)v4 )
    return;
  v8 = (_DWORD *)*((_QWORD *)v4 + 1);
  if ( !v8 )
    return;
  v59 = 0i64;
  v60 = 0i64;
  v61 = 0i64;
  v9 = v8[14] - v8[12];
  v51[1] = v8[15] - v8[13];
  v51[0] = v9;
  (*(void (__fastcall **)(_DWORD *, _QWORD))(*(_QWORD *)v8 + 8i64))(v8, 0i64);
  v59 = (Scaleform::Render::RenderTarget *)*((_QWORD *)v4 + 1);
  this->setBatchUnitSquareVertexStream(this);
  ((void (__fastcall *)(Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *, __int64))this->applyDepthStencilMode)(
    this,
    1i64);
  Scaleform::Render::HAL::ApplyBlendMode(this, Blend_FilterBlend, 1, 0);
  LOBYTE(v10) = 1;
  this->applyBlendModeEnable(this, v10);
  v11 = 0;
  for ( i = &Scaleform::Render::Cxform::Identity; v11 < FilterCount; ++v11 )
  {
    Filter = Scaleform::Render::FilterSet::GetFilter(v55, v11);
    FillFlags = this->FillFlags;
    v52 = Filter;
    v14 = Filter;
    v7 = Scaleform::Render::GL::ShaderManager::SetupFilter(&this->SManager, Filter, FillFlags, passes);
    v47 = 0;
    if ( (unsigned int)(v14->Type - 1) <= 4 )
    {
      v15 = (__int64)v61;
      if ( v61 )
      {
        v61->SetInUse(v61, RTUse_Unused);
        v15 = (__int64)v61;
      }
      if ( v59 )
      {
        v59->AddRef(v59);
        v15 = (__int64)v61;
      }
      if ( v15 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v15 + 16i64))(v15);
      v61 = v59;
      v47 = 1;
    }
    v6 = 0;
    if ( v7 )
    {
      v16 = v60;
      while ( 1 )
      {
        if ( v6 == v7 - 1 && v11 == FilterCount - 1 )
        {
LABEL_43:
          v4 = results;
          goto LABEL_44;
        }
        if ( !v16 )
        {
          v16 = this->CreateTempRenderTarget(this, v51, 0i64);
          if ( v60 )
            v60->Release(v60);
          v60 = v16;
          if ( !v16 )
            break;
        }
        v56[0] = v16->ViewRect.x1;
        v56[1] = v16->ViewRect.y1;
        v56[2] = v16->ViewRect.x2;
        v56[3] = v16->ViewRect.y2;
        v17 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
        v50 = 0;
        ((void (__fastcall *)(Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *, Scaleform::Render::RenderTarget *, __int64, int *, int *))v17->PushRenderTarget)(
          this,
          v16,
          8i64,
          v56,
          &v50);
        v18 = this->Matrices.pObject;
        v53[0] = v16->BufferSize.Width;
        v53[1] = v16->BufferSize.Height;
        v19 = (int *)v18->GetFullViewportMatrix(v18, (const Scaleform::Render::Size<int> *)v53);
        v20 = this->Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
        v57[0] = *v19;
        v57[1] = v19[1];
        v57[2] = v19[2];
        v57[3] = v19[3];
        v57[4] = v19[4];
        v57[5] = v19[5];
        v57[6] = v19[6];
        v46 = this->MappedXY16iAlphaTexture[1];
        v57[7] = v19[7];
        v20->drawFilter(
          this,
          (const Scaleform::Render::Matrix2x4<float> *)v57,
          &Scaleform::Render::Cxform::Identity,
          v52,
          (Scaleform::Ptr<Scaleform::Render::RenderTarget> *)&v59,
          passes,
          v6,
          v7,
          v46);
        v21 = v6 + 1;
        v22 = v6 + 1 == v7 - 1 && v11 == FilterCount - 1;
        if ( v47 && !v6 && !v22 )
        {
          v23 = this->CreateTempRenderTarget(this, v51, 0i64);
          if ( v59 )
            v59->Release(v59);
          v59 = v23;
          if ( !v23 )
          {
            v29 = `Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawUncachedFilter'::`33'::warned;
            if ( !`Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawUncachedFilter'::`33'::warned )
              v29 = 1;
            `Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawUncachedFilter'::`33'::warned = v29;
            v60->SetInUse(v60, RTUse_Unused);
            if ( v60 )
              v60->Release(v60);
            v4 = results;
            v60 = 0i64;
            v30 = *(_QWORD *)&results->RefCount;
            if ( v30 )
              (*(void (__fastcall **)(__int64))(*(_QWORD *)v30 + 8i64))(v30);
            if ( v59 )
              v59->Release(v59);
            v59 = *(Scaleform::Render::RenderTarget **)&results->RefCount;
            this->PopRenderTarget(this, 4u);
            v11 = FilterCount;
            goto LABEL_44;
          }
        }
        this->PopRenderTarget(this, 4u);
        v24 = v59;
        if ( v59 )
        {
          v59->AddRef(v59);
          v24 = v59;
        }
        v25 = v60;
        v16 = v24;
        if ( v60 )
        {
          v60->AddRef(v60);
          v25 = v60;
          v24 = v59;
        }
        if ( v24 )
        {
          v24->Release(v24);
          v25 = v60;
        }
        v59 = v25;
        if ( v16 )
        {
          v16->AddRef(v16);
          v25 = v60;
        }
        if ( v25 )
          v25->Release(v25);
        v60 = v16;
        if ( v16 )
        {
          v16->Release(v16);
          v16 = v60;
        }
        ++v6;
        if ( v21 >= v7 )
          goto LABEL_43;
      }
      v27 = `Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawUncachedFilter'::`23'::warned;
      if ( !`Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawUncachedFilter'::`23'::warned )
        v27 = 1;
      `Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::drawUncachedFilter'::`23'::warned = v27;
      v59->SetInUse(v59, RTUse_Unused);
      if ( v59 )
        v59->Release(v59);
      v4 = results;
      v59 = 0i64;
      v28 = *(_QWORD *)&results->RefCount;
      if ( v28 )
      {
        (*(void (__fastcall **)(__int64))(*(_QWORD *)v28 + 8i64))(v28);
        if ( v59 )
          v59->Release(v59);
      }
      v11 = FilterCount;
      v59 = *(Scaleform::Render::RenderTarget **)&results->RefCount;
    }
LABEL_44:
    ;
  }
  if ( v59 && ((v26 = this->GetProfiler(this), v26->IsFilterCachingEnabled(v26)) || !v7) )
  {
    results = v59;
    v49 = v61;
    Scaleform::Render::CacheablePrimitive::SetCacheResults(
      *(Scaleform::Render::CacheablePrimitive **)v4,
      (Scaleform::Render::CacheablePrimitive::CacheState)(2 - (v7 != 0)),
      &results,
      (v7 != 0) + 1);
    results->pRenderTargetData->CacheID = *(_QWORD *)v4;
    if ( v49 )
      v49->pRenderTargetData->CacheID = *(_QWORD *)v4;
  }
  else
  {
    Scaleform::Render::CacheablePrimitive::SetCacheResults(
      *(Scaleform::Render::CacheablePrimitive **)v4,
      Cache_Mesh,
      0i64,
      0);
  }
  this->PopRenderTarget(this, 0);
  Size = this->RenderTargetStack.Data.Size;
  Data = this->RenderTargetStack.Data.Data;
  if ( Data[Size - 1].MaskStackTop )
  {
    MaskStackTop = Data[Size - 1].MaskStackTop;
    if ( (this->HALState & 0x40) != 0 )
      MaskStackTop = (unsigned int)(MaskStackTop - 1);
    if ( Data[Size - 1].StencilAvailable )
    {
      v34 = 5 - (unsigned int)((this->HALState & 0x40) != 0);
LABEL_75:
      this->applyDepthStencilMode(this, (Scaleform::Render::HAL::DepthStencilMode)v34, MaskStackTop);
      goto LABEL_76;
    }
    if ( Data[Size - 1].DepthBufferAvailable )
    {
      v34 = 7 - (unsigned int)((this->HALState & 0x40) != 0);
      goto LABEL_75;
    }
  }
LABEL_76:
  this->applyRasterModeImpl(this, this->CurrentSceneRasterMode);
  if ( v7 )
  {
    v35 = *(Scaleform::Render::CacheablePrimitive **)v4;
    v36 = ***(_QWORD ***)(*(_QWORD *)v4 + 48i64);
    Scaleform::Render::operator*(
      &result,
      &this->Matrices.pObject->UserView,
      (const Scaleform::Render::Matrix2x4<float> *)(v36
                                                  + 16
                                                  * (Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[*(_BYTE *)(v36 + 15) & 0xF].Offsets[4]
                                                   + 1i64)));
    pHeader = v35->PrimitiveArea.Data.Data->pHandle->pHeader;
    if ( (pHeader->Format & 1) != 0 )
      i = (const Scaleform::Render::Cxform *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[0]
                                                    + 1];
    LastBlendModeOrDefault = (unsigned int)Scaleform::Render::HAL::getLastBlendModeOrDefault(this);
    Scaleform::Render::HAL::ApplyBlendMode(this, LastBlendModeOrDefault, 1, 1);
    this->drawFilter(
      this,
      &result,
      i,
      v52,
      (Scaleform::Ptr<Scaleform::Render::RenderTarget> *)&v59,
      passes,
      v6,
      v7,
      this->MappedXY16iAlphaTexture[1]);
    v39 = (this->HALState & 0x10) != 0;
    v40 = (unsigned int)Scaleform::Render::HAL::getLastBlendModeOrDefault(this);
    Scaleform::Render::HAL::ApplyBlendMode(this, v40, 0, v39);
  }
  else
  {
    this->drawCachedFilter(this, *(Scaleform::Render::FilterPrimitive **)v4);
  }
  v41 = 3i64;
  v42 = &v59;
  v43 = 3i64;
  do
  {
    if ( *v42 )
      (*v42)->SetInUse(*v42, RTUse_Unused);
    ++v42;
    --v43;
  }
  while ( v43 );
  this->AccumulatedStats.Filters += Scaleform::Render::FilterSet::GetFilterCount(v55);
  v44 = &v62;
  do
  {
    v45 = *((_QWORD *)v44 - 1);
    v44 -= 8;
    --v41;
    if ( v45 )
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v45 + 16i64))(v45);
  }
  while ( v41 );
}

void __fastcall Scaleform::Render::GL::RenderEvents::endImpl(Scaleform::Render::GL::RenderEvents *this)
{
  Scaleform::Render::GL::GraphicsDevice *pDevice; // rcx
  Scaleform::Render::GL::GraphicsDevice *v3; // rax
  Scaleform::Render::GL::GraphicsDevice *v4; // rcx
  Scaleform::Render::GL::GraphicsDevice *v5; // rax

  pDevice = this->pHAL->pDevice;
  if ( pDevice )
  {
    if ( pDevice->CheckExtension(pDevice, SF_GL_EXT_debug_marker) )
    {
      v3 = this->pHAL->GetGraphicsDevice(this->pHAL);
      v3->glPopGroupMarker(v3);
    }
  }
  else if ( !warned_6 )
  {
    warned_6 = 1;
  }
  v4 = this->pHAL->pDevice;
  if ( v4 )
  {
    if ( v4->CheckExtension(v4, SF_GL_GREMEDY_string_marker) )
    {
      v5 = this->pHAL->GetGraphicsDevice(this->pHAL);
      v5->glStringMarker(v5, 0, "End");
    }
  }
  else if ( !warned_6 )
  {
    warned_6 = 1;
  }
}

void __fastcall Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::ensureCountAvailable(
        Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8> *this,
        unsigned int count)
{
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page *pLast; // rdi
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page *v4; // rax
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page *v5; // rax

  pLast = this->pLast;
  if ( pLast )
  {
    if ( count + pLast->Count <= 8 )
      return;
    v5 = (Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 336i64, 0i64);
    this->pLast = v5;
    pLast->pNext = v5;
    v4 = this->pLast;
  }
  else
  {
    v4 = (Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, this, 336i64, 0i64);
    this->pPages = v4;
    this->pLast = v4;
  }
  v4->pNext = 0i64;
  this->pLast->Count = 0;
}

void __fastcall Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::ensureCountAvailable(
        Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32> *this,
        unsigned int count)
{
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page *pLast; // rdi
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page *v4; // rax
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page *v5; // rax

  pLast = this->pLast;
  if ( pLast )
  {
    if ( count + pLast->Count <= 0x20 )
      return;
    v5 = (Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                                            Scaleform::Memory::pGlobalHeap,
                                                                                            this,
                                                                                            272i64,
                                                                                            0i64);
    this->pLast = v5;
    pLast->pNext = v5;
    v4 = this->pLast;
  }
  else
  {
    v4 = (Scaleform::Render::PagedItemBuffer<Scaleform::Render::VertexElement,32>::Page *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                                            Scaleform::Memory::pGlobalHeap,
                                                                                            this,
                                                                                            272i64,
                                                                                            0i64);
    this->pPages = v4;
    this->pLast = v4;
  }
  v4->pNext = 0i64;
  this->pLast->Count = 0;
}

void __fastcall Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::freePages(
        Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8> *this,
        bool keepLast)
{
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page *pPages; // rdi
  Scaleform::Render::PagedItemBuffer<Scaleform::Render::MultiKeyCollection<Scaleform::Render::VertexElement,Scaleform::Render::VertexFormat,32,8>::ValueItem,8>::Page *v3; // rsi
  __int64 i; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  pPages = this->pPages;
  v3 = 0i64;
  if ( this->pPages )
  {
    do
    {
      for ( i = 0i64; (unsigned int)i < pPages->Count; i = (unsigned int)(i + 1) )
      {
        pObject = (Scaleform::RefCountVImpl *)pPages->Items[i].Value.pSysFormat.pObject;
        if ( pObject )
          Scaleform::RefCountImpl::Release(pObject);
      }
      if ( v3 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v3);
      v3 = pPages;
      pPages = pPages->pNext;
    }
    while ( pPages );
    if ( !v3 )
      goto LABEL_12;
    if ( keepLast )
    {
      v3->Count = 0;
LABEL_12:
      this->pPages = v3;
      this->pLast = v3;
      return;
    }
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v3);
    this->pPages = 0i64;
    this->pLast = 0i64;
  }
  else
  {
    this->pPages = 0i64;
    this->pLast = 0i64;
  }
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::GL::HAL::getFboInfo(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::Size<unsigned long> *result,
        Scaleform::Render::GL::HALGLFramebuffer *fbo,
        Scaleform::Render::GL::HALGLFramebuffer **currentFBO,
        bool useCurrent)
{
  Scaleform::Render::GL::HAL_vtbl *v5; // rax
  Scaleform::Render::GL::HALGLFramebuffer **v6; // rsi
  Scaleform::Render::GL::GraphicsDevice *v10; // rax
  Scaleform::Render::GL::GraphicsDevice *v11; // rax
  Scaleform::Render::GL::GraphicsDevice *v12; // rax
  unsigned __int8 v13; // al
  Scaleform::RefCountVImpl *v14; // rbp
  Scaleform::Render::GL::GraphicsDevice *v15; // rax
  Scaleform::Render::GL::GraphicsDevice *v16; // rax
  Scaleform::Render::GL::HALGLRenderbuffer *v17; // rax
  Scaleform::RefCountVImpl *v18; // rax
  Scaleform::Render::GL::GraphicsDevice *v19; // rax
  Scaleform::Render::GL::GraphicsDevice *v20; // rax
  Scaleform::Render::GL::GraphicsDevice *v21; // rax
  Scaleform::Render::GL::GraphicsDevice *v22; // rax
  unsigned int v23; // esi
  const unsigned int *v24; // r14
  unsigned int v25; // er15
  __int64 v26; // rbx
  unsigned int v27; // eax
  Scaleform::Render::GL::GraphicsDevice *v28; // rax
  Scaleform::Render::GL::GraphicsDevice *v29; // rax
  Scaleform::Render::GL::GraphicsDevice *v30; // rax
  Scaleform::Render::GL::GraphicsDevice *v31; // rax
  unsigned int v32; // eax
  unsigned int v33; // ecx
  Scaleform::Render::GL::GraphicsDevice *v34; // rax
  Scaleform::Render::GL::GraphicsDevice *v35; // rax
  Scaleform::Render::Size<unsigned long> *v36; // rax
  unsigned int v37; // [rsp+30h] [rbp-68h] BYREF
  unsigned int v38; // [rsp+34h] [rbp-64h] BYREF
  unsigned int name; // [rsp+38h] [rbp-60h] BYREF
  int v40; // [rsp+3Ch] [rbp-5Ch] BYREF
  Scaleform::Render::GL::HALGLFramebuffer **v41; // [rsp+40h] [rbp-58h]
  char v42; // [rsp+48h] [rbp-50h] BYREF
  float v43; // [rsp+50h] [rbp-48h]
  float v44; // [rsp+54h] [rbp-44h]

  v5 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v6 = currentFBO;
  v41 = currentFBO;
  v10 = (Scaleform::Render::GL::GraphicsDevice *)((__int64 (*)(void))v5->GetGraphicsDevice)();
  *v6 = Scaleform::Render::GL::GraphicsDevice::GetBoundFramebuffer(v10, 0x8D40u);
  if ( !useCurrent )
  {
    v11 = this->GetGraphicsDevice(this);
    v11->glBindFramebuffer(v11, 36160u, fbo);
    ++this->AccumulatedStats.RTChanges;
  }
  v12 = this->GetGraphicsDevice(this);
  v13 = v12->glIsFramebuffer(v12, fbo);
  v14 = 0i64;
  v37 = 0;
  v38 = 0;
  if ( !v13 )
    goto LABEL_26;
  v15 = this->GetGraphicsDevice(this);
  v15->glGetFramebufferAttachmentParameteriv(v15, 36160u, 36064u, 36048u, &v40);
  v16 = this->GetGraphicsDevice(this);
  v16->glGetFramebufferAttachmentParameteriv(v16, 36160u, 36064u, 36049u, (int *)&name);
  if ( v40 == 5890 )
  {
    v23 = 0;
    v24 = targetTypes;
    while ( 1 )
    {
      v25 = *v24;
      v26 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
              Scaleform::Memory::pGlobalHeap,
              24i64);
      if ( v26 )
      {
        v27 = name;
        *(_QWORD *)v26 = &Scaleform::RefCountImplCore::`vftable';
        *(_QWORD *)v26 = &Scaleform::Render::GL::HALGLTexture::`vftable';
        *(_DWORD *)(v26 + 8) = 1;
        *(_DWORD *)(v26 + 16) = v27;
      }
      else
      {
        v26 = 0i64;
      }
      v28 = this->GetGraphicsDevice(this);
      v28->glBindTexture(v28, v25, (Scaleform::Render::GL::HALGLTexture *)v26);
      v29 = this->GetGraphicsDevice(this);
      if ( !v29->glGetError(v29) )
        break;
      if ( v26 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v26);
      ++v23;
      ++v24;
      if ( v23 >= 2 )
        goto LABEL_23;
    }
    v30 = this->GetGraphicsDevice(this);
    v30->glGetTexLevelParameteriv(v30, v25, 0, 4096u, (int *)&v37);
    v31 = this->GetGraphicsDevice(this);
    v31->glGetTexLevelParameteriv(v31, v25, 0, 4097u, (int *)&v38);
    if ( v26 )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v26);
LABEL_23:
    v6 = v41;
  }
  else if ( v40 == 36161 )
  {
    v17 = (Scaleform::Render::GL::HALGLRenderbuffer *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                        Scaleform::Memory::pGlobalHeap,
                                                        32i64,
                                                        0i64);
    if ( v17 )
    {
      Scaleform::Render::GL::HALGLRenderbuffer::HALGLRenderbuffer(v17, name, 0x8D41u, &this->ImmediateDevice);
      v14 = v18;
    }
    v19 = this->GetGraphicsDevice(this);
    if ( v19->glIsRenderbuffer(v19, (Scaleform::Render::GL::HALGLRenderbuffer *)v14) )
    {
      v20 = this->GetGraphicsDevice(this);
      v20->glBindRenderbuffer(v20, 36161u, (Scaleform::Render::GL::HALGLRenderbuffer *)v14);
      v21 = this->GetGraphicsDevice(this);
      v21->glGetRenderbufferParameteriv(v21, 36161u, 36162u, (int *)&v37);
      v22 = this->GetGraphicsDevice(this);
      v22->glGetRenderbufferParameteriv(v22, 36161u, 36163u, (int *)&v38);
    }
    if ( v14 )
      Scaleform::RefCountImpl::Release(v14);
  }
  v32 = v37;
  if ( !v37 || (v33 = v38) == 0 )
  {
LABEL_26:
    v34 = this->GetGraphicsDevice(this);
    v34->glGetFloatv(v34, 2978u, (float *)&v42);
    v32 = (int)v43;
    v33 = (int)v44;
    v37 = (int)v43;
    v38 = (int)v44;
  }
  if ( !useCurrent )
  {
    v35 = this->GetGraphicsDevice(this);
    v35->glBindFramebuffer(v35, 36160u, *v6);
    ++this->AccumulatedStats.RTChanges;
    v32 = v37;
    v33 = v38;
  }
  result->Width = v32;
  v36 = result;
  result->Height = v33;
  return v36;
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::profilerApplyUniform(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        Scaleform::Render::ProfilerUniform uniform,
        unsigned int components,
        float *values)
{
  if ( uniform )
  {
    if ( uniform == ProfileUniform_TextureMips )
      Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
        &this->ShaderData,
        &this->ShaderData.CurShader,
        13i64,
        values,
        components,
        0,
        0);
  }
  else
  {
    Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
      &this->ShaderData,
      &this->ShaderData.CurShader,
      24i64,
      values,
      components,
      0,
      0);
  }
}

void __fastcall Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::profilerDrawCacheablePrimArea(
        Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface> *this,
        const Scaleform::Render::CacheablePrimitive *prim)
{
  Scaleform::Render::ProfileViews *v4; // rax
  Scaleform::Render::Color *v5; // rax
  const Scaleform::Render::Matrix2x4<float> *v6; // rbx
  Scaleform::Render::MatrixState *v7; // rax
  Scaleform::Render::RenderSync *v8; // rax
  int v9; // [rsp+40h] [rbp-68h] BYREF
  char v10[12]; // [rsp+44h] [rbp-64h] BYREF
  Scaleform::Render::Matrix2x4<float> v11; // [rsp+50h] [rbp-58h] BYREF
  float pr; // [rsp+70h] [rbp-38h] BYREF
  float pg; // [rsp+74h] [rbp-34h] BYREF
  float pb; // [rsp+78h] [rbp-30h] BYREF
  float pa; // [rsp+7Ch] [rbp-2Ch] BYREF

  v4 = this->GetProfiler(this);
  v4->SetDrawMode(v4, DrawMode_CachedPrim);
  v9 = -1;
  v5 = (Scaleform::Render::Color *)((__int64 (__fastcall *)(Scaleform::Render::ProfileViews *, char *, int *))this->Profiler.GetColor)(
                                     &this->Profiler,
                                     v10,
                                     &v9);
  Scaleform::Render::Color::GetRGBAFloat(v5, &pr, &pg, &pb, &pa);
  this->ShaderData.SetStaticShader(&this->ShaderData, ST_BatchSolid, this->MappedXY16iAlphaSolid[1]);
  if ( !this->ShaderData.PrimitiveOpen )
  {
    this->ShaderData.PrimitiveOpen = 1;
    this->ShaderData.CurrentPrimitiveMeshCount = 1;
    *(_QWORD *)this->ShaderData.UniformSet = 0i64;
    *(_QWORD *)&this->ShaderData.UniformSet[8] = 0i64;
    *(_QWORD *)&this->ShaderData.UniformSet[16] = 0i64;
    *(_WORD *)&this->ShaderData.UniformSet[24] = 0;
    this->ShaderData.Textures[0] = 0i64;
    this->ShaderData.Textures[1] = 0i64;
    this->ShaderData.Textures[2] = 0i64;
    this->ShaderData.Textures[3] = 0i64;
  }
  v6 = (const Scaleform::Render::Matrix2x4<float> *)&prim->PrimitiveArea.Data.Data->pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[prim->PrimitiveArea.Data.Data->pHandle->pHeader->Format & 0xF].Offsets[4] + 1];
  v7 = this->GetMatrices(this);
  Scaleform::Render::Matrix2x4<float>::SetToAppend(&v11, v6, &v7->UserView);
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    &this->ShaderData,
    &this->ShaderData.CurShader,
    14i64,
    (const float *)&v11,
    8u,
    0,
    0);
  Scaleform::Render::ShaderInterfaceStoragelessBase<Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderPair>::SetUniform(
    &this->ShaderData,
    &this->ShaderData.CurShader,
    6i64,
    &pr,
    4u,
    0,
    0);
  Scaleform::Render::GL::ShaderInterface::Finish(&this->ShaderData, 1u);
  this->setBatchUnitSquareVertexStream(this);
  this->drawPrimitive(this, 6u, 1u);
  if ( this->GetRenderSync(this) )
  {
    v8 = this->GetRenderSync(this);
    Scaleform::Render::RenderSync::NotifySubmission(v8, SubmissionType_DrawCall);
  }
}

void __fastcall Scaleform::Render::GL::MatrixState::recalculateUVPOC(Scaleform::Render::GL::MatrixState *this)
{
  Scaleform::Render::Matrix4x4<float> *p_ViewRectCompensated3D; // rdi
  int v3; // kr04_4
  int v4; // er9
  int v5; // kr0C_4
  int v6; // eax
  float v7; // xmm1_4
  int v8; // eax
  float v9; // xmm0_4
  float v10; // xmm1_4
  int v11; // eax
  Scaleform::Render::Matrix4x4<float> *updated; // rax
  Scaleform::Render::HAL *pHAL; // rcx
  const Scaleform::Render::Matrix4x4<float> *v14; // rsi
  __int128 v15; // xmm1
  __int128 v16; // xmm0
  __int128 v17; // xmm1
  Scaleform::Render::Matrix4x4<float> v18; // [rsp+28h] [rbp-E0h] BYREF
  Scaleform::Render::Matrix4x4<float> m1; // [rsp+68h] [rbp-A0h] BYREF
  Scaleform::Render::Matrix4x4<float> m2; // [rsp+A8h] [rbp-60h] BYREF
  Scaleform::Render::Matrix4x4<float> v21; // [rsp+E8h] [rbp-20h] BYREF
  Scaleform::Render::Matrix4x4<float> v22; // [rsp+128h] [rbp+20h] BYREF
  Scaleform::Render::Matrix4x4<float> v23; // [rsp+168h] [rbp+60h] BYREF
  Scaleform::Render::Matrix4x4<float> v24; // [rsp+1A8h] [rbp+A0h] BYREF
  Scaleform::Render::Matrix4x4<float> v25; // [rsp+1E8h] [rbp+E0h] BYREF
  Scaleform::Render::Matrix4x4<float> v26; // [rsp+228h] [rbp+120h] BYREF
  Scaleform::Render::Matrix4x4<float> v27; // [rsp+268h] [rbp+160h] BYREF

  if ( this->UVPOChanged )
  {
    if ( this->ViewRect.x1 == this->ViewRectOriginal.x1
      && this->ViewRect.x2 == this->ViewRectOriginal.x2
      && this->ViewRect.y1 == this->ViewRectOriginal.y1
      && this->ViewRect.y2 == this->ViewRectOriginal.y2
      || this->ViewRectOriginal.x2 == this->ViewRectOriginal.x1
      && this->ViewRectOriginal.y2 == this->ViewRectOriginal.y1 )
    {
      p_ViewRectCompensated3D = &this->ViewRectCompensated3D;
      this->ViewRectCompensated3D = Scaleform::Render::Matrix4x4<float>::Identity;
    }
    else
    {
      v3 = this->ViewRectOriginal.y1 + this->ViewRectOriginal.y2;
      v4 = (this->ViewRect.x1 + this->ViewRect.x2) / 2 - (this->ViewRectOriginal.x1 + this->ViewRectOriginal.x2) / 2;
      v5 = this->ViewRect.y1 + this->ViewRect.y2;
      memset(&m2, 0, sizeof(m2));
      v6 = this->ViewRectOriginal.x2 - this->ViewRectOriginal.x1;
      m2.M[3][3] = 1.0;
      m2.M[2][2] = 1.0;
      v7 = (float)v6;
      v8 = this->ViewRectOriginal.y2 - this->ViewRectOriginal.y1;
      m2.M[0][0] = v7 / (float)(this->ViewRect.x2 - this->ViewRect.x1);
      v9 = (float)(this->ViewRect.y2 - this->ViewRect.y1);
      memset(&m1, 0, sizeof(m1));
      v10 = (float)v8 / v9;
      v11 = this->ViewRect.x2 - this->ViewRect.x1;
      m1.M[0][0] = 1.0;
      m1.M[1][1] = 1.0;
      m1.M[2][2] = 1.0;
      m1.M[3][3] = 1.0;
      m2.M[1][1] = v10;
      LODWORD(m1.M[0][3]) = COERCE_UNSIGNED_INT((float)((float)v4 + (float)v4) / (float)v11) ^ _xmm;
      p_ViewRectCompensated3D = &this->ViewRectCompensated3D;
      m1.M[1][3] = (float)((float)(v5 / 2 - v3 / 2) + (float)(v5 / 2 - v3 / 2))
                 / (float)(this->ViewRect.y2 - this->ViewRect.y1);
      Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&this->ViewRectCompensated3D, &m1, &m2);
    }
    updated = Scaleform::Render::MatrixState::updateStereoProjection(this, 1.0);
    pHAL = this->pHAL;
    v14 = updated;
    *(_QWORD *)&v18.M[1][0] = 0x3F80000000000000i64;
    *(_QWORD *)&v18.M[3][2] = 0x3F80000000000000i64;
    *(_OWORD *)&v18.M[0][0] = 0x3F800000ui64;
    *(_OWORD *)&v18.M[2][2] = 0x3F800000ui64;
    *(_OWORD *)&v18.M[1][2] = 0ui64;
    if ( pHAL )
    {
      if ( (pHAL->HALState & 0x10) != 0 )
      {
        v21.M[1][0] = 0.0;
        v21.M[1][1] = FLOAT_N1_0;
        v22 = v18;
        *(_QWORD *)&v21.M[3][2] = 0x3F80000000000000i64;
        *(_QWORD *)&v21.M[1][2] = 0i64;
        *(_QWORD *)&v21.M[2][0] = 0i64;
        *(_QWORD *)&v21.M[3][0] = 0i64;
        *(_OWORD *)&v21.M[0][0] = 0x3F800000ui64;
        *(_QWORD *)&v21.M[2][2] = 1065353216i64;
        Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v18, &v21, &v22);
      }
    }
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v24, &v18, p_ViewRectCompensated3D);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v26, &this->User3D, &v24);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v25, &this->Orient3D, v14);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v27, &v26, &v25);
    Scaleform::Render::Matrix4x4<float>::MultiplyMatrix(&v23, &v27, &this->View3D);
    v15 = *(_OWORD *)&v23.M[1][0];
    *(_OWORD *)&this->UVPO.M[0][0] = *(_OWORD *)&v23.M[0][0];
    v16 = *(_OWORD *)&v23.M[2][0];
    *(_OWORD *)&this->UVPO.M[1][0] = v15;
    v17 = *(_OWORD *)&v23.M[3][0];
    *(_OWORD *)&this->UVPO.M[2][0] = v16;
    *(_OWORD *)&this->UVPO.M[3][0] = v17;
    this->UVPOChanged = 0;
  }
}

void __fastcall Scaleform::Render::GL::HAL::setBatchUnitSquareVertexStream(Scaleform::Render::GL::HAL *this)
{
  Scaleform::Render::GL::HAL::setVertexArray(
    this,
    &Scaleform::Render::VertexXY16iInstance::Format,
    &this->Cache.MaskEraseBatchVertexBuffer,
    &this->Cache.MaskEraseBatchVAO);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *pTable; // rbx
  __int64 v10; // rax
  const Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> > *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> > v15; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 2;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 56 * v5 + 16, &v14);
    v15.pTable->EntryCount = 0i64;
    v15.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 56i64;
        *(_QWORD *)((char *)&v15.pTable[-2] + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        pTable = this->pTable;
        if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v6) != -2i64 )
        {
          v10 = 16i64;
          v11 = (const Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash> > *)((char *)&pTable[2] + v6);
          v12 = 5381i64;
          do
          {
            v13 = *((unsigned __int8 *)v11 + --v10);
            v12 = v13 + 65599 * v12;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>>(
            &v15,
            pheapAddr,
            v11,
            v12);
          *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v6) = -2i64;
        }
        v6 += 56i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v15.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::SourceFormatHash,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>,Scaleform::HashNode<Scaleform::Render::SourceFormatHash,Scaleform::Render::ResultFormat,Scaleform::FixedSizeHash<Scaleform::Render::SourceFormatHash>>::NodeHashF>>::Clear(this);
  }
}

void __fastcall Scaleform::Render::GL::HAL::setRenderTargetImpl(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::RenderTargetData *phdinput,
        unsigned int flags,
        const Scaleform::Render::Color *clearColor)
{
  char v7; // bp
  __int64 v8; // rax
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  Scaleform::Render::DepthStencilBuffer *pObject; // rcx
  __int64 v11; // rdi
  Scaleform::RefCountVImpl *v12; // rbx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::Render::GL::GraphicsDevice *v14; // rax
  Scaleform::Render::GL::GraphicsDevice *v15; // rax
  Scaleform::Render::GL::GraphicsDevice *v16; // rax
  Scaleform::Render::GL::GraphicsDevice *v17; // rax
  float pr; // [rsp+30h] [rbp-18h] BYREF
  float pg; // [rsp+34h] [rbp-14h] BYREF
  float pb; // [rsp+38h] [rbp-10h] BYREF
  float pa[3]; // [rsp+3Ch] [rbp-Ch] BYREF

  v7 = flags;
  v8 = ((__int64 (*)(void))this->GetGraphicsDevice)();
  (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::DepthStencilBuffer *))(*(_QWORD *)v8 + 88i64))(
    v8,
    36160i64,
    phdinput[1].pDepthStencilBuffer.pObject);
  v9 = this->GetGraphicsDevice(this);
  v9->glDisable(v9, 3089u);
  if ( phdinput[1].pDepthStencilBuffer.pObject )
  {
    pObject = phdinput->pDepthStencilBuffer.pObject;
    if ( pObject )
      v11 = (__int64)pObject->GetSurface(pObject);
    else
      v11 = 0i64;
    v12 = 0i64;
    if ( v11 )
    {
      v13 = *(Scaleform::RefCountVImpl **)(v11 + 72);
      if ( v13 )
        Scaleform::Render::RenderBuffer::AddRef(v13);
      v12 = *(Scaleform::RefCountVImpl **)(v11 + 72);
    }
    v14 = this->GetGraphicsDevice(this);
    v14->glFramebufferRenderbuffer(v14, 36160u, 36128u, 36161u, (Scaleform::Render::GL::HALGLRenderbuffer *)v12);
    Scaleform::Render::GL::DepthStencilSurface::CurrentFormatHasDepth();
    v15 = this->GetGraphicsDevice(this);
    ((void (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *, __int64, __int64))v15->glFramebufferRenderbuffer)(
      v15,
      36160i64,
      36096i64);
    if ( v12 )
      Scaleform::RefCountImpl::Release(v12);
  }
  if ( (v7 & 1) == 0 )
  {
    Scaleform::Render::Color::GetRGBAFloat((Scaleform::Render::Color *)clearColor, &pr, &pg, &pb, pa);
    v16 = this->GetGraphicsDevice(this);
    ((void (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *))v16->glClearColor)(v16);
    v17 = this->GetGraphicsDevice(this);
    v17->glClear(v17, 0x4000u);
  }
}

void __fastcall Scaleform::Render::GL::HAL::setVertexArray(
        Scaleform::Render::GL::HAL *this,
        const Scaleform::Render::VertexFormat *pFormat,
        Scaleform::Render::GL::HALGLBuffer *buffer,
        Scaleform::Render::GL::HALGLVertexArray *vao)
{
  Scaleform::Render::GL::GraphicsDevice *v8; // rax
  Scaleform::Render::GL::HAL_vtbl *v9; // rax
  __int64 v10; // rax
  Scaleform::Render::GL::GraphicsDevice *v11; // rax
  Scaleform::Render::GL::VertexBuilder_Legacy output; // [rsp+20h] [rbp-28h] BYREF

  if ( Scaleform::Render::GL::HAL::ShouldUseVAOs(this) )
  {
    v8 = this->GetGraphicsDevice(this);
    v8->glBindVertexArray(v8, vao);
  }
  else
  {
    output.Stride = pFormat->Size;
    v9 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    output.pHal = this;
    output.VertexOffset = 0i64;
    v10 = (__int64)v9->GetGraphicsDevice(this);
    (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::GL::HALGLBuffer *))(*(_QWORD *)v10 + 72i64))(
      v10,
      34962i64,
      buffer);
    v11 = this->GetGraphicsDevice(this);
    v11->glBindBuffer(v11, 34963u, 0i64);
    Scaleform::Render::BuildVertexArray<Scaleform::Render::GL::VertexBuilder_Legacy>(pFormat, &output);
  }
}

unsigned __int64 __fastcall Scaleform::Render::GL::HAL::setVertexArray(
        Scaleform::Render::GL::HAL *this,
        const Scaleform::Render::VertexFormat *pformat,
        Scaleform::Render::MeshCacheItem *pmeshBase,
        unsigned __int64 vboffset)
{
  Scaleform::Render::MeshCacheItem *pPrev; // rbx
  Scaleform::RefCountVImpl *AllocSize; // rcx
  Scaleform::Render::MeshCacheItem_vtbl *v10; // rdi
  Scaleform::RefCountVImpl *v11; // rbx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rdi
  unsigned __int8 *BufferBase; // rax
  unsigned int Size; // ecx
  Scaleform::Render::GL::HAL_vtbl *v16; // rax
  __int64 v17; // rax
  Scaleform::Render::GL::GraphicsDevice *v18; // rax
  Scaleform::Render::GL::VertexBuilder_Core30 output; // [rsp+30h] [rbp-48h] BYREF

  if ( Scaleform::Render::GL::HAL::ShouldUseVAOs(this) )
  {
    Scaleform::Render::GL::VertexBuilder_Core30::VertexBuilder_Core30(
      &output,
      this,
      pformat,
      (Scaleform::Render::GL::MeshCacheItem *)pmeshBase,
      vboffset);
    Scaleform::Render::BuildVertexArray<Scaleform::Render::GL::VertexBuilder_Core30>(pformat, &output);
  }
  else
  {
    pPrev = pmeshBase[1].pPrev;
    AllocSize = (Scaleform::RefCountVImpl *)pPrev->AllocSize;
    if ( AllocSize )
      Scaleform::Render::RenderBuffer::AddRef(AllocSize);
    v10 = pmeshBase[1].__vftable;
    v11 = (Scaleform::RefCountVImpl *)pPrev->AllocSize;
    v12 = (Scaleform::RefCountVImpl *)v10[10].~MeshCacheItem;
    if ( v12 )
      Scaleform::Render::RenderBuffer::AddRef(v12);
    v13 = (Scaleform::RefCountVImpl *)v10[10].~MeshCacheItem;
    BufferBase = Scaleform::Render::GL::MeshBuffer::GetBufferBase((Scaleform::Render::GL::MeshBuffer *)pmeshBase[1].__vftable);
    Size = pformat->Size;
    output.pMesh = (Scaleform::Render::GL::MeshCacheItem *)((char *)pmeshBase[1].pNext
                                                          + (unsigned __int64)BufferBase
                                                          + vboffset);
    v16 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    output.Stride = Size;
    output.pHal = this;
    v17 = (__int64)v16->GetGraphicsDevice(this);
    (*(void (__fastcall **)(__int64, __int64, Scaleform::RefCountVImpl *))(*(_QWORD *)v17 + 72i64))(v17, 34962i64, v13);
    v18 = this->GetGraphicsDevice(this);
    v18->glBindBuffer(v18, 34963u, (Scaleform::Render::GL::HALGLBuffer *)v11);
    if ( v13 )
      Scaleform::RefCountImpl::Release(v13);
    if ( v11 )
      Scaleform::RefCountImpl::Release(v11);
    Scaleform::Render::BuildVertexArray<Scaleform::Render::GL::VertexBuilder_Legacy>(
      pformat,
      (Scaleform::Render::GL::VertexBuilder_Legacy *)&output);
  }
  return ((unsigned __int64)pmeshBase[1].PrimitiveBatches.Root.pPrev
        + (unsigned __int64)Scaleform::Render::GL::MeshBuffer::GetBufferBase((Scaleform::Render::GL::MeshBuffer *)pmeshBase[1].pPrev)) >> 1;
}

unsigned __int64 __fastcall Scaleform::Render::GL::HAL::setVertexArray(
        Scaleform::Render::GL::HAL *this,
        const Scaleform::Render::ComplexMesh::FillRecord *fr,
        unsigned int formatIndex,
        Scaleform::Render::MeshCacheItem *pmesh)
{
  __int64 v5; // r14
  Scaleform::Render::FenceResource *v8; // rbx
  Scaleform::Render::RenderSync *v9; // rax

  v5 = formatIndex;
  if ( this->GetRenderSync(this) )
  {
    v8 = &pmesh->Scaleform::Render::FenceResource;
    if ( !pmesh )
      v8 = 0i64;
    v9 = this->GetRenderSync(this);
    Scaleform::Render::RenderSync::AddFenceResource(v9, v8);
  }
  return Scaleform::Render::GL::HAL::setVertexArray(this, fr->pFormats[v5], pmesh, fr->VertexByteOffset);
}

unsigned __int64 __fastcall Scaleform::Render::GL::HAL::setVertexArray(
        Scaleform::Render::GL::HAL *this,
        Scaleform::Render::PrimitiveBatch *pbatch,
        Scaleform::Render::MeshCacheItem *pmesh)
{
  Scaleform::Render::FenceResource *v6; // rbx
  Scaleform::Render::RenderSync *v7; // rax

  if ( this->GetRenderSync(this) )
  {
    v6 = &pmesh->Scaleform::Render::FenceResource;
    if ( !pmesh )
      v6 = 0i64;
    v7 = this->GetRenderSync(this);
    Scaleform::Render::RenderSync::AddFenceResource(v7, v6);
  }
  return Scaleform::Render::GL::HAL::setVertexArray(this, pbatch->pFormat, pmesh, 0i64);
}

void __fastcall Scaleform::Render::GL::HAL::updateViewport(Scaleform::Render::GL::HAL *this)
{
  volatile unsigned int HALState; // eax
  Scaleform::Render::Rect<int> *p_ViewRect; // rdi
  Scaleform::Render::MatrixState *pObject; // r9
  int y2; // er8
  int x2; // edx
  int y1; // ecx
  Scaleform::Render::GL::GraphicsDevice *v8; // rax
  Scaleform::Render::GL::HAL_vtbl *v9; // rax
  Scaleform::Render::GL::HAL *v10; // rcx
  __int64 v11; // rax
  __int128 v12; // xmm0
  int x1; // eax
  __int128 v14; // xmm1
  int v15; // eax
  Scaleform::Render::MatrixState *v16; // rax
  Scaleform::Render::GL::GraphicsDevice *v17; // rax
  __int64 v18; // rax
  Scaleform::Render::GL::GraphicsDevice *v19; // rax
  Scaleform::Render::GL::GraphicsDevice *v20; // rax
  Scaleform::Render::Viewport v21; // [rsp+30h] [rbp-30h] BYREF

  HALState = this->HALState;
  *(_QWORD *)&v21.BufferWidth = 0i64;
  *(_QWORD *)&v21.Left = 0i64;
  v21.Height = 1;
  v21.Width = 1;
  memset(&v21.ScissorLeft, 0, 20);
  if ( (HALState & 0x20) == 0 )
  {
    v20 = this->GetGraphicsDevice(this);
    v20->glViewport(v20, 0, 0, 0, 0);
    goto LABEL_8;
  }
  p_ViewRect = &this->ViewRect;
  ((void (__fastcall *)(Scaleform::Render::GL::HAL *, _QWORD, Scaleform::Render::Matrix2x4<float> *, Scaleform::Render::Rect<int> *, int, int, _QWORD, _QWORD, _QWORD, _QWORD, _QWORD, unsigned int))this->calcHWViewMatrix)(
    this,
    this->VP.Flags,
    &this->Matrices.pObject->View2D,
    &this->ViewRect,
    this->ViewRect.x1 - this->VP.Left,
    this->ViewRect.y1 - this->VP.Top,
    *(_QWORD *)&v21.BufferWidth,
    *(_QWORD *)&v21.Left,
    *(_QWORD *)&v21.Width,
    *(_QWORD *)&v21.ScissorLeft,
    *(_QWORD *)&v21.ScissorWidth,
    v21.Flags);
  this->Matrices.pObject->SetUserMatrix(this->Matrices.pObject, &this->Matrices.pObject->User);
  pObject = this->Matrices.pObject;
  y2 = p_ViewRect->y2;
  x2 = p_ViewRect->x2;
  y1 = p_ViewRect->y1;
  pObject->ViewRect.x1 = p_ViewRect->x1;
  pObject->ViewRect.y1 = y1;
  pObject->ViewRect.x2 = x2;
  pObject->ViewRect.y2 = y2;
  this->Matrices.pObject->UVPOChanged = 1;
  if ( (this->HALState & 0x10) != 0 )
  {
    v8 = this->GetGraphicsDevice(this);
    v8->glViewport(v8, this->VP.Left, this->VP.Top, this->VP.Width, this->VP.Height);
    v9 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    v10 = this;
  }
  else
  {
    v12 = *(_OWORD *)&this->VP.BufferWidth;
    v21.Flags = this->VP.Flags;
    x1 = p_ViewRect->x1;
    v14 = *(_OWORD *)&this->VP.Width;
    *(_OWORD *)&v21.BufferWidth = v12;
    v21.Left = x1;
    *(_QWORD *)&v12 = *(_QWORD *)&this->VP.ScissorWidth;
    v21.Top = this->ViewRect.y1;
    v15 = p_ViewRect->x2 - p_ViewRect->x1;
    *(_OWORD *)&v21.Width = v14;
    v21.Width = v15;
    v21.Height = p_ViewRect->y2 - p_ViewRect->y1;
    v16 = this->Matrices.pObject;
    *(_QWORD *)&v21.ScissorWidth = v12;
    Scaleform::Render::Viewport::SetStereoViewport(&v21, v16->S3DDisplay);
    v17 = this->GetGraphicsDevice(this);
    v17->glViewport(v17, v21.Left, this->VP.BufferHeight - v21.Height - v21.Top, v21.Width, v21.Height);
    v10 = this;
    v9 = this->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    if ( (this->VP.Flags & 4) != 0 )
    {
      v18 = (__int64)v9->GetGraphicsDevice(this);
      (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v18 + 392i64))(v18, 3089i64);
      v19 = this->GetGraphicsDevice(this);
      v19->glScissor(
        v19,
        this->VP.ScissorLeft,
        this->VP.BufferHeight - this->VP.ScissorTop - this->VP.ScissorHeight,
        this->VP.ScissorWidth,
        this->VP.ScissorHeight);
      goto LABEL_8;
    }
  }
  v11 = (__int64)v9->GetGraphicsDevice(v10);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v11 + 352i64))(v11, 3089i64);
LABEL_8:
  Scaleform::Render::GL::ShaderInterface::BeginScene(&this->ShaderData);
}

