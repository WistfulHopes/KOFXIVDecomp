#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_extensions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_graphicsdevice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysfile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shaderhal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stackmempool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "program files (x86)/windows kits/8.1/include/shared/winerror.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "program files (x86)/windows kits/8.1/include/shared/guiddef.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "program files (x86)/windows kits/8.1/include/um/oleauto.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "program files (x86)/windows kits/8.1/include/um/winnt.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_msgformat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_locale.h"
#include "program files (x86)/windows kits/8.1/include/shared/basetsd.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_graphicsdevice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_texture.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_meshcache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"

const char * Scaleform::Render::GL::ShaderHeaderString; // 0x140A23460
unsigned long Scaleform::Render::GL::ShaderInterface::MaxRowsPerInstance; // 0x140A8A7FC
void Scaleform::Render::GL::overwriteArrayCount(char * psrcPtr, const char * arrayString, unsigned long newCount); // 0x1405F3050
Scaleform::Render::GL::ShaderObject::ShaderObject(); // 0x1405EF650
bool Scaleform::Render::GL::ShaderObject::Init(Scaleform::Render::GL::HAL * phal, Scaleform::Render::GL::ShaderDesc::ShaderVersion ver, unsigned long comboIndex, bool separable, Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > & shaderHash, bool testCompilation, bool linkProgram); // 0x1405F0610
bool Scaleform::Render::GL::ShaderObject::Init(Scaleform::Render::GL::HAL * phal, Scaleform::Render::GL::HALGLProgram * program, const Scaleform::Render::GL::VertexShaderDesc * vdesc, const Scaleform::Render::GL::FragShaderDesc * fdesc); // 0x1405F0560
bool Scaleform::Render::GL::ShaderObject::initUniforms(); // 0x1405F2500
bool Scaleform::Render::GL::ShaderObject::link(Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > & shaderHash, bool testCompilation); // 0x1405F2610
Scaleform::Render::GL::ShaderObject::ValidationStatus Scaleform::Render::GL::ShaderObject::validate(Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > & shaderHash, bool testCompilation); // 0x1405F3E00
bool Scaleform::Render::GL::ShaderObject::IsInitialized(); // 0x1405F0E90
void Scaleform::Render::GL::ShaderObject::ApplyShader(); // 0x1405EF920
Scaleform::Render::GL::ShaderObject::~ShaderObject(); // 0x1405EF6D0
Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > & Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::operator=(const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > & __that); // 0x1405EF780
Scaleform::Render::GL::ShaderHashEntry & Scaleform::Render::GL::ShaderHashEntry::operator=(const Scaleform::Render::GL::ShaderHashEntry & __that); // 0x1405EF870
Scaleform::Render::GL::HALGLShader * Scaleform::Render::GL::ShaderObject::createShader(Scaleform::Render::GL::ShaderStages stage, const char * shaderCode); // 0x1405F1CF0
Scaleform::Render::GL::HALGLProgram * Scaleform::Render::GL::ShaderObject::createProgram(Scaleform::Render::GL::ShaderStages stage, const char * shaderCode); // 0x1405F1650
bool Scaleform::Render::GL::ShaderObject::validateShaderOrProgram(Scaleform::Render::GL::ShaderHashEntry * shaders, Scaleform::Render::GL::ShaderStages stage, bool separable, bool testCompilation); // 0x1405F4420
bool Scaleform::Render::GL::ShaderObject::createProgramOrPipeline(Scaleform::Render::GL::ShaderHashEntry * shaders, bool separable, bool testCompilation); // 0x1405F1910
bool Scaleform::Render::GL::ShaderObject::validateProgramOrPipeline(Scaleform::Render::GL::ShaderHashEntry * shaders, bool separable, Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > & shaderHash); // 0x1405F4180
const char * Scaleform::Render::GL::ShaderObject::getShaderPipelineCode(Scaleform::Render::GL::ShaderStages stage, unsigned long maxUniforms, char * modifiedShaderSource); // 0x1405F2350
void Scaleform::Render::GL::ShaderObject::releasePrograms(); // 0x1405F3170
Scaleform::Render::GL::ShaderInterface::ShaderInterface(Scaleform::Render::HAL * phal); // 0x1405EF4B0
bool Scaleform::Render::GL::ShaderInterface::SetFilterShader(const Scaleform::Render::Matrix2x4<float> & viewMatrix, const Scaleform::Render::Filter * filter, Scaleform::Render::GL::ShaderDesc::ShaderType shaderType, unsigned long pass, unsigned long passCount, const Scaleform::Render::VertexFormat * pvf); // 0x1405F1310
bool Scaleform::Render::GL::ShaderInterface::SetStaticShader(Scaleform::Render::GL::ShaderDesc::ShaderType shader, const Scaleform::Render::VertexFormat * __formal); // 0x1405F1480
void Scaleform::Render::GL::ShaderInterface::SetTexture(const Scaleform::Render::GL::ShaderPair & sd, unsigned long var, Scaleform::Render::Texture * ptex, Scaleform::Render::ImageFillMode fm, unsigned long index); // 0x1405F14F0
void Scaleform::Render::GL::ShaderInterface::Finish(unsigned long batchCount); // 0x1405EFAD0
unsigned long Scaleform::Render::GL::ShaderInterface::GetMaximumRowsPerInstance(); // 0x1405F04A0
unsigned long Scaleform::Render::GL::ShaderInterface::GetCountPerInstance(const Scaleform::Render::GL::VertexShaderDesc * pvdesc, Scaleform::Render::GL::Uniform::UniformType arrayType); // 0x1405F0170
Scaleform::Render::GL::ShaderManager::ShaderManager(Scaleform::Render::ProfileViews * prof); // 0x1405EF530
bool Scaleform::Render::GL::ShaderManager::Initialize(Scaleform::Render::GL::HAL * phal, unsigned long vmcFlags); // 0x1405F0AB0
unsigned long Scaleform::Render::GL::ShaderManager::GetNumberOfUniforms(); // 0x1405F0520
unsigned long Scaleform::Render::GL::ShaderManager::SetupFilter(const Scaleform::Render::Filter * filter, unsigned long fillFlags, unsigned long * passes); // 0x1405F15F0
bool Scaleform::Render::GL::ShaderManager::GetDynamicLoopSupport(); // 0x1405F01C0
bool Scaleform::Render::GL::ShaderManager::HasInstancingSupport(); // 0x1405F0540
bool Scaleform::Render::GL::ShaderManager::UsingSeparateShaderObject(); // 0x1405F1600
void Scaleform::Render::GL::ShaderManager::Reset(bool lost); // 0x1405F0F90
void Scaleform::Render::GL::ShaderManager::BeginScene(); // 0x1405EF990
void Scaleform::Render::GL::ShaderManager::PerformShaderValidation(); // 0x1405F0EA0
void Scaleform::Render::GL::ShaderManager::saveBinaryShaders(); // 0x1405F3350
bool Scaleform::Render::GL::ShaderManager::loadBinaryShaders(); // 0x1405F2A60
bool Scaleform::Render::GL::ShaderManager::loadAndVerifyShaderCacheHeader(Scaleform::File * pfile); // 0x1405F29A0
void Scaleform::Render::GL::ShaderManager::addShaderToValidationQueue(unsigned long shaderComboIndex); // 0x1405F1610
bool Scaleform::Render::GL::replaceFSize(char * shaderCode, const char * originalString, float * fsize); // 0x1405F3200
Scaleform::Render::GL::ShaderObject * Scaleform::Render::GL::ShaderManager::getDynamicLoopShaderWithLiteralReplaced(const Scaleform::Render::GL::ShaderManager::DynamicLoopKey & keyParams); // 0x1405F1E30
void Scaleform::Render::GL::ShaderInterface::ResetContext(); // 0x14002E7C0
void Scaleform::Render::GL::ShaderInterface::BeginScene(); // 0x1405EF970//decompilation failure at 140A23460!
//decompilation failure at 140A8A7FC!
void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *key)
{
  const unsigned int *pFirst; // rbx
  __int64 v7; // r10
  unsigned __int64 v8; // r11
  __int64 v9; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r9
  __int64 v11; // r8
  __int64 v12; // rcx
  __int64 v13; // rdx

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
    Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::operator=(
      (Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *)&pTable[3 * v12 + 2],
      key);
  else
LABEL_12:
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeRef *key)
{
  const Scaleform::Render::GL::ShaderManager::DynamicLoopKey *pFirst; // rdi
  __int64 v7; // r10
  unsigned __int64 v8; // rbx
  __int64 v9; // r9
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *pTable; // rsi
  __int64 v11; // rax
  char *v12; // rdx

  pFirst = key->pFirst;
  v7 = 12i64;
  v8 = 5381i64;
  do
  {
    v9 = *((unsigned __int8 *)pFirst + --v7);
    v8 = v9 + 65599 * v8;
  }
  while ( v7 );
  pTable = this->pTable;
  if ( this->pTable
    && (v11 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::findIndexCore<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeRef>(
                this,
                key,
                v8 & pTable->SizeMask),
        v11 >= 0) )
  {
    v12 = (char *)pTable + 40 * v11;
    *((_QWORD *)v12 + 4) = *(_QWORD *)&pFirst->ShaderType;
    *((_DWORD *)v12 + 10) = LODWORD(pFirst->BlurY);
    *((_QWORD *)v12 + 6) = *key->pSecond;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeRef>(
      this,
      pmemAddr,
      key,
      v8);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // r14
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v9; // rdi
  __int64 EntryCount; // r8
  __int64 v11; // rbx
  Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *v12; // r15
  unsigned __int64 SizeMask; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *i; // rsi
  Scaleform::RefCountVImpl *v15; // rcx
  Scaleform::RefCountVImpl *v16; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v18; // rcx
  Scaleform::RefCountVImpl *v19; // rcx
  Scaleform::RefCountVImpl *v20; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = &this->pTable[3 * v7];
  EntryCount = v9[1].EntryCount;
  if ( EntryCount == -2 )
  {
    Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>(
      (Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *)&v9[1],
      key,
      -1i64);
    v9[1].SizeMask = v7;
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( pTable[3 * v11 + 1].EntryCount != -2i64 );
    v12 = (Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *)&pTable[3 * v11 + 1];
    SizeMask = v9[1].SizeMask;
    if ( SizeMask == v7 )
    {
      if ( v12 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>(
          v12,
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *)&v9[1]);
      Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::operator=(
        (Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *)&v9[2],
        key);
      v9[1].EntryCount = v11;
    }
    else
    {
      for ( i = &pTable[3 * SizeMask + 1]; i->EntryCount != v7; i = &pTable[3 * i->EntryCount + 1] )
        ;
      if ( v12 )
      {
        v12->NextInChain = EntryCount;
        v12->HashValue = v9[1].SizeMask;
        v12->Value.First = v9[2].EntryCount;
        v15 = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
        if ( v15 )
          Scaleform::Render::RenderBuffer::AddRef(v15);
        v12->Value.Second.Shader.pObject = (Scaleform::Render::GL::HALGLShader *)v9[2].SizeMask;
        v16 = (Scaleform::RefCountVImpl *)v9[3].EntryCount;
        if ( v16 )
          Scaleform::Render::RenderBuffer::AddRef(v16);
        v12->Value.Second.Program.pObject = (Scaleform::Render::GL::HALGLProgram *)v9[3].EntryCount;
        v12->Value.Second.BinarySize = v9[3].SizeMask;
      }
      i->EntryCount = v11;
      LODWORD(v9[2].EntryCount) = key->First;
      pObject = (Scaleform::RefCountVImpl *)key->Second.Shader.pObject;
      if ( pObject )
        Scaleform::Render::RenderBuffer::AddRef(pObject);
      v18 = (Scaleform::RefCountVImpl *)v9[2].SizeMask;
      if ( v18 )
        Scaleform::RefCountImpl::Release(v18);
      v9[2].SizeMask = (unsigned __int64)key->Second.Shader.pObject;
      v19 = (Scaleform::RefCountVImpl *)key->Second.Program.pObject;
      if ( v19 )
        Scaleform::Render::RenderBuffer::AddRef(v19);
      v20 = (Scaleform::RefCountVImpl *)v9[3].EntryCount;
      if ( v20 )
        Scaleform::RefCountImpl::Release(v20);
      v9[3].EntryCount = (unsigned __int64)key->Second.Program.pObject;
      LODWORD(v9[3].SizeMask) = key->Second.BinarySize;
      v9[1].EntryCount = -1i64;
    }
    v9[1].SizeMask = v7;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> > *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *pTable; // r11
  unsigned __int64 v9; // r9
  char *v10; // r10
  __int64 v11; // rdx
  unsigned __int64 *v12; // r8
  __int64 v13; // rax
  Scaleform::Render::GL::ShaderObject *Second; // xmm1_8
  __int64 v15; // rcx
  bool v16; // zf
  unsigned __int64 *i; // rcx
  __int64 v18; // rcx

  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 5 * v7);
  v10 = (char *)this->pTable + 40 * v7;
  if ( v9 == -2i64 )
  {
    *((_QWORD *)v10 + 2) = -1i64;
    *((_QWORD *)v10 + 3) = 0i64;
    *((_QWORD *)v10 + 4) = *(_QWORD *)&key->First.ShaderType;
    *((_DWORD *)v10 + 10) = LODWORD(key->First.BlurY);
    *((_QWORD *)v10 + 6) = key->Second;
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( *(&pTable[1].EntryCount + 5 * v11) != -2i64 );
    v12 = &pTable[2 * v11 + 1].EntryCount + v11;
    v13 = *((_QWORD *)v10 + 3);
    if ( v13 == v7 )
    {
      if ( v12 )
      {
        *v12 = v9;
        v12[1] = *((_QWORD *)v10 + 3);
        v12[2] = *((_QWORD *)v10 + 4);
        *((_DWORD *)v12 + 6) = *((_DWORD *)v10 + 10);
        v12[4] = *((_QWORD *)v10 + 6);
      }
      *((_OWORD *)v10 + 2) = *(_OWORD *)&key->First.ShaderType;
      Second = key->Second;
      *((_QWORD *)v10 + 2) = v11;
    }
    else
    {
      v15 = v13 + 4 * v13 + 2;
      v16 = *(&pTable->EntryCount + v15) == v7;
      for ( i = &pTable->EntryCount + v15; !v16; i = &pTable->EntryCount + v18 )
      {
        v18 = *i + 4 * *i + 2;
        v16 = *(&pTable->EntryCount + v18) == v7;
      }
      if ( v12 )
      {
        *v12 = v9;
        v12[1] = *((_QWORD *)v10 + 3);
        v12[2] = *((_QWORD *)v10 + 4);
        *((_DWORD *)v12 + 6) = *((_DWORD *)v10 + 10);
        v12[4] = *((_QWORD *)v10 + 6);
      }
      *i = v11;
      *((_OWORD *)v10 + 2) = *(_OWORD *)&key->First.ShaderType;
      Second = key->Second;
      *((_QWORD *)v10 + 2) = -1i64;
    }
    *((_QWORD *)v10 + 6) = Second;
  }
  *((_QWORD *)v10 + 3) = v7;
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v11; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v12; // rdi
  __int64 EntryCount; // r8
  __int64 v14; // rbx
  Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *v15; // r15
  unsigned __int64 v16; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *i; // r14
  Scaleform::RefCountVImpl *v18; // rcx
  Scaleform::RefCountVImpl *v19; // rcx
  const Scaleform::Render::GL::ShaderHashEntry *pSecond; // rbx
  Scaleform::RefCountVImpl *v21; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
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
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = &this->pTable[3 * v10];
  EntryCount = v12[1].EntryCount;
  if ( EntryCount == -2 )
  {
    Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>(
      (Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *)&v12[1],
      key,
      -1i64);
    v12[1].SizeMask = v10;
  }
  else
  {
    v14 = v10;
    do
      v14 = v11->SizeMask & (v14 + 1);
    while ( v11[3 * v14 + 1].EntryCount != -2i64 );
    v15 = (Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *)&v11[3 * v14 + 1];
    v16 = v12[1].SizeMask;
    if ( v16 == v10 )
    {
      if ( v15 )
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>(
          v15,
          (const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *)&v12[1]);
      Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::operator=(
        (Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *)&v12[2],
        key);
      v12[1].EntryCount = v14;
    }
    else
    {
      for ( i = &v11[3 * v16 + 1]; i->EntryCount != v10; i = &v11[3 * i->EntryCount + 1] )
        ;
      if ( v15 )
      {
        v15->NextInChain = EntryCount;
        v15->HashValue = v12[1].SizeMask;
        v15->Value.First = v12[2].EntryCount;
        v18 = (Scaleform::RefCountVImpl *)v12[2].SizeMask;
        if ( v18 )
          Scaleform::Render::RenderBuffer::AddRef(v18);
        v15->Value.Second.Shader.pObject = (Scaleform::Render::GL::HALGLShader *)v12[2].SizeMask;
        v19 = (Scaleform::RefCountVImpl *)v12[3].EntryCount;
        if ( v19 )
          Scaleform::Render::RenderBuffer::AddRef(v19);
        v15->Value.Second.Program.pObject = (Scaleform::Render::GL::HALGLProgram *)v12[3].EntryCount;
        v15->Value.Second.BinarySize = v12[3].SizeMask;
      }
      i->EntryCount = v14;
      LODWORD(v12[2].EntryCount) = *key->pFirst;
      pSecond = key->pSecond;
      if ( pSecond->Shader.pObject )
        Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pSecond->Shader.pObject);
      v21 = (Scaleform::RefCountVImpl *)v12[2].SizeMask;
      if ( v21 )
        Scaleform::RefCountImpl::Release(v21);
      v12[2].SizeMask = (unsigned __int64)pSecond->Shader.pObject;
      pObject = (Scaleform::RefCountVImpl *)pSecond->Program.pObject;
      if ( pObject )
        Scaleform::Render::RenderBuffer::AddRef(pObject);
      v23 = (Scaleform::RefCountVImpl *)v12[3].EntryCount;
      if ( v23 )
        Scaleform::RefCountImpl::Release(v23);
      v12[3].EntryCount = (unsigned __int64)pSecond->Program.pObject;
      LODWORD(v12[3].SizeMask) = pSecond->BinarySize;
      v12[1].EntryCount = -1i64;
    }
    v12[1].SizeMask = v10;
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > *this,
        void *pmemAddr,
        const Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v8; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v10; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *v11; // r9
  unsigned __int64 v12; // r11
  char *v13; // r8
  const Scaleform::Render::GL::ShaderManager::DynamicLoopKey *pFirst; // rax
  __int64 v15; // rdx
  unsigned __int64 *v16; // r10
  __int64 v17; // rax
  const Scaleform::Render::GL::ShaderManager::DynamicLoopKey *v18; // rax
  __int64 v19; // rcx
  bool v20; // zf
  unsigned __int64 *i; // rcx
  __int64 v22; // rcx
  const Scaleform::Render::GL::ShaderManager::DynamicLoopKey *v23; // rax

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
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::setRawCapacity(
    this,
    pmemAddr,
    v8);
LABEL_6:
  v10 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v11 = this->pTable;
  v12 = *(&this->pTable[1].EntryCount + 5 * v10);
  v13 = (char *)this->pTable + 40 * v10;
  if ( v12 == -2i64 )
  {
    *((_QWORD *)v13 + 2) = -1i64;
    *((_QWORD *)v13 + 3) = 0i64;
    pFirst = key->pFirst;
    *((_QWORD *)v13 + 4) = *(_QWORD *)&key->pFirst->ShaderType;
    *((_DWORD *)v13 + 10) = LODWORD(pFirst->BlurY);
    *((_QWORD *)v13 + 6) = *key->pSecond;
  }
  else
  {
    v15 = v10;
    do
      v15 = v11->SizeMask & (v15 + 1);
    while ( *(&v11[1].EntryCount + 5 * v15) != -2i64 );
    v16 = &v11[2 * v15 + 1].EntryCount + v15;
    v17 = *((_QWORD *)v13 + 3);
    if ( v17 == v10 )
    {
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = *((_QWORD *)v13 + 3);
        v16[2] = *((_QWORD *)v13 + 4);
        *((_DWORD *)v16 + 6) = *((_DWORD *)v13 + 10);
        v16[4] = *((_QWORD *)v13 + 6);
      }
      v18 = key->pFirst;
      *((_QWORD *)v13 + 4) = *(_QWORD *)&key->pFirst->ShaderType;
      *((_DWORD *)v13 + 10) = LODWORD(v18->BlurY);
      *((_QWORD *)v13 + 6) = *key->pSecond;
      *((_QWORD *)v13 + 2) = v15;
    }
    else
    {
      v19 = v17 + 4 * v17 + 2;
      v20 = *(&v11->EntryCount + v19) == v10;
      for ( i = &v11->EntryCount + v19; !v20; i = &v11->EntryCount + v22 )
      {
        v22 = *i + 4 * *i + 2;
        v20 = *(&v11->EntryCount + v22) == v10;
      }
      if ( v16 )
      {
        *v16 = v12;
        v16[1] = *((_QWORD *)v13 + 3);
        v16[2] = *((_QWORD *)v13 + 4);
        *((_DWORD *)v16 + 6) = *((_DWORD *)v13 + 10);
        v16[4] = *((_QWORD *)v13 + 6);
      }
      *i = v15;
      v23 = key->pFirst;
      *((_QWORD *)v13 + 4) = *(_QWORD *)&key->pFirst->ShaderType;
      *((_DWORD *)v13 + 10) = LODWORD(v23->BlurY);
      *((_QWORD *)v13 + 6) = *key->pSecond;
      *((_QWORD *)v13 + 2) = -1i64;
    }
  }
  *((_QWORD *)v13 + 3) = v10;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::findIndexCore<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > *this,
        const Scaleform::Render::GL::ShaderManager::DynamicLoopKey *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *pTable; // r10
  unsigned __int64 v4; // r9
  unsigned __int64 v5; // rcx
  bool v6; // zf
  unsigned __int64 *v7; // rcx

  pTable = this->pTable;
  v4 = hashValue;
  v5 = hashValue + 4 * hashValue + 2;
  v6 = *(&pTable->EntryCount + v5) == -2i64;
  v7 = &pTable->EntryCount + v5;
  if ( v6 || v7[1] != hashValue )
    return -1i64;
  while ( v7[1] != hashValue
       || *((_DWORD *)v7 + 4) != key->ShaderType
       || *((float *)v7 + 5) != key->BlurX
       || *((float *)v7 + 6) != key->BlurY )
  {
    v4 = *v7;
    if ( *v7 == -1i64 )
      return -1i64;
    v7 = &pTable[2 * v4 + 1].EntryCount + v4;
  }
  return v4;
}

unsigned __int64 __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::findIndexCore<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeRef>(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > *this,
        const Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeRef *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *pTable; // r10
  unsigned __int64 v5; // r9
  unsigned __int64 v6; // rcx
  bool v7; // zf
  unsigned __int64 *v8; // rcx
  const Scaleform::Render::GL::ShaderManager::DynamicLoopKey *pFirst; // rdx

  pTable = this->pTable;
  v5 = hashValue;
  v6 = hashValue + 4 * hashValue + 2;
  v7 = *(&pTable->EntryCount + v6) == -2i64;
  v8 = &pTable->EntryCount + v6;
  if ( v7 || v8[1] != hashValue )
    return -1i64;
  while ( 1 )
  {
    if ( v8[1] == hashValue )
    {
      pFirst = key->pFirst;
      if ( *((_DWORD *)v8 + 4) == key->pFirst->ShaderType
        && *((float *)v8 + 5) == pFirst->BlurX
        && *((float *)v8 + 6) == pFirst->BlurY )
      {
        break;
      }
    }
    v5 = *v8;
    if ( *v8 == -1i64 )
      return -1i64;
    v8 = &pTable[2 * v5 + 1].EntryCount + v5;
  }
  return v5;
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *this,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *key,
        __int64 next)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v6; // rcx

  this->NextInChain = next;
  this->HashValue = 0i64;
  this->Value.First = key->First;
  pObject = (Scaleform::RefCountVImpl *)key->Second.Shader.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->Value.Second.Shader.pObject = key->Second.Shader.pObject;
  v6 = (Scaleform::RefCountVImpl *)key->Second.Program.pObject;
  if ( v6 )
    Scaleform::Render::RenderBuffer::AddRef(v6);
  this->Value.Second.Program.pObject = key->Second.Program.pObject;
  this->Value.Second.BinarySize = key->Second.BinarySize;
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *this,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *keyRef,
        __int64 next)
{
  const Scaleform::Render::GL::ShaderHashEntry *pSecond; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx

  this->NextInChain = next;
  this->HashValue = 0i64;
  this->Value.First = *keyRef->pFirst;
  pSecond = keyRef->pSecond;
  if ( pSecond->Shader.pObject )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pSecond->Shader.pObject);
  this->Value.Second.Shader.pObject = pSecond->Shader.pObject;
  pObject = (Scaleform::RefCountVImpl *)pSecond->Program.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->Value.Second.Program.pObject = pSecond->Program.pObject;
  this->Value.Second.BinarySize = pSecond->BinarySize;
}

void __fastcall Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>(
        Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *this,
        const Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> *e)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  this->NextInChain = e->NextInChain;
  this->HashValue = e->HashValue;
  this->Value.First = e->Value.First;
  pObject = (Scaleform::RefCountVImpl *)e->Value.Second.Shader.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  this->Value.Second.Shader.pObject = e->Value.Second.Shader.pObject;
  v5 = (Scaleform::RefCountVImpl *)e->Value.Second.Program.pObject;
  if ( v5 )
    Scaleform::Render::RenderBuffer::AddRef(v5);
  this->Value.Second.Program.pObject = e->Value.Second.Program.pObject;
  this->Value.Second.BinarySize = e->Value.Second.BinarySize;
}

void __fastcall Scaleform::Render::GL::ShaderInterface::ShaderInterface(
        Scaleform::Render::GL::ShaderInterface *this,
        Scaleform::Render::HAL *phal)
{
  this->PrimitiveOpen = 0;
  this->CurrentPrimitiveMeshCount = 0;
  this->Textures[0] = 0i64;
  this->Textures[1] = 0i64;
  this->Textures[2] = 0i64;
  this->Textures[3] = 0i64;
  *(_QWORD *)this->UniformSet = 0i64;
  *(_QWORD *)&this->UniformSet[8] = 0i64;
  *(_QWORD *)&this->UniformSet[16] = 0i64;
  *(_WORD *)&this->UniformSet[24] = 0;
  this->__vftable = (Scaleform::Render::GL::ShaderInterface_vtbl *)&Scaleform::Render::GL::ShaderInterface::`vftable';
  this->CurShader.pShaderObj = 0i64;
  this->CurShader.pVDesc = 0i64;
  this->CurShader.pFDesc = 0i64;
  this->pHal = (Scaleform::Render::GL::HAL *)phal;
  memset(this->TextureUniforms, -1, sizeof(this->TextureUniforms));
}

void __fastcall Scaleform::Render::GL::ShaderManager::ShaderManager(
        Scaleform::Render::GL::ShaderManager *this,
        Scaleform::Render::ProfileViews *prof)
{
  __int64 v3; // r8
  Scaleform::Render::GL::ShaderObject *StaticShaders; // rcx
  Scaleform::Render::GL::ShaderObject::UniformLocation *Uniforms; // rax
  __int64 v6; // rdx

  this->VFormats.KeyBuffer.pPages = 0i64;
  this->VFormats.KeyBuffer.pLast = 0i64;
  this->VFormats.ValueBuffer.pPages = 0i64;
  this->VFormats.ValueBuffer.pLast = 0i64;
  v3 = 873i64;
  this->Profiler = prof;
  this->VertexFormatComputedHash.mHash.pTable = 0i64;
  this->__vftable = (Scaleform::Render::GL::ShaderManager_vtbl *)&Scaleform::Render::GL::ShaderManager::`vftable';
  this->pHal = 0i64;
  this->GLSLVersion = ShaderVersion_GLSL110;
  StaticShaders = this->StaticShaders;
  do
  {
    StaticShaders->pHal = 0i64;
    Uniforms = StaticShaders->Uniforms;
    StaticShaders->pVDesc = 0i64;
    --v3;
    StaticShaders->pFDesc = 0i64;
    v6 = 26i64;
    StaticShaders->ShaderVer = ShaderVersion_GLSL110;
    StaticShaders->ComboIndex = -1;
    StaticShaders->Separated = 0;
    StaticShaders->Pipeline.pObject = 0i64;
    StaticShaders->StagePrograms[0].pObject = 0i64;
    StaticShaders->StagePrograms[1].pObject = 0i64;
    StaticShaders->StagePrograms[2].pObject = 0i64;
    StaticShaders->StagePrograms[3].pObject = 0i64;
    StaticShaders->StagePrograms[4].pObject = 0i64;
    StaticShaders->StagePrograms[5].pObject = 0i64;
    do
    {
      Uniforms->Program.pObject = 0i64;
      Uniforms->Location.__vftable = (Scaleform::Render::GL::HALGLUniformLocation_vtbl *)&Scaleform::RefCountImplCore::`vftable';
      Uniforms->Location.RefCount = 1;
      Uniforms->Location.__vftable = (Scaleform::Render::GL::HALGLUniformLocation_vtbl *)&Scaleform::Render::GL::HALGLTexture::`vftable';
      Uniforms->Location.Location = -1;
      ++Uniforms;
      --v6;
    }
    while ( v6 );
    *(_WORD *)&StaticShaders->IsLinked = 0;
    ++StaticShaders;
  }
  while ( v3 );
  this->DynamicLoopShaderHash.mHash.pTable = 0i64;
  this->CompiledShaderHash.mHash.pTable = 0i64;
  Scaleform::String::String(&this->BinaryShaderPath);
  this->DynamicLoops = -1;
  *(_QWORD *)&this->ShouldUseBinaryShaders = 256i64;
  memset(this->ValidationQueue, -1, sizeof(this->ValidationQueue));
}

void __fastcall Scaleform::Render::GL::ShaderObject::ShaderObject(Scaleform::Render::GL::ShaderObject *this)
{
  Scaleform::Render::GL::ShaderObject::UniformLocation *Uniforms; // rax
  __int64 v2; // rdx

  this->ComboIndex = -1;
  this->pHal = 0i64;
  Uniforms = this->Uniforms;
  this->pVDesc = 0i64;
  this->pFDesc = 0i64;
  this->ShaderVer = ShaderVersion_GLSL110;
  v2 = 26i64;
  this->Separated = 0;
  this->Pipeline.pObject = 0i64;
  this->StagePrograms[0].pObject = 0i64;
  this->StagePrograms[1].pObject = 0i64;
  this->StagePrograms[2].pObject = 0i64;
  this->StagePrograms[3].pObject = 0i64;
  this->StagePrograms[4].pObject = 0i64;
  this->StagePrograms[5].pObject = 0i64;
  do
  {
    Uniforms->Program.pObject = 0i64;
    Uniforms->Location.__vftable = (Scaleform::Render::GL::HALGLUniformLocation_vtbl *)&Scaleform::RefCountImplCore::`vftable';
    Uniforms->Location.RefCount = 1;
    Uniforms->Location.__vftable = (Scaleform::Render::GL::HALGLUniformLocation_vtbl *)&Scaleform::Render::GL::HALGLTexture::`vftable';
    Uniforms->Location.Location = -1;
    ++Uniforms;
    --v2;
  }
  while ( v2 );
  *(_WORD *)&this->IsLinked = 0;
}

void __fastcall Scaleform::Render::GL::ShaderObject::~ShaderObject(Scaleform::Render::GL::ShaderObject *this)
{
  bool *p_IsLinked; // rbx
  __int64 v3; // rdi
  __int64 v4; // rbx
  Scaleform::Render::GL::ShaderObject::UniformLocation *Uniforms; // rdi
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx

  Scaleform::Render::GL::ShaderObject::releasePrograms(this);
  p_IsLinked = &this->IsLinked;
  this->pVDesc = 0i64;
  v3 = 26i64;
  this->pFDesc = 0i64;
  this->pHal = 0i64;
  this->IsLinked = 0;
  this->IsValidated = 0;
  do
  {
    p_IsLinked -= 32;
    --v3;
    Scaleform::RefCountImplCore::~RefCountImplCore((Scaleform::RefCountImplCore *)(p_IsLinked + 8));
    if ( *(_QWORD *)p_IsLinked )
      Scaleform::RefCountImpl::Release(*(Scaleform::RefCountVImpl **)p_IsLinked);
  }
  while ( v3 );
  v4 = 6i64;
  Uniforms = this->Uniforms;
  do
  {
    v6 = *(Scaleform::RefCountVImpl **)&Uniforms[-1].Location.Location;
    Uniforms = (Scaleform::Render::GL::ShaderObject::UniformLocation *)((char *)Uniforms - 8);
    --v4;
    if ( v6 )
      Scaleform::RefCountImpl::Release(v6);
  }
  while ( v4 );
  pObject = (Scaleform::RefCountVImpl *)this->Pipeline.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
}

Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *__fastcall Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::operator=(
        Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *this,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *__that)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  this->First = __that->First;
  pObject = (Scaleform::RefCountVImpl *)__that->Second.Shader.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v5 = (Scaleform::RefCountVImpl *)this->Second.Shader.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->Second.Shader.pObject = __that->Second.Shader.pObject;
  v6 = (Scaleform::RefCountVImpl *)__that->Second.Program.pObject;
  if ( v6 )
    Scaleform::Render::RenderBuffer::AddRef(v6);
  v7 = (Scaleform::RefCountVImpl *)this->Second.Program.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  this->Second.Program.pObject = __that->Second.Program.pObject;
  this->Second.BinarySize = __that->Second.BinarySize;
  return this;
}

void __fastcall Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::operator=(
        Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *this,
        const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeRef *src)
{
  const Scaleform::Render::GL::ShaderHashEntry *pSecond; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx

  this->First = *src->pFirst;
  pSecond = src->pSecond;
  if ( pSecond->Shader.pObject )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pSecond->Shader.pObject);
  pObject = (Scaleform::RefCountVImpl *)this->Second.Shader.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->Second.Shader.pObject = pSecond->Shader.pObject;
  v5 = (Scaleform::RefCountVImpl *)pSecond->Program.pObject;
  if ( v5 )
    Scaleform::Render::RenderBuffer::AddRef(v5);
  v6 = (Scaleform::RefCountVImpl *)this->Second.Program.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  this->Second.Program.pObject = pSecond->Program.pObject;
  this->Second.BinarySize = pSecond->BinarySize;
}

Scaleform::Render::GL::ShaderHashEntry *__fastcall Scaleform::Render::GL::ShaderHashEntry::operator=(
        Scaleform::Render::GL::ShaderHashEntry *this,
        const Scaleform::Render::GL::ShaderHashEntry *__that)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx

  if ( __that->Shader.pObject )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)__that->Shader.pObject);
  if ( this->Shader.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)this->Shader.pObject);
  this->Shader.pObject = __that->Shader.pObject;
  pObject = (Scaleform::RefCountVImpl *)__that->Program.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v5 = (Scaleform::RefCountVImpl *)this->Program.pObject;
  if ( v5 )
    Scaleform::RefCountImpl::Release(v5);
  this->Program.pObject = __that->Program.pObject;
  this->BinarySize = __that->BinarySize;
  return this;
}

void __fastcall Scaleform::Render::GL::ShaderObject::ApplyShader(Scaleform::Render::GL::ShaderObject *this)
{
  Scaleform::Render::GL::HAL_vtbl *v2; // rax
  __int64 v3; // rax
  __int64 v4; // rax

  v2 = this->pHal->__vftable;
  if ( this->Separated )
  {
    v3 = ((__int64 (*)(void))v2->GetGraphicsDevice)();
    (*(void (__fastcall **)(__int64, Scaleform::Render::GL::HALGLProgramPipeline *))(*(_QWORD *)v3 + 96i64))(
      v3,
      this->Pipeline.pObject);
  }
  else
  {
    v4 = ((__int64 (*)(void))v2->GetGraphicsDevice)();
    (*(void (__fastcall **)(__int64, Scaleform::Render::GL::HALGLProgram *))(*(_QWORD *)v4 + 976i64))(
      v4,
      this->StagePrograms[0].pObject);
  }
}

void __fastcall Scaleform::Render::GL::ShaderInterface::BeginScene(Scaleform::Render::GL::ShaderInterface *this)
{
  this->CurShader.pShaderObj = 0i64;
  this->CurShader.pVDesc = 0i64;
  this->CurShader.pFDesc = 0i64;
}

void __fastcall Scaleform::Render::GL::ShaderManager::BeginScene(Scaleform::Render::GL::ShaderManager *this)
{
  Scaleform::Render::GL::GraphicsDevice *v1; // rax

  if ( this->SeparablePipelines )
  {
    v1 = this->pHal->GetGraphicsDevice(this->pHal);
    v1->glUseProgram(v1, 0i64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
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

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::Clear(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > *this)
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
      v2 += 40i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::Render::GL::ShaderInterface::Finish(
        Scaleform::Render::GL::ShaderInterface *this,
        unsigned int batchCount)
{
  Scaleform::Render::GL::ShaderObject *pShaderObj; // rbp
  bool *UniformSet; // rdi
  int v4; // ebx
  __int64 v5; // rax
  unsigned int v6; // er10
  Scaleform::Render::GL::HAL *pHal; // rcx
  __int64 v9; // rax
  Scaleform::Render::GL::GraphicsDevice *v10; // rax
  __int64 v11; // r15
  Scaleform::RefCountVImpl **Uniforms; // r9
  __int64 v13; // r13
  bool *v14; // r8
  unsigned __int64 v15; // rdx
  unsigned __int64 v16; // rdi
  unsigned __int8 v17; // al
  unsigned int v18; // er14
  unsigned __int8 v19; // cl
  Scaleform::Render::GL::GraphicsDevice *v20; // rax
  Scaleform::Render::GL::GraphicsDevice *v21; // rax
  Scaleform::Render::GL::GraphicsDevice *v22; // rax
  Scaleform::Render::GL::GraphicsDevice *v23; // rax
  Scaleform::Render::GL::GraphicsDevice *v24; // rax
  int v25; // edi
  Scaleform::Render::GL::ShaderInterface::TextureSamplerUniform *v26; // rbx
  Scaleform::Render::GL::GraphicsDevice *v27; // rax
  Scaleform::RefCountVImpl *v28; // rbx
  __int64 v29; // rax
  __int64 v30; // rax
  __int64 v31; // rax
  __int64 v32; // rax
  __int64 v33; // rax
  int v34; // er12
  Scaleform::Render::GL::ShaderInterface::TextureSamplerUniform *TextureUniforms; // r14
  __int64 UniformVar; // rax
  __int64 v37; // rax
  Scaleform::RefCountVImpl *v38; // rdi
  __int64 v39; // rax
  __int64 v40; // [rsp+20h] [rbp-68h]
  Scaleform::RefCountImplCore v41; // [rsp+30h] [rbp-58h] BYREF
  int v42; // [rsp+40h] [rbp-48h]
  Scaleform::RefCountVImpl **v43; // [rsp+90h] [rbp+8h]
  bool *v45; // [rsp+A0h] [rbp+18h]

  pShaderObj = this->CurShader.pShaderObj;
  UniformSet = this->UniformSet;
  v4 = 0;
  this->PrimitiveOpen = 0;
  v5 = 0i64;
  this->CurrentPrimitiveMeshCount = 0;
  v6 = batchCount;
  while ( !UniformSet[v5] )
  {
    ++v4;
    if ( ++v5 >= 26 )
      goto LABEL_8;
  }
  pHal = this->pHal;
  v41.__vftable = (Scaleform::RefCountImplCore_vtbl *)&Scaleform::Render::GL::HALGLTexture::`vftable';
  v41.RefCount = 1;
  v42 = -1;
  v9 = (__int64)pHal->GetGraphicsDevice(pHal);
  (*(void (__fastcall **)(__int64, Scaleform::Render::GL::HALGLProgram *, const char *, Scaleform::RefCountImplCore *))(*(_QWORD *)v9 + 648i64))(
    v9,
    pShaderObj->Uniforms[v4].Program.pObject,
    "brightness",
    &v41);
  if ( v42 >= 0 )
  {
    v10 = this->pHal->GetGraphicsDevice(this->pHal);
    v10->glUniform1fv(v10, (Scaleform::Render::GL::HALGLUniformLocation *)&v41, 1, &globalBrightness);
  }
  Scaleform::RefCountImplCore::~RefCountImplCore(&v41);
  v6 = batchCount;
LABEL_8:
  v11 = 0i64;
  v45 = UniformSet;
  Uniforms = (Scaleform::RefCountVImpl **)pShaderObj->Uniforms;
  v13 = 0i64;
  v43 = (Scaleform::RefCountVImpl **)pShaderObj->Uniforms;
  v14 = UniformSet;
  do
  {
    if ( *v14 )
    {
      v15 = (unsigned __int64)pShaderObj->pVDesc->Uniforms;
      if ( *(__int16 *)(v15 + v13) >= 0
        || (v15 = (unsigned __int64)pShaderObj->pFDesc->Uniforms, *(__int16 *)(v15 + v13) >= 0) )
      {
        v16 = v15 + 10 * v11;
        if ( v16 )
        {
          v17 = *(_BYTE *)(v16 + 9);
          if ( v17 )
          {
            v18 = v6 * v17;
          }
          else
          {
            v19 = *(_BYTE *)(v16 + 4);
            if ( !v19 )
              goto LABEL_54;
            v15 = (unsigned __int64)*(__int16 *)(v16 + 6) >> 32;
            LODWORD(v15) = *(__int16 *)(v16 + 6) % (int)v19;
            v18 = *(__int16 *)(v16 + 6) / (int)v19;
          }
          if ( pShaderObj->Separated )
          {
            v28 = *Uniforms;
            if ( *Uniforms )
              Scaleform::Render::RenderBuffer::AddRef(*Uniforms);
            switch ( *(_BYTE *)(v16 + 4) )
            {
              case 1:
                v33 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, unsigned __int64))this->pHal->GetGraphicsDevice)(
                        this->pHal,
                        v15);
                (*(void (__fastcall **)(__int64, Scaleform::RefCountVImpl *, Scaleform::Render::GL::HALGLUniformLocation *, _QWORD, float *))(*(_QWORD *)v33 + 744i64))(
                  v33,
                  v28,
                  &pShaderObj->Uniforms[(int)v11].Location,
                  v18,
                  &this->UniformData[*(__int16 *)(v16 + 2)]);
                break;
              case 2:
                v32 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, unsigned __int64))this->pHal->GetGraphicsDevice)(
                        this->pHal,
                        v15);
                (*(void (__fastcall **)(__int64, Scaleform::RefCountVImpl *, Scaleform::Render::GL::HALGLUniformLocation *, _QWORD, float *))(*(_QWORD *)v32 + 760i64))(
                  v32,
                  v28,
                  &pShaderObj->Uniforms[(int)v11].Location,
                  v18,
                  &this->UniformData[*(__int16 *)(v16 + 2)]);
                break;
              case 3:
                v31 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, unsigned __int64))this->pHal->GetGraphicsDevice)(
                        this->pHal,
                        v15);
                (*(void (__fastcall **)(__int64, Scaleform::RefCountVImpl *, Scaleform::Render::GL::HALGLUniformLocation *, _QWORD, float *))(*(_QWORD *)v31 + 768i64))(
                  v31,
                  v28,
                  &pShaderObj->Uniforms[(int)v11].Location,
                  v18,
                  &this->UniformData[*(__int16 *)(v16 + 2)]);
                break;
              case 4:
                v30 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, unsigned __int64))this->pHal->GetGraphicsDevice)(
                        this->pHal,
                        v15);
                (*(void (__fastcall **)(__int64, Scaleform::RefCountVImpl *, Scaleform::Render::GL::HALGLUniformLocation *, _QWORD, float *))(*(_QWORD *)v30 + 776i64))(
                  v30,
                  v28,
                  &pShaderObj->Uniforms[(int)v11].Location,
                  v18,
                  &this->UniformData[*(__int16 *)(v16 + 2)]);
                break;
              case 0x10:
                v29 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, unsigned __int64))this->pHal->GetGraphicsDevice)(
                        this->pHal,
                        v15);
                LOBYTE(v40) = 0;
                (*(void (__fastcall **)(__int64, Scaleform::RefCountVImpl *, Scaleform::Render::GL::HALGLUniformLocation *, _QWORD, __int64, float *))(*(_QWORD *)v29 + 784i64))(
                  v29,
                  v28,
                  &pShaderObj->Uniforms[(int)v11].Location,
                  v18,
                  v40,
                  &this->UniformData[*(__int16 *)(v16 + 2)]);
                break;
            }
            v34 = 0;
            TextureUniforms = this->TextureUniforms;
            do
            {
              UniformVar = (unsigned int)TextureUniforms->UniformVar;
              if ( (int)UniformVar < 0 )
                break;
              v37 = 32 * (UniformVar + 3);
              v38 = *(Scaleform::RefCountVImpl **)((char *)&pShaderObj->pHal + v37);
              if ( v38 )
                Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)((char *)&pShaderObj->pHal + v37));
              if ( v28 )
                Scaleform::RefCountImpl::Release(v28);
              v28 = v38;
              v39 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, unsigned __int64))this->pHal->GetGraphicsDevice)(
                      this->pHal,
                      v15);
              (*(void (__fastcall **)(__int64, Scaleform::RefCountVImpl *, Scaleform::Render::GL::HALGLUniformLocation *, _QWORD, int *))(*(_QWORD *)v39 + 752i64))(
                v39,
                v38,
                &pShaderObj->Uniforms[TextureUniforms->UniformVar].Location,
                (unsigned int)TextureUniforms->StagesUsed,
                &this->TextureUniforms[0].SamplerStages[4 * v34 + 2 * v34]);
              ++v34;
              ++TextureUniforms;
            }
            while ( v34 < 4 );
            if ( v28 )
              Scaleform::RefCountImpl::Release(v28);
          }
          else
          {
            switch ( *(_BYTE *)(v16 + 4) )
            {
              case 1:
                v24 = this->pHal->GetGraphicsDevice(this->pHal);
                v24->glUniform1fv(
                  v24,
                  &pShaderObj->Uniforms[(int)v11].Location,
                  v18,
                  &this->UniformData[*(__int16 *)(v16 + 2)]);
                break;
              case 2:
                v23 = this->pHal->GetGraphicsDevice(this->pHal);
                v23->glUniform2fv(
                  v23,
                  &pShaderObj->Uniforms[(int)v11].Location,
                  v18,
                  &this->UniformData[*(__int16 *)(v16 + 2)]);
                break;
              case 3:
                v22 = this->pHal->GetGraphicsDevice(this->pHal);
                v22->glUniform3fv(
                  v22,
                  &pShaderObj->Uniforms[(int)v11].Location,
                  v18,
                  &this->UniformData[*(__int16 *)(v16 + 2)]);
                break;
              case 4:
                v21 = this->pHal->GetGraphicsDevice(this->pHal);
                v21->glUniform4fv(
                  v21,
                  &pShaderObj->Uniforms[(int)v11].Location,
                  v18,
                  &this->UniformData[*(__int16 *)(v16 + 2)]);
                break;
              case 0x10:
                v20 = this->pHal->GetGraphicsDevice(this->pHal);
                v20->glUniformMatrix4fv(
                  v20,
                  &pShaderObj->Uniforms[(int)v11].Location,
                  v18,
                  0,
                  &this->UniformData[*(__int16 *)(v16 + 2)]);
                break;
            }
            v25 = 0;
            v26 = this->TextureUniforms;
            do
            {
              if ( v26->UniformVar < 0 )
                break;
              v27 = this->pHal->GetGraphicsDevice(this->pHal);
              v27->glUniform1iv(
                v27,
                &pShaderObj->Uniforms[v26->UniformVar].Location,
                v26->StagesUsed,
                &this->TextureUniforms[0].SamplerStages[4 * v25 + 2 * v25]);
              ++v25;
              ++v26;
            }
            while ( v25 < 4 );
          }
          Uniforms = v43;
          v14 = v45;
        }
      }
    }
LABEL_54:
    v6 = batchCount;
    Uniforms += 4;
    ++v14;
    v43 = Uniforms;
    v11 = (unsigned int)(v11 + 1);
    v45 = v14;
    v13 += 10i64;
  }
  while ( (int)v11 < 26 );
  *(_QWORD *)this->UniformSet = 0i64;
  *(_QWORD *)&this->UniformSet[8] = 0i64;
  *(_QWORD *)&this->UniformSet[16] = 0i64;
  *(_WORD *)&this->UniformSet[24] = 0;
  memset(this->TextureUniforms, -1, sizeof(this->TextureUniforms));
}

Scaleform::Render::GL::ShaderObject **__fastcall Scaleform::Hash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>>::Get(
        Scaleform::Hash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > > *this,
        const Scaleform::Render::GL::ShaderManager::DynamicLoopKey *key)
{
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *pTable; // rbx
  __int64 v3; // rax
  __int64 v4; // r9
  __int64 v5; // r8
  signed __int64 v6; // rax
  unsigned __int64 *v7; // rcx
  Scaleform::Render::GL::ShaderObject **result; // rax

  pTable = this->mHash.pTable;
  if ( !this->mHash.pTable )
    goto LABEL_6;
  v3 = 5381i64;
  v4 = 12i64;
  do
  {
    v5 = *((unsigned __int8 *)key + --v4);
    v3 = v5 + 65599 * v3;
  }
  while ( v4 );
  v6 = Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::findIndexCore<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>(
         &this->mHash,
         key,
         v3 & pTable->SizeMask);
  if ( v6 >= 0 )
    v7 = &pTable[2 * v6 + 2].EntryCount + v6;
  else
LABEL_6:
    v7 = 0i64;
  result = (Scaleform::Render::GL::ShaderObject **)(v7 + 2);
  if ( !v7 )
    return 0i64;
  return result;
}

__int64 __fastcall Scaleform::Render::GL::ShaderInterface::GetCountPerInstance(
        const Scaleform::Render::GL::VertexShaderDesc *pvdesc,
        Scaleform::Render::GL::Uniform::UniformType arrayType)
{
  unsigned int v2; // er9
  unsigned __int8 *p_Size; // rax
  __int64 v4; // r8

  if ( !pvdesc || (pvdesc->Flags & 2) == 0 )
    return 0i64;
  v2 = 0;
  p_Size = &pvdesc->BatchUniforms->Size;
  v4 = 26i64;
  do
  {
    if ( *p_Size )
    {
      if ( (char)*(p_Size - 2) == arrayType )
        v2 += *p_Size;
    }
    p_Size += 3;
    --v4;
  }
  while ( v4 );
  return v2;
}

bool __fastcall Scaleform::Render::GL::ShaderManager::GetDynamicLoopSupport(Scaleform::Render::GL::ShaderManager *this)
{
  int v2; // eax
  const Scaleform::Render::GL::FragShaderDesc **i; // rdx
  Scaleform::Render::GL::ShaderDesc::ShaderVersion GLSLVersion; // edx
  unsigned int ShaderComboIndex; // eax
  char *v7; // rcx

  if ( this->DynamicLoops < 0 )
  {
    v2 = 0;
    for ( i = Scaleform::Render::GL::FragShaderDesc::Descs; !*i || ((*i)->Flags & 0x10) == 0; ++i )
    {
      if ( ++v2 >= 1105 )
        return this->DynamicLoops != 0;
    }
    GLSLVersion = this->GLSLVersion;
    this->DynamicLoops = 0;
    ShaderComboIndex = Scaleform::Render::GL::FragShaderDesc::GetShaderComboIndex(
                         Scaleform::Render::GL::FragShaderDesc::Descs[v2]->Type,
                         GLSLVersion);
    v7 = (char *)this + 936 * ShaderComboIndex;
    if ( v7[1000]
      || Scaleform::Render::GL::ShaderObject::Init(
           (Scaleform::Render::GL::ShaderObject *)(v7 + 72),
           this->pHal,
           this->GLSLVersion,
           ShaderComboIndex,
           this->SeparablePipelines,
           &this->CompiledShaderHash,
           1,
           1) )
    {
      this->DynamicLoops = 1;
    }
  }
  return this->DynamicLoops != 0;
}

__int64 __fastcall Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::GetFilterPasses(
        Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture> *this,
        const Scaleform::Render::Filter *filter,
        unsigned int fillFlags,
        unsigned int *passes)
{
  Scaleform::Render::FilterType Type; // eax
  char v5; // si
  char v7; // di
  int v8; // ecx
  unsigned int v9; // edx
  int v10; // er8
  unsigned int v11; // ebx
  int v12; // eax
  int v13; // er11
  unsigned int *v14; // rax
  unsigned int v15; // er8
  int v16; // eax
  unsigned int *v17; // rcx
  unsigned int v18; // eax
  int v19; // eax

  Type = filter->Type;
  v5 = fillFlags;
  if ( Type > Filter_GradientBevel )
  {
    if ( Type == Filter_ColorMatrix )
    {
      v9 = 1;
      *passes = 1572864;
      if ( (fillFlags & 1) != 0 )
        *passes = 1572865;
    }
    else if ( Type == Filter_DisplacementMap )
    {
      *passes = 3145728;
      v9 = 1;
      if ( LODWORD(filter[2].__vftable) == 2 )
      {
        *passes = 3146240;
      }
      else if ( LODWORD(filter[2].__vftable) == 3 )
      {
        *passes = 3145984;
      }
    }
    else
    {
      return 0;
    }
  }
  else
  {
    v7 = 0;
    v8 = 0;
    if ( (float)(*((float *)&filter[1].RefCount + 1) * *(float *)&filter[1].RefCount) < 12800.0 )
    {
      v9 = HIDWORD(filter[1].__vftable);
      if ( !v9 )
        v9 = 1;
    }
    else
    {
      v7 = 1;
      v9 = 2 * HIDWORD(filter[1].__vftable);
    }
    v10 = v9 - 1;
    v11 = 2228224;
    v12 = v9 - 1;
    if ( (int)(v9 - 1) < 0 )
      v12 = 0;
    if ( v12 > 0 )
    {
      v13 = 2228224;
      v14 = passes;
      if ( v7 )
        v13 = 0x200000;
      if ( v10 < 0 )
        v10 = 0;
      do
      {
        ++v8;
        *v14++ = v13;
      }
      while ( v8 < v10 );
    }
    v15 = (__int64)filter[1].__vftable & 7;
    if ( v15 - 1 > 4 )
    {
      if ( v7 )
        v11 = 0x200000;
      passes[v8] = v11;
      if ( (v5 & 1) != 0 )
        passes[v8] = v11 + 1;
    }
    else
    {
      if ( v15 <= 2 )
      {
        passes[v8] = 2621440;
      }
      else
      {
        switch ( v15 )
        {
          case 3u:
            passes[v8] = 2949120;
            break;
          case 4u:
            passes[v8] = 2654208;
            break;
          case 5u:
            passes[v8] = 2899968;
            break;
        }
      }
      v16 = (int)filter[1].__vftable;
      if ( (v16 & 0x20) != 0 )
      {
        v17 = &passes[v8];
        v18 = *v17;
        if ( (*v17 & 0x40000) != 0 || v15 == 4 )
        {
          v19 = v18 + 4096;
          *v17 = v19;
        }
        else
        {
          v19 = v18 + 2048;
          *v17 = v19;
        }
      }
      else if ( (v16 & 0x80u) != 0 || v15 == 1 && (v16 & 0x50) == 64 )
      {
        v17 = &passes[v8];
        v19 = *v17 + 1024;
        *v17 = v19;
      }
      else
      {
        v17 = &passes[v8];
        v19 = *v17;
      }
      if ( ((__int64)filter[1].__vftable & 0x50) != 0 )
        v19 += 0x2000;
      *v17 = v19;
      if ( (v5 & 1) != 0 )
        *v17 = v19 + 1;
    }
  }
  return v9;
}

__int64 __fastcall Scaleform::Render::GL::ShaderInterface::GetMaximumRowsPerInstance()
{
  __int64 result; // rax
  unsigned int v1; // er9
  const Scaleform::Render::GL::VertexShaderDesc **v2; // r10
  __int64 v3; // r11
  const Scaleform::Render::GL::VertexShaderDesc *v4; // rax
  unsigned int v5; // edx
  unsigned __int8 *p_Size; // rax
  __int64 v7; // r8

  result = Scaleform::Render::GL::ShaderInterface::MaxRowsPerInstance;
  if ( !Scaleform::Render::GL::ShaderInterface::MaxRowsPerInstance )
  {
    v1 = 0;
    v2 = Scaleform::Render::GL::VertexShaderDesc::Descs;
    Scaleform::Render::GL::ShaderInterface::MaxRowsPerInstance = 0;
    v3 = 405i64;
    do
    {
      v4 = *v2;
      if ( *v2 && (v4->Flags & 2) != 0 )
      {
        v5 = 0;
        p_Size = &v4->BatchUniforms->Size;
        v7 = 26i64;
        do
        {
          if ( *p_Size )
            v5 += *p_Size;
          p_Size += 3;
          --v7;
        }
        while ( v7 );
      }
      else
      {
        v5 = 0;
      }
      if ( v5 < v1 )
        v5 = v1;
      ++v2;
      Scaleform::Render::GL::ShaderInterface::MaxRowsPerInstance = v5;
      v1 = v5;
      --v3;
    }
    while ( v3 );
    return v5;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::GL::ShaderManager::GetNumberOfUniforms(
        Scaleform::Render::GL::ShaderManager *this)
{
  return (unsigned int)Scaleform::Render::GL::HAL::GetCaps(this->pHal) >> 16;
}

__int64 __fastcall Scaleform::Render::GL::ShaderManager::HasInstancingSupport(
        Scaleform::Render::GL::ShaderManager *this)
{
  return ((unsigned int)Scaleform::Render::GL::HAL::GetCaps(this->pHal) >> 11) & 1;
}

char __fastcall Scaleform::Render::GL::ShaderObject::Init(
        Scaleform::Render::GL::ShaderObject *this,
        Scaleform::Render::GL::HAL *phal,
        Scaleform::Render::GL::HALGLProgram *program,
        const Scaleform::Render::GL::VertexShaderDesc *vdesc,
        const Scaleform::Render::GL::FragShaderDesc *fdesc)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  __int64 v8; // rsi
  Scaleform::RefCountVImpl **StagePrograms; // rbx

  this->pFDesc = fdesc;
  this->ShaderVer = ShaderVersion_GLSL110;
  this->Separated = 0;
  this->pHal = phal;
  this->pVDesc = vdesc;
  this->ComboIndex = -1;
  pObject = (Scaleform::RefCountVImpl *)this->Pipeline.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->Pipeline.pObject = 0i64;
  v8 = 6i64;
  StagePrograms = (Scaleform::RefCountVImpl **)this->StagePrograms;
  do
  {
    if ( program )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)program);
    if ( *StagePrograms )
      Scaleform::RefCountImpl::Release(*StagePrograms);
    *StagePrograms++ = (Scaleform::RefCountVImpl *)program;
    --v8;
  }
  while ( v8 );
  *(_WORD *)&this->IsLinked = 257;
  Scaleform::Render::GL::ShaderObject::initUniforms(this);
  return 1;
}

bool __fastcall Scaleform::Render::GL::ShaderObject::Init(
        Scaleform::Render::GL::ShaderObject *this,
        Scaleform::Render::GL::HAL *phal,
        Scaleform::Render::GL::ShaderDesc::ShaderVersion ver,
        unsigned int comboIndex,
        bool separable,
        Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *shaderHash,
        bool testCompilation,
        bool linkProgram)
{
  Scaleform::Render::GL::ShaderDesc::ShaderType ShaderTypeForComboIndex; // ebx
  _DWORD *v12; // rax
  __int64 v13; // r15
  __int64 v14; // rcx
  Scaleform::Render::GL::GraphicsDevice *v15; // rax
  Scaleform::RefCountVImpl **v16; // rsi
  Scaleform::RefCountVImpl **StagePrograms; // r12
  Scaleform::Render::GL::ShaderStages i; // edi
  bool Separated; // r8
  Scaleform::Render::GL::ShaderStages v20; // ebx
  Scaleform::Render::GL::ShaderDesc::ShaderVersion ShaderVer; // er9
  int v22; // ecx
  unsigned int v23; // ebx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r9
  _QWORD *v25; // rbp
  __int64 v26; // rax
  __int64 v27; // rdx
  __int64 v28; // rcx
  __int64 v29; // rcx
  __int64 v30; // r8
  __int64 v31; // rdx
  __int64 v32; // rcx
  __int64 v33; // rdx
  Scaleform::Render::GL::ShaderDesc::ShaderVersion v34; // edx
  int v35; // er8
  int v36; // er8
  unsigned __int16 ShaderIndexForComboIndex; // ax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v38; // r10
  __int64 v39; // rax
  __int64 v40; // rdx
  __int64 v41; // rcx
  __int64 v42; // rcx
  __int64 v43; // r9
  __int64 v44; // rdx
  __int64 v45; // rcx
  __int64 v46; // rdx
  const char *ShaderPipelineCode; // rax
  Scaleform::Render::GL::HALGLProgram *Program; // rbx
  Scaleform::Render::GL::HALGLShader *Shader; // rax
  Scaleform::RefCountVImpl *v50; // rcx
  Scaleform::RefCountVImpl *v51; // rbx
  bool v52; // di
  char *v53; // rbx
  Scaleform::RefCountVImpl *v54; // rcx
  char v56; // [rsp+1Fh] [rbp-10F9h]
  unsigned int v57; // [rsp+20h] [rbp-10F8h] BYREF
  unsigned int maxUniforms; // [rsp+24h] [rbp-10F4h]
  Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+28h] [rbp-10F0h] BYREF
  _QWORD v60[18]; // [rsp+40h] [rbp-10D8h] BYREF
  char modifiedShaderSource[4096]; // [rsp+D0h] [rbp-1048h] BYREF

  this->pHal = phal;
  this->Separated = separable;
  this->ShaderVer = ver;
  this->ComboIndex = comboIndex;
  *(_WORD *)&this->IsLinked = 0;
  ShaderTypeForComboIndex = Scaleform::Render::GL::ShaderDesc::GetShaderTypeForComboIndex(comboIndex, ver);
  this->pVDesc = Scaleform::Render::GL::VertexShaderDesc::GetDesc(ShaderTypeForComboIndex, ver);
  this->pFDesc = Scaleform::Render::GL::FragShaderDesc::GetDesc(ShaderTypeForComboIndex, ver);
  Scaleform::Render::GL::ShaderObject::releasePrograms(this);
  if ( !this->pVDesc || !this->pFDesc )
    return 0;
  v12 = &v60[2];
  v13 = 6i64;
  v14 = 6i64;
  do
  {
    *((_QWORD *)v12 - 2) = 0i64;
    *((_QWORD *)v12 - 1) = 0i64;
    *v12 = 0;
    v12 += 6;
    --v14;
  }
  while ( v14 );
  memset(v60, 0, sizeof(v60));
  v15 = phal->GetGraphicsDevice(phal);
  v16 = (Scaleform::RefCountVImpl **)&v60[1];
  maxUniforms = (unsigned int)Scaleform::Render::GL::GraphicsDevice::GetCaps(v15) >> 16;
  StagePrograms = (Scaleform::RefCountVImpl **)this->StagePrograms;
  for ( i = ShaderStage_Vertex; (unsigned int)i < ShaderStage_Count; ++i )
  {
    Separated = this->Separated;
    v20 = i;
    ShaderVer = this->ShaderVer;
    v22 = this->ComboIndex;
    if ( i )
    {
      if ( i != ShaderStage_Frag )
      {
        v23 = 0;
        goto LABEL_15;
      }
      if ( !Separated )
      {
LABEL_13:
        v20 = ShaderStage_Vertex;
        goto LABEL_14;
      }
      LOWORD(v22) = Scaleform::Render::GL::FragShaderDesc::GetShaderIndexForComboIndex(v22, ShaderVer);
    }
    else
    {
      if ( !Separated )
        goto LABEL_13;
      LOWORD(v22) = Scaleform::Render::GL::VertexShaderDesc::GetShaderIndexForComboIndex(v22, ShaderVer);
    }
LABEL_14:
    v23 = (unsigned __int16)v22 | (v20 << 16) | 0x80000000;
LABEL_15:
    pTable = shaderHash->mHash.pTable;
    v57 = v23;
    v25 = &v60[3 * (unsigned int)i];
    if ( pTable )
    {
      v26 = 5381i64;
      v27 = 4i64;
      do
      {
        v28 = (unsigned __int8)*(&v56 + v27--);
        v29 = 65599 * v26 + v28;
        v26 = v29;
      }
      while ( v27 );
      v30 = v29 & pTable->SizeMask;
      v31 = v30;
      v32 = (__int64)&pTable[3 * v30 + 1];
      if ( *(_QWORD *)v32 != -2i64 && *(_QWORD *)(v32 + 8) == v30 )
      {
        while ( *(_QWORD *)(v32 + 8) != v30 || *(_DWORD *)(v32 + 16) != v23 )
        {
          v31 = *(_QWORD *)v32;
          if ( *(_QWORD *)v32 == -1i64 )
            goto LABEL_33;
          v32 = (__int64)&pTable[3 * v31 + 1];
        }
        if ( v31 >= 0 )
        {
          v33 = (__int64)&pTable[3 * v31 + 2];
          if ( v33 )
          {
            if ( v25 )
              Scaleform::Render::GL::ShaderHashEntry::operator=(
                (Scaleform::Render::GL::ShaderHashEntry *)&v60[3 * (unsigned int)i],
                (const Scaleform::Render::GL::ShaderHashEntry *)(v33 + 8));
            if ( *v16 )
              Scaleform::Render::RenderBuffer::AddRef(*v16);
            if ( *StagePrograms )
              Scaleform::RefCountImpl::Release(*StagePrograms);
            *StagePrograms = *v16;
            goto LABEL_64;
          }
        }
      }
    }
LABEL_33:
    if ( !this->Separated )
    {
      v34 = this->ShaderVer;
      v35 = this->ComboIndex;
      if ( i )
      {
        if ( i != ShaderStage_Frag )
        {
          v36 = 0;
          goto LABEL_40;
        }
        ShaderIndexForComboIndex = Scaleform::Render::GL::FragShaderDesc::GetShaderIndexForComboIndex(v35, v34);
      }
      else
      {
        ShaderIndexForComboIndex = Scaleform::Render::GL::VertexShaderDesc::GetShaderIndexForComboIndex(v35, v34);
      }
      v36 = ShaderIndexForComboIndex | ((i & 0x7FFF) << 16);
LABEL_40:
      v38 = shaderHash->mHash.pTable;
      v57 = v36;
      if ( v38 )
      {
        v39 = 5381i64;
        v40 = 4i64;
        do
        {
          v41 = (unsigned __int8)*(&v56 + v40--);
          v42 = 65599 * v39 + v41;
          v39 = v42;
        }
        while ( v40 );
        v43 = v42 & v38->SizeMask;
        v44 = v43;
        v45 = (__int64)&v38[3 * v43 + 1];
        if ( *(_QWORD *)v45 != -2i64 && *(_QWORD *)(v45 + 8) == v43 )
        {
          while ( *(_QWORD *)(v45 + 8) != v43 || *(_DWORD *)(v45 + 16) != v36 )
          {
            v44 = *(_QWORD *)v45;
            if ( *(_QWORD *)v45 == -1i64 )
              goto LABEL_53;
            v45 = (__int64)&v38[3 * v44 + 1];
          }
          if ( v44 >= 0 )
          {
            v46 = (__int64)&v38[3 * v44 + 2];
            if ( v46 )
            {
              if ( v25 )
                Scaleform::Render::GL::ShaderHashEntry::operator=(
                  (Scaleform::Render::GL::ShaderHashEntry *)&v60[3 * (unsigned int)i],
                  (const Scaleform::Render::GL::ShaderHashEntry *)(v46 + 8));
              goto LABEL_64;
            }
          }
        }
      }
    }
LABEL_53:
    ShaderPipelineCode = Scaleform::Render::GL::ShaderObject::getShaderPipelineCode(
                           this,
                           i,
                           maxUniforms,
                           modifiedShaderSource);
    if ( ShaderPipelineCode )
    {
      if ( this->Separated )
      {
        Program = Scaleform::Render::GL::ShaderObject::createProgram(this, i, ShaderPipelineCode);
        if ( *v16 )
          Scaleform::RefCountImpl::Release(*v16);
        *v16 = (Scaleform::RefCountVImpl *)Program;
      }
      else
      {
        Shader = Scaleform::Render::GL::ShaderObject::createShader(this, i, ShaderPipelineCode);
        v50 = *(v16 - 1);
        v51 = (Scaleform::RefCountVImpl *)Shader;
        if ( v50 )
          Scaleform::RefCountImpl::Release(v50);
        *(v16 - 1) = v51;
      }
      if ( !*v16 && !*(v16 - 1) )
      {
        v52 = 0;
        goto LABEL_70;
      }
      key.pSecond = (const Scaleform::Render::GL::ShaderHashEntry *)&v60[3 * (unsigned int)i];
      key.pFirst = &v57;
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        &shaderHash->mHash,
        shaderHash,
        &key);
    }
LABEL_64:
    ++StagePrograms;
    v16 += 3;
  }
  v52 = !linkProgram || Scaleform::Render::GL::ShaderObject::link(this, shaderHash, testCompilation);
LABEL_70:
  v53 = modifiedShaderSource;
  do
  {
    v54 = (Scaleform::RefCountVImpl *)*((_QWORD *)v53 - 2);
    v53 -= 24;
    --v13;
    if ( v54 )
      Scaleform::RefCountImpl::Release(v54);
    if ( *(_QWORD *)v53 )
      Scaleform::RefCountImpl::Release(*(Scaleform::RefCountVImpl **)v53);
  }
  while ( v13 );
  return v52;
}

bool __fastcall Scaleform::Render::GL::ShaderManager::Initialize(
        Scaleform::Render::GL::ShaderManager *this,
        Scaleform::Render::GL::HAL *phal,
        unsigned int vmcFlags)
{
  Scaleform::Render::GL::HAL_vtbl *v4; // rax
  unsigned int *p_Caps; // r15
  Scaleform::Render::GL::GraphicsDevice *v7; // rax
  const char *v8; // rdi
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  unsigned int v10; // edi
  bool v11; // si
  unsigned int v12; // eax
  bool result; // al
  bool v14; // al
  bool v15; // zf
  bool v16; // al
  bool v17; // r12
  bool *p_IsLinked; // r14
  unsigned int v19; // esi
  char *v20; // r13
  Scaleform::Render::GL::ShaderDesc::ShaderType ShaderTypeForComboIndex; // eax
  Scaleform::Render::GL::ShaderDesc::ShaderType v22; // ebp
  const Scaleform::Render::GL::FragShaderDesc *Desc; // r14
  const Scaleform::Render::GL::VertexShaderDesc *v24; // rax
  unsigned int Flags; // ecx
  unsigned int v26; // eax
  char *v27; // rsi
  bool *p_IsValidated; // rbp
  bool *v29; // [rsp+40h] [rbp-3D8h]
  unsigned int v30; // [rsp+48h] [rbp-3D0h] BYREF
  unsigned int v31; // [rsp+4Ch] [rbp-3CCh] BYREF
  Scaleform::Render::GL::HAL *phala; // [rsp+50h] [rbp-3C8h]
  char v33[880]; // [rsp+60h] [rbp-3B8h] BYREF

  this->pHal = phal;
  v4 = phal->Scaleform::Render::ShaderHAL<Scaleform::Render::GL::ShaderManager,Scaleform::Render::GL::ShaderInterface>::Scaleform::Render::HAL::Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  phala = phal;
  p_Caps = &v4->GetGraphicsDevice(phal)->Caps;
  v7 = this->pHal->GetGraphicsDevice(this->pHal);
  v8 = (const char *)v7->glGetString(v7, 35724u);
  if ( !v8 )
    return Scaleform::Render::GL::ShaderDesc::IsShaderVersionSupported(this->GLSLVersion);
  v9 = this->pHal->GetGraphicsDevice(this->pHal);
  if ( v9->glGetError(v9) )
    return Scaleform::Render::GL::ShaderDesc::IsShaderVersionSupported(this->GLSLVersion);
  sscanf_s(v8, "%u.%u", &v30, &v31);
  v10 = 0;
  v11 = 1;
  if ( v30 > 1 || (v12 = v31, v31 >= 0x32) )
  {
    this->GLSLVersion = ShaderVersion_GLSL150;
    result = Scaleform::Render::GL::ShaderDesc::IsShaderVersionSupported(ShaderVersion_GLSL150);
    if ( !result )
      return result;
  }
  else
  {
    *p_Caps &= ~0x800u;
    if ( v12 >= 0x14 )
    {
      this->GLSLVersion = ShaderVersion_GLSL120;
      result = Scaleform::Render::GL::ShaderDesc::IsShaderVersionSupported(ShaderVersion_GLSL120);
      if ( !result )
        return result;
    }
    else
    {
      this->GLSLVersion = ShaderVersion_GLSL110;
      result = Scaleform::Render::GL::ShaderDesc::IsShaderVersionSupported(ShaderVersion_GLSL110);
      if ( !result )
        return result;
    }
  }
  v14 = Scaleform::Render::GL::HAL::CheckExtension(this->pHal, 134i64);
  this->SeparablePipelineExtension = v14;
  if ( (vmcFlags & 8) != 0 || (v15 = !v14, v16 = 1, v15) )
    v16 = 0;
  this->SeparablePipelines = v16;
  if ( (vmcFlags & 2) != 0 || (*p_Caps & 0x200) == 0 )
    v11 = 0;
  this->ShouldUseBinaryShaders = v11;
  this->SingleBinaryShaderFile = (vmcFlags & 4) == 0;
  if ( v11 )
  {
    this->SeparablePipelines = 0;
    Scaleform::Render::GL::ShaderManager::loadBinaryShaders(this);
  }
  if ( !Scaleform::Render::GL::ShaderManager::GetDynamicLoopSupport(this) )
    *p_Caps |= 0x100u;
  if ( (vmcFlags & 0x4000000) == 0 )
  {
    v17 = (vmcFlags & 0x10) != 0;
    memset(v33, 0, 0x369ui64);
    p_IsLinked = &this->StaticShaders[0].IsLinked;
    v19 = 0;
    v29 = &this->StaticShaders[0].IsLinked;
    v20 = v33;
    do
    {
      if ( !*p_IsLinked )
      {
        ShaderTypeForComboIndex = Scaleform::Render::GL::ShaderDesc::GetShaderTypeForComboIndex(v19, this->GLSLVersion);
        v22 = ShaderTypeForComboIndex;
        if ( ShaderTypeForComboIndex )
        {
          Desc = Scaleform::Render::GL::FragShaderDesc::GetDesc(ShaderTypeForComboIndex, this->GLSLVersion);
          v24 = Scaleform::Render::GL::VertexShaderDesc::GetDesc(v22, this->GLSLVersion);
          if ( Desc )
          {
            if ( v24 )
            {
              Flags = Desc->Flags;
              if ( (Flags & 0x10) == 0 || (*p_Caps & 0x100) == 0 )
              {
                v26 = v24->Flags;
                if ( (v26 & 8) == 0
                  && (Flags & 8) == 0
                  && ((*p_Caps & 0x400) == 0 || (v26 & 1) == 0 && (Flags & 1) == 0)
                  && ((Flags & 4) == 0 && (v26 & 4) == 0
                   || (Scaleform::Render::GL::HAL::GetCaps(this->pHal) & 0x800) != 0) )
                {
                  if ( !Scaleform::Render::GL::ShaderObject::Init(
                          &this->StaticShaders[v19],
                          phala,
                          this->GLSLVersion,
                          v19,
                          this->SeparablePipelines,
                          &this->CompiledShaderHash,
                          0,
                          !v17) )
                    return 0;
                  *v20 = 1;
                  if ( !v17 )
                    Scaleform::Render::GL::ShaderManager::addShaderToValidationQueue(this, v19);
                }
              }
            }
          }
          p_IsLinked = v29;
        }
      }
      p_IsLinked += 936;
      ++v19;
      ++v20;
      v29 = p_IsLinked;
    }
    while ( v19 < 0x369 );
    if ( v17 )
    {
      v27 = v33;
      p_IsValidated = &this->StaticShaders[0].IsValidated;
      do
      {
        if ( *v27 )
        {
          if ( !Scaleform::Render::GL::ShaderObject::link(&this->StaticShaders[v10], &this->CompiledShaderHash, 0) )
            return 0;
          if ( !*p_IsValidated )
          {
            this->ValidationQueue[this->NextValidationEntry++] = v10;
            this->ValidationQueue[this->NextValidationEntry] = -1;
          }
        }
        ++v10;
        ++v27;
        p_IsValidated += 936;
      }
      while ( v10 < 0x369 );
    }
  }
  if ( this->ShouldUseBinaryShaders )
    Scaleform::Render::GL::ShaderManager::saveBinaryShaders(this);
  return 1;
}

_BOOL8 __fastcall Scaleform::Render::GL::ShaderObject::IsInitialized(Scaleform::Render::GL::ShaderObject *this)
{
  return this->IsLinked;
}

void __fastcall Scaleform::Render::GL::ShaderManager::PerformShaderValidation(
        Scaleform::Render::GL::ShaderManager *this)
{
  unsigned int v2; // ebp
  int *ValidationQueue; // rdi
  char v4; // r14
  int *v5; // rsi
  __int64 v6; // rsi
  bool v7; // sf
  __int64 v8; // rdx
  __int64 v9; // r8

  v2 = 0;
  ValidationQueue = this->ValidationQueue;
  v4 = 0;
  if ( this->ValidationQueue[0] >= 0 )
  {
    v5 = this->ValidationQueue;
    do
    {
      if ( Scaleform::Render::GL::ShaderObject::validate(&this->StaticShaders[*v5], &this->CompiledShaderHash, 0) != Validation_NotInitialized )
      {
        v4 = 1;
        *v5 = -1;
      }
      v6 = ++v2 + 204309i64;
      v7 = *((int *)&this->__vftable + v6) < 0;
      v5 = (int *)((char *)this + 4 * v6);
    }
    while ( !v7 );
  }
  v8 = 0i64;
  if ( v2 )
  {
    v9 = v2;
    do
    {
      if ( *ValidationQueue >= 0 )
      {
        this->ValidationQueue[v8] = *ValidationQueue;
        v8 = (unsigned int)(v8 + 1);
      }
      ++ValidationQueue;
      --v9;
    }
    while ( v9 );
  }
  this->NextValidationEntry = 0;
  if ( v4 )
  {
    if ( (this->pHal->ConfigFlags & 4) != 0 )
      Scaleform::Render::GL::ShaderManager::saveBinaryShaders(this);
  }
}

void __fastcall Scaleform::Render::GL::ShaderManager::Reset(Scaleform::Render::GL::ShaderManager *this, bool lost)
{
  Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_CompiledShaderHash; // rdi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 v6; // rbx
  unsigned __int64 SizeMask; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v8; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v9; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v10; // rsi
  Scaleform::Render::GL::GraphicsDevice *v11; // rax
  Scaleform::Render::GL::GraphicsDevice *v12; // rax
  unsigned __int64 v13; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v14; // rcx
  Scaleform::HashLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>,2,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > *p_DynamicLoopShaderHash; // r15
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *v16; // rax
  unsigned __int64 v17; // rbx
  Scaleform::HashLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>,2,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > *v18; // r14
  unsigned __int64 v19; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *v20; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *v21; // rdi
  Scaleform::Render::GL::ShaderObject *v22; // rdi
  __int64 v23; // rsi
  Scaleform::Render::GL::GraphicsDevice *v24; // rax
  Scaleform::Render::GL::GraphicsDevice *v25; // rax
  unsigned __int64 v26; // rdx
  unsigned __int64 *v27; // rcx
  __int64 v28; // rcx
  __int64 v29; // rdx
  Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> *p_Pipeline; // rdi
  __int64 v31; // rbp
  __int64 v32; // rax
  Scaleform::RefCountVImpl **v33; // rbx
  __int64 v34; // rsi

  if ( this->ShouldUseBinaryShaders )
  {
    if ( !lost )
    {
      Scaleform::Render::GL::ShaderManager::saveBinaryShaders(this);
LABEL_5:
      p_CompiledShaderHash = &this->CompiledShaderHash;
      pTable = this->CompiledShaderHash.mHash.pTable;
      if ( pTable )
      {
        SizeMask = pTable->SizeMask;
        v6 = 0i64;
        v8 = pTable + 1;
        do
        {
          if ( v8->EntryCount != -2i64 )
            break;
          ++v6;
          v8 += 3;
        }
        while ( v6 <= SizeMask );
      }
      else
      {
        v6 = 0i64;
        p_CompiledShaderHash = 0i64;
      }
      while ( p_CompiledShaderHash )
      {
        v9 = p_CompiledShaderHash->mHash.pTable;
        if ( !p_CompiledShaderHash->mHash.pTable || (signed __int64)v6 > (signed __int64)v9->SizeMask )
          break;
        v10 = &v9[3 * v6];
        if ( v10[3].EntryCount )
        {
          v11 = this->pHal->GetGraphicsDevice(this->pHal);
          if ( v11->glIsProgram(v11, (Scaleform::Render::GL::HALGLProgram *)v10[3].EntryCount) )
          {
            v12 = this->pHal->GetGraphicsDevice(this->pHal);
            v12->glDeleteProgram(v12, (Scaleform::Render::GL::HALGLProgram *)v10[3].EntryCount);
          }
        }
        v13 = p_CompiledShaderHash->mHash.pTable->SizeMask;
        if ( (__int64)v6 <= (__int64)v13 && ++v6 <= v13 )
        {
          v14 = &p_CompiledShaderHash->mHash.pTable[3 * v6 + 1];
          do
          {
            if ( v14->EntryCount != -2i64 )
              break;
            ++v6;
            v14 += 3;
          }
          while ( v6 <= v13 );
        }
      }
    }
  }
  else if ( !lost )
  {
    goto LABEL_5;
  }
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>(&this->CompiledShaderHash.mHash);
  p_DynamicLoopShaderHash = &this->DynamicLoopShaderHash;
  v16 = this->DynamicLoopShaderHash.mHash.pTable;
  if ( v16 )
  {
    v19 = v16->SizeMask;
    v17 = 0i64;
    v20 = v16 + 1;
    do
    {
      if ( v20->EntryCount != -2i64 )
        break;
      ++v17;
      v20 = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *)((char *)v20 + 40);
    }
    while ( v17 <= v19 );
    v18 = &this->DynamicLoopShaderHash;
  }
  else
  {
    v17 = 0i64;
    v18 = 0i64;
  }
  while ( v18 )
  {
    v21 = v18->mHash.pTable;
    if ( !v18->mHash.pTable || (signed __int64)v17 > (signed __int64)v21->SizeMask )
      break;
    v22 = (Scaleform::Render::GL::ShaderObject *)*(&v21[3].EntryCount + 5 * v17);
    if ( !lost )
    {
      v23 = 6i64;
      do
      {
        if ( v22->StagePrograms[0].pObject )
        {
          v24 = this->pHal->GetGraphicsDevice(this->pHal);
          if ( v24->glIsProgram(v24, v22->StagePrograms[0].pObject) )
          {
            v25 = this->pHal->GetGraphicsDevice(this->pHal);
            v25->glDeleteProgram(v25, v22->StagePrograms[0].pObject);
          }
        }
        --v23;
      }
      while ( v23 );
    }
    if ( v22 )
    {
      Scaleform::Render::GL::ShaderObject::~ShaderObject(v22);
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v22);
    }
    v26 = v18->mHash.pTable->SizeMask;
    if ( (__int64)v17 <= (__int64)v26 && ++v17 <= v26 )
    {
      v27 = &v18->mHash.pTable[1].EntryCount + 5 * v17;
      do
      {
        if ( *v27 != -2i64 )
          break;
        ++v17;
        v27 += 5;
      }
      while ( v17 <= v26 );
    }
  }
  if ( p_DynamicLoopShaderHash->mHash.pTable )
  {
    v28 = 0i64;
    v29 = p_DynamicLoopShaderHash->mHash.pTable->SizeMask + 1;
    do
    {
      if ( *(unsigned __int64 *)((char *)&p_DynamicLoopShaderHash->mHash.pTable[1].EntryCount + v28) != -2i64 )
        *(unsigned __int64 *)((char *)&p_DynamicLoopShaderHash->mHash.pTable[1].EntryCount + v28) = -2i64;
      v28 += 40i64;
      --v29;
    }
    while ( v29 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, p_DynamicLoopShaderHash->mHash.pTable);
    p_DynamicLoopShaderHash->mHash.pTable = 0i64;
  }
  p_Pipeline = &this->StaticShaders[0].Pipeline;
  v31 = 873i64;
  do
  {
    if ( LOBYTE(p_Pipeline[-1].pObject) && p_Pipeline->pObject )
    {
      v32 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HALGLProgramPipeline *))p_Pipeline[-5].pObject->__vftable[110].~RefCountImplCore)(p_Pipeline[-5].pObject);
      (*(void (__fastcall **)(__int64, __int64, Scaleform::Ptr<Scaleform::Render::GL::HALGLProgramPipeline> *))(*(_QWORD *)v32 + 288i64))(
        v32,
        1i64,
        p_Pipeline);
      if ( p_Pipeline->pObject )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)p_Pipeline->pObject);
      p_Pipeline->pObject = 0i64;
    }
    v33 = (Scaleform::RefCountVImpl **)&p_Pipeline[1];
    v34 = 6i64;
    do
    {
      if ( *v33 )
        Scaleform::RefCountImpl::Release(*v33);
      *v33++ = 0i64;
      --v34;
    }
    while ( v34 );
    p_Pipeline[-4].pObject = 0i64;
    p_Pipeline[-3].pObject = 0i64;
    p_Pipeline[-5].pObject = 0i64;
    LOWORD(p_Pipeline[111].pObject) = 0;
    p_Pipeline += 117;
    --v31;
  }
  while ( v31 );
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

bool __fastcall Scaleform::Render::GL::ShaderInterface::SetFilterShader(
        Scaleform::Render::GL::ShaderInterface *this,
        const Scaleform::Render::Matrix2x4<float> *viewMatrix,
        const Scaleform::Render::Filter *filter,
        Scaleform::Render::GL::ShaderDesc::ShaderType shaderType,
        unsigned int pass,
        unsigned int passCount,
        const Scaleform::Render::VertexFormat *pvf)
{
  Scaleform::Render::GL::HAL *pHal; // rbx
  Scaleform::Render::GL::ShaderObject *DynamicLoopShaderWithLiteralReplaced; // rax
  float fsize[2]; // [rsp+40h] [rbp-48h] BYREF
  __int64 v15; // [rsp+48h] [rbp-40h]
  Scaleform::Render::GL::ShaderManager::DynamicLoopKey keyParams; // [rsp+50h] [rbp-38h] BYREF

  if ( !Scaleform::Render::GL::ShaderManager::GetDynamicLoopSupport(&this->pHal->SManager)
    && ((Scaleform::Render::GL::FragShaderDesc::GetDesc(shaderType, this->pHal->SManager.GLSLVersion)->Flags & 0x10) != 0
     || (Scaleform::Render::GL::VertexShaderDesc::GetDesc(shaderType, this->pHal->SManager.GLSLVersion)->Flags & 0x10) != 0) )
  {
    pHal = this->pHal;
    *(_QWORD *)fsize = 0i64;
    v15 = 0i64;
    Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::GenerateBlurFilterParameters(
      &pHal->SManager,
      (const Scaleform::Render::BlurFilterParams *)&filter[1],
      shaderType,
      pass,
      fsize,
      viewMatrix,
      (float *)&keyParams,
      passCount);
    *(_QWORD *)&keyParams.BlurX = *(_QWORD *)fsize;
    keyParams.ShaderType = shaderType;
    DynamicLoopShaderWithLiteralReplaced = Scaleform::Render::GL::ShaderManager::getDynamicLoopShaderWithLiteralReplaced(
                                             &pHal->SManager,
                                             &keyParams);
    this->CurShader.pShaderObj = DynamicLoopShaderWithLiteralReplaced;
    if ( DynamicLoopShaderWithLiteralReplaced )
    {
      this->CurShader.pVDesc = DynamicLoopShaderWithLiteralReplaced->pVDesc;
      this->CurShader.pFDesc = DynamicLoopShaderWithLiteralReplaced->pFDesc;
      Scaleform::Render::GL::ShaderObject::ApplyShader(DynamicLoopShaderWithLiteralReplaced);
      LOBYTE(DynamicLoopShaderWithLiteralReplaced) = 1;
    }
  }
  else
  {
    LOBYTE(DynamicLoopShaderWithLiteralReplaced) = this->SetStaticShader(this, shaderType, pvf);
  }
  return (char)DynamicLoopShaderWithLiteralReplaced;
}

bool __fastcall Scaleform::Render::GL::ShaderInterface::SetStaticShader(
        Scaleform::Render::GL::ShaderInterface *this,
        Scaleform::Render::GL::ShaderDesc::ShaderType shader,
        const Scaleform::Render::VertexFormat *__formal)
{
  Scaleform::Render::GL::ShaderObject *StaticShader; // rax
  bool result; // al

  StaticShader = Scaleform::Render::GL::HAL::GetStaticShader(this->pHal, shader);
  if ( this->CurShader.pShaderObj == StaticShader )
    return 1;
  this->CurShader.pShaderObj = StaticShader;
  if ( StaticShader && StaticShader->IsLinked )
  {
    this->CurShader.pVDesc = StaticShader->pVDesc;
    this->CurShader.pFDesc = StaticShader->pFDesc;
    Scaleform::Render::GL::ShaderObject::ApplyShader(StaticShader);
    return 1;
  }
  result = 0;
  this->CurShader.pVDesc = 0i64;
  this->CurShader.pFDesc = 0i64;
  return result;
}

void __fastcall Scaleform::Render::GL::ShaderInterface::SetTexture(
        Scaleform::Render::GL::ShaderInterface *this,
        const Scaleform::Render::GL::ShaderPair *sd,
        unsigned int var,
        Scaleform::Render::Texture *ptex,
        const Scaleform::Render::ImageFillMode *fm,
        unsigned int index)
{
  int v7; // er10
  int Location; // esi
  __int64 v9; // rax
  Scaleform::Render::GL::ShaderInterface::TextureSamplerUniform *i; // rdx
  char *v11; // r9
  signed int v12; // er8
  signed int v13; // ecx

  v7 = 0;
  Location = sd->pFDesc->Uniforms[var].Location;
  v9 = 0i64;
  for ( i = this->TextureUniforms; i->UniformVar >= 0 && i->UniformVar != var; ++i )
  {
    ++v7;
    if ( ++v9 >= 4 )
      return;
  }
  v11 = (char *)this + 24 * v7;
  *((_DWORD *)v11 + 1028) = var;
  if ( v11 != (char *)-4120i64 && v7 < 4 )
  {
    if ( ptex->TextureCount )
    {
      v12 = index + 1;
      do
      {
        v13 = v12;
        *(_DWORD *)&v11[4 * (v12 - 1) + 4120] = v12 + Location - 1;
        if ( v12 < *((_DWORD *)v11 + 1029) )
          v13 = *((_DWORD *)v11 + 1029);
        ++v12;
        *((_DWORD *)v11 + 1029) = v13;
      }
      while ( -1 - index + v12 < ptex->TextureCount );
    }
    ptex->ApplyTexture(ptex, Location + index, fm);
  }
}

// attributes: thunk
__int64 __fastcall Scaleform::Render::GL::ShaderManager::SetupFilter(
        Scaleform::Render::GL::ShaderManager *this,
        const Scaleform::Render::Filter *filter,
        unsigned int fillFlags,
        unsigned int *passes)
{
  return Scaleform::Render::StaticShaderManager<Scaleform::Render::GL::ShaderDesc,Scaleform::Render::GL::VertexShaderDesc,Scaleform::Render::GL::Uniform,Scaleform::Render::GL::ShaderInterface,Scaleform::Render::GL::Texture>::GetFilterPasses(
           this,
           filter,
           fillFlags,
           passes);
}

_BOOL8 __fastcall Scaleform::Render::GL::ShaderManager::UsingSeparateShaderObject(
        Scaleform::Render::GL::ShaderManager *this)
{
  return this->SeparablePipelines;
}

void __fastcall Scaleform::Render::GL::ShaderManager::addShaderToValidationQueue(
        Scaleform::Render::GL::ShaderManager *this,
        unsigned int shaderComboIndex)
{
  if ( !this->StaticShaders[shaderComboIndex].IsValidated )
  {
    this->ValidationQueue[this->NextValidationEntry++] = shaderComboIndex;
    this->ValidationQueue[this->NextValidationEntry] = -1;
  }
}

Scaleform::Render::GL::HALGLProgram *__fastcall Scaleform::Render::GL::ShaderObject::createProgram(
        Scaleform::Render::GL::ShaderObject *this,
        Scaleform::Render::GL::ShaderStages stage,
        const char *shaderCode)
{
  __int64 v5; // rax
  signed int v6; // ebx
  Scaleform::RefCountVImpl *v7; // r15
  unsigned int v8; // esi
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  Scaleform::Render::GL::GraphicsDevice *v10; // rax
  Scaleform::Render::GL::GraphicsDevice *v11; // rax
  __int64 v12; // rax
  Scaleform::Render::GL::HALGLProgram *v13; // rsi
  Scaleform::Render::GL::GraphicsDevice *v14; // rax
  __int64 v15; // r14
  Scaleform::Render::GL::GraphicsDevice *v16; // rax
  Scaleform::Render::GL::GraphicsDevice *v17; // rax
  Scaleform::Render::GL::GraphicsDevice *v18; // rax
  Scaleform::Render::GL::GraphicsDevice *v19; // rax
  Scaleform::Render::GL::GraphicsDevice *v20; // rax
  Scaleform::Render::GL::GraphicsDevice *v21; // rax
  Scaleform::Render::GL::GraphicsDevice *v22; // rax
  const char *v24; // [rsp+60h] [rbp+18h] BYREF

  v24 = shaderCode;
  v5 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         24i64);
  v6 = 0;
  v7 = (Scaleform::RefCountVImpl *)v5;
  if ( v5 )
  {
    *(_QWORD *)v5 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v5 + 8) = 1;
    *(_QWORD *)v5 = &Scaleform::Render::GL::HALGLTexture::`vftable';
    *(_DWORD *)(v5 + 16) = 0;
  }
  else
  {
    v7 = 0i64;
  }
  switch ( stage )
  {
    case ShaderStage_Vertex:
      v8 = 35633;
      break;
    case ShaderStage_Frag:
      v8 = 35632;
      break;
    case ShaderStage_Geometry:
      v8 = 36313;
      break;
    case ShaderStage_Hull:
      v8 = 36488;
      break;
    case ShaderStage_Domain:
      v8 = 36487;
      break;
    case ShaderStage_Compute:
      v8 = 37305;
      break;
    default:
      v8 = 0;
      break;
  }
  v9 = this->pHal->GetGraphicsDevice(this->pHal);
  v9->glCreateShader(v9, v8, (Scaleform::Render::GL::HALGLShader *)v7);
  v10 = this->pHal->GetGraphicsDevice(this->pHal);
  v10->glShaderSource(v10, (Scaleform::Render::GL::HALGLShader *)v7, 1, &v24, 0i64);
  v11 = this->pHal->GetGraphicsDevice(this->pHal);
  v11->glCompileShader(v11, (Scaleform::Render::GL::HALGLShader *)v7);
  v12 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
          Scaleform::Memory::pGlobalHeap,
          24i64);
  v13 = (Scaleform::Render::GL::HALGLProgram *)v12;
  if ( v12 )
  {
    *(_QWORD *)v12 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v12 + 8) = 1;
    *(_QWORD *)v12 = &Scaleform::Render::GL::HALGLTexture::`vftable';
    *(_DWORD *)(v12 + 16) = 0;
  }
  else
  {
    v13 = 0i64;
  }
  v14 = this->pHal->GetGraphicsDevice(this->pHal);
  v14->glCreateProgram(v14, v13);
  if ( stage == ShaderStage_Vertex && this->pVDesc->NumAttribs > 0 )
  {
    v15 = 48i64;
    do
    {
      v16 = this->pHal->GetGraphicsDevice(this->pHal);
      v16->glBindAttribLocation(v16, v13, v6, *(const char **)((char *)&this->pVDesc->Type + v15));
      v15 += 16i64;
      ++v6;
    }
    while ( v6 < this->pVDesc->NumAttribs );
  }
  v17 = this->pHal->GetGraphicsDevice(this->pHal);
  v17->glProgramParameteri(v17, v13, 33368u, 1);
  v18 = this->pHal->GetGraphicsDevice(this->pHal);
  if ( (Scaleform::Render::GL::GraphicsDevice::GetCaps(v18) & 0x200) != 0 )
  {
    v19 = this->pHal->GetGraphicsDevice(this->pHal);
    v19->glProgramParameteri(v19, v13, 33367u, 1);
  }
  v20 = this->pHal->GetGraphicsDevice(this->pHal);
  v20->glAttachShader(v20, v13, (Scaleform::Render::GL::HALGLShader *)v7);
  v21 = this->pHal->GetGraphicsDevice(this->pHal);
  v21->glLinkProgram(v21, v13);
  v22 = this->pHal->GetGraphicsDevice(this->pHal);
  v22->glDeleteShader(v22, (Scaleform::Render::GL::HALGLShader *)v7);
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  return v13;
}

char __fastcall Scaleform::Render::GL::ShaderObject::createProgramOrPipeline(
        Scaleform::Render::GL::ShaderObject *this,
        Scaleform::Render::GL::ShaderHashEntry *shaders,
        bool separable,
        bool testCompilation)
{
  bool v4; // r12
  bool v5; // r13
  Scaleform::RefCountVImpl **StagePrograms; // rdi
  __int64 v9; // rax
  signed int v10; // ebp
  Scaleform::RefCountVImpl *v11; // rsi
  Scaleform::Render::GL::GraphicsDevice *v12; // rax
  Scaleform::RefCountVImpl **v13; // rsi
  __int64 v14; // r15
  Scaleform::Render::GL::GraphicsDevice *v15; // rax
  Scaleform::RefCountVImpl **p_Pipeline; // r12
  Scaleform::RefCountVImpl *v17; // rax
  Scaleform::RefCountVImpl *v18; // rdi
  Scaleform::Render::GL::GraphicsDevice *v19; // rax
  Scaleform::Render::GL::GraphicsDevice *v20; // rax
  unsigned int v21; // esi
  Scaleform::RefCountVImpl **v22; // r15
  Scaleform::RefCountVImpl **p_Program; // r14
  Scaleform::Render::GL::GraphicsDevice *v24; // rax
  __int64 v25; // r8
  Scaleform::Render::GL::GraphicsDevice *v26; // rax
  __int64 v27; // rsi
  Scaleform::Render::GL::GraphicsDevice *v28; // rax
  Scaleform::Render::GL::GraphicsDevice *v29; // rax
  Scaleform::Render::GL::GraphicsDevice *v30; // rax
  Scaleform::Render::GL::GraphicsDevice *v31; // rax
  Scaleform::Render::GL::GraphicsDevice *v32; // rax
  int v34[18]; // [rsp+20h] [rbp-48h] BYREF

  v4 = testCompilation;
  v5 = separable;
  if ( separable )
  {
    p_Pipeline = (Scaleform::RefCountVImpl **)&this->Pipeline;
    v10 = 0;
    if ( !this->Pipeline.pObject )
    {
      v17 = (Scaleform::RefCountVImpl *)Scaleform::Memory::pGlobalHeap->Alloc(
                                          Scaleform::Memory::pGlobalHeap,
                                          24i64,
                                          0i64);
      v18 = v17;
      if ( v17 )
      {
        LODWORD(v17[1].__vftable) = 0;
        v17->__vftable = (Scaleform::RefCountVImpl_vtbl *)&Scaleform::RefCountImplCore::`vftable';
        v17->__vftable = (Scaleform::RefCountVImpl_vtbl *)&Scaleform::Render::GL::HALGLTexture::`vftable';
        v17->RefCount = 1;
      }
      else
      {
        v18 = 0i64;
      }
      if ( *p_Pipeline )
        Scaleform::RefCountImpl::Release(*p_Pipeline);
      *p_Pipeline = v18;
    }
    v19 = this->pHal->GetGraphicsDevice(this->pHal);
    v19->glGenProgramPipelines(v19, 1, (Scaleform::Render::GL::HALGLProgramPipeline **)p_Pipeline);
    v20 = this->pHal->GetGraphicsDevice(this->pHal);
    v20->glBindProgramPipeline(v20, (Scaleform::Render::GL::HALGLProgramPipeline *)*p_Pipeline);
    StagePrograms = (Scaleform::RefCountVImpl **)this->StagePrograms;
    v21 = 0;
    v22 = (Scaleform::RefCountVImpl **)this->StagePrograms;
    p_Program = (Scaleform::RefCountVImpl **)&shaders->Program;
    do
    {
      if ( *p_Program )
      {
        v24 = this->pHal->GetGraphicsDevice(this->pHal);
        switch ( v21 )
        {
          case 0u:
            v25 = 1i64;
            break;
          case 1u:
            v25 = 2i64;
            break;
          case 2u:
            v25 = 4i64;
            break;
          case 3u:
            v25 = 8i64;
            break;
          case 4u:
            v25 = 16i64;
            break;
          case 5u:
            v25 = 32i64;
            break;
          default:
            v25 = 0i64;
            break;
        }
        v24->glUseProgramStages(
          v24,
          (Scaleform::Render::GL::HALGLProgramPipeline *)*p_Pipeline,
          v25,
          (Scaleform::Render::GL::HALGLProgram *)*p_Program);
        if ( *p_Program )
          Scaleform::Render::RenderBuffer::AddRef(*p_Program);
      }
      if ( *v22 )
        Scaleform::RefCountImpl::Release(*v22);
      ++v21;
      *v22 = *p_Program;
      p_Program += 3;
      ++v22;
    }
    while ( v21 < 6 );
    v5 = separable;
    v4 = testCompilation;
  }
  else
  {
    StagePrograms = (Scaleform::RefCountVImpl **)this->StagePrograms;
    if ( this->StagePrograms[0].pObject )
      return 1;
    v9 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
           Scaleform::Memory::pGlobalHeap,
           24i64);
    v10 = 0;
    v11 = (Scaleform::RefCountVImpl *)v9;
    if ( v9 )
    {
      *(_DWORD *)(v9 + 16) = 0;
      *(_QWORD *)v9 = &Scaleform::RefCountImplCore::`vftable';
      *(_QWORD *)v9 = &Scaleform::Render::GL::HALGLTexture::`vftable';
      *(_DWORD *)(v9 + 8) = 1;
    }
    else
    {
      v11 = 0i64;
    }
    if ( *StagePrograms )
      Scaleform::RefCountImpl::Release(*StagePrograms);
    *StagePrograms = v11;
    v12 = this->pHal->GetGraphicsDevice(this->pHal);
    v12->glCreateProgram(v12, (Scaleform::Render::GL::HALGLProgram *)*StagePrograms);
    v13 = StagePrograms;
    v14 = 6i64;
    do
    {
      if ( shaders->Shader.pObject )
      {
        v15 = this->pHal->GetGraphicsDevice(this->pHal);
        v15->glAttachShader(v15, (Scaleform::Render::GL::HALGLProgram *)*StagePrograms, shaders->Shader.pObject);
        if ( *StagePrograms )
          Scaleform::Render::RenderBuffer::AddRef(*StagePrograms);
        if ( *v13 )
          Scaleform::RefCountImpl::Release(*v13);
        *v13 = *StagePrograms;
      }
      ++v13;
      ++shaders;
      --v14;
    }
    while ( v14 );
  }
  if ( *StagePrograms && this->StagePrograms[1].pObject )
  {
    if ( this->ShaderVer == ShaderVersion_GLSL150 )
    {
      v26 = this->pHal->GetGraphicsDevice(this->pHal);
      v26->glBindFragDataLocation(v26, this->StagePrograms[1].pObject, 0, "fcolor");
    }
    if ( v5 )
      goto LABEL_52;
    if ( this->pVDesc->NumAttribs > 0 )
    {
      v27 = 48i64;
      do
      {
        v28 = this->pHal->GetGraphicsDevice(this->pHal);
        v28->glBindAttribLocation(
          v28,
          (Scaleform::Render::GL::HALGLProgram *)*StagePrograms,
          v10,
          *(const char **)((char *)&this->pVDesc->Type + v27));
        v27 += 16i64;
        ++v10;
      }
      while ( v10 < this->pVDesc->NumAttribs );
    }
    v29 = this->pHal->GetGraphicsDevice(this->pHal);
    if ( (Scaleform::Render::GL::GraphicsDevice::GetCaps(v29) & 0x200) != 0 )
    {
      v30 = this->pHal->GetGraphicsDevice(this->pHal);
      v30->glProgramParameteri(v30, (Scaleform::Render::GL::HALGLProgram *)*StagePrograms, 33367u, 1);
    }
    v31 = this->pHal->GetGraphicsDevice(this->pHal);
    v31->glLinkProgram(v31, (Scaleform::Render::GL::HALGLProgram *)*StagePrograms);
    if ( !v4
      || (v32 = this->pHal->GetGraphicsDevice(this->pHal),
          v32->glGetProgramiv(v32, (Scaleform::Render::GL::HALGLProgram *)*StagePrograms, 35714u, v34),
          v34[0]) )
    {
LABEL_52:
      this->IsLinked = 1;
      return 1;
    }
  }
  return 0;
}

Scaleform::Render::GL::HALGLShader *__fastcall Scaleform::Render::GL::ShaderObject::createShader(
        Scaleform::Render::GL::ShaderObject *this,
        Scaleform::Render::GL::ShaderStages stage,
        const char *shaderCode)
{
  unsigned int v4; // ebx
  __int64 v5; // rax
  Scaleform::Render::GL::HALGLShader *v6; // rdi
  Scaleform::Render::GL::GraphicsDevice *v7; // rax
  Scaleform::Render::GL::GraphicsDevice *v8; // rax
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  const char *v11; // [rsp+50h] [rbp+18h] BYREF

  v11 = shaderCode;
  switch ( stage )
  {
    case ShaderStage_Vertex:
      v4 = 35633;
      break;
    case ShaderStage_Frag:
      v4 = 35632;
      break;
    case ShaderStage_Geometry:
      v4 = 36313;
      break;
    case ShaderStage_Hull:
      v4 = 36488;
      break;
    case ShaderStage_Domain:
      v4 = 36487;
      break;
    case ShaderStage_Compute:
      v4 = 37305;
      break;
    default:
      v4 = 0;
      break;
  }
  v5 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         24i64);
  v6 = (Scaleform::Render::GL::HALGLShader *)v5;
  if ( v5 )
  {
    *(_DWORD *)(v5 + 16) = 0;
    *(_QWORD *)v5 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v5 = &Scaleform::Render::GL::HALGLTexture::`vftable';
    *(_DWORD *)(v5 + 8) = 1;
  }
  else
  {
    v6 = 0i64;
  }
  v7 = this->pHal->GetGraphicsDevice(this->pHal);
  v7->glCreateShader(v7, v4, v6);
  v8 = this->pHal->GetGraphicsDevice(this->pHal);
  v8->glShaderSource(v8, v6, 1, &v11, 0i64);
  v9 = this->pHal->GetGraphicsDevice(this->pHal);
  v9->glCompileShader(v9, v6);
  return v6;
}

Scaleform::Render::GL::ShaderObject *__fastcall Scaleform::Render::GL::ShaderManager::getDynamicLoopShaderWithLiteralReplaced(
        Scaleform::Render::GL::ShaderManager *this,
        const Scaleform::Render::GL::ShaderManager::DynamicLoopKey *keyParams)
{
  Scaleform::Render::GL::ShaderObject **v4; // rax
  Scaleform::Render::GL::VertexShaderDesc *Desc; // rax
  Scaleform::Render::GL::ShaderDesc::ShaderVersion GLSLVersion; // edx
  Scaleform::Render::GL::VertexShaderDesc *v8; // rdi
  Scaleform::Render::GL::ShaderDesc::ShaderType ShaderType; // ecx
  Scaleform::Render::GL::FragShaderDesc *v10; // rax
  float BlurX; // xmm0_4
  float BlurY; // xmm1_4
  Scaleform::Render::GL::FragShaderDesc *v13; // rbx
  const char *pSource; // rdx
  Scaleform::Render::GL::ShaderObject *v15; // rdi
  Scaleform::MemoryHeap_vtbl *v16; // rax
  __int64 v17; // rax
  __int64 v18; // rbx
  __int64 v19; // rax
  __int64 v20; // rbx
  __int64 v21; // rax
  Scaleform::Render::GL::HALGLProgram *v22; // r14
  Scaleform::Render::GL::GraphicsDevice *v23; // rax
  signed int i; // ebx
  Scaleform::Render::GL::GraphicsDevice *v25; // r9
  Scaleform::Render::GL::HALGLShader *v26; // r15
  __int64 v27; // rdx
  Scaleform::Render::GL::GraphicsDevice *v28; // rax
  Scaleform::Render::GL::GraphicsDevice *v29; // rax
  Scaleform::Render::GL::GraphicsDevice *v30; // rax
  Scaleform::Render::GL::HAL_vtbl *v31; // rax
  __int64 v32; // rax
  Scaleform::Render::GL::GraphicsDevice *v33; // rax
  Scaleform::Render::GL::GraphicsDevice *v34; // rax
  Scaleform::Render::GL::GraphicsDevice *v35; // rax
  Scaleform::Render::GL::GraphicsDevice *v36; // rax
  Scaleform::Render::GL::ShaderObject *v37; // rax
  __int64 v38; // rax
  __int64 v39; // rax
  Scaleform::Render::GL::HALGLShader *v40; // rbx
  Scaleform::Render::GL::GraphicsDevice *v41; // rax
  float *v42; // rsi
  __int64 v43; // rbx
  Scaleform::RefCountVImpl *v44; // rcx
  int v45; // [rsp+30h] [rbp-D0h] BYREF
  int v46; // [rsp+34h] [rbp-CCh] BYREF
  Scaleform::Render::GL::ShaderObject *v47; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v48; // [rsp+40h] [rbp-C0h]
  __int64 v49; // [rsp+48h] [rbp-B8h]
  float fsize[2]; // [rsp+50h] [rbp-B0h] BYREF
  __int64 v51; // [rsp+58h] [rbp-A8h]
  Scaleform::Render::GL::FragShaderDesc *fdesc; // [rsp+60h] [rbp-A0h]
  Scaleform::Render::GL::VertexShaderDesc *vdesc; // [rsp+68h] [rbp-98h]
  __int64 v54[2]; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeRef key; // [rsp+80h] [rbp-80h] BYREF
  char shaderCode[4096]; // [rsp+90h] [rbp-70h] BYREF
  char v57[4096]; // [rsp+1090h] [rbp+F90h] BYREF
  char v58[4096]; // [rsp+2090h] [rbp+1F90h] BYREF

  v4 = Scaleform::Hash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>,Scaleform::HashSet<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>>::Get(
         &this->DynamicLoopShaderHash,
         keyParams);
  if ( v4 )
    return *v4;
  Desc = (Scaleform::Render::GL::VertexShaderDesc *)Scaleform::Render::GL::VertexShaderDesc::GetDesc(
                                                      keyParams->ShaderType,
                                                      this->GLSLVersion);
  GLSLVersion = this->GLSLVersion;
  v8 = Desc;
  ShaderType = keyParams->ShaderType;
  vdesc = Desc;
  v10 = (Scaleform::Render::GL::FragShaderDesc *)Scaleform::Render::GL::FragShaderDesc::GetDesc(ShaderType, GLSLVersion);
  BlurX = keyParams->BlurX;
  BlurY = keyParams->BlurY;
  v13 = v10;
  fdesc = v10;
  fsize[0] = BlurX;
  v54[0] = (__int64)shaderCode;
  v54[1] = (__int64)v57;
  pSource = v8->pSource;
  fsize[1] = BlurY;
  v51 = 0i64;
  if ( !Scaleform::Render::GL::replaceFSize(shaderCode, pSource, fsize)
    || !Scaleform::Render::GL::replaceFSize(v57, v13->pSource, fsize) )
  {
    return 0i64;
  }
  v15 = 0i64;
  v16 = Scaleform::Memory::pGlobalHeap->__vftable;
  v48 = 0i64;
  v49 = 0i64;
  v17 = (__int64)v16->Alloc(Scaleform::Memory::pGlobalHeap, 24ui64, 0i64);
  v18 = v17;
  if ( v17 )
  {
    *(_QWORD *)v17 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v17 + 8) = 1;
    *(_QWORD *)v17 = &Scaleform::Render::GL::HALGLTexture::`vftable';
    *(_DWORD *)(v17 + 16) = 0;
  }
  else
  {
    v18 = 0i64;
  }
  v48 = v18;
  v19 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
          Scaleform::Memory::pGlobalHeap,
          24i64);
  v20 = v19;
  if ( v19 )
  {
    *(_QWORD *)v19 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v19 + 8) = 1;
    *(_QWORD *)v19 = &Scaleform::Render::GL::HALGLTexture::`vftable';
    *(_DWORD *)(v19 + 16) = 1;
  }
  else
  {
    v20 = 0i64;
  }
  v49 = v20;
  v21 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
          Scaleform::Memory::pGlobalHeap,
          24i64);
  v22 = (Scaleform::Render::GL::HALGLProgram *)v21;
  if ( v21 )
  {
    *(_QWORD *)v21 = &Scaleform::RefCountImplCore::`vftable';
    *(_DWORD *)(v21 + 8) = 1;
    *(_QWORD *)v21 = &Scaleform::Render::GL::HALGLTexture::`vftable';
    *(_DWORD *)(v21 + 16) = 0;
  }
  else
  {
    v22 = 0i64;
  }
  v23 = this->pHal->GetGraphicsDevice(this->pHal);
  v23->glCreateProgram(v23, v22);
  for ( i = 0; (unsigned int)i < 2; ++i )
  {
    v25 = this->pHal->GetGraphicsDevice(this->pHal);
    v26 = (Scaleform::Render::GL::HALGLShader *)*(&v48 + i);
    switch ( i )
    {
      case 0:
        v27 = 35633i64;
        break;
      case 1:
        v27 = 35632i64;
        break;
      case 2:
        v27 = 36313i64;
        break;
      case 3:
        v27 = 36488i64;
        break;
      case 4:
        v27 = 36487i64;
        break;
      case 5:
        v27 = 37305i64;
        break;
      default:
        v27 = 0i64;
        break;
    }
    v25->glCreateShader(v25, v27, (Scaleform::Render::GL::HALGLShader *)*(&v48 + i));
    v28 = this->pHal->GetGraphicsDevice(this->pHal);
    v28->glShaderSource(v28, v26, 1, (const char *const *)&v54[i], 0i64);
    v29 = this->pHal->GetGraphicsDevice(this->pHal);
    v29->glCompileShader(v29, v26);
    v30 = this->pHal->GetGraphicsDevice(this->pHal);
    v30->glGetShaderiv(v30, v26, 35713u, &v45);
    v31 = this->pHal->__vftable;
    if ( v45 != 1 )
    {
      v39 = ((__int64 (*)(void))v31->GetGraphicsDevice)();
      v40 = (Scaleform::Render::GL::HALGLShader *)*(&v48 + i);
      (*(void (__fastcall **)(__int64, Scaleform::Render::GL::HALGLShader *, __int64, _QWORD, char *))(*(_QWORD *)v39 + 584i64))(
        v39,
        v40,
        4096i64,
        0i64,
        v58);
      v41 = this->pHal->GetGraphicsDevice(this->pHal);
      v41->glDeleteShader(v41, v40);
      goto LABEL_32;
    }
    v32 = ((__int64 (*)(void))v31->GetGraphicsDevice)();
    (*(void (__fastcall **)(__int64, Scaleform::Render::GL::HALGLProgram *, Scaleform::Render::GL::HALGLShader *))(*(_QWORD *)v32 + 56i64))(
      v32,
      v22,
      v26);
    v33 = this->pHal->GetGraphicsDevice(this->pHal);
    v33->glDeleteShader(v33, v26);
  }
  v34 = this->pHal->GetGraphicsDevice(this->pHal);
  v34->glLinkProgram(v34, v22);
  v35 = this->pHal->GetGraphicsDevice(this->pHal);
  v35->glGetProgramiv(v35, v22, 35714u, &v46);
  if ( v46 == 1 )
  {
    v37 = (Scaleform::Render::GL::ShaderObject *)Scaleform::Memory::pGlobalHeap->Alloc(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   936i64,
                                                   0i64);
    if ( v37 )
    {
      Scaleform::Render::GL::ShaderObject::ShaderObject(v37);
      v15 = (Scaleform::Render::GL::ShaderObject *)v38;
      v47 = (Scaleform::Render::GL::ShaderObject *)v38;
    }
    else
    {
      v47 = 0i64;
    }
    Scaleform::Render::GL::ShaderObject::Init(v15, this->pHal, v22, vdesc, fdesc);
    key.pFirst = keyParams;
    key.pSecond = &v47;
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::Set<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeRef>(
      &this->DynamicLoopShaderHash.mHash,
      &this->DynamicLoopShaderHash,
      &key);
    v15 = v47;
  }
  else
  {
    v36 = this->pHal->GetGraphicsDevice(this->pHal);
    v36->glGetProgramInfoLog(v36, v22, 4096, 0i64, v58);
  }
LABEL_32:
  if ( v22 )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v22);
  v42 = fsize;
  v43 = 2i64;
  do
  {
    v44 = (Scaleform::RefCountVImpl *)*((_QWORD *)v42 - 1);
    v42 -= 2;
    --v43;
    if ( v44 )
      Scaleform::RefCountImpl::Release(v44);
  }
  while ( v43 );
  return v15;
}

char *__fastcall Scaleform::Render::GL::ShaderObject::getShaderPipelineCode(
        Scaleform::Render::GL::ShaderObject *this,
        Scaleform::Render::GL::ShaderStages stage,
        unsigned int maxUniforms,
        char *modifiedShaderSource)
{
  const char *pSource; // rdi
  __int64 v9; // rax
  const char *v10; // rcx
  const char *v11; // rbp
  unsigned int v12; // eax
  unsigned int CountPerInstance; // esi
  char v14; // r8

  if ( stage )
  {
    if ( stage == ShaderStage_Frag )
      return (char *)this->pFDesc->pSource;
    else
      return 0i64;
  }
  else
  {
    pSource = this->pVDesc->pSource;
    if ( this->Separated && this->ShaderVer == ShaderVersion_GLSL150 )
    {
      v9 = -1i64;
      do
        ++v9;
      while ( pSource[v9] );
      if ( v9 )
      {
        v10 = &pSource[v9];
        while ( *v10 != 35 )
        {
          if ( --v10 == pSource )
            goto LABEL_13;
        }
      }
      else
      {
LABEL_13:
        v10 = 0i64;
        if ( *pSource == 35 )
          v10 = pSource;
      }
      if ( v10 )
        v11 = strchr(v10, 10) + 1;
      else
        v11 = pSource;
      strncpy_s(modifiedShaderSource, 0x1000ui64, pSource, v11 - pSource);
      modifiedShaderSource[v11 - pSource] = 0;
      strcat_s(modifiedShaderSource, 0x1000ui64, "out gl_PerVertex\n{\n\tvec4 gl_Position;\n};\n");
      strcat_s(modifiedShaderSource, 0x1000ui64, v11);
      pSource = modifiedShaderSource;
    }
    if ( (this->pVDesc->Flags & 2) != 0 )
    {
      v12 = maxUniforms / (unsigned int)Scaleform::Render::GL::ShaderInterface::GetMaximumRowsPerInstance();
      if ( v12 > 0x18 )
        v12 = 24;
      if ( v12 < 0x18 )
      {
        CountPerInstance = Scaleform::Render::GL::ShaderInterface::GetCountPerInstance(this->pVDesc, SU_vfuniforms);
        if ( maxUniforms / CountPerInstance < 0x18 )
        {
          v14 = warned_9;
          if ( !warned_9 )
            v14 = 1;
          warned_9 = v14;
          strcpy_s(modifiedShaderSource, 0x1000ui64, pSource);
          Scaleform::Render::GL::overwriteArrayCount(
            modifiedShaderSource,
            "vfuniforms",
            CountPerInstance * (maxUniforms / CountPerInstance));
          return modifiedShaderSource;
        }
      }
    }
    return (char *)pSource;
  }
}

char __fastcall Scaleform::Render::GL::ShaderObject::initUniforms(Scaleform::Render::GL::ShaderObject *this)
{
  const char **v1; // r14
  unsigned int v2; // ebp
  Scaleform::RefCountVImpl **Uniforms; // rbx
  __int64 v4; // rsi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::GL::HALGLProgram *v7; // rax
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::Render::GL::GraphicsDevice *v9; // rax

  v1 = Scaleform::Render::GL::ShaderUniformNames;
  v2 = 0;
  Uniforms = (Scaleform::RefCountVImpl **)this->Uniforms;
  v4 = 0i64;
  do
  {
    if ( this->pVDesc->Uniforms[v4].Location >= 0 )
    {
      pObject = (Scaleform::RefCountVImpl *)this->StagePrograms[0].pObject;
      if ( pObject )
        Scaleform::Render::RenderBuffer::AddRef(pObject);
      if ( *Uniforms )
        Scaleform::RefCountImpl::Release(*Uniforms);
      v7 = this->StagePrograms[0].pObject;
LABEL_14:
      *Uniforms = (Scaleform::RefCountVImpl *)v7;
      v9 = this->pHal->GetGraphicsDevice(this->pHal);
      v9->glGetUniformLocation(v9, (Scaleform::Render::GL::HALGLProgram *)*Uniforms, *v1, &this->Uniforms[v2].Location);
      goto LABEL_18;
    }
    if ( this->pFDesc->Uniforms[v4].Location >= 0 )
    {
      v8 = (Scaleform::RefCountVImpl *)this->StagePrograms[1].pObject;
      if ( v8 )
        Scaleform::Render::RenderBuffer::AddRef(v8);
      if ( *Uniforms )
        Scaleform::RefCountImpl::Release(*Uniforms);
      v7 = this->StagePrograms[1].pObject;
      goto LABEL_14;
    }
    if ( *Uniforms )
      Scaleform::RefCountImpl::Release(*Uniforms);
    *Uniforms = 0i64;
LABEL_18:
    ++v2;
    Uniforms += 4;
    ++v4;
    ++v1;
  }
  while ( v2 < 0x1A );
  return 1;
}

__int64 __fastcall Scaleform::Render::GL::ShaderObject::link(
        Scaleform::Render::GL::ShaderObject *this,
        Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *shaderHash,
        bool testCompilation)
{
  __int64 v3; // r14
  int *p_BinarySize; // rax
  __int64 v7; // rcx
  unsigned int v9; // edi
  Scaleform::Render::GL::ShaderHashEntry *v10; // rsi
  bool Separated; // dl
  unsigned int v12; // ebx
  Scaleform::Render::GL::ShaderDesc::ShaderVersion ShaderVer; // er9
  int ComboIndex; // er8
  unsigned int v15; // ebx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r9
  __int64 v17; // rax
  __int64 v18; // rdx
  __int64 v19; // rcx
  __int64 v20; // rcx
  __int64 v21; // r8
  __int64 v22; // rdx
  __int64 v23; // rcx
  __int64 v24; // rbx
  Scaleform::RefCountVImpl *v25; // rcx
  Scaleform::RefCountVImpl *v26; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::GL::ShaderDesc::ShaderVersion v28; // edx
  int v29; // er8
  int v30; // er8
  unsigned __int16 ShaderIndexForComboIndex; // ax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v32; // r10
  __int64 v33; // rax
  __int64 v34; // rdx
  __int64 v35; // rcx
  __int64 v36; // rcx
  __int64 v37; // r9
  __int64 v38; // rdx
  __int64 v39; // rcx
  __int64 v40; // rdx
  unsigned __int8 v41; // di
  Scaleform::RefCountVImpl **v42; // rbx
  Scaleform::RefCountVImpl *v43; // rcx
  char v45; // [rsp+1Fh] [rbp-E9h]
  unsigned int v46; // [rsp+20h] [rbp-E8h]
  Scaleform::Render::GL::ShaderHashEntry shaders[6]; // [rsp+30h] [rbp-D8h] BYREF
  __int64 v48; // [rsp+C0h] [rbp-48h] BYREF

  v3 = 6i64;
  p_BinarySize = &shaders[0].BinarySize;
  v7 = 6i64;
  do
  {
    *((_QWORD *)p_BinarySize - 2) = 0i64;
    *((_QWORD *)p_BinarySize - 1) = 0i64;
    *p_BinarySize = 0;
    p_BinarySize += 6;
    --v7;
  }
  while ( v7 );
  memset(shaders, 0, sizeof(shaders));
  v9 = 0;
  v10 = shaders;
  do
  {
    Separated = this->Separated;
    v12 = v9;
    ShaderVer = this->ShaderVer;
    ComboIndex = this->ComboIndex;
    if ( v9 )
    {
      if ( v9 != 1 )
      {
        v15 = 0;
        goto LABEL_13;
      }
      if ( !Separated )
      {
LABEL_11:
        v12 = 0;
        goto LABEL_12;
      }
      LOWORD(ComboIndex) = Scaleform::Render::GL::FragShaderDesc::GetShaderIndexForComboIndex(ComboIndex, ShaderVer);
    }
    else
    {
      if ( !Separated )
        goto LABEL_11;
      LOWORD(ComboIndex) = Scaleform::Render::GL::VertexShaderDesc::GetShaderIndexForComboIndex(ComboIndex, ShaderVer);
    }
LABEL_12:
    v15 = (unsigned __int16)ComboIndex | (v12 << 16) | 0x80000000;
LABEL_13:
    pTable = shaderHash->mHash.pTable;
    v46 = v15;
    if ( pTable )
    {
      v17 = 5381i64;
      v18 = 4i64;
      do
      {
        v19 = (unsigned __int8)*(&v45 + v18--);
        v20 = 65599 * v17 + v19;
        v17 = v20;
      }
      while ( v18 );
      v21 = v20 & pTable->SizeMask;
      v22 = v21;
      v23 = (__int64)&pTable[3 * v21 + 1];
      if ( *(_QWORD *)v23 != -2i64 && *(_QWORD *)(v23 + 8) == v21 )
      {
        while ( *(_QWORD *)(v23 + 8) != v21 || *(_DWORD *)(v23 + 16) != v15 )
        {
          v22 = *(_QWORD *)v23;
          if ( *(_QWORD *)v23 == -1i64 )
            goto LABEL_34;
          v23 = (__int64)&pTable[3 * v22 + 1];
        }
        if ( v22 >= 0 )
        {
          v24 = (__int64)&pTable[3 * v22 + 2];
          if ( v24 )
          {
            if ( v10 )
            {
              v25 = *(Scaleform::RefCountVImpl **)(v24 + 8);
              if ( v25 )
                Scaleform::Render::RenderBuffer::AddRef(v25);
              if ( v10->Shader.pObject )
                Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v10->Shader.pObject);
              v26 = *(Scaleform::RefCountVImpl **)(v24 + 16);
              v10->Shader.pObject = *(Scaleform::Render::GL::HALGLShader **)(v24 + 8);
              if ( v26 )
                Scaleform::Render::RenderBuffer::AddRef(v26);
              pObject = (Scaleform::RefCountVImpl *)v10->Program.pObject;
              if ( pObject )
                Scaleform::RefCountImpl::Release(pObject);
              v10->Program.pObject = *(Scaleform::Render::GL::HALGLProgram **)(v24 + 16);
              v10->BinarySize = *(_DWORD *)(v24 + 24);
            }
            goto LABEL_54;
          }
        }
      }
    }
LABEL_34:
    if ( this->Separated )
      goto LABEL_54;
    v28 = this->ShaderVer;
    v29 = this->ComboIndex;
    if ( !v9 )
    {
      ShaderIndexForComboIndex = Scaleform::Render::GL::VertexShaderDesc::GetShaderIndexForComboIndex(v29, v28);
      goto LABEL_40;
    }
    if ( v9 == 1 )
    {
      ShaderIndexForComboIndex = Scaleform::Render::GL::FragShaderDesc::GetShaderIndexForComboIndex(v29, v28);
LABEL_40:
      v30 = ShaderIndexForComboIndex | ((v9 & 0x7FFF) << 16);
      goto LABEL_41;
    }
    v30 = 0;
LABEL_41:
    v32 = shaderHash->mHash.pTable;
    v46 = v30;
    if ( v32 )
    {
      v33 = 5381i64;
      v34 = 4i64;
      do
      {
        v35 = (unsigned __int8)*(&v45 + v34--);
        v36 = 65599 * v33 + v35;
        v33 = v36;
      }
      while ( v34 );
      v37 = v36 & v32->SizeMask;
      v38 = v37;
      v39 = (__int64)&v32[3 * v37 + 1];
      if ( *(_QWORD *)v39 != -2i64 && *(_QWORD *)(v39 + 8) == v37 )
      {
        while ( *(_QWORD *)(v39 + 8) != v37 || *(_DWORD *)(v39 + 16) != v30 )
        {
          v38 = *(_QWORD *)v39;
          if ( *(_QWORD *)v39 == -1i64 )
            goto LABEL_54;
          v39 = (__int64)&v32[3 * v38 + 1];
        }
        if ( v38 >= 0 )
        {
          v40 = (__int64)&v32[3 * v38 + 2];
          if ( v40 )
          {
            if ( &shaders[v9] )
              Scaleform::Render::GL::ShaderHashEntry::operator=(
                &shaders[v9],
                (const Scaleform::Render::GL::ShaderHashEntry *)(v40 + 8));
          }
        }
      }
    }
LABEL_54:
    ++v9;
    ++v10;
  }
  while ( v9 < 6 );
  if ( Scaleform::Render::GL::ShaderObject::createProgramOrPipeline(this, shaders, this->Separated, testCompilation)
    && Scaleform::Render::GL::ShaderObject::initUniforms(this) )
  {
    this->IsLinked = 1;
    v41 = 1;
  }
  else
  {
    Scaleform::Render::GL::ShaderObject::releasePrograms(this);
    v41 = 0;
  }
  v42 = (Scaleform::RefCountVImpl **)&v48;
  do
  {
    v43 = *(v42 - 2);
    v42 -= 3;
    --v3;
    if ( v43 )
      Scaleform::RefCountImpl::Release(v43);
    if ( *v42 )
      Scaleform::RefCountImpl::Release(*v42);
  }
  while ( v3 );
  return v41;
}

bool __fastcall Scaleform::Render::GL::ShaderManager::loadAndVerifyShaderCacheHeader(
        Scaleform::Render::GL::ShaderManager *this,
        Scaleform::File *pfile)
{
  Scaleform::File_vtbl *v3; // rax
  __int64 v5; // [rsp+20h] [rbp-28h] BYREF
  char Str1[16]; // [rsp+28h] [rbp-20h] BYREF

  if ( !pfile
    || !pfile->IsValid(pfile)
    || pfile->Read(pfile, (unsigned __int8 *)Str1, 12) < 12
    || strncmp(Str1, Scaleform::Render::GL::ShaderHeaderString, 0xCui64) )
  {
    return 0;
  }
  v3 = pfile->__vftable;
  v5 = 0i64;
  v3->Read(pfile, (unsigned __int8 *)&v5, 8);
  return v5 == 0x88D65E861C696A8Cui64;
}

char __fastcall Scaleform::Render::GL::ShaderManager::loadBinaryShaders(Scaleform::Render::GL::ShaderManager *this)
{
  int v2; // er15
  Scaleform::RefCountVImpl *v3; // rdi
  Scaleform::SysFile *v4; // rax
  Scaleform::RefCountVImpl *v5; // rax
  Scaleform::RefCountVImpl_vtbl *v6; // rax
  Scaleform::RefCountVImpl_vtbl *v7; // rax
  Scaleform::RefCountVImpl_vtbl *v8; // rax
  bool v9; // bl
  unsigned int v10; // er14
  void *v11; // rbx
  void *v12; // rbx
  char v13; // bl
  int v14; // er12
  void *v15; // r13
  Scaleform::SysFile *v16; // rbx
  Scaleform::File *v17; // rax
  Scaleform::File *v18; // r14
  void *v19; // rbx
  Scaleform::RefCountVImpl_vtbl *v20; // rax
  Scaleform::RefCountVImpl_vtbl *v21; // rax
  Scaleform::RefCountVImpl_vtbl *v22; // rax
  int v23; // er14
  __int64 v24; // rax
  Scaleform::RefCountVImpl *v25; // rbx
  Scaleform::Render::GL::HAL *pHal; // rcx
  __int64 v27; // rax
  Scaleform::Render::GL::GraphicsDevice *v28; // rax
  Scaleform::Render::GL::GraphicsDevice *v29; // rax
  Scaleform::Render::GL::GraphicsDevice *v30; // rax
  Scaleform::Render::GL::GraphicsDevice *v31; // rax
  Scaleform::Render::GL::GraphicsDevice *v32; // rax
  char v33; // cl
  unsigned __int64 v34; // r9
  __int64 v35; // r8
  __int64 v36; // rdx
  __int64 v38; // [rsp+20h] [rbp-E0h]
  int v39; // [rsp+30h] [rbp-D0h]
  int v40; // [rsp+34h] [rbp-CCh] BYREF
  int v41; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int v42; // [rsp+3Ch] [rbp-C4h] BYREF
  int v43; // [rsp+40h] [rbp-C0h] BYREF
  unsigned int v44; // [rsp+44h] [rbp-BCh] BYREF
  unsigned int v45; // [rsp+48h] [rbp-B8h] BYREF
  int v46; // [rsp+4Ch] [rbp-B4h] BYREF
  int v47; // [rsp+50h] [rbp-B0h] BYREF
  Scaleform::RefCountVImpl *v48[2]; // [rsp+58h] [rbp-A8h] BYREF
  int v49; // [rsp+68h] [rbp-98h]
  int v50; // [rsp+70h] [rbp-90h] BYREF
  Scaleform::String result; // [rsp+78h] [rbp-88h] BYREF
  Scaleform::String path; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+88h] [rbp-78h] BYREF
  char dest[1024]; // [rsp+A0h] [rbp-60h] BYREF

  v2 = 0;
  v47 = 0;
  if ( (Scaleform::Render::GL::HAL::GetCaps(this->pHal) & 0x200) == 0 )
    return 0;
  v3 = 0i64;
  if ( !this->SingleBinaryShaderFile )
  {
    v39 = 873;
    v10 = 0x40000;
    goto LABEL_13;
  }
  Scaleform::String::operator+(&this->BinaryShaderPath, &result, "GFxShaders.cache");
  v4 = (Scaleform::SysFile *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 24i64, 0i64);
  if ( v4 )
  {
    Scaleform::SysFile::SysFile(v4, &result, 33, 438);
    v3 = v5;
  }
  if ( Scaleform::Render::GL::ShaderManager::loadAndVerifyShaderCacheHeader(this, (Scaleform::File *)v3) )
  {
    v6 = v3->__vftable;
    v40 = 0;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, int *, __int64))v6[3].AddRef)(v3, &v40, 4i64);
    v39 = v40;
    v7 = v3->__vftable;
    v41 = 0;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, int *, __int64))v7[3].AddRef)(v3, &v41, 4i64);
    v8 = v3->__vftable;
    v42 = 0;
    v9 = v41 != 0;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, unsigned int *, __int64))v8[3].AddRef)(v3, &v42, 4i64);
    v10 = v42;
    if ( v42 )
    {
      if ( v9 == this->SeparablePipelines )
      {
        v11 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
        if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                             (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                             -1) == 1 )
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v11);
LABEL_13:
        v14 = 0;
        v15 = Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, v10, 0i64);
        if ( v39 <= 0 )
        {
LABEL_49:
          Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
          v13 = 1;
          goto LABEL_50;
        }
        while ( 1 )
        {
          if ( this->SingleBinaryShaderFile )
            goto LABEL_58;
          LODWORD(v38) = (unsigned __int16)v14 | 0x80000000;
          Scaleform::SFsprintf(
            dest,
            0x400ui64,
            "%sGFxShaders-%08x.cache",
            (const char *)((this->BinaryShaderPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
            v38);
          v16 = (Scaleform::SysFile *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                        Scaleform::Memory::pGlobalHeap,
                                        24i64);
          if ( v16 )
          {
            Scaleform::String::String(&path, dest);
            v2 |= 1u;
            Scaleform::SysFile::SysFile(v16, &path, 33, 438);
            v18 = v17;
          }
          else
          {
            v18 = 0i64;
          }
          if ( v3 )
            Scaleform::RefCountImpl::Release(v3);
          v3 = (Scaleform::RefCountVImpl *)v18;
          if ( (v2 & 1) != 0 )
          {
            v19 = (void *)(path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
            v2 &= ~1u;
            if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                                 (volatile int *)((path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                                 -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v19);
          }
          if ( Scaleform::Render::GL::ShaderManager::loadAndVerifyShaderCacheHeader(this, v18) )
          {
LABEL_58:
            v20 = v3->__vftable;
            v43 = 0;
            ((void (__fastcall *)(Scaleform::RefCountVImpl *, int *, __int64))v20[3].AddRef)(v3, &v43, 4i64);
            v46 = v43;
            v21 = v3->__vftable;
            v45 = 0;
            ((void (__fastcall *)(Scaleform::RefCountVImpl *, unsigned int *, __int64))v21[3].AddRef)(v3, &v45, 4i64);
            v22 = v3->__vftable;
            v44 = 0;
            ((void (__fastcall *)(Scaleform::RefCountVImpl *, unsigned int *, __int64))v22[3].AddRef)(v3, &v44, 4i64);
            v23 = v44;
            if ( (int)v44 > 0 )
            {
              if ( ((int (__fastcall *)(Scaleform::RefCountVImpl *, void *, _QWORD))v3->__vftable[3].AddRef)(
                     v3,
                     v15,
                     v44) < v23 )
              {
                Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
LABEL_54:
                v13 = 0;
                goto LABEL_50;
              }
              v49 = 0;
              *(_OWORD *)v48 = 0i64;
              v24 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                      Scaleform::Memory::pGlobalHeap,
                      24i64);
              v25 = (Scaleform::RefCountVImpl *)v24;
              if ( v24 )
              {
                *(_DWORD *)(v24 + 16) = 0;
                *(_QWORD *)v24 = &Scaleform::RefCountImplCore::`vftable';
                *(_QWORD *)v24 = &Scaleform::Render::GL::HALGLTexture::`vftable';
                *(_DWORD *)(v24 + 8) = 1;
              }
              else
              {
                v25 = 0i64;
              }
              if ( v48[1] )
                Scaleform::RefCountImpl::Release(v48[1]);
              pHal = this->pHal;
              v48[1] = v25;
              v27 = (__int64)pHal->GetGraphicsDevice(pHal);
              (*(void (__fastcall **)(__int64, Scaleform::RefCountVImpl *))(*(_QWORD *)v27 + 232i64))(v27, v48[1]);
              if ( this->SeparablePipelineExtension && this->SeparablePipelines )
              {
                v28 = this->pHal->GetGraphicsDevice(this->pHal);
                v28->glProgramParameteri(v28, (Scaleform::Render::GL::HALGLProgram *)v48[1], 33368u, 1);
              }
              v29 = this->pHal->GetGraphicsDevice(this->pHal);
              v29->glProgramBinary(v29, (Scaleform::Render::GL::HALGLProgram *)v48[1], v45, v15, v23);
              if ( !this->SeparablePipelineExtension
                || (v30 = this->pHal->GetGraphicsDevice(this->pHal),
                    v30->glGetProgramiv(v30, (Scaleform::Render::GL::HALGLProgram *)v48[1], 33368u, &v50),
                    (v50 == 1) == this->SeparablePipelines) )
              {
                v32 = this->pHal->GetGraphicsDevice(this->pHal);
                v32->glGetProgramiv(v32, (Scaleform::Render::GL::HALGLProgram *)v48[1], 35714u, &v47);
                if ( v47 == 1 )
                {
                  v49 = v23;
                  key.pFirst = (const unsigned int *)&v46;
                  v34 = 5381i64;
                  key.pSecond = (const Scaleform::Render::GL::ShaderHashEntry *)v48;
                  v35 = 4i64;
                  do
                  {
                    v36 = *((unsigned __int8 *)&v45 + v35-- + 3);
                    v34 = v36 + 65599 * v34;
                  }
                  while ( v35 );
                  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
                    &this->CompiledShaderHash.mHash,
                    &this->CompiledShaderHash,
                    &key,
                    v34);
                }
                else
                {
                  v33 = warned_10;
                  if ( !warned_10 )
                    v33 = 1;
                  warned_10 = v33;
                }
              }
              else
              {
                v31 = this->pHal->GetGraphicsDevice(this->pHal);
                v31->glDeleteProgram(v31, (Scaleform::Render::GL::HALGLProgram *)v48[1]);
              }
              if ( v48[1] )
                Scaleform::RefCountImpl::Release(v48[1]);
              if ( v48[0] )
                Scaleform::RefCountImpl::Release(v48[0]);
            }
          }
          if ( ++v14 >= v39 )
            goto LABEL_49;
        }
      }
    }
  }
  v12 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
  if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                       -1) != 1 )
    goto LABEL_54;
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v12);
  v13 = 0;
LABEL_50:
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  return v13;
}

void __fastcall Scaleform::Render::GL::overwriteArrayCount(
        char *psrcPtr,
        const char *arrayString,
        unsigned int newCount)
{
  const char *v6; // rbp
  __int64 v7; // rbx
  unsigned __int64 v8; // rbx
  __int64 v9; // rdx
  __int64 v10; // rcx
  char *v11; // rax
  char dest[16]; // [rsp+20h] [rbp-1038h] BYREF
  char destination[4096]; // [rsp+30h] [rbp-1028h] BYREF

  if ( psrcPtr )
  {
    v6 = strstr(psrcPtr, arrayString);
    if ( v6 )
    {
      Scaleform::SFsprintf(dest, 0x10ui64, "[%d]", newCount);
      v7 = -1i64;
      do
        ++v7;
      while ( arrayString[v7] );
      v8 = v6 - psrcPtr + v7;
      strncpy_s(destination, 0x1000ui64, psrcPtr, v8);
      if ( v8 >= 0x1000 )
      {
        _report_rangecheckfailure(v10, v9);
        JUMPOUT(0x1405F3168i64);
      }
      destination[v8] = 0;
      strcat_s(destination, 0x1000ui64, dest);
      v11 = strchr(v6, 93);
      if ( v11 )
      {
        strcat_s(destination, 0x1000ui64, v11 + 1);
        strcpy_s(psrcPtr, 0x1000ui64, destination);
      }
    }
  }
}

void __fastcall Scaleform::Render::GL::ShaderObject::releasePrograms(Scaleform::Render::GL::ShaderObject *this)
{
  Scaleform::Render::GL::GraphicsDevice *v2; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl **StagePrograms; // rbx
  __int64 v5; // rdi

  if ( this->Separated && this->Pipeline.pObject )
  {
    v2 = this->pHal->GetGraphicsDevice(this->pHal);
    v2->glDeleteProgramPipelines(v2, 1, &this->Pipeline.pObject);
    pObject = (Scaleform::RefCountVImpl *)this->Pipeline.pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->Pipeline.pObject = 0i64;
  }
  StagePrograms = (Scaleform::RefCountVImpl **)this->StagePrograms;
  v5 = 6i64;
  do
  {
    if ( *StagePrograms )
      Scaleform::RefCountImpl::Release(*StagePrograms);
    *StagePrograms++ = 0i64;
    --v5;
  }
  while ( v5 );
}

char __fastcall Scaleform::Render::GL::replaceFSize(char *shaderCode, const char *originalString, float *fsize)
{
  const char *v3; // rdi
  char *v6; // rbx
  char *v7; // rsi
  char *v8; // rbx
  float v9; // xmm3_4
  char destination[4096]; // [rsp+20h] [rbp-1038h] BYREF
  __int64 v12[7]; // [rsp+1020h] [rbp-38h] BYREF

  v3 = originalString;
  v6 = destination;
  v7 = strchr(originalString, 37);
  if ( !v7 )
  {
LABEL_7:
    strcpy_s(v6, (char *)v12 - v6, v3);
    strcpy_s(shaderCode, 0x1000ui64, destination);
    return 1;
  }
  while ( 1 )
  {
    strncpy_s(v6, (char *)v12 - v6, v3, v7 - v3);
    v8 = &v6[v7 - v3];
    if ( strncmp(v7 + 1, "fsize.x", 7ui64) )
      break;
    v9 = *fsize;
LABEL_6:
    v3 = v7 + 9;
    v6 = &v8[Scaleform::SFsprintf(v8, (char *)v12 - v8, "%.5f", v9)];
    v7 = strchr(v7 + 9, 37);
    if ( !v7 )
      goto LABEL_7;
  }
  if ( !strncmp(v7 + 1, "fsize.y", 7ui64) )
  {
    v9 = fsize[1];
    goto LABEL_6;
  }
  return 0;
}

void __fastcall Scaleform::Render::GL::ShaderManager::saveBinaryShaders(Scaleform::Render::GL::ShaderManager *this)
{
  Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *p_CompiledShaderHash; // rsi
  int v3; // er12
  int v4; // er14
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // rdx
  unsigned __int64 v7; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v8; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v9; // rax
  unsigned __int64 v10; // rdi
  Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *v11; // r15
  unsigned __int64 v12; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v13; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v14; // rax
  Scaleform::RefCountVImpl *EntryCount; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v16; // rbx
  Scaleform::RefCountVImpl *v17; // rbx
  Scaleform::Render::GL::GraphicsDevice *v18; // rax
  int v19; // ecx
  int v20; // eax
  Scaleform::Render::GL::GraphicsDevice *v21; // rax
  int v22; // eax
  unsigned __int64 v23; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v24; // rax
  Scaleform::RefCountVImpl *v25; // rbx
  Scaleform::MemoryHeap_vtbl *v26; // rax
  void *v27; // rdi
  Scaleform::SysFile *v28; // rax
  Scaleform::RefCountVImpl *v29; // rax
  void *v30; // rdi
  Scaleform::RefCountVImpl_vtbl *v31; // rax
  Scaleform::RefCountVImpl_vtbl *v32; // rax
  Scaleform::RefCountVImpl_vtbl *v33; // rax
  void *v34; // rdi
  Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *v35; // rsi
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v36; // rax
  unsigned __int64 v37; // r14
  unsigned __int64 v38; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v39; // rax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v40; // rax
  Scaleform::RefCountVImpl *v41; // rcx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v42; // rdi
  int v43; // er15
  Scaleform::RefCountVImpl *v44; // rdi
  Scaleform::Render::GL::GraphicsDevice *v45; // rax
  Scaleform::Render::GL::GraphicsDevice *v46; // rax
  Scaleform::Render::GL::GraphicsDevice *v47; // rax
  Scaleform::SysFile *v48; // rsi
  Scaleform::RefCountVImpl *v49; // rax
  Scaleform::RefCountVImpl *v50; // r15
  void *v51; // rsi
  Scaleform::RefCountVImpl_vtbl *v52; // rax
  int v53; // ecx
  void *v54; // r15
  int v55; // eax
  int v56; // er15
  bool v57; // zf
  unsigned __int64 v58; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *v59; // rcx
  __int64 v60; // [rsp+20h] [rbp-E0h]
  int SeparablePipelines; // [rsp+30h] [rbp-D0h] BYREF
  char v62; // [rsp+38h] [rbp-C8h]
  int v63; // [rsp+40h] [rbp-C0h] BYREF
  int v64; // [rsp+48h] [rbp-B8h] BYREF
  int v65; // [rsp+4Ch] [rbp-B4h]
  Scaleform::String path; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v67; // [rsp+58h] [rbp-A8h]
  int v68; // [rsp+5Ch] [rbp-A4h] BYREF
  Scaleform::String result; // [rsp+60h] [rbp-A0h] BYREF
  Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *v70; // [rsp+68h] [rbp-98h]
  void *v71; // [rsp+70h] [rbp-90h]
  __int128 v72; // [rsp+78h] [rbp-88h] BYREF
  char dest[1024]; // [rsp+90h] [rbp-70h] BYREF

  v65 = 0;
  if ( (Scaleform::Render::GL::HAL::GetCaps(this->pHal) & 0x200) == 0 )
    return;
  p_CompiledShaderHash = &this->CompiledShaderHash;
  v3 = 0;
  v4 = 0;
  v62 = 0;
  pTable = this->CompiledShaderHash.mHash.pTable;
  v70 = &this->CompiledShaderHash;
  if ( pTable )
  {
    SizeMask = pTable->SizeMask;
    v7 = 0i64;
    v8 = pTable + 1;
    do
    {
      if ( v8->EntryCount != -2i64 )
        break;
      ++v7;
      v8 += 3;
    }
    while ( v7 <= SizeMask );
  }
  v9 = p_CompiledShaderHash->mHash.pTable;
  if ( p_CompiledShaderHash->mHash.pTable )
  {
    v12 = v9->SizeMask;
    v10 = 0i64;
    v13 = v9 + 1;
    do
    {
      if ( v13->EntryCount != -2i64 )
        break;
      ++v10;
      v13 += 3;
    }
    while ( v10 <= v12 );
    v11 = &this->CompiledShaderHash;
  }
  else
  {
    v72 = 0i64;
    v10 = 0i64;
    v11 = 0i64;
  }
  while ( v11 )
  {
    v14 = v11->mHash.pTable;
    if ( !v11->mHash.pTable || (signed __int64)v10 > (signed __int64)v14->SizeMask )
      break;
    EntryCount = (Scaleform::RefCountVImpl *)v14[3 * v10 + 3].EntryCount;
    v16 = &v14[3 * v10];
    if ( EntryCount )
      Scaleform::Render::RenderBuffer::AddRef(EntryCount);
    v17 = (Scaleform::RefCountVImpl *)v16[3].EntryCount;
    if ( v17 )
    {
      v18 = this->pHal->GetGraphicsDevice(this->pHal);
      if ( v18->glIsProgram(v18, (Scaleform::Render::GL::HALGLProgram *)v17) )
      {
        ++v3;
        v19 = v11->mHash.pTable[3 * v10 + 3].SizeMask;
        v20 = v19;
        if ( v19 < v4 )
          v20 = v4;
        v4 = v20;
        if ( !v19 )
        {
          v21 = this->pHal->GetGraphicsDevice(this->pHal);
          v21->glGetProgramiv(v21, (Scaleform::Render::GL::HALGLProgram *)v17, 34625u, &SeparablePipelines);
          v22 = SeparablePipelines;
          v62 = 1;
          if ( SeparablePipelines < v4 )
            v22 = v4;
          v4 = v22;
        }
      }
      Scaleform::RefCountImpl::Release(v17);
    }
    v23 = v11->mHash.pTable->SizeMask;
    if ( (__int64)v10 <= (__int64)v23 && ++v10 <= v23 )
    {
      v24 = &v11->mHash.pTable[3 * v10 + 1];
      do
      {
        if ( v24->EntryCount != -2i64 )
          break;
        ++v10;
        v24 += 3;
      }
      while ( v10 <= v23 );
    }
  }
  if ( !v62 )
    return;
  SeparablePipelines = 0;
  v25 = 0i64;
  v26 = Scaleform::Memory::pGlobalHeap->__vftable;
  v67 = (v4 + 0x7FFF) & 0xFFFF8000;
  v27 = v26->Alloc(Scaleform::Memory::pGlobalHeap, (int)v67, 0i64);
  v71 = v27;
  if ( this->SingleBinaryShaderFile )
  {
    Scaleform::String::operator+(&this->BinaryShaderPath, &result, "GFxShaders.cache");
    v28 = (Scaleform::SysFile *)Scaleform::Memory::pGlobalHeap->Alloc(Scaleform::Memory::pGlobalHeap, 24i64, 0i64);
    if ( v28 )
    {
      Scaleform::SysFile::SysFile(v28, &result, 14, 438);
      v25 = v29;
    }
    if ( !((unsigned __int8 (__fastcall *)(Scaleform::RefCountVImpl *))v25->Release)(v25) )
    {
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v27);
      v30 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
      if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                           (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                           -1) == 1 )
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v30);
      goto LABEL_83;
    }
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, const char *, __int64))v25->__vftable[3].~RefCountImplCore)(
      v25,
      Scaleform::Render::GL::ShaderHeaderString,
      12i64);
    v31 = v25->__vftable;
    path.pData = (Scaleform::String::DataDesc *)0x88D65E861C696A8Ci64;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, Scaleform::String *, __int64))v31[3].~RefCountImplCore)(
      v25,
      &path,
      8i64);
    v32 = v25->__vftable;
    SeparablePipelines = v3;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, int *, __int64))v32[3].~RefCountImplCore)(
      v25,
      &SeparablePipelines,
      4i64);
    SeparablePipelines = this->SeparablePipelines;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, int *, __int64))v25->__vftable[3].~RefCountImplCore)(
      v25,
      &SeparablePipelines,
      4i64);
    v33 = v25->__vftable;
    SeparablePipelines = (v4 + 0x7FFF) & 0xFFFF8000;
    ((void (__fastcall *)(Scaleform::RefCountVImpl *, int *, __int64))v33[3].~RefCountImplCore)(
      v25,
      &SeparablePipelines,
      4i64);
    v34 = (void *)(result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
    SeparablePipelines = 32;
    if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                         (volatile int *)((result.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                         -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v34);
  }
  v35 = &this->CompiledShaderHash;
  v36 = this->CompiledShaderHash.mHash.pTable;
  if ( v36 )
  {
    v38 = v36->SizeMask;
    v37 = 0i64;
    v39 = v36 + 1;
    do
    {
      if ( v39->EntryCount != -2i64 )
        break;
      ++v37;
      v39 += 3;
    }
    while ( v37 <= v38 );
  }
  else
  {
    v72 = 0i64;
    v37 = 0i64;
    v35 = 0i64;
    v70 = 0i64;
  }
  while ( v35 )
  {
    v40 = v35->mHash.pTable;
    if ( !v35->mHash.pTable || (signed __int64)v37 > (signed __int64)v40->SizeMask )
      break;
    v41 = (Scaleform::RefCountVImpl *)v40[3 * v37 + 3].EntryCount;
    v42 = &v40[3 * v37];
    v43 = v42[2].EntryCount;
    v63 = v43;
    if ( v41 )
      Scaleform::Render::RenderBuffer::AddRef(v41);
    v44 = (Scaleform::RefCountVImpl *)v42[3].EntryCount;
    if ( v44 )
    {
      v45 = this->pHal->GetGraphicsDevice(this->pHal);
      if ( v45->glIsProgram(v45, (Scaleform::Render::GL::HALGLProgram *)v44) )
      {
        v46 = this->pHal->GetGraphicsDevice(this->pHal);
        v46->glGetProgramBinary(v46, (Scaleform::Render::GL::HALGLProgram *)v44, v67, &v64, (unsigned int *)&v68, v71);
        v47 = this->pHal->GetGraphicsDevice(this->pHal);
        if ( v47->glGetError(v47) )
        {
          Scaleform::Render::GL::ShaderManager::Reset(this, 0);
          v25->__vftable[6].AddRef(v25);
          Scaleform::RefCountImpl::Release(v44);
          goto LABEL_83;
        }
        if ( this->SingleBinaryShaderFile )
          goto LABEL_68;
        if ( v64 != LODWORD(v35->mHash.pTable[3 * v37 + 3].SizeMask) && v64 )
        {
          LODWORD(v60) = v43;
          Scaleform::SFsprintf(
            dest,
            0x400ui64,
            "%sGFxShaders-%08x.cache",
            (const char *)((this->BinaryShaderPath.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 12),
            v60);
          v48 = (Scaleform::SysFile *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                        Scaleform::Memory::pGlobalHeap,
                                        24i64);
          if ( v48 )
          {
            Scaleform::String::String(&path, dest);
            v65 |= 1u;
            Scaleform::SysFile::SysFile(v48, &path, 14, 438);
            v50 = v49;
          }
          else
          {
            v50 = 0i64;
          }
          if ( v25 )
            Scaleform::RefCountImpl::Release(v25);
          v25 = v50;
          if ( (v65 & 1) != 0 )
          {
            v51 = (void *)(path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64);
            v65 &= ~1u;
            if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                                 (volatile int *)((path.HeapTypeBits & 0xFFFFFFFFFFFFFFFCui64) + 8),
                                 -1) == 1 )
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v51);
          }
          if ( !((unsigned __int8 (__fastcall *)(Scaleform::RefCountVImpl *))v50->Release)(v50) )
          {
            Scaleform::RefCountImpl::Release(v44);
            v35 = v70;
            goto LABEL_73;
          }
          ((void (__fastcall *)(Scaleform::RefCountVImpl *, const char *, __int64))v50->__vftable[3].~RefCountImplCore)(
            v50,
            Scaleform::Render::GL::ShaderHeaderString,
            12i64);
          *(_QWORD *)&v72 = 0x88D65E861C696A8Cui64;
          ((void (__fastcall *)(Scaleform::RefCountVImpl *, __int128 *, __int64))v50->__vftable[3].~RefCountImplCore)(
            v50,
            &v72,
            8i64);
          SeparablePipelines += 20;
          v35 = v70;
          v43 = v63;
LABEL_68:
          v52 = v25->__vftable;
          v63 = v43;
          ((void (__fastcall *)(Scaleform::RefCountVImpl *, int *, __int64))v52[3].~RefCountImplCore)(v25, &v63, 4i64);
          v63 = v68;
          ((void (__fastcall *)(Scaleform::RefCountVImpl *, int *, __int64))v25->__vftable[3].~RefCountImplCore)(
            v25,
            &v63,
            4i64);
          v63 = v64;
          ((void (__fastcall *)(Scaleform::RefCountVImpl *, int *, __int64))v25->__vftable[3].~RefCountImplCore)(
            v25,
            &v63,
            4i64);
          v53 = v64;
          if ( v64 > 0 )
          {
            v54 = v71;
            v55 = ((__int64 (__fastcall *)(Scaleform::RefCountVImpl *, void *, _QWORD))v25->__vftable[3].~RefCountImplCore)(
                    v25,
                    v71,
                    (unsigned int)v64);
            v53 = v64;
            if ( v55 < v64 )
            {
              Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v54);
              Scaleform::RefCountImpl::Release(v44);
              goto LABEL_83;
            }
          }
          v56 = SeparablePipelines + 12;
          LODWORD(v35->mHash.pTable[3 * v37 + 3].SizeMask) = v53;
          v57 = !this->SingleBinaryShaderFile;
          SeparablePipelines = v64 + v56;
          if ( v57 )
            v25->__vftable[6].AddRef(v25);
        }
      }
      Scaleform::RefCountImpl::Release(v44);
    }
LABEL_73:
    v58 = v35->mHash.pTable->SizeMask;
    if ( (__int64)v37 <= (__int64)v58 && ++v37 <= v58 )
    {
      v59 = &v35->mHash.pTable[3 * v37 + 1];
      do
      {
        if ( v59->EntryCount != -2i64 )
          break;
        ++v37;
        v59 += 3;
      }
      while ( v37 <= v58 );
    }
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v71);
  if ( this->SingleBinaryShaderFile )
    v25->__vftable[6].AddRef(v25);
LABEL_83:
  if ( v25 )
    Scaleform::RefCountImpl::Release(v25);
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rsi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *v9; // rdi
  __int64 v10; // rax
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v14; // rcx
  int v15; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > v16; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v15 = 2;
    v6 = 0i64;
    v16.pTable = 0i64;
    v16.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 48 * v5 + 16, &v15);
    v16.pTable->EntryCount = 0i64;
    v16.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 3i64;
        v16.pTable[v7 - 2].EntryCount = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> > *)&this->pTable[v6];
        if ( v9->Second.Program.pObject != (Scaleform::Render::GL::HALGLProgram *)-2i64 )
        {
          v10 = 4i64;
          v11 = 5381i64;
          do
          {
            v12 = *((unsigned __int8 *)&v9->Second.BinarySize + v10 + 7);
            --v10;
            v11 = v12 + 65599 * v11;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::add<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>>(
            &v16,
            pheapAddr,
            v9 + 1,
            v11);
          pObject = (Scaleform::RefCountVImpl *)v9[1].Second.Program.pObject;
          if ( pObject )
            Scaleform::RefCountImpl::Release(pObject);
          v14 = (Scaleform::RefCountVImpl *)v9[1].Second.Shader.pObject;
          if ( v14 )
            Scaleform::RefCountImpl::Release(v14);
          v9->Second.Program.pObject = (Scaleform::Render::GL::HALGLProgram *)-2i64;
        }
        v6 += 3i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v16.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::~HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>(this);
  }
}

void __fastcall Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rbx
  __int64 v6; // rdi
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *pTable; // rbx
  __int64 v10; // rax
  const Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> > *v11; // r8
  unsigned __int64 v12; // r9
  __int64 v13; // rdx
  int v14; // [rsp+50h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> > v15; // [rsp+58h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v14 = 2;
    v6 = 0i64;
    v15.pTable = 0i64;
    v15.pTable = (Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> >::NodeHashF> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 40 * v5 + 16, &v14);
    v15.pTable->EntryCount = 0i64;
    v15.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 40i64;
        *(_QWORD *)((char *)&v15.pTable[-1] + v7 - 8) = -2i64;
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
          v10 = 12i64;
          v11 = (const Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey> > *)((char *)&pTable[2] + v6);
          v12 = 5381i64;
          do
          {
            v13 = *((unsigned __int8 *)v11 + --v10);
            v12 = v13 + 65599 * v12;
          }
          while ( v10 );
          Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::add<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>>(
            &v15,
            pheapAddr,
            v11,
            v12);
          *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v6) = -2i64;
        }
        v6 += 40i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v15.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>,Scaleform::HashNode<Scaleform::Render::GL::ShaderManager::DynamicLoopKey,Scaleform::Render::GL::ShaderObject *,Scaleform::FixedSizeHash<Scaleform::Render::GL::ShaderManager::DynamicLoopKey>>::NodeHashF>>::Clear(this);
  }
}

__int64 __fastcall Scaleform::Render::GL::ShaderObject::validate(
        Scaleform::Render::GL::ShaderObject *this,
        Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *shaderHash,
        bool testCompilation)
{
  __int64 v3; // r12
  __int64 v4; // rdx
  int *p_BinarySize; // rax
  unsigned int v7; // esi
  int *v8; // r10
  Scaleform::Render::GL::ShaderHashEntry *v9; // r14
  unsigned int v10; // er13
  bool Separated; // bl
  Scaleform::Render::GL::ShaderDesc::ShaderVersion ShaderVer; // er8
  int ComboIndex; // ebp
  unsigned int v14; // edi
  unsigned __int16 ShaderIndexForComboIndex; // ax
  Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *v16; // rbp
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rdx
  __int64 v24; // rcx
  __int64 v25; // rbx
  Scaleform::RefCountVImpl *v26; // rcx
  Scaleform::RefCountVImpl *v27; // rcx
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::GL::HALGLProgram *v29; // rax
  int *v30; // rdi
  Scaleform::Render::GL::ShaderStages v31; // ebx
  Scaleform::Render::GL::GraphicsDevice *v32; // rax
  Scaleform::RefCountVImpl *v33; // rcx
  Scaleform::RefCountVImpl **StagePrograms; // rbx
  __int64 v35; // rdi
  Scaleform::RefCountVImpl **v36; // rbx
  Scaleform::RefCountVImpl *v37; // rcx
  int *v40; // [rsp+38h] [rbp-F0h]
  unsigned int v41; // [rsp+40h] [rbp-E8h]
  Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *shaderHasha; // [rsp+48h] [rbp-E0h]
  Scaleform::Render::GL::ShaderHashEntry shaders[6]; // [rsp+50h] [rbp-D8h] BYREF
  int v44; // [rsp+E0h] [rbp-48h] BYREF
  __int16 v45; // [rsp+E4h] [rbp-44h]

  v3 = 6i64;
  shaderHasha = shaderHash;
  v4 = 6i64;
  p_BinarySize = &shaders[0].BinarySize;
  v7 = 0;
  do
  {
    *((_QWORD *)p_BinarySize - 2) = 0i64;
    *((_QWORD *)p_BinarySize - 1) = 0i64;
    *p_BinarySize = 0;
    p_BinarySize += 6;
    --v4;
  }
  while ( v4 );
  memset(shaders, 0, sizeof(shaders));
  v8 = &v44;
  v44 = 0;
  v9 = shaders;
  v45 = 0;
  v10 = 0;
  v40 = &v44;
  do
  {
    Separated = this->Separated;
    ShaderVer = this->ShaderVer;
    ComboIndex = this->ComboIndex;
    if ( v10 )
    {
      if ( v10 != 1 )
      {
        v14 = 0;
        goto LABEL_10;
      }
      ShaderIndexForComboIndex = Scaleform::Render::GL::FragShaderDesc::GetShaderIndexForComboIndex(
                                   ComboIndex,
                                   ShaderVer);
    }
    else
    {
      ShaderIndexForComboIndex = Scaleform::Render::GL::VertexShaderDesc::GetShaderIndexForComboIndex(
                                   ComboIndex,
                                   ShaderVer);
    }
    v8 = v40;
    v14 = ShaderIndexForComboIndex | (Separated ? 0x80000000 : 0) | ((v10 & 0x7FFF) << 16);
LABEL_10:
    v16 = shaderHasha;
    v41 = v14;
    pTable = shaderHasha->mHash.pTable;
    if ( shaderHasha->mHash.pTable )
    {
      v18 = 5381i64;
      v19 = 4i64;
      do
      {
        v20 = *((unsigned __int8 *)&v40 + v19-- + 7);
        v21 = 65599 * v18 + v20;
        v18 = v21;
      }
      while ( v19 );
      v22 = v21 & pTable->SizeMask;
      v23 = v22;
      v24 = (__int64)&pTable[3 * v22 + 1];
      if ( *(_QWORD *)v24 != -2i64 && *(_QWORD *)(v24 + 8) == v22 )
      {
        while ( *(_QWORD *)(v24 + 8) != v22 || *(_DWORD *)(v24 + 16) != v14 )
        {
          v23 = *(_QWORD *)v24;
          if ( *(_QWORD *)v24 == -1i64 )
            goto LABEL_35;
          v24 = (__int64)&pTable[3 * v23 + 1];
        }
        if ( v23 >= 0 )
        {
          v25 = (__int64)&pTable[3 * v23 + 2];
          if ( v25 )
          {
            if ( v9 )
            {
              v26 = *(Scaleform::RefCountVImpl **)(v25 + 8);
              if ( v26 )
                Scaleform::Render::RenderBuffer::AddRef(v26);
              if ( v9->Shader.pObject )
                Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v9->Shader.pObject);
              v27 = *(Scaleform::RefCountVImpl **)(v25 + 16);
              v9->Shader.pObject = *(Scaleform::Render::GL::HALGLShader **)(v25 + 8);
              if ( v27 )
                Scaleform::Render::RenderBuffer::AddRef(v27);
              pObject = (Scaleform::RefCountVImpl *)v9->Program.pObject;
              if ( pObject )
                Scaleform::RefCountImpl::Release(pObject);
              v8 = v40;
              v9->Program.pObject = *(Scaleform::Render::GL::HALGLProgram **)(v25 + 16);
              v9->BinarySize = *(_DWORD *)(v25 + 24);
            }
            if ( (v29 = v9->Program.pObject, *(_BYTE *)v8 = 1, v29) && !v29->Name
              || v9->Shader.pObject && !v9->Shader.pObject->Name )
            {
              v7 = 2;
              goto LABEL_53;
            }
          }
        }
      }
    }
LABEL_35:
    v8 = (int *)((char *)v8 + 1);
    ++v10;
    ++v9;
    v40 = v8;
  }
  while ( v10 < 6 );
  v30 = &v44;
  v31 = ShaderStage_Vertex;
  while ( !*(_BYTE *)v30
       || Scaleform::Render::GL::ShaderObject::validateShaderOrProgram(
            this,
            shaders,
            v31,
            this->Separated,
            testCompilation) )
  {
    ++v31;
    v30 = (int *)((char *)v30 + 1);
    if ( (unsigned int)v31 >= ShaderStage_Count )
    {
      if ( Scaleform::Render::GL::ShaderObject::validateProgramOrPipeline(this, shaders, this->Separated, v16) )
      {
        v7 = 1;
      }
      else
      {
        if ( this->Separated && this->Pipeline.pObject )
        {
          v32 = this->pHal->GetGraphicsDevice(this->pHal);
          v32->glDeleteProgramPipelines(v32, 1, &this->Pipeline.pObject);
          v33 = (Scaleform::RefCountVImpl *)this->Pipeline.pObject;
          if ( v33 )
            Scaleform::RefCountImpl::Release(v33);
          this->Pipeline.pObject = 0i64;
        }
        StagePrograms = (Scaleform::RefCountVImpl **)this->StagePrograms;
        v35 = 6i64;
        do
        {
          if ( *StagePrograms )
            Scaleform::RefCountImpl::Release(*StagePrograms);
          *StagePrograms++ = 0i64;
          --v35;
        }
        while ( v35 );
      }
      break;
    }
  }
LABEL_53:
  v36 = (Scaleform::RefCountVImpl **)&v44;
  do
  {
    v37 = *(v36 - 2);
    v36 -= 3;
    --v3;
    if ( v37 )
      Scaleform::RefCountImpl::Release(v37);
    if ( *v36 )
      Scaleform::RefCountImpl::Release(*v36);
  }
  while ( v3 );
  return v7;
}

char __fastcall Scaleform::Render::GL::ShaderObject::validateProgramOrPipeline(
        Scaleform::Render::GL::ShaderObject *this,
        Scaleform::Render::GL::ShaderHashEntry *shaders,
        bool separable,
        Scaleform::HashLH<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>,2,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> > *shaderHash)
{
  __int64 v7; // rsi
  Scaleform::Render::GL::GraphicsDevice *v8; // rax
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  Scaleform::Render::GL::GraphicsDevice *v10; // rax
  Scaleform::Render::GL::HAL *pHal; // rcx
  __int64 v12; // rax
  Scaleform::Render::GL::GraphicsDevice *v13; // rax
  int ComboIndex; // eax
  Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeHashF> >::TableType *pTable; // r10
  unsigned int v17; // er9
  __int64 v18; // rax
  __int64 v19; // rdx
  __int64 v20; // rcx
  __int64 v21; // rcx
  __int64 v22; // r8
  __int64 v23; // rcx
  __int64 v24; // rdx
  __int64 v25; // rcx
  __int64 v26; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  int v28; // [rsp+30h] [rbp-268h] BYREF
  unsigned int v29; // [rsp+34h] [rbp-264h] BYREF
  int v30; // [rsp+38h] [rbp-260h] BYREF
  Scaleform::RefCountVImpl *v31[2]; // [rsp+40h] [rbp-258h] BYREF
  int v32; // [rsp+50h] [rbp-248h]
  Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int> >::NodeRef key; // [rsp+58h] [rbp-240h] BYREF
  char v34[512]; // [rsp+70h] [rbp-228h] BYREF

  if ( !separable )
  {
    v7 = 6i64;
    do
    {
      if ( shaders->Shader.pObject )
      {
        v8 = this->pHal->GetGraphicsDevice(this->pHal);
        if ( !v8->glIsProgram(v8, shaders->Program.pObject) )
        {
          v9 = this->pHal->GetGraphicsDevice(this->pHal);
          v9->glGetShaderiv(v9, shaders->Shader.pObject, 35712u, &v30);
          if ( !v30 )
          {
            v10 = this->pHal->GetGraphicsDevice(this->pHal);
            v10->glDeleteShader(v10, shaders->Shader.pObject);
          }
        }
      }
      ++shaders;
      --v7;
    }
    while ( v7 );
    pHal = this->pHal;
    v28 = 0;
    v12 = (__int64)pHal->GetGraphicsDevice(pHal);
    (*(void (__fastcall **)(__int64, Scaleform::Render::GL::HALGLProgram *, __int64, int *))(*(_QWORD *)v12 + 568i64))(
      v12,
      this->StagePrograms[0].pObject,
      35714i64,
      &v28);
    if ( !v28 )
    {
      v13 = this->pHal->GetGraphicsDevice(this->pHal);
      v13->glGetProgramInfoLog(v13, this->StagePrograms[0].pObject, 512, 0i64, v34);
      return 0;
    }
    ComboIndex = this->ComboIndex;
    if ( this->Separated )
      LOWORD(ComboIndex) = Scaleform::Render::GL::VertexShaderDesc::GetShaderIndexForComboIndex(
                             ComboIndex,
                             this->ShaderVer);
    pTable = shaderHash->mHash.pTable;
    v17 = (unsigned __int16)ComboIndex | 0x80000000;
    v29 = v17;
    if ( !pTable )
      goto LABEL_23;
    v18 = 5381i64;
    v19 = 4i64;
    do
    {
      v20 = *((unsigned __int8 *)&v28 + v19-- + 3);
      v21 = 65599 * v18 + v20;
      v18 = v21;
    }
    while ( v19 );
    v22 = v21 & pTable->SizeMask;
    v23 = v22;
    v24 = (__int64)&pTable[3 * v22 + 1];
    if ( *(_QWORD *)v24 == -2i64 || *(_QWORD *)(v24 + 8) != v22 )
      goto LABEL_23;
    while ( *(_QWORD *)(v24 + 8) != v22 || *(_DWORD *)(v24 + 16) != v17 )
    {
      v23 = *(_QWORD *)v24;
      if ( *(_QWORD *)v24 == -1i64 )
        goto LABEL_23;
      v24 = (__int64)&pTable[3 * v23 + 1];
    }
    if ( v23 >= 0 )
      v25 = (__int64)&pTable[3 * v23 + 2];
    else
LABEL_23:
      v25 = 0i64;
    v26 = v25 + 8;
    if ( !v25 )
      v26 = 0i64;
    if ( !v26 )
    {
      pObject = (Scaleform::RefCountVImpl *)this->StagePrograms[0].pObject;
      v32 = 0;
      *(_OWORD *)v31 = 0i64;
      if ( pObject )
      {
        Scaleform::Render::RenderBuffer::AddRef(pObject);
        if ( v31[1] )
          Scaleform::RefCountImpl::Release(v31[1]);
      }
      v31[1] = (Scaleform::RefCountVImpl *)this->StagePrograms[0].pObject;
      key.pFirst = &v29;
      key.pSecond = (const Scaleform::Render::GL::ShaderHashEntry *)v31;
      Scaleform::HashSetBase<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeAltHashF,Scaleform::AllocatorLH<unsigned int,2>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>,Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeHashF>>::Set<Scaleform::HashNode<unsigned int,Scaleform::Render::GL::ShaderHashEntry,Scaleform::FixedSizeHash<unsigned int>>::NodeRef>(
        &shaderHash->mHash,
        shaderHash,
        &key);
      if ( v31[1] )
        Scaleform::RefCountImpl::Release(v31[1]);
      if ( v31[0] )
        Scaleform::RefCountImpl::Release(v31[0]);
    }
  }
  return 1;
}

char __fastcall Scaleform::Render::GL::ShaderObject::validateShaderOrProgram(
        Scaleform::Render::GL::ShaderObject *this,
        Scaleform::Render::GL::ShaderHashEntry *shaders,
        Scaleform::Render::GL::ShaderStages stage,
        bool separable)
{
  __int64 v5; // r8
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl **v7; // rbx
  Scaleform::RefCountVImpl *v8; // rbx
  Scaleform::Render::GL::GraphicsDevice *v9; // rax
  Scaleform::Render::GL::GraphicsDevice *v10; // rax
  Scaleform::Render::GL::GraphicsDevice *v11; // rax
  int v13[4]; // [rsp+30h] [rbp-228h] BYREF
  char v14[512]; // [rsp+40h] [rbp-218h] BYREF

  if ( separable )
  {
LABEL_10:
    this->IsValidated = 1;
    return 1;
  }
  v13[0] = 0;
  v5 = stage;
  pObject = (Scaleform::RefCountVImpl *)shaders[v5].Shader.pObject;
  v7 = (Scaleform::RefCountVImpl **)&shaders[v5];
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  v8 = *v7;
  v9 = this->pHal->GetGraphicsDevice(this->pHal);
  v9->glGetShaderiv(v9, (Scaleform::Render::GL::HALGLShader *)v8, 35713u, v13);
  if ( v13[0] )
  {
    if ( v8 )
      Scaleform::RefCountImpl::Release(v8);
    goto LABEL_10;
  }
  v10 = this->pHal->GetGraphicsDevice(this->pHal);
  v10->glGetShaderInfoLog(v10, (Scaleform::Render::GL::HALGLShader *)v8, 512, 0i64, v14);
  v11 = this->pHal->GetGraphicsDevice(this->pHal);
  v11->glDeleteShader(v11, (Scaleform::Render::GL::HALGLShader *)v8);
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  return 0;
}

unsigned __int64 *__fastcall _local_stdio_scanf_options()
{
  return &`__local_stdio_scanf_options'::`2'::_OptionsStorage;
}

int sscanf_s(const char *const _Buffer, const char *const _Format, ...)
{
  unsigned __int64 *v4; // rax
  va_list va; // [rsp+60h] [rbp+18h] BYREF

  va_start(va, _Format);
  v4 = _local_stdio_scanf_options();
  return _stdio_common_vsscanf(*v4 | 1, _Buffer, 0xFFFFFFFFFFFFFFFFui64, _Format, 0i64, va);
}

