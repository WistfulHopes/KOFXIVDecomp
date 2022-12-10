#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_graphicsdevice.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "program files (x86)/windows kits/8.1/include/um/propidl.h"
#include "program files (x86)/windows kits/8.1/include/um/winbase.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_extensions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"

bool Scaleform::Render::GL::GLInterface::CheckExtension(Scaleform::Render::GL::GLExtensionType ext); // 0x1405F9110
bool Scaleform::Render::GL::GLInterface::CheckGLVersion(unsigned long reqMajor, unsigned long reqMinor); // 0x1405F9120
Scaleform::Render::GL::GLImmediate::GLImmediate(); // 0x1405F8D80
class Scaleform::Render::GL::StringLess
{
public:
	bool operator()(const char *, const char *);
};
const unsigned long Scaleform::Render::GL::ExtensionsDefinedInGLEXT[609]; // 0x140844D80
const char * Scaleform::Render::GL::ExtensionStrings[609]; // 0x140A259A0
typedef long long(*PROC)();
void Scaleform::Render::GL::GLImmediate::initExtensions(unsigned long verbosity); // 0x1405FCE00
class Scaleform::Alg::ArrayAdaptor<char const *>
{
	typedef const char ValueType;
public:
	ArrayAdaptor<char const *>(const char * *, unsigned long long);
	ArrayAdaptor<char const *>();
	unsigned long long GetSize();
	const char * & operator[](unsigned long long);
	const char * & operator[](unsigned long long);
private:
	const char * * Data; // 0x0
	unsigned long long Size; // 0x8
};
void Scaleform::Render::GL::GLImmediate::Init(unsigned long verbosity); // 0x1405F9140
void Scaleform::Render::GL::GLImmediate::glActiveTexture(unsigned long a0); // 0x1405FBAF0
void Scaleform::Render::GL::GLImmediate::glAttachShader(unsigned long a0, unsigned long a1); // 0x1405FBB10
void Scaleform::Render::GL::GLImmediate::glBindAttribLocation(unsigned long a0, unsigned long a1, const char * a2); // 0x1405FBB30
void Scaleform::Render::GL::GLImmediate::glBindBuffer(unsigned long a0, unsigned long a1); // 0x1405FBB50
void Scaleform::Render::GL::GLImmediate::glBindFragDataLocation(unsigned long a0, unsigned long a1, const char * a2); // 0x1405FBB70
void Scaleform::Render::GL::GLImmediate::glBindFramebuffer(unsigned long a0, unsigned long a1); // 0x1405FBB90
void Scaleform::Render::GL::GLImmediate::glBindProgramPipeline(unsigned long a0); // 0x1405FBBB0
void Scaleform::Render::GL::GLImmediate::glBindRenderbuffer(unsigned long a0, unsigned long a1); // 0x1405FBBD0
void Scaleform::Render::GL::GLImmediate::glBindTexture(unsigned long a0, unsigned long a1); // 0x1405FBBF0
void Scaleform::Render::GL::GLImmediate::glBindVertexArray(unsigned long a0); // 0x1405FBC10
void Scaleform::Render::GL::GLImmediate::glBlendEquation(unsigned long a0); // 0x1405FBC30
void Scaleform::Render::GL::GLImmediate::glBlendEquationSeparate(unsigned long a0, unsigned long a1); // 0x1405FBC50
void Scaleform::Render::GL::GLImmediate::glBlendFunc(unsigned long a0, unsigned long a1); // 0x1405FBC70
void Scaleform::Render::GL::GLImmediate::glBlendFuncSeparate(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3); // 0x1405FBC90
void Scaleform::Render::GL::GLImmediate::glBufferData(unsigned long a0, long long a1, const void * a2, unsigned long a3); // 0x1405FBCC0
void Scaleform::Render::GL::GLImmediate::glBufferSubData(unsigned long a0, long long a1, long long a2, const void * a3); // 0x1405FBCF0
unsigned long Scaleform::Render::GL::GLImmediate::glCheckFramebufferStatus(unsigned long a0); // 0x1405FBD20
void Scaleform::Render::GL::GLImmediate::glClear(unsigned long a0); // 0x1405FBD40
void Scaleform::Render::GL::GLImmediate::glClearColor(float a0, float a1, float a2, float a3); // 0x1405FBD60
unsigned long Scaleform::Render::GL::GLImmediate::glClientWaitSync(__GLsync * a0, unsigned long a1, unsigned long long a2); // 0x1405FBD90
void Scaleform::Render::GL::GLImmediate::glColorMask(unsigned char a0, unsigned char a1, unsigned char a2, unsigned char a3); // 0x1405FBDB0
void Scaleform::Render::GL::GLImmediate::glCompileShader(unsigned long a0); // 0x1405FBDE0
void Scaleform::Render::GL::GLImmediate::glCompressedTexImage2D(unsigned long a0, long a1, unsigned long a2, long a3, long a4, long a5, long a6, const void * a7); // 0x1405FBE00
unsigned long Scaleform::Render::GL::GLImmediate::glCreateProgram(); // 0x1405FBE70
unsigned long Scaleform::Render::GL::GLImmediate::glCreateShader(unsigned long a0); // 0x1405FBE80
void Scaleform::Render::GL::GLImmediate::glDebugMessageCallback(void(*a0)(unsigned long, unsigned long, unsigned long, unsigned long, long, const char *, const void *), const void * a1); // 0x1405FBEA0
void Scaleform::Render::GL::GLImmediate::glDebugMessageControl(unsigned long a0, unsigned long a1, unsigned long a2, long a3, const unsigned long * a4, unsigned char a5); // 0x1405FBEC0
void Scaleform::Render::GL::GLImmediate::glDeleteBuffers(long a0, const unsigned long * a1); // 0x1405FBF10
void Scaleform::Render::GL::GLImmediate::glDeleteFramebuffers(long a0, const unsigned long * a1); // 0x1405FBF30
void Scaleform::Render::GL::GLImmediate::glDeleteProgram(unsigned long a0); // 0x1405FBF50
void Scaleform::Render::GL::GLImmediate::glDeleteProgramPipelines(long a0, const unsigned long * a1); // 0x1405FBF70
void Scaleform::Render::GL::GLImmediate::glDeleteRenderbuffers(long a0, const unsigned long * a1); // 0x1405FBF90
void Scaleform::Render::GL::GLImmediate::glDeleteShader(unsigned long a0); // 0x1405FBFB0
void Scaleform::Render::GL::GLImmediate::glDeleteSync(__GLsync * a0); // 0x1405FBFD0
void Scaleform::Render::GL::GLImmediate::glDeleteTextures(long a0, const unsigned long * a1); // 0x1405FBFF0
void Scaleform::Render::GL::GLImmediate::glDeleteVertexArrays(long a0, const unsigned long * a1); // 0x1405FC010
void Scaleform::Render::GL::GLImmediate::glDepthFunc(unsigned long a0); // 0x1405FC030
void Scaleform::Render::GL::GLImmediate::glDepthMask(unsigned char a0); // 0x1405FC050
void Scaleform::Render::GL::GLImmediate::glDisable(unsigned long a0); // 0x1405FC070
void Scaleform::Render::GL::GLImmediate::glDisableVertexAttribArray(unsigned long a0); // 0x1405FC090
void Scaleform::Render::GL::GLImmediate::glDrawArrays(unsigned long a0, long a1, long a2); // 0x1405FC0B0
void Scaleform::Render::GL::GLImmediate::glDrawElements(unsigned long a0, long a1, unsigned long a2, const void * a3); // 0x1405FC0D0
void Scaleform::Render::GL::GLImmediate::glDrawElementsInstanced(unsigned long a0, long a1, unsigned long a2, const void * a3, long a4); // 0x1405FC100
void Scaleform::Render::GL::GLImmediate::glEnable(unsigned long a0); // 0x1405FC140
void Scaleform::Render::GL::GLImmediate::glEnableVertexAttribArray(unsigned long a0); // 0x1405FC160
__GLsync * Scaleform::Render::GL::GLImmediate::glFenceSync(unsigned long a0, unsigned long a1); // 0x1405FC180
void Scaleform::Render::GL::GLImmediate::glFlush(); // 0x1405FC1A0
void Scaleform::Render::GL::GLImmediate::glFlushMappedBufferRange(unsigned long a0, long long a1, long long a2); // 0x1405FC1B0
void Scaleform::Render::GL::GLImmediate::glFramebufferRenderbuffer(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3); // 0x1405FC1D0
void Scaleform::Render::GL::GLImmediate::glFramebufferTexture2D(unsigned long a0, unsigned long a1, unsigned long a2, unsigned long a3, long a4); // 0x1405FC200
void Scaleform::Render::GL::GLImmediate::glGenBuffers(long a0, unsigned long * a1); // 0x1405FC240
void Scaleform::Render::GL::GLImmediate::glGenFramebuffers(long a0, unsigned long * a1); // 0x1405FC260
void Scaleform::Render::GL::GLImmediate::glGenProgramPipelines(long a0, unsigned long * a1); // 0x1405FC280
void Scaleform::Render::GL::GLImmediate::glGenRenderbuffers(long a0, unsigned long * a1); // 0x1405FC2A0
void Scaleform::Render::GL::GLImmediate::glGenTextures(long a0, unsigned long * a1); // 0x1405FC2C0
void Scaleform::Render::GL::GLImmediate::glGenVertexArrays(long a0, unsigned long * a1); // 0x1405FC2E0
void Scaleform::Render::GL::GLImmediate::glGenerateMipmap(unsigned long a0); // 0x1405FC300
void Scaleform::Render::GL::GLImmediate::glGetActiveUniform(unsigned long a0, unsigned long a1, long a2, long * a3, long * a4, unsigned long * a5, char * a6); // 0x1405FC320
unsigned long Scaleform::Render::GL::GLImmediate::glGetError(); // 0x1405FC380
void Scaleform::Render::GL::GLImmediate::glGetFloatv(unsigned long a0, float * a1); // 0x1405FC390
long Scaleform::Render::GL::GLImmediate::glGetFragDataLocation(unsigned long a0, const char * a1); // 0x1405FC3B0
void Scaleform::Render::GL::GLImmediate::glGetFramebufferAttachmentParameteriv(unsigned long a0, unsigned long a1, unsigned long a2, long * a3); // 0x1405FC3D0
void Scaleform::Render::GL::GLImmediate::glGetIntegerv(unsigned long a0, long * a1); // 0x1405FC400
void Scaleform::Render::GL::GLImmediate::glGetProgramBinary(unsigned long a0, long a1, long * a2, unsigned long * a3, void * a4); // 0x1405FC420
void Scaleform::Render::GL::GLImmediate::glGetProgramInfoLog(unsigned long a0, long a1, long * a2, char * a3); // 0x1405FC470
void Scaleform::Render::GL::GLImmediate::glGetProgramiv(unsigned long a0, unsigned long a1, long * a2); // 0x1405FC4A0
void Scaleform::Render::GL::GLImmediate::glGetRenderbufferParameteriv(unsigned long a0, unsigned long a1, long * a2); // 0x1405FC4C0
void Scaleform::Render::GL::GLImmediate::glGetShaderInfoLog(unsigned long a0, long a1, long * a2, char * a3); // 0x1405FC4E0
void Scaleform::Render::GL::GLImmediate::glGetShaderiv(unsigned long a0, unsigned long a1, long * a2); // 0x1405FC510
const unsigned char * Scaleform::Render::GL::GLImmediate::glGetString(unsigned long a0); // 0x1405FC530
const unsigned char * Scaleform::Render::GL::GLImmediate::glGetStringi(unsigned long a0, unsigned long a1); // 0x1405FC550
void Scaleform::Render::GL::GLImmediate::glGetSynciv(__GLsync * a0, unsigned long a1, long a2, long * a3, long * a4); // 0x1405FC570
void Scaleform::Render::GL::GLImmediate::glGetTexImage(unsigned long a0, long a1, unsigned long a2, unsigned long a3, void * a4); // 0x1405FC5C0
void Scaleform::Render::GL::GLImmediate::glGetTexLevelParameteriv(unsigned long a0, long a1, unsigned long a2, long * a3); // 0x1405FC610
void Scaleform::Render::GL::GLImmediate::glGetTexParameteriv(unsigned long a0, unsigned long a1, long * a2); // 0x1405FC640
long Scaleform::Render::GL::GLImmediate::glGetUniformLocation(unsigned long a0, const char * a1); // 0x1405FC660
unsigned char Scaleform::Render::GL::GLImmediate::glIsFramebuffer(unsigned long a0); // 0x1405FC680
unsigned char Scaleform::Render::GL::GLImmediate::glIsProgram(unsigned long a0); // 0x1405FC6A0
unsigned char Scaleform::Render::GL::GLImmediate::glIsRenderbuffer(unsigned long a0); // 0x1405FC6C0
void Scaleform::Render::GL::GLImmediate::glLinkProgram(unsigned long a0); // 0x1405FC6E0
void * Scaleform::Render::GL::GLImmediate::glMapBuffer(unsigned long a0, unsigned long a1); // 0x1405FC700
void * Scaleform::Render::GL::GLImmediate::glMapBufferRange(unsigned long a0, long long a1, long long a2, unsigned long a3); // 0x1405FC720
void Scaleform::Render::GL::GLImmediate::glPixelStorei(unsigned long a0, long a1); // 0x1405FC750
void Scaleform::Render::GL::GLImmediate::glPolygonMode(unsigned long a0, unsigned long a1); // 0x1405FC770
void Scaleform::Render::GL::GLImmediate::glPopGroupMarker(); // 0x1405FC790
void Scaleform::Render::GL::GLImmediate::glProgramBinary(unsigned long a0, unsigned long a1, const void * a2, long a3); // 0x1405FC7A0
void Scaleform::Render::GL::GLImmediate::glProgramParameteri(unsigned long a0, unsigned long a1, long a2); // 0x1405FC7D0
void Scaleform::Render::GL::GLImmediate::glProgramUniform1fv(unsigned long a0, long a1, long a2, const float * a3); // 0x1405FC7F0
void Scaleform::Render::GL::GLImmediate::glProgramUniform1iv(unsigned long a0, long a1, long a2, const long * a3); // 0x1405FC820
void Scaleform::Render::GL::GLImmediate::glProgramUniform2fv(unsigned long a0, long a1, long a2, const float * a3); // 0x1405FC850
void Scaleform::Render::GL::GLImmediate::glProgramUniform3fv(unsigned long a0, long a1, long a2, const float * a3); // 0x1405FC880
void Scaleform::Render::GL::GLImmediate::glProgramUniform4fv(unsigned long a0, long a1, long a2, const float * a3); // 0x1405FC8B0
void Scaleform::Render::GL::GLImmediate::glProgramUniformMatrix4fv(unsigned long a0, long a1, long a2, unsigned char a3, const float * a4); // 0x1405FC8E0
void Scaleform::Render::GL::GLImmediate::glPushGroupMarker(long a0, const char * a1); // 0x1405FC930
void Scaleform::Render::GL::GLImmediate::glReadPixels(long a0, long a1, long a2, long a3, unsigned long a4, unsigned long a5, void * a6); // 0x1405FC950
void Scaleform::Render::GL::GLImmediate::glReleaseShaderCompiler(); // 0x1405FC9B0
void Scaleform::Render::GL::GLImmediate::glRenderbufferStorage(unsigned long a0, unsigned long a1, long a2, long a3); // 0x1405FC9C0
void Scaleform::Render::GL::GLImmediate::glScissor(long a0, long a1, long a2, long a3); // 0x1405FC9F0
void Scaleform::Render::GL::GLImmediate::glShaderSource(unsigned long a0, long a1, const char * * a2, const long * a3); // 0x1405FCA20
void Scaleform::Render::GL::GLImmediate::glStencilFunc(unsigned long a0, long a1, unsigned long a2); // 0x1405FCA50
void Scaleform::Render::GL::GLImmediate::glStencilMask(unsigned long a0); // 0x1405FCA70
void Scaleform::Render::GL::GLImmediate::glStencilOp(unsigned long a0, unsigned long a1, unsigned long a2); // 0x1405FCA90
void Scaleform::Render::GL::GLImmediate::glStringMarker(long a0, const void * a1); // 0x1405FCAB0
void Scaleform::Render::GL::GLImmediate::glTexImage2D(unsigned long a0, long a1, long a2, long a3, long a4, long a5, unsigned long a6, unsigned long a7, const void * a8); // 0x1405FCAD0
void Scaleform::Render::GL::GLImmediate::glTexParameteri(unsigned long a0, unsigned long a1, long a2); // 0x1405FCB50
void Scaleform::Render::GL::GLImmediate::glTexSubImage2D(unsigned long a0, long a1, long a2, long a3, long a4, long a5, unsigned long a6, unsigned long a7, const void * a8); // 0x1405FCB70
void Scaleform::Render::GL::GLImmediate::glUniform1f(long a0, float a1); // 0x1405FCBF0
void Scaleform::Render::GL::GLImmediate::glUniform1fv(long a0, long a1, const float * a2); // 0x1405FCC10
void Scaleform::Render::GL::GLImmediate::glUniform1i(long a0, long a1); // 0x1405FCC30
void Scaleform::Render::GL::GLImmediate::glUniform1iv(long a0, long a1, const long * a2); // 0x1405FCC50
void Scaleform::Render::GL::GLImmediate::glUniform2f(long a0, float a1, float a2); // 0x1405FCC70
void Scaleform::Render::GL::GLImmediate::glUniform2fv(long a0, long a1, const float * a2); // 0x1405FCC90
void Scaleform::Render::GL::GLImmediate::glUniform3fv(long a0, long a1, const float * a2); // 0x1405FCCB0
void Scaleform::Render::GL::GLImmediate::glUniform4fv(long a0, long a1, const float * a2); // 0x1405FCCD0
void Scaleform::Render::GL::GLImmediate::glUniformMatrix4fv(long a0, long a1, unsigned char a2, const float * a3); // 0x1405FCCF0
unsigned char Scaleform::Render::GL::GLImmediate::glUnmapBuffer(unsigned long a0); // 0x1405FCD20
void Scaleform::Render::GL::GLImmediate::glUseProgram(unsigned long a0); // 0x1405FCD40
void Scaleform::Render::GL::GLImmediate::glUseProgramStages(unsigned long a0, unsigned long a1, unsigned long a2); // 0x1405FCD60
void Scaleform::Render::GL::GLImmediate::glVertexAttribPointer(unsigned long a0, long a1, unsigned long a2, unsigned char a3, long a4, const void * a5); // 0x1405FCD80
void Scaleform::Render::GL::GLImmediate::glViewport(long a0, long a1, long a2, long a3); // 0x1405FCDD0//decompilation failure at 140844D80!
//decompilation failure at 140A259A0!
void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Alg::ArrayAdaptor<char const *>,Scaleform::Render::GL::StringLess>(
        Scaleform::Alg::ArrayAdaptor<char const *> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        Scaleform::Render::GL::StringLess less)
{
  signed __int64 v4; // r13
  unsigned __int64 v5; // rbp
  char *i; // r15
  signed __int64 v8; // rdi
  signed __int64 v9; // r10
  signed __int64 v10; // rsi
  const char *v11; // rcx
  const char **v12; // rdx
  unsigned __int64 v13; // r8
  const char **v14; // r11
  const char **v15; // rbx
  const char *v16; // rax
  int v17; // ecx
  int v18; // edx
  const char *v19; // rcx
  const char **v20; // r11
  const char **v21; // rbx
  const char *v22; // rax
  int v23; // ecx
  int v24; // edx
  const char *v25; // rcx
  const char **v26; // r11
  const char **v27; // rbx
  const char *v28; // rax
  int v29; // ecx
  int v30; // edx
  const char *v31; // rcx
  const char **Data; // rbx
  const char *v33; // r11
  const char **v34; // r9
  const char *v35; // rax
  signed __int64 v36; // r8
  int v37; // ecx
  int v38; // edx
  const char **v39; // r9
  __int64 v40; // r8
  const char *v41; // rax
  __int64 v42; // r8
  int v43; // ecx
  int v44; // edx
  const char *v45; // rcx
  const char *v46; // rdx
  signed __int64 v47; // r11
  unsigned __int64 j; // r10
  const char **v49; // r8
  const char *v50; // rax
  signed __int64 v51; // r9
  int v52; // ecx
  int v53; // edx
  const char *v54; // rcx
  const char *v55; // rax
  signed __int64 v56; // r9
  int v57; // ecx
  int v58; // edx
  char v59[640]; // [rsp+0h] [rbp-2C8h] BYREF

  v4 = end;
  v5 = start;
  if ( end - start >= 2 )
  {
    for ( i = v59; ; v4 = *((_QWORD *)i + 1) )
    {
      while ( (__int64)(v4 - v5) > 9 )
      {
        v8 = v5 + 1;
        v9 = v4 - 1;
        v10 = v4 - 1;
        v11 = arr->Data[v5];
        v12 = &(&arr->Data[v5])[(__int64)(v4 - v5) / 2];
        arr->Data[v5] = *v12;
        v13 = v5 + 1;
        *v12 = v11;
        v14 = &arr->Data[v13];
        v15 = &arr->Data[v10];
        v16 = *v15;
        do
        {
          v17 = (unsigned __int8)v16[(unsigned __int64)(arr->Data[v13] - *v15)];
          v18 = *(unsigned __int8 *)v16 - v17;
          if ( v18 )
            break;
          ++v16;
        }
        while ( v17 );
        if ( v18 < 0 )
        {
          v19 = *v15;
          *v15 = *v14;
          *v14 = v19;
        }
        v20 = &arr->Data[v13];
        v21 = &arr->Data[v5];
        v22 = *v21;
        do
        {
          v23 = (unsigned __int8)v22[(unsigned __int64)(arr->Data[v13] - *v21)];
          v24 = *(unsigned __int8 *)v22 - v23;
          if ( v24 )
            break;
          ++v22;
        }
        while ( v23 );
        if ( v24 < 0 )
        {
          v25 = *v21;
          *v21 = *v20;
          *v20 = v25;
        }
        v26 = &arr->Data[v5];
        v27 = &arr->Data[v10];
        v28 = *v27;
        do
        {
          v29 = (unsigned __int8)v28[(unsigned __int64)(arr->Data[v5] - *v27)];
          v30 = *(unsigned __int8 *)v28 - v29;
          if ( v30 )
            break;
          ++v28;
        }
        while ( v29 );
        if ( v30 < 0 )
        {
          v31 = *v27;
          *v27 = *v26;
          *v26 = v31;
        }
        while ( 1 )
        {
          Data = arr->Data;
          v33 = arr->Data[v5];
          v34 = &arr->Data[v13];
          do
          {
            v35 = v34[1];
            ++v34;
            ++v8;
            v36 = v33 - v35;
            do
            {
              v37 = (unsigned __int8)v35[v36];
              v38 = *(unsigned __int8 *)v35 - v37;
              if ( v38 )
                break;
              ++v35;
            }
            while ( v37 );
          }
          while ( v38 < 0 );
          v39 = &Data[v10];
          do
          {
            v40 = (__int64)*--v39;
            --v9;
            v41 = arr->Data[v5];
            v42 = v40 - (_QWORD)v33;
            do
            {
              v43 = (unsigned __int8)v41[v42];
              v44 = *(unsigned __int8 *)v41 - v43;
              if ( v44 )
                break;
              ++v41;
            }
            while ( v43 );
          }
          while ( v44 < 0 );
          if ( v8 > v9 )
            break;
          v10 = v9;
          v13 = v8;
          v45 = Data[v8];
          Data[v8] = Data[v9];
          Data[v9] = v45;
        }
        v46 = Data[v5];
        Data[v5] = Data[v9];
        Data[v9] = v46;
        if ( (__int64)(v9 - v5) <= v4 - v8 )
        {
          *((_QWORD *)i + 1) = v4;
          v4 = v9;
          *(_QWORD *)i = v8;
        }
        else
        {
          *(_QWORD *)i = v5;
          v5 = v8;
          *((_QWORD *)i + 1) = v9;
        }
        i += 16;
      }
      v47 = v5 + 1;
      for ( j = v5; v47 < v4; ++v47 )
      {
        v49 = &arr->Data[j];
        v50 = v49[1];
        v51 = *v49 - v50;
        do
        {
          v52 = (unsigned __int8)v50[v51];
          v53 = *(unsigned __int8 *)v50 - v52;
          if ( v53 )
            break;
          ++v50;
        }
        while ( v52 );
        if ( v53 < 0 )
        {
          do
          {
            v54 = v49[1];
            v49[1] = *v49;
            *v49 = v54;
            if ( j == v5 )
              break;
            v49 = &arr->Data[--j];
            v55 = v49[1];
            v56 = *v49 - v55;
            do
            {
              v57 = (unsigned __int8)v55[v56];
              v58 = *(unsigned __int8 *)v55 - v57;
              if ( v58 )
                break;
              ++v55;
            }
            while ( v57 );
          }
          while ( v58 < 0 );
        }
        j = v47;
      }
      if ( i <= v59 )
        break;
      v5 = *((_QWORD *)i - 2);
      i -= 16;
    }
  }
}

void __fastcall Scaleform::Render::GL::GLImmediate::GLImmediate(Scaleform::Render::GL::GLImmediate *this)
{
  *(_QWORD *)&this->MajorVersion = 0i64;
  memset(this->ExtensionSupported, 0, sizeof(this->ExtensionSupported));
  this->p_glActiveTexture = 0i64;
  this->__vftable = (Scaleform::Render::GL::GLImmediate_vtbl *)&Scaleform::Render::GL::GLImmediate::`vftable';
  this->p_glAttachShader = 0i64;
  this->p_glBindAttribLocation = 0i64;
  this->p_glBindBuffer = 0i64;
  this->p_glBindFragDataLocation = 0i64;
  this->p_glBindFramebuffer = 0i64;
  this->p_glBindProgramPipeline = 0i64;
  this->p_glBindRenderbuffer = 0i64;
  this->p_glBindTexture = 0i64;
  this->p_glBindVertexArray = 0i64;
  this->p_glBlendEquation = 0i64;
  this->p_glBlendEquationSeparate = 0i64;
  this->p_glBlendFunc = 0i64;
  this->p_glBlendFuncSeparate = 0i64;
  this->p_glBufferData = 0i64;
  this->p_glBufferSubData = 0i64;
  this->p_glCheckFramebufferStatus = 0i64;
  this->p_glClear = 0i64;
  this->p_glClearColor = 0i64;
  this->p_glClientWaitSync = 0i64;
  this->p_glColorMask = 0i64;
  this->p_glCompileShader = 0i64;
  this->p_glCompressedTexImage2D = 0i64;
  this->p_glCreateProgram = 0i64;
  this->p_glCreateShader = 0i64;
  this->p_glDebugMessageCallback = 0i64;
  this->p_glDebugMessageControl = 0i64;
  this->p_glDeleteBuffers = 0i64;
  this->p_glDeleteFramebuffers = 0i64;
  this->p_glDeleteProgram = 0i64;
  this->p_glDeleteProgramPipelines = 0i64;
  this->p_glDeleteRenderbuffers = 0i64;
  this->p_glDeleteShader = 0i64;
  this->p_glDeleteSync = 0i64;
  this->p_glDeleteTextures = 0i64;
  this->p_glDeleteVertexArrays = 0i64;
  this->p_glDepthFunc = 0i64;
  this->p_glDepthMask = 0i64;
  this->p_glDisable = 0i64;
  this->p_glDisableVertexAttribArray = 0i64;
  this->p_glDrawArrays = 0i64;
  this->p_glDrawElements = 0i64;
  this->p_glDrawElementsInstanced = 0i64;
  this->p_glEnable = 0i64;
  this->p_glEnableVertexAttribArray = 0i64;
  this->p_glFenceSync = 0i64;
  this->p_glFlush = 0i64;
  this->p_glFlushMappedBufferRange = 0i64;
  this->p_glFramebufferRenderbuffer = 0i64;
  this->p_glFramebufferTexture2D = 0i64;
  this->p_glGenBuffers = 0i64;
  this->p_glGenFramebuffers = 0i64;
  this->p_glGenProgramPipelines = 0i64;
  this->p_glGenRenderbuffers = 0i64;
  this->p_glGenTextures = 0i64;
  this->p_glGenVertexArrays = 0i64;
  this->p_glGenerateMipmap = 0i64;
  this->p_glGetActiveUniform = 0i64;
  this->p_glGetError = 0i64;
  this->p_glGetFloatv = 0i64;
  this->p_glGetFragDataLocation = 0i64;
  this->p_glGetFramebufferAttachmentParameteriv = 0i64;
  this->p_glGetIntegerv = 0i64;
  this->p_glGetProgramBinary = 0i64;
  this->p_glGetProgramInfoLog = 0i64;
  this->p_glGetProgramiv = 0i64;
  this->p_glGetRenderbufferParameteriv = 0i64;
  this->p_glGetShaderInfoLog = 0i64;
  this->p_glGetShaderiv = 0i64;
  this->p_glGetString = 0i64;
  this->p_glGetStringi = 0i64;
  this->p_glGetSynciv = 0i64;
  this->p_glGetTexImage = 0i64;
  this->p_glGetTexLevelParameteriv = 0i64;
  this->p_glGetTexParameteriv = 0i64;
  this->p_glGetUniformLocation = 0i64;
  this->p_glIsFramebuffer = 0i64;
  this->p_glIsProgram = 0i64;
  this->p_glIsRenderbuffer = 0i64;
  this->p_glLinkProgram = 0i64;
  this->p_glMapBuffer = 0i64;
  this->p_glMapBufferRange = 0i64;
  this->p_glPixelStorei = 0i64;
  this->p_glPolygonMode = 0i64;
  this->p_glPopGroupMarker = 0i64;
  this->p_glProgramBinary = 0i64;
  this->p_glProgramParameteri = 0i64;
  this->p_glProgramUniform1fv = 0i64;
  this->p_glProgramUniform1iv = 0i64;
  this->p_glProgramUniform2fv = 0i64;
  this->p_glProgramUniform3fv = 0i64;
  this->p_glProgramUniform4fv = 0i64;
  this->p_glProgramUniformMatrix4fv = 0i64;
  this->p_glPushGroupMarker = 0i64;
  this->p_glReadPixels = 0i64;
  this->p_glReleaseShaderCompiler = 0i64;
  this->p_glRenderbufferStorage = 0i64;
  this->p_glScissor = 0i64;
  this->p_glShaderSource = 0i64;
  this->p_glStencilFunc = 0i64;
  this->p_glStencilMask = 0i64;
  this->p_glStencilOp = 0i64;
  this->p_glStringMarker = 0i64;
  this->p_glTexImage2D = 0i64;
  this->p_glTexParameteri = 0i64;
  this->p_glTexSubImage2D = 0i64;
  this->p_glUniform1f = 0i64;
  this->p_glUniform1fv = 0i64;
  this->p_glUniform1i = 0i64;
  this->p_glUniform1iv = 0i64;
  this->p_glUniform2f = 0i64;
  this->p_glUniform2fv = 0i64;
  this->p_glUniform3fv = 0i64;
  this->p_glUniform4fv = 0i64;
  this->p_glUniformMatrix4fv = 0i64;
  this->p_glUnmapBuffer = 0i64;
  this->p_glUseProgram = 0i64;
  this->p_glUseProgramStages = 0i64;
  this->p_glVertexAttribPointer = 0i64;
  this->p_glViewport = 0i64;
}

_BOOL8 __fastcall Scaleform::Render::GL::GLInterface::CheckExtension(
        Scaleform::Render::GL::GLInterface *this,
        Scaleform::Render::GL::GLExtensionType ext)
{
  return this->ExtensionSupported[ext];
}

bool __fastcall Scaleform::Render::GL::GLInterface::CheckGLVersion(
        Scaleform::Render::GL::GLInterface *this,
        unsigned int reqMajor,
        unsigned int reqMinor)
{
  unsigned int MajorVersion; // eax

  MajorVersion = this->MajorVersion;
  return MajorVersion > reqMajor || MajorVersion == reqMajor && this->MinorVersion >= reqMinor;
}

void __fastcall Scaleform::Render::GL::GLImmediate::Init(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int verbosity)
{
  this->Verbosity = verbosity;
  Scaleform::Render::GL::GLImmediate::initExtensions(this, verbosity);
  if ( !this->p_glActiveTexture )
  {
    if ( this->CheckGLVersion(this, 1u, 3u) )
      this->p_glActiveTexture = (void (__fastcall *)(unsigned int))wglGetProcAddress("glActiveTexture");
    if ( !this->p_glActiveTexture && this->CheckExtension(this, SF_GL_ARB_multitexture) )
      this->p_glActiveTexture = (void (__fastcall *)(unsigned int))wglGetProcAddress("glActiveTextureARB");
  }
  if ( !this->p_glAttachShader
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glAttachShader = (void (__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glAttachShader");
  }
  if ( !this->p_glBindAttribLocation
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glBindAttribLocation = (void (__fastcall *)(unsigned int, unsigned int, const char *))wglGetProcAddress("glBindAttribLocation");
  }
  if ( !this->p_glBindBuffer )
  {
    if ( this->CheckGLVersion(this, 1u, 5u) )
      this->p_glBindBuffer = (void (__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glBindBuffer");
    if ( !this->p_glBindBuffer && this->CheckExtension(this, SF_GL_ARB_vertex_buffer_object) )
      this->p_glBindBuffer = (void (__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glBindBufferARB");
  }
  if ( !this->p_glBindFragDataLocation )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glBindFragDataLocation = (void (__fastcall *)(unsigned int, unsigned int, const char *))wglGetProcAddress("glBindFragDataLocation");
    }
    if ( !this->p_glBindFragDataLocation && this->CheckExtension(this, SF_GL_EXT_gpu_shader4) )
      this->p_glBindFragDataLocation = (void (__fastcall *)(unsigned int, unsigned int, const char *))wglGetProcAddress("glBindFragDataLocationEXT");
  }
  if ( !this->p_glBindFramebuffer )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glBindFramebuffer = (void (__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glBindFramebuffer");
    }
    if ( !this->p_glBindFramebuffer && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glBindFramebuffer = (void (__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glBindFramebufferEXT");
  }
  if ( !this->p_glBindProgramPipeline )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glBindProgramPipeline = (void (__fastcall *)(unsigned int))wglGetProcAddress("glBindProgramPipeline");
    if ( !this->p_glBindProgramPipeline )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glBindProgramPipeline = (void (__fastcall *)(unsigned int))wglGetProcAddress("glBindProgramPipeline");
      if ( !this->p_glBindProgramPipeline && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
        this->p_glBindProgramPipeline = (void (__fastcall *)(unsigned int))wglGetProcAddress("glBindProgramPipelineEXT");
    }
  }
  if ( !this->p_glBindRenderbuffer )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glBindRenderbuffer = (void (__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glBindRenderbuffer");
    }
    if ( !this->p_glBindRenderbuffer && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glBindRenderbuffer = (void (__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glBindRenderbufferEXT");
  }
  if ( !this->p_glBindTexture )
  {
    if ( this->CheckGLVersion(this, 1u, 1u) )
      this->p_glBindTexture = (void (__fastcall *)(unsigned int, unsigned int))glBindTexture;
    if ( !this->p_glBindTexture && this->CheckExtension(this, SF_GL_EXT_texture_object) )
      this->p_glBindTexture = (void (__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glBindTextureEXT");
  }
  if ( !this->p_glBindVertexArray )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glBindVertexArray = (void (__fastcall *)(unsigned int))wglGetProcAddress("glBindVertexArray");
    }
    if ( !this->p_glBindVertexArray )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_vertex_array_object) )
        this->p_glBindVertexArray = (void (__fastcall *)(unsigned int))wglGetProcAddress("glBindVertexArray");
      if ( !this->p_glBindVertexArray && this->CheckExtension(this, SF_GL_APPLE_vertex_array_object) )
        this->p_glBindVertexArray = (void (__fastcall *)(unsigned int))wglGetProcAddress("glBindVertexArrayAPPLE");
    }
  }
  if ( !this->p_glBlendEquation && this->CheckGLVersion(this, 1u, 4u) )
    this->p_glBlendEquation = (void (__fastcall *)(unsigned int))wglGetProcAddress("glBlendEquation");
  if ( !this->p_glBlendEquationSeparate )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           2i64) )
    {
      this->p_glBlendEquationSeparate = (void (__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glBlendEquationSeparate");
    }
    if ( !this->p_glBlendEquationSeparate && this->CheckExtension(this, SF_GL_EXT_blend_equation_separate) )
      this->p_glBlendEquationSeparate = (void (__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glBlendEquationSeparateEXT");
  }
  if ( !this->p_glBlendFunc && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glBlendFunc = (void (__fastcall *)(unsigned int, unsigned int))glBlendFunc;
  if ( !this->p_glBlendFuncSeparate )
  {
    if ( this->CheckGLVersion(this, 1u, 4u) )
      this->p_glBlendFuncSeparate = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int))wglGetProcAddress("glBlendFuncSeparate");
    if ( !this->p_glBlendFuncSeparate )
    {
      if ( this->CheckExtension(this, SF_GL_INGR_blend_func_separate) )
        this->p_glBlendFuncSeparate = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int))wglGetProcAddress("glBlendFuncSeparateINGR");
      if ( !this->p_glBlendFuncSeparate && this->CheckExtension(this, SF_GL_EXT_blend_func_separate) )
        this->p_glBlendFuncSeparate = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int))wglGetProcAddress("glBlendFuncSeparateEXT");
    }
  }
  if ( !this->p_glBufferData )
  {
    if ( this->CheckGLVersion(this, 1u, 5u) )
      this->p_glBufferData = (void (__fastcall *)(unsigned int, __int64, const void *, unsigned int))wglGetProcAddress("glBufferData");
    if ( !this->p_glBufferData && this->CheckExtension(this, SF_GL_ARB_vertex_buffer_object) )
      this->p_glBufferData = (void (__fastcall *)(unsigned int, __int64, const void *, unsigned int))wglGetProcAddress("glBufferDataARB");
  }
  if ( !this->p_glBufferSubData )
  {
    if ( this->CheckGLVersion(this, 1u, 5u) )
      this->p_glBufferSubData = (void (__fastcall *)(unsigned int, __int64, __int64, const void *))wglGetProcAddress("glBufferSubData");
    if ( !this->p_glBufferSubData && this->CheckExtension(this, SF_GL_ARB_vertex_buffer_object) )
      this->p_glBufferSubData = (void (__fastcall *)(unsigned int, __int64, __int64, const void *))wglGetProcAddress("glBufferSubDataARB");
  }
  if ( !this->p_glCheckFramebufferStatus )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glCheckFramebufferStatus = (unsigned int (__fastcall *)(unsigned int))wglGetProcAddress("glCheckFramebufferStatus");
    }
    if ( !this->p_glCheckFramebufferStatus && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glCheckFramebufferStatus = (unsigned int (__fastcall *)(unsigned int))wglGetProcAddress("glCheckFramebufferStatusEXT");
  }
  if ( !this->p_glClear && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glClear = (void (__fastcall *)(unsigned int))glClear;
  if ( !this->p_glClearColor && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glClearColor = (void (__fastcall *)(float, float, float, float))glClearColor;
  if ( !this->p_glClientWaitSync )
  {
    if ( this->CheckExtension(this, SF_GL_ARB_sync) )
      this->p_glClientWaitSync = (unsigned int (__fastcall *)(struct __GLsync *, unsigned int, unsigned __int64))wglGetProcAddress("glClientWaitSync");
    if ( !this->p_glClientWaitSync && this->CheckGLVersion(this, 3u, 2u) )
      this->p_glClientWaitSync = (unsigned int (__fastcall *)(struct __GLsync *, unsigned int, unsigned __int64))wglGetProcAddress("glClientWaitSync");
  }
  if ( !this->p_glColorMask && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glColorMask = (void (__fastcall *)(unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8))glColorMask;
  if ( !this->p_glCompileShader
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glCompileShader = (void (__fastcall *)(unsigned int))wglGetProcAddress("glCompileShader");
  }
  if ( !this->p_glCompressedTexImage2D )
  {
    if ( this->CheckGLVersion(this, 1u, 3u) )
      this->p_glCompressedTexImage2D = (void (__fastcall *)(unsigned int, int, unsigned int, int, int, int, int, const void *))wglGetProcAddress("glCompressedTexImage2D");
    if ( !this->p_glCompressedTexImage2D && this->CheckExtension(this, SF_GL_ARB_texture_compression) )
      this->p_glCompressedTexImage2D = (void (__fastcall *)(unsigned int, int, unsigned int, int, int, int, int, const void *))wglGetProcAddress("glCompressedTexImage2DARB");
  }
  if ( !this->p_glCreateProgram
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glCreateProgram = (unsigned int (__fastcall *)())wglGetProcAddress("glCreateProgram");
  }
  if ( !this->p_glCreateShader
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glCreateShader = (unsigned int (__fastcall *)(unsigned int))wglGetProcAddress("glCreateShader");
  }
  if ( !this->p_glDebugMessageCallback )
  {
    if ( this->CheckGLVersion(this, 4u, 3u) )
      this->p_glDebugMessageCallback = (void (__fastcall *)(void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *), const void *))wglGetProcAddress("glDebugMessageCallback");
    if ( !this->p_glDebugMessageCallback )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_debug_output) )
        this->p_glDebugMessageCallback = (void (__fastcall *)(void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *), const void *))wglGetProcAddress("glDebugMessageCallbackARB");
      if ( !this->p_glDebugMessageCallback )
      {
        if ( this->CheckExtension(this, SF_GL_AMD_debug_output) )
          this->p_glDebugMessageCallback = (void (__fastcall *)(void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *), const void *))wglGetProcAddress("glDebugMessageCallbackAMD");
        if ( !this->p_glDebugMessageCallback && this->CheckExtension(this, SF_GL_KHR_debug) )
          this->p_glDebugMessageCallback = (void (__fastcall *)(void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *), const void *))wglGetProcAddress("glDebugMessageCallbackKHR");
      }
    }
  }
  if ( !this->p_glDebugMessageControl )
  {
    if ( this->CheckGLVersion(this, 4u, 3u) )
      this->p_glDebugMessageControl = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, int, const unsigned int *, unsigned __int8))wglGetProcAddress("glDebugMessageControl");
    if ( !this->p_glDebugMessageControl )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_debug_output) )
        this->p_glDebugMessageControl = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, int, const unsigned int *, unsigned __int8))wglGetProcAddress("glDebugMessageControlARB");
      if ( !this->p_glDebugMessageControl && this->CheckExtension(this, SF_GL_KHR_debug) )
        this->p_glDebugMessageControl = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, int, const unsigned int *, unsigned __int8))wglGetProcAddress("glDebugMessageControlKHR");
    }
  }
  if ( !this->p_glDeleteBuffers )
  {
    if ( this->CheckGLVersion(this, 1u, 5u) )
      this->p_glDeleteBuffers = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteBuffers");
    if ( !this->p_glDeleteBuffers && this->CheckExtension(this, SF_GL_ARB_vertex_buffer_object) )
      this->p_glDeleteBuffers = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteBuffersARB");
  }
  if ( !this->p_glDeleteFramebuffers )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glDeleteFramebuffers = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteFramebuffers");
    }
    if ( !this->p_glDeleteFramebuffers && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glDeleteFramebuffers = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteFramebuffersEXT");
  }
  if ( !this->p_glDeleteProgram
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glDeleteProgram = (void (__fastcall *)(unsigned int))wglGetProcAddress("glDeleteProgram");
  }
  if ( !this->p_glDeleteProgramPipelines )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glDeleteProgramPipelines = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteProgramPipelines");
    if ( !this->p_glDeleteProgramPipelines )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glDeleteProgramPipelines = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteProgramPipelines");
      if ( !this->p_glDeleteProgramPipelines && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
        this->p_glDeleteProgramPipelines = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress(
                                                                                             "glDeleteProgramPipelinesEXT");
    }
  }
  if ( !this->p_glDeleteRenderbuffers )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glDeleteRenderbuffers = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteRenderbuffers");
    }
    if ( !this->p_glDeleteRenderbuffers && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glDeleteRenderbuffers = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteRenderbuffersEXT");
  }
  if ( !this->p_glDeleteShader
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glDeleteShader = (void (__fastcall *)(unsigned int))wglGetProcAddress("glDeleteShader");
  }
  if ( !this->p_glDeleteSync )
  {
    if ( this->CheckExtension(this, SF_GL_ARB_sync) )
      this->p_glDeleteSync = (void (__fastcall *)(struct __GLsync *))wglGetProcAddress("glDeleteSync");
    if ( !this->p_glDeleteSync && this->CheckGLVersion(this, 3u, 2u) )
      this->p_glDeleteSync = (void (__fastcall *)(struct __GLsync *))wglGetProcAddress("glDeleteSync");
  }
  if ( !this->p_glDeleteTextures )
  {
    if ( this->CheckGLVersion(this, 1u, 1u) )
      this->p_glDeleteTextures = (void (__fastcall *)(int, const unsigned int *))glDeleteTextures;
    if ( !this->p_glDeleteTextures && this->CheckExtension(this, SF_GL_EXT_texture_object) )
      this->p_glDeleteTextures = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteTexturesEXT");
  }
  if ( !this->p_glDeleteVertexArrays )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glDeleteVertexArrays = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteVertexArrays");
    }
    if ( !this->p_glDeleteVertexArrays )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_vertex_array_object) )
        this->p_glDeleteVertexArrays = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteVertexArrays");
      if ( !this->p_glDeleteVertexArrays && this->CheckExtension(this, SF_GL_APPLE_vertex_array_object) )
        this->p_glDeleteVertexArrays = (void (__fastcall *)(int, const unsigned int *))wglGetProcAddress("glDeleteVertexArraysAPPLE");
    }
  }
  if ( !this->p_glDepthFunc && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glDepthFunc = (void (__fastcall *)(unsigned int))glDepthFunc;
  if ( !this->p_glDepthMask && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glDepthMask = (void (__fastcall *)(unsigned __int8))glDepthMask;
  if ( !this->p_glDisable && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glDisable = (void (__fastcall *)(unsigned int))glDisable;
  if ( !this->p_glDisableVertexAttribArray )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           2i64) )
    {
      this->p_glDisableVertexAttribArray = (void (__fastcall *)(unsigned int))wglGetProcAddress("glDisableVertexAttribArray");
    }
    if ( !this->p_glDisableVertexAttribArray && this->CheckExtension(this, SF_GL_ARB_vertex_program) )
      this->p_glDisableVertexAttribArray = (void (__fastcall *)(unsigned int))wglGetProcAddress("glDisableVertexAttribArrayARB");
  }
  if ( !this->p_glDrawArrays )
  {
    if ( this->CheckGLVersion(this, 1u, 1u) )
      this->p_glDrawArrays = (void (__fastcall *)(unsigned int, int, int))glDrawArrays;
    if ( !this->p_glDrawArrays && this->CheckExtension(this, SF_GL_EXT_vertex_array) )
      this->p_glDrawArrays = (void (__fastcall *)(unsigned int, int, int))wglGetProcAddress("glDrawArraysEXT");
  }
  if ( !this->p_glDrawElements && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glDrawElements = (void (__fastcall *)(unsigned int, int, unsigned int, const void *))glDrawElements;
  if ( !this->p_glDrawElementsInstanced )
  {
    if ( this->CheckExtension(this, SF_GL_ARB_instanced_arrays) )
      this->p_glDrawElementsInstanced = (void (__fastcall *)(unsigned int, int, unsigned int, const void *, int))wglGetProcAddress("glDrawElementsInstanced");
    if ( !this->p_glDrawElementsInstanced )
    {
      if ( this->CheckGLVersion(this, 3u, 1u) )
        this->p_glDrawElementsInstanced = (void (__fastcall *)(unsigned int, int, unsigned int, const void *, int))wglGetProcAddress("glDrawElementsInstanced");
      if ( !this->p_glDrawElementsInstanced )
      {
        if ( this->CheckExtension(this, SF_GL_ARB_draw_instanced) )
          this->p_glDrawElementsInstanced = (void (__fastcall *)(unsigned int, int, unsigned int, const void *, int))wglGetProcAddress("glDrawElementsInstancedARB");
        if ( !this->p_glDrawElementsInstanced && this->CheckExtension(this, SF_GL_EXT_draw_instanced) )
          this->p_glDrawElementsInstanced = (void (__fastcall *)(unsigned int, int, unsigned int, const void *, int))wglGetProcAddress("glDrawElementsInstancedEXT");
      }
    }
  }
  if ( !this->p_glEnable && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glEnable = (void (__fastcall *)(unsigned int))glEnable;
  if ( !this->p_glEnableVertexAttribArray )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           2i64) )
    {
      this->p_glEnableVertexAttribArray = (void (__fastcall *)(unsigned int))wglGetProcAddress("glEnableVertexAttribArray");
    }
    if ( !this->p_glEnableVertexAttribArray && this->CheckExtension(this, SF_GL_ARB_vertex_program) )
      this->p_glEnableVertexAttribArray = (void (__fastcall *)(unsigned int))wglGetProcAddress("glEnableVertexAttribArrayARB");
  }
  if ( !this->p_glFenceSync )
  {
    if ( this->CheckExtension(this, SF_GL_ARB_sync) )
      this->p_glFenceSync = (struct __GLsync *(__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glFenceSync");
    if ( !this->p_glFenceSync && this->CheckGLVersion(this, 3u, 2u) )
      this->p_glFenceSync = (struct __GLsync *(__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glFenceSync");
  }
  if ( !this->p_glFlush && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glFlush = glFlush;
  if ( !this->p_glFlushMappedBufferRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glFlushMappedBufferRange = (void (__fastcall *)(unsigned int, __int64, __int64))wglGetProcAddress(
                                                                                                "glFlushMappedBufferRange");
    }
    if ( !this->p_glFlushMappedBufferRange )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_map_buffer_range) )
        this->p_glFlushMappedBufferRange = (void (__fastcall *)(unsigned int, __int64, __int64))wglGetProcAddress(
                                                                                                  "glFlushMappedBufferRange");
      if ( !this->p_glFlushMappedBufferRange && this->CheckExtension(this, SF_GL_APPLE_flush_buffer_range) )
        this->p_glFlushMappedBufferRange = (void (__fastcall *)(unsigned int, __int64, __int64))wglGetProcAddress(
                                                                                                  "glFlushMappedBufferRangeAPPLE");
    }
  }
  if ( !this->p_glFramebufferRenderbuffer )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glFramebufferRenderbuffer = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int))wglGetProcAddress("glFramebufferRenderbuffer");
    }
    if ( !this->p_glFramebufferRenderbuffer && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glFramebufferRenderbuffer = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int))wglGetProcAddress("glFramebufferRenderbufferEXT");
  }
  if ( !this->p_glFramebufferTexture2D )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glFramebufferTexture2D = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int, int))wglGetProcAddress("glFramebufferTexture2D");
    }
    if ( !this->p_glFramebufferTexture2D && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glFramebufferTexture2D = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int, int))wglGetProcAddress("glFramebufferTexture2DEXT");
  }
  if ( !this->p_glGenBuffers )
  {
    if ( this->CheckGLVersion(this, 1u, 5u) )
      this->p_glGenBuffers = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenBuffers");
    if ( !this->p_glGenBuffers && this->CheckExtension(this, SF_GL_ARB_vertex_buffer_object) )
      this->p_glGenBuffers = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenBuffersARB");
  }
  if ( !this->p_glGenFramebuffers )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glGenFramebuffers = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenFramebuffers");
    }
    if ( !this->p_glGenFramebuffers && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glGenFramebuffers = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenFramebuffersEXT");
  }
  if ( !this->p_glGenProgramPipelines )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glGenProgramPipelines = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenProgramPipelines");
    if ( !this->p_glGenProgramPipelines )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glGenProgramPipelines = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenProgramPipelines");
      if ( !this->p_glGenProgramPipelines && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
        this->p_glGenProgramPipelines = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenProgramPipelinesEXT");
    }
  }
  if ( !this->p_glGenRenderbuffers )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glGenRenderbuffers = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenRenderbuffers");
    }
    if ( !this->p_glGenRenderbuffers && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glGenRenderbuffers = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenRenderbuffersEXT");
  }
  if ( !this->p_glGenTextures )
  {
    if ( this->CheckGLVersion(this, 1u, 1u) )
      this->p_glGenTextures = (void (__fastcall *)(int, unsigned int *))glGenTextures;
    if ( !this->p_glGenTextures && this->CheckExtension(this, SF_GL_EXT_texture_object) )
      this->p_glGenTextures = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenTexturesEXT");
  }
  if ( !this->p_glGenVertexArrays )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glGenVertexArrays = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenVertexArrays");
    }
    if ( !this->p_glGenVertexArrays )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_vertex_array_object) )
        this->p_glGenVertexArrays = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenVertexArrays");
      if ( !this->p_glGenVertexArrays && this->CheckExtension(this, SF_GL_APPLE_vertex_array_object) )
        this->p_glGenVertexArrays = (void (__fastcall *)(int, unsigned int *))wglGetProcAddress("glGenVertexArraysAPPLE");
    }
  }
  if ( !this->p_glGenerateMipmap )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glGenerateMipmap = (void (__fastcall *)(unsigned int))wglGetProcAddress("glGenerateMipmap");
    }
    if ( !this->p_glGenerateMipmap && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glGenerateMipmap = (void (__fastcall *)(unsigned int))wglGetProcAddress("glGenerateMipmapEXT");
  }
  if ( !this->p_glGetActiveUniform
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glGetActiveUniform = (void (__fastcall *)(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *))wglGetProcAddress("glGetActiveUniform");
  }
  if ( !this->p_glGetError && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glGetError = glGetError;
  if ( !this->p_glGetFloatv && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glGetFloatv = (void (__fastcall *)(unsigned int, float *))glGetFloatv;
  if ( !this->p_glGetFragDataLocation )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glGetFragDataLocation = (int (__fastcall *)(unsigned int, const char *))wglGetProcAddress("glGetFragDataLocation");
    }
    if ( !this->p_glGetFragDataLocation && this->CheckExtension(this, SF_GL_EXT_gpu_shader4) )
      this->p_glGetFragDataLocation = (int (__fastcall *)(unsigned int, const char *))wglGetProcAddress("glGetFragDataLocationEXT");
  }
  if ( !this->p_glGetFramebufferAttachmentParameteriv )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glGetFramebufferAttachmentParameteriv = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, int *))wglGetProcAddress("glGetFramebufferAttachmentParameteriv");
    }
    if ( !this->p_glGetFramebufferAttachmentParameteriv && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glGetFramebufferAttachmentParameteriv = (void (__fastcall *)(unsigned int, unsigned int, unsigned int, int *))wglGetProcAddress("glGetFramebufferAttachmentParameterivEXT");
  }
  if ( !this->p_glGetIntegerv && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glGetIntegerv = (void (__fastcall *)(unsigned int, int *))glGetIntegerv;
  if ( !this->p_glGetProgramBinary )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glGetProgramBinary = (void (__fastcall *)(unsigned int, int, int *, unsigned int *, void *))wglGetProcAddress("glGetProgramBinary");
    if ( !this->p_glGetProgramBinary && this->CheckExtension(this, SF_GL_ARB_get_program_binary) )
      this->p_glGetProgramBinary = (void (__fastcall *)(unsigned int, int, int *, unsigned int *, void *))wglGetProcAddress("glGetProgramBinary");
  }
  if ( !this->p_glGetProgramInfoLog
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glGetProgramInfoLog = (void (__fastcall *)(unsigned int, int, int *, char *))wglGetProcAddress("glGetProgramInfoLog");
  }
  if ( !this->p_glGetProgramiv )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           2i64) )
    {
      this->p_glGetProgramiv = (void (__fastcall *)(unsigned int, unsigned int, int *))wglGetProcAddress("glGetProgramiv");
    }
    if ( !this->p_glGetProgramiv )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_fragment_program) )
        this->p_glGetProgramiv = (void (__fastcall *)(unsigned int, unsigned int, int *))wglGetProcAddress("glGetProgramivARB");
      if ( !this->p_glGetProgramiv && this->CheckExtension(this, SF_GL_NV_vertex_program) )
        this->p_glGetProgramiv = (void (__fastcall *)(unsigned int, unsigned int, int *))wglGetProcAddress("glGetProgramivNV");
    }
  }
  if ( !this->p_glGetRenderbufferParameteriv )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glGetRenderbufferParameteriv = (void (__fastcall *)(unsigned int, unsigned int, int *))wglGetProcAddress("glGetRenderbufferParameteriv");
    }
    if ( !this->p_glGetRenderbufferParameteriv && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glGetRenderbufferParameteriv = (void (__fastcall *)(unsigned int, unsigned int, int *))wglGetProcAddress("glGetRenderbufferParameterivEXT");
  }
  if ( !this->p_glGetShaderInfoLog
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glGetShaderInfoLog = (void (__fastcall *)(unsigned int, int, int *, char *))wglGetProcAddress("glGetShaderInfoLog");
  }
  if ( !this->p_glGetShaderiv
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glGetShaderiv = (void (__fastcall *)(unsigned int, unsigned int, int *))wglGetProcAddress("glGetShaderiv");
  }
  if ( !this->p_glGetString && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glGetString = (const unsigned __int8 *(__fastcall *)(unsigned int))glGetString;
  if ( !this->p_glGetStringi
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 3i64) )
  {
    this->p_glGetStringi = (const unsigned __int8 *(__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glGetStringi");
  }
  if ( !this->p_glGetSynciv )
  {
    if ( this->CheckExtension(this, SF_GL_ARB_sync) )
      this->p_glGetSynciv = (void (__fastcall *)(struct __GLsync *, unsigned int, int, int *, int *))wglGetProcAddress("glGetSynciv");
    if ( !this->p_glGetSynciv && this->CheckGLVersion(this, 3u, 2u) )
      this->p_glGetSynciv = (void (__fastcall *)(struct __GLsync *, unsigned int, int, int *, int *))wglGetProcAddress("glGetSynciv");
  }
  if ( !this->p_glGetTexImage && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glGetTexImage = (void (__fastcall *)(unsigned int, int, unsigned int, unsigned int, void *))glGetTexImage;
  if ( !this->p_glGetTexLevelParameteriv && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glGetTexLevelParameteriv = (void (__fastcall *)(unsigned int, int, unsigned int, int *))glGetTexLevelParameteriv;
  if ( !this->p_glGetTexParameteriv && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glGetTexParameteriv = (void (__fastcall *)(unsigned int, unsigned int, int *))glGetTexParameteriv;
  if ( !this->p_glGetUniformLocation
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glGetUniformLocation = (int (__fastcall *)(unsigned int, const char *))wglGetProcAddress("glGetUniformLocation");
  }
  if ( !this->p_glIsFramebuffer )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glIsFramebuffer = (unsigned __int8 (__fastcall *)(unsigned int))wglGetProcAddress("glIsFramebuffer");
    }
    if ( !this->p_glIsFramebuffer && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glIsFramebuffer = (unsigned __int8 (__fastcall *)(unsigned int))wglGetProcAddress("glIsFramebufferEXT");
  }
  if ( !this->p_glIsProgram )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           2i64) )
    {
      this->p_glIsProgram = (unsigned __int8 (__fastcall *)(unsigned int))wglGetProcAddress("glIsProgram");
    }
    if ( !this->p_glIsProgram )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_fragment_program) )
        this->p_glIsProgram = (unsigned __int8 (__fastcall *)(unsigned int))wglGetProcAddress("glIsProgramARB");
      if ( !this->p_glIsProgram && this->CheckExtension(this, SF_GL_NV_vertex_program) )
        this->p_glIsProgram = (unsigned __int8 (__fastcall *)(unsigned int))wglGetProcAddress("glIsProgramNV");
    }
  }
  if ( !this->p_glIsRenderbuffer )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glIsRenderbuffer = (unsigned __int8 (__fastcall *)(unsigned int))wglGetProcAddress("glIsRenderbuffer");
    }
    if ( !this->p_glIsRenderbuffer && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glIsRenderbuffer = (unsigned __int8 (__fastcall *)(unsigned int))wglGetProcAddress("glIsRenderbufferEXT");
  }
  if ( !this->p_glLinkProgram
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glLinkProgram = (void (__fastcall *)(unsigned int))wglGetProcAddress("glLinkProgram");
  }
  if ( !this->p_glMapBuffer )
  {
    if ( this->CheckGLVersion(this, 1u, 5u) )
      this->p_glMapBuffer = (void *(__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glMapBuffer");
    if ( !this->p_glMapBuffer && this->CheckExtension(this, SF_GL_ARB_vertex_buffer_object) )
      this->p_glMapBuffer = (void *(__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glMapBufferARB");
  }
  if ( !this->p_glMapBufferRange )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glMapBufferRange = (void *(__fastcall *)(unsigned int, __int64, __int64, unsigned int))wglGetProcAddress("glMapBufferRange");
    }
    if ( !this->p_glMapBufferRange && this->CheckExtension(this, SF_GL_ARB_map_buffer_range) )
      this->p_glMapBufferRange = (void *(__fastcall *)(unsigned int, __int64, __int64, unsigned int))wglGetProcAddress("glMapBufferRange");
  }
  if ( !this->p_glPixelStorei && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glPixelStorei = (void (__fastcall *)(unsigned int, int))glPixelStorei;
  if ( !this->p_glPolygonMode && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glPolygonMode = (void (__fastcall *)(unsigned int, unsigned int))glPolygonMode;
  if ( !this->p_glPopGroupMarker && this->CheckExtension(this, SF_GL_EXT_debug_marker) )
    this->p_glPopGroupMarker = (void (__fastcall *)())wglGetProcAddress("glPopGroupMarkerEXT");
  if ( !this->p_glProgramBinary )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glProgramBinary = (void (__fastcall *)(unsigned int, unsigned int, const void *, int))wglGetProcAddress("glProgramBinary");
    if ( !this->p_glProgramBinary && this->CheckExtension(this, SF_GL_ARB_get_program_binary) )
      this->p_glProgramBinary = (void (__fastcall *)(unsigned int, unsigned int, const void *, int))wglGetProcAddress("glProgramBinary");
  }
  if ( !this->p_glProgramParameteri )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glProgramParameteri = (void (__fastcall *)(unsigned int, unsigned int, int))wglGetProcAddress("glProgramParameteri");
    if ( !this->p_glProgramParameteri )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glProgramParameteri = (void (__fastcall *)(unsigned int, unsigned int, int))wglGetProcAddress("glProgramParameteri");
      if ( !this->p_glProgramParameteri )
      {
        if ( this->CheckExtension(this, SF_GL_ARB_geometry_shader4) )
          this->p_glProgramParameteri = (void (__fastcall *)(unsigned int, unsigned int, int))wglGetProcAddress("glProgramParameteriARB");
        if ( !this->p_glProgramParameteri )
        {
          if ( this->CheckExtension(this, SF_GL_EXT_geometry_shader4) )
            this->p_glProgramParameteri = (void (__fastcall *)(unsigned int, unsigned int, int))wglGetProcAddress(
                                                                                                  "glProgramParameteriEXT");
          if ( !this->p_glProgramParameteri && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
            this->p_glProgramParameteri = (void (__fastcall *)(unsigned int, unsigned int, int))wglGetProcAddress(
                                                                                                  "glProgramParameteriEXT");
        }
      }
    }
  }
  if ( !this->p_glProgramUniform1fv )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glProgramUniform1fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform1fv");
    if ( !this->p_glProgramUniform1fv )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glProgramUniform1fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform1fv");
      if ( !this->p_glProgramUniform1fv )
      {
        if ( this->CheckExtension(this, SF_GL_EXT_direct_state_access) )
          this->p_glProgramUniform1fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform1fvEXT");
        if ( !this->p_glProgramUniform1fv && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
          this->p_glProgramUniform1fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform1fvEXT");
      }
    }
  }
  if ( !this->p_glProgramUniform1iv )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glProgramUniform1iv = (void (__fastcall *)(unsigned int, int, int, const int *))wglGetProcAddress("glProgramUniform1iv");
    if ( !this->p_glProgramUniform1iv )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glProgramUniform1iv = (void (__fastcall *)(unsigned int, int, int, const int *))wglGetProcAddress("glProgramUniform1iv");
      if ( !this->p_glProgramUniform1iv )
      {
        if ( this->CheckExtension(this, SF_GL_EXT_direct_state_access) )
          this->p_glProgramUniform1iv = (void (__fastcall *)(unsigned int, int, int, const int *))wglGetProcAddress("glProgramUniform1ivEXT");
        if ( !this->p_glProgramUniform1iv && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
          this->p_glProgramUniform1iv = (void (__fastcall *)(unsigned int, int, int, const int *))wglGetProcAddress("glProgramUniform1ivEXT");
      }
    }
  }
  if ( !this->p_glProgramUniform2fv )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glProgramUniform2fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform2fv");
    if ( !this->p_glProgramUniform2fv )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glProgramUniform2fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform2fv");
      if ( !this->p_glProgramUniform2fv )
      {
        if ( this->CheckExtension(this, SF_GL_EXT_direct_state_access) )
          this->p_glProgramUniform2fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform2fvEXT");
        if ( !this->p_glProgramUniform2fv && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
          this->p_glProgramUniform2fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform2fvEXT");
      }
    }
  }
  if ( !this->p_glProgramUniform3fv )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glProgramUniform3fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform3fv");
    if ( !this->p_glProgramUniform3fv )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glProgramUniform3fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform3fv");
      if ( !this->p_glProgramUniform3fv )
      {
        if ( this->CheckExtension(this, SF_GL_EXT_direct_state_access) )
          this->p_glProgramUniform3fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform3fvEXT");
        if ( !this->p_glProgramUniform3fv && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
          this->p_glProgramUniform3fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform3fvEXT");
      }
    }
  }
  if ( !this->p_glProgramUniform4fv )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glProgramUniform4fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform4fv");
    if ( !this->p_glProgramUniform4fv )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glProgramUniform4fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform4fv");
      if ( !this->p_glProgramUniform4fv )
      {
        if ( this->CheckExtension(this, SF_GL_EXT_direct_state_access) )
          this->p_glProgramUniform4fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform4fvEXT");
        if ( !this->p_glProgramUniform4fv && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
          this->p_glProgramUniform4fv = (void (__fastcall *)(unsigned int, int, int, const float *))wglGetProcAddress("glProgramUniform4fvEXT");
      }
    }
  }
  if ( !this->p_glProgramUniformMatrix4fv )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glProgramUniformMatrix4fv = (void (__fastcall *)(unsigned int, int, int, unsigned __int8, const float *))wglGetProcAddress("glProgramUniformMatrix4fv");
    if ( !this->p_glProgramUniformMatrix4fv )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glProgramUniformMatrix4fv = (void (__fastcall *)(unsigned int, int, int, unsigned __int8, const float *))wglGetProcAddress("glProgramUniformMatrix4fv");
      if ( !this->p_glProgramUniformMatrix4fv )
      {
        if ( this->CheckExtension(this, SF_GL_EXT_direct_state_access) )
          this->p_glProgramUniformMatrix4fv = (void (__fastcall *)(unsigned int, int, int, unsigned __int8, const float *))wglGetProcAddress("glProgramUniformMatrix4fvEXT");
        if ( !this->p_glProgramUniformMatrix4fv && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
          this->p_glProgramUniformMatrix4fv = (void (__fastcall *)(unsigned int, int, int, unsigned __int8, const float *))wglGetProcAddress("glProgramUniformMatrix4fvEXT");
      }
    }
  }
  if ( !this->p_glPushGroupMarker && this->CheckExtension(this, SF_GL_EXT_debug_marker) )
    this->p_glPushGroupMarker = (void (__fastcall *)(int, const char *))wglGetProcAddress("glPushGroupMarkerEXT");
  if ( !this->p_glReadPixels && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glReadPixels = (void (__fastcall *)(int, int, int, int, unsigned int, unsigned int, void *))glReadPixels;
  if ( !this->p_glReleaseShaderCompiler && this->CheckGLVersion(this, 4u, 1u) )
    this->p_glReleaseShaderCompiler = (void (__fastcall *)())wglGetProcAddress("glReleaseShaderCompiler");
  if ( !this->p_glRenderbufferStorage )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           3i64) )
    {
      this->p_glRenderbufferStorage = (void (__fastcall *)(unsigned int, unsigned int, int, int))wglGetProcAddress(
                                                                                                   "glRenderbufferStorage");
    }
    if ( !this->p_glRenderbufferStorage && this->CheckExtension(this, SF_GL_EXT_framebuffer_object) )
      this->p_glRenderbufferStorage = (void (__fastcall *)(unsigned int, unsigned int, int, int))wglGetProcAddress(
                                                                                                   "glRenderbufferStorageEXT");
  }
  if ( !this->p_glScissor && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glScissor = (void (__fastcall *)(int, int, int, int))glScissor;
  if ( !this->p_glShaderSource
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glShaderSource = (void (__fastcall *)(unsigned int, int, const char *const *, const int *))wglGetProcAddress("glShaderSource");
  }
  if ( !this->p_glStencilFunc && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glStencilFunc = (void (__fastcall *)(unsigned int, int, unsigned int))glStencilFunc;
  if ( !this->p_glStencilMask && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glStencilMask = (void (__fastcall *)(unsigned int))glStencilMask;
  if ( !this->p_glStencilOp && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glStencilOp = (void (__fastcall *)(unsigned int, unsigned int, unsigned int))glStencilOp;
  if ( !this->p_glStringMarker && this->CheckExtension(this, SF_GL_GREMEDY_string_marker) )
    this->p_glStringMarker = (void (__fastcall *)(int, const void *))wglGetProcAddress("glStringMarkerGREMEDY");
  if ( !this->p_glTexImage2D && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glTexImage2D = (void (__fastcall *)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, const void *))glTexImage2D;
  if ( !this->p_glTexParameteri && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glTexParameteri = (void (__fastcall *)(unsigned int, unsigned int, int))glTexParameteri;
  if ( !this->p_glTexSubImage2D )
  {
    if ( this->CheckGLVersion(this, 1u, 1u) )
      this->p_glTexSubImage2D = (void (__fastcall *)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, const void *))glTexSubImage2D;
    if ( !this->p_glTexSubImage2D && this->CheckExtension(this, SF_GL_EXT_subtexture) )
      this->p_glTexSubImage2D = (void (__fastcall *)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, const void *))wglGetProcAddress("glTexSubImage2DEXT");
  }
  if ( !this->p_glUniform1f
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glUniform1f = (void (__fastcall *)(int, float))wglGetProcAddress("glUniform1f");
  }
  if ( !this->p_glUniform1fv
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glUniform1fv = (void (__fastcall *)(int, int, const float *))wglGetProcAddress("glUniform1fv");
  }
  if ( !this->p_glUniform1i
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glUniform1i = (void (__fastcall *)(int, int))wglGetProcAddress("glUniform1i");
  }
  if ( !this->p_glUniform1iv
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glUniform1iv = (void (__fastcall *)(int, int, const int *))wglGetProcAddress("glUniform1iv");
  }
  if ( !this->p_glUniform2f
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glUniform2f = (void (__fastcall *)(int, float, float))wglGetProcAddress("glUniform2f");
  }
  if ( !this->p_glUniform2fv
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glUniform2fv = (void (__fastcall *)(int, int, const float *))wglGetProcAddress("glUniform2fv");
  }
  if ( !this->p_glUniform3fv
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glUniform3fv = (void (__fastcall *)(int, int, const float *))wglGetProcAddress("glUniform3fv");
  }
  if ( !this->p_glUniform4fv
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glUniform4fv = (void (__fastcall *)(int, int, const float *))wglGetProcAddress("glUniform4fv");
  }
  if ( !this->p_glUniformMatrix4fv
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glUniformMatrix4fv = (void (__fastcall *)(int, int, unsigned __int8, const float *))wglGetProcAddress("glUniformMatrix4fv");
  }
  if ( !this->p_glUnmapBuffer )
  {
    if ( this->CheckGLVersion(this, 1u, 5u) )
      this->p_glUnmapBuffer = (unsigned __int8 (__fastcall *)(unsigned int))wglGetProcAddress("glUnmapBuffer");
    if ( !this->p_glUnmapBuffer && this->CheckExtension(this, SF_GL_ARB_vertex_buffer_object) )
      this->p_glUnmapBuffer = (unsigned __int8 (__fastcall *)(unsigned int))wglGetProcAddress("glUnmapBufferARB");
  }
  if ( !this->p_glUseProgram
    && ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
  {
    this->p_glUseProgram = (void (__fastcall *)(unsigned int))wglGetProcAddress("glUseProgram");
  }
  if ( !this->p_glUseProgramStages )
  {
    if ( this->CheckGLVersion(this, 4u, 1u) )
      this->p_glUseProgramStages = (void (__fastcall *)(unsigned int, unsigned int, unsigned int))wglGetProcAddress("glUseProgramStages");
    if ( !this->p_glUseProgramStages )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_separate_shader_objects) )
        this->p_glUseProgramStages = (void (__fastcall *)(unsigned int, unsigned int, unsigned int))wglGetProcAddress("glUseProgramStages");
      if ( !this->p_glUseProgramStages && this->CheckExtension(this, SF_GL_EXT_separate_shader_objects) )
        this->p_glUseProgramStages = (void (__fastcall *)(unsigned int, unsigned int, unsigned int))wglGetProcAddress("glUseProgramStagesEXT");
    }
  }
  if ( !this->p_glVertexAttribPointer )
  {
    if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(
           this,
           2i64) )
    {
      this->p_glVertexAttribPointer = (void (__fastcall *)(unsigned int, int, unsigned int, unsigned __int8, int, const void *))wglGetProcAddress("glVertexAttribPointer");
    }
    if ( !this->p_glVertexAttribPointer )
    {
      if ( this->CheckExtension(this, SF_GL_ARB_vertex_program) )
        this->p_glVertexAttribPointer = (void (__fastcall *)(unsigned int, int, unsigned int, unsigned __int8, int, const void *))wglGetProcAddress("glVertexAttribPointerARB");
      if ( !this->p_glVertexAttribPointer && this->CheckExtension(this, SF_GL_NV_vertex_program) )
        this->p_glVertexAttribPointer = (void (__fastcall *)(unsigned int, int, unsigned int, unsigned __int8, int, const void *))wglGetProcAddress("glVertexAttribPointerNV");
    }
  }
  if ( !this->p_glViewport && this->CheckGLVersion(this, 1u, 1u) )
    this->p_glViewport = (void (__fastcall *)(int, int, int, int))glViewport;
  this->p_glActiveTexture = glsActiveTexture;
  this->p_glBindTexture = glsBindTexture;
  this->p_glGenTextures = glsGenTextures;
  this->p_glDeleteTextures = (void (__fastcall *)(int, const unsigned int *))glsDeleteTextures;
  this->p_glBlendFunc = glsBlendFunc;
  this->p_glBlendFuncSeparate = glsBlendFuncSeparate;
  this->p_glDepthFunc = glsDepthFunc;
  this->p_glBlendEquation = glsBlendEquationOES;
  this->p_glBlendEquationSeparate = glsBlendEquationSeparate;
  this->p_glScissor = glsScissor;
  this->p_glDepthMask = glsDepthMask;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glActiveTexture(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glActiveTexture)(unsigned int); // rax

  p_glActiveTexture = this->p_glActiveTexture;
  if ( p_glActiveTexture )
    p_glActiveTexture(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glAttachShader(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1)
{
  void (__fastcall *p_glAttachShader)(unsigned int, unsigned int); // rax

  p_glAttachShader = this->p_glAttachShader;
  if ( p_glAttachShader )
    p_glAttachShader(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBindAttribLocation(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        const char *a2)
{
  void (__fastcall *p_glBindAttribLocation)(unsigned int, unsigned int, const char *); // rax

  p_glBindAttribLocation = this->p_glBindAttribLocation;
  if ( p_glBindAttribLocation )
    p_glBindAttribLocation(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBindBuffer(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1)
{
  void (__fastcall *p_glBindBuffer)(unsigned int, unsigned int); // rax

  p_glBindBuffer = this->p_glBindBuffer;
  if ( p_glBindBuffer )
    p_glBindBuffer(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBindFragDataLocation(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        const char *a2)
{
  void (__fastcall *p_glBindFragDataLocation)(unsigned int, unsigned int, const char *); // rax

  p_glBindFragDataLocation = this->p_glBindFragDataLocation;
  if ( p_glBindFragDataLocation )
    p_glBindFragDataLocation(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBindFramebuffer(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1)
{
  void (__fastcall *p_glBindFramebuffer)(unsigned int, unsigned int); // rax

  p_glBindFramebuffer = this->p_glBindFramebuffer;
  if ( p_glBindFramebuffer )
    p_glBindFramebuffer(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBindProgramPipeline(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glBindProgramPipeline)(unsigned int); // rax

  p_glBindProgramPipeline = this->p_glBindProgramPipeline;
  if ( p_glBindProgramPipeline )
    p_glBindProgramPipeline(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBindRenderbuffer(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1)
{
  void (__fastcall *p_glBindRenderbuffer)(unsigned int, unsigned int); // rax

  p_glBindRenderbuffer = this->p_glBindRenderbuffer;
  if ( p_glBindRenderbuffer )
    p_glBindRenderbuffer(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBindTexture(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1)
{
  void (__fastcall *p_glBindTexture)(unsigned int, unsigned int); // rax

  p_glBindTexture = this->p_glBindTexture;
  if ( p_glBindTexture )
    p_glBindTexture(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBindVertexArray(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glBindVertexArray)(unsigned int); // rax

  p_glBindVertexArray = this->p_glBindVertexArray;
  if ( p_glBindVertexArray )
    p_glBindVertexArray(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBlendEquation(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glBlendEquation)(unsigned int); // rax

  p_glBlendEquation = this->p_glBlendEquation;
  if ( p_glBlendEquation )
    p_glBlendEquation(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBlendEquationSeparate(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1)
{
  void (__fastcall *p_glBlendEquationSeparate)(unsigned int, unsigned int); // rax

  p_glBlendEquationSeparate = this->p_glBlendEquationSeparate;
  if ( p_glBlendEquationSeparate )
    p_glBlendEquationSeparate(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBlendFunc(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1)
{
  void (__fastcall *p_glBlendFunc)(unsigned int, unsigned int); // rax

  p_glBlendFunc = this->p_glBlendFunc;
  if ( p_glBlendFunc )
    p_glBlendFunc(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBlendFuncSeparate(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        unsigned int a3)
{
  void (__fastcall *p_glBlendFuncSeparate)(unsigned int, unsigned int, unsigned int, unsigned int); // rax

  p_glBlendFuncSeparate = this->p_glBlendFuncSeparate;
  if ( p_glBlendFuncSeparate )
    p_glBlendFuncSeparate(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBufferData(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        __int64 a1,
        const void *a2,
        unsigned int a3)
{
  void (__fastcall *p_glBufferData)(unsigned int, __int64, const void *, unsigned int); // rax

  p_glBufferData = this->p_glBufferData;
  if ( p_glBufferData )
    p_glBufferData(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glBufferSubData(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        __int64 a1,
        __int64 a2,
        const void *a3)
{
  void (__fastcall *p_glBufferSubData)(unsigned int, __int64, __int64, const void *); // rax

  p_glBufferSubData = this->p_glBufferSubData;
  if ( p_glBufferSubData )
    p_glBufferSubData(a0, a1, a2, a3);
}

unsigned int (__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glCheckFramebufferStatus(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0))(unsigned int)
{
  unsigned int (__fastcall *result)(unsigned int); // rax

  result = this->p_glCheckFramebufferStatus;
  if ( result )
    return (unsigned int (__fastcall *)(unsigned int))((__int64 (__fastcall *)(_QWORD))result)(a0);
  return result;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glClear(Scaleform::Render::GL::GLImmediate *this, unsigned int a0)
{
  void (__fastcall *p_glClear)(unsigned int); // rax

  p_glClear = this->p_glClear;
  if ( p_glClear )
    p_glClear(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glClearColor(
        Scaleform::Render::GL::GLImmediate *this,
        float a0,
        float a1,
        float a2)
{
  void (*p_glClearColor)(void); // rax

  p_glClearColor = (void (*)(void))this->p_glClearColor;
  if ( p_glClearColor )
    p_glClearColor();
}

unsigned int (__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glClientWaitSync(
        Scaleform::Render::GL::GLImmediate *this,
        struct __GLsync *a0,
        unsigned int a1,
        unsigned __int64 a2))(struct __GLsync *, unsigned int, unsigned __int64)
{
  unsigned int (__fastcall *result)(struct __GLsync *, unsigned int, unsigned __int64); // rax

  result = this->p_glClientWaitSync;
  if ( result )
    return (unsigned int (__fastcall *)(struct __GLsync *, unsigned int, unsigned __int64))((__int64 (__fastcall *)(struct __GLsync *, _QWORD, unsigned __int64))result)(
                                                                                             a0,
                                                                                             a1,
                                                                                             a2);
  return result;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glColorMask(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned __int8 a0,
        unsigned __int8 a1,
        unsigned __int8 a2,
        unsigned __int8 a3)
{
  void (__fastcall *p_glColorMask)(unsigned __int8, unsigned __int8, unsigned __int8, unsigned __int8); // rax

  p_glColorMask = this->p_glColorMask;
  if ( p_glColorMask )
    p_glColorMask(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glCompileShader(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glCompileShader)(unsigned int); // rax

  p_glCompileShader = this->p_glCompileShader;
  if ( p_glCompileShader )
    p_glCompileShader(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glCompressedTexImage2D(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        int a3,
        int a4,
        int a5,
        int a6,
        const void *a7)
{
  void (__fastcall *p_glCompressedTexImage2D)(unsigned int, int, unsigned int, int, int, int, int, const void *); // r10

  p_glCompressedTexImage2D = this->p_glCompressedTexImage2D;
  if ( p_glCompressedTexImage2D )
    p_glCompressedTexImage2D(a0, a1, a2, a3, a4, a5, a6, a7);
}

__int64 (*__fastcall Scaleform::Render::GL::GLImmediate::glCreateProgram(
        Scaleform::Render::GL::GLImmediate *this))(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))this->p_glCreateProgram;
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}

unsigned int (__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glCreateShader(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0))(unsigned int)
{
  unsigned int (__fastcall *result)(unsigned int); // rax

  result = this->p_glCreateShader;
  if ( result )
    return (unsigned int (__fastcall *)(unsigned int))((__int64 (__fastcall *)(_QWORD))result)(a0);
  return result;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDebugMessageCallback(
        Scaleform::Render::GL::GLImmediate *this,
        void (__fastcall *a0)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *),
        const void *a1)
{
  void (__fastcall *p_glDebugMessageCallback)(void (__fastcall *)(unsigned int, unsigned int, unsigned int, unsigned int, int, const char *, const void *), const void *); // rax

  p_glDebugMessageCallback = this->p_glDebugMessageCallback;
  if ( p_glDebugMessageCallback )
    p_glDebugMessageCallback(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDebugMessageControl(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        int a3,
        const unsigned int *a4,
        unsigned __int8 a5)
{
  void (__fastcall *p_glDebugMessageControl)(unsigned int, unsigned int, unsigned int, int, const unsigned int *, unsigned __int8); // r10

  p_glDebugMessageControl = this->p_glDebugMessageControl;
  if ( p_glDebugMessageControl )
    p_glDebugMessageControl(a0, a1, a2, a3, a4, a5);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDeleteBuffers(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        const unsigned int *a1)
{
  void (__fastcall *p_glDeleteBuffers)(int, const unsigned int *); // rax

  p_glDeleteBuffers = this->p_glDeleteBuffers;
  if ( p_glDeleteBuffers )
    p_glDeleteBuffers(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDeleteFramebuffers(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        const unsigned int *a1)
{
  void (__fastcall *p_glDeleteFramebuffers)(int, const unsigned int *); // rax

  p_glDeleteFramebuffers = this->p_glDeleteFramebuffers;
  if ( p_glDeleteFramebuffers )
    p_glDeleteFramebuffers(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDeleteProgram(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glDeleteProgram)(unsigned int); // rax

  p_glDeleteProgram = this->p_glDeleteProgram;
  if ( p_glDeleteProgram )
    p_glDeleteProgram(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDeleteProgramPipelines(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        const unsigned int *a1)
{
  void (__fastcall *p_glDeleteProgramPipelines)(int, const unsigned int *); // rax

  p_glDeleteProgramPipelines = this->p_glDeleteProgramPipelines;
  if ( p_glDeleteProgramPipelines )
    p_glDeleteProgramPipelines(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDeleteRenderbuffers(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        const unsigned int *a1)
{
  void (__fastcall *p_glDeleteRenderbuffers)(int, const unsigned int *); // rax

  p_glDeleteRenderbuffers = this->p_glDeleteRenderbuffers;
  if ( p_glDeleteRenderbuffers )
    p_glDeleteRenderbuffers(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDeleteShader(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glDeleteShader)(unsigned int); // rax

  p_glDeleteShader = this->p_glDeleteShader;
  if ( p_glDeleteShader )
    p_glDeleteShader(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDeleteSync(
        Scaleform::Render::GL::GLImmediate *this,
        struct __GLsync *a0)
{
  void (__fastcall *p_glDeleteSync)(struct __GLsync *); // rax

  p_glDeleteSync = this->p_glDeleteSync;
  if ( p_glDeleteSync )
    p_glDeleteSync(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDeleteTextures(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        const unsigned int *a1)
{
  void (__fastcall *p_glDeleteTextures)(int, const unsigned int *); // rax

  p_glDeleteTextures = this->p_glDeleteTextures;
  if ( p_glDeleteTextures )
    p_glDeleteTextures(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDeleteVertexArrays(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        const unsigned int *a1)
{
  void (__fastcall *p_glDeleteVertexArrays)(int, const unsigned int *); // rax

  p_glDeleteVertexArrays = this->p_glDeleteVertexArrays;
  if ( p_glDeleteVertexArrays )
    p_glDeleteVertexArrays(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDepthFunc(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glDepthFunc)(unsigned int); // rax

  p_glDepthFunc = this->p_glDepthFunc;
  if ( p_glDepthFunc )
    p_glDepthFunc(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDepthMask(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned __int8 a0)
{
  void (__fastcall *p_glDepthMask)(unsigned __int8); // rax

  p_glDepthMask = this->p_glDepthMask;
  if ( p_glDepthMask )
    p_glDepthMask(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDisable(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glDisable)(unsigned int); // rax

  p_glDisable = this->p_glDisable;
  if ( p_glDisable )
    p_glDisable(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDisableVertexAttribArray(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glDisableVertexAttribArray)(unsigned int); // rax

  p_glDisableVertexAttribArray = this->p_glDisableVertexAttribArray;
  if ( p_glDisableVertexAttribArray )
    p_glDisableVertexAttribArray(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDrawArrays(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        int a2)
{
  void (__fastcall *p_glDrawArrays)(unsigned int, int, int); // rax

  p_glDrawArrays = this->p_glDrawArrays;
  if ( p_glDrawArrays )
    p_glDrawArrays(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDrawElements(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        const void *a3)
{
  void (__fastcall *p_glDrawElements)(unsigned int, int, unsigned int, const void *); // rax

  p_glDrawElements = this->p_glDrawElements;
  if ( p_glDrawElements )
    p_glDrawElements(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glDrawElementsInstanced(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        const void *a3,
        int a4)
{
  void (__fastcall *p_glDrawElementsInstanced)(unsigned int, int, unsigned int, const void *, int); // r10

  p_glDrawElementsInstanced = this->p_glDrawElementsInstanced;
  if ( p_glDrawElementsInstanced )
    p_glDrawElementsInstanced(a0, a1, a2, a3, a4);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glEnable(Scaleform::Render::GL::GLImmediate *this, unsigned int a0)
{
  void (__fastcall *p_glEnable)(unsigned int); // rax

  p_glEnable = this->p_glEnable;
  if ( p_glEnable )
    p_glEnable(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glEnableVertexAttribArray(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glEnableVertexAttribArray)(unsigned int); // rax

  p_glEnableVertexAttribArray = this->p_glEnableVertexAttribArray;
  if ( p_glEnableVertexAttribArray )
    p_glEnableVertexAttribArray(a0);
}

struct __GLsync *__fastcall Scaleform::Render::GL::GLImmediate::glFenceSync(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1)
{
  struct __GLsync *result; // rax

  result = (struct __GLsync *)this->p_glFenceSync;
  if ( result )
    return (struct __GLsync *)((__int64 (__fastcall *)(_QWORD, _QWORD))result)(a0, a1);
  return result;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glFlush(Scaleform::Render::GL::GLImmediate *this)
{
  void (*p_glFlush)(void); // rax

  p_glFlush = this->p_glFlush;
  if ( p_glFlush )
    p_glFlush();
}

void __fastcall Scaleform::Render::GL::GLImmediate::glFlushMappedBufferRange(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        __int64 a1,
        __int64 a2)
{
  void (__fastcall *p_glFlushMappedBufferRange)(unsigned int, __int64, __int64); // rax

  p_glFlushMappedBufferRange = this->p_glFlushMappedBufferRange;
  if ( p_glFlushMappedBufferRange )
    p_glFlushMappedBufferRange(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glFramebufferRenderbuffer(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        unsigned int a3)
{
  void (__fastcall *p_glFramebufferRenderbuffer)(unsigned int, unsigned int, unsigned int, unsigned int); // rax

  p_glFramebufferRenderbuffer = this->p_glFramebufferRenderbuffer;
  if ( p_glFramebufferRenderbuffer )
    p_glFramebufferRenderbuffer(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glFramebufferTexture2D(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        unsigned int a3,
        int a4)
{
  void (__fastcall *p_glFramebufferTexture2D)(unsigned int, unsigned int, unsigned int, unsigned int, int); // r10

  p_glFramebufferTexture2D = this->p_glFramebufferTexture2D;
  if ( p_glFramebufferTexture2D )
    p_glFramebufferTexture2D(a0, a1, a2, a3, a4);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGenBuffers(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        unsigned int *a1)
{
  void (__fastcall *p_glGenBuffers)(int, unsigned int *); // rax

  p_glGenBuffers = this->p_glGenBuffers;
  if ( p_glGenBuffers )
    p_glGenBuffers(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGenFramebuffers(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        unsigned int *a1)
{
  void (__fastcall *p_glGenFramebuffers)(int, unsigned int *); // rax

  p_glGenFramebuffers = this->p_glGenFramebuffers;
  if ( p_glGenFramebuffers )
    p_glGenFramebuffers(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGenProgramPipelines(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        unsigned int *a1)
{
  void (__fastcall *p_glGenProgramPipelines)(int, unsigned int *); // rax

  p_glGenProgramPipelines = this->p_glGenProgramPipelines;
  if ( p_glGenProgramPipelines )
    p_glGenProgramPipelines(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGenRenderbuffers(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        unsigned int *a1)
{
  void (__fastcall *p_glGenRenderbuffers)(int, unsigned int *); // rax

  p_glGenRenderbuffers = this->p_glGenRenderbuffers;
  if ( p_glGenRenderbuffers )
    p_glGenRenderbuffers(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGenTextures(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        unsigned int *a1)
{
  void (__fastcall *p_glGenTextures)(int, unsigned int *); // rax

  p_glGenTextures = this->p_glGenTextures;
  if ( p_glGenTextures )
    p_glGenTextures(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGenVertexArrays(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        unsigned int *a1)
{
  void (__fastcall *p_glGenVertexArrays)(int, unsigned int *); // rax

  p_glGenVertexArrays = this->p_glGenVertexArrays;
  if ( p_glGenVertexArrays )
    p_glGenVertexArrays(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGenerateMipmap(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glGenerateMipmap)(unsigned int); // rax

  p_glGenerateMipmap = this->p_glGenerateMipmap;
  if ( p_glGenerateMipmap )
    p_glGenerateMipmap(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetActiveUniform(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        int a2,
        int *a3,
        int *a4,
        unsigned int *a5,
        char *a6)
{
  void (__fastcall *p_glGetActiveUniform)(unsigned int, unsigned int, int, int *, int *, unsigned int *, char *); // r10

  p_glGetActiveUniform = this->p_glGetActiveUniform;
  if ( p_glGetActiveUniform )
    p_glGetActiveUniform(a0, a1, a2, a3, a4, a5, a6);
}

__int64 (*__fastcall Scaleform::Render::GL::GLImmediate::glGetError(Scaleform::Render::GL::GLImmediate *this))(void)
{
  __int64 (*result)(void); // rax

  result = (__int64 (*)(void))this->p_glGetError;
  if ( result )
    return (__int64 (*)(void))result();
  return result;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetFloatv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        float *a1)
{
  void (__fastcall *p_glGetFloatv)(unsigned int, float *); // rax

  p_glGetFloatv = this->p_glGetFloatv;
  if ( p_glGetFloatv )
    p_glGetFloatv(a0, a1);
}

int (__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glGetFragDataLocation(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        const char *a1))(unsigned int, const char *)
{
  int (__fastcall *result)(unsigned int, const char *); // rax

  result = this->p_glGetFragDataLocation;
  if ( result )
    return (int (__fastcall *)(unsigned int, const char *))((__int64 (__fastcall *)(_QWORD, const char *))result)(
                                                             a0,
                                                             a1);
  return result;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetFramebufferAttachmentParameteriv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2,
        int *a3)
{
  void (__fastcall *p_glGetFramebufferAttachmentParameteriv)(unsigned int, unsigned int, unsigned int, int *); // rax

  p_glGetFramebufferAttachmentParameteriv = this->p_glGetFramebufferAttachmentParameteriv;
  if ( p_glGetFramebufferAttachmentParameteriv )
    p_glGetFramebufferAttachmentParameteriv(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetIntegerv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int *a1)
{
  void (__fastcall *p_glGetIntegerv)(unsigned int, int *); // rax

  p_glGetIntegerv = this->p_glGetIntegerv;
  if ( p_glGetIntegerv )
    p_glGetIntegerv(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetProgramBinary(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        int *a2,
        unsigned int *a3,
        void *a4)
{
  void (__fastcall *p_glGetProgramBinary)(unsigned int, int, int *, unsigned int *, void *); // r10

  p_glGetProgramBinary = this->p_glGetProgramBinary;
  if ( p_glGetProgramBinary )
    p_glGetProgramBinary(a0, a1, a2, a3, a4);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetProgramInfoLog(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        int *a2,
        char *a3)
{
  void (__fastcall *p_glGetProgramInfoLog)(unsigned int, int, int *, char *); // rax

  p_glGetProgramInfoLog = this->p_glGetProgramInfoLog;
  if ( p_glGetProgramInfoLog )
    p_glGetProgramInfoLog(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetProgramiv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        int *a2)
{
  void (__fastcall *p_glGetProgramiv)(unsigned int, unsigned int, int *); // rax

  p_glGetProgramiv = this->p_glGetProgramiv;
  if ( p_glGetProgramiv )
    p_glGetProgramiv(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetRenderbufferParameteriv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        int *a2)
{
  void (__fastcall *p_glGetRenderbufferParameteriv)(unsigned int, unsigned int, int *); // rax

  p_glGetRenderbufferParameteriv = this->p_glGetRenderbufferParameteriv;
  if ( p_glGetRenderbufferParameteriv )
    p_glGetRenderbufferParameteriv(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetShaderInfoLog(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        int *a2,
        char *a3)
{
  void (__fastcall *p_glGetShaderInfoLog)(unsigned int, int, int *, char *); // rax

  p_glGetShaderInfoLog = this->p_glGetShaderInfoLog;
  if ( p_glGetShaderInfoLog )
    p_glGetShaderInfoLog(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetShaderiv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        int *a2)
{
  void (__fastcall *p_glGetShaderiv)(unsigned int, unsigned int, int *); // rax

  p_glGetShaderiv = this->p_glGetShaderiv;
  if ( p_glGetShaderiv )
    p_glGetShaderiv(a0, a1, a2);
}

const unsigned __int8 *(__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glGetString(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0))(unsigned int)
{
  const unsigned __int8 *(__fastcall *result)(unsigned int); // rax

  result = this->p_glGetString;
  if ( result )
    return (const unsigned __int8 *(__fastcall *)(unsigned int))result(a0);
  return result;
}

const unsigned __int8 *(__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glGetStringi(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1))(unsigned int, unsigned int)
{
  const unsigned __int8 *(__fastcall *result)(unsigned int, unsigned int); // rax

  result = this->p_glGetStringi;
  if ( result )
    return (const unsigned __int8 *(__fastcall *)(unsigned int, unsigned int))result(a0, a1);
  return result;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetSynciv(
        Scaleform::Render::GL::GLImmediate *this,
        struct __GLsync *a0,
        unsigned int a1,
        int a2,
        int *a3,
        int *a4)
{
  void (__fastcall *p_glGetSynciv)(struct __GLsync *, unsigned int, int, int *, int *); // r10

  p_glGetSynciv = this->p_glGetSynciv;
  if ( p_glGetSynciv )
    p_glGetSynciv(a0, a1, a2, a3, a4);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetTexImage(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        unsigned int a3,
        void *a4)
{
  void (__fastcall *p_glGetTexImage)(unsigned int, int, unsigned int, unsigned int, void *); // r10

  p_glGetTexImage = this->p_glGetTexImage;
  if ( p_glGetTexImage )
    p_glGetTexImage(a0, a1, a2, a3, a4);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetTexLevelParameteriv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        int *a3)
{
  void (__fastcall *p_glGetTexLevelParameteriv)(unsigned int, int, unsigned int, int *); // rax

  p_glGetTexLevelParameteriv = this->p_glGetTexLevelParameteriv;
  if ( p_glGetTexLevelParameteriv )
    p_glGetTexLevelParameteriv(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glGetTexParameteriv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        int *a2)
{
  void (__fastcall *p_glGetTexParameteriv)(unsigned int, unsigned int, int *); // rax

  p_glGetTexParameteriv = this->p_glGetTexParameteriv;
  if ( p_glGetTexParameteriv )
    p_glGetTexParameteriv(a0, a1, a2);
}

int (__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glGetUniformLocation(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        const char *a1))(unsigned int, const char *)
{
  int (__fastcall *result)(unsigned int, const char *); // rax

  result = this->p_glGetUniformLocation;
  if ( result )
    return (int (__fastcall *)(unsigned int, const char *))((__int64 (__fastcall *)(_QWORD, const char *))result)(
                                                             a0,
                                                             a1);
  return result;
}

unsigned __int8 (__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glIsFramebuffer(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0))(unsigned int)
{
  unsigned __int8 (__fastcall *result)(unsigned int); // rax

  result = this->p_glIsFramebuffer;
  if ( result )
    return (unsigned __int8 (__fastcall *)(unsigned int))((__int64 (__fastcall *)(_QWORD))result)(a0);
  return result;
}

unsigned __int8 (__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glIsProgram(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0))(unsigned int)
{
  unsigned __int8 (__fastcall *result)(unsigned int); // rax

  result = this->p_glIsProgram;
  if ( result )
    return (unsigned __int8 (__fastcall *)(unsigned int))((__int64 (__fastcall *)(_QWORD))result)(a0);
  return result;
}

unsigned __int8 (__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glIsRenderbuffer(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0))(unsigned int)
{
  unsigned __int8 (__fastcall *result)(unsigned int); // rax

  result = this->p_glIsRenderbuffer;
  if ( result )
    return (unsigned __int8 (__fastcall *)(unsigned int))((__int64 (__fastcall *)(_QWORD))result)(a0);
  return result;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glLinkProgram(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glLinkProgram)(unsigned int); // rax

  p_glLinkProgram = this->p_glLinkProgram;
  if ( p_glLinkProgram )
    p_glLinkProgram(a0);
}

void *(__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glMapBuffer(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1))(unsigned int, unsigned int)
{
  void *(__fastcall *result)(unsigned int, unsigned int); // rax

  result = this->p_glMapBuffer;
  if ( result )
    return (void *(__fastcall *)(unsigned int, unsigned int))result(a0, a1);
  return result;
}

void *(__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glMapBufferRange(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        __int64 a1,
        __int64 a2,
        unsigned int a3))(unsigned int, __int64, __int64, unsigned int)
{
  void *(__fastcall *result)(unsigned int, __int64, __int64, unsigned int); // rax

  result = this->p_glMapBufferRange;
  if ( result )
    return (void *(__fastcall *)(unsigned int, __int64, __int64, unsigned int))result(a0, a1, a2, a3);
  return result;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glPixelStorei(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1)
{
  void (__fastcall *p_glPixelStorei)(unsigned int, int); // rax

  p_glPixelStorei = this->p_glPixelStorei;
  if ( p_glPixelStorei )
    p_glPixelStorei(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glPolygonMode(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1)
{
  void (__fastcall *p_glPolygonMode)(unsigned int, unsigned int); // rax

  p_glPolygonMode = this->p_glPolygonMode;
  if ( p_glPolygonMode )
    p_glPolygonMode(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glPopGroupMarker(Scaleform::Render::GL::GLImmediate *this)
{
  void (*p_glPopGroupMarker)(void); // rax

  p_glPopGroupMarker = this->p_glPopGroupMarker;
  if ( p_glPopGroupMarker )
    p_glPopGroupMarker();
}

void __fastcall Scaleform::Render::GL::GLImmediate::glProgramBinary(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        const void *a2,
        int a3)
{
  void (__fastcall *p_glProgramBinary)(unsigned int, unsigned int, const void *, int); // rax

  p_glProgramBinary = this->p_glProgramBinary;
  if ( p_glProgramBinary )
    p_glProgramBinary(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glProgramParameteri(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        int a2)
{
  void (__fastcall *p_glProgramParameteri)(unsigned int, unsigned int, int); // rax

  p_glProgramParameteri = this->p_glProgramParameteri;
  if ( p_glProgramParameteri )
    p_glProgramParameteri(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glProgramUniform1fv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        int a2,
        const float *a3)
{
  void (__fastcall *p_glProgramUniform1fv)(unsigned int, int, int, const float *); // rax

  p_glProgramUniform1fv = this->p_glProgramUniform1fv;
  if ( p_glProgramUniform1fv )
    p_glProgramUniform1fv(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glProgramUniform1iv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        int a2,
        const int *a3)
{
  void (__fastcall *p_glProgramUniform1iv)(unsigned int, int, int, const int *); // rax

  p_glProgramUniform1iv = this->p_glProgramUniform1iv;
  if ( p_glProgramUniform1iv )
    p_glProgramUniform1iv(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glProgramUniform2fv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        int a2,
        const float *a3)
{
  void (__fastcall *p_glProgramUniform2fv)(unsigned int, int, int, const float *); // rax

  p_glProgramUniform2fv = this->p_glProgramUniform2fv;
  if ( p_glProgramUniform2fv )
    p_glProgramUniform2fv(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glProgramUniform3fv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        int a2,
        const float *a3)
{
  void (__fastcall *p_glProgramUniform3fv)(unsigned int, int, int, const float *); // rax

  p_glProgramUniform3fv = this->p_glProgramUniform3fv;
  if ( p_glProgramUniform3fv )
    p_glProgramUniform3fv(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glProgramUniform4fv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        int a2,
        const float *a3)
{
  void (__fastcall *p_glProgramUniform4fv)(unsigned int, int, int, const float *); // rax

  p_glProgramUniform4fv = this->p_glProgramUniform4fv;
  if ( p_glProgramUniform4fv )
    p_glProgramUniform4fv(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glProgramUniformMatrix4fv(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        int a2,
        unsigned __int8 a3,
        const float *a4)
{
  void (__fastcall *p_glProgramUniformMatrix4fv)(unsigned int, int, int, unsigned __int8, const float *); // r10

  p_glProgramUniformMatrix4fv = this->p_glProgramUniformMatrix4fv;
  if ( p_glProgramUniformMatrix4fv )
    p_glProgramUniformMatrix4fv(a0, a1, a2, a3, a4);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glPushGroupMarker(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        const char *a1)
{
  void (__fastcall *p_glPushGroupMarker)(int, const char *); // rax

  p_glPushGroupMarker = this->p_glPushGroupMarker;
  if ( p_glPushGroupMarker )
    p_glPushGroupMarker(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glReadPixels(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        int a1,
        int a2,
        int a3,
        unsigned int a4,
        unsigned int a5,
        void *a6)
{
  void (__fastcall *p_glReadPixels)(int, int, int, int, unsigned int, unsigned int, void *); // r10

  p_glReadPixels = this->p_glReadPixels;
  if ( p_glReadPixels )
    p_glReadPixels(a0, a1, a2, a3, a4, a5, a6);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glReleaseShaderCompiler(Scaleform::Render::GL::GLImmediate *this)
{
  void (*p_glReleaseShaderCompiler)(void); // rax

  p_glReleaseShaderCompiler = this->p_glReleaseShaderCompiler;
  if ( p_glReleaseShaderCompiler )
    p_glReleaseShaderCompiler();
}

void __fastcall Scaleform::Render::GL::GLImmediate::glRenderbufferStorage(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        int a2,
        int a3)
{
  void (__fastcall *p_glRenderbufferStorage)(unsigned int, unsigned int, int, int); // rax

  p_glRenderbufferStorage = this->p_glRenderbufferStorage;
  if ( p_glRenderbufferStorage )
    p_glRenderbufferStorage(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glScissor(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        int a1,
        int a2,
        int a3)
{
  void (__fastcall *p_glScissor)(int, int, int, int); // rax

  p_glScissor = this->p_glScissor;
  if ( p_glScissor )
    p_glScissor(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glShaderSource(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        const char *const *a2,
        const int *a3)
{
  void (__fastcall *p_glShaderSource)(unsigned int, int, const char *const *, const int *); // rax

  p_glShaderSource = this->p_glShaderSource;
  if ( p_glShaderSource )
    p_glShaderSource(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glStencilFunc(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        unsigned int a2)
{
  void (__fastcall *p_glStencilFunc)(unsigned int, int, unsigned int); // rax

  p_glStencilFunc = this->p_glStencilFunc;
  if ( p_glStencilFunc )
    p_glStencilFunc(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glStencilMask(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glStencilMask)(unsigned int); // rax

  p_glStencilMask = this->p_glStencilMask;
  if ( p_glStencilMask )
    p_glStencilMask(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glStencilOp(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2)
{
  void (__fastcall *p_glStencilOp)(unsigned int, unsigned int, unsigned int); // rax

  p_glStencilOp = this->p_glStencilOp;
  if ( p_glStencilOp )
    p_glStencilOp(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glStringMarker(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        const void *a1)
{
  void (__fastcall *p_glStringMarker)(int, const void *); // rax

  p_glStringMarker = this->p_glStringMarker;
  if ( p_glStringMarker )
    p_glStringMarker(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glTexImage2D(
        Scaleform::Render::GL::GLImmediate *this,
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
  void (__fastcall *p_glTexImage2D)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, const void *); // r10

  p_glTexImage2D = this->p_glTexImage2D;
  if ( p_glTexImage2D )
    p_glTexImage2D(a0, a1, a2, a3, a4, a5, a6, a7, a8);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glTexParameteri(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        int a2)
{
  void (__fastcall *p_glTexParameteri)(unsigned int, unsigned int, int); // rax

  p_glTexParameteri = this->p_glTexParameteri;
  if ( p_glTexParameteri )
    p_glTexParameteri(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glTexSubImage2D(
        Scaleform::Render::GL::GLImmediate *this,
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
  void (__fastcall *p_glTexSubImage2D)(unsigned int, int, int, int, int, int, unsigned int, unsigned int, const void *); // r10

  p_glTexSubImage2D = this->p_glTexSubImage2D;
  if ( p_glTexSubImage2D )
    p_glTexSubImage2D(a0, a1, a2, a3, a4, a5, a6, a7, a8);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUniform1f(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        float a1)
{
  void (__fastcall *p_glUniform1f)(int, float); // rax

  p_glUniform1f = this->p_glUniform1f;
  if ( p_glUniform1f )
    ((void (__fastcall *)(_QWORD))p_glUniform1f)((unsigned int)a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUniform1fv(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        int a1,
        const float *a2)
{
  void (__fastcall *p_glUniform1fv)(int, int, const float *); // rax

  p_glUniform1fv = this->p_glUniform1fv;
  if ( p_glUniform1fv )
    p_glUniform1fv(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUniform1i(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        int a1)
{
  void (__fastcall *p_glUniform1i)(int, int); // rax

  p_glUniform1i = this->p_glUniform1i;
  if ( p_glUniform1i )
    p_glUniform1i(a0, a1);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUniform1iv(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        int a1,
        const int *a2)
{
  void (__fastcall *p_glUniform1iv)(int, int, const int *); // rax

  p_glUniform1iv = this->p_glUniform1iv;
  if ( p_glUniform1iv )
    p_glUniform1iv(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUniform2f(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        float a1,
        float a2)
{
  void (__fastcall *p_glUniform2f)(int, float, float); // rax

  p_glUniform2f = this->p_glUniform2f;
  if ( p_glUniform2f )
    ((void (__fastcall *)(_QWORD))p_glUniform2f)((unsigned int)a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUniform2fv(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        int a1,
        const float *a2)
{
  void (__fastcall *p_glUniform2fv)(int, int, const float *); // rax

  p_glUniform2fv = this->p_glUniform2fv;
  if ( p_glUniform2fv )
    p_glUniform2fv(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUniform3fv(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        int a1,
        const float *a2)
{
  void (__fastcall *p_glUniform3fv)(int, int, const float *); // rax

  p_glUniform3fv = this->p_glUniform3fv;
  if ( p_glUniform3fv )
    p_glUniform3fv(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUniform4fv(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        int a1,
        const float *a2)
{
  void (__fastcall *p_glUniform4fv)(int, int, const float *); // rax

  p_glUniform4fv = this->p_glUniform4fv;
  if ( p_glUniform4fv )
    p_glUniform4fv(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUniformMatrix4fv(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        int a1,
        unsigned __int8 a2,
        const float *a3)
{
  void (__fastcall *p_glUniformMatrix4fv)(int, int, unsigned __int8, const float *); // rax

  p_glUniformMatrix4fv = this->p_glUniformMatrix4fv;
  if ( p_glUniformMatrix4fv )
    p_glUniformMatrix4fv(a0, a1, a2, a3);
}

unsigned __int8 (__fastcall *__fastcall Scaleform::Render::GL::GLImmediate::glUnmapBuffer(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0))(unsigned int)
{
  unsigned __int8 (__fastcall *result)(unsigned int); // rax

  result = this->p_glUnmapBuffer;
  if ( result )
    return (unsigned __int8 (__fastcall *)(unsigned int))((__int64 (__fastcall *)(_QWORD))result)(a0);
  return result;
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUseProgram(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0)
{
  void (__fastcall *p_glUseProgram)(unsigned int); // rax

  p_glUseProgram = this->p_glUseProgram;
  if ( p_glUseProgram )
    p_glUseProgram(a0);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glUseProgramStages(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        unsigned int a1,
        unsigned int a2)
{
  void (__fastcall *p_glUseProgramStages)(unsigned int, unsigned int, unsigned int); // rax

  p_glUseProgramStages = this->p_glUseProgramStages;
  if ( p_glUseProgramStages )
    p_glUseProgramStages(a0, a1, a2);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glVertexAttribPointer(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int a0,
        int a1,
        unsigned int a2,
        unsigned __int8 a3,
        int a4,
        const void *a5)
{
  void (__fastcall *p_glVertexAttribPointer)(unsigned int, int, unsigned int, unsigned __int8, int, const void *); // r10

  p_glVertexAttribPointer = this->p_glVertexAttribPointer;
  if ( p_glVertexAttribPointer )
    p_glVertexAttribPointer(a0, a1, a2, a3, a4, a5);
}

void __fastcall Scaleform::Render::GL::GLImmediate::glViewport(
        Scaleform::Render::GL::GLImmediate *this,
        int a0,
        int a1,
        int a2,
        int a3)
{
  void (__fastcall *p_glViewport)(int, int, int, int); // rax

  p_glViewport = this->p_glViewport;
  if ( p_glViewport )
    p_glViewport(a0, a1, a2, a3);
}

void __fastcall Scaleform::Render::GL::GLImmediate::initExtensions(
        Scaleform::Render::GL::GLImmediate *this,
        unsigned int verbosity)
{
  unsigned int v2; // ebp
  const char *String; // rax
  unsigned int v5; // er13
  const char *v6; // rax
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r12
  unsigned __int64 v9; // r15
  __int64 Length; // rbx
  void *v11; // rbx
  const char *v12; // rax
  char *v13; // rbx
  __int64 v14; // rdi
  unsigned __int64 v15; // r9
  unsigned int v16; // er8
  __int64 v17; // r9
  __int64 v18; // rcx
  const char *v19; // rdx
  unsigned __int8 v20; // al
  int v21; // eax
  bool v22; // zf
  BOOL v23; // eax
  Scaleform::String v24; // [rsp+20h] [rbp-143E8h] BYREF
  Scaleform::Render::GL::StringLess v25; // [rsp+28h] [rbp-143E0h]
  Scaleform::Alg::ArrayAdaptor<char const *> arr; // [rsp+30h] [rbp-143D8h] BYREF
  __int64 v27[610]; // [rsp+40h] [rbp-143C8h] BYREF
  char v28[77952]; // [rsp+1350h] [rbp-130B8h] BYREF

  v2 = 1;
  if ( this->CheckGLVersion(this, 1u, 1u) )
    this->ExtensionSupported[590] = 1;
  if ( this->CheckGLVersion(this, 1u, 2u) )
    this->ExtensionSupported[591] = 1;
  if ( this->CheckGLVersion(this, 1u, 3u) )
    this->ExtensionSupported[592] = 1;
  if ( this->CheckGLVersion(this, 1u, 4u) )
    this->ExtensionSupported[593] = 1;
  if ( this->CheckGLVersion(this, 1u, 5u) )
    this->ExtensionSupported[594] = 1;
  if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 2i64) )
    this->ExtensionSupported[595] = 1;
  if ( this->CheckGLVersion(this, 2u, 1u) )
    this->ExtensionSupported[596] = 1;
  if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 3i64) )
    this->ExtensionSupported[597] = 1;
  if ( this->CheckGLVersion(this, 3u, 1u) )
    this->ExtensionSupported[598] = 1;
  if ( this->CheckGLVersion(this, 3u, 2u) )
    this->ExtensionSupported[599] = 1;
  if ( this->CheckGLVersion(this, 3u, 3u) )
    this->ExtensionSupported[600] = 1;
  if ( ((unsigned __int8 (__fastcall *)(Scaleform::Render::GL::GLImmediate *, __int64))this->CheckGLVersion)(this, 4i64) )
    this->ExtensionSupported[601] = 1;
  if ( this->CheckGLVersion(this, 4u, 1u) )
    this->ExtensionSupported[602] = 1;
  if ( this->CheckGLVersion(this, 4u, 2u) )
    this->ExtensionSupported[603] = 1;
  if ( this->CheckGLVersion(this, 4u, 3u) )
    this->ExtensionSupported[604] = 1;
  if ( this->CheckGLVersion(this, 4u, 4u) )
    this->ExtensionSupported[605] = 1;
  if ( !this->MajorVersion && !this->MinorVersion )
  {
    String = (const char *)glGetString(0x1F02u);
    sscanf_s(String, "%d.%d", &this->MajorVersion, &this->MinorVersion);
  }
  memset(v27, 0, 0x1308ui64);
  memset(v28, 0, sizeof(v28));
  v5 = 0;
  if ( this->CheckGLVersion(this, 3u, 0) )
  {
    if ( !this->p_glGetStringi )
      this->p_glGetStringi = (const unsigned __int8 *(__fastcall *)(unsigned int, unsigned int))wglGetProcAddress("glGetStringi");
    glGetIntegerv(0x821Du, (GLint *)&v24);
    if ( LODWORD(v24.pData) )
    {
      do
      {
        v12 = (const char *)this->glGetStringi(this, 7939i64, v5);
        v13 = &v28[128 * (unsigned __int64)v5];
        v14 = v5;
        v15 = -1i64;
        do
          ++v15;
        while ( v12[v15] );
        strncpy_s(&v28[128 * (unsigned __int64)v5++], 0x80ui64, v12, v15);
        v27[v14] = (__int64)v13;
      }
      while ( v5 < LODWORD(v24.pData) );
    }
  }
  else
  {
    Scaleform::String::String(&v24);
    v6 = (const char *)glGetString(0x1F03u);
    Scaleform::String::operator=(&v24, v6);
    arr.Data = 0i64;
    v7 = 0i64;
    v8 = (v24.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12;
    v9 = *(_QWORD *)(v24.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) & 0x7FFFFFFFFFFFFFFFi64;
    if ( Scaleform::String::GetLength(&v24) > 0 )
    {
      do
      {
        Length = v7;
        if ( v7 >= v9 )
          goto LABEL_43;
        while ( *(_BYTE *)(v8 + Length) != 32 )
        {
          if ( ++Length >= v9 )
            goto LABEL_43;
        }
        if ( Length < 0 )
LABEL_43:
          Length = Scaleform::String::GetLength(&v24);
        strncpy_s(
          &v28[128 * (unsigned __int64)v5],
          0x80ui64,
          (const char *)arr.Data + v8,
          Length - (unsigned __int64)arr.Data);
        v27[v5] = (__int64)&v28[128 * (unsigned __int64)v5];
        v7 = Length + 1;
        ++v5;
        arr.Data = (const char **)(Length + 1);
      }
      while ( Length + 1 < Scaleform::String::GetLength(&v24) );
    }
    v11 = (void *)(v24.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                         (volatile int *)((v24.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                         -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
  }
  arr.Data = (const char **)v27;
  arr.Size = v5;
  Scaleform::Alg::QuickSortSliced<Scaleform::Alg::ArrayAdaptor<char const *>,Scaleform::Render::GL::StringLess>(
    &arr,
    0i64,
    v5,
    v25);
  v16 = 0;
  if ( v5 )
  {
    while ( v2 < 0x261 )
    {
      v17 = v2;
      if ( this->ExtensionSupported[v2] )
      {
        ++v2;
      }
      else
      {
        v18 = v27[v16];
        v19 = &Scaleform::Render::GL::ExtensionStrings[v2][-v18];
        while ( 1 )
        {
          v20 = *(_BYTE *)v18;
          if ( *(_BYTE *)v18 != v19[v18] )
            break;
          ++v18;
          if ( !v20 )
          {
            v21 = 0;
            goto LABEL_62;
          }
        }
        v21 = v20 < (unsigned int)v19[v18] ? -1 : 1;
LABEL_62:
        if ( !v21 )
        {
          v22 = Scaleform::Render::GL::ExtensionsDefinedInGLEXT[v2] == 0;
          this->ExtensionSupported[v2] = 1;
          v23 = this->ExtensionSupported[v2];
          if ( v22 )
            LOBYTE(v23) = 0;
          ++v16;
          ++v2;
          this->ExtensionSupported[v17] = v23;
          goto LABEL_69;
        }
        if ( v21 <= 0 )
          break;
        this->ExtensionSupported[v2++] = 0;
      }
LABEL_69:
      if ( v16 >= v5 )
        return;
    }
    ++v16;
    goto LABEL_69;
  }
}

