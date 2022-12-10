#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_graphicsdevice.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shaderhal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_extensions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_texture.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_graphicsdevice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"

class Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation>
{
protected:
	Scaleform::Render::GL::HALGLUniformLocation * pObject; // 0x0
public:
	Ptr<Scaleform::Render::GL::HALGLUniformLocation>(const Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> &);
	Ptr<Scaleform::Render::GL::HALGLUniformLocation>(Scaleform::Render::GL::HALGLUniformLocation *);
	Ptr<Scaleform::Render::GL::HALGLUniformLocation>(Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> &, Scaleform::PickType);
	Ptr<Scaleform::Render::GL::HALGLUniformLocation>(Scaleform::Pickable<Scaleform::Render::GL::HALGLUniformLocation>);
	Ptr<Scaleform::Render::GL::HALGLUniformLocation>(Scaleform::Render::GL::HALGLUniformLocation &);
	Ptr<Scaleform::Render::GL::HALGLUniformLocation>();
	~Ptr<Scaleform::Render::GL::HALGLUniformLocation>();
	bool operator==(Scaleform::Render::GL::HALGLUniformLocation *);
	bool operator==(const Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> &);
	bool operator!=(Scaleform::Render::GL::HALGLUniformLocation *);
	bool operator!=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> &);
	bool operator<(const Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & operator=(Scaleform::Pickable<Scaleform::Render::GL::HALGLUniformLocation>);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & operator=(Scaleform::Render::GL::HALGLUniformLocation &);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & operator=(Scaleform::Render::GL::HALGLUniformLocation *);
	const Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & operator=(const Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & SetPtr(Scaleform::Pickable<Scaleform::Render::GL::HALGLUniformLocation>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & SetPtr(Scaleform::Render::GL::HALGLUniformLocation &);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & SetPtr(Scaleform::Render::GL::HALGLUniformLocation *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & SetPtr(const Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> &);
	void NullWithoutRelease();
	void Clear();
	Scaleform::Render::GL::HALGLUniformLocation * & GetRawRef();
	Scaleform::Render::GL::HALGLUniformLocation * GetPtr();
	Scaleform::Render::GL::HALGLUniformLocation & operator*();
	Scaleform::Render::GL::HALGLUniformLocation * operator->();
	Scaleform::Render::GL::HALGLUniformLocation * operator class Scaleform::Render::GL::HALGLUniformLocation *();
	Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & Pick(Scaleform::Render::GL::HALGLUniformLocation *);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & Pick(Scaleform::Pickable<Scaleform::Render::GL::HALGLUniformLocation>);
	Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> & Pick(Scaleform::Ptr<Scaleform::Render::GL::HALGLUniformLocation> &);
};
struct Scaleform::Render::GL::GLEnumString
{
	unsigned long key; // 0x0
	const char * str; // 0x8
};
void Scaleform::Render::GL::DebugMessageCallback(unsigned long source, unsigned long type, unsigned long id, unsigned long severity, long __formal, const char * message, void * __formal); // 0x1405DD520
Scaleform::Render::GL::HALGLFramebuffer::HALGLFramebuffer(unsigned long name, unsigned long binding, Scaleform::Render::GL::GraphicsDevice & device); // 0x1405DC930
const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment * Scaleform::Render::GL::HALGLFramebuffer::GetAttachment(unsigned long a0); // 0x1405DD760
Scaleform::Render::GL::HALGLRenderbuffer::HALGLRenderbuffer(unsigned long name, unsigned long target, Scaleform::Render::GL::GraphicsDevice & device); // 0x1405DCCD0
Scaleform::Render::GL::HALGLRenderbuffer::~HALGLRenderbuffer(); // 0x1405DCE20
Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment & Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::operator=(const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment & __that); // 0x1405DCE90
Scaleform::Render::GL::GraphicsDevice::GraphicsDevice(); // 0x1405DC800
Scaleform::Render::GL::GraphicsDevice::GraphicsDevice(const Scaleform::Render::GL::GraphicsDevice & other); // 0x1405DC780
Scaleform::Render::GL::GraphicsDevice & Scaleform::Render::GL::GraphicsDevice::operator=(const Scaleform::Render::GL::GraphicsDevice & other); // 0x1405DCF10
bool Scaleform::Render::GL::GraphicsDevice::CheckExtension(Scaleform::Render::GL::GLExtensionType type); // 0x1405DD400
bool Scaleform::Render::GL::GraphicsDevice::CheckGLVersion(unsigned long reqMajor, unsigned long reqMinor); // 0x1405DD410
unsigned long Scaleform::Render::GL::GraphicsDevice::GetCaps(); // 0x1405DD820
void Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(); // 0x1405DDA70
Scaleform::Render::GL::HALGLFramebuffer * Scaleform::Render::GL::GraphicsDevice::GetBoundFramebuffer(unsigned long a0); // 0x1405DD7C0
Scaleform::Render::GL::GraphicsDeviceImmediate::GraphicsDeviceImmediate(); // 0x1405DC8A0
void Scaleform::Render::GL::GraphicsDeviceImmediate::Initialize(unsigned long configFlags); // 0x1405DD830
void Scaleform::Render::GL::GraphicsDeviceImmediate::Begin(); // 0x1405DD310
void Scaleform::Render::GL::GraphicsDeviceImmediate::glActiveTexture(unsigned long a0); // 0x1405E2B70
void Scaleform::Render::GL::GraphicsDeviceImmediate::glAttachShader(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLShader * a1); // 0x1405E2C50
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBindAttribLocation(Scaleform::Render::GL::HALGLProgram * a0, unsigned long a1, const char * a2); // 0x1405E2D50
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBindBuffer(unsigned long a0, Scaleform::Render::GL::HALGLBuffer * a1); // 0x1405E2E50
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBindFragDataLocation(Scaleform::Render::GL::HALGLProgram * a0, unsigned long a1, const char * a2); // 0x1405E30C0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBindFramebuffer(unsigned long a0, Scaleform::Render::GL::HALGLFramebuffer * a1); // 0x1405E31C0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBindProgramPipeline(Scaleform::Render::GL::HALGLProgramPipeline * a0); // 0x1405E33D0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBindRenderbuffer(unsigned long a0, Scaleform::Render::GL::HALGLRenderbuffer * a1); // 0x1405E3520
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBindTexture(unsigned long a0, Scaleform::Render::GL::HALGLTexture * a1); // 0x1405E3720
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBindVertexArray(Scaleform::Render::GL::HALGLVertexArray * a0); // 0x1405E3950
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBlendEquation(unsigned long a0); // 0x1405E3AA0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBlendEquationSeparate(unsigned long a0, unsigned long a1); // 0x1405E3B60
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBlendFunc(unsigned long a0, unsigned long a1); // 0x1405E3C20
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBlendFuncSeparate(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3); // 0x1405E3CE0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBufferData(unsigned long a0, long long a1, const void * a2, unsigned long a3); // 0x1405E3DC0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glBufferSubData(unsigned long a0, long long a1, long long a2, const void * a3); // 0x1405E4100
unsigned long Scaleform::Render::GL::GraphicsDeviceImmediate::glCheckFramebufferStatus(unsigned long a0); // 0x1405E4260
void Scaleform::Render::GL::GraphicsDeviceImmediate::glClear(unsigned long a0); // 0x1405E4330
void Scaleform::Render::GL::GraphicsDeviceImmediate::glClearColor(float a0, float a1, float a2, float a3); // 0x1405E4400
unsigned long Scaleform::Render::GL::GraphicsDeviceImmediate::glClientWaitSync(__GLsync * a0, unsigned long a1, unsigned long long a2); // 0x1405E44F0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glColorMask(unsigned char a0, unsigned char a1, unsigned char a2, unsigned char a3); // 0x1405E45D0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glCompileShader(Scaleform::Render::GL::HALGLShader * a0); // 0x1405E46C0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glCompressedTexImage2D(unsigned long a0, long a1, unsigned long a2, long a3, long a4, long a5, long a6, const void * a7); // 0x1405E47F0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glCreateProgram(Scaleform::Render::GL::HALGLProgram * a0); // 0x1405E4990
void Scaleform::Render::GL::GraphicsDeviceImmediate::glCreateShader(unsigned long a0, Scaleform::Render::GL::HALGLShader * a1); // 0x1405E4A80
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDebugMessageCallback(void(*a0)(unsigned long, unsigned long, unsigned long, unsigned long, long, const char *, const void *), const void * a1); // 0x1405E4B70
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDebugMessageControl(unsigned long a0, unsigned long a1, unsigned long a2, long a3, const unsigned long * a4, unsigned char a5); // 0x1405E4C40
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteBuffers(long a0, Scaleform::Render::GL::HALGLBuffer * * a1); // 0x1405E4D40
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteFramebuffers(long a0, Scaleform::Render::GL::HALGLFramebuffer * * a1); // 0x1405E4EB0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteProgram(Scaleform::Render::GL::HALGLProgram * a0); // 0x1405E5020
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteProgramPipelines(long a0, Scaleform::Render::GL::HALGLProgramPipeline * * a1); // 0x1405E5100
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteRenderbuffers(long a0, Scaleform::Render::GL::HALGLRenderbuffer * * a1); // 0x1405E5270
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteShader(Scaleform::Render::GL::HALGLShader * a0); // 0x1405E53E0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteSync(__GLsync * a0); // 0x1405E54C0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteTextures(long a0, Scaleform::Render::GL::HALGLTexture * * a1); // 0x1405E5590
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteVertexArrays(long a0, Scaleform::Render::GL::HALGLVertexArray * * a1); // 0x1405E5700
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDepthFunc(unsigned long a0); // 0x1405E5870
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDepthMask(unsigned char a0); // 0x1405E5940
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDisable(unsigned long a0); // 0x1405E5A10
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDisableVertexAttribArray(unsigned long a0); // 0x1405E5AE0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDrawArrays(unsigned long a0, long a1, long a2); // 0x1405E5BB0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDrawElements(unsigned long a0, long a1, unsigned long a2, const void * a3); // 0x1405E5C90
void Scaleform::Render::GL::GraphicsDeviceImmediate::glDrawElementsInstanced(unsigned long a0, long a1, unsigned long a2, const void * a3, long a4); // 0x1405E5D80
void Scaleform::Render::GL::GraphicsDeviceImmediate::glEnable(unsigned long a0); // 0x1405E5E80
void Scaleform::Render::GL::GraphicsDeviceImmediate::glEnableVertexAttribArray(unsigned long a0); // 0x1405E5F50
__GLsync * Scaleform::Render::GL::GraphicsDeviceImmediate::glFenceSync(unsigned long a0, unsigned long a1); // 0x1405E6020
void Scaleform::Render::GL::GraphicsDeviceImmediate::glFlush(); // 0x1405E6100
void Scaleform::Render::GL::GraphicsDeviceImmediate::glFlushMappedBufferRange(unsigned long a0, long long a1, long long a2); // 0x1405E61D0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glFramebufferRenderbuffer(unsigned long a0, unsigned long a1, unsigned long a2, Scaleform::Render::GL::HALGLRenderbuffer * a3); // 0x1405E62B0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glFramebufferTexture2D(unsigned long a0, unsigned long a1, unsigned long a2, Scaleform::Render::GL::HALGLTexture * a3, long a4); // 0x1405E66A0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGenBuffers(long a0, Scaleform::Render::GL::HALGLBuffer * * a1); // 0x1405E6B00
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGenFramebuffers(long a0, Scaleform::Render::GL::HALGLFramebuffer * * a1); // 0x1405E6C70
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGenProgramPipelines(long a0, Scaleform::Render::GL::HALGLProgramPipeline * * a1); // 0x1405E6DE0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGenRenderbuffers(long a0, Scaleform::Render::GL::HALGLRenderbuffer * * a1); // 0x1405E6F50
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGenTextures(long a0, Scaleform::Render::GL::HALGLTexture * * a1); // 0x1405E70C0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGenVertexArrays(long a0, Scaleform::Render::GL::HALGLVertexArray * * a1); // 0x1405E7230
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGenerateMipmap(unsigned long a0); // 0x1405E73A0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetActiveUniform(unsigned long a0, unsigned long a1, long a2, long * a3, long * a4, unsigned long * a5, char * a6); // 0x1405E7470
unsigned long Scaleform::Render::GL::GraphicsDeviceImmediate::glGetError(); // 0x1405E7580
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetFloatv(unsigned long a0, float * a1); // 0x1405E7650
long Scaleform::Render::GL::GraphicsDeviceImmediate::glGetFragDataLocation(Scaleform::Render::GL::HALGLProgram * a0, const char * a1); // 0x1405E7720
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetFramebufferAttachmentParameteriv(unsigned long a0, unsigned long a1, unsigned long a2, long * a3); // 0x1405E7810
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetIntegerv(unsigned long a0, long * a1); // 0x1405E7A20
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetProgramBinary(Scaleform::Render::GL::HALGLProgram * a0, long a1, long * a2, unsigned long * a3, void * a4); // 0x1405E7AF0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetProgramInfoLog(Scaleform::Render::GL::HALGLProgram * a0, long a1, long * a2, char * a3); // 0x1405E7C00
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetProgramiv(Scaleform::Render::GL::HALGLProgram * a0, unsigned long a1, long * a2); // 0x1405E7D00
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetRenderbufferParameteriv(unsigned long a0, unsigned long a1, long * a2); // 0x1405E7DF0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetShaderInfoLog(Scaleform::Render::GL::HALGLShader * a0, long a1, long * a2, char * a3); // 0x1405E7F30
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetShaderiv(Scaleform::Render::GL::HALGLShader * a0, unsigned long a1, long * a2); // 0x1405E8030
const unsigned char * Scaleform::Render::GL::GraphicsDeviceImmediate::glGetString(unsigned long a0); // 0x1405E8120
const unsigned char * Scaleform::Render::GL::GraphicsDeviceImmediate::glGetStringi(unsigned long a0, unsigned long a1); // 0x1405E81F0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetSynciv(__GLsync * a0, unsigned long a1, long a2, long * a3, long * a4); // 0x1405E82D0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetTexImage(unsigned long a0, long a1, unsigned long a2, unsigned long a3, void * a4); // 0x1405E83D0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetTexLevelParameteriv(unsigned long a0, long a1, unsigned long a2, long * a3); // 0x1405E84D0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetTexParameteriv(unsigned long a0, unsigned long a1, long * a2); // 0x1405E85C0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glGetUniformLocation(Scaleform::Render::GL::HALGLProgram * a0, const char * a1, Scaleform::Render::GL::HALGLUniformLocation * a2); // 0x1405E86A0
unsigned char Scaleform::Render::GL::GraphicsDeviceImmediate::glIsFramebuffer(Scaleform::Render::GL::HALGLFramebuffer * a0); // 0x1405E8860
unsigned char Scaleform::Render::GL::GraphicsDeviceImmediate::glIsProgram(Scaleform::Render::GL::HALGLProgram * a0); // 0x1405E8930
unsigned char Scaleform::Render::GL::GraphicsDeviceImmediate::glIsRenderbuffer(Scaleform::Render::GL::HALGLRenderbuffer * a0); // 0x1405E8A00
void Scaleform::Render::GL::GraphicsDeviceImmediate::glLinkProgram(Scaleform::Render::GL::HALGLProgram * a0); // 0x1405E8AD0
void * Scaleform::Render::GL::GraphicsDeviceImmediate::glMapBuffer(unsigned long a0, unsigned long a1); // 0x1405E8BB0
void * Scaleform::Render::GL::GraphicsDeviceImmediate::glMapBufferRange(unsigned long a0, long long a1, long long a2, unsigned long a3); // 0x1405E8C90
void Scaleform::Render::GL::GraphicsDeviceImmediate::glPixelStorei(unsigned long a0, long a1); // 0x1405E8E00
void Scaleform::Render::GL::GraphicsDeviceImmediate::glPolygonMode(unsigned long a0, unsigned long a1); // 0x1405E8ED0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glPopGroupMarker(); // 0x1405E8FA0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramBinary(Scaleform::Render::GL::HALGLProgram * a0, unsigned long a1, const void * a2, long a3); // 0x1405E9070
void Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramParameteri(Scaleform::Render::GL::HALGLProgram * a0, unsigned long a1, long a2); // 0x1405E9170
void Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniform1fv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, const float * a3); // 0x1405E9260
void Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniform1iv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, const long * a3); // 0x1405E9380
void Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniform2fv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, const float * a3); // 0x1405E94A0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniform3fv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, const float * a3); // 0x1405E95C0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniform4fv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, const float * a3); // 0x1405E96E0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniformMatrix4fv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, unsigned char a3, const float * a4); // 0x1405E9800
void Scaleform::Render::GL::GraphicsDeviceImmediate::glPushGroupMarker(long a0, const char * a1); // 0x1405E9930
void Scaleform::Render::GL::GraphicsDeviceImmediate::glReadPixels(long a0, long a1, long a2, long a3, unsigned long a4, unsigned long a5, void * a6); // 0x1405E9A00
void Scaleform::Render::GL::GraphicsDeviceImmediate::glReleaseShaderCompiler(); // 0x1405E9B10
void Scaleform::Render::GL::GraphicsDeviceImmediate::glRenderbufferStorage(unsigned long a0, unsigned long a1, long a2, long a3); // 0x1405E9BE0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glScissor(long a0, long a1, long a2, long a3); // 0x1405E9F30
void Scaleform::Render::GL::GraphicsDeviceImmediate::glShaderSource(Scaleform::Render::GL::HALGLShader * a0, long a1, const char * * a2, const long * a3); // 0x1405EA020
void Scaleform::Render::GL::GraphicsDeviceImmediate::glStencilFunc(unsigned long a0, long a1, unsigned long a2); // 0x1405EA2B0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glStencilMask(unsigned long a0); // 0x1405EA390
void Scaleform::Render::GL::GraphicsDeviceImmediate::glStencilOp(unsigned long a0, unsigned long a1, unsigned long a2); // 0x1405EA460
void Scaleform::Render::GL::GraphicsDeviceImmediate::glStringMarker(long a0, const void * a1); // 0x1405EA540
void Scaleform::Render::GL::GraphicsDeviceImmediate::glTexImage2D(unsigned long a0, long a1, long a2, long a3, long a4, long a5, unsigned long a6, unsigned long a7, const void * a8); // 0x1405EA610
void Scaleform::Render::GL::GraphicsDeviceImmediate::glTexParameteri(unsigned long a0, unsigned long a1, long a2); // 0x1405EA8A0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glTexSubImage2D(unsigned long a0, long a1, long a2, long a3, long a4, long a5, unsigned long a6, unsigned long a7, const void * a8); // 0x1405EA980
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform1f(Scaleform::Render::GL::HALGLUniformLocation * a0, float a1); // 0x1405EAAB0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform1fv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, const float * a2); // 0x1405EAB90
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform1i(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1); // 0x1405EAD10
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform1iv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, const long * a2); // 0x1405EADF0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform2f(Scaleform::Render::GL::HALGLUniformLocation * a0, float a1, float a2); // 0x1405EAF70
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform2fv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, const float * a2); // 0x1405EB060
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform3fv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, const float * a2); // 0x1405EB1E0
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform4fv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, const float * a2); // 0x1405EB360
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUniformMatrix4fv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, unsigned char a2, const float * a3); // 0x1405EB4F0
unsigned char Scaleform::Render::GL::GraphicsDeviceImmediate::glUnmapBuffer(unsigned long a0); // 0x1405EB670
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUseProgram(Scaleform::Render::GL::HALGLProgram * a0); // 0x1405EB740
void Scaleform::Render::GL::GraphicsDeviceImmediate::glUseProgramStages(Scaleform::Render::GL::HALGLProgramPipeline * a0, unsigned long a1, Scaleform::Render::GL::HALGLProgram * a2); // 0x1405EB820
void Scaleform::Render::GL::GraphicsDeviceImmediate::glVertexAttribPointer(unsigned long a0, long a1, unsigned long a2, unsigned char a3, long a4, const void * a5); // 0x1405EB950
void Scaleform::Render::GL::GraphicsDeviceImmediate::glViewport(long a0, long a1, long a2, long a3); // 0x1405EBA50
Scaleform::Render::GL::GraphicsDeviceRecorder::GraphicsDeviceRecorder(Scaleform::Render::GL::GraphicsDeviceImmediate & immediateDevice); // 0x1405DC8E0
bool Scaleform::Render::GL::GraphicsDeviceRecorder::ExecuteRecording(Scaleform::Render::GraphicsDevice & playbackDevice); // 0x1405DD680
void Scaleform::Render::GL::GraphicsDeviceRecorder::End(); // 0x1405DD5D0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glActiveTexture(unsigned long a0); // 0x1405E2BA0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glAttachShader(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLShader * a1); // 0x1405E2C80
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBindAttribLocation(Scaleform::Render::GL::HALGLProgram * a0, unsigned long a1, const char * a2); // 0x1405E2D80
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBindBuffer(unsigned long a0, Scaleform::Render::GL::HALGLBuffer * a1); // 0x1405E2F90
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBindFragDataLocation(Scaleform::Render::GL::HALGLProgram * a0, unsigned long a1, const char * a2); // 0x1405E30F0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBindFramebuffer(unsigned long a0, Scaleform::Render::GL::HALGLFramebuffer * a1); // 0x1405E32D0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBindProgramPipeline(Scaleform::Render::GL::HALGLProgramPipeline * a0); // 0x1405E3440
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBindRenderbuffer(unsigned long a0, Scaleform::Render::GL::HALGLRenderbuffer * a1); // 0x1405E3620
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBindTexture(unsigned long a0, Scaleform::Render::GL::HALGLTexture * a1); // 0x1405E3840
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBindVertexArray(Scaleform::Render::GL::HALGLVertexArray * a0); // 0x1405E39C0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBlendEquation(unsigned long a0); // 0x1405E3AB0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBlendEquationSeparate(unsigned long a0, unsigned long a1); // 0x1405E3B70
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBlendFunc(unsigned long a0, unsigned long a1); // 0x1405E3C30
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBlendFuncSeparate(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3); // 0x1405E3CF0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBufferData(unsigned long a0, long long a1, const void * a2, unsigned long a3); // 0x1405E3EE0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glBufferSubData(unsigned long a0, long long a1, long long a2, const void * a3); // 0x1405E4120
unsigned long Scaleform::Render::GL::GraphicsDeviceRecorder::glCheckFramebufferStatus(unsigned long a0); // 0x1405E4280
void Scaleform::Render::GL::GraphicsDeviceRecorder::glClear(unsigned long a0); // 0x1405E4350
void Scaleform::Render::GL::GraphicsDeviceRecorder::glClearColor(float a0, float a1, float a2, float a3); // 0x1405E4420
unsigned long Scaleform::Render::GL::GraphicsDeviceRecorder::glClientWaitSync(__GLsync * a0, unsigned long a1, unsigned long long a2); // 0x1405E4510
void Scaleform::Render::GL::GraphicsDeviceRecorder::glColorMask(unsigned char a0, unsigned char a1, unsigned char a2, unsigned char a3); // 0x1405E45F0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glCompileShader(Scaleform::Render::GL::HALGLShader * a0); // 0x1405E4730
void Scaleform::Render::GL::GraphicsDeviceRecorder::glCompressedTexImage2D(unsigned long a0, long a1, unsigned long a2, long a3, long a4, long a5, long a6, const void * a7); // 0x1405E4810
void Scaleform::Render::GL::GraphicsDeviceRecorder::glCreateProgram(Scaleform::Render::GL::HALGLProgram * a0); // 0x1405E49C0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glCreateShader(unsigned long a0, Scaleform::Render::GL::HALGLShader * a1); // 0x1405E4AB0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDebugMessageCallback(void(*a0)(unsigned long, unsigned long, unsigned long, unsigned long, long, const char *, const void *), const void * a1); // 0x1405E4B90
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDebugMessageControl(unsigned long a0, unsigned long a1, unsigned long a2, long a3, const unsigned long * a4, unsigned char a5); // 0x1405E4C60
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteBuffers(long a0, Scaleform::Render::GL::HALGLBuffer * * a1); // 0x1405E4DD0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteFramebuffers(long a0, Scaleform::Render::GL::HALGLFramebuffer * * a1); // 0x1405E4F40
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteProgram(Scaleform::Render::GL::HALGLProgram * a0); // 0x1405E5040
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteProgramPipelines(long a0, Scaleform::Render::GL::HALGLProgramPipeline * * a1); // 0x1405E5190
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteRenderbuffers(long a0, Scaleform::Render::GL::HALGLRenderbuffer * * a1); // 0x1405E5300
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteShader(Scaleform::Render::GL::HALGLShader * a0); // 0x1405E5400
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteSync(__GLsync * a0); // 0x1405E54E0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteTextures(long a0, Scaleform::Render::GL::HALGLTexture * * a1); // 0x1405E5620
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteVertexArrays(long a0, Scaleform::Render::GL::HALGLVertexArray * * a1); // 0x1405E5790
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDepthFunc(unsigned long a0); // 0x1405E5890
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDepthMask(unsigned char a0); // 0x1405E5960
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDisable(unsigned long a0); // 0x1405E5A30
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDisableVertexAttribArray(unsigned long a0); // 0x1405E5B00
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDrawArrays(unsigned long a0, long a1, long a2); // 0x1405E5BD0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDrawElements(unsigned long a0, long a1, unsigned long a2, const void * a3); // 0x1405E5CB0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glDrawElementsInstanced(unsigned long a0, long a1, unsigned long a2, const void * a3, long a4); // 0x1405E5DA0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glEnable(unsigned long a0); // 0x1405E5EA0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glEnableVertexAttribArray(unsigned long a0); // 0x1405E5F70
__GLsync * Scaleform::Render::GL::GraphicsDeviceRecorder::glFenceSync(unsigned long a0, unsigned long a1); // 0x1405E6040
void Scaleform::Render::GL::GraphicsDeviceRecorder::glFlush(); // 0x1405E6120
void Scaleform::Render::GL::GraphicsDeviceRecorder::glFlushMappedBufferRange(unsigned long a0, long long a1, long long a2); // 0x1405E61F0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glFramebufferRenderbuffer(unsigned long a0, unsigned long a1, unsigned long a2, Scaleform::Render::GL::HALGLRenderbuffer * a3); // 0x1405E6460
void Scaleform::Render::GL::GraphicsDeviceRecorder::glFramebufferTexture2D(unsigned long a0, unsigned long a1, unsigned long a2, Scaleform::Render::GL::HALGLTexture * a3, long a4); // 0x1405E6890
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGenBuffers(long a0, Scaleform::Render::GL::HALGLBuffer * * a1); // 0x1405E6B90
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGenFramebuffers(long a0, Scaleform::Render::GL::HALGLFramebuffer * * a1); // 0x1405E6D00
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGenProgramPipelines(long a0, Scaleform::Render::GL::HALGLProgramPipeline * * a1); // 0x1405E6E70
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGenRenderbuffers(long a0, Scaleform::Render::GL::HALGLRenderbuffer * * a1); // 0x1405E6FE0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGenTextures(long a0, Scaleform::Render::GL::HALGLTexture * * a1); // 0x1405E7150
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGenVertexArrays(long a0, Scaleform::Render::GL::HALGLVertexArray * * a1); // 0x1405E72C0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGenerateMipmap(unsigned long a0); // 0x1405E73C0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetActiveUniform(unsigned long a0, unsigned long a1, long a2, long * a3, long * a4, unsigned long * a5, char * a6); // 0x1405E7490
unsigned long Scaleform::Render::GL::GraphicsDeviceRecorder::glGetError(); // 0x1405E75A0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetFloatv(unsigned long a0, float * a1); // 0x1405E7670
long Scaleform::Render::GL::GraphicsDeviceRecorder::glGetFragDataLocation(Scaleform::Render::GL::HALGLProgram * a0, const char * a1); // 0x1405E7740
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetFramebufferAttachmentParameteriv(unsigned long a0, unsigned long a1, unsigned long a2, long * a3); // 0x1405E7830
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetIntegerv(unsigned long a0, long * a1); // 0x1405E7A40
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetProgramBinary(Scaleform::Render::GL::HALGLProgram * a0, long a1, long * a2, unsigned long * a3, void * a4); // 0x1405E7B10
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetProgramInfoLog(Scaleform::Render::GL::HALGLProgram * a0, long a1, long * a2, char * a3); // 0x1405E7C20
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetProgramiv(Scaleform::Render::GL::HALGLProgram * a0, unsigned long a1, long * a2); // 0x1405E7D20
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetRenderbufferParameteriv(unsigned long a0, unsigned long a1, long * a2); // 0x1405E7E10
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetShaderInfoLog(Scaleform::Render::GL::HALGLShader * a0, long a1, long * a2, char * a3); // 0x1405E7F50
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetShaderiv(Scaleform::Render::GL::HALGLShader * a0, unsigned long a1, long * a2); // 0x1405E8050
const unsigned char * Scaleform::Render::GL::GraphicsDeviceRecorder::glGetString(unsigned long a0); // 0x1405E8140
const unsigned char * Scaleform::Render::GL::GraphicsDeviceRecorder::glGetStringi(unsigned long a0, unsigned long a1); // 0x1405E8210
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetSynciv(__GLsync * a0, unsigned long a1, long a2, long * a3, long * a4); // 0x1405E82F0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetTexImage(unsigned long a0, long a1, unsigned long a2, unsigned long a3, void * a4); // 0x1405E83F0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetTexLevelParameteriv(unsigned long a0, long a1, unsigned long a2, long * a3); // 0x1405E84F0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetTexParameteriv(unsigned long a0, unsigned long a1, long * a2); // 0x1405E85E0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glGetUniformLocation(Scaleform::Render::GL::HALGLProgram * a0, const char * a1, Scaleform::Render::GL::HALGLUniformLocation * a2); // 0x1405E8780
unsigned char Scaleform::Render::GL::GraphicsDeviceRecorder::glIsFramebuffer(Scaleform::Render::GL::HALGLFramebuffer * a0); // 0x1405E8880
unsigned char Scaleform::Render::GL::GraphicsDeviceRecorder::glIsProgram(Scaleform::Render::GL::HALGLProgram * a0); // 0x1405E8950
unsigned char Scaleform::Render::GL::GraphicsDeviceRecorder::glIsRenderbuffer(Scaleform::Render::GL::HALGLRenderbuffer * a0); // 0x1405E8A20
void Scaleform::Render::GL::GraphicsDeviceRecorder::glLinkProgram(Scaleform::Render::GL::HALGLProgram * a0); // 0x1405E8AF0
void * Scaleform::Render::GL::GraphicsDeviceRecorder::glMapBuffer(unsigned long a0, unsigned long a1); // 0x1405E8BD0
void * Scaleform::Render::GL::GraphicsDeviceRecorder::glMapBufferRange(unsigned long a0, long long a1, long long a2, unsigned long a3); // 0x1405E8CB0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glPixelStorei(unsigned long a0, long a1); // 0x1405E8E20
void Scaleform::Render::GL::GraphicsDeviceRecorder::glPolygonMode(unsigned long a0, unsigned long a1); // 0x1405E8EF0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glPopGroupMarker(); // 0x1405E8FC0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramBinary(Scaleform::Render::GL::HALGLProgram * a0, unsigned long a1, const void * a2, long a3); // 0x1405E9090
void Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramParameteri(Scaleform::Render::GL::HALGLProgram * a0, unsigned long a1, long a2); // 0x1405E9190
void Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniform1fv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, const float * a3); // 0x1405E9290
void Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniform1iv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, const long * a3); // 0x1405E93B0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniform2fv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, const float * a3); // 0x1405E94D0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniform3fv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, const float * a3); // 0x1405E95F0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniform4fv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, const float * a3); // 0x1405E9710
void Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniformMatrix4fv(Scaleform::Render::GL::HALGLProgram * a0, Scaleform::Render::GL::HALGLUniformLocation * a1, long a2, unsigned char a3, const float * a4); // 0x1405E9840
void Scaleform::Render::GL::GraphicsDeviceRecorder::glPushGroupMarker(long a0, const char * a1); // 0x1405E9950
void Scaleform::Render::GL::GraphicsDeviceRecorder::glReadPixels(long a0, long a1, long a2, long a3, unsigned long a4, unsigned long a5, void * a6); // 0x1405E9A20
void Scaleform::Render::GL::GraphicsDeviceRecorder::glReleaseShaderCompiler(); // 0x1405E9B30
void Scaleform::Render::GL::GraphicsDeviceRecorder::glRenderbufferStorage(unsigned long a0, unsigned long a1, long a2, long a3); // 0x1405E9D40
void Scaleform::Render::GL::GraphicsDeviceRecorder::glScissor(long a0, long a1, long a2, long a3); // 0x1405E9F50
void Scaleform::Render::GL::GraphicsDeviceRecorder::glShaderSource(Scaleform::Render::GL::HALGLShader * a0, long a1, const char * * a2, const long * a3); // 0x1405EA040
void Scaleform::Render::GL::GraphicsDeviceRecorder::glStencilFunc(unsigned long a0, long a1, unsigned long a2); // 0x1405EA2D0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glStencilMask(unsigned long a0); // 0x1405EA3B0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glStencilOp(unsigned long a0, unsigned long a1, unsigned long a2); // 0x1405EA480
void Scaleform::Render::GL::GraphicsDeviceRecorder::glStringMarker(long a0, const void * a1); // 0x1405EA560
void Scaleform::Render::GL::GraphicsDeviceRecorder::glTexImage2D(unsigned long a0, long a1, long a2, long a3, long a4, long a5, unsigned long a6, unsigned long a7, const void * a8); // 0x1405EA630
void Scaleform::Render::GL::GraphicsDeviceRecorder::glTexParameteri(unsigned long a0, unsigned long a1, long a2); // 0x1405EA8C0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glTexSubImage2D(unsigned long a0, long a1, long a2, long a3, long a4, long a5, unsigned long a6, unsigned long a7, const void * a8); // 0x1405EA9A0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform1f(Scaleform::Render::GL::HALGLUniformLocation * a0, float a1); // 0x1405EAAD0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform1fv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, const float * a2); // 0x1405EABB0
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform1i(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1); // 0x1405EAD30
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform1iv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, const long * a2); // 0x1405EAE10
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform2f(Scaleform::Render::GL::HALGLUniformLocation * a0, float a1, float a2); // 0x1405EAF90
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform2fv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, const float * a2); // 0x1405EB080
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform3fv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, const float * a2); // 0x1405EB200
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform4fv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, const float * a2); // 0x1405EB380
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUniformMatrix4fv(Scaleform::Render::GL::HALGLUniformLocation * a0, long a1, unsigned char a2, const float * a3); // 0x1405EB510
unsigned char Scaleform::Render::GL::GraphicsDeviceRecorder::glUnmapBuffer(unsigned long a0); // 0x1405EB690
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUseProgram(Scaleform::Render::GL::HALGLProgram * a0); // 0x1405EB760
void Scaleform::Render::GL::GraphicsDeviceRecorder::glUseProgramStages(Scaleform::Render::GL::HALGLProgramPipeline * a0, unsigned long a1, Scaleform::Render::GL::HALGLProgram * a2); // 0x1405EB850
void Scaleform::Render::GL::GraphicsDeviceRecorder::glVertexAttribPointer(unsigned long a0, long a1, unsigned long a2, unsigned char a3, long a4, const void * a5); // 0x1405EB970
void Scaleform::Render::GL::GraphicsDeviceRecorder::glViewport(long a0, long a1, long a2, long a3); // 0x1405EBA70
void Scaleform::Render::GL::GraphicsDeviceRecorder::executeCommand(unsigned long commandName, Scaleform::Render::GL::GraphicsDevice & device); // 0x1405DDB10char __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::RemoveAlt<unsigned int>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        const unsigned int *key)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r10
  __int64 v6; // rdx
  __int64 v7; // r8
  __int64 v8; // rcx
  __int64 v9; // rcx
  __int64 v10; // rax
  __int64 p_RenderBuffer; // rsi
  unsigned __int64 v12; // r8
  __int64 v13; // rdx
  bool v14; // zf
  unsigned __int64 v15; // rax
  const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *v16; // rdi

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  v6 = 4i64;
  v7 = 5381i64;
  do
  {
    v8 = *((unsigned __int8 *)key + --v6);
    v9 = 65599 * v7 + v8;
    v7 = v9;
  }
  while ( v6 );
  v10 = v9 & pTable->SizeMask;
  p_RenderBuffer = (__int64)&pTable[3 * v10 + 1];
  if ( *(_QWORD *)p_RenderBuffer == -2i64 || *(_QWORD *)(p_RenderBuffer + 8) != v10 )
    return 0;
  v12 = v9 & pTable->SizeMask;
  v13 = -1i64;
  while ( *(_QWORD *)(p_RenderBuffer + 8) != v12 || *(_DWORD *)(p_RenderBuffer + 16) != *key )
  {
    v13 = v10;
    v10 = *(_QWORD *)p_RenderBuffer;
    if ( *(_QWORD *)p_RenderBuffer == -1i64 )
      return 0;
    p_RenderBuffer = (__int64)&pTable[3 * v10 + 1];
  }
  v14 = v12 == v10;
  v15 = *(_QWORD *)p_RenderBuffer;
  if ( v14 )
  {
    if ( v15 != -1i64 )
    {
      v16 = (const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)&pTable[3 * v15];
      Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::~FramebufferAttachment((Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *)(p_RenderBuffer + 24));
      *(_QWORD *)p_RenderBuffer = -2i64;
      *(_QWORD *)p_RenderBuffer = v16->Second.RenderBuffer.pObject;
      *(_QWORD *)(p_RenderBuffer + 8) = v16->Second.Texture.pObject;
      Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>(
        (Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)(p_RenderBuffer + 16),
        v16 + 1);
      p_RenderBuffer = (__int64)&v16->Second.RenderBuffer;
    }
  }
  else
  {
    pTable[3 * v13 + 1].EntryCount = v15;
  }
  Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::~FramebufferAttachment((Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *)(p_RenderBuffer + 24));
  *(_QWORD *)p_RenderBuffer = -2i64;
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *key)
{
  const unsigned int *pFirst; // r11
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  bool v14; // zf
  unsigned __int64 *v15; // rcx
  char *v16; // rdx

  pFirst = key->pFirst;
  v7 = 4i64;
  v8 = 5381i64;
  do
  {
    v9 = *((unsigned __int8 *)pFirst + --v7);
    v8 = v9 + 65599 * v8;
  }
  while ( v7 );
  pTable = this->pTable;
  if ( !this->pTable )
    goto LABEL_12;
  v11 = v8 & pTable->SizeMask;
  v12 = v11;
  v13 = v11 + 2 * (v11 + 1);
  v14 = *(&pTable->EntryCount + v13) == -2i64;
  v15 = &pTable->EntryCount + v13;
  if ( v14 || v15[1] != v11 )
    goto LABEL_12;
  while ( v15[1] != v11 || *((_DWORD *)v15 + 4) != *pFirst )
  {
    v12 = *v15;
    if ( *v15 == -1i64 )
      goto LABEL_12;
    v15 = &pTable[v12 + 1].EntryCount + v12;
  }
  if ( v12 >= 0 )
  {
    v16 = (char *)pTable + 24 * v12;
    *((_DWORD *)v16 + 8) = *pFirst;
    *((_DWORD *)v16 + 9) = *key->pSecond;
  }
  else
  {
LABEL_12:
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *key)
{
  const unsigned int *pFirst; // r11
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v14; // rcx

  pFirst = key->pFirst;
  v7 = 4i64;
  v8 = 5381i64;
  do
  {
    v9 = *((unsigned __int8 *)pFirst + --v7);
    v8 = v9 + 65599 * v8;
  }
  while ( v7 );
  pTable = this->pTable;
  if ( !this->pTable )
    goto LABEL_12;
  v11 = v8 & pTable->SizeMask;
  v12 = v11;
  v13 = (__int64)&pTable[3 * v11 + 1];
  if ( *(_QWORD *)v13 == -2i64 || *(_QWORD *)(v13 + 8) != v11 )
    goto LABEL_12;
  while ( *(_QWORD *)(v13 + 8) != v11 || *(_DWORD *)(v13 + 16) != *pFirst )
  {
    v12 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 == -1i64 )
      goto LABEL_12;
    v13 = (__int64)&pTable[3 * v12 + 1];
  }
  if ( v12 >= 0 )
  {
    v14 = &pTable[3 * v12];
    LODWORD(v14[2].EntryCount) = *pFirst;
    Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::operator=(
      (Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *)&v14[2].SizeMask,
      key->pSecond);
  }
  else
  {
LABEL_12:
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *key)
{
  const unsigned int *pFirst; // r11
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r9
  __int64 v11; // r8
  __int64 v12; // rdx
  __int64 v13; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v14; // rbx
  Scaleform::RefCountVImpl **pSecond; // rdi
  Scaleform::RefCountVImpl *SizeMask; // rcx

  pFirst = key->pFirst;
  v7 = 4i64;
  v8 = 5381i64;
  do
  {
    v9 = *((unsigned __int8 *)pFirst + --v7);
    v8 = v9 + 65599 * v8;
  }
  while ( v7 );
  pTable = this->pTable;
  if ( !this->pTable )
    goto LABEL_16;
  v11 = v8 & pTable->SizeMask;
  v12 = v11;
  v13 = (__int64)&pTable[2 * v11 + 1];
  if ( *(_QWORD *)v13 == -2i64 || *(_QWORD *)(v13 + 8) != v11 )
    goto LABEL_16;
  while ( *(_QWORD *)(v13 + 8) != v11 || *(_DWORD *)(v13 + 16) != *pFirst )
  {
    v12 = *(_QWORD *)v13;
    if ( *(_QWORD *)v13 == -1i64 )
      goto LABEL_16;
    v13 = (__int64)&pTable[2 * v12 + 1];
  }
  if ( v12 >= 0 )
  {
    v14 = &pTable[2 * v12 + 2];
    LODWORD(v14->EntryCount) = *pFirst;
    pSecond = (Scaleform::RefCountVImpl **)key->pSecond;
    if ( *pSecond )
      Scaleform::Render::RenderBuffer::AddRef(*pSecond);
    SizeMask = (Scaleform::RefCountVImpl *)v14->SizeMask;
    if ( SizeMask )
      Scaleform::RefCountImpl::Release(SizeMask);
    v14->SizeMask = (unsigned __int64)*pSecond;
  }
  else
  {
LABEL_16:
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> > *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  char *v13; // r8
  __int64 v14; // rdx
  unsigned __int64 *v15; // r10
  __int64 v16; // rax
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> > v17; // rax
  __int64 v18; // rcx
  bool v19; // zf
  unsigned __int64 *i; // rcx
  __int64 v21; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = (char *)this->pTable + 24 * v10;
  if ( v12 == -2i64 )
  {
    *((_QWORD *)v13 + 2) = -1i64;
    *((_QWORD *)v13 + 3) = 0i64;
    *((_DWORD *)v13 + 8) = key->First;
    *((_DWORD *)v13 + 9) = key->Second;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( *(&v11[1].EntryCount + 3 * v14) != -2i64 );
    v15 = &v11[v14 + 1].EntryCount + v14;
    v16 = *((_QWORD *)v13 + 3);
    if ( v16 == v10 )
    {
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = *((_QWORD *)v13 + 3);
        *((_DWORD *)v15 + 4) = *((_DWORD *)v13 + 8);
        *((_DWORD *)v15 + 5) = *((_DWORD *)v13 + 9);
      }
      v17 = *key;
      *((_QWORD *)v13 + 2) = v14;
    }
    else
    {
      v18 = v16 + 2 * (v16 + 1);
      v19 = *(&v11->EntryCount + v18) == v10;
      for ( i = &v11->EntryCount + v18; !v19; i = &v11->EntryCount + v21 )
      {
        v21 = *i + 2 * (*i + 1);
        v19 = *(&v11->EntryCount + v21) == v10;
      }
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = *((_QWORD *)v13 + 3);
        *((_DWORD *)v15 + 4) = *((_DWORD *)v13 + 8);
        *((_DWORD *)v15 + 5) = *((_DWORD *)v13 + 9);
      }
      *i = v14;
      v17 = *key;
      *((_QWORD *)v13 + 2) = -1i64;
    }
    *((Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> > *)v13 + 4) = v17;
  }
  *((_QWORD *)v13 + 3) = v10;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // r14
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rdx
  const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *v9; // rdi
  Scaleform::Render::GL::HALGLRenderbuffer *pObject; // r9
  __int64 v11; // rbx
  __int64 v12; // r8
  Scaleform::Render::GL::HALGLTexture *v13; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *i; // rsi
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::RefCountVImpl *v17; // rcx
  Scaleform::RefCountVImpl *v18; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = (const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)&this->pTable[3 * v7];
  pObject = v9->Second.RenderBuffer.pObject;
  if ( pObject == (Scaleform::Render::GL::HALGLRenderbuffer *)-2i64 )
  {
    v9->Second.RenderBuffer.pObject = (Scaleform::Render::GL::HALGLRenderbuffer *)-1i64;
    v9->Second.Texture.pObject = 0i64;
    Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>(
      (Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)&v9[1],
      key);
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( pTable[3 * v11 + 1].EntryCount != -2i64 );
    v12 = (__int64)&pTable[3 * v11 + 1];
    v13 = v9->Second.Texture.pObject;
    if ( v13 == (Scaleform::Render::GL::HALGLTexture *)v7 )
    {
      if ( v12 )
      {
        *(_QWORD *)v12 = pObject;
        *(_QWORD *)(v12 + 8) = v9->Second.Texture.pObject;
        Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>(
          (Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)(v12 + 16),
          v9 + 1);
      }
      v9[1].First = key->First;
      Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::operator=(&v9[1].Second, &key->Second);
      v9->Second.RenderBuffer.pObject = (Scaleform::Render::GL::HALGLRenderbuffer *)v11;
    }
    else
    {
      for ( i = &pTable[3 * (_QWORD)v13 + 1]; i->EntryCount != v7; i = &pTable[3 * i->EntryCount + 1] )
        ;
      if ( v12 )
      {
        *(_QWORD *)v12 = pObject;
        *(_QWORD *)(v12 + 8) = v9->Second.Texture.pObject;
        Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>(
          (Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)(v12 + 16),
          v9 + 1);
      }
      i->EntryCount = v11;
      v9[1].First = key->First;
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Assign(
        &v9[1].Second.Parameters.mHash,
        &v9[1].Second,
        &key->Second.Parameters.mHash);
      v15 = (Scaleform::RefCountVImpl *)key->Second.RenderBuffer.pObject;
      if ( v15 )
        Scaleform::Render::RenderBuffer::AddRef(v15);
      v16 = (Scaleform::RefCountVImpl *)v9[1].Second.RenderBuffer.pObject;
      if ( v16 )
        Scaleform::RefCountImpl::Release(v16);
      v9[1].Second.RenderBuffer.pObject = key->Second.RenderBuffer.pObject;
      v17 = (Scaleform::RefCountVImpl *)key->Second.Texture.pObject;
      if ( v17 )
        Scaleform::Render::RenderBuffer::AddRef(v17);
      v18 = (Scaleform::RefCountVImpl *)v9[1].Second.Texture.pObject;
      if ( v18 )
        Scaleform::RefCountImpl::Release(v18);
      v9[1].Second.Texture.pObject = key->Second.Texture.pObject;
      v9->Second.RenderBuffer.pObject = (Scaleform::Render::GL::HALGLRenderbuffer *)-1i64;
    }
  }
  v9->Second.Texture.pObject = (Scaleform::Render::GL::HALGLTexture *)v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v9; // rdi
  unsigned __int64 EntryCount; // r8
  Scaleform::RefCountVImpl *pObject; // rcx
  __int64 v12; // rbx
  __int64 v13; // r15
  unsigned __int64 SizeMask; // rax
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *i; // rsi
  Scaleform::RefCountVImpl *v18; // rcx
  Scaleform::RefCountVImpl *v19; // rcx
  Scaleform::RefCountVImpl *v20; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = &this->pTable[2 * v7];
  EntryCount = v9[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v9[1].EntryCount = -1i64;
    v9[1].SizeMask = 0i64;
    LODWORD(v9[2].EntryCount) = key->First;
    pObject = (Scaleform::RefCountVImpl *)key->Second.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
    v9[1].SizeMask = v7;
  }
  else
  {
    v12 = v7;
    do
      v12 = pTable->SizeMask & (v12 + 1);
    while ( pTable[2 * v12 + 1].EntryCount != -2i64 );
    v13 = (__int64)&pTable[2 * v12 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v13 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *)&pTable[2 * v12 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *)&v9[1]);
      LODWORD(v9[2].EntryCount) = key->First;
      v15 = (Scaleform::RefCountVImpl *)key->Second.pObject;
      if ( v15 )
        Scaleform::Render::RenderBuffer::AddRef(v15);
      v16 = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
      if ( v16 )
        Scaleform::RefCountImpl::Release(v16);
      v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
      v9[1].EntryCount = v12;
    }
    else
    {
      for ( i = &pTable[2 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[2 * i->EntryCount + 1] )
        ;
      if ( v13 )
      {
        *(_QWORD *)v13 = EntryCount;
        *(_QWORD *)(v13 + 8) = v9[1].SizeMask;
        *(_DWORD *)(v13 + 16) = v9[2].EntryCount;
        v18 = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
        if ( v18 )
          Scaleform::Render::RenderBuffer::AddRef(v18);
        *(_QWORD *)(v13 + 24) = v9[2].SizeMask;
      }
      i->EntryCount = v12;
      LODWORD(v9[2].EntryCount) = key->First;
      v19 = (Scaleform::RefCountVImpl *)key->Second.pObject;
      if ( v19 )
        Scaleform::Render::RenderBuffer::AddRef(v19);
      v20 = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
      if ( v20 )
        Scaleform::RefCountImpl::Release(v20);
      v9[2].SizeMask = (unsigned __int64)key->Second.pObject;
      v9[1].EntryCount = -1i64;
    }
    v9[1].SizeMask = v7;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  char *v13; // r8
  __int64 v14; // rdx
  unsigned __int64 *v15; // r10
  __int64 v16; // rax
  __int64 v17; // rcx
  bool v18; // zf
  unsigned __int64 *i; // rcx
  __int64 v20; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 3 * v10);
  v13 = (char *)this->pTable + 24 * v10;
  if ( v12 == -2i64 )
  {
    *((_QWORD *)v13 + 2) = -1i64;
    *((_QWORD *)v13 + 3) = 0i64;
    *((_DWORD *)v13 + 8) = *key->pFirst;
    *((_DWORD *)v13 + 9) = *key->pSecond;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( *(&v11[1].EntryCount + 3 * v14) != -2i64 );
    v15 = &v11[v14 + 1].EntryCount + v14;
    v16 = *((_QWORD *)v13 + 3);
    if ( v16 == v10 )
    {
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = *((_QWORD *)v13 + 3);
        *((_DWORD *)v15 + 4) = *((_DWORD *)v13 + 8);
        *((_DWORD *)v15 + 5) = *((_DWORD *)v13 + 9);
      }
      *((_DWORD *)v13 + 8) = *key->pFirst;
      *((_DWORD *)v13 + 9) = *key->pSecond;
      *((_QWORD *)v13 + 2) = v14;
    }
    else
    {
      v17 = v16 + 2 * (v16 + 1);
      v18 = *(&v11->EntryCount + v17) == v10;
      for ( i = &v11->EntryCount + v17; !v18; i = &v11->EntryCount + v20 )
      {
        v20 = *i + 2 * (*i + 1);
        v18 = *(&v11->EntryCount + v20) == v10;
      }
      if ( v15 )
      {
        *v15 = v12;
        v15[1] = *((_QWORD *)v13 + 3);
        *((_DWORD *)v15 + 4) = *((_DWORD *)v13 + 8);
        *((_DWORD *)v15 + 5) = *((_DWORD *)v13 + 9);
      }
      *i = v14;
      *((_DWORD *)v13 + 8) = *key->pFirst;
      *((_DWORD *)v13 + 9) = *key->pSecond;
      *((_QWORD *)v13 + 2) = -1i64;
    }
  }
  *((_QWORD *)v13 + 3) = v10;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v11; // rdx
  const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *v12; // rdi
  Scaleform::Render::GL::HALGLRenderbuffer *pObject; // r9
  __int64 v14; // rbx
  __int64 v15; // r8
  Scaleform::Render::GL::HALGLTexture *v16; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *i; // r14
  const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *pSecond; // rbp
  Scaleform::RefCountVImpl *v19; // rcx
  Scaleform::RefCountVImpl *v20; // rcx
  Scaleform::RefCountVImpl *v21; // rcx
  Scaleform::RefCountVImpl *v22; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = (const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)&this->pTable[3 * v10];
  pObject = v12->Second.RenderBuffer.pObject;
  if ( pObject == (Scaleform::Render::GL::HALGLRenderbuffer *)-2i64 )
  {
    v12->Second.RenderBuffer.pObject = (Scaleform::Render::GL::HALGLRenderbuffer *)-1i64;
    v12->Second.Texture.pObject = 0i64;
    Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>(
      (Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)&v12[1],
      key);
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( v11[3 * v14 + 1].EntryCount != -2i64 );
    v15 = (__int64)&v11[3 * v14 + 1];
    v16 = v12->Second.Texture.pObject;
    if ( v16 == (Scaleform::Render::GL::HALGLTexture *)v10 )
    {
      if ( v15 )
      {
        *(_QWORD *)v15 = pObject;
        *(_QWORD *)(v15 + 8) = v12->Second.Texture.pObject;
        Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>(
          (Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)(v15 + 16),
          v12 + 1);
      }
      v12[1].First = *key->pFirst;
      Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::operator=(&v12[1].Second, key->pSecond);
      v12->Second.RenderBuffer.pObject = (Scaleform::Render::GL::HALGLRenderbuffer *)v14;
    }
    else
    {
      for ( i = &v11[3 * (_QWORD)v16 + 1]; i->EntryCount != v10; i = &v11[3 * i->EntryCount + 1] )
        ;
      if ( v15 )
      {
        *(_QWORD *)v15 = pObject;
        *(_QWORD *)(v15 + 8) = v12->Second.Texture.pObject;
        Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>(
          (Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)(v15 + 16),
          v12 + 1);
      }
      i->EntryCount = v14;
      v12[1].First = *key->pFirst;
      pSecond = key->pSecond;
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Assign(
        &v12[1].Second.Parameters.mHash,
        &v12[1].Second,
        &pSecond->Parameters.mHash);
      v19 = (Scaleform::RefCountVImpl *)pSecond->RenderBuffer.pObject;
      if ( v19 )
        Scaleform::Render::RenderBuffer::AddRef(v19);
      v20 = (Scaleform::RefCountVImpl *)v12[1].Second.RenderBuffer.pObject;
      if ( v20 )
        Scaleform::RefCountImpl::Release(v20);
      v12[1].Second.RenderBuffer.pObject = pSecond->RenderBuffer.pObject;
      v21 = (Scaleform::RefCountVImpl *)pSecond->Texture.pObject;
      if ( v21 )
        Scaleform::Render::RenderBuffer::AddRef(v21);
      v22 = (Scaleform::RefCountVImpl *)v12[1].Second.Texture.pObject;
      if ( v22 )
        Scaleform::RefCountImpl::Release(v22);
      v12[1].Second.Texture.pObject = pSecond->Texture.pObject;
      v12->Second.RenderBuffer.pObject = (Scaleform::Render::GL::HALGLRenderbuffer *)-1i64;
    }
  }
  v12->Second.Texture.pObject = (Scaleform::Render::GL::HALGLTexture *)v10;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v11; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v12; // rbx
  unsigned __int64 EntryCount; // r8
  Scaleform::RefCountVImpl **pSecond; // rdi
  __int64 v15; // rdi
  __int64 v16; // r15
  unsigned __int64 v17; // rax
  Scaleform::RefCountVImpl **v18; // r14
  Scaleform::RefCountVImpl *v19; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *i; // r14
  Scaleform::RefCountVImpl *v21; // rcx
  Scaleform::RefCountVImpl **v22; // rdi
  Scaleform::RefCountVImpl *v23; // rcx

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
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[2 * v10];
  EntryCount = v12[1].EntryCount;
  if ( EntryCount == -2i64 )
  {
    v12[1].EntryCount = -1i64;
    v12[1].SizeMask = 0i64;
    LODWORD(v12[2].EntryCount) = *key->pFirst;
    pSecond = (Scaleform::RefCountVImpl **)key->pSecond;
    if ( *pSecond )
      Scaleform::Render::RenderBuffer::AddRef(*pSecond);
    v12[2].SizeMask = (unsigned __int64)*pSecond;
    v12[1].SizeMask = v10;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( v11[2 * v15 + 1].EntryCount != -2i64 );
    v16 = (__int64)&v11[2 * v15 + 1];
    v17 = v12[1].SizeMask;
    if ( v17 == v10 )
    {
      if ( v16 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>(
          (Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *)&v11[2 * v15 + 1],
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *)&v12[1]);
      LODWORD(v12[2].EntryCount) = *key->pFirst;
      v18 = (Scaleform::RefCountVImpl **)key->pSecond;
      if ( *v18 )
        Scaleform::Render::RenderBuffer::AddRef(*v18);
      v19 = (Scaleform::RefCountVImpl *)v12[2].SizeMask;
      if ( v19 )
        Scaleform::RefCountImpl::Release(v19);
      v12[2].SizeMask = (unsigned __int64)*v18;
      v12[1].EntryCount = v15;
    }
    else
    {
      for ( i = &v11[2 * v17 + 1]; i->EntryCount != v10; i = &v11[2 * i->EntryCount + 1] )
        ;
      if ( v16 )
      {
        *(_QWORD *)v16 = EntryCount;
        *(_QWORD *)(v16 + 8) = v12[1].SizeMask;
        *(_DWORD *)(v16 + 16) = v12[2].EntryCount;
        v21 = (Scaleform::RefCountVImpl *)v12[2].SizeMask;
        if ( v21 )
          Scaleform::Render::RenderBuffer::AddRef(v21);
        *(_QWORD *)(v16 + 24) = v12[2].SizeMask;
      }
      i->EntryCount = v15;
      LODWORD(v12[2].EntryCount) = *key->pFirst;
      v22 = (Scaleform::RefCountVImpl **)key->pSecond;
      if ( *v22 )
        Scaleform::Render::RenderBuffer::AddRef(*v22);
      v23 = (Scaleform::RefCountVImpl *)v12[2].SizeMask;
      if ( v23 )
        Scaleform::RefCountImpl::Release(v23);
      v12[2].SizeMask = (unsigned __int64)*v22;
      v12[1].EntryCount = -1i64;
    }
    v12[1].SizeMask = v10;
  }
}

__int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        const unsigned int *key)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r10
  __int64 v4; // rdx
  __int64 v5; // rax
  __int64 v6; // rcx
  __int64 v7; // rcx
  __int64 v8; // r8
  __int64 result; // rax
  __int64 v10; // rdx

  pTable = this->pTable;
  if ( !this->pTable )
    return -1i64;
  v4 = 4i64;
  v5 = 5381i64;
  do
  {
    v6 = *((unsigned __int8 *)key + --v4);
    v7 = 65599 * v5 + v6;
    v5 = v7;
  }
  while ( v4 );
  v8 = v7 & pTable->SizeMask;
  result = v8;
  v10 = (__int64)&pTable[3 * v8 + 1];
  if ( *(_QWORD *)v10 == -2i64 || *(_QWORD *)(v10 + 8) != v8 )
    return -1i64;
  while ( *(_QWORD *)(v10 + 8) != v8 || *(_DWORD *)(v10 + 16) != *key )
  {
    result = *(_QWORD *)v10;
    if ( *(_QWORD *)v10 == -1i64 )
      return -1i64;
    v10 = (__int64)&pTable[3 * result + 1];
  }
  return result;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        const unsigned int *key)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r10
  __int64 v5; // rdx
  __int64 v6; // rax
  __int64 v7; // rcx
  __int64 v8; // rcx
  unsigned __int64 v9; // r8
  unsigned __int64 v10; // rcx
  __int64 v11; // rdx

  pTable = this->pTable;
  if ( !this->pTable )
    return -1i64;
  v5 = 4i64;
  v6 = 5381i64;
  do
  {
    v7 = *((unsigned __int8 *)key + --v5);
    v8 = 65599 * v6 + v7;
    v6 = v8;
  }
  while ( v5 );
  v10 = v8 & pTable->SizeMask;
  v9 = v10;
  v11 = (__int64)&pTable[2 * v10 + 1];
  if ( *(_QWORD *)v11 == -2i64 || *(_QWORD *)(v11 + 8) != v10 )
    return -1i64;
  while ( *(_QWORD *)(v11 + 8) != v9 || *(_DWORD *)(v11 + 16) != *key )
  {
    v10 = *(_QWORD *)v11;
    if ( *(_QWORD *)v11 == -1i64 )
      return -1i64;
    v11 = (__int64)&pTable[2 * v10 + 1];
  }
  return v10;
}

void __fastcall Scaleform::Render::GraphicsDeviceRecorder::read<unsigned char>(
        Scaleform::Render::GraphicsDeviceRecorder *this,
        unsigned __int8 *v)
{
  while ( this->CommandReadPointer == this->CommandWritePointer )
    Scaleform::Thread::Sleep(0);
  Scaleform::Lock::DoLock(&this->BufferLock);
  *v = *this->CommandReadPointer;
  this->CommandReadPointer += 8;
  Scaleform::Lock::Unlock(&this->BufferLock);
}

void __fastcall Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        Scaleform::Render::GraphicsDeviceRecorder *this,
        float *v)
{
  while ( this->CommandReadPointer == this->CommandWritePointer )
    Scaleform::Thread::Sleep(0);
  Scaleform::Lock::DoLock(&this->BufferLock);
  *v = *(float *)this->CommandReadPointer;
  this->CommandReadPointer += 8;
  Scaleform::Lock::Unlock(&this->BufferLock);
}

void __fastcall Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        Scaleform::Render::GraphicsDeviceRecorder *this,
        __int64 *v)
{
  while ( this->CommandReadPointer == this->CommandWritePointer )
    Scaleform::Thread::Sleep(0);
  Scaleform::Lock::DoLock(&this->BufferLock);
  *v = *(_QWORD *)this->CommandReadPointer;
  this->CommandReadPointer += 8;
  Scaleform::Lock::Unlock(&this->BufferLock);
}

void __fastcall Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(
        Scaleform::Render::GraphicsDeviceRecorder *this,
        const unsigned __int8 *v)
{
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax

  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    this->CommandBuffer = v7;
    this->CommandReadPointer = v7;
    this->CommandWritePointer = &v7[v3];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *this->CommandWritePointer = *v;
  this->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GraphicsDeviceRecorder::write<float>(
        Scaleform::Render::GraphicsDeviceRecorder *this,
        const float *v)
{
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax

  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    this->CommandBuffer = v7;
    this->CommandReadPointer = v7;
    this->CommandWritePointer = &v7[v3];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *(float *)this->CommandWritePointer = *v;
  this->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(
        Scaleform::Render::GraphicsDeviceRecorder *this,
        const unsigned __int64 *v)
{
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax

  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    this->CommandBuffer = v7;
    this->CommandReadPointer = v7;
    this->CommandWritePointer = &v7[v3];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *(_QWORD *)this->CommandWritePointer = *v;
  this->CommandWritePointer += 8;
}

void __fastcall Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>(
        Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *this,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *src)
{
  Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *p_Second; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  p_Second = &src->Second;
  this->First = src->First;
  this->Second.Parameters.mHash.pTable = 0i64;
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Assign(
    &this->Second.Parameters.mHash,
    &this->Second,
    &src->Second.Parameters.mHash);
  pObject = (Scaleform::RefCountVImpl *)p_Second->RenderBuffer.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->Second.RenderBuffer.pObject = p_Second->RenderBuffer.pObject;
  v5 = (Scaleform::RefCountVImpl *)p_Second->Texture.pObject;
  if ( v5 )
    Scaleform::Render::RenderBuffer::AddRef(v5);
  this->Second.Texture.pObject = p_Second->Texture.pObject;
}

void __fastcall Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>(
        Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *this,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *src)
{
  const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *pSecond; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  this->First = *src->pFirst;
  pSecond = src->pSecond;
  this->Second.Parameters.mHash.pTable = 0i64;
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Assign(
    &this->Second.Parameters.mHash,
    &this->Second,
    &pSecond->Parameters.mHash);
  pObject = (Scaleform::RefCountVImpl *)pSecond->RenderBuffer.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->Second.RenderBuffer.pObject = pSecond->RenderBuffer.pObject;
  v5 = (Scaleform::RefCountVImpl *)pSecond->Texture.pObject;
  if ( v5 )
    Scaleform::Render::RenderBuffer::AddRef(v5);
  this->Second.Texture.pObject = pSecond->Texture.pObject;
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *this,
        const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *e)
{
  Scaleform::RefCountVImpl *pObject; // rcx

  this->NextInChain = e->NextInChain;
  this->HashValue = e->HashValue;
  this->Value.First = e->Value.First;
  pObject = (Scaleform::RefCountVImpl *)e->Value.Second.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->Value.Second.pObject = e->Value.Second.pObject;
}

void __fastcall Scaleform::Render::GL::GraphicsDevice::GraphicsDevice(
        Scaleform::Render::GL::GraphicsDevice *this,
        const Scaleform::Render::GL::GraphicsDevice *other)
{
  this->__vftable = (Scaleform::Render::GL::GraphicsDevice_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->RenderThreadID = 0;
  this->__vftable = (Scaleform::Render::GL::GraphicsDevice_vtbl *)&Scaleform::Render::GL::GraphicsDevice::`vftable';
  this->BindingIndexerBuffers.mHash.pTable = 0i64;
  this->BindingIndexerTextures[0].mHash.pTable = 0i64;
  this->BindingIndexerTextures[1].mHash.pTable = 0i64;
  this->BindingIndexerTextures[2].mHash.pTable = 0i64;
  this->BindingIndexerTextures[3].mHash.pTable = 0i64;
  this->BindingIndexerTextures[4].mHash.pTable = 0i64;
  this->BindingIndexerFramebuffers.mHash.pTable = 0i64;
  this->BindingIndexerRenderbuffers.mHash.pTable = 0i64;
  this->BindingProgramPipeline.pObject = 0i64;
  this->BindingVertexArray.pObject = 0i64;
  Scaleform::Render::GL::GraphicsDevice::operator=(this, other);
}

void __fastcall Scaleform::Render::GL::GraphicsDevice::GraphicsDevice(Scaleform::Render::GL::GraphicsDevice *this)
{
  this->__vftable = (Scaleform::Render::GL::GraphicsDevice_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->RenderThreadID = 0;
  *(_QWORD *)&this->MajorVersion = 0i64;
  this->Caps = 0;
  this->__vftable = (Scaleform::Render::GL::GraphicsDevice_vtbl *)&Scaleform::Render::GL::GraphicsDevice::`vftable';
  this->BindingIndexerBuffers.mHash.pTable = 0i64;
  this->BindingIndexerTextures[0].mHash.pTable = 0i64;
  this->BindingIndexerTextures[1].mHash.pTable = 0i64;
  this->BindingIndexerTextures[2].mHash.pTable = 0i64;
  this->BindingIndexerTextures[3].mHash.pTable = 0i64;
  this->BindingIndexerTextures[4].mHash.pTable = 0i64;
  this->BindingIndexerFramebuffers.mHash.pTable = 0i64;
  this->BindingIndexerRenderbuffers.mHash.pTable = 0i64;
  this->BindingProgramPipeline.pObject = 0i64;
  this->BindingVertexArray.pObject = 0i64;
  memset(this->ExtensionSupported, 0, sizeof(this->ExtensionSupported));
  Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(this);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::GraphicsDeviceImmediate(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this)
{
  Scaleform::Render::GL::GraphicsDevice::GraphicsDevice(this);
  this->__vftable = (Scaleform::Render::GL::GraphicsDeviceImmediate_vtbl *)&Scaleform::Render::GL::GraphicsDeviceImmediate::`vftable';
  Scaleform::Render::GL::GLImmediate::GLImmediate(&this->Device);
  this->DefaultFramebuffer = 0;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::GraphicsDeviceRecorder(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::GraphicsDeviceImmediate *immediateDevice)
{
  Scaleform::Render::GL::GraphicsDevice::GraphicsDevice(this, immediateDevice);
  Scaleform::Render::GraphicsDeviceRecorder::GraphicsDeviceRecorder(&this->Scaleform::Render::GraphicsDeviceRecorder);
  this->Scaleform::Render::GL::GraphicsDevice::Scaleform::Render::GraphicsDevice::Scaleform::RefCountBase<Scaleform::Render::GraphicsDevice,69>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::GL::GraphicsDeviceRecorder_vtbl *)&Scaleform::Render::GL::GraphicsDeviceRecorder::`vftable'{for `Scaleform::Render::GL::GraphicsDevice'};
  this->Scaleform::Render::GraphicsDeviceRecorder::__vftable = (Scaleform::Render::GraphicsDeviceRecorder_vtbl *)&Scaleform::Render::GL::GraphicsDeviceRecorder::`vftable'{for `Scaleform::Render::GraphicsDeviceRecorder'};
}

void __fastcall Scaleform::Render::GL::HALGLFramebuffer::HALGLFramebuffer(
        Scaleform::Render::GL::HALGLFramebuffer *this,
        unsigned int name,
        unsigned int binding,
        Scaleform::Render::GL::GraphicsDevice *device)
{
  Scaleform::HashLH<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_BindingIndexerAttachments; // r12
  Scaleform::Render::GL::GraphicsDevice_vtbl *v7; // rax
  __int64 v8; // r14
  Scaleform::Render::GL::GraphicsDevice_vtbl *v9; // rax
  __int64 v10; // r8
  unsigned int *v11; // rdi
  int v12; // eax
  Scaleform::Render::GL::HALGLRenderbuffer *v13; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v14; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v15; // rbx
  __int64 v16; // rbx
  int v17; // eax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rdx
  __int64 v19; // rax
  unsigned __int64 v20; // r8
  int v21; // [rsp+30h] [rbp-89h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > pmemAddr[2]; // [rsp+38h] [rbp-81h] BYREF
  Scaleform::RefCountVImpl *v23; // [rsp+48h] [rbp-71h]
  unsigned int namea; // [rsp+50h] [rbp-69h] BYREF
  int v25; // [rsp+54h] [rbp-65h] BYREF
  int v26; // [rsp+58h] [rbp-61h] BYREF
  int v27; // [rsp+5Ch] [rbp-5Dh] BYREF
  int v28; // [rsp+60h] [rbp-59h] BYREF
  int v29; // [rsp+64h] [rbp-55h] BYREF
  char v30[8]; // [rsp+68h] [rbp-51h] BYREF
  Scaleform::Render::GL::HALGLFramebuffer *v31; // [rsp+70h] [rbp-49h]
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+78h] [rbp-41h] BYREF
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef v33; // [rsp+88h] [rbp-31h] BYREF
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef v34; // [rsp+98h] [rbp-21h] BYREF
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef v35; // [rsp+A8h] [rbp-11h] BYREF
  Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeRef v36; // [rsp+B8h] [rbp-1h] BYREF
  int v37[2]; // [rsp+C8h] [rbp+Fh] BYREF
  __int64 v38; // [rsp+D0h] [rbp+17h]

  v31 = this;
  this->__vftable = (Scaleform::Render::GL::HALGLFramebuffer_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::GL::HALGLFramebuffer_vtbl *)&Scaleform::Render::GL::HALGLFramebuffer::`vftable';
  p_BindingIndexerAttachments = &this->BindingIndexerAttachments;
  this->RefCount = 1;
  this->BindingIndexerAttachments.mHash.pTable = 0i64;
  this->Name = name;
  if ( name )
  {
    v7 = device->__vftable;
    v37[0] = 36128;
    v37[1] = 36096;
    v38 = 36064i64;
    v7->glBindFramebuffer(device, 36160u, this);
    v8 = 0i64;
    key.pFirst = (const unsigned int *)&v26;
    key.pSecond = &v21;
    while ( 1 )
    {
      v9 = device->__vftable;
      v23 = 0i64;
      v10 = (unsigned int)v37[v8];
      v11 = (unsigned int *)&v37[v8];
      *(_OWORD *)&pmemAddr[0].pTable = 0i64;
      v9->glGetFramebufferAttachmentParameteriv(device, binding, v10, 36048u, &v21);
      v26 = 36048;
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        pmemAddr,
        pmemAddr,
        &key);
      v12 = v21;
      if ( v21 == 5890 )
        break;
      if ( v21 == 36161 )
      {
        device->glGetFramebufferAttachmentParameteriv(device, binding, *v11, 36049u, (int *)&namea);
        v27 = 36049;
        v33.pFirst = (const unsigned int *)&v27;
        v33.pSecond = (const int *)&namea;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          pmemAddr,
          pmemAddr,
          &v33);
        v13 = (Scaleform::Render::GL::HALGLRenderbuffer *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                            Scaleform::Memory::pGlobalHeap,
                                                            32i64);
        if ( v13 )
        {
          Scaleform::Render::GL::HALGLRenderbuffer::HALGLRenderbuffer(v13, namea, 0x8D41u, device);
          v15 = v14;
        }
        else
        {
          v15 = 0i64;
        }
        if ( pmemAddr[1].pTable )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pmemAddr[1].pTable);
        pmemAddr[1].pTable = v15;
LABEL_17:
        v12 = v21;
      }
      if ( v12 )
      {
        v36.pFirst = (const unsigned int *)&v37[v8];
        v36.pSecond = (const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *)pmemAddr;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          &p_BindingIndexerAttachments->mHash,
          p_BindingIndexerAttachments,
          &v36);
      }
      v8 = (unsigned int)(v8 + 1);
      if ( v23 )
        Scaleform::RefCountImpl::Release(v23);
      if ( pmemAddr[1].pTable )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pmemAddr[1].pTable);
      pTable = pmemAddr[0].pTable;
      if ( pmemAddr[0].pTable )
      {
        v19 = 0i64;
        v20 = pmemAddr[0].pTable->SizeMask + 1;
        do
        {
          if ( *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v19) != -2i64 )
          {
            *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v19) = -2i64;
            pTable = pmemAddr[0].pTable;
          }
          v19 += 24i64;
          --v20;
        }
        while ( v20 );
        if ( pTable )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      }
      if ( !v37[v8] )
        return;
    }
    device->glGetFramebufferAttachmentParameteriv(device, binding, *v11, 36049u, &v25);
    device->glGetFramebufferAttachmentParameteriv(device, binding, *v11, 36050u, (int *)v30);
    v28 = 36049;
    v34.pFirst = (const unsigned int *)&v28;
    v34.pSecond = &v25;
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
      pmemAddr,
      pmemAddr,
      &v34);
    v29 = 36050;
    v35.pFirst = (const unsigned int *)&v29;
    v35.pSecond = (const int *)v30;
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
      pmemAddr,
      pmemAddr,
      &v35);
    v16 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
            Scaleform::Memory::pGlobalHeap,
            24i64);
    if ( v16 )
    {
      v17 = v25;
      *(_QWORD *)v16 = &Scaleform::RefCountImplCore::`vftable';
      *(_DWORD *)(v16 + 8) = 1;
      *(_QWORD *)v16 = &Scaleform::Render::GL::HALGLTexture::`vftable';
      *(_DWORD *)(v16 + 16) = v17;
    }
    else
    {
      v16 = 0i64;
    }
    if ( v23 )
      Scaleform::RefCountImpl::Release(v23);
    v23 = (Scaleform::RefCountVImpl *)v16;
    goto LABEL_17;
  }
}

void __fastcall Scaleform::Render::GL::HALGLRenderbuffer::HALGLRenderbuffer(
        Scaleform::Render::GL::HALGLRenderbuffer *this,
        unsigned int name,
        unsigned int target,
        Scaleform::Render::GL::GraphicsDevice *device)
{
  __int64 v4; // rdi
  Scaleform::Render::GL::GraphicsDevice_vtbl *v8; // rax
  unsigned int v9; // eax
  int *v10; // r14
  char v11[8]; // [rsp+20h] [rbp-78h] BYREF
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+28h] [rbp-70h] BYREF
  int v13[10]; // [rsp+38h] [rbp-60h] BYREF
  __int64 v14; // [rsp+60h] [rbp-38h]

  LODWORD(v4) = 0;
  this->__vftable = (Scaleform::Render::GL::HALGLRenderbuffer_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->__vftable = (Scaleform::Render::GL::HALGLRenderbuffer_vtbl *)&Scaleform::Render::GL::HALGLRenderbuffer::`vftable';
  this->RefCount = 1;
  this->Parameters.mHash.pTable = 0i64;
  this->Name = name;
  if ( name )
  {
    v8 = device->__vftable;
    v13[0] = 36162;
    v13[1] = 36163;
    v13[2] = 36164;
    v13[3] = 36176;
    v13[4] = 36177;
    v13[5] = 36178;
    v13[6] = 36179;
    v13[7] = 36180;
    v13[8] = 36180;
    v13[9] = 36181;
    v14 = 36011i64;
    v8->glBindRenderbuffer(device, target, this);
    v9 = 36162;
    key.pSecond = (const int *)v11;
    v10 = v13;
    do
    {
      device->glGetRenderbufferParameteriv(device, target, v9, (int *)v11);
      key.pFirst = (const unsigned int *)v10;
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        &this->Parameters.mHash,
        &this->Parameters,
        &key);
      v4 = (unsigned int)(v4 + 1);
      v9 = v13[v4];
      v10 = &v13[v4];
    }
    while ( v9 );
  }
}

void __fastcall Scaleform::Render::GL::HALGLRenderbuffer::~HALGLRenderbuffer(
        Scaleform::Render::GL::HALGLRenderbuffer *this)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  __int64 v3; // rdx
  __int64 v4; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v5; // rax

  pTable = this->Parameters.mHash.pTable;
  if ( pTable )
  {
    v3 = 0i64;
    v4 = pTable->SizeMask + 1;
    do
    {
      v5 = this->Parameters.mHash.pTable;
      if ( *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) != -2i64 )
        *(unsigned __int64 *)((char *)&v5[1].EntryCount + v3) = -2i64;
      v3 += 24i64;
      --v4;
    }
    while ( v4 );
    if ( this->Parameters.mHash.pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->Parameters.mHash.pTable = 0i64;
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *__fastcall Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::operator=(
        Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *this,
        const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *__that)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Assign(
    &this->Parameters.mHash,
    this,
    &__that->Parameters.mHash);
  pObject = (Scaleform::RefCountVImpl *)__that->RenderBuffer.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v5 = (Scaleform::RefCountVImpl *)this->RenderBuffer.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->RenderBuffer.pObject = __that->RenderBuffer.pObject;
  v6 = (Scaleform::RefCountVImpl *)__that->Texture.pObject;
  if ( v6 )
    Scaleform::Render::RenderBuffer::AddRef(v6);
  v7 = (Scaleform::RefCountVImpl *)this->Texture.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  this->Texture.pObject = __that->Texture.pObject;
  return this;
}

Scaleform::Render::GL::GraphicsDevice *__fastcall Scaleform::Render::GL::GraphicsDevice::operator=(
        Scaleform::Render::GL::GraphicsDevice *this,
        const Scaleform::Render::GL::GraphicsDevice *other)
{
  bool *ExtensionSupported; // r8
  bool *v4; // rax
  __int64 v5; // rdx
  __int128 v6; // xmm0

  ExtensionSupported = this->ExtensionSupported;
  this->MajorVersion = other->MajorVersion;
  this->MinorVersion = other->MinorVersion;
  v4 = other->ExtensionSupported;
  v5 = 4i64;
  do
  {
    ExtensionSupported += 128;
    v6 = *(_OWORD *)v4;
    v4 += 128;
    *((_OWORD *)ExtensionSupported - 8) = v6;
    *((_OWORD *)ExtensionSupported - 7) = *((_OWORD *)v4 - 7);
    *((_OWORD *)ExtensionSupported - 6) = *((_OWORD *)v4 - 6);
    *((_OWORD *)ExtensionSupported - 5) = *((_OWORD *)v4 - 5);
    *((_OWORD *)ExtensionSupported - 4) = *((_OWORD *)v4 - 4);
    *((_OWORD *)ExtensionSupported - 3) = *((_OWORD *)v4 - 3);
    *((_OWORD *)ExtensionSupported - 2) = *((_OWORD *)v4 - 2);
    *((_OWORD *)ExtensionSupported - 1) = *((_OWORD *)v4 - 1);
    --v5;
  }
  while ( v5 );
  *(_OWORD *)ExtensionSupported = *(_OWORD *)v4;
  *((_OWORD *)ExtensionSupported + 1) = *((_OWORD *)v4 + 1);
  *((_OWORD *)ExtensionSupported + 2) = *((_OWORD *)v4 + 2);
  *((_OWORD *)ExtensionSupported + 3) = *((_OWORD *)v4 + 3);
  *((_OWORD *)ExtensionSupported + 4) = *((_OWORD *)v4 + 4);
  *((_OWORD *)ExtensionSupported + 5) = *((_OWORD *)v4 + 5);
  ExtensionSupported[96] = v4[96];
  Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(this);
  return this;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Assign(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *src)
{
  unsigned __int64 v3; // rbx
  __int64 v7; // r9
  unsigned __int64 v8; // r10
  unsigned __int64 EntryCount; // rax
  unsigned __int64 v10; // r8
  unsigned __int64 v11; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  __m128i v13; // xmm0
  unsigned __int64 SizeMask; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v15; // rax
  __int64 v16; // rbx
  __int64 v17; // rcx
  __int64 v18; // rdx
  unsigned __int64 v19; // r9
  const Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> > *v20; // r8
  __int64 v21; // rcx
  unsigned __int64 v22; // rcx
  _QWORD *v23; // rax
  __m128i v24; // [rsp+20h] [rbp-18h] BYREF

  v3 = 0i64;
  if ( this->pTable )
  {
    v7 = 0i64;
    v8 = this->pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v7) != -2i64 )
        *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v7) = -2i64;
      v7 += 24i64;
      --v8;
    }
    while ( v8 );
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *, const Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *, __int64))Scaleform::Memory::pGlobalHeap->Free)(
        Scaleform::Memory::pGlobalHeap,
        this->pTable,
        src,
        v7);
    this->pTable = 0i64;
  }
  if ( src->pTable )
  {
    EntryCount = src->pTable->EntryCount;
    if ( EntryCount )
    {
      v10 = (5 * EntryCount) >> 2;
      if ( this->pTable )
        v11 = this->pTable->EntryCount;
      else
        v11 = 0i64;
      if ( v10 > v11 )
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
          this,
          pmemAddr,
          v10);
      pTable = src->pTable;
      if ( src->pTable )
      {
        SizeMask = pTable->SizeMask;
        v15 = pTable + 1;
        do
        {
          if ( v15->EntryCount != -2i64 )
            break;
          ++v3;
          v15 = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *)((char *)v15 + 24);
        }
        while ( v3 <= SizeMask );
        v24.m128i_i64[0] = (__int64)src;
        v24.m128i_i64[1] = v3;
        v13 = _mm_load_si128(&v24);
      }
      else
      {
        v13 = 0i64;
      }
      v24 = v13;
      v16 = v13.m128i_i64[1];
      while ( v13.m128i_i64[0] )
      {
        v17 = *(_QWORD *)v13.m128i_i64[0];
        if ( !*(_QWORD *)v13.m128i_i64[0] || v16 > *(_QWORD *)(v17 + 8) )
          break;
        v18 = 4i64;
        v19 = 5381i64;
        v20 = (const Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> > *)(v17 + 8 * (v16 + 2 * (v16 + 2)));
        do
        {
          v21 = *((unsigned __int8 *)v20 + --v18);
          v19 = v21 + 65599 * v19;
        }
        while ( v18 );
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>>(
          this,
          pmemAddr,
          v20,
          v19);
        v22 = *(_QWORD *)(*(_QWORD *)v13.m128i_i64[0] + 8i64);
        if ( v16 <= (__int64)v22 && ++v16 <= v22 )
        {
          v23 = (_QWORD *)(*(_QWORD *)v13.m128i_i64[0] + 8 * (v16 + 2 * (v16 + 1)));
          do
          {
            if ( *v23 != -2i64 )
              break;
            ++v16;
            v23 += 3;
          }
          while ( v16 <= v22 );
        }
      }
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::Begin(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this)
{
  unsigned int v2; // eax

  v2 = this->glGetError(this);
  if ( !warned_8 )
    warned_8 = v2 != 0;
  Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(this);
  this->glGetIntegerv(this, 36006u, &this->DefaultFramebuffer);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

_BOOL8 __fastcall Scaleform::Render::GL::GraphicsDevice::CheckExtension(
        Scaleform::Render::GL::GraphicsDevice *this,
        Scaleform::Render::GL::GLExtensionType type)
{
  return this->ExtensionSupported[type];
}

bool __fastcall Scaleform::Render::GL::GraphicsDevice::CheckGLVersion(
        Scaleform::Render::GL::GraphicsDevice *this,
        unsigned int reqMajor,
        unsigned int reqMinor)
{
  unsigned int MajorVersion; // eax

  MajorVersion = this->MajorVersion;
  return MajorVersion > reqMajor || MajorVersion == reqMajor && this->MinorVersion >= reqMinor;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this)
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
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    if ( this->pTable )
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    this->pTable = 0i64;
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

void __fastcall Scaleform::Render::GL::DebugMessageCallback(
        unsigned int source,
        unsigned int type,
        unsigned int id,
        unsigned int severity,
        int __formal,
        const char *message)
{
  Scaleform::Render::GL::GLEnumString *v7; // rax
  const char *v8; // r11
  const char *str; // r8
  Scaleform::Render::GL::GLEnumString *v10; // rax
  const char *v11; // rdx
  Scaleform::Render::GL::GLEnumString *v12; // rax
  Scaleform::LogMessageId ida; // [rsp+40h] [rbp-18h] BYREF

  v7 = sourceList;
  while ( 1 )
  {
    v8 = "Unknown GLenum";
    if ( !v7->key )
    {
LABEL_5:
      str = "Unknown GLenum";
      goto LABEL_6;
    }
    if ( v7->key == source )
      break;
    if ( !++v7 )
      goto LABEL_5;
  }
  str = v7->str;
LABEL_6:
  v10 = typeList;
  while ( 1 )
  {
    if ( !v10->key )
    {
LABEL_10:
      v11 = "Unknown GLenum";
      goto LABEL_11;
    }
    if ( v10->key == type )
      break;
    if ( !++v10 )
      goto LABEL_10;
  }
  v11 = v10->str;
LABEL_11:
  v12 = severityList;
  while ( v12->key )
  {
    if ( v12->key == severity )
    {
      v8 = v12->str;
      break;
    }
    if ( !++v12 )
      break;
  }
  ida.Id = 135168;
  Scaleform::LogDebugMessage(
    &ida,
    "GL Debug Message: %s\nSource          : %s\nType            : %s\nSeverity        : %s\nId              : %d\n",
    message,
    str,
    v11,
    v8,
    id);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::End(Scaleform::Render::GL::GraphicsDeviceRecorder *this)
{
  signed __int64 v2; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v5; // rax

  v2 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v2 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v5 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    this->CommandBuffer = v5;
    this->CommandReadPointer = v5;
    this->CommandWritePointer = &v5[v2];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *(_DWORD *)this->CommandWritePointer = 32769;
  this->CommandWritePointer += 8;
}

char __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::ExecuteRecording(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GraphicsDevice *playbackDevice)
{
  unsigned int *v5; // rax
  unsigned int v6; // esi
  char v7; // bl

  playbackDevice->Begin(playbackDevice);
  if ( **(_DWORD **)&this->MajorVersion == 32769 )
    return 0;
  do
  {
    while ( *(_QWORD *)&this->MajorVersion == *(_QWORD *)this->ExtensionSupported )
      Scaleform::Thread::Sleep(0);
    Scaleform::Lock::DoLock((Scaleform::Lock *)&this->ExtensionSupported[88]);
    v5 = *(unsigned int **)&this->MajorVersion;
    v6 = *v5;
    *(_QWORD *)&this->MajorVersion = v5 + 2;
    Scaleform::Lock::Unlock((Scaleform::Lock *)&this->ExtensionSupported[88]);
    Scaleform::Render::GL::GraphicsDeviceRecorder::executeCommand(
      (Scaleform::Render::GL::GraphicsDeviceRecorder *)((char *)this - 736),
      v6,
      (Scaleform::Render::GL::GraphicsDevice *)playbackDevice);
  }
  while ( v6 != 32769 );
  v7 = Scaleform::Render::GraphicsDeviceRecorder::ExecuteRecording(
         (Scaleform::Render::GraphicsDeviceRecorder *)this,
         playbackDevice);
  Scaleform::Render::GL::GraphicsDevice::clearCachedBindings((Scaleform::Render::GL::GraphicsDeviceRecorder *)((char *)this - 736));
  return v7;
}

const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *__fastcall Scaleform::Render::GL::HALGLFramebuffer::GetAttachment(
        Scaleform::Render::GL::HALGLFramebuffer *this,
        unsigned int a0)
{
  Scaleform::HashLH<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_BindingIndexerAttachments; // rbx
  __int64 Index; // rax
  __int64 v4; // rdx
  const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *result; // rax
  unsigned int key; // [rsp+38h] [rbp+10h] BYREF

  key = a0;
  p_BindingIndexerAttachments = &this->BindingIndexerAttachments;
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            &this->BindingIndexerAttachments.mHash,
            &key);
  if ( Index < 0 )
    return 0i64;
  v4 = (__int64)&p_BindingIndexerAttachments->mHash.pTable[3 * Index + 2];
  result = (const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *)(v4 + 8);
  if ( !v4 )
    return 0i64;
  return result;
}

Scaleform::Render::GL::HALGLFramebuffer *__fastcall Scaleform::Render::GL::GraphicsDevice::GetBoundFramebuffer(
        Scaleform::Render::GL::GraphicsDevice *this,
        unsigned int a0)
{
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_BindingIndexerFramebuffers; // rbx
  signed __int64 Index; // rax
  __int64 v4; // rax
  __int64 v5; // rcx
  unsigned int key; // [rsp+38h] [rbp+10h] BYREF

  key = a0;
  p_BindingIndexerFramebuffers = &this->BindingIndexerFramebuffers;
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers,
            &key);
  if ( Index < 0 )
    v4 = 0i64;
  else
    v4 = (__int64)&p_BindingIndexerFramebuffers->mHash.pTable[2 * Index + 2];
  v5 = v4 + 8;
  if ( !v4 )
    v5 = 0i64;
  if ( v5 )
    return *(Scaleform::Render::GL::HALGLFramebuffer **)v5;
  else
    return 0i64;
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDevice::GetCaps(Scaleform::Render::GL::GraphicsDevice *this)
{
  return this->Caps;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::Initialize(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        unsigned int configFlags)
{
  bool *ExtensionSupported; // rcx
  __int64 v5; // rdx
  bool *v6; // rax
  __int128 v7; // xmm0
  __int128 v8; // xmm1
  __int128 v9; // xmm0
  __int128 v10; // xmm1
  __int128 v11; // xmm0
  __int128 v12; // xmm1
  __int128 v13; // xmm0
  __int128 v14; // xmm1
  __int128 v15; // xmm0
  __int128 v16; // xmm1
  __int128 v17; // xmm0
  __int128 v18; // xmm1
  __int128 v19; // xmm0
  __int128 v20; // xmm1
  bool v21; // al
  Scaleform::Render::GL::GraphicsDeviceImmediate_vtbl *v22; // rax
  bool v23; // sf
  Scaleform::Render::GL::GraphicsDeviceImmediate_vtbl *v24; // rax
  int v25; // [rsp+58h] [rbp+10h] BYREF

  glGetError();
  Scaleform::Render::GL::GLImmediate::Init(&this->Device, (configFlags & 0x80u) != 0 ? 3 : 0);
  ExtensionSupported = this->ExtensionSupported;
  v5 = 4i64;
  v6 = this->Device.ExtensionSupported;
  do
  {
    ExtensionSupported += 128;
    v7 = *(_OWORD *)v6;
    v8 = *((_OWORD *)v6 + 1);
    v6 += 128;
    *((_OWORD *)ExtensionSupported - 8) = v7;
    v9 = *((_OWORD *)v6 - 6);
    *((_OWORD *)ExtensionSupported - 7) = v8;
    v10 = *((_OWORD *)v6 - 5);
    *((_OWORD *)ExtensionSupported - 6) = v9;
    v11 = *((_OWORD *)v6 - 4);
    *((_OWORD *)ExtensionSupported - 5) = v10;
    v12 = *((_OWORD *)v6 - 3);
    *((_OWORD *)ExtensionSupported - 4) = v11;
    v13 = *((_OWORD *)v6 - 2);
    *((_OWORD *)ExtensionSupported - 3) = v12;
    v14 = *((_OWORD *)v6 - 1);
    *((_OWORD *)ExtensionSupported - 2) = v13;
    *((_OWORD *)ExtensionSupported - 1) = v14;
    --v5;
  }
  while ( v5 );
  v15 = *(_OWORD *)v6;
  this->Caps = 0;
  v16 = *((_OWORD *)v6 + 1);
  *(_OWORD *)ExtensionSupported = v15;
  v17 = *((_OWORD *)v6 + 2);
  *((_OWORD *)ExtensionSupported + 1) = v16;
  v18 = *((_OWORD *)v6 + 3);
  *((_OWORD *)ExtensionSupported + 2) = v17;
  v19 = *((_OWORD *)v6 + 4);
  *((_OWORD *)ExtensionSupported + 3) = v18;
  v20 = *((_OWORD *)v6 + 5);
  v21 = v6[96];
  *((_OWORD *)ExtensionSupported + 4) = v19;
  *((_OWORD *)ExtensionSupported + 5) = v20;
  ExtensionSupported[96] = v21;
  this->MajorVersion = this->Device.MajorVersion;
  this->MinorVersion = this->Device.MinorVersion;
  if ( this->CheckExtension(this, SF_GL_ARB_get_program_binary) )
    this->Caps |= 0x200u;
  if ( this->CheckExtension(this, SF_GL_ARB_sync) && this->CheckGLVersion(this, 3u, 1u) )
    this->Caps |= 0x2000u;
  v22 = this->__vftable;
  this->Caps |= 0xA3u;
  if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GraphicsDeviceImmediate *, __int64))v22->CheckGLVersion)(
         this,
         3i64)
    || this->CheckExtension(this, SF_GL_ARB_draw_instanced) )
  {
    v23 = (configFlags & 0x80000000) != 0;
    if ( !configFlags )
    {
      this->Caps |= 0x800u;
      goto LABEL_15;
    }
  }
  else
  {
    v23 = (configFlags & 0x80000000) != 0;
  }
  if ( v23 )
    this->Caps &= ~0x20u;
LABEL_15:
  if ( (configFlags & 0x40) != 0 )
    this->Caps |= 0x1000u;
  if ( (configFlags & 0x20) != 0
    && (this->CheckExtension(this, SF_GL_ARB_debug_output) || this->CheckExtension(this, SF_GL_KHR_debug)) )
  {
    this->glEnable(this, 33346u);
    this->glDebugMessageControl(this, 4352u, 4352u, 4352u, 0, 0i64, 1u);
    this->glDebugMessageCallback(
      this,
      (void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *))Scaleform::Render::GL::DebugMessageCallback,
      0i64);
  }
  v24 = this->__vftable;
  v25 = 128;
  v24->glGetIntegerv(this, 35658u, &v25);
  this->Caps |= v25 << 16;
}

char __fastcall Scaleform::Render::BlendModeEffect::canCacheAcrossTransform(const bool __formal)
{
  return 1;
}

void __fastcall Scaleform::Render::GL::GraphicsDevice::clearCachedBindings(Scaleform::Render::GL::GraphicsDevice *this)
{
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *BindingIndexerTextures; // rbx
  __int64 v3; // rsi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  this->BindingActiveTexture = 33984;
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerBuffers);
  BindingIndexerTextures = this->BindingIndexerTextures;
  v3 = 5i64;
  do
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)BindingIndexerTextures++);
    --v3;
  }
  while ( v3 );
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers);
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>(&this->BindingIndexerRenderbuffers.mHash);
  pObject = (Scaleform::RefCountVImpl *)this->BindingProgramPipeline.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->BindingProgramPipeline.pObject = 0i64;
  v5 = (Scaleform::RefCountVImpl *)this->BindingVertexArray.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->BindingVertexArray.pObject = 0i64;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::executeCommand(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int commandName,
        Scaleform::Render::GL::GraphicsDevice *device)
{
  unsigned __int8 *CommandReadPointer; // rax
  unsigned int v6; // edi
  unsigned __int8 *v7; // rax
  Scaleform::Render::GL::HALGLProgram *v8; // r15
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLShader *v10; // rdi
  unsigned __int8 *v11; // rax
  Scaleform::Render::GL::HALGLProgram *v12; // r15
  unsigned __int8 *v13; // rax
  unsigned int v14; // er12
  unsigned __int8 *v15; // rax
  const char *v16; // rdi
  unsigned __int8 *v17; // rax
  unsigned int v18; // er15
  unsigned __int8 *v19; // rax
  unsigned __int8 *v20; // rax
  unsigned __int8 *v21; // rax
  unsigned int v22; // er12
  unsigned __int8 *v23; // rax
  const char *v24; // rdi
  unsigned __int8 *v25; // rax
  unsigned int v26; // er15
  unsigned __int8 *v27; // rax
  unsigned __int8 *v28; // rax
  unsigned __int8 *v29; // rax
  unsigned int v30; // er15
  unsigned __int8 *v31; // rax
  unsigned __int8 *v32; // rax
  unsigned int v33; // er15
  unsigned __int8 *v34; // rax
  unsigned __int8 *v35; // rax
  unsigned __int8 *v36; // rax
  unsigned int v37; // edi
  unsigned __int8 *v38; // rax
  unsigned int v39; // er15
  unsigned __int8 *v40; // rax
  unsigned int v41; // edi
  unsigned __int8 *v42; // rax
  unsigned int v43; // er15
  unsigned __int8 *v44; // rax
  unsigned int v45; // edi
  unsigned __int8 *v46; // rax
  unsigned int v47; // er13
  unsigned __int8 *v48; // rax
  unsigned int v49; // er12
  unsigned __int8 *v50; // rax
  unsigned int v51; // er15
  unsigned __int8 *v52; // rax
  unsigned int v53; // edi
  Scaleform::Render::GraphicsDeviceRecorder *v54; // rsi
  unsigned int *v55; // rax
  unsigned int v56; // er13
  __int64 *v57; // rax
  __int64 v58; // r12
  const void **v59; // rax
  const void *v60; // r15
  unsigned int *v61; // rax
  unsigned int v62; // edi
  Scaleform::Render::GraphicsDeviceRecorder *v63; // rsi
  unsigned int *v64; // rax
  unsigned int v65; // er13
  __int64 *v66; // rax
  __int64 v67; // r12
  __int64 *v68; // rax
  __int64 v69; // r15
  const void **v70; // rax
  const void *v71; // rdi
  unsigned __int8 *v72; // rax
  unsigned int v73; // edi
  unsigned __int8 *v74; // rax
  unsigned int v75; // edi
  unsigned __int8 *v76; // rax
  struct __GLsync *v77; // r12
  unsigned __int8 *v78; // rax
  unsigned int v79; // er15
  unsigned __int8 *v80; // rax
  unsigned __int64 v81; // rdi
  unsigned __int8 *v82; // rax
  unsigned __int8 v83; // r13
  unsigned __int8 *v84; // rax
  unsigned __int8 v85; // r12
  unsigned __int8 *v86; // rax
  unsigned __int8 v87; // r15
  unsigned __int8 *v88; // rax
  unsigned __int8 v89; // di
  unsigned __int8 *v90; // rax
  unsigned __int8 *v91; // rax
  unsigned __int8 *v92; // rax
  unsigned __int8 *v93; // rax
  unsigned __int8 *v94; // rax
  unsigned __int8 *v95; // rax
  int v96; // er13
  unsigned __int8 *v97; // rax
  int v98; // er12
  unsigned __int8 *v99; // rax
  int v100; // er15
  unsigned __int8 *v101; // rax
  const void *v102; // rdi
  unsigned __int8 *v103; // rax
  unsigned __int8 *v104; // rax
  unsigned int v105; // er15
  unsigned __int8 *v106; // rax
  unsigned __int8 *v107; // rax
  void (__fastcall *v108)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *); // r15
  unsigned __int8 *v109; // rax
  const void *v110; // rdi
  unsigned __int8 *v111; // rax
  unsigned __int8 *v112; // rax
  unsigned __int8 *v113; // rax
  unsigned int v114; // er13
  unsigned __int8 *v115; // rax
  int v116; // er12
  unsigned __int8 *v117; // rax
  const unsigned int *v118; // r15
  unsigned __int8 *v119; // rax
  unsigned __int8 v120; // di
  Scaleform::Render::GraphicsDeviceRecorder *v121; // rsi
  unsigned __int8 *v122; // rax
  __int64 v123; // r15
  __int64 *v124; // rbx
  __int64 v125; // rdi
  __int64 v126; // rbx
  Scaleform::RefCountVImpl *v127; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v128; // rsi
  unsigned __int8 *v129; // rax
  __int64 v130; // r15
  __int64 *v131; // rbx
  __int64 v132; // rdi
  __int64 v133; // rbx
  Scaleform::RefCountVImpl *v134; // rcx
  unsigned __int8 *v135; // rax
  Scaleform::Render::GraphicsDeviceRecorder *v136; // rsi
  unsigned __int8 *v137; // rax
  __int64 v138; // r15
  __int64 *v139; // rbx
  __int64 v140; // rdi
  __int64 v141; // rbx
  Scaleform::RefCountVImpl *v142; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v143; // rsi
  unsigned __int8 *v144; // rax
  __int64 v145; // r15
  __int64 *v146; // rbx
  __int64 v147; // rdi
  __int64 v148; // rbx
  Scaleform::RefCountVImpl *v149; // rcx
  unsigned __int8 *v150; // rax
  unsigned __int8 *v151; // rax
  struct __GLsync *v152; // rdi
  Scaleform::Render::GraphicsDeviceRecorder *v153; // rsi
  unsigned __int8 *v154; // rax
  __int64 v155; // r15
  __int64 *v156; // rbx
  __int64 v157; // rdi
  __int64 v158; // rbx
  Scaleform::RefCountVImpl *v159; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v160; // rsi
  unsigned __int8 *v161; // rax
  __int64 v162; // r15
  __int64 *v163; // rbx
  __int64 v164; // rdi
  __int64 v165; // rbx
  Scaleform::RefCountVImpl *v166; // rcx
  unsigned __int8 *v167; // rax
  unsigned int v168; // edi
  unsigned __int8 *v169; // rax
  unsigned __int8 v170; // di
  unsigned __int8 *v171; // rax
  unsigned int v172; // edi
  unsigned __int8 *v173; // rax
  unsigned int v174; // edi
  unsigned __int8 *v175; // rax
  unsigned int v176; // er12
  unsigned __int8 *v177; // rax
  int v178; // er15
  unsigned __int8 *v179; // rax
  int v180; // edi
  unsigned __int8 *v181; // rax
  unsigned int v182; // er13
  unsigned __int8 *v183; // rax
  int v184; // er12
  unsigned __int8 *v185; // rax
  unsigned int v186; // er15
  unsigned __int8 *v187; // rax
  const void *v188; // rdi
  unsigned __int8 *v189; // rax
  unsigned __int8 *v190; // rax
  int v191; // er13
  unsigned __int8 *v192; // rax
  unsigned int v193; // er12
  unsigned __int8 *v194; // rax
  const void *v195; // r15
  unsigned __int8 *v196; // rax
  int v197; // edi
  unsigned __int8 *v198; // rax
  unsigned int v199; // edi
  unsigned __int8 *v200; // rax
  unsigned int v201; // edi
  unsigned __int8 *v202; // rax
  unsigned int v203; // er15
  unsigned __int8 *v204; // rax
  unsigned int v205; // edi
  unsigned __int8 *v206; // rax
  unsigned int v207; // er12
  unsigned __int8 *v208; // rax
  __int64 v209; // r15
  unsigned __int8 *v210; // rax
  __int64 v211; // rdi
  unsigned __int8 *v212; // rax
  unsigned int v213; // er13
  unsigned __int8 *v214; // rax
  unsigned int v215; // er12
  unsigned __int8 *v216; // rax
  unsigned int v217; // er15
  unsigned __int8 *v218; // rax
  unsigned __int8 *v219; // rax
  unsigned __int8 *v220; // rax
  unsigned int v221; // er13
  unsigned __int8 *v222; // rax
  unsigned int v223; // er12
  unsigned __int8 *v224; // rax
  unsigned __int8 *v225; // rax
  int v226; // edi
  Scaleform::Render::GraphicsDeviceRecorder *v227; // rsi
  unsigned __int8 *v228; // rax
  __int64 v229; // r15
  __int64 *v230; // rbx
  __int64 v231; // rdi
  __int64 v232; // rbx
  Scaleform::RefCountVImpl *v233; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v234; // rsi
  unsigned __int8 *v235; // rax
  __int64 v236; // r15
  __int64 *v237; // rbx
  __int64 v238; // rdi
  __int64 v239; // rbx
  Scaleform::RefCountVImpl *v240; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v241; // rsi
  unsigned __int8 *v242; // rax
  __int64 v243; // r15
  __int64 *v244; // rbx
  __int64 v245; // rdi
  __int64 v246; // rbx
  Scaleform::RefCountVImpl *v247; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v248; // rsi
  unsigned __int8 *v249; // rax
  __int64 v250; // r15
  __int64 *v251; // rbx
  __int64 v252; // rdi
  __int64 v253; // rbx
  Scaleform::RefCountVImpl *v254; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v255; // rsi
  unsigned __int8 *v256; // rax
  __int64 v257; // r15
  __int64 *v258; // rbx
  __int64 v259; // rdi
  __int64 v260; // rbx
  Scaleform::RefCountVImpl *v261; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v262; // rsi
  unsigned __int8 *v263; // rax
  __int64 v264; // r15
  __int64 *v265; // rbx
  __int64 v266; // rdi
  __int64 v267; // rbx
  Scaleform::RefCountVImpl *v268; // rcx
  unsigned __int8 *v269; // rax
  unsigned int v270; // edi
  unsigned __int8 *v271; // rax
  unsigned __int8 *v272; // rax
  unsigned __int8 *v273; // rax
  unsigned __int8 *v274; // rax
  int *v275; // r13
  unsigned __int8 *v276; // rax
  int *v277; // r12
  unsigned __int8 *v278; // rax
  unsigned int *v279; // r15
  unsigned __int8 *v280; // rax
  char *v281; // rdi
  unsigned __int8 *v282; // rax
  unsigned int v283; // er15
  unsigned __int8 *v284; // rax
  float *v285; // rdi
  unsigned __int8 *v286; // rax
  unsigned __int8 *v287; // rax
  const char *v288; // rdi
  unsigned __int8 *v289; // rax
  unsigned int v290; // er13
  unsigned __int8 *v291; // rax
  unsigned int v292; // er12
  unsigned __int8 *v293; // rax
  unsigned int v294; // er15
  unsigned __int8 *v295; // rax
  int *v296; // rdi
  unsigned __int8 *v297; // rax
  unsigned int v298; // er15
  unsigned __int8 *v299; // rax
  int *v300; // rdi
  unsigned __int8 *v301; // rax
  unsigned __int8 *v302; // rax
  unsigned __int8 *v303; // rax
  int *v304; // r13
  unsigned __int8 *v305; // rax
  unsigned int *v306; // r12
  unsigned __int8 *v307; // rax
  void *v308; // rdi
  unsigned __int8 *v309; // rax
  unsigned __int8 *v310; // rax
  int v311; // er13
  unsigned __int8 *v312; // rax
  int *v313; // r12
  unsigned __int8 *v314; // rax
  char *v315; // rdi
  unsigned __int8 *v316; // rax
  unsigned __int8 *v317; // rax
  unsigned int v318; // er12
  unsigned __int8 *v319; // rax
  int *v320; // rdi
  int *v321; // rbx
  Scaleform::RefCountVImpl *v322; // rdi
  Scaleform::Render::GraphicsDeviceRecorder *v323; // rsi
  Scaleform::RefCountVImpl *v324; // r15
  __int64 v325; // rdi
  Scaleform::RefCountVImpl *v326; // rbx
  Scaleform::RefCountVImpl *v327; // rbx
  Scaleform::Render::GraphicsDeviceRecorder *v328; // rsi
  Scaleform::RefCountVImpl *v329; // rbx
  unsigned __int8 v330; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v331; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v332; // [rsp+20h] [rbp-E0h]
  unsigned __int8 v333; // [rsp+30h] [rbp-D0h]
  float v334; // [rsp+50h] [rbp-B0h] BYREF
  float v335[2]; // [rsp+58h] [rbp-A8h] BYREF
  float v336; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::RefCountVImpl *v337; // [rsp+68h] [rbp-98h] BYREF
  unsigned __int8 v338[8]; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::RefCountVImpl *v339; // [rsp+78h] [rbp-88h] BYREF
  float v340; // [rsp+80h] [rbp-80h] BYREF
  __int64 v341; // [rsp+88h] [rbp-78h] BYREF
  float v342; // [rsp+90h] [rbp-70h] BYREF
  Scaleform::RefCountVImpl *v343; // [rsp+98h] [rbp-68h] BYREF
  __int64 v[1024]; // [rsp+A0h] [rbp-60h] BYREF

  switch ( commandName )
  {
    case 0x8002u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      CommandReadPointer = this->CommandReadPointer;
      v6 = *(_DWORD *)CommandReadPointer;
      this->CommandReadPointer = CommandReadPointer + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glActiveTexture(device, v6);
      return;
    case 0x8003u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v7 = this->CommandReadPointer;
      v8 = *(Scaleform::Render::GL::HALGLProgram **)v7;
      this->CommandReadPointer = v7 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v9 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v9;
      this->CommandReadPointer = v9 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glAttachShader(device, v8, v10);
      if ( v8 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v8);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x8004u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v11 = this->CommandReadPointer;
      v12 = *(Scaleform::Render::GL::HALGLProgram **)v11;
      this->CommandReadPointer = v11 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v13 = this->CommandReadPointer;
      v14 = *(_DWORD *)v13;
      this->CommandReadPointer = v13 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v15 = this->CommandReadPointer;
      v16 = *(const char **)v15;
      this->CommandReadPointer = v15 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBindAttribLocation(device, v12, v14, v16);
      if ( v12 )
        goto LABEL_465;
      return;
    case 0x8005u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v17 = this->CommandReadPointer;
      v18 = *(_DWORD *)v17;
      this->CommandReadPointer = v17 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v19 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v19;
      this->CommandReadPointer = v19 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBindBuffer(device, v18, (Scaleform::Render::GL::HALGLBuffer *)v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x8006u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v20 = this->CommandReadPointer;
      v12 = *(Scaleform::Render::GL::HALGLProgram **)v20;
      this->CommandReadPointer = v20 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v21 = this->CommandReadPointer;
      v22 = *(_DWORD *)v21;
      this->CommandReadPointer = v21 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v23 = this->CommandReadPointer;
      v24 = *(const char **)v23;
      this->CommandReadPointer = v23 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBindFragDataLocation(device, v12, v22, v24);
      if ( v12 )
        goto LABEL_465;
      return;
    case 0x8007u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v25 = this->CommandReadPointer;
      v26 = *(_DWORD *)v25;
      this->CommandReadPointer = v25 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v27 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v27;
      this->CommandReadPointer = v27 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBindFramebuffer(device, v26, (Scaleform::Render::GL::HALGLFramebuffer *)v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x8008u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v28 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v28;
      this->CommandReadPointer = v28 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBindProgramPipeline(device, (Scaleform::Render::GL::HALGLProgramPipeline *)v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x8009u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v29 = this->CommandReadPointer;
      v30 = *(_DWORD *)v29;
      this->CommandReadPointer = v29 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v31 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v31;
      this->CommandReadPointer = v31 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBindRenderbuffer(device, v30, (Scaleform::Render::GL::HALGLRenderbuffer *)v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x800Au:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v32 = this->CommandReadPointer;
      v33 = *(_DWORD *)v32;
      this->CommandReadPointer = v32 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v34 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v34;
      this->CommandReadPointer = v34 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBindTexture(device, v33, (Scaleform::Render::GL::HALGLTexture *)v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x800Bu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v35 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v35;
      this->CommandReadPointer = v35 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBindVertexArray(device, (Scaleform::Render::GL::HALGLVertexArray *)v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x800Cu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v36 = this->CommandReadPointer;
      v37 = *(_DWORD *)v36;
      this->CommandReadPointer = v36 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBlendEquation(device, v37);
      return;
    case 0x800Du:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v38 = this->CommandReadPointer;
      v39 = *(_DWORD *)v38;
      this->CommandReadPointer = v38 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v40 = this->CommandReadPointer;
      v41 = *(_DWORD *)v40;
      this->CommandReadPointer = v40 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBlendEquationSeparate(device, v39, v41);
      return;
    case 0x800Eu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v42 = this->CommandReadPointer;
      v43 = *(_DWORD *)v42;
      this->CommandReadPointer = v42 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v44 = this->CommandReadPointer;
      v45 = *(_DWORD *)v44;
      this->CommandReadPointer = v44 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBlendFunc(device, v43, v45);
      return;
    case 0x800Fu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v46 = this->CommandReadPointer;
      v47 = *(_DWORD *)v46;
      this->CommandReadPointer = v46 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v48 = this->CommandReadPointer;
      v49 = *(_DWORD *)v48;
      this->CommandReadPointer = v48 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v50 = this->CommandReadPointer;
      v51 = *(_DWORD *)v50;
      this->CommandReadPointer = v50 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v52 = this->CommandReadPointer;
      v53 = *(_DWORD *)v52;
      this->CommandReadPointer = v52 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glBlendFuncSeparate(device, v47, v49, v51, v53);
      return;
    case 0x8010u:
      v54 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v54->CommandReadPointer == v54->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v54->BufferLock);
      v55 = (unsigned int *)v54->CommandReadPointer;
      v56 = *v55;
      v54->CommandReadPointer = (unsigned __int8 *)(v55 + 2);
      Scaleform::Lock::Unlock(&v54->BufferLock);
      while ( v54->CommandReadPointer == v54->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&v54->BufferLock);
      v57 = (__int64 *)v54->CommandReadPointer;
      v58 = *v57;
      v54->CommandReadPointer = (unsigned __int8 *)(v57 + 1);
      Scaleform::Lock::Unlock(&v54->BufferLock);
      while ( v54->CommandReadPointer == v54->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&v54->BufferLock);
      v59 = (const void **)v54->CommandReadPointer;
      v60 = *v59;
      v54->CommandReadPointer = (unsigned __int8 *)(v59 + 1);
      Scaleform::Lock::Unlock(&v54->BufferLock);
      while ( v54->CommandReadPointer == v54->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&v54->BufferLock);
      v61 = (unsigned int *)v54->CommandReadPointer;
      v62 = *v61;
      v54->CommandReadPointer = (unsigned __int8 *)(v61 + 2);
      Scaleform::Lock::Unlock(&v54->BufferLock);
      device->glBufferData(device, v56, v58, v60, v62);
      ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)v54);
      return;
    case 0x8011u:
      v63 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v63->CommandReadPointer == v63->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v63->BufferLock);
      v64 = (unsigned int *)v63->CommandReadPointer;
      v65 = *v64;
      v63->CommandReadPointer = (unsigned __int8 *)(v64 + 2);
      Scaleform::Lock::Unlock(&v63->BufferLock);
      while ( v63->CommandReadPointer == v63->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&v63->BufferLock);
      v66 = (__int64 *)v63->CommandReadPointer;
      v67 = *v66;
      v63->CommandReadPointer = (unsigned __int8 *)(v66 + 1);
      Scaleform::Lock::Unlock(&v63->BufferLock);
      while ( v63->CommandReadPointer == v63->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&v63->BufferLock);
      v68 = (__int64 *)v63->CommandReadPointer;
      v69 = *v68;
      v63->CommandReadPointer = (unsigned __int8 *)(v68 + 1);
      Scaleform::Lock::Unlock(&v63->BufferLock);
      while ( v63->CommandReadPointer == v63->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&v63->BufferLock);
      v70 = (const void **)v63->CommandReadPointer;
      v71 = *v70;
      v63->CommandReadPointer = (unsigned __int8 *)(v70 + 1);
      Scaleform::Lock::Unlock(&v63->BufferLock);
      device->glBufferSubData(device, v65, v67, v69, v71);
      ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)v63);
      return;
    case 0x8012u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v72 = this->CommandReadPointer;
      v73 = *(_DWORD *)v72;
      this->CommandReadPointer = v72 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glCheckFramebufferStatus(device, v73);
      return;
    case 0x8013u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v74 = this->CommandReadPointer;
      v75 = *(_DWORD *)v74;
      this->CommandReadPointer = v74 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glClear(device, v75);
      return;
    case 0x8014u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      this->CommandReadPointer += 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      this->CommandReadPointer += 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      this->CommandReadPointer += 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      this->CommandReadPointer += 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      ((void (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *))device->glClearColor)(device);
      return;
    case 0x8015u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v76 = this->CommandReadPointer;
      v77 = *(struct __GLsync **)v76;
      this->CommandReadPointer = v76 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v78 = this->CommandReadPointer;
      v79 = *(_DWORD *)v78;
      this->CommandReadPointer = v78 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v80 = this->CommandReadPointer;
      v81 = *(_QWORD *)v80;
      this->CommandReadPointer = v80 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glClientWaitSync(device, v77, v79, v81);
      return;
    case 0x8016u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v82 = this->CommandReadPointer;
      v83 = *v82;
      this->CommandReadPointer = v82 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v84 = this->CommandReadPointer;
      v85 = *v84;
      this->CommandReadPointer = v84 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v86 = this->CommandReadPointer;
      v87 = *v86;
      this->CommandReadPointer = v86 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v88 = this->CommandReadPointer;
      v89 = *v88;
      this->CommandReadPointer = v88 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      v330 = v89;
      device->glColorMask(device, v83, v85, v87, v330);
      return;
    case 0x8017u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v90 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v90;
      this->CommandReadPointer = v90 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glCompileShader(device, v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x8018u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v91 = this->CommandReadPointer;
      v334 = *(float *)v91;
      this->CommandReadPointer = v91 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v92 = this->CommandReadPointer;
      v336 = *(float *)v92;
      this->CommandReadPointer = v92 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v93 = this->CommandReadPointer;
      v340 = *(float *)v93;
      this->CommandReadPointer = v93 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v94 = this->CommandReadPointer;
      v342 = *(float *)v94;
      this->CommandReadPointer = v94 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v95 = this->CommandReadPointer;
      v96 = *(_DWORD *)v95;
      this->CommandReadPointer = v95 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v97 = this->CommandReadPointer;
      v98 = *(_DWORD *)v97;
      this->CommandReadPointer = v97 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v99 = this->CommandReadPointer;
      v100 = *(_DWORD *)v99;
      this->CommandReadPointer = v99 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v101 = this->CommandReadPointer;
      v102 = *(const void **)v101;
      this->CommandReadPointer = v101 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glCompressedTexImage2D(
        device,
        LODWORD(v334),
        LODWORD(v336),
        LODWORD(v340),
        LODWORD(v342),
        v96,
        v98,
        v100,
        v102);
      return;
    case 0x8019u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v103 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v103;
      this->CommandReadPointer = v103 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glCreateProgram(device, (Scaleform::Render::GL::HALGLProgram *)v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x801Au:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v104 = this->CommandReadPointer;
      v105 = *(_DWORD *)v104;
      this->CommandReadPointer = v104 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v106 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v106;
      this->CommandReadPointer = v106 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glCreateShader(device, v105, v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x801Bu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v107 = this->CommandReadPointer;
      v108 = *(void (__fastcall **)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *))v107;
      this->CommandReadPointer = v107 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v109 = this->CommandReadPointer;
      v110 = *(const void **)v109;
      this->CommandReadPointer = v109 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDebugMessageCallback(device, v108, v110);
      return;
    case 0x801Cu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v111 = this->CommandReadPointer;
      v336 = *(float *)v111;
      this->CommandReadPointer = v111 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v112 = this->CommandReadPointer;
      v334 = *(float *)v112;
      this->CommandReadPointer = v112 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v113 = this->CommandReadPointer;
      v114 = *(_DWORD *)v113;
      this->CommandReadPointer = v113 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v115 = this->CommandReadPointer;
      v116 = *(_DWORD *)v115;
      this->CommandReadPointer = v115 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v117 = this->CommandReadPointer;
      v118 = *(const unsigned int **)v117;
      this->CommandReadPointer = v117 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v119 = this->CommandReadPointer;
      v120 = *v119;
      this->CommandReadPointer = v119 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      v333 = v120;
      device->glDebugMessageControl(device, LODWORD(v336), LODWORD(v334), v114, v116, v118, v333);
      return;
    case 0x801Du:
      v121 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v121->CommandReadPointer == v121->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v121->BufferLock);
      v122 = v121->CommandReadPointer;
      v123 = *(int *)v122;
      v121->CommandReadPointer = v122 + 8;
      Scaleform::Lock::Unlock(&v121->BufferLock);
      if ( (int)v123 > 0 )
      {
        v124 = v;
        v125 = (unsigned int)v123;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v121, v124++);
          --v125;
        }
        while ( v125 );
      }
      device->glDeleteBuffers(device, v123, (Scaleform::Render::GL::HALGLBuffer **)v);
      v126 = 0i64;
      if ( (int)v123 > 0 )
      {
        do
        {
          v127 = (Scaleform::RefCountVImpl *)v[v126];
          if ( v127 )
            Scaleform::RefCountImpl::Release(v127);
          ++v126;
        }
        while ( v126 < v123 );
      }
      return;
    case 0x801Eu:
      v128 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v128->CommandReadPointer == v128->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v128->BufferLock);
      v129 = v128->CommandReadPointer;
      v130 = *(int *)v129;
      v128->CommandReadPointer = v129 + 8;
      Scaleform::Lock::Unlock(&v128->BufferLock);
      if ( (int)v130 > 0 )
      {
        v131 = v;
        v132 = (unsigned int)v130;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v128, v131++);
          --v132;
        }
        while ( v132 );
      }
      device->glDeleteFramebuffers(device, v130, (Scaleform::Render::GL::HALGLFramebuffer **)v);
      v133 = 0i64;
      if ( (int)v130 > 0 )
      {
        do
        {
          v134 = (Scaleform::RefCountVImpl *)v[v133];
          if ( v134 )
            Scaleform::RefCountImpl::Release(v134);
          ++v133;
        }
        while ( v133 < v130 );
      }
      return;
    case 0x801Fu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v135 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v135;
      this->CommandReadPointer = v135 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDeleteProgram(device, (Scaleform::Render::GL::HALGLProgram *)v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x8020u:
      v136 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v136->CommandReadPointer == v136->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v136->BufferLock);
      v137 = v136->CommandReadPointer;
      v138 = *(int *)v137;
      v136->CommandReadPointer = v137 + 8;
      Scaleform::Lock::Unlock(&v136->BufferLock);
      if ( (int)v138 > 0 )
      {
        v139 = v;
        v140 = (unsigned int)v138;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v136, v139++);
          --v140;
        }
        while ( v140 );
      }
      device->glDeleteProgramPipelines(device, v138, (Scaleform::Render::GL::HALGLProgramPipeline **)v);
      v141 = 0i64;
      if ( (int)v138 > 0 )
      {
        do
        {
          v142 = (Scaleform::RefCountVImpl *)v[v141];
          if ( v142 )
            Scaleform::RefCountImpl::Release(v142);
          ++v141;
        }
        while ( v141 < v138 );
      }
      return;
    case 0x8021u:
      v143 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v143->CommandReadPointer == v143->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v143->BufferLock);
      v144 = v143->CommandReadPointer;
      v145 = *(int *)v144;
      v143->CommandReadPointer = v144 + 8;
      Scaleform::Lock::Unlock(&v143->BufferLock);
      if ( (int)v145 > 0 )
      {
        v146 = v;
        v147 = (unsigned int)v145;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v143, v146++);
          --v147;
        }
        while ( v147 );
      }
      device->glDeleteRenderbuffers(device, v145, (Scaleform::Render::GL::HALGLRenderbuffer **)v);
      v148 = 0i64;
      if ( (int)v145 > 0 )
      {
        do
        {
          v149 = (Scaleform::RefCountVImpl *)v[v148];
          if ( v149 )
            Scaleform::RefCountImpl::Release(v149);
          ++v148;
        }
        while ( v148 < v145 );
      }
      return;
    case 0x8022u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v150 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v150;
      this->CommandReadPointer = v150 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDeleteShader(device, v10);
      if ( v10 )
        goto LABEL_319;
      return;
    case 0x8023u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v151 = this->CommandReadPointer;
      v152 = *(struct __GLsync **)v151;
      this->CommandReadPointer = v151 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDeleteSync(device, v152);
      return;
    case 0x8024u:
      v153 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v153->CommandReadPointer == v153->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v153->BufferLock);
      v154 = v153->CommandReadPointer;
      v155 = *(int *)v154;
      v153->CommandReadPointer = v154 + 8;
      Scaleform::Lock::Unlock(&v153->BufferLock);
      if ( (int)v155 > 0 )
      {
        v156 = v;
        v157 = (unsigned int)v155;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v153, v156++);
          --v157;
        }
        while ( v157 );
      }
      device->glDeleteTextures(device, v155, (Scaleform::Render::GL::HALGLTexture **)v);
      v158 = 0i64;
      if ( (int)v155 > 0 )
      {
        do
        {
          v159 = (Scaleform::RefCountVImpl *)v[v158];
          if ( v159 )
            Scaleform::RefCountImpl::Release(v159);
          ++v158;
        }
        while ( v158 < v155 );
      }
      return;
    case 0x8025u:
      v160 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v160->CommandReadPointer == v160->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v160->BufferLock);
      v161 = v160->CommandReadPointer;
      v162 = *(int *)v161;
      v160->CommandReadPointer = v161 + 8;
      Scaleform::Lock::Unlock(&v160->BufferLock);
      if ( (int)v162 > 0 )
      {
        v163 = v;
        v164 = (unsigned int)v162;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v160, v163++);
          --v164;
        }
        while ( v164 );
      }
      device->glDeleteVertexArrays(device, v162, (Scaleform::Render::GL::HALGLVertexArray **)v);
      v165 = 0i64;
      if ( (int)v162 > 0 )
      {
        do
        {
          v166 = (Scaleform::RefCountVImpl *)v[v165];
          if ( v166 )
            Scaleform::RefCountImpl::Release(v166);
          ++v165;
        }
        while ( v165 < v162 );
      }
      return;
    case 0x8026u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v167 = this->CommandReadPointer;
      v168 = *(_DWORD *)v167;
      this->CommandReadPointer = v167 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDepthFunc(device, v168);
      return;
    case 0x8027u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v169 = this->CommandReadPointer;
      v170 = *v169;
      this->CommandReadPointer = v169 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDepthMask(device, v170);
      return;
    case 0x8028u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v171 = this->CommandReadPointer;
      v172 = *(_DWORD *)v171;
      this->CommandReadPointer = v171 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDisable(device, v172);
      return;
    case 0x8029u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v173 = this->CommandReadPointer;
      v174 = *(_DWORD *)v173;
      this->CommandReadPointer = v173 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDisableVertexAttribArray(device, v174);
      return;
    case 0x802Au:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v175 = this->CommandReadPointer;
      v176 = *(_DWORD *)v175;
      this->CommandReadPointer = v175 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v177 = this->CommandReadPointer;
      v178 = *(_DWORD *)v177;
      this->CommandReadPointer = v177 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v179 = this->CommandReadPointer;
      v180 = *(_DWORD *)v179;
      this->CommandReadPointer = v179 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDrawArrays(device, v176, v178, v180);
      return;
    case 0x802Bu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v181 = this->CommandReadPointer;
      v182 = *(_DWORD *)v181;
      this->CommandReadPointer = v181 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v183 = this->CommandReadPointer;
      v184 = *(_DWORD *)v183;
      this->CommandReadPointer = v183 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v185 = this->CommandReadPointer;
      v186 = *(_DWORD *)v185;
      this->CommandReadPointer = v185 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v187 = this->CommandReadPointer;
      v188 = *(const void **)v187;
      this->CommandReadPointer = v187 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDrawElements(device, v182, v184, v186, v188);
      return;
    case 0x802Cu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v189 = this->CommandReadPointer;
      v334 = *(float *)v189;
      this->CommandReadPointer = v189 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v190 = this->CommandReadPointer;
      v191 = *(_DWORD *)v190;
      this->CommandReadPointer = v190 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v192 = this->CommandReadPointer;
      v193 = *(_DWORD *)v192;
      this->CommandReadPointer = v192 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v194 = this->CommandReadPointer;
      v195 = *(const void **)v194;
      this->CommandReadPointer = v194 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v196 = this->CommandReadPointer;
      v197 = *(_DWORD *)v196;
      this->CommandReadPointer = v196 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glDrawElementsInstanced(device, LODWORD(v334), v191, v193, v195, v197);
      return;
    case 0x802Du:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v198 = this->CommandReadPointer;
      v199 = *(_DWORD *)v198;
      this->CommandReadPointer = v198 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glEnable(device, v199);
      return;
    case 0x802Eu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v200 = this->CommandReadPointer;
      v201 = *(_DWORD *)v200;
      this->CommandReadPointer = v200 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glEnableVertexAttribArray(device, v201);
      return;
    case 0x802Fu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v202 = this->CommandReadPointer;
      v203 = *(_DWORD *)v202;
      this->CommandReadPointer = v202 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v204 = this->CommandReadPointer;
      v205 = *(_DWORD *)v204;
      this->CommandReadPointer = v204 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glFenceSync(device, v203, v205);
      return;
    case 0x8030u:
      device->glFlush(device);
      return;
    case 0x8031u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v206 = this->CommandReadPointer;
      v207 = *(_DWORD *)v206;
      this->CommandReadPointer = v206 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v208 = this->CommandReadPointer;
      v209 = *(_QWORD *)v208;
      this->CommandReadPointer = v208 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v210 = this->CommandReadPointer;
      v211 = *(_QWORD *)v210;
      this->CommandReadPointer = v210 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glFlushMappedBufferRange(device, v207, v209, v211);
      return;
    case 0x8032u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v212 = this->CommandReadPointer;
      v213 = *(_DWORD *)v212;
      this->CommandReadPointer = v212 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v214 = this->CommandReadPointer;
      v215 = *(_DWORD *)v214;
      this->CommandReadPointer = v214 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v216 = this->CommandReadPointer;
      v217 = *(_DWORD *)v216;
      this->CommandReadPointer = v216 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v218 = this->CommandReadPointer;
      v10 = *(Scaleform::Render::GL::HALGLShader **)v218;
      this->CommandReadPointer = v218 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glFramebufferRenderbuffer(device, v213, v215, v217, (Scaleform::Render::GL::HALGLRenderbuffer *)v10);
      if ( v10 )
LABEL_319:
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10);
      return;
    case 0x8033u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v219 = this->CommandReadPointer;
      v334 = *(float *)v219;
      this->CommandReadPointer = v219 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v220 = this->CommandReadPointer;
      v221 = *(_DWORD *)v220;
      this->CommandReadPointer = v220 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v222 = this->CommandReadPointer;
      v223 = *(_DWORD *)v222;
      this->CommandReadPointer = v222 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v224 = this->CommandReadPointer;
      v12 = *(Scaleform::Render::GL::HALGLProgram **)v224;
      this->CommandReadPointer = v224 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v225 = this->CommandReadPointer;
      v226 = *(_DWORD *)v225;
      this->CommandReadPointer = v225 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glFramebufferTexture2D(
        device,
        LODWORD(v334),
        v221,
        v223,
        (Scaleform::Render::GL::HALGLTexture *)v12,
        v226);
      if ( v12 )
        goto LABEL_465;
      return;
    case 0x8034u:
      v227 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v227->CommandReadPointer == v227->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v227->BufferLock);
      v228 = v227->CommandReadPointer;
      v229 = *(int *)v228;
      v227->CommandReadPointer = v228 + 8;
      Scaleform::Lock::Unlock(&v227->BufferLock);
      if ( (int)v229 > 0 )
      {
        v230 = v;
        v231 = (unsigned int)v229;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v227, v230++);
          --v231;
        }
        while ( v231 );
      }
      device->glGenBuffers(device, v229, (Scaleform::Render::GL::HALGLBuffer **)v);
      v232 = 0i64;
      if ( (int)v229 > 0 )
      {
        do
        {
          v233 = (Scaleform::RefCountVImpl *)v[v232];
          if ( v233 )
            Scaleform::RefCountImpl::Release(v233);
          ++v232;
        }
        while ( v232 < v229 );
      }
      return;
    case 0x8035u:
      v234 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v234->CommandReadPointer == v234->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v234->BufferLock);
      v235 = v234->CommandReadPointer;
      v236 = *(int *)v235;
      v234->CommandReadPointer = v235 + 8;
      Scaleform::Lock::Unlock(&v234->BufferLock);
      if ( (int)v236 > 0 )
      {
        v237 = v;
        v238 = (unsigned int)v236;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v234, v237++);
          --v238;
        }
        while ( v238 );
      }
      device->glGenFramebuffers(device, v236, (Scaleform::Render::GL::HALGLFramebuffer **)v);
      v239 = 0i64;
      if ( (int)v236 > 0 )
      {
        do
        {
          v240 = (Scaleform::RefCountVImpl *)v[v239];
          if ( v240 )
            Scaleform::RefCountImpl::Release(v240);
          ++v239;
        }
        while ( v239 < v236 );
      }
      return;
    case 0x8036u:
      v241 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v241->CommandReadPointer == v241->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v241->BufferLock);
      v242 = v241->CommandReadPointer;
      v243 = *(int *)v242;
      v241->CommandReadPointer = v242 + 8;
      Scaleform::Lock::Unlock(&v241->BufferLock);
      if ( (int)v243 > 0 )
      {
        v244 = v;
        v245 = (unsigned int)v243;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v241, v244++);
          --v245;
        }
        while ( v245 );
      }
      device->glGenProgramPipelines(device, v243, (Scaleform::Render::GL::HALGLProgramPipeline **)v);
      v246 = 0i64;
      if ( (int)v243 > 0 )
      {
        do
        {
          v247 = (Scaleform::RefCountVImpl *)v[v246];
          if ( v247 )
            Scaleform::RefCountImpl::Release(v247);
          ++v246;
        }
        while ( v246 < v243 );
      }
      return;
    case 0x8037u:
      v248 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v248->CommandReadPointer == v248->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v248->BufferLock);
      v249 = v248->CommandReadPointer;
      v250 = *(int *)v249;
      v248->CommandReadPointer = v249 + 8;
      Scaleform::Lock::Unlock(&v248->BufferLock);
      if ( (int)v250 > 0 )
      {
        v251 = v;
        v252 = (unsigned int)v250;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v248, v251++);
          --v252;
        }
        while ( v252 );
      }
      device->glGenRenderbuffers(device, v250, (Scaleform::Render::GL::HALGLRenderbuffer **)v);
      v253 = 0i64;
      if ( (int)v250 > 0 )
      {
        do
        {
          v254 = (Scaleform::RefCountVImpl *)v[v253];
          if ( v254 )
            Scaleform::RefCountImpl::Release(v254);
          ++v253;
        }
        while ( v253 < v250 );
      }
      return;
    case 0x8038u:
      v255 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v255->CommandReadPointer == v255->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v255->BufferLock);
      v256 = v255->CommandReadPointer;
      v257 = *(int *)v256;
      v255->CommandReadPointer = v256 + 8;
      Scaleform::Lock::Unlock(&v255->BufferLock);
      if ( (int)v257 > 0 )
      {
        v258 = v;
        v259 = (unsigned int)v257;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v255, v258++);
          --v259;
        }
        while ( v259 );
      }
      device->glGenTextures(device, v257, (Scaleform::Render::GL::HALGLTexture **)v);
      v260 = 0i64;
      if ( (int)v257 > 0 )
      {
        do
        {
          v261 = (Scaleform::RefCountVImpl *)v[v260];
          if ( v261 )
            Scaleform::RefCountImpl::Release(v261);
          ++v260;
        }
        while ( v260 < v257 );
      }
      return;
    case 0x8039u:
      v262 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      if ( this->CommandReadPointer == this->CommandWritePointer )
      {
        do
          Scaleform::Thread::Sleep(0);
        while ( v262->CommandReadPointer == v262->CommandWritePointer );
      }
      Scaleform::Lock::DoLock(&v262->BufferLock);
      v263 = v262->CommandReadPointer;
      v264 = *(int *)v263;
      v262->CommandReadPointer = v263 + 8;
      Scaleform::Lock::Unlock(&v262->BufferLock);
      if ( (int)v264 > 0 )
      {
        v265 = v;
        v266 = (unsigned int)v264;
        do
        {
          Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v262, v265++);
          --v266;
        }
        while ( v266 );
      }
      device->glGenVertexArrays(device, v264, (Scaleform::Render::GL::HALGLVertexArray **)v);
      v267 = 0i64;
      if ( (int)v264 > 0 )
      {
        do
        {
          v268 = (Scaleform::RefCountVImpl *)v[v267];
          if ( v268 )
            Scaleform::RefCountImpl::Release(v268);
          ++v267;
        }
        while ( v267 < v264 );
      }
      return;
    case 0x803Au:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v269 = this->CommandReadPointer;
      v270 = *(_DWORD *)v269;
      this->CommandReadPointer = v269 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glGenerateMipmap(device, v270);
      return;
    case 0x803Bu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v271 = this->CommandReadPointer;
      v340 = *(float *)v271;
      this->CommandReadPointer = v271 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v272 = this->CommandReadPointer;
      v336 = *(float *)v272;
      this->CommandReadPointer = v272 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v273 = this->CommandReadPointer;
      v334 = *(float *)v273;
      this->CommandReadPointer = v273 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v274 = this->CommandReadPointer;
      v275 = *(int **)v274;
      this->CommandReadPointer = v274 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v276 = this->CommandReadPointer;
      v277 = *(int **)v276;
      this->CommandReadPointer = v276 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v278 = this->CommandReadPointer;
      v279 = *(unsigned int **)v278;
      this->CommandReadPointer = v278 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v280 = this->CommandReadPointer;
      v281 = *(char **)v280;
      this->CommandReadPointer = v280 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glGetActiveUniform(device, LODWORD(v340), LODWORD(v336), LODWORD(v334), v275, v277, v279, v281);
      return;
    case 0x803Cu:
      device->glGetError(device);
      return;
    case 0x803Du:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v282 = this->CommandReadPointer;
      v283 = *(_DWORD *)v282;
      this->CommandReadPointer = v282 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v284 = this->CommandReadPointer;
      v285 = *(float **)v284;
      this->CommandReadPointer = v284 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glGetFloatv(device, v283, v285);
      return;
    case 0x803Eu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v286 = this->CommandReadPointer;
      v12 = *(Scaleform::Render::GL::HALGLProgram **)v286;
      this->CommandReadPointer = v286 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v287 = this->CommandReadPointer;
      v288 = *(const char **)v287;
      this->CommandReadPointer = v287 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glGetFragDataLocation(device, v12, v288);
      if ( v12 )
        goto LABEL_465;
      return;
    case 0x803Fu:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v289 = this->CommandReadPointer;
      v290 = *(_DWORD *)v289;
      this->CommandReadPointer = v289 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v291 = this->CommandReadPointer;
      v292 = *(_DWORD *)v291;
      this->CommandReadPointer = v291 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v293 = this->CommandReadPointer;
      v294 = *(_DWORD *)v293;
      this->CommandReadPointer = v293 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v295 = this->CommandReadPointer;
      v296 = *(int **)v295;
      this->CommandReadPointer = v295 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glGetFramebufferAttachmentParameteriv(device, v290, v292, v294, v296);
      return;
    case 0x8040u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v297 = this->CommandReadPointer;
      v298 = *(_DWORD *)v297;
      this->CommandReadPointer = v297 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v299 = this->CommandReadPointer;
      v300 = *(int **)v299;
      this->CommandReadPointer = v299 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glGetIntegerv(device, v298, v300);
      return;
    case 0x8041u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v301 = this->CommandReadPointer;
      v12 = *(Scaleform::Render::GL::HALGLProgram **)v301;
      this->CommandReadPointer = v301 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v302 = this->CommandReadPointer;
      v334 = *(float *)v302;
      this->CommandReadPointer = v302 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v303 = this->CommandReadPointer;
      v304 = *(int **)v303;
      this->CommandReadPointer = v303 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v305 = this->CommandReadPointer;
      v306 = *(unsigned int **)v305;
      this->CommandReadPointer = v305 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v307 = this->CommandReadPointer;
      v308 = *(void **)v307;
      this->CommandReadPointer = v307 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glGetProgramBinary(device, v12, LODWORD(v334), v304, v306, v308);
      if ( v12 )
        goto LABEL_465;
      return;
    case 0x8042u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v309 = this->CommandReadPointer;
      v12 = *(Scaleform::Render::GL::HALGLProgram **)v309;
      this->CommandReadPointer = v309 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v310 = this->CommandReadPointer;
      v311 = *(_DWORD *)v310;
      this->CommandReadPointer = v310 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v312 = this->CommandReadPointer;
      v313 = *(int **)v312;
      this->CommandReadPointer = v312 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v314 = this->CommandReadPointer;
      v315 = *(char **)v314;
      this->CommandReadPointer = v314 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glGetProgramInfoLog(device, v12, v311, v313, v315);
      if ( v12 )
        goto LABEL_465;
      return;
    case 0x8043u:
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v316 = this->CommandReadPointer;
      v12 = *(Scaleform::Render::GL::HALGLProgram **)v316;
      this->CommandReadPointer = v316 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v317 = this->CommandReadPointer;
      v318 = *(_DWORD *)v317;
      this->CommandReadPointer = v317 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      while ( this->CommandReadPointer == this->CommandWritePointer )
        Scaleform::Thread::Sleep(0);
      Scaleform::Lock::DoLock(&this->BufferLock);
      v319 = this->CommandReadPointer;
      v320 = *(int **)v319;
      this->CommandReadPointer = v319 + 8;
      Scaleform::Lock::Unlock(&this->BufferLock);
      device->glGetProgramiv(device, v12, v318, v320);
      if ( v12 )
LABEL_465:
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
      return;
    case 0x8044u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      device->glGetRenderbufferParameteriv(device, LODWORD(v336), LODWORD(v334), *(int **)v335);
      return;
    case 0x8045u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = (int *)v339;
      device->glGetShaderInfoLog(
        device,
        (Scaleform::Render::GL::HALGLShader *)v339,
        LODWORD(v334),
        (int *)v337,
        *(char **)v335);
      goto LABEL_528;
    case 0x8046u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = (int *)v337;
      device->glGetShaderiv(device, (Scaleform::Render::GL::HALGLShader *)v337, LODWORD(v334), *(int **)v335);
      goto LABEL_528;
    case 0x8047u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      device->glGetString(device, LODWORD(v334));
      return;
    case 0x8048u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      device->glGetStringi(device, LODWORD(v336), LODWORD(v334));
      return;
    case 0x8049u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      device->glGetSynciv(device, (struct __GLsync *)v339, LODWORD(v336), LODWORD(v334), (int *)v337, *(int **)v335);
      return;
    case 0x804Au:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v342);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v340);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      device->glGetTexImage(device, LODWORD(v342), LODWORD(v340), LODWORD(v336), LODWORD(v334), *(void **)v335);
      return;
    case 0x804Bu:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v340);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      device->glGetTexLevelParameteriv(device, LODWORD(v340), LODWORD(v336), LODWORD(v334), *(int **)v335);
      return;
    case 0x804Cu:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      device->glGetTexParameteriv(device, LODWORD(v336), LODWORD(v334), *(int **)v335);
      return;
    case 0x804Du:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = *(int **)v335;
      v322 = v339;
      device->glGetUniformLocation(
        device,
        (Scaleform::Render::GL::HALGLProgram *)v339,
        (const char *)v337,
        *(Scaleform::Render::GL::HALGLUniformLocation **)v335);
      goto LABEL_526;
    case 0x804Eu:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = *(int **)v335;
      device->glIsFramebuffer(device, *(Scaleform::Render::GL::HALGLFramebuffer **)v335);
      goto LABEL_528;
    case 0x804Fu:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = *(int **)v335;
      device->glIsProgram(device, *(Scaleform::Render::GL::HALGLProgram **)v335);
      goto LABEL_528;
    case 0x8050u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = *(int **)v335;
      device->glIsRenderbuffer(device, *(Scaleform::Render::GL::HALGLRenderbuffer **)v335);
      goto LABEL_528;
    case 0x8051u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = *(int **)v335;
      device->glLinkProgram(device, *(Scaleform::Render::GL::HALGLProgram **)v335);
      goto LABEL_528;
    case 0x8052u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      return;
    case 0x8053u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      device->glMapBufferRange(device, LODWORD(v336), (__int64)v337, *(_QWORD *)v335, LODWORD(v334));
      return;
    case 0x8054u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      device->glPixelStorei(device, LODWORD(v336), LODWORD(v334));
      return;
    case 0x8055u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      device->glPolygonMode(device, LODWORD(v336), LODWORD(v334));
      return;
    case 0x8056u:
      device->glPopGroupMarker(device);
      return;
    case 0x8057u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      v321 = (int *)v337;
      device->glProgramBinary(
        device,
        (Scaleform::Render::GL::HALGLProgram *)v337,
        LODWORD(v336),
        *(const void **)v335,
        LODWORD(v334));
      goto LABEL_528;
    case 0x8058u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      v321 = *(int **)v335;
      device->glProgramParameteri(device, *(Scaleform::Render::GL::HALGLProgram **)v335, LODWORD(v336), LODWORD(v334));
      goto LABEL_528;
    case 0x8059u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = (int *)v337;
      v322 = v339;
      device->glProgramUniform1fv(
        device,
        (Scaleform::Render::GL::HALGLProgram *)v339,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v334),
        *(const float **)v335);
      goto LABEL_526;
    case 0x805Au:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = (int *)v337;
      v322 = v339;
      device->glProgramUniform1iv(
        device,
        (Scaleform::Render::GL::HALGLProgram *)v339,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v334),
        *(const int **)v335);
      goto LABEL_526;
    case 0x805Bu:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = (int *)v337;
      v322 = v339;
      device->glProgramUniform2fv(
        device,
        (Scaleform::Render::GL::HALGLProgram *)v339,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v334),
        *(const float **)v335);
      goto LABEL_526;
    case 0x805Cu:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = (int *)v337;
      v322 = v339;
      device->glProgramUniform3fv(
        device,
        (Scaleform::Render::GL::HALGLProgram *)v339,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v334),
        *(const float **)v335);
      goto LABEL_526;
    case 0x805Du:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = (int *)v337;
      v322 = v339;
      device->glProgramUniform4fv(
        device,
        (Scaleform::Render::GL::HALGLProgram *)v339,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v334),
        *(const float **)v335);
      goto LABEL_526;
    case 0x805Eu:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<unsigned char>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        v338);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      v321 = (int *)v337;
      v322 = v339;
      v331 = v338[0];
      device->glProgramUniformMatrix4fv(
        device,
        (Scaleform::Render::GL::HALGLProgram *)v339,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v334),
        v331,
        *(const float **)v335);
      goto LABEL_526;
    case 0x805Fu:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      device->glPushGroupMarker(device, LODWORD(v334), *(const char **)v335);
      return;
    case 0x8060u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v343);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v342);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v340);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      device->glReadPixels(
        device,
        (int)v339,
        (int)v343,
        LODWORD(v342),
        LODWORD(v340),
        LODWORD(v336),
        LODWORD(v334),
        *(void **)v335);
      return;
    case 0x8061u:
      device->glReleaseShaderCompiler(device);
      return;
    case 0x8062u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v343);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      device->glRenderbufferStorage(device, LODWORD(v336), LODWORD(v334), (int)v343, (int)v339);
      return;
    case 0x8063u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v343);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      device->glScissor(device, LODWORD(v336), LODWORD(v334), (int)v343, (int)v339);
      return;
    case 0x8064u:
      v323 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v343);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(v323, (float *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        v323,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v323, (__int64 *)v335);
      v324 = v337;
      v325 = (unsigned int)v339;
      v326 = v343;
      device->glShaderSource(
        device,
        (Scaleform::Render::GL::HALGLShader *)v343,
        (int)v339,
        (const char *const *)v337,
        *(const int **)v335);
      if ( v326 )
        Scaleform::RefCountImpl::Release(v326);
      if ( (int)v325 > 0 )
      {
        v327 = v324;
        do
        {
          ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)v323);
          v327 = (Scaleform::RefCountVImpl *)((char *)v327 + 8);
          --v325;
        }
        while ( v325 );
      }
      ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)v323);
      ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)v323);
      return;
    case 0x8065u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v343);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      device->glStencilFunc(device, LODWORD(v334), (int)v343, (unsigned int)v339);
      return;
    case 0x8066u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      device->glStencilMask(device, (unsigned int)v339);
      return;
    case 0x8067u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v343);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      device->glStencilOp(device, LODWORD(v334), (unsigned int)v343, (unsigned int)v339);
      return;
    case 0x8068u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)v335);
      device->glStringMarker(device, (int)v339, *(const void **)v335);
      return;
    case 0x8069u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v342);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v340);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v343);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        &v341);
      device->glTexImage2D(
        device,
        LODWORD(v335[0]),
        (int)v337,
        LODWORD(v342),
        LODWORD(v340),
        LODWORD(v336),
        LODWORD(v334),
        (unsigned int)v343,
        (unsigned int)v339,
        (const void *)v341);
      ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)&this->Scaleform::Render::GraphicsDeviceRecorder);
      return;
    case 0x806Au:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      device->glTexParameteri(device, (unsigned int)v339, (unsigned int)v337, LODWORD(v335[0]));
      return;
    case 0x806Bu:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v342);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v340);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v336);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v334);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v343);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        &v341);
      device->glTexSubImage2D(
        device,
        LODWORD(v342),
        LODWORD(v340),
        LODWORD(v336),
        LODWORD(v334),
        (int)v343,
        (int)v339,
        (unsigned int)v337,
        LODWORD(v335[0]),
        (const void *)v341);
      return;
    case 0x806Cu:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        &v341);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      v321 = (int *)v341;
      ((void (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *, __int64))device->glUniform1f)(device, v341);
      goto LABEL_528;
    case 0x806Du:
      v328 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(v328, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v328, &v341);
      v329 = v337;
      device->glUniform1fv(
        device,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v335[0]),
        (const float *)v341);
      goto LABEL_520;
    case 0x806Eu:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        &v341);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      v321 = (int *)v341;
      device->glUniform1i(device, (Scaleform::Render::GL::HALGLUniformLocation *)v341, LODWORD(v335[0]));
      goto LABEL_528;
    case 0x806Fu:
      v328 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(v328, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v328, &v341);
      v329 = v337;
      device->glUniform1iv(
        device,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v335[0]),
        (const int *)v341);
      goto LABEL_520;
    case 0x8070u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        &v341);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      v321 = (int *)v341;
      ((void (__fastcall *)(Scaleform::Render::GL::GraphicsDevice *, __int64))device->glUniform2f)(device, v341);
      goto LABEL_528;
    case 0x8071u:
      v328 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(v328, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v328, &v341);
      v329 = v337;
      device->glUniform2fv(
        device,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v335[0]),
        (const float *)v341);
      goto LABEL_520;
    case 0x8072u:
      v328 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(v328, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v328, &v341);
      v329 = v337;
      device->glUniform3fv(
        device,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v335[0]),
        (const float *)v341);
      goto LABEL_520;
    case 0x8073u:
      v328 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(v328, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v328, &v341);
      v329 = v337;
      device->glUniform4fv(
        device,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v335[0]),
        (const float *)v341);
      goto LABEL_520;
    case 0x8074u:
      v328 = &this->Scaleform::Render::GraphicsDeviceRecorder;
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(v328, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<unsigned char>(v328, v338);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(v328, &v341);
      v329 = v337;
      device->glUniformMatrix4fv(
        device,
        (Scaleform::Render::GL::HALGLUniformLocation *)v337,
        LODWORD(v335[0]),
        v338[0],
        (const float *)v341);
LABEL_520:
      if ( v329 )
        Scaleform::RefCountImpl::Release(v329);
      ActorWeapon::ActionFlagCheck((_SETJMP_FLOAT128 *)v328);
      return;
    case 0x8075u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      device->glUnmapBuffer(device, LODWORD(v335[0]));
      return;
    case 0x8076u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        &v341);
      v321 = (int *)v341;
      device->glUseProgram(device, (Scaleform::Render::GL::HALGLProgram *)v341);
      goto LABEL_528;
    case 0x8077u:
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (__int64 *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        &v341);
      v321 = (int *)v341;
      v322 = v337;
      device->glUseProgramStages(
        device,
        (Scaleform::Render::GL::HALGLProgramPipeline *)v337,
        LODWORD(v335[0]),
        (Scaleform::Render::GL::HALGLProgram *)v341);
LABEL_526:
      if ( v322 )
        Scaleform::RefCountImpl::Release(v322);
LABEL_528:
      if ( v321 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v321);
      break;
    case 0x8078u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v343);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<unsigned char>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        v338);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      Scaleform::Render::GraphicsDeviceRecorder::read<Scaleform::Render::GL::HALGLRenderbuffer *>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        &v341);
      v332 = v338[0];
      device->glVertexAttribPointer(
        device,
        (unsigned int)v343,
        (int)v339,
        (unsigned int)v337,
        v332,
        LODWORD(v335[0]),
        (const void *)v341);
      break;
    case 0x8079u:
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v343);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v339);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(
        &this->Scaleform::Render::GraphicsDeviceRecorder,
        (float *)&v337);
      Scaleform::Render::GraphicsDeviceRecorder::read<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, v335);
      device->glViewport(device, (int)v343, (int)v339, (int)v337, LODWORD(v335[0]));
      break;
    default:
      return;
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glActiveTexture(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        unsigned int a0)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *))this->Device.glActiveTexture)(&this->Device);
  this->BindingActiveTexture = a0;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glActiveTexture(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v8;
    v2->CommandReadPointer = v8;
    v2->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32770;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
  this->BindingActiveTexture = a0;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glAttachShader(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLShader *a1)
{
  __int64 v4; // rdx
  __int64 Name; // r8

  v4 = 0i64;
  if ( a1 )
    Name = a1->Name;
  else
    Name = 0i64;
  if ( a0 )
    v4 = a0->Name;
  this->Device.glAttachShader(&this->Device, v4, Name);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glAttachShader(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLShader *a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = (unsigned __int64)a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a1 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32771;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v11);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBindAttribLocation(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        __int64 a1,
        const char *a2)
{
  if ( a0 )
    this->Device.glBindAttribLocation(&this->Device, a0->Name, a1, a2);
  else
    this->Device.glBindAttribLocation(&this->Device, 0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBindAttribLocation(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        unsigned int a1,
        const char *a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = (unsigned __int64)a2;
  LODWORD(v11) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32772;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v12);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBindBuffer(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        unsigned int a0,
        Scaleform::Render::GL::HALGLBuffer *a1)
{
  unsigned int Name; // er15
  Scaleform::Render::GL::HALGLBuffer *v6; // rbx
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_BindingIndexerBuffers; // rcx
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *v8; // rdx
  signed __int64 Index; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v10; // rsi
  Scaleform::RefCountVImpl *SizeMask; // rcx
  Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeRef v12; // [rsp+20h] [rbp-38h] BYREF
  unsigned int key; // [rsp+68h] [rbp+10h] BYREF
  Scaleform::RefCountVImpl *v14; // [rsp+78h] [rbp+20h] BYREF

  key = a0;
  Name = 0;
  v6 = 0i64;
  if ( a0 - 34962 <= 1 && this->BindingVertexArray.pObject )
  {
    if ( a1 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    p_BindingIndexerBuffers = &this->BindingVertexArray.pObject->BindingIndexerBuffers;
    v8 = p_BindingIndexerBuffers;
LABEL_14:
    v14 = (Scaleform::RefCountVImpl *)a1;
    v12.pFirst = &key;
    v12.pSecond = (const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *)&v14;
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
      (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)p_BindingIndexerBuffers,
      v8,
      &v12);
    if ( v14 )
      Scaleform::RefCountImpl::Release(v14);
    if ( a1 )
      Name = a1->Name;
    this->Device.glBindBuffer(&this->Device, key, Name);
    goto LABEL_19;
  }
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerBuffers,
            &key);
  if ( Index < 0 )
    goto LABEL_11;
  v10 = &this->BindingIndexerBuffers.mHash.pTable[2 * Index + 2];
  if ( !v10 )
    goto LABEL_11;
  SizeMask = (Scaleform::RefCountVImpl *)v10->SizeMask;
  if ( SizeMask )
    Scaleform::Render::RenderBuffer::AddRef(SizeMask);
  v6 = (Scaleform::Render::GL::HALGLBuffer *)v10->SizeMask;
  if ( v6 != a1 )
  {
LABEL_11:
    if ( a1 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    v8 = &this->BindingIndexerBuffers;
    p_BindingIndexerBuffers = &this->BindingIndexerBuffers;
    goto LABEL_14;
  }
LABEL_19:
  if ( v6 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v6);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBindBuffer(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        Scaleform::Render::GL::HALGLBuffer *a1)
{
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_BindingIndexerBuffers; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v6; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::RefCountVImpl *v12; // [rsp+50h] [rbp+8h] BYREF
  float v; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = (unsigned __int64)a1;
  LODWORD(v) = a0;
  if ( a1 )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    a0 = LODWORD(v);
  }
  if ( a0 - 34962 <= 1 && this->BindingVertexArray.pObject )
  {
    if ( a1 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    p_BindingIndexerBuffers = &this->BindingVertexArray.pObject->Scaleform::Render::GraphicsDeviceRecorder::BindingIndexerBuffers;
  }
  else
  {
    if ( a1 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    p_BindingIndexerBuffers = &this->BindingIndexerBuffers;
  }
  v12 = (Scaleform::RefCountVImpl *)a1;
  key.pFirst = (const unsigned int *)&v;
  key.pSecond = (const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *)&v12;
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
    (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)p_BindingIndexerBuffers,
    p_BindingIndexerBuffers,
    &key);
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  v6 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = v6->CommandWritePointer - v6->CommandBuffer;
  if ( v6->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v6->BufferLock);
    CommandBufferSize = v6->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v6->CommandBuffer;
    v6->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v6->CommandBuffer = v10;
    v6->CommandReadPointer = v10;
    v6->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v6->BufferLock);
  }
  *(_DWORD *)v6->CommandWritePointer = 32773;
  v6->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v14);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBindFragDataLocation(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        __int64 a1,
        const char *a2)
{
  if ( a0 )
    this->Device.glBindFragDataLocation(&this->Device, a0->Name, a1, a2);
  else
    this->Device.glBindFragDataLocation(&this->Device, 0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBindFragDataLocation(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        unsigned int a1,
        const char *a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = (unsigned __int64)a2;
  LODWORD(v11) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32774;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v12);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBindFramebuffer(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        unsigned int a0,
        Scaleform::Render::GL::HALGLFramebuffer *a1)
{
  Scaleform::Render::GL::HALGLFramebuffer *v5; // rbx
  signed __int64 Index; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v7; // rsi
  Scaleform::RefCountVImpl *SizeMask; // rcx
  __int64 Name; // r8
  Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeRef v10; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::RefCountVImpl *v11; // [rsp+50h] [rbp+8h] BYREF
  unsigned int key; // [rsp+58h] [rbp+10h] BYREF

  key = a0;
  v5 = 0i64;
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers,
            &key);
  if ( Index < 0 )
    goto LABEL_7;
  v7 = &this->BindingIndexerFramebuffers.mHash.pTable[2 * Index + 2];
  if ( !v7 )
    goto LABEL_7;
  SizeMask = (Scaleform::RefCountVImpl *)v7->SizeMask;
  if ( SizeMask )
    Scaleform::Render::RenderBuffer::AddRef(SizeMask);
  v5 = (Scaleform::Render::GL::HALGLFramebuffer *)v7->SizeMask;
  if ( v5 != a1 || (this->Caps & 0x4000) != 0 )
  {
LABEL_7:
    if ( a1 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    v11 = (Scaleform::RefCountVImpl *)a1;
    v10.pFirst = &key;
    v10.pSecond = (const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *)&v11;
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
      (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers,
      &this->BindingIndexerFramebuffers,
      &v10);
    if ( v11 )
      Scaleform::RefCountImpl::Release(v11);
    if ( a1 )
      Name = a1->Name;
    else
      Name = (unsigned int)this->DefaultFramebuffer;
    this->Device.glBindFramebuffer(&this->Device, key, Name);
  }
  if ( v5 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v5);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBindFramebuffer(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        Scaleform::Render::GL::HALGLFramebuffer *a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::RefCountVImpl *v11; // [rsp+50h] [rbp+8h] BYREF
  float v; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = (unsigned __int64)a1;
  LODWORD(v) = a0;
  if ( a1 )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  }
  v11 = (Scaleform::RefCountVImpl *)a1;
  key.pFirst = (const unsigned int *)&v;
  key.pSecond = (const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *)&v11;
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
    (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers,
    &this->BindingIndexerFramebuffers,
    &key);
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32775;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v13);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBindProgramPipeline(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgramPipeline *a0)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  __int64 Name; // rdx

  if ( this->BindingProgramPipeline.pObject != a0 )
  {
    if ( a0 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
    pObject = (Scaleform::RefCountVImpl *)this->BindingProgramPipeline.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->BindingProgramPipeline.pObject = a0;
    if ( a0 )
      Name = a0->Name;
    else
      Name = 0i64;
    this->Device.glBindProgramPipeline(&this->Device, Name);
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBindProgramPipeline(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgramPipeline *a0)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  pObject = (Scaleform::RefCountVImpl *)this->BindingProgramPipeline.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->BindingProgramPipeline.pObject = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32776;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBindRenderbuffer(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        unsigned int a0,
        Scaleform::Render::GL::HALGLRenderbuffer *a1)
{
  unsigned int Name; // ebp
  Scaleform::Render::GL::HALGLRenderbuffer *v4; // rbx
  signed __int64 Index; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v8; // rsi
  Scaleform::RefCountVImpl *SizeMask; // rcx
  Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::RefCountVImpl *v11; // [rsp+60h] [rbp+8h] BYREF
  unsigned int v12; // [rsp+68h] [rbp+10h] BYREF

  v12 = a0;
  Name = 0;
  v4 = 0i64;
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerRenderbuffers,
            &v12);
  if ( Index < 0 )
    goto LABEL_6;
  v8 = &this->BindingIndexerRenderbuffers.mHash.pTable[2 * Index + 2];
  if ( !v8 )
    goto LABEL_6;
  SizeMask = (Scaleform::RefCountVImpl *)v8->SizeMask;
  if ( SizeMask )
    Scaleform::Render::RenderBuffer::AddRef(SizeMask);
  v4 = (Scaleform::Render::GL::HALGLRenderbuffer *)v8->SizeMask;
  if ( v4 != a1 )
  {
LABEL_6:
    if ( a1 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    v11 = (Scaleform::RefCountVImpl *)a1;
    key.pFirst = &v12;
    key.pSecond = (const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *)&v11;
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
      (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerRenderbuffers,
      &this->BindingIndexerRenderbuffers,
      &key);
    if ( v11 )
      Scaleform::RefCountImpl::Release(v11);
    if ( a1 )
      Name = a1->Name;
    this->Device.glBindRenderbuffer(&this->Device, v12, Name);
  }
  if ( v4 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v4);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBindRenderbuffer(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        Scaleform::Render::GL::HALGLRenderbuffer *a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::RefCountVImpl *v11; // [rsp+50h] [rbp+8h] BYREF
  float v; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+60h] [rbp+18h] BYREF

  v13 = (unsigned __int64)a1;
  LODWORD(v) = a0;
  if ( a1 )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  }
  v11 = (Scaleform::RefCountVImpl *)a1;
  key.pFirst = (const unsigned int *)&v;
  key.pSecond = (const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *)&v11;
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
    (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerRenderbuffers,
    &this->BindingIndexerRenderbuffers,
    &key);
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32777;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v13);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBindTexture(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        unsigned int a0,
        Scaleform::Render::GL::HALGLTexture *a1)
{
  unsigned int Name; // ebp
  Scaleform::Render::GL::HALGLTexture *v4; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *v7; // r15
  signed __int64 Index; // rax
  __int64 v9; // rsi
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *v11; // rdx
  Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeRef v12; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::RefCountVImpl *v13; // [rsp+60h] [rbp+8h] BYREF
  unsigned int key; // [rsp+68h] [rbp+10h] BYREF

  key = a0;
  Name = 0;
  v4 = 0i64;
  v7 = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(&this->__vftable + this->BindingActiveTexture - 33984);
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            v7 + 83,
            &key);
  if ( Index < 0 )
    goto LABEL_6;
  v9 = (__int64)&v7[83].pTable[2 * Index + 2];
  if ( !v9 )
    goto LABEL_6;
  v10 = *(Scaleform::RefCountVImpl **)(v9 + 8);
  if ( v10 )
    Scaleform::Render::RenderBuffer::AddRef(v10);
  v4 = *(Scaleform::Render::GL::HALGLTexture **)(v9 + 8);
  if ( v4 != a1 )
  {
LABEL_6:
    if ( a1 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    v13 = (Scaleform::RefCountVImpl *)a1;
    v12.pFirst = &key;
    v12.pSecond = (const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *)&v13;
    v11 = &this->BindingIndexerTextures[this->BindingActiveTexture - 33984];
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
      &v11->mHash,
      v11,
      &v12);
    if ( v13 )
      Scaleform::RefCountImpl::Release(v13);
    if ( a1 )
      Name = a1->Name;
    this->Device.glBindTexture(&this->Device, key, Name);
  }
  if ( v4 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v4);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBindTexture(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        Scaleform::Render::GL::HALGLTexture *a1)
{
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *v5; // rdx
  Scaleform::Render::GraphicsDeviceRecorder *v6; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+20h] [rbp-28h] BYREF
  Scaleform::RefCountVImpl *v12; // [rsp+50h] [rbp+8h] BYREF
  float v; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+60h] [rbp+18h] BYREF

  v14 = (unsigned __int64)a1;
  LODWORD(v) = a0;
  if ( a1 )
  {
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  }
  v12 = (Scaleform::RefCountVImpl *)a1;
  key.pFirst = (const unsigned int *)&v;
  key.pSecond = (const Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *)&v12;
  v5 = &this->BindingIndexerTextures[this->BindingActiveTexture - 33984];
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
    &v5->mHash,
    v5,
    &key);
  if ( v12 )
    Scaleform::RefCountImpl::Release(v12);
  v6 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = v6->CommandWritePointer - v6->CommandBuffer;
  if ( v6->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v6->BufferLock);
    CommandBufferSize = v6->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v6->CommandBuffer;
    v6->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v6->CommandBuffer = v10;
    v6->CommandReadPointer = v10;
    v6->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v6->BufferLock);
  }
  *(_DWORD *)v6->CommandWritePointer = 32778;
  v6->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v14);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBindVertexArray(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLVertexArray *a0)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  __int64 Name; // rdx

  if ( this->BindingVertexArray.pObject != a0 )
  {
    if ( a0 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
    pObject = (Scaleform::RefCountVImpl *)this->BindingVertexArray.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->BindingVertexArray.pObject = a0;
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerBuffers);
    if ( a0 )
      Name = a0->Name;
    else
      Name = 0i64;
    this->Device.glBindVertexArray(&this->Device, Name);
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBindVertexArray(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLVertexArray *a0)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  pObject = (Scaleform::RefCountVImpl *)this->BindingVertexArray.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->BindingVertexArray.pObject = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32779;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBlendEquation(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  this->Device.glBlendEquation(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBlendEquation(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32780;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBlendEquationSeparate(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1)
{
  this->Device.glBlendEquationSeparate(&this->Device, a0, a1);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBlendEquationSeparate(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  float v9; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v9) = a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32781;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v9);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBlendFunc(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1)
{
  this->Device.glBlendFunc(&this->Device, a0, a1);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBlendFunc(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  float v9; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v9) = a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32782;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v9);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBlendFuncSeparate(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glBlendFuncSeparate)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBlendFuncSeparate(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        unsigned int a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  float v12; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v12) = a2;
  LODWORD(v11) = a1;
  LODWORD(v) = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32783;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, (const float *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBufferData(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        unsigned int a0,
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  unsigned __int64 v5; // rbx
  signed __int64 Index; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v11; // rbx
  Scaleform::RefCountVImpl *SizeMask; // rcx
  Scaleform::Render::GL::HALGLVertexArray *pObject; // rax
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_BindingIndexerBuffers; // rbp
  signed __int64 v15; // rax
  __int64 v16; // rdi
  Scaleform::RefCountVImpl *v17; // rcx
  unsigned int v18; // eax
  unsigned int key; // [rsp+68h] [rbp+10h] BYREF

  key = a0;
  v5 = 0i64;
  if ( this->BindingVertexArray.pObject )
    goto LABEL_7;
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerBuffers,
            &key);
  if ( Index >= 0 )
  {
    v11 = &this->BindingIndexerBuffers.mHash.pTable[2 * Index + 2];
    if ( v11 )
    {
      SizeMask = (Scaleform::RefCountVImpl *)v11->SizeMask;
      if ( SizeMask )
        Scaleform::Render::RenderBuffer::AddRef(SizeMask);
      v5 = v11->SizeMask;
      if ( v5 )
      {
LABEL_7:
        pObject = this->BindingVertexArray.pObject;
        if ( pObject )
        {
          p_BindingIndexerBuffers = &pObject->BindingIndexerBuffers;
          v15 = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
                  (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&pObject->BindingIndexerBuffers,
                  &key);
          if ( v15 < 0 )
            goto LABEL_16;
          v16 = (__int64)&p_BindingIndexerBuffers->mHash.pTable[2 * v15 + 2];
          if ( !v16 )
            goto LABEL_16;
          v17 = *(Scaleform::RefCountVImpl **)(v16 + 8);
          if ( v17 )
            Scaleform::Render::RenderBuffer::AddRef(v17);
          if ( v5 )
            Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v5);
          v5 = *(_QWORD *)(v16 + 8);
        }
        v18 = a3;
        *(_QWORD *)(v5 + 24) = a1;
        *(_DWORD *)(v5 + 32) = v18;
        this->Device.glBufferData(&this->Device, a0, a1, a2, v18);
LABEL_16:
        if ( v5 )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v5);
      }
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBufferData(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rbp
  signed __int64 v14; // rsi
  unsigned int v15; // eax
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rax
  signed __int64 v18; // rsi
  unsigned int v19; // eax
  unsigned __int8 *v20; // rdx
  unsigned __int8 *v21; // rax
  signed __int64 Index; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v23; // rbx
  Scaleform::RefCountVImpl *SizeMask; // rcx
  unsigned __int64 v25; // rcx
  unsigned int v26; // eax
  float v; // [rsp+58h] [rbp+10h] BYREF
  unsigned __int64 v28; // [rsp+60h] [rbp+18h] BYREF

  v28 = a1;
  LODWORD(v) = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v12 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v5->CommandBuffer = v12;
    v5->CommandReadPointer = v12;
    v5->CommandWritePointer = &v12[v7];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32784;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v28);
  if ( a2 )
  {
    v13 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v5, a1);
    memmove(v13, a2, a1);
    v14 = v5->CommandWritePointer - v5->CommandBuffer;
    if ( v5->CommandBufferSize - v14 - 8 < 0 )
    {
      Scaleform::Lock::DoLock(&v5->BufferLock);
      v15 = v5->CommandBufferSize;
      do
        v15 *= 2;
      while ( v15 < 8 );
      v16 = v5->CommandBuffer;
      v5->CommandBufferSize = v15;
      v17 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v16, v15);
      v5->CommandBuffer = v17;
      v5->CommandReadPointer = v17;
      v5->CommandWritePointer = &v17[v14];
      Scaleform::Lock::Unlock(&v5->BufferLock);
    }
    *(_QWORD *)v5->CommandWritePointer = v13;
  }
  else
  {
    v18 = v5->CommandWritePointer - v5->CommandBuffer;
    if ( v5->CommandBufferSize - v18 - 8 < 0 )
    {
      Scaleform::Lock::DoLock(&v5->BufferLock);
      v19 = v5->CommandBufferSize;
      do
        v19 *= 2;
      while ( v19 < 8 );
      v20 = v5->CommandBuffer;
      v5->CommandBufferSize = v19;
      v21 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v20, v19);
      v5->CommandBuffer = v21;
      v5->CommandReadPointer = v21;
      v5->CommandWritePointer = &v21[v18];
      Scaleform::Lock::Unlock(&v5->BufferLock);
    }
    *(_DWORD *)v5->CommandWritePointer = 0;
  }
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, (const float *)&a3);
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerBuffers,
            (const unsigned int *)&v);
  if ( Index >= 0 )
  {
    v23 = &this->BindingIndexerBuffers.mHash.pTable[2 * Index + 2];
    if ( v23 )
    {
      SizeMask = (Scaleform::RefCountVImpl *)v23->SizeMask;
      if ( SizeMask )
        Scaleform::Render::RenderBuffer::AddRef(SizeMask);
      v25 = v23->SizeMask;
      if ( v25 )
      {
        v26 = a3;
        *(_QWORD *)(v25 + 24) = a1;
        *(_DWORD *)(v25 + 32) = v26;
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v25);
      }
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glBufferSubData(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        const void *a3)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glBufferSubData)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glBufferSubData(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        __int64 a1,
        __int64 a2,
        const void *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rsi
  signed __int64 v12; // rbp
  unsigned int v13; // eax
  unsigned __int8 *v14; // rdx
  unsigned __int8 *v15; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v17; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v18; // [rsp+58h] [rbp+20h] BYREF

  v18 = a2;
  v17 = a1;
  LODWORD(v) = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v5->CommandBuffer = v10;
    v5->CommandReadPointer = v10;
    v5->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32785;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v17);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v18);
  v11 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v5, a2);
  memmove(v11, a3, a2);
  v12 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v12 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    v13 = v5->CommandBufferSize;
    do
      v13 *= 2;
    while ( v13 < 8 );
    v14 = v5->CommandBuffer;
    v5->CommandBufferSize = v13;
    v15 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v14, v13);
    v5->CommandBuffer = v15;
    v5->CommandReadPointer = v15;
    v5->CommandWritePointer = &v15[v12];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_QWORD *)v5->CommandWritePointer = v11;
  v5->CommandWritePointer += 8;
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glCheckFramebufferStatus(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->Device.glCheckFramebufferStatus)(
           &this->Device,
           a0);
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glCheckFramebufferStatus(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32786;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
  return 36053i64;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glClear(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  this->Device.glClear(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glClear(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32787;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glClearColor(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        float a0,
        float a1,
        float a2,
        float a3)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *))this->Device.glClearColor)(&this->Device);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glClearColor(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        float a0,
        float a1,
        float a2,
        float a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  float v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = a2;
  v11 = a1;
  v = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32788;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &a3);
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glClientWaitSync(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        struct __GLsync *a0,
        __int64 a1,
        unsigned __int64 a2)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, struct __GLsync *, __int64, unsigned __int64))this->Device.glClientWaitSync)(
           &this->Device,
           a0,
           a1,
           a2);
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glClientWaitSync(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        struct __GLsync *a0,
        unsigned int a1,
        unsigned __int64 a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = a2;
  LODWORD(v11) = a1;
  v = (unsigned __int64)a0;
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32789;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v4, &v12);
  return 0i64;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glColorMask(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glColorMask)(
    &this->Device,
    a0,
    a1,
    a2);
}

void Scaleform::Render::GL::GraphicsDeviceRecorder::glColorMask(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned __int8 a0,
        unsigned __int8 a1,
        unsigned __int8 a2,
        ...)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  unsigned __int8 v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int8 v10; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 v11; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+60h] [rbp+28h] BYREF

  va_start(va, a2);
  v11 = a2;
  v10 = a1;
  v = a0;
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32790;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(v4, &v10);
  Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(v4, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(v4, (const unsigned __int8 *)va);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glCompileShader(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLShader *a0)
{
  unsigned int v2; // edi
  __int64 Name; // rdx
  Scaleform::Render::GL::GLImmediate *p_Device; // rsi
  char v6; // [rsp+30h] [rbp+8h] BYREF

  v2 = 0;
  if ( a0 )
    Name = a0->Name;
  else
    Name = 0i64;
  p_Device = &this->Device;
  this->Device.glCompileShader(&this->Device, Name);
  if ( a0 )
    v2 = a0->Name;
  p_Device->glGetShaderiv(p_Device, v2, 35713u, (int *)&v6);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glCompileShader(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLShader *a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = v3->CommandWritePointer - v3->CommandBuffer;
  if ( v3->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v3->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32791;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glCompressedTexImage2D(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        int a6,
        const void *a7)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glCompressedTexImage2D)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glCompressedTexImage2D(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        const void *a7)
{
  Scaleform::Render::GraphicsDeviceRecorder *v9; // rdi
  signed __int64 v10; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v13; // rax
  size_t v14; // rbx
  unsigned __int8 *v15; // rsi
  signed __int64 v16; // rbp
  unsigned int v17; // eax
  unsigned __int8 *v18; // rdx
  unsigned __int8 *v19; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v21; // [rsp+50h] [rbp+18h] BYREF
  float v22; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v22) = a2;
  LODWORD(v21) = a1;
  LODWORD(v) = a0;
  v9 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v10 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v10 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v9->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v9->CommandBuffer;
    v9->CommandBufferSize = CommandBufferSize;
    v13 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v9->CommandBuffer = v13;
    v9->CommandReadPointer = v13;
    v9->CommandWritePointer = &v13[v10];
    Scaleform::Lock::Unlock(&v9->BufferLock);
  }
  *(_DWORD *)v9->CommandWritePointer = 32792;
  v9->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v9, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v9, &v21);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v9, &v22);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v9, (const float *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v9, (const float *)&a4);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v9, (const float *)&a5);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v9, (const float *)&a6);
  v14 = a6;
  v15 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v9, a6);
  memmove(v15, a7, v14);
  v16 = v9->CommandWritePointer - v9->CommandBuffer;
  if ( v9->CommandBufferSize - v16 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v9->BufferLock);
    v17 = v9->CommandBufferSize;
    do
      v17 *= 2;
    while ( v17 < 8 );
    v18 = v9->CommandBuffer;
    v9->CommandBufferSize = v17;
    v19 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v18, v17);
    v9->CommandBuffer = v19;
    v9->CommandReadPointer = v19;
    v9->CommandWritePointer = &v19[v16];
    Scaleform::Lock::Unlock(&v9->BufferLock);
  }
  *(_QWORD *)v9->CommandWritePointer = v15;
  v9->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glCreateProgram(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0)
{
  if ( a0 )
    a0->Name = this->Device.glCreateProgram(&this->Device);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glCreateProgram(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = v3->CommandWritePointer - v3->CommandBuffer;
  if ( v3->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v3->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32793;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glCreateShader(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        Scaleform::Render::GL::HALGLShader *a1)
{
  if ( a1 )
    a1->Name = this->Device.glCreateShader(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glCreateShader(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        Scaleform::Render::GL::HALGLShader *a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = (unsigned __int64)a1;
  LODWORD(v) = a0;
  if ( a1 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = v4->CommandWritePointer - v4->CommandBuffer;
  if ( v4->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v4->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32794;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v4, &v10);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDebugMessageCallback(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        void (__fastcall *a0)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *),
        const void *a1)
{
  this->Device.glDebugMessageCallback(&this->Device, a0, a1);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDebugMessageCallback(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        void (__fastcall *a0)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *),
        const void *a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = (unsigned __int64)a1;
  v = (unsigned __int64)a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32795;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v9);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDebugMessageControl(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        int a3,
        const unsigned int *a4,
        unsigned __int8 a5)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glDebugMessageControl)(
    &this->Device,
    a0,
    a1,
    a2);
}

void Scaleform::Render::GL::GraphicsDeviceRecorder::glDebugMessageControl(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        int a3,
        const unsigned int *a4,
        ...)
{
  Scaleform::Render::GraphicsDeviceRecorder *v6; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF
  float v13; // [rsp+58h] [rbp+20h] BYREF
  va_list va; // [rsp+70h] [rbp+38h] BYREF

  va_start(va, a4);
  LODWORD(v13) = a2;
  LODWORD(v12) = a1;
  LODWORD(v) = a0;
  v6 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v6->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v6->CommandBuffer;
    v6->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v6->CommandBuffer = v10;
    v6->CommandReadPointer = v10;
    v6->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v6->BufferLock);
  }
  *(_DWORD *)v6->CommandWritePointer = 32796;
  v6->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, (const float *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, (const unsigned __int64 *)&a4);
  Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(v6, (const unsigned __int8 *)va);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteBuffers(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        int a0,
        Scaleform::Render::GL::HALGLBuffer **a1)
{
  int v4; // er10
  char *v5; // rax
  __int64 v6; // r9
  Scaleform::Render::GL::HALGLBuffer *v7; // rcx
  unsigned int Name; // edx
  char v9[4096]; // [rsp+20h] [rbp-1018h] BYREF

  v4 = 0;
  if ( a0 > 0 )
  {
    v5 = v9;
    v6 = (unsigned int)a0;
    do
    {
      v7 = *a1;
      Name = (*a1)->Name;
      if ( Name )
      {
        *(_DWORD *)v5 = Name;
        ++v4;
        v5 += 4;
        v7->Name = 0;
      }
      ++a1;
      --v6;
    }
    while ( v6 );
  }
  this->Device.glDeleteBuffers(&this->Device, v4, (const unsigned int *)v9);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteBuffers(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLBuffer **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLBuffer **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32797;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteFramebuffers(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        int a0,
        Scaleform::Render::GL::HALGLFramebuffer **a1)
{
  int v4; // er10
  char *v5; // rax
  __int64 v6; // r9
  Scaleform::Render::GL::HALGLFramebuffer *v7; // rcx
  unsigned int Name; // edx
  char v9[4096]; // [rsp+20h] [rbp-1018h] BYREF

  v4 = 0;
  if ( a0 > 0 )
  {
    v5 = v9;
    v6 = (unsigned int)a0;
    do
    {
      v7 = *a1;
      Name = (*a1)->Name;
      if ( Name )
      {
        *(_DWORD *)v5 = Name;
        ++v4;
        v5 += 4;
        v7->Name = 0;
      }
      ++a1;
      --v6;
    }
    while ( v6 );
  }
  this->Device.glDeleteFramebuffers(&this->Device, v4, (const unsigned int *)v9);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteFramebuffers(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLFramebuffer **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLFramebuffer **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32798;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteProgram(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  this->Device.glDeleteProgram(&this->Device, (unsigned int)a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteProgram(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = v3->CommandWritePointer - v3->CommandBuffer;
  if ( v3->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v3->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32799;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteProgramPipelines(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        Scaleform::Render::GL::HALGLProgramPipeline **a1)
{
  __int64 i; // rax
  Scaleform::Render::GL::HALGLProgramPipeline *v5; // r8
  int v6[1024]; // [rsp+20h] [rbp-1018h] BYREF

  for ( i = 0i64; i < (int)a0; v5->Name = 0 )
  {
    v5 = a1[i];
    v6[i++] = v5->Name;
  }
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, int *, _QWORD))this->Device.glDeleteProgramPipelines)(
    &this->Device,
    a0,
    v6,
    (int)a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteProgramPipelines(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLProgramPipeline **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLProgramPipeline **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32800;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteRenderbuffers(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        Scaleform::Render::GL::HALGLRenderbuffer **a1)
{
  __int64 i; // rax
  Scaleform::Render::GL::HALGLRenderbuffer *v5; // r8
  int v6[1024]; // [rsp+20h] [rbp-1018h] BYREF

  for ( i = 0i64; i < (int)a0; v5->Name = 0 )
  {
    v5 = a1[i];
    v6[i++] = v5->Name;
  }
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, int *, _QWORD))this->Device.glDeleteRenderbuffers)(
    &this->Device,
    a0,
    v6,
    (int)a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteRenderbuffers(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLRenderbuffer **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLRenderbuffer **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32801;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteShader(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLShader *a0)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLShader *)a0->Name;
  this->Device.glDeleteShader(&this->Device, (unsigned int)a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteShader(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLShader *a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = v3->CommandWritePointer - v3->CommandBuffer;
  if ( v3->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v3->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32802;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteSync(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        struct __GLsync *a0)
{
  this->Device.glDeleteSync(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteSync(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        struct __GLsync *a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32803;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v2, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteTextures(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        Scaleform::Render::GL::HALGLTexture **a1)
{
  __int64 i; // rax
  Scaleform::Render::GL::HALGLTexture *v5; // r8
  int v6[1024]; // [rsp+20h] [rbp-1018h] BYREF

  for ( i = 0i64; i < (int)a0; v5->Name = 0 )
  {
    v5 = a1[i];
    v6[i++] = v5->Name;
  }
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, int *, _QWORD))this->Device.glDeleteTextures)(
    &this->Device,
    a0,
    v6,
    (int)a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteTextures(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLTexture **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLTexture **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32804;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDeleteVertexArrays(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        Scaleform::Render::GL::HALGLVertexArray **a1)
{
  __int64 i; // rax
  Scaleform::Render::GL::HALGLVertexArray *v5; // r8
  int v6[1024]; // [rsp+20h] [rbp-1018h] BYREF

  for ( i = 0i64; i < (int)a0; v5->Name = 0 )
  {
    v5 = a1[i];
    v6[i++] = v5->Name;
  }
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, int *, _QWORD))this->Device.glDeleteVertexArrays)(
    &this->Device,
    a0,
    v6,
    (int)a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDeleteVertexArrays(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLVertexArray **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLVertexArray **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32805;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDepthFunc(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  this->Device.glDepthFunc(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDepthFunc(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32806;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDepthMask(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  this->Device.glDepthMask(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDepthMask(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned __int8 a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  unsigned __int8 v; // [rsp+38h] [rbp+10h] BYREF

  v = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32807;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(v2, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDisable(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  this->Device.glDisable(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDisable(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32808;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDisableVertexAttribArray(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  this->Device.glDisableVertexAttribArray(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDisableVertexAttribArray(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32809;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDrawArrays(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2)
{
  this->Device.glDrawArrays(&this->Device, a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDrawArrays(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1,
        int a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v10; // [rsp+50h] [rbp+18h] BYREF
  float v11; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v11) = a2;
  LODWORD(v10) = a1;
  LODWORD(v) = a0;
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32810;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v10);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v11);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDrawElements(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        const void *a3)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glDrawElements)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDrawElements(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        const void *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  float v12; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v12) = a2;
  LODWORD(v11) = a1;
  LODWORD(v) = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32811;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, (const unsigned __int64 *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glDrawElementsInstanced(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        const void *a3,
        int a4)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glDrawElementsInstanced)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glDrawElementsInstanced(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        const void *a3,
        int a4)
{
  Scaleform::Render::GraphicsDeviceRecorder *v6; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF
  float v13; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v13) = a2;
  LODWORD(v12) = a1;
  LODWORD(v) = a0;
  v6 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v6->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v6->CommandBuffer;
    v6->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v6->CommandBuffer = v10;
    v6->CommandReadPointer = v10;
    v6->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v6->BufferLock);
  }
  *(_DWORD *)v6->CommandWritePointer = 32812;
  v6->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, (const unsigned __int64 *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, (const float *)&a4);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glEnable(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  this->Device.glEnable(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glEnable(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32813;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glEnableVertexAttribArray(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  this->Device.glEnableVertexAttribArray(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glEnableVertexAttribArray(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32814;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
}

struct __GLsync *__fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glFenceSync(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1)
{
  return this->Device.glFenceSync(&this->Device, a0, a1);
}

struct __GLsync *__fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glFenceSync(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  float v10; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v10) = a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32815;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v10);
  return 0i64;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glFlush(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this)
{
  this->Device.glFlush(&this->Device);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glFlush(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this)
{
  signed __int64 v2; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v5; // rax

  v2 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v2 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v5 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    this->CommandBuffer = v5;
    this->CommandReadPointer = v5;
    this->CommandWritePointer = &v5[v2];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *(_DWORD *)this->CommandWritePointer = 32816;
  this->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glFlushMappedBufferRange(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2)
{
  this->Device.glFlushMappedBufferRange(&this->Device, a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glFlushMappedBufferRange(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        __int64 a1,
        __int64 a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v10; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = a2;
  v10 = a1;
  LODWORD(v) = a0;
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32817;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v4, &v10);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v4, &v11);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glFramebufferRenderbuffer(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        Scaleform::Render::GL::HALGLRenderbuffer *a3)
{
  signed __int64 Index; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v9; // rbx
  Scaleform::RefCountVImpl *SizeMask; // rcx
  unsigned __int64 v11; // rbx
  Scaleform::RefCountVImpl *v12; // rdi
  unsigned int RefCount; // edx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rdx
  __int64 v15; // rcx
  unsigned __int64 v16; // r8
  int v17; // [rsp+30h] [rbp-30h] BYREF
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef v18; // [rsp+38h] [rbp-28h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > pmemAddr[2]; // [rsp+48h] [rbp-18h] BYREF
  Scaleform::RefCountVImpl *v20; // [rsp+58h] [rbp-8h]
  int v21; // [rsp+90h] [rbp+30h] BYREF
  unsigned int key; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v23; // [rsp+A0h] [rbp+40h] BYREF

  v23 = a1;
  key = a0;
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers,
            &key);
  if ( Index >= 0 )
  {
    v9 = &this->BindingIndexerFramebuffers.mHash.pTable[2 * Index + 2];
    if ( v9 )
    {
      SizeMask = (Scaleform::RefCountVImpl *)v9->SizeMask;
      if ( SizeMask )
        Scaleform::Render::RenderBuffer::AddRef(SizeMask);
      v11 = v9->SizeMask;
      if ( v11 )
      {
        v12 = (Scaleform::RefCountVImpl *)a3;
        v20 = 0i64;
        *(_OWORD *)&pmemAddr[0].pTable = 0i64;
        if ( a3 )
        {
          v17 = 36161;
          v18.pFirst = (const unsigned int *)&v21;
          v21 = 36048;
          v18.pSecond = &v17;
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
            pmemAddr,
            pmemAddr,
            &v18);
          Scaleform::Render::RenderBuffer::AddRef(v12);
          if ( pmemAddr[1].pTable )
            Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pmemAddr[1].pTable);
          pmemAddr[1].pTable = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *)v12;
          v18.pFirst = &v23;
          v18.pSecond = (const int *)pmemAddr;
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v11 + 16),
            (void *)(v11 + 16),
            (const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *)&v18);
          RefCount = v12[1].RefCount;
        }
        else
        {
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::RemoveAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v11 + 16),
            &v23);
          RefCount = 0;
        }
        this->Device.glFramebufferRenderbuffer(&this->Device, a0, v23, a2, RefCount);
        if ( v20 )
          Scaleform::RefCountImpl::Release(v20);
        if ( pmemAddr[1].pTable )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pmemAddr[1].pTable);
        pTable = pmemAddr[0].pTable;
        if ( pmemAddr[0].pTable )
        {
          v15 = 0i64;
          v16 = pmemAddr[0].pTable->SizeMask + 1;
          do
          {
            if ( *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v15) != -2i64 )
            {
              *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v15) = -2i64;
              pTable = pmemAddr[0].pTable;
            }
            v15 += 24i64;
            --v16;
          }
          while ( v16 );
          if ( pTable )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
          pmemAddr[0].pTable = 0i64;
        }
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v11);
      }
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glFramebufferRenderbuffer(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        Scaleform::Render::GL::HALGLRenderbuffer *a3)
{
  Scaleform::RefCountVImpl *v5; // rsi
  signed __int64 v7; // r14
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  signed __int64 Index; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v12; // rbx
  Scaleform::RefCountVImpl *SizeMask; // rcx
  unsigned __int64 v14; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+20h] [rbp-50h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > pmemAddr[2]; // [rsp+30h] [rbp-40h] BYREF
  Scaleform::RefCountVImpl *v20; // [rsp+40h] [rbp-30h]
  int v21; // [rsp+90h] [rbp+20h] BYREF
  float v; // [rsp+98h] [rbp+28h] BYREF
  float v23; // [rsp+A0h] [rbp+30h] BYREF
  float v24; // [rsp+A8h] [rbp+38h] BYREF

  LODWORD(v24) = a2;
  LODWORD(v23) = a1;
  LODWORD(v) = a0;
  v5 = (Scaleform::RefCountVImpl *)a3;
  if ( a3 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a3);
  v7 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    this->CommandBuffer = v10;
    this->CommandReadPointer = v10;
    this->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *(_DWORD *)this->CommandWritePointer = 32818;
  this->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v23);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v24);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(
    &this->Scaleform::Render::GraphicsDeviceRecorder,
    (const unsigned __int64 *)&a3);
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers,
            (const unsigned int *)&v);
  if ( Index >= 0 )
  {
    v12 = &this->BindingIndexerFramebuffers.mHash.pTable[2 * Index + 2];
    if ( v12 )
    {
      SizeMask = (Scaleform::RefCountVImpl *)v12->SizeMask;
      if ( SizeMask )
        Scaleform::Render::RenderBuffer::AddRef(SizeMask);
      v14 = v12->SizeMask;
      v20 = 0i64;
      *(_OWORD *)&pmemAddr[0].pTable = 0i64;
      if ( v5 )
      {
        v21 = 36161;
        key.pFirst = (const unsigned int *)&a3;
        LODWORD(a3) = 36048;
        key.pSecond = &v21;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          pmemAddr,
          pmemAddr,
          &key);
        Scaleform::Render::RenderBuffer::AddRef(v5);
        if ( pmemAddr[1].pTable )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pmemAddr[1].pTable);
        pmemAddr[1].pTable = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *)v5;
        key.pFirst = (const unsigned int *)&v23;
        key.pSecond = (const int *)pmemAddr;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v14 + 16),
          (void *)(v14 + 16),
          (const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *)&key);
      }
      else
      {
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::RemoveAlt<unsigned int>(
          (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v14 + 16),
          (const unsigned int *)&v23);
      }
      if ( v20 )
        Scaleform::RefCountImpl::Release(v20);
      if ( pmemAddr[1].pTable )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pmemAddr[1].pTable);
      pTable = pmemAddr[0].pTable;
      if ( pmemAddr[0].pTable )
      {
        v16 = 0i64;
        v17 = pmemAddr[0].pTable->SizeMask + 1;
        do
        {
          if ( *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v16) != -2i64 )
          {
            *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v16) = -2i64;
            pTable = pmemAddr[0].pTable;
          }
          v16 += 24i64;
          --v17;
        }
        while ( v17 );
        if ( pTable )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        pmemAddr[0].pTable = 0i64;
      }
      if ( v14 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v14);
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glFramebufferTexture2D(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        Scaleform::Render::GL::HALGLTexture *a3,
        int a4)
{
  signed __int64 Index; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v10; // rbx
  Scaleform::RefCountVImpl *SizeMask; // rcx
  unsigned __int64 v12; // rbx
  Scaleform::Render::GL::HALGLTexture *v13; // rdi
  unsigned int Name; // edx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rdx
  __int64 v16; // rcx
  unsigned __int64 v17; // r8
  int v18; // [rsp+30h] [rbp-30h] BYREF
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef v19; // [rsp+38h] [rbp-28h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > pmemAddr[2]; // [rsp+48h] [rbp-18h] BYREF
  Scaleform::RefCountVImpl *v21; // [rsp+58h] [rbp-8h]
  int v22; // [rsp+90h] [rbp+30h] BYREF
  unsigned int key; // [rsp+98h] [rbp+38h] BYREF
  unsigned int v24; // [rsp+A0h] [rbp+40h] BYREF

  v24 = a1;
  key = a0;
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers,
            &key);
  if ( Index >= 0 )
  {
    v10 = &this->BindingIndexerFramebuffers.mHash.pTable[2 * Index + 2];
    if ( v10 )
    {
      SizeMask = (Scaleform::RefCountVImpl *)v10->SizeMask;
      if ( SizeMask )
        Scaleform::Render::RenderBuffer::AddRef(SizeMask);
      v12 = v10->SizeMask;
      if ( v12 )
      {
        v13 = a3;
        v21 = 0i64;
        *(_OWORD *)&pmemAddr[0].pTable = 0i64;
        if ( a3 )
        {
          v18 = 5890;
          v19.pFirst = (const unsigned int *)&v22;
          v22 = 36048;
          v19.pSecond = &v18;
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
            pmemAddr,
            pmemAddr,
            &v19);
          v22 = 36050;
          v19.pFirst = (const unsigned int *)&v22;
          v19.pSecond = &a4;
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
            pmemAddr,
            pmemAddr,
            &v19);
          Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v13);
          if ( v21 )
            Scaleform::RefCountImpl::Release(v21);
          v21 = (Scaleform::RefCountVImpl *)v13;
          v19.pFirst = &v24;
          v19.pSecond = (const int *)pmemAddr;
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v12 + 16),
            (void *)(v12 + 16),
            (const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *)&v19);
          Name = v13->Name;
        }
        else
        {
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::RemoveAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v12 + 16),
            &v24);
          Name = 0;
        }
        this->Device.glFramebufferTexture2D(&this->Device, a0, v24, a2, Name, a4);
        if ( v21 )
          Scaleform::RefCountImpl::Release(v21);
        if ( pmemAddr[1].pTable )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pmemAddr[1].pTable);
        pTable = pmemAddr[0].pTable;
        if ( pmemAddr[0].pTable )
        {
          v16 = 0i64;
          v17 = pmemAddr[0].pTable->SizeMask + 1;
          do
          {
            if ( *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v16) != -2i64 )
            {
              *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v16) = -2i64;
              pTable = pmemAddr[0].pTable;
            }
            v16 += 24i64;
            --v17;
          }
          while ( v17 );
          if ( pTable )
            ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
          pmemAddr[0].pTable = 0i64;
        }
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v12);
      }
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glFramebufferTexture2D(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        Scaleform::Render::GL::HALGLTexture *a3,
        int a4)
{
  Scaleform::RefCountVImpl *v6; // rsi
  signed __int64 v8; // r14
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  signed __int64 Index; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v13; // rbx
  Scaleform::RefCountVImpl *SizeMask; // rcx
  unsigned __int64 v15; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rdx
  __int64 v17; // rcx
  unsigned __int64 v18; // r8
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+20h] [rbp-50h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > pmemAddr[2]; // [rsp+30h] [rbp-40h] BYREF
  Scaleform::RefCountVImpl *v21; // [rsp+40h] [rbp-30h]
  int v22; // [rsp+90h] [rbp+20h] BYREF
  float v; // [rsp+98h] [rbp+28h] BYREF
  float v24; // [rsp+A0h] [rbp+30h] BYREF
  float v25; // [rsp+A8h] [rbp+38h] BYREF

  LODWORD(v25) = a2;
  LODWORD(v24) = a1;
  LODWORD(v) = a0;
  v6 = (Scaleform::RefCountVImpl *)a3;
  if ( a3 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a3);
  v8 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    this->CommandBuffer = v11;
    this->CommandReadPointer = v11;
    this->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *(_DWORD *)this->CommandWritePointer = 32819;
  this->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v24);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(&this->Scaleform::Render::GraphicsDeviceRecorder, &v25);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(
    &this->Scaleform::Render::GraphicsDeviceRecorder,
    (const unsigned __int64 *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(
    &this->Scaleform::Render::GraphicsDeviceRecorder,
    (const float *)&a4);
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers,
            (const unsigned int *)&v);
  if ( Index >= 0 )
  {
    v13 = &this->BindingIndexerFramebuffers.mHash.pTable[2 * Index + 2];
    if ( v13 )
    {
      SizeMask = (Scaleform::RefCountVImpl *)v13->SizeMask;
      if ( SizeMask )
        Scaleform::Render::RenderBuffer::AddRef(SizeMask);
      v15 = v13->SizeMask;
      v21 = 0i64;
      *(_OWORD *)&pmemAddr[0].pTable = 0i64;
      if ( v6 )
      {
        v22 = 5890;
        key.pFirst = (const unsigned int *)&a3;
        LODWORD(a3) = 36048;
        key.pSecond = &v22;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          pmemAddr,
          pmemAddr,
          &key);
        LODWORD(a3) = 36050;
        key.pFirst = (const unsigned int *)&a3;
        key.pSecond = &a4;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          pmemAddr,
          pmemAddr,
          &key);
        Scaleform::Render::RenderBuffer::AddRef(v6);
        if ( v21 )
          Scaleform::RefCountImpl::Release(v21);
        v21 = v6;
        key.pFirst = (const unsigned int *)&v24;
        key.pSecond = (const int *)pmemAddr;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v15 + 16),
          (void *)(v15 + 16),
          (const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *)&key);
      }
      else
      {
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::RemoveAlt<unsigned int>(
          (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v15 + 16),
          (const unsigned int *)&v24);
      }
      if ( v21 )
        Scaleform::RefCountImpl::Release(v21);
      if ( pmemAddr[1].pTable )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)pmemAddr[1].pTable);
      pTable = pmemAddr[0].pTable;
      if ( pmemAddr[0].pTable )
      {
        v17 = 0i64;
        v18 = pmemAddr[0].pTable->SizeMask + 1;
        do
        {
          if ( *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v17) != -2i64 )
          {
            *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v17) = -2i64;
            pTable = pmemAddr[0].pTable;
          }
          v17 += 24i64;
          --v18;
        }
        while ( v18 );
        if ( pTable )
          ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        pmemAddr[0].pTable = 0i64;
      }
      if ( v15 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v15);
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGenBuffers(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        int a0,
        Scaleform::Render::GL::HALGLBuffer **a1)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  Scaleform::Render::GL::HALGLBuffer *v6; // rdx
  int v7; // ecx
  int v8[1024]; // [rsp+20h] [rbp-1018h] BYREF

  v3 = a0;
  this->Device.glGenBuffers(&this->Device, a0, (unsigned int *)v8);
  v5 = 0i64;
  if ( (int)v3 > 0 )
  {
    do
    {
      v6 = a1[v5];
      v7 = v8[v5++];
      v6->Name = v7;
    }
    while ( v5 < v3 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGenBuffers(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLBuffer **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLBuffer **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32820;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGenFramebuffers(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        int a0,
        Scaleform::Render::GL::HALGLFramebuffer **a1)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  Scaleform::Render::GL::HALGLFramebuffer *v6; // rdx
  int v7; // ecx
  int v8[1024]; // [rsp+20h] [rbp-1018h] BYREF

  v3 = a0;
  this->Device.glGenFramebuffers(&this->Device, a0, (unsigned int *)v8);
  v5 = 0i64;
  if ( (int)v3 > 0 )
  {
    do
    {
      v6 = a1[v5];
      v7 = v8[v5++];
      v6->Name = v7;
    }
    while ( v5 < v3 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGenFramebuffers(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLFramebuffer **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLFramebuffer **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32821;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGenProgramPipelines(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        int a0,
        Scaleform::Render::GL::HALGLProgramPipeline **a1)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  Scaleform::Render::GL::HALGLProgramPipeline *v6; // rdx
  int v7; // ecx
  int v8[1024]; // [rsp+20h] [rbp-1018h] BYREF

  v3 = a0;
  this->Device.glGenProgramPipelines(&this->Device, a0, (unsigned int *)v8);
  v5 = 0i64;
  if ( (int)v3 > 0 )
  {
    do
    {
      v6 = a1[v5];
      v7 = v8[v5++];
      v6->Name = v7;
    }
    while ( v5 < v3 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGenProgramPipelines(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLProgramPipeline **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLProgramPipeline **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32822;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGenRenderbuffers(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        int a0,
        Scaleform::Render::GL::HALGLRenderbuffer **a1)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  Scaleform::Render::GL::HALGLRenderbuffer *v6; // rdx
  int v7; // ecx
  int v8[1024]; // [rsp+20h] [rbp-1018h] BYREF

  v3 = a0;
  this->Device.glGenRenderbuffers(&this->Device, a0, (unsigned int *)v8);
  v5 = 0i64;
  if ( (int)v3 > 0 )
  {
    do
    {
      v6 = a1[v5];
      v7 = v8[v5++];
      v6->Name = v7;
    }
    while ( v5 < v3 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGenRenderbuffers(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLRenderbuffer **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLRenderbuffer **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32823;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGenTextures(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        int a0,
        Scaleform::Render::GL::HALGLTexture **a1)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  Scaleform::Render::GL::HALGLTexture *v6; // rdx
  int v7; // ecx
  int v8[1024]; // [rsp+20h] [rbp-1018h] BYREF

  v3 = a0;
  this->Device.glGenTextures(&this->Device, a0, (unsigned int *)v8);
  v5 = 0i64;
  if ( (int)v3 > 0 )
  {
    do
    {
      v6 = a1[v5];
      v7 = v8[v5++];
      v6->Name = v7;
    }
    while ( v5 < v3 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGenTextures(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLTexture **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLTexture **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32824;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGenVertexArrays(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        int a0,
        Scaleform::Render::GL::HALGLVertexArray **a1)
{
  __int64 v3; // rbx
  __int64 v5; // rax
  Scaleform::Render::GL::HALGLVertexArray *v6; // rdx
  int v7; // ecx
  int v8[1024]; // [rsp+20h] [rbp-1018h] BYREF

  v3 = a0;
  this->Device.glGenVertexArrays(&this->Device, a0, (unsigned int *)v8);
  v5 = 0i64;
  if ( (int)v3 > 0 )
  {
    do
    {
      v6 = a1[v5];
      v7 = v8[v5++];
      v6->Name = v7;
    }
    while ( v5 < v3 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGenVertexArrays(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        Scaleform::Render::GL::HALGLVertexArray **a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rsi
  signed __int64 v5; // r14
  __int64 v6; // rbp
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  Scaleform::Render::GL::HALGLVertexArray **v10; // rbx
  float v; // [rsp+48h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  v6 = (unsigned int)a0;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v9;
    v3->CommandReadPointer = v9;
    v3->CommandWritePointer = &v9[v5];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32825;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  if ( (int)v6 > 0 )
  {
    v10 = a1;
    do
    {
      if ( *a1 )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)*a1);
      Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, (const unsigned __int64 *)v10++);
      ++a1;
      --v6;
    }
    while ( v6 );
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGenerateMipmap(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  this->Device.glGenerateMipmap(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGenerateMipmap(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32826;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetActiveUniform(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4,
        unsigned int *a5,
        char *a6)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glGetActiveUniform)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetActiveUniform(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        int a2,
        int *a3,
        int *a4,
        unsigned int *a5,
        char *a6)
{
  Scaleform::Render::GraphicsDeviceRecorder *v8; // rdi
  signed __int64 v9; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v12; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v14; // [rsp+50h] [rbp+18h] BYREF
  float v15; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v15) = a2;
  LODWORD(v14) = a1;
  LODWORD(v) = a0;
  v8 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v9 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v9 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v8->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v8->CommandBuffer;
    v8->CommandBufferSize = CommandBufferSize;
    v12 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v8->CommandBuffer = v12;
    v8->CommandReadPointer = v12;
    v8->CommandWritePointer = &v12[v9];
    Scaleform::Lock::Unlock(&v8->BufferLock);
  }
  *(_DWORD *)v8->CommandWritePointer = 32827;
  v8->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, &v15);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, (const unsigned __int64 *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, (const unsigned __int64 *)&a4);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, (const unsigned __int64 *)&a5);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, (const unsigned __int64 *)&a6);
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetError(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::GL::GLImmediate *))this->Device.glGetError)(&this->Device);
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetError(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this)
{
  signed __int64 v2; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v5; // rax

  v2 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v2 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v5 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    this->CommandBuffer = v5;
    this->CommandReadPointer = v5;
    this->CommandWritePointer = &v5[v2];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *(_DWORD *)this->CommandWritePointer = 32828;
  this->CommandWritePointer += 8;
  return 0i64;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetFloatv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        float *a1)
{
  this->Device.glGetFloatv(&this->Device, a0, a1);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetFloatv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        float *a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = (unsigned __int64)a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32829;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v9);
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetFragDataLocation(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        const char *a1)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  return ((__int64 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *, const char *))this->Device.glGetFragDataLocation)(
           &this->Device,
           a0,
           a1);
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetFragDataLocation(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        const char *a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v11; // [rsp+40h] [rbp+18h] BYREF

  v11 = (unsigned __int64)a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = v4->CommandWritePointer - v4->CommandBuffer;
  if ( v4->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v4->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32830;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v4, &v11);
  return 0i64;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetFramebufferAttachmentParameteriv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        int *a3)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glGetFramebufferAttachmentParameteriv)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetFramebufferAttachmentParameteriv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        int *a3)
{
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_BindingIndexerFramebuffers; // rdi
  signed __int64 Index; // rax
  __int64 v8; // rbx
  Scaleform::RefCountVImpl *v9; // rcx
  __int64 v10; // rbx
  __int64 v11; // rdi
  __int64 v12; // rax
  __int64 v13; // rdx
  __int64 v14; // r8
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rdx
  __int64 v16; // rax
  __int64 v17; // r8
  __int64 v18; // rcx
  __int64 v19; // rcx
  unsigned __int64 v20; // r9
  unsigned __int64 v21; // rcx
  bool v22; // zf
  unsigned __int64 *v23; // rcx
  __int64 v24; // rcx
  Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment v25; // [rsp+20h] [rbp-38h] BYREF
  unsigned int key; // [rsp+68h] [rbp+10h] BYREF
  unsigned int v27; // [rsp+70h] [rbp+18h] BYREF
  char v28; // [rsp+77h] [rbp+1Fh]
  unsigned int v29; // [rsp+78h] [rbp+20h]

  v29 = a2;
  v27 = a1;
  key = a0;
  p_BindingIndexerFramebuffers = &this->BindingIndexerFramebuffers;
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerFramebuffers,
            &key);
  if ( Index >= 0 )
  {
    v8 = (__int64)&p_BindingIndexerFramebuffers->mHash.pTable[2 * Index + 2];
    if ( v8 )
    {
      v9 = *(Scaleform::RefCountVImpl **)(v8 + 8);
      if ( v9 )
        Scaleform::Render::RenderBuffer::AddRef(v9);
      v10 = *(_QWORD *)(v8 + 8);
      if ( v10 )
      {
        v11 = 0i64;
        memset(&v25, 0, sizeof(v25));
        v12 = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
                (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v10 + 16),
                &v27);
        if ( v12 >= 0 )
        {
          v13 = 48 * v12 + *(_QWORD *)(v10 + 16) + 32i64;
          if ( v13 )
          {
            Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment::operator=(
              &v25,
              (const Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment *)(v13 + 8));
            pTable = v25.Parameters.mHash.pTable;
            if ( v25.Parameters.mHash.pTable )
            {
              v16 = 5381i64;
              v17 = 4i64;
              do
              {
                v18 = (unsigned __int8)*(&v28 + v17--);
                v19 = 65599 * v16 + v18;
                v16 = v19;
              }
              while ( v17 );
              v20 = v19 & v25.Parameters.mHash.pTable->SizeMask;
              v14 = v20;
              v21 = v20 + 2 * (v20 + 1);
              v22 = *(&v25.Parameters.mHash.pTable->EntryCount + v21) == -2i64;
              v23 = &v25.Parameters.mHash.pTable->EntryCount + v21;
              if ( !v22 && v23[1] == v20 )
              {
                while ( v23[1] != v20 || *((_DWORD *)v23 + 4) != a2 )
                {
                  v14 = *v23;
                  if ( *v23 == -1i64 )
                    goto LABEL_21;
                  v23 = &v25.Parameters.mHash.pTable[v14 + 1].EntryCount + v14;
                }
                if ( v14 >= 0 )
                {
                  v14 = (__int64)&v25.Parameters.mHash.pTable[2] + 24 * v14;
                  if ( v14 )
                  {
                    if ( a3 )
                      *a3 = *(_DWORD *)(v14 + 4);
                  }
                }
              }
            }
LABEL_21:
            if ( v25.Texture.pObject )
            {
              Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v25.Texture.pObject);
              pTable = v25.Parameters.mHash.pTable;
            }
            if ( v25.RenderBuffer.pObject )
            {
              Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v25.RenderBuffer.pObject);
              pTable = v25.Parameters.mHash.pTable;
            }
            if ( pTable )
            {
              v24 = pTable->SizeMask + 1;
              do
              {
                if ( *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v11) != -2i64 )
                {
                  *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v11) = -2i64;
                  pTable = v25.Parameters.mHash.pTable;
                }
                v11 += 24i64;
                --v24;
              }
              while ( v24 );
              if ( pTable )
                ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *, __int64))Scaleform::Memory::pGlobalHeap->Free)(
                  Scaleform::Memory::pGlobalHeap,
                  pTable,
                  v14);
            }
          }
        }
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10);
      }
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetIntegerv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        int *a1)
{
  this->Device.glGetIntegerv(&this->Device, a0, a1);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetIntegerv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int *a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = (unsigned __int64)a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32832;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v9);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetProgramBinary(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        __int64 a1,
        int *a2,
        unsigned int *a3,
        void *a4)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *, __int64, int *))this->Device.glGetProgramBinary)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetProgramBinary(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        int a1,
        int *a2,
        unsigned int *a3,
        void *a4)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v13; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v14; // [rsp+58h] [rbp+20h] BYREF

  v14 = (unsigned __int64)a2;
  LODWORD(v13) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32833;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, (const unsigned __int64 *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, (const unsigned __int64 *)&a4);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetProgramInfoLog(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        __int64 a1,
        int *a2,
        char *a3)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *, __int64, int *))this->Device.glGetProgramInfoLog)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetProgramInfoLog(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        int a1,
        int *a2,
        char *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v6; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = (unsigned __int64)a2;
  LODWORD(v12) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v6 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = v6->CommandWritePointer - v6->CommandBuffer;
  if ( v6->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v6->BufferLock);
    CommandBufferSize = v6->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v6->CommandBuffer;
    v6->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v6->CommandBuffer = v10;
    v6->CommandReadPointer = v10;
    v6->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v6->BufferLock);
  }
  *(_DWORD *)v6->CommandWritePointer = 32834;
  v6->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, (const unsigned __int64 *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetProgramiv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        __int64 a1,
        int *a2)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  this->Device.glGetProgramiv(&this->Device, (unsigned int)a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetProgramiv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        unsigned int a1,
        int *a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = (unsigned __int64)a2;
  LODWORD(v11) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32835;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v12);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetRenderbufferParameteriv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        int *a2)
{
  this->Device.glGetRenderbufferParameteriv(&this->Device, a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetRenderbufferParameteriv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        int *a2)
{
  Scaleform::HashLH<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_BindingIndexerRenderbuffers; // rsi
  signed __int64 Index; // rax
  __int64 v8; // rbx
  Scaleform::RefCountVImpl *v9; // rcx
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::RefCountVImpl_vtbl *v11; // r10
  __int64 v12; // rax
  __int64 v13; // r8
  __int64 v14; // rdx
  __int64 v15; // rdx
  __int64 v16; // r9
  __int64 v17; // rdx
  __int64 v18; // r8
  bool v19; // zf
  void (__fastcall **v20)(Scaleform::RefCountVImpl *); // r8
  void (__fastcall **p_AddRef)(Scaleform::RefCountVImpl *); // rdx
  unsigned int key; // [rsp+48h] [rbp+10h] BYREF
  char v23; // [rsp+4Fh] [rbp+17h]
  unsigned int v24; // [rsp+50h] [rbp+18h]

  v24 = a1;
  key = a0;
  p_BindingIndexerRenderbuffers = &this->BindingIndexerRenderbuffers;
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerRenderbuffers,
            &key);
  if ( Index >= 0 )
  {
    v8 = (__int64)&p_BindingIndexerRenderbuffers->mHash.pTable[2 * Index + 2];
    if ( v8 )
    {
      v9 = *(Scaleform::RefCountVImpl **)(v8 + 8);
      if ( v9 )
        Scaleform::Render::RenderBuffer::AddRef(v9);
      v10 = *(Scaleform::RefCountVImpl **)(v8 + 8);
      if ( v10 )
      {
        v11 = v10[1].__vftable;
        if ( v11 )
        {
          v12 = 5381i64;
          v13 = 4i64;
          do
          {
            v14 = (unsigned __int8)*(&v23 + v13--);
            v15 = 65599 * v12 + v14;
            v12 = v15;
          }
          while ( v13 );
          v16 = v15 & (__int64)v11->AddRef;
          v17 = v16;
          v18 = v16 + 2 * (v16 + 1);
          v19 = *((_QWORD *)&v11->~RefCountImplCore + v18) == -2i64;
          v20 = (void (__fastcall **)(Scaleform::RefCountVImpl *))(&v11->~RefCountImplCore + v18);
          if ( !v19 && v20[1] == (void (__fastcall *)(Scaleform::RefCountVImpl *))v16 )
          {
            while ( v20[1] != (void (__fastcall *)(Scaleform::RefCountVImpl *))v16 || *((_DWORD *)v20 + 4) != a1 )
            {
              v17 = (__int64)*v20;
              if ( *v20 == (void (__fastcall *)(Scaleform::RefCountVImpl *))-1i64 )
                goto LABEL_19;
              v20 = &v11->Release + 2 * v17 + v17;
            }
            if ( v17 >= 0 )
            {
              p_AddRef = &v11[v17 + 1].AddRef;
              if ( p_AddRef )
              {
                if ( a2 )
                  *a2 = *((_DWORD *)p_AddRef + 1);
              }
            }
          }
        }
LABEL_19:
        Scaleform::RefCountImpl::Release(v10);
      }
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetShaderInfoLog(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLShader *a0,
        __int64 a1,
        int *a2,
        char *a3)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLShader *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLShader *, __int64, int *))this->Device.glGetShaderInfoLog)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetShaderInfoLog(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLShader *a0,
        int a1,
        int *a2,
        char *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v6; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = (unsigned __int64)a2;
  LODWORD(v12) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v6 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = v6->CommandWritePointer - v6->CommandBuffer;
  if ( v6->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v6->BufferLock);
    CommandBufferSize = v6->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v6->CommandBuffer;
    v6->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v6->CommandBuffer = v10;
    v6->CommandReadPointer = v10;
    v6->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v6->BufferLock);
  }
  *(_DWORD *)v6->CommandWritePointer = 32837;
  v6->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, (const unsigned __int64 *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetShaderiv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLShader *a0,
        __int64 a1,
        int *a2)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLShader *)a0->Name;
  this->Device.glGetShaderiv(&this->Device, (unsigned int)a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetShaderiv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLShader *a0,
        unsigned int a1,
        int *a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = (unsigned __int64)a2;
  LODWORD(v11) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32838;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v12);
}

const unsigned __int8 *__fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetString(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  return this->Device.glGetString(&this->Device, a0);
}

const unsigned __int8 *__fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetString(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32839;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
  return 0i64;
}

const unsigned __int8 *__fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetStringi(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1)
{
  return this->Device.glGetStringi(&this->Device, a0, a1);
}

const unsigned __int8 *__fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetStringi(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  float v10; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v10) = a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32840;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v10);
  return 0i64;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetSynciv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        struct __GLsync *a0,
        __int64 a1,
        __int64 a2,
        int *a3,
        int *a4)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, struct __GLsync *, __int64, __int64))this->Device.glGetSynciv)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetSynciv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        struct __GLsync *a0,
        unsigned int a1,
        int a2,
        int *a3,
        int *a4)
{
  Scaleform::Render::GraphicsDeviceRecorder *v6; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF
  float v13; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v13) = a2;
  LODWORD(v12) = a1;
  v = (unsigned __int64)a0;
  v6 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v6->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v6->CommandBuffer;
    v6->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v6->CommandBuffer = v10;
    v6->CommandReadPointer = v10;
    v6->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v6->BufferLock);
  }
  *(_DWORD *)v6->CommandWritePointer = 32841;
  v6->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, (const unsigned __int64 *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, (const unsigned __int64 *)&a4);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetTexImage(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        unsigned int a3,
        void *a4)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glGetTexImage)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetTexImage(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        unsigned int a3,
        void *a4)
{
  Scaleform::Render::GraphicsDeviceRecorder *v6; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF
  float v13; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v13) = a2;
  LODWORD(v12) = a1;
  LODWORD(v) = a0;
  v6 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v6->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v6->CommandBuffer;
    v6->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v6->CommandBuffer = v10;
    v6->CommandReadPointer = v10;
    v6->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v6->BufferLock);
  }
  *(_DWORD *)v6->CommandWritePointer = 32842;
  v6->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, (const float *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, (const unsigned __int64 *)&a4);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetTexLevelParameteriv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        int *a3)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glGetTexLevelParameteriv)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetTexLevelParameteriv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        int *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  float v12; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v12) = a2;
  LODWORD(v11) = a1;
  LODWORD(v) = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32843;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, (const unsigned __int64 *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetTexParameteriv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        int *a2)
{
  this->Device.glGetTexParameteriv(&this->Device, a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetTexParameteriv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        int *a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v10; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v11; // [rsp+58h] [rbp+20h] BYREF

  v11 = (unsigned __int64)a2;
  LODWORD(v10) = a1;
  LODWORD(v) = a0;
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32844;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v10);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v4, &v11);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glGetUniformLocation(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        const char *a1,
        Scaleform::Render::GL::HALGLUniformLocation *a2)
{
  unsigned int Name; // edi
  __int64 v8; // rdx
  Scaleform::Render::GL::GLImmediate *p_Device; // rsi
  int v10; // eax
  char destination[128]; // [rsp+20h] [rbp-B8h] BYREF

  if ( a2 )
  {
    Name = 0;
    v8 = a0 ? a0->Name : 0i64;
    p_Device = &this->Device;
    v10 = ((__int64 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->Device.glGetUniformLocation)(
            &this->Device,
            v8);
    a2->Location = v10;
    if ( v10 < 0 )
    {
      strcpy_s(destination, 0x80ui64, a1);
      strcat_s(destination, 0x80ui64, "[0]");
      if ( a0 )
        Name = a0->Name;
      a2->Location = p_Device->glGetUniformLocation(p_Device, Name, destination);
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glGetUniformLocation(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        const char *a1,
        Scaleform::Render::GL::HALGLUniformLocation *a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v6; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v12; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = (unsigned __int64)a2;
  v12 = (unsigned __int64)a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a2 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a2);
  v6 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = v6->CommandWritePointer - v6->CommandBuffer;
  if ( v6->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v6->BufferLock);
    CommandBufferSize = v6->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v6->CommandBuffer;
    v6->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v6->CommandBuffer = v10;
    v6->CommandReadPointer = v10;
    v6->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v6->BufferLock);
  }
  *(_DWORD *)v6->CommandWritePointer = 32845;
  v6->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v13);
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glIsFramebuffer(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLFramebuffer *a0)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLFramebuffer *)a0->Name;
  return ((__int64 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLFramebuffer *))this->Device.glIsFramebuffer)(
           &this->Device,
           a0);
}

unsigned __int8 __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glIsFramebuffer(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLFramebuffer *a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32846;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v2, &v);
  return 0;
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glIsProgram(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  return ((__int64 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *))this->Device.glIsProgram)(
           &this->Device,
           a0);
}

unsigned __int8 __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glIsProgram(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32847;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v2, &v);
  return 0;
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glIsRenderbuffer(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLRenderbuffer *a0)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLRenderbuffer *)a0->Name;
  return ((__int64 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLRenderbuffer *))this->Device.glIsRenderbuffer)(
           &this->Device,
           a0);
}

unsigned __int8 __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glIsRenderbuffer(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLRenderbuffer *a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32848;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v2, &v);
  return 0;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glLinkProgram(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  this->Device.glLinkProgram(&this->Device, (unsigned int)a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glLinkProgram(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = v3->CommandWritePointer - v3->CommandBuffer;
  if ( v3->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v3->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32849;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v);
}

void *__fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glMapBuffer(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1)
{
  return this->Device.glMapBuffer(&this->Device, a0, a1);
}

void *__fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glMapBuffer(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  float v10; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v10) = a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32850;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v10);
  return 0i64;
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glMapBufferRange(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glMapBufferRange)(
           &this->Device,
           a0,
           a1,
           a2);
}

unsigned __int8 *__fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glMapBufferRange(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        __int64 a1,
        __int64 a2,
        unsigned int a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  unsigned __int8 *v11; // rsi
  signed __int64 v12; // rbp
  unsigned int v13; // eax
  unsigned __int8 *v14; // rdx
  unsigned __int8 *v15; // rax
  unsigned __int8 *result; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v18; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v19; // [rsp+58h] [rbp+20h] BYREF

  v19 = a2;
  v18 = a1;
  LODWORD(v) = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v5->CommandBuffer = v10;
    v5->CommandReadPointer = v10;
    v5->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32851;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v18);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v19);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, (const float *)&a3);
  v11 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v5, a2);
  v12 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v12 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    v13 = v5->CommandBufferSize;
    do
      v13 *= 2;
    while ( v13 < 8 );
    v14 = v5->CommandBuffer;
    v5->CommandBufferSize = v13;
    v15 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v14, v13);
    v5->CommandBuffer = v15;
    v5->CommandReadPointer = v15;
    v5->CommandWritePointer = &v15[v12];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_QWORD *)v5->CommandWritePointer = v11;
  result = v11;
  v5->CommandWritePointer += 8;
  return result;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glPixelStorei(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1)
{
  this->Device.glPixelStorei(&this->Device, a0, a1);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glPixelStorei(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  float v9; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v9) = a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32852;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v9);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glPolygonMode(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1)
{
  this->Device.glPolygonMode(&this->Device, a0, a1);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glPolygonMode(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  float v9; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v9) = a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32853;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v9);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glPopGroupMarker(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this)
{
  this->Device.glPopGroupMarker(&this->Device);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glPopGroupMarker(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this)
{
  signed __int64 v2; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v5; // rax

  v2 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v2 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v5 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    this->CommandBuffer = v5;
    this->CommandReadPointer = v5;
    this->CommandWritePointer = &v5[v2];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *(_DWORD *)this->CommandWritePointer = 32854;
  this->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramBinary(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        __int64 a1,
        const void *a2,
        int a3)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *, __int64, const void *))this->Device.glProgramBinary)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramBinary(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        unsigned int a1,
        const void *a2,
        int a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v6; // rdi
  signed __int64 v7; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v10; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v12; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v13; // [rsp+58h] [rbp+20h] BYREF

  v13 = (unsigned __int64)a2;
  LODWORD(v12) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v6 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = v6->CommandWritePointer - v6->CommandBuffer;
  if ( v6->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v6->BufferLock);
    CommandBufferSize = v6->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v6->CommandBuffer;
    v6->CommandBufferSize = CommandBufferSize;
    v10 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v6->CommandBuffer = v10;
    v6->CommandReadPointer = v10;
    v6->CommandWritePointer = &v10[v7];
    Scaleform::Lock::Unlock(&v6->BufferLock);
  }
  *(_DWORD *)v6->CommandWritePointer = 32855;
  v6->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v6, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v6, (const float *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramParameteri(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        __int64 a1,
        __int64 a2)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  this->Device.glProgramParameteri(&this->Device, (unsigned int)a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramParameteri(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        unsigned int a1,
        int a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  float v12; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v12) = a2;
  LODWORD(v11) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32856;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v12);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniform1fv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        __int64 a2,
        const float *a3)
{
  __int64 Location; // r8

  if ( a1 )
    Location = (unsigned int)a1->Location;
  else
    Location = 0xFFFFFFFFi64;
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *, __int64, __int64))this->Device.glProgramUniform1fv)(
    &this->Device,
    a0,
    Location,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniform1fv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        int a2,
        const float *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  float v14; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v14) = a2;
  v13 = (unsigned __int64)a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a1 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32857;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, (const unsigned __int64 *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniform1iv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        __int64 a2,
        const int *a3)
{
  __int64 Location; // r8

  if ( a1 )
    Location = (unsigned int)a1->Location;
  else
    Location = 0xFFFFFFFFi64;
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *, __int64, __int64))this->Device.glProgramUniform1iv)(
    &this->Device,
    a0,
    Location,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniform1iv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        int a2,
        const int *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  float v14; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v14) = a2;
  v13 = (unsigned __int64)a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a1 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32858;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, (const unsigned __int64 *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniform2fv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        __int64 a2,
        const float *a3)
{
  __int64 Location; // r8

  if ( a1 )
    Location = (unsigned int)a1->Location;
  else
    Location = 0xFFFFFFFFi64;
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *, __int64, __int64))this->Device.glProgramUniform2fv)(
    &this->Device,
    a0,
    Location,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniform2fv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        int a2,
        const float *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  float v14; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v14) = a2;
  v13 = (unsigned __int64)a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a1 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32859;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, (const unsigned __int64 *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniform3fv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        __int64 a2,
        const float *a3)
{
  __int64 Location; // r8

  if ( a1 )
    Location = (unsigned int)a1->Location;
  else
    Location = 0xFFFFFFFFi64;
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *, __int64, __int64))this->Device.glProgramUniform3fv)(
    &this->Device,
    a0,
    Location,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniform3fv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        int a2,
        const float *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  float v14; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v14) = a2;
  v13 = (unsigned __int64)a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a1 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32860;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, (const unsigned __int64 *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniform4fv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        __int64 a2,
        const float *a3)
{
  __int64 Location; // r8

  if ( a1 )
    Location = (unsigned int)a1->Location;
  else
    Location = 0xFFFFFFFFi64;
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *, __int64, __int64))this->Device.glProgramUniform4fv)(
    &this->Device,
    a0,
    Location,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniform4fv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        int a2,
        const float *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v13; // [rsp+50h] [rbp+18h] BYREF
  float v14; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v14) = a2;
  v13 = (unsigned __int64)a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a1 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32861;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, (const unsigned __int64 *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glProgramUniformMatrix4fv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        __int64 a2,
        unsigned __int8 a3,
        const float *a4)
{
  __int64 Location; // r8

  if ( a1 )
    Location = (unsigned int)a1->Location;
  else
    Location = 0xFFFFFFFFi64;
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLProgram *, __int64, __int64))this->Device.glProgramUniformMatrix4fv)(
    &this->Device,
    a0,
    Location,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glProgramUniformMatrix4fv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0,
        Scaleform::Render::GL::HALGLUniformLocation *a1,
        int a2,
        unsigned __int8 a3,
        const float *a4)
{
  Scaleform::Render::GraphicsDeviceRecorder *v8; // rdi
  signed __int64 v9; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v12; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  unsigned __int64 v14; // [rsp+50h] [rbp+18h] BYREF
  float v15; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v15) = a2;
  v14 = (unsigned __int64)a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a1 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a1);
  v8 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v9 = v8->CommandWritePointer - v8->CommandBuffer;
  if ( v8->CommandBufferSize - v9 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v8->BufferLock);
    CommandBufferSize = v8->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v8->CommandBuffer;
    v8->CommandBufferSize = CommandBufferSize;
    v12 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v8->CommandBuffer = v12;
    v8->CommandReadPointer = v12;
    v8->CommandWritePointer = &v12[v9];
    Scaleform::Lock::Unlock(&v8->BufferLock);
  }
  *(_DWORD *)v8->CommandWritePointer = 32862;
  v8->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, &v15);
  Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(v8, &a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, (const unsigned __int64 *)&a4);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glPushGroupMarker(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        const char *a1)
{
  this->Device.glPushGroupMarker(&this->Device, a0, a1);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glPushGroupMarker(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        const char *a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = (unsigned __int64)a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32863;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v9);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glReadPixels(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        void *a6)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glReadPixels)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glReadPixels(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        void *a6)
{
  Scaleform::Render::GraphicsDeviceRecorder *v8; // rdi
  signed __int64 v9; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v12; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v14; // [rsp+50h] [rbp+18h] BYREF
  float v15; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v15) = a2;
  LODWORD(v14) = a1;
  LODWORD(v) = a0;
  v8 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v9 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v9 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v8->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v8->CommandBuffer;
    v8->CommandBufferSize = CommandBufferSize;
    v12 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v8->CommandBuffer = v12;
    v8->CommandReadPointer = v12;
    v8->CommandWritePointer = &v12[v9];
    Scaleform::Lock::Unlock(&v8->BufferLock);
  }
  *(_DWORD *)v8->CommandWritePointer = 32864;
  v8->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, &v15);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, (const float *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, (const float *)&a4);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, (const float *)&a5);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, (const unsigned __int64 *)&a6);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glReleaseShaderCompiler(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this)
{
  this->Device.glReleaseShaderCompiler(&this->Device);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glReleaseShaderCompiler(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this)
{
  signed __int64 v2; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v5; // rax

  v2 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v2 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = this->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = this->CommandBuffer;
    this->CommandBufferSize = CommandBufferSize;
    v5 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    this->CommandBuffer = v5;
    this->CommandReadPointer = v5;
    this->CommandWritePointer = &v5[v2];
    Scaleform::Lock::Unlock(&this->BufferLock);
  }
  *(_DWORD *)this->CommandWritePointer = 32865;
  this->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glRenderbufferStorage(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        unsigned int a0,
        unsigned int a1,
        int a2,
        int a3)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_BindingIndexerRenderbuffers; // rdi
  signed __int64 Index; // rax
  __int64 v8; // rbx
  Scaleform::RefCountVImpl *v9; // rcx
  __int64 v10; // rbx
  int v11; // [rsp+30h] [rbp-20h] BYREF
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef v12; // [rsp+38h] [rbp-18h] BYREF
  int v13; // [rsp+70h] [rbp+20h] BYREF
  unsigned int key; // [rsp+78h] [rbp+28h] BYREF
  int v15; // [rsp+88h] [rbp+38h] BYREF

  v15 = a2;
  key = a0;
  p_BindingIndexerRenderbuffers = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerRenderbuffers;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *))this->Device.glRenderbufferStorage)(&this->Device);
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            p_BindingIndexerRenderbuffers,
            &key);
  if ( Index >= 0 )
  {
    v8 = (__int64)&p_BindingIndexerRenderbuffers->pTable[2 * Index + 2];
    if ( v8 )
    {
      v9 = *(Scaleform::RefCountVImpl **)(v8 + 8);
      if ( v9 )
        Scaleform::Render::RenderBuffer::AddRef(v9);
      v10 = *(_QWORD *)(v8 + 8);
      if ( v10 )
      {
        v13 = 36162;
        v12.pFirst = (const unsigned int *)&v13;
        v12.pSecond = &v15;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v10 + 16),
          (void *)(v10 + 16),
          &v12);
        v13 = 36163;
        v12.pFirst = (const unsigned int *)&v13;
        v12.pSecond = &a3;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v10 + 16),
          (void *)(v10 + 16),
          &v12);
        if ( a1 != 6401 )
        {
          if ( a1 == 35056 )
          {
            v11 = 24;
            v12.pFirst = (const unsigned int *)&v13;
            v13 = 36180;
            v12.pSecond = &v11;
            Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
              (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v10 + 16),
              (void *)(v10 + 16),
              &v12);
          }
          else if ( a1 != 36168 )
          {
            goto LABEL_12;
          }
        }
        v11 = 8;
        v12.pFirst = (const unsigned int *)&v13;
        v13 = 36181;
        v12.pSecond = &v11;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v10 + 16),
          (void *)(v10 + 16),
          &v12);
LABEL_12:
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10);
      }
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glRenderbufferStorage(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        int a2,
        int a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v7; // r14
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  signed __int64 Index; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v13; // rbx
  Scaleform::RefCountVImpl *SizeMask; // rcx
  unsigned __int64 v15; // rbx
  int v16; // [rsp+20h] [rbp-38h] BYREF
  Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+28h] [rbp-30h] BYREF
  int v18; // [rsp+80h] [rbp+28h] BYREF
  float v; // [rsp+88h] [rbp+30h] BYREF
  float v20; // [rsp+90h] [rbp+38h] BYREF
  float v21; // [rsp+98h] [rbp+40h] BYREF

  LODWORD(v21) = a2;
  LODWORD(v20) = a1;
  LODWORD(v) = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v7 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v7 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v5->CommandBuffer = v11;
    v5->CommandReadPointer = v11;
    v5->CommandWritePointer = &v11[v7];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32866;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v20);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v21);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, (const float *)&a3);
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)&this->BindingIndexerRenderbuffers,
            (const unsigned int *)&v);
  if ( Index >= 0 )
  {
    v13 = &this->BindingIndexerRenderbuffers.mHash.pTable[2 * Index + 2];
    if ( v13 )
    {
      SizeMask = (Scaleform::RefCountVImpl *)v13->SizeMask;
      if ( SizeMask )
        Scaleform::Render::RenderBuffer::AddRef(SizeMask);
      v15 = v13->SizeMask;
      if ( v15 )
      {
        v18 = 36162;
        key.pFirst = (const unsigned int *)&v18;
        key.pSecond = (const int *)&v21;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v15 + 16),
          (void *)(v15 + 16),
          &key);
        v18 = 36163;
        key.pFirst = (const unsigned int *)&v18;
        key.pSecond = &a3;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v15 + 16),
          (void *)(v15 + 16),
          &key);
        if ( a1 != 6401 )
        {
          if ( a1 == 35056 )
          {
            v16 = 24;
            key.pFirst = (const unsigned int *)&v18;
            v18 = 36180;
            key.pSecond = &v16;
            Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
              (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v15 + 16),
              (void *)(v15 + 16),
              &key);
          }
          else if ( a1 != 36168 )
          {
            goto LABEL_16;
          }
        }
        v16 = 8;
        key.pFirst = (const unsigned int *)&v18;
        v18 = 36181;
        key.pSecond = &v16;
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
          (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(v15 + 16),
          (void *)(v15 + 16),
          &key);
LABEL_16:
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v15);
      }
    }
  }
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glScissor(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        int a3)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glScissor)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glScissor(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        int a1,
        int a2,
        int a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  float v12; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v12) = a2;
  LODWORD(v11) = a1;
  LODWORD(v) = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32867;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, (const float *)&a3);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glShaderSource(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLShader *a0,
        __int64 a1,
        const char *const *a2,
        const int *a3)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLShader *)a0->Name;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLShader *, __int64, const char *const *))this->Device.glShaderSource)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glShaderSource(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLShader *a0,
        int a1,
        const char *const *a2,
        const int *a3)
{
  __int64 v7; // rbp
  Scaleform::Render::GraphicsDeviceRecorder *v8; // rdi
  signed __int64 v9; // r14
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v12; // rax
  unsigned __int8 *v13; // rax
  unsigned __int8 *v14; // r13
  const int *v15; // r12
  const int *v16; // r14
  signed __int64 v17; // r15
  char *v18; // rax
  __int64 v19; // rbx
  char *v21; // rax
  signed __int64 v22; // rsi
  unsigned int v23; // eax
  unsigned __int8 *v24; // rdx
  unsigned __int8 *v25; // rax
  signed __int64 v26; // rsi
  unsigned int v27; // eax
  unsigned __int8 *v28; // rdx
  unsigned __int8 *v29; // rax
  unsigned __int64 v; // [rsp+68h] [rbp+10h] BYREF
  float v31; // [rsp+70h] [rbp+18h] BYREF

  LODWORD(v31) = a1;
  v = (unsigned __int64)a0;
  v7 = (unsigned int)a1;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v8 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v9 = v8->CommandWritePointer - v8->CommandBuffer;
  if ( v8->CommandBufferSize - v9 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v8->BufferLock);
    CommandBufferSize = v8->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v8->CommandBuffer;
    v8->CommandBufferSize = CommandBufferSize;
    v12 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v8->CommandBuffer = v12;
    v8->CommandReadPointer = v12;
    v8->CommandWritePointer = &v12[v9];
    Scaleform::Lock::Unlock(&v8->BufferLock);
  }
  *(_DWORD *)v8->CommandWritePointer = 32868;
  v8->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, &v31);
  v13 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v8, 8i64 * (int)v7);
  v14 = v13;
  if ( (int)v7 > 0 )
  {
    v15 = a3;
    v16 = a3;
    v17 = v13 - (unsigned __int8 *)a2;
    do
    {
      if ( v15 )
      {
        v18 = (char *)Scaleform::Render::GraphicsDeviceRecorder::alloc(v8, *v16 + 1);
        *(const char *const *)((char *)a2 + v17) = v18;
        strncpy_s(v18, *v16 + 1, *a2, *v16);
        (*(const char *const *)((char *)a2 + v17))[*v16] = 0;
      }
      else
      {
        v19 = -1i64;
        while ( (*a2)[++v19] != 0 )
          ;
        v21 = (char *)Scaleform::Render::GraphicsDeviceRecorder::alloc(v8, v19 + 1);
        *(const char *const *)((char *)a2 + v17) = v21;
        strcpy_s(v21, v19 + 1, *a2);
      }
      ++v16;
      ++a2;
      --v7;
    }
    while ( v7 );
  }
  v22 = v8->CommandWritePointer - v8->CommandBuffer;
  if ( v8->CommandBufferSize - v22 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v8->BufferLock);
    v23 = v8->CommandBufferSize;
    do
      v23 *= 2;
    while ( v23 < 8 );
    v24 = v8->CommandBuffer;
    v8->CommandBufferSize = v23;
    v25 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v24, v23);
    v8->CommandBuffer = v25;
    v8->CommandReadPointer = v25;
    v8->CommandWritePointer = &v25[v22];
    Scaleform::Lock::Unlock(&v8->BufferLock);
  }
  *(_QWORD *)v8->CommandWritePointer = v14;
  v8->CommandWritePointer += 8;
  v26 = v8->CommandWritePointer - v8->CommandBuffer;
  if ( v8->CommandBufferSize - v26 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v8->BufferLock);
    v27 = v8->CommandBufferSize;
    do
      v27 *= 2;
    while ( v27 < 8 );
    v28 = v8->CommandBuffer;
    v8->CommandBufferSize = v27;
    v29 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v28, v27);
    v8->CommandBuffer = v29;
    v8->CommandReadPointer = v29;
    v8->CommandWritePointer = &v29[v26];
    Scaleform::Lock::Unlock(&v8->BufferLock);
  }
  *(_DWORD *)v8->CommandWritePointer = 0;
  v8->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glStencilFunc(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2)
{
  this->Device.glStencilFunc(&this->Device, a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glStencilFunc(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1,
        unsigned int a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v10; // [rsp+50h] [rbp+18h] BYREF
  float v11; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v11) = a2;
  LODWORD(v10) = a1;
  LODWORD(v) = a0;
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32869;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v10);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v11);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glStencilMask(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  this->Device.glStencilMask(&this->Device, a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glStencilMask(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32870;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glStencilOp(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2)
{
  this->Device.glStencilOp(&this->Device, a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glStencilOp(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v10; // [rsp+50h] [rbp+18h] BYREF
  float v11; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v11) = a2;
  LODWORD(v10) = a1;
  LODWORD(v) = a0;
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32871;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v10);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v11);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glStringMarker(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        const void *a1)
{
  this->Device.glStringMarker(&this->Device, a0, a1);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glStringMarker(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        const void *a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF
  unsigned __int64 v9; // [rsp+40h] [rbp+18h] BYREF

  v9 = (unsigned __int64)a1;
  LODWORD(v) = a0;
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32872;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v3, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v9);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glTexImage2D(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        const void *a8)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glTexImage2D)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glTexImage2D(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        const void *a8)
{
  Scaleform::Render::GraphicsDeviceRecorder *v10; // rsi
  signed __int64 v12; // rdi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v15; // rax
  Scaleform::RefCountVImpl *v16; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *v17; // rbp
  signed __int64 Index; // rax
  __int64 v19; // rdi
  Scaleform::RefCountVImpl *v20; // rcx
  const void *v21; // rbp
  int v22; // ecx
  unsigned int v23; // edi
  signed __int64 v24; // rbp
  unsigned int v25; // eax
  unsigned __int8 *v26; // rdx
  unsigned __int8 *v27; // rax
  unsigned __int64 v28; // [rsp+50h] [rbp+8h] BYREF
  float v; // [rsp+58h] [rbp+10h] BYREF
  float v30; // [rsp+60h] [rbp+18h] BYREF
  float v31; // [rsp+68h] [rbp+20h] BYREF

  LODWORD(v31) = a2;
  LODWORD(v30) = a1;
  LODWORD(v) = a0;
  v10 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v12 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v12 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v10->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v10->CommandBuffer;
    v10->CommandBufferSize = CommandBufferSize;
    v15 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v10->CommandBuffer = v15;
    v10->CommandReadPointer = v15;
    v10->CommandWritePointer = &v15[v12];
    Scaleform::Lock::Unlock(&v10->BufferLock);
  }
  *(_DWORD *)v10->CommandWritePointer = 32873;
  v10->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, &v30);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, &v31);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, (const float *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, (const float *)&a4);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, (const float *)&a5);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, (const float *)&a6);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, (const float *)&a7);
  v16 = 0i64;
  v17 = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)(&this->Scaleform::Render::GL::GraphicsDevice::Scaleform::Render::GraphicsDevice::Scaleform::RefCountBase<Scaleform::Render::GraphicsDevice,69>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,69>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable + this->BindingActiveTexture - 33984);
  Index = Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLBuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::findIndexAlt<unsigned int>(
            v17 + 83,
            (const unsigned int *)&v);
  if ( Index >= 0 )
  {
    v19 = (__int64)&v17[83].pTable[2 * Index + 2];
    if ( v19 )
    {
      v20 = *(Scaleform::RefCountVImpl **)(v19 + 8);
      if ( v20 )
        Scaleform::Render::RenderBuffer::AddRef(v20);
      v16 = *(Scaleform::RefCountVImpl **)(v19 + 8);
      if ( v16 )
      {
        v21 = a8;
        if ( a8 )
        {
          v22 = 1;
          if ( a6 > 0x190A )
          {
            if ( a6 == 32992 )
              goto LABEL_22;
            if ( a6 == 32993 )
              goto LABEL_17;
            if ( a6 != 33319 )
              goto LABEL_23;
          }
          else if ( a6 != 6410 )
          {
            if ( a6 < 0x1902 || a6 <= 0x1906 )
              goto LABEL_23;
            if ( a6 != 6407 )
            {
              if ( a6 != 6408 )
              {
LABEL_23:
                v23 = a4 * a3 * v22;
                v28 = (unsigned __int64)Scaleform::Render::GraphicsDeviceRecorder::alloc(v10, v23);
                memmove((void *)v28, v21, v23);
                Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v10, &v28);
                goto LABEL_29;
              }
LABEL_17:
              v22 = 4;
              goto LABEL_23;
            }
LABEL_22:
            v22 = 3;
            goto LABEL_23;
          }
          v22 = 2;
          goto LABEL_23;
        }
      }
    }
  }
  v24 = v10->CommandWritePointer - v10->CommandBuffer;
  if ( v10->CommandBufferSize - v24 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v10->BufferLock);
    v25 = v10->CommandBufferSize;
    do
      v25 *= 2;
    while ( v25 < 8 );
    v26 = v10->CommandBuffer;
    v10->CommandBufferSize = v25;
    v27 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v26, v25);
    v10->CommandBuffer = v27;
    v10->CommandReadPointer = v27;
    v10->CommandWritePointer = &v27[v24];
    Scaleform::Lock::Unlock(&v10->BufferLock);
  }
  *(_DWORD *)v10->CommandWritePointer = 0;
  v10->CommandWritePointer += 8;
LABEL_29:
  if ( v16 )
    Scaleform::RefCountImpl::Release(v16);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glTexParameteri(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2)
{
  this->Device.glTexParameteri(&this->Device, a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glTexParameteri(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        unsigned int a1,
        int a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v10; // [rsp+50h] [rbp+18h] BYREF
  float v11; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v11) = a2;
  LODWORD(v10) = a1;
  LODWORD(v) = a0;
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32874;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v10);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v11);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glTexSubImage2D(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        const void *a8)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glTexSubImage2D)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glTexSubImage2D(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1,
        int a2,
        int a3,
        int a4,
        int a5,
        unsigned int a6,
        unsigned int a7,
        const void *a8)
{
  Scaleform::Render::GraphicsDeviceRecorder *v10; // rdi
  signed __int64 v11; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v14; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v16; // [rsp+50h] [rbp+18h] BYREF
  float v17; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v17) = a2;
  LODWORD(v16) = a1;
  LODWORD(v) = a0;
  v10 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v11 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v11 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v10->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v10->CommandBuffer;
    v10->CommandBufferSize = CommandBufferSize;
    v14 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v10->CommandBuffer = v14;
    v10->CommandReadPointer = v14;
    v10->CommandWritePointer = &v14[v11];
    Scaleform::Lock::Unlock(&v10->BufferLock);
  }
  *(_DWORD *)v10->CommandWritePointer = 32875;
  v10->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, &v16);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, &v17);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, (const float *)&a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, (const float *)&a4);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, (const float *)&a5);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, (const float *)&a6);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v10, (const float *)&a7);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v10, (const unsigned __int64 *)&a8);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform1f(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        float a1)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLUniformLocation *)(unsigned int)a0->Location;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLUniformLocation *))this->Device.glUniform1f)(
    &this->Device,
    a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform1f(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        float a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF
  float v10; // [rsp+40h] [rbp+18h] BYREF

  v10 = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = v4->CommandWritePointer - v4->CommandBuffer;
  if ( v4->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v4->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32876;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v10);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform1fv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        __int64 a1,
        const float *a2)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLUniformLocation *)(unsigned int)a0->Location;
  this->Device.glUniform1fv(&this->Device, (int)a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform1fv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        int a1,
        const float *a2)
{
  __int64 v4; // rbp
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rsi
  signed __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v18; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v18) = a1;
  v = (unsigned __int64)a0;
  v4 = a1;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32877;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v18);
  v12 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v7, 4 * v4);
  memmove(v12, a2, 4 * v4);
  v13 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v13 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    v14 = v7->CommandBufferSize;
    do
      v14 *= 2;
    while ( v14 < 8 );
    v15 = v7->CommandBuffer;
    v7->CommandBufferSize = v14;
    v16 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v15, v14);
    v7->CommandBuffer = v16;
    v7->CommandReadPointer = v16;
    v7->CommandWritePointer = &v16[v13];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_QWORD *)v7->CommandWritePointer = v12;
  v7->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform1i(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        __int64 a1)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLUniformLocation *)(unsigned int)a0->Location;
  this->Device.glUniform1i(&this->Device, (int)a0, a1);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform1i(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        int a1)
{
  Scaleform::Render::GraphicsDeviceRecorder *v4; // rdi
  signed __int64 v5; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v8; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF
  float v10; // [rsp+40h] [rbp+18h] BYREF

  LODWORD(v10) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v4 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v5 = v4->CommandWritePointer - v4->CommandBuffer;
  if ( v4->CommandBufferSize - v5 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v4->BufferLock);
    CommandBufferSize = v4->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v4->CommandBuffer;
    v4->CommandBufferSize = CommandBufferSize;
    v8 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v4->CommandBuffer = v8;
    v4->CommandReadPointer = v8;
    v4->CommandWritePointer = &v8[v5];
    Scaleform::Lock::Unlock(&v4->BufferLock);
  }
  *(_DWORD *)v4->CommandWritePointer = 32878;
  v4->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v4, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v4, &v10);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform1iv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        __int64 a1,
        const int *a2)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLUniformLocation *)(unsigned int)a0->Location;
  this->Device.glUniform1iv(&this->Device, (int)a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform1iv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        int a1,
        const int *a2)
{
  __int64 v4; // rbp
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rsi
  signed __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v18; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v18) = a1;
  v = (unsigned __int64)a0;
  v4 = a1;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32879;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v18);
  v12 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v7, 4 * v4);
  memmove(v12, a2, 4 * v4);
  v13 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v13 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    v14 = v7->CommandBufferSize;
    do
      v14 *= 2;
    while ( v14 < 8 );
    v15 = v7->CommandBuffer;
    v7->CommandBufferSize = v14;
    v16 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v15, v14);
    v7->CommandBuffer = v16;
    v7->CommandReadPointer = v16;
    v7->CommandWritePointer = &v16[v13];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_QWORD *)v7->CommandWritePointer = v12;
  v7->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform2f(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        float a1,
        float a2)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLUniformLocation *)(unsigned int)a0->Location;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLUniformLocation *))this->Device.glUniform2f)(
    &this->Device,
    a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform2f(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        float a1,
        float a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  float v12; // [rsp+58h] [rbp+20h] BYREF

  v12 = a2;
  v11 = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = v5->CommandWritePointer - v5->CommandBuffer;
  if ( v5->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v5->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32880;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v12);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform2fv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        __int64 a1,
        const float *a2)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLUniformLocation *)(unsigned int)a0->Location;
  this->Device.glUniform2fv(&this->Device, (int)a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform2fv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        int a1,
        const float *a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rsi
  signed __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v18; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v18) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32881;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v18);
  v12 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v7, 8i64 * a1);
  memmove(v12, a2, 8i64 * a1);
  v13 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v13 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    v14 = v7->CommandBufferSize;
    do
      v14 *= 2;
    while ( v14 < 8 );
    v15 = v7->CommandBuffer;
    v7->CommandBufferSize = v14;
    v16 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v15, v14);
    v7->CommandBuffer = v16;
    v7->CommandReadPointer = v16;
    v7->CommandWritePointer = &v16[v13];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_QWORD *)v7->CommandWritePointer = v12;
  v7->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform3fv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        __int64 a1,
        const float *a2)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLUniformLocation *)(unsigned int)a0->Location;
  this->Device.glUniform3fv(&this->Device, (int)a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform3fv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        int a1,
        const float *a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rsi
  signed __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v18; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v18) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32882;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v18);
  v12 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v7, 12i64 * a1);
  memmove(v12, a2, 12i64 * a1);
  v13 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v13 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    v14 = v7->CommandBufferSize;
    do
      v14 *= 2;
    while ( v14 < 8 );
    v15 = v7->CommandBuffer;
    v7->CommandBufferSize = v14;
    v16 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v15, v14);
    v7->CommandBuffer = v16;
    v7->CommandReadPointer = v16;
    v7->CommandWritePointer = &v16[v13];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_QWORD *)v7->CommandWritePointer = v12;
  v7->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUniform4fv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        __int64 a1,
        const float *a2)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLUniformLocation *)(unsigned int)a0->Location;
  this->Device.glUniform4fv(&this->Device, (int)a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUniform4fv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        int a1,
        const float *a2)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int8 *v12; // rsi
  signed __int64 v13; // rbp
  unsigned int v14; // eax
  unsigned __int8 *v15; // rdx
  unsigned __int8 *v16; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v18; // [rsp+50h] [rbp+18h] BYREF

  LODWORD(v18) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32883;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v18);
  v12 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v7, 16i64 * a1);
  memmove(v12, a2, 16i64 * a1);
  v13 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v13 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    v14 = v7->CommandBufferSize;
    do
      v14 *= 2;
    while ( v14 < 8 );
    v15 = v7->CommandBuffer;
    v7->CommandBufferSize = v14;
    v16 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v15, v14);
    v7->CommandBuffer = v16;
    v7->CommandReadPointer = v16;
    v7->CommandWritePointer = &v16[v13];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_QWORD *)v7->CommandWritePointer = v12;
  v7->CommandWritePointer += 8;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUniformMatrix4fv(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        __int64 a1,
        __int64 a2,
        const float *a3)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLUniformLocation *)(unsigned int)a0->Location;
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, Scaleform::Render::GL::HALGLUniformLocation *, __int64, __int64))this->Device.glUniformMatrix4fv)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUniformMatrix4fv(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLUniformLocation *a0,
        int a1,
        unsigned __int8 a2,
        const float *a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  unsigned __int64 v12; // rbx
  unsigned __int8 *v13; // rsi
  signed __int64 v14; // rbp
  unsigned int v15; // eax
  unsigned __int8 *v16; // rdx
  unsigned __int8 *v17; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v19; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int8 v20; // [rsp+58h] [rbp+20h] BYREF

  v20 = a2;
  LODWORD(v19) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32884;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v19);
  Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(v7, &v20);
  v12 = 64i64 * a1;
  v13 = Scaleform::Render::GraphicsDeviceRecorder::alloc(v7, v12);
  memmove(v13, a3, v12);
  v14 = v7->CommandWritePointer - v7->CommandBuffer;
  if ( v7->CommandBufferSize - v14 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v7->BufferLock);
    v15 = v7->CommandBufferSize;
    do
      v15 *= 2;
    while ( v15 < 8 );
    v16 = v7->CommandBuffer;
    v7->CommandBufferSize = v15;
    v17 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, v16, v15);
    v7->CommandBuffer = v17;
    v7->CommandReadPointer = v17;
    v7->CommandWritePointer = &v17[v14];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_QWORD *)v7->CommandWritePointer = v13;
  v7->CommandWritePointer += 8;
}

__int64 __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUnmapBuffer(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0)
{
  return ((__int64 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->Device.glUnmapBuffer)(
           &this->Device,
           a0);
}

unsigned __int8 __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUnmapBuffer(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v2; // rdi
  signed __int64 v3; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v6; // rax
  float v; // [rsp+38h] [rbp+10h] BYREF

  LODWORD(v) = a0;
  v2 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v3 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v3 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v2->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v2->CommandBuffer;
    v2->CommandBufferSize = CommandBufferSize;
    v6 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v2->CommandBuffer = v6;
    v2->CommandReadPointer = v6;
    v2->CommandWritePointer = &v6[v3];
    Scaleform::Lock::Unlock(&v2->BufferLock);
  }
  *(_DWORD *)v2->CommandWritePointer = 32885;
  v2->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v2, &v);
  return 1;
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUseProgram(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgram *a0)
{
  if ( a0 )
    a0 = (Scaleform::Render::GL::HALGLProgram *)a0->Name;
  this->Device.glUseProgram(&this->Device, (unsigned int)a0);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUseProgram(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgram *a0)
{
  Scaleform::Render::GraphicsDeviceRecorder *v3; // rdi
  signed __int64 v4; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v7; // rax
  unsigned __int64 v; // [rsp+38h] [rbp+10h] BYREF

  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  v3 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v4 = v3->CommandWritePointer - v3->CommandBuffer;
  if ( v3->CommandBufferSize - v4 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v3->BufferLock);
    CommandBufferSize = v3->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v3->CommandBuffer;
    v3->CommandBufferSize = CommandBufferSize;
    v7 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v3->CommandBuffer = v7;
    v3->CommandReadPointer = v7;
    v3->CommandWritePointer = &v7[v4];
    Scaleform::Lock::Unlock(&v3->BufferLock);
  }
  *(_DWORD *)v3->CommandWritePointer = 32886;
  v3->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v3, &v);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glUseProgramStages(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        Scaleform::Render::GL::HALGLProgramPipeline *a0,
        __int64 a1,
        Scaleform::Render::GL::HALGLProgram *a2)
{
  __int64 v5; // rdx
  __int64 Name; // r9

  v5 = 0i64;
  if ( a2 )
    Name = a2->Name;
  else
    Name = 0i64;
  if ( a0 )
    v5 = a0->Name;
  this->Device.glUseProgramStages(&this->Device, v5, a1, Name);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glUseProgramStages(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        Scaleform::Render::GL::HALGLProgramPipeline *a0,
        unsigned int a1,
        Scaleform::Render::GL::HALGLProgram *a2)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::GraphicsDeviceRecorder *v8; // rdi
  signed __int64 v9; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v12; // rax
  unsigned __int64 v; // [rsp+48h] [rbp+10h] BYREF
  float v14; // [rsp+50h] [rbp+18h] BYREF
  unsigned __int64 v15; // [rsp+58h] [rbp+20h] BYREF

  v15 = (unsigned __int64)a2;
  LODWORD(v14) = a1;
  v = (unsigned __int64)a0;
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  if ( a2 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a2);
  if ( a0 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)a0);
  pObject = (Scaleform::RefCountVImpl *)this->BindingProgramPipeline.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  v8 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  this->BindingProgramPipeline.pObject = a0;
  v9 = this->CommandWritePointer - this->CommandBuffer;
  if ( v8->CommandBufferSize - v9 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&v8->BufferLock);
    CommandBufferSize = v8->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v8->CommandBuffer;
    v8->CommandBufferSize = CommandBufferSize;
    v12 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v8->CommandBuffer = v12;
    v8->CommandReadPointer = v12;
    v8->CommandWritePointer = &v12[v9];
    Scaleform::Lock::Unlock(&v8->BufferLock);
  }
  *(_DWORD *)v8->CommandWritePointer = 32887;
  v8->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v8, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v8, &v15);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glVertexAttribPointer(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        unsigned __int8 a3,
        int a4,
        const void *a5)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glVertexAttribPointer)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glVertexAttribPointer(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        const void *a5)
{
  Scaleform::Render::GraphicsDeviceRecorder *v7; // rdi
  signed __int64 v8; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v11; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v13; // [rsp+50h] [rbp+18h] BYREF
  float v14; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v14) = a2;
  LODWORD(v13) = a1;
  LODWORD(v) = a0;
  v7 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v8 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v8 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v7->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v7->CommandBuffer;
    v7->CommandBufferSize = CommandBufferSize;
    v11 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                               Scaleform::Memory::pGlobalHeap,
                               CommandBuffer,
                               CommandBufferSize);
    v7->CommandBuffer = v11;
    v7->CommandReadPointer = v11;
    v7->CommandWritePointer = &v11[v8];
    Scaleform::Lock::Unlock(&v7->BufferLock);
  }
  *(_DWORD *)v7->CommandWritePointer = 32888;
  v7->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v13);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, &v14);
  Scaleform::Render::GraphicsDeviceRecorder::write<unsigned char>(v7, &a3);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v7, (const float *)&a4);
  Scaleform::Render::GraphicsDeviceRecorder::write<char const *>(v7, (const unsigned __int64 *)&a5);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceImmediate::glViewport(
        Scaleform::Render::GL::GraphicsDeviceImmediate *this,
        __int64 a0,
        __int64 a1,
        __int64 a2,
        int a3)
{
  ((void (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64, __int64, __int64))this->Device.glViewport)(
    &this->Device,
    a0,
    a1,
    a2);
}

void __fastcall Scaleform::Render::GL::GraphicsDeviceRecorder::glViewport(
        Scaleform::Render::GL::GraphicsDeviceRecorder *this,
        int a0,
        int a1,
        int a2,
        int a3)
{
  Scaleform::Render::GraphicsDeviceRecorder *v5; // rdi
  signed __int64 v6; // rsi
  unsigned int CommandBufferSize; // eax
  unsigned __int8 *CommandBuffer; // rdx
  unsigned __int8 *v9; // rax
  float v; // [rsp+48h] [rbp+10h] BYREF
  float v11; // [rsp+50h] [rbp+18h] BYREF
  float v12; // [rsp+58h] [rbp+20h] BYREF

  LODWORD(v12) = a2;
  LODWORD(v11) = a1;
  LODWORD(v) = a0;
  v5 = &this->Scaleform::Render::GraphicsDeviceRecorder;
  v6 = this->CommandWritePointer - this->CommandBuffer;
  if ( this->CommandBufferSize - v6 - 8 < 0 )
  {
    Scaleform::Lock::DoLock(&this->BufferLock);
    CommandBufferSize = v5->CommandBufferSize;
    do
      CommandBufferSize *= 2;
    while ( CommandBufferSize < 8 );
    CommandBuffer = v5->CommandBuffer;
    v5->CommandBufferSize = CommandBufferSize;
    v9 = (unsigned __int8 *)Scaleform::Memory::pGlobalHeap->Realloc(
                              Scaleform::Memory::pGlobalHeap,
                              CommandBuffer,
                              CommandBufferSize);
    v5->CommandBuffer = v9;
    v5->CommandReadPointer = v9;
    v5->CommandWritePointer = &v9[v6];
    Scaleform::Lock::Unlock(&v5->BufferLock);
  }
  *(_DWORD *)v5->CommandWritePointer = 32889;
  v5->CommandWritePointer += 8;
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v11);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, &v12);
  Scaleform::Render::GraphicsDeviceRecorder::write<float>(v5, (const float *)&a3);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rbx
  __int64 v10; // rax
  const Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> > *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > v15; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 2;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 24 * v5 + 16, &v14);
    v15.pTable->EntryCount = 0i64;
    v15.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v15.pTable + v7 - 8) = -2i64;
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
          v10 = 4i64;
          v11 = (const Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> > *)((char *)&pTable[2] + v6);
          v12 = 5381i64;
          do
          {
            v13 = *((unsigned __int8 *)v11 + --v10);
            v12 = v13 + 65599 * v12;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>>(
            &v15,
            pheapAddr,
            v11,
            v12);
          *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v6) = -2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      if ( this->pTable )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
    }
    this->pTable = v15.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Clear(this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rcx
  unsigned __int64 v7; // rbp
  __int64 v8; // rsi
  const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *v9; // rdi
  __int64 v10; // rdx
  unsigned __int64 v11; // r9
  __int64 v12; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v14; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rcx
  __int64 v16; // rax
  __int64 v17; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorGH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,int,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v18; // rcx
  int v19; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > v20; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v19 = 2;
    v20.pTable = 0i64;
    v20.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 48 * v5 + 16, &v19);
    v20.pTable->EntryCount = 0i64;
    v20.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v6 = 0i64;
      do
      {
        v6 += 3i64;
        v20.pTable[v6 - 2].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v7 = this->pTable->SizeMask + 1;
      v8 = 0i64;
      do
      {
        v9 = (const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int> > *)&this->pTable[v8];
        if ( v9->Second.RenderBuffer.pObject != (Scaleform::Render::GL::HALGLRenderbuffer *)-2i64 )
        {
          v10 = 4i64;
          v11 = 5381i64;
          do
          {
            v12 = *((unsigned __int8 *)&v9->Second.Texture.pObject + v10 + 7);
            --v10;
            v11 = v12 + 65599 * v11;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>>(
            &v20,
            pheapAddr,
            v9 + 1,
            v11);
          pObject = (Scaleform::RefCountVImpl *)v9[1].Second.Texture.pObject;
          if ( pObject )
            Scaleform::RefCountImpl::Release(pObject);
          v14 = (Scaleform::RefCountVImpl *)v9[1].Second.RenderBuffer.pObject;
          if ( v14 )
            Scaleform::RefCountImpl::Release(v14);
          pTable = v9[1].Second.Parameters.mHash.pTable;
          if ( pTable )
          {
            v16 = 0i64;
            v17 = pTable->SizeMask + 1;
            do
            {
              v18 = v9[1].Second.Parameters.mHash.pTable;
              if ( *(unsigned __int64 *)((char *)&v18[1].EntryCount + v16) != -2i64 )
                *(unsigned __int64 *)((char *)&v18[1].EntryCount + v16) = -2i64;
              v16 += 24i64;
              --v17;
            }
            while ( v17 );
            if ( v9[1].Second.Parameters.mHash.pTable )
              ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
            v9[1].Second.Parameters.mHash.pTable = 0i64;
          }
          v9->Second.RenderBuffer.pObject = (Scaleform::Render::GL::HALGLRenderbuffer *)-2i64;
        }
        v8 += 3i64;
        --v7;
      }
      while ( v7 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v20.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::HALGLFramebuffer::FramebufferAttachment,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Clear(this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  Scaleform::RefCountVImpl *SizeMask; // rcx
  int v14; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > v15; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 2;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 32 * v5 + 16, &v14);
    v15.pTable->EntryCount = 0i64;
    v15.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 2i64;
        v15.pTable[v7 - 1].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = &this->pTable[v6];
        if ( v9[1].EntryCount != -2i64 )
        {
          v10 = 4i64;
          v11 = 5381i64;
          do
          {
            v12 = *((unsigned __int8 *)&v9[1].SizeMask + v10 + 7);
            --v10;
            v11 = v12 + 65599 * v11;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int>>>(
            &v15,
            pheapAddr,
            (const Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture>,Scaleform::FixedSizeHash<unsigned int> > *)&v9[2],
            v11);
          SizeMask = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
          if ( SizeMask )
            Scaleform::RefCountImpl::Release(SizeMask);
          v9[1].EntryCount = -2i64;
        }
        v6 += 2i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v15.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>((Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer>,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *)this);
  }
}

