#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_extensions.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_graphicsdevice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "program files (x86)/windows kits/8.1/include/shared/stralign.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_events.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_events.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shaderhal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_graphicsdevice.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/8.1/include/um/winuser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_sync.h"
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
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_texture.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/gl/gl_shader.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"

long Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex; // 0x140A23470
Scaleform::Render::GL::DepthStencilSurface::StencilFormatEntry Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[4]; // 0x140A23478
Scaleform::Render::GL::TextureFormat::Mapping Scaleform::Render::GL::TextureFormatMapping[37]; // 0x140A234B0
Scaleform::Render::GL::Texture::Texture(Scaleform::Render::TextureManagerLocks * pmanagerLocks, const Scaleform::Render::GL::TextureFormat * pformat, unsigned long mipLevels, const Scaleform::Render::Size<unsigned long> & size, unsigned long use, Scaleform::Render::ImageBase * pimage); // 0x1405F4C50
Scaleform::Render::GL::Texture::Texture(Scaleform::Render::TextureManagerLocks * pmanagerLocks, unsigned long texID, bool deleteTexture, const Scaleform::Render::Size<unsigned long> & size, Scaleform::Render::ImageBase * pimage); // 0x1405F4A80
Scaleform::Render::GL::Texture::Texture(Scaleform::Render::TextureManagerLocks * pmanagerLocks, Scaleform::Render::GL::HALGLTexture * texID, const Scaleform::Render::Size<unsigned long> & size, Scaleform::Render::ImageBase * pimage); // 0x1405F4B90
Scaleform::Render::GL::Texture::~Texture(); // 0x1405F5070
bool Scaleform::Render::GL::Texture::Initialize(); // 0x1405F65E0
bool Scaleform::Render::GL::Texture::Initialize(Scaleform::Render::GL::HALGLTexture * texID); // 0x1405F6300
bool Scaleform::Render::GL::Texture::Upload(unsigned long itex, unsigned long level, const Scaleform::Render::ImagePlane & plane); // 0x1405F7E20
void Scaleform::Render::GL::Texture::uploadImage(Scaleform::Render::ImageData * psource); // 0x1405F8780
void Scaleform::Render::GL::Texture::DisposeTextureData(); // 0x1405F5DF0
void Scaleform::Render::GL::Texture::ReleaseHWTextures(bool __formal); // 0x1405F70B0
void Scaleform::Render::GL::Texture::ApplyTexture(unsigned long stage, const Scaleform::Render::ImageFillMode & fillMode); // 0x1405F5630
bool Scaleform::Render::GL::Texture::UpdateRenderTargetData(Scaleform::Render::RenderTargetData * __formal, Scaleform::Render::HAL * __formal); // 0x1405F7A00
bool Scaleform::Render::GL::Texture::UpdateStagingData(Scaleform::Render::RenderTargetData * prtData); // 0x1405F7C10
bool Scaleform::Render::GL::Texture::Update(const Scaleform::Render::Texture::UpdateDesc * updates, unsigned long count, unsigned long mipLevel); // 0x1405F7510
void Scaleform::Render::GL::Texture::MakeMappable(); // 0x1405F6C30
void Scaleform::Render::GL::Texture::computeUpdateConvertRescaleFlags(bool rescale, bool swMipGen, Scaleform::Render::ImageFormat inputFormat, Scaleform::Render::ResizeImageType & rescaleType, Scaleform::Render::ImageFormat & rescaleBuffFromat, bool & convert); // 0x1405F82E0
Scaleform::Render::GL::DepthStencilSurface::DepthStencilSurface(Scaleform::Render::TextureManagerLocks * pmanagerLocks, const Scaleform::Render::Size<unsigned long> & size); // 0x1405F45A0
Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry & __that); // 0x1405F46B0
Scaleform::Render::GL::DepthStencilSurface::~DepthStencilSurface(); // 0x1405F4E60
Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::~PendingTextureDestroyEntry(); // 0x1405F4FA0
bool Scaleform::Render::GL::DepthStencilSurface::Initialize(); // 0x1405F6100
bool Scaleform::Render::GL::DepthStencilSurface::SetNextGLFormatIndex(); // 0x1405F7400
void Scaleform::Render::GL::DepthStencilSurface::ResetGLFormatIndex(); // 0x1405F72B0
bool Scaleform::Render::GL::DepthStencilSurface::CurrentFormatHasDepth(); // 0x1405F5CE0
bool Scaleform::Render::GL::MappedTexture::Map(Scaleform::Render::Texture * ptexture, unsigned long mipLevel, unsigned long levelCount); // 0x1405F6C90
void Scaleform::Render::GL::MappedTexture::Unmap(bool __formal); // 0x1405F7440
Scaleform::Render::GL::TextureManager::TextureManager(unsigned long renderThreadId, Scaleform::Render::ThreadCommandQueue * commandQueue, Scaleform::Render::TextureCache * texCache); // 0x1405F4DE0
Scaleform::Render::GL::TextureManager::~TextureManager(); // 0x1405F5160
void Scaleform::Render::GL::TextureManager::NotifyLostContext(); // 0x1405F6F10
void Scaleform::Render::GL::TextureManager::DestroyFBO(Scaleform::Render::GL::HALGLFramebuffer * fboid); // 0x1405F5D10
unsigned long Scaleform::Render::GL::TextureManager::getBaseTextureFormatFromInternal(unsigned long intfmt); // 0x1405F83C0
void Scaleform::Render::GL::TextureManager::Initialize(Scaleform::Render::GL::HAL * phal); // 0x1405F6B50
void Scaleform::Render::GL::TextureManager::initTextureFormats(); // 0x1405F8430
void Scaleform::Render::GL::TextureManager::processTextureKillList(); // 0x1405F8690
Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(Scaleform::Render::GL::Texture * ptexture); // 0x1405F4940
Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(Scaleform::Render::GL::DepthStencilSurface * pds); // 0x1405F47B0
Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(Scaleform::Render::GL::HALGLFramebuffer * pFBO); // 0x1405F4890
void Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::FreeResource(); // 0x1405F5E20
void Scaleform::Render::GL::TextureManager::processInitTextures(); // 0x1405F85B0
void Scaleform::Render::GL::TextureManager::BeginFrame(); // 0x1405F58B0
Scaleform::Render::Texture * Scaleform::Render::GL::TextureManager::CreateTexture(Scaleform::Render::ImageFormat format, unsigned long mipLevels, const Scaleform::Render::Size<unsigned long> & size, unsigned long use, Scaleform::Render::ImageBase * pimage, Scaleform::Render::MemoryManager * allocManager); // 0x1405F5BF0
Scaleform::Render::Texture * Scaleform::Render::GL::TextureManager::CreateTexture(unsigned long texID, bool deleteTexture, Scaleform::Render::Size<unsigned long> imgSize, Scaleform::Render::ImageBase * pimage); // 0x1405F5A80
Scaleform::Render::Texture * Scaleform::Render::GL::TextureManager::CreateTexture(Scaleform::Render::GL::HALGLTexture * texID, Scaleform::Render::Size<unsigned long> imgSize, Scaleform::Render::ImageBase * pimage); // 0x1405F5B40
Scaleform::Render::DepthStencilSurface * Scaleform::Render::GL::TextureManager::CreateDepthStencilSurface(const Scaleform::Render::Size<unsigned long> & size, Scaleform::Render::MemoryManager * manager); // 0x1405F58E0
Scaleform::Render::DepthStencilSurface * Scaleform::Render::GL::TextureManager::CreateDepthStencilSurface(Scaleform::Render::GL::HALGLRenderbuffer * id); // 0x1405F5940
unsigned long Scaleform::Render::GL::TextureManager::GetTextureFormatSupport(); // 0x1405F5FA0
unsigned long Scaleform::Render::GL::TextureManager::GetTextureUseCaps(Scaleform::Render::ImageFormat format); // 0x1405F6050
bool Scaleform::Render::GL::TextureManager::IsNonPow2Supported(Scaleform::Render::ImageFormat __formal, unsigned short use); // 0x1405F6BE0//decompilation failure at 140A23470!
//decompilation failure at 140A23478!
//decompilation failure at 140A234B0!
void __fastcall Scaleform::Render::GL::DepthStencilSurface::DepthStencilSurface(
        Scaleform::Render::GL::DepthStencilSurface *this,
        Scaleform::Render::TextureManagerLocks *pmanagerLocks,
        const Scaleform::Render::Size<unsigned long> *size)
{
  unsigned int Height; // ecx

  this->__vftable = (Scaleform::Render::GL::DepthStencilSurface_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->pPrev = (Scaleform::Render::DepthStencilSurface *)-1i64;
  this->pNext = (Scaleform::Render::DepthStencilSurface *)-1i64;
  this->GPUFence.pObject = 0i64;
  this->__vftable = (Scaleform::Render::GL::DepthStencilSurface_vtbl *)&Scaleform::Render::DepthStencilSurface::`vftable';
  if ( pmanagerLocks )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pmanagerLocks);
  this->pManagerLocks.pObject = pmanagerLocks;
  this->State = State_InitPending;
  Height = size->Height;
  this->Size.Width = size->Width;
  this->Size.Height = Height;
  this->pMemoryManager.pObject = 0i64;
  this->__vftable = (Scaleform::Render::GL::DepthStencilSurface_vtbl *)&Scaleform::Render::GL::DepthStencilSurface::`vftable';
  this->RenderBufferID.pObject = 0i64;
}

void __fastcall Scaleform::Render::MappedTextureBase::MappedTextureBase(Scaleform::Render::MappedTextureBase *this)
{
  Scaleform::Render::ImagePlane *p_Plane0; // rax
  __int64 v3; // rcx
  Scaleform::Render::ImagePlane *Planes; // rax

  this->__vftable = (Scaleform::Render::MappedTextureBase_vtbl *)&Scaleform::Render::MappedTextureBase::`vftable';
  this->pTexture = 0i64;
  p_Plane0 = &this->Data.Plane0;
  *(_QWORD *)&this->StartMipLevel = 0i64;
  this->Data.pPlanes = &this->Data.Plane0;
  *(_QWORD *)&this->Data.Format = 0i64;
  *(_DWORD *)&this->Data.Flags = 0x10000;
  this->Data.pPalette.pObject = 0i64;
  v3 = 4i64;
  *(_QWORD *)&p_Plane0->Width = 0i64;
  p_Plane0->Pitch = 0i64;
  p_Plane0->DataSize = 0i64;
  p_Plane0->pData = 0i64;
  Planes = this->Planes;
  do
  {
    *(_QWORD *)&Planes->Width = 0i64;
    Planes->Pitch = 0i64;
    Planes->DataSize = 0i64;
    Planes->pData = 0i64;
    ++Planes;
    --v3;
  }
  while ( v3 );
}

void __fastcall Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(
        Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *this,
        const Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *__that)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl **pTexture; // rbx
  __int64 v6; // rdi
  __int64 v7; // rsi
  Scaleform::RefCountVImpl **pRenderBuffer; // rbx
  __int64 v9; // rsi
  Scaleform::RefCountVImpl **pFramebuffer; // rbx

  if ( __that->GPUFence.pObject )
    ++__that->GPUFence.pObject->RefCount;
  this->GPUFence.pObject = __that->GPUFence.pObject;
  pObject = (Scaleform::RefCountVImpl *)__that->pHAL.pObject;
  if ( pObject )
    Scaleform::Render::RenderBuffer::AddRef(pObject);
  pTexture = (Scaleform::RefCountVImpl **)__that->pTexture;
  this->pHAL.pObject = __that->pHAL.pObject;
  v6 = 4i64;
  this->StageCount = __that->StageCount;
  v7 = 4i64;
  do
  {
    --v7;
    if ( *pTexture )
      Scaleform::Render::RenderBuffer::AddRef(*pTexture);
    *(Scaleform::RefCountVImpl **)((char *)pTexture + (char *)this - (char *)__that) = *pTexture;
    ++pTexture;
  }
  while ( v7 );
  pRenderBuffer = (Scaleform::RefCountVImpl **)__that->pRenderBuffer;
  v9 = 4i64;
  do
  {
    --v9;
    if ( *pRenderBuffer )
      Scaleform::Render::RenderBuffer::AddRef(*pRenderBuffer);
    *(Scaleform::RefCountVImpl **)((char *)pRenderBuffer + (char *)this - (char *)__that) = *pRenderBuffer;
    ++pRenderBuffer;
  }
  while ( v9 );
  pFramebuffer = (Scaleform::RefCountVImpl **)__that->pFramebuffer;
  do
  {
    --v6;
    if ( *pFramebuffer )
      Scaleform::Render::RenderBuffer::AddRef(*pFramebuffer);
    *(Scaleform::RefCountVImpl **)((char *)pFramebuffer + (char *)this - (char *)__that) = *pFramebuffer;
    ++pFramebuffer;
  }
  while ( v6 );
}

void __fastcall Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(
        Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *this,
        Scaleform::Render::GL::DepthStencilSurface *pds)
{
  Scaleform::Render::Fence *pObject; // rdi
  Scaleform::Render::Fence *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::RefCountVImpl *v9; // rcx

  this->GPUFence.pObject = 0i64;
  this->pHAL.pObject = 0i64;
  this->StageCount = 0;
  this->pTexture[0].pObject = 0i64;
  this->pTexture[1].pObject = 0i64;
  this->pTexture[2].pObject = 0i64;
  this->pTexture[3].pObject = 0i64;
  this->pRenderBuffer[0].pObject = 0i64;
  this->pRenderBuffer[1].pObject = 0i64;
  this->pRenderBuffer[2].pObject = 0i64;
  this->pRenderBuffer[3].pObject = 0i64;
  this->pFramebuffer[0].pObject = 0i64;
  this->pFramebuffer[1].pObject = 0i64;
  this->pFramebuffer[2].pObject = 0i64;
  this->pFramebuffer[3].pObject = 0i64;
  if ( pds )
  {
    pObject = pds->GPUFence.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v5 = this->GPUFence.pObject;
    if ( v5 )
      Scaleform::Render::Fence::Release(v5);
    this->GPUFence.pObject = pObject;
    this->StageCount = 1;
    v6 = (Scaleform::RefCountVImpl *)pds->RenderBufferID.pObject;
    if ( v6 )
      Scaleform::Render::RenderBuffer::AddRef(v6);
    v7 = (Scaleform::RefCountVImpl *)this->pRenderBuffer[0].pObject;
    if ( v7 )
      Scaleform::RefCountImpl::Release(v7);
    this->pRenderBuffer[0].pObject = pds->RenderBufferID.pObject;
    v8 = (Scaleform::RefCountVImpl *)this->pFramebuffer[0].pObject;
    if ( v8 )
      Scaleform::RefCountImpl::Release(v8);
    this->pFramebuffer[0].pObject = 0i64;
    v9 = (Scaleform::RefCountVImpl *)this->pTexture[0].pObject;
    if ( v9 )
      Scaleform::RefCountImpl::Release(v9);
    this->pTexture[0].pObject = 0i64;
  }
}

void __fastcall Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(
        Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *this,
        Scaleform::Render::GL::HALGLFramebuffer *pFBO)
{
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::RefCountVImpl *v6; // rcx

  this->GPUFence.pObject = 0i64;
  this->pHAL.pObject = 0i64;
  this->StageCount = 0;
  this->pTexture[0].pObject = 0i64;
  this->pTexture[1].pObject = 0i64;
  this->pTexture[2].pObject = 0i64;
  this->pTexture[3].pObject = 0i64;
  this->pRenderBuffer[0].pObject = 0i64;
  this->pRenderBuffer[1].pObject = 0i64;
  this->pRenderBuffer[2].pObject = 0i64;
  this->pRenderBuffer[3].pObject = 0i64;
  this->pFramebuffer[0].pObject = 0i64;
  this->pFramebuffer[1].pObject = 0i64;
  this->pFramebuffer[2].pObject = 0i64;
  this->pFramebuffer[3].pObject = 0i64;
  if ( pFBO )
  {
    this->StageCount = 1;
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pFBO);
    pObject = (Scaleform::RefCountVImpl *)this->pFramebuffer[0].pObject;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
    this->pFramebuffer[0].pObject = pFBO;
    v5 = (Scaleform::RefCountVImpl *)this->pRenderBuffer[0].pObject;
    if ( v5 )
      Scaleform::RefCountImpl::Release(v5);
    this->pRenderBuffer[0].pObject = 0i64;
    v6 = (Scaleform::RefCountVImpl *)this->pTexture[0].pObject;
    if ( v6 )
      Scaleform::RefCountImpl::Release(v6);
    this->pTexture[0].pObject = 0i64;
  }
}

void __fastcall Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(
        Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *this,
        Scaleform::Render::GL::Texture *ptexture)
{
  Scaleform::Render::Fence *pObject; // rdi
  Scaleform::Render::Fence *v5; // rcx
  unsigned int v6; // edi
  unsigned int TextureCount; // eax
  Scaleform::Render::GL::Texture::HWTextureDesc *v8; // r14
  __int64 v9; // rsi
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::RefCountVImpl *v11; // rcx
  Scaleform::RefCountVImpl *v12; // rcx
  Scaleform::RefCountVImpl *v13; // rcx

  this->GPUFence.pObject = 0i64;
  this->pHAL.pObject = 0i64;
  this->StageCount = 0;
  this->pTexture[0].pObject = 0i64;
  this->pTexture[1].pObject = 0i64;
  this->pTexture[2].pObject = 0i64;
  this->pTexture[3].pObject = 0i64;
  this->pRenderBuffer[0].pObject = 0i64;
  this->pRenderBuffer[1].pObject = 0i64;
  this->pRenderBuffer[2].pObject = 0i64;
  this->pRenderBuffer[3].pObject = 0i64;
  this->pFramebuffer[0].pObject = 0i64;
  this->pFramebuffer[1].pObject = 0i64;
  this->pFramebuffer[2].pObject = 0i64;
  this->pFramebuffer[3].pObject = 0i64;
  if ( ptexture )
  {
    pObject = ptexture->GPUFence.pObject;
    if ( pObject )
      ++pObject->RefCount;
    v5 = this->GPUFence.pObject;
    if ( v5 )
      Scaleform::Render::Fence::Release(v5);
    this->GPUFence.pObject = pObject;
    v6 = 0;
    TextureCount = ptexture->TextureCount;
    this->StageCount = TextureCount;
    if ( TextureCount )
    {
      do
      {
        v8 = &ptexture->pTextures[v6];
        v9 = v6;
        v10 = (Scaleform::RefCountVImpl *)v8->TexId.pObject;
        if ( v10 )
          Scaleform::Render::RenderBuffer::AddRef(v10);
        v11 = (Scaleform::RefCountVImpl *)this->pTexture[v6].pObject;
        if ( v11 )
          Scaleform::RefCountImpl::Release(v11);
        this->pTexture[v6].pObject = v8->TexId.pObject;
        v12 = (Scaleform::RefCountVImpl *)this->pRenderBuffer[v6].pObject;
        if ( v12 )
          Scaleform::RefCountImpl::Release(v12);
        this->pRenderBuffer[v6].pObject = 0i64;
        v13 = (Scaleform::RefCountVImpl *)this->pFramebuffer[v6].pObject;
        if ( v13 )
          Scaleform::RefCountImpl::Release(v13);
        ++v6;
        this->pFramebuffer[v9].pObject = 0i64;
      }
      while ( v6 < this->StageCount );
    }
  }
}

void __fastcall Scaleform::Render::GL::Texture::Texture(
        Scaleform::Render::GL::Texture *this,
        Scaleform::Render::TextureManagerLocks *pmanagerLocks,
        unsigned int texID,
        bool deleteTexture,
        const Scaleform::Render::Size<unsigned long> *size,
        Scaleform::Render::ImageBase *pimage)
{
  unsigned int Height; // ecx
  __int64 v10; // rax
  Scaleform::Render::GL::HALGLTexture *v11; // rbx
  Scaleform::Render::GL::Texture::HWTextureDesc *pTextures; // rsi
  Scaleform::RefCountVImpl *pObject; // rcx

  Scaleform::Render::Texture::Texture(this, pmanagerLocks, size, 0, 0, pimage, 0i64);
  this->__vftable = (Scaleform::Render::GL::Texture_vtbl *)&Scaleform::Render::GL::Texture::`vftable';
  this->pBackingImage.pObject = 0i64;
  this->Texture0.TexId.pObject = 0i64;
  *(_QWORD *)this->LastMinFilter = 0i64;
  *(_QWORD *)&this->LastMinFilter[2] = 0i64;
  *(_QWORD *)this->LastAddress = 0i64;
  *(_QWORD *)&this->LastAddress[2] = 0i64;
  this->TextureFlags |= 4u;
  if ( !deleteTexture )
    this->TextureFlags |= 0x10u;
  this->pTextures = &this->Texture0;
  Height = size->Height;
  this->Texture0.Size.Width = size->Width;
  this->Texture0.Size.Height = Height;
  v10 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
          Scaleform::Memory::pGlobalHeap,
          24i64);
  v11 = (Scaleform::Render::GL::HALGLTexture *)v10;
  if ( v10 )
  {
    *(_DWORD *)(v10 + 16) = texID;
    *(_QWORD *)v10 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v10 = &Scaleform::Render::GL::HALGLTexture::`vftable';
    *(_DWORD *)(v10 + 8) = 1;
  }
  else
  {
    v11 = 0i64;
  }
  pTextures = this->pTextures;
  pObject = (Scaleform::RefCountVImpl *)pTextures->TexId.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  pTextures->TexId.pObject = v11;
}

void __fastcall Scaleform::Render::GL::Texture::Texture(
        Scaleform::Render::GL::Texture *this,
        Scaleform::Render::TextureManagerLocks *pmanagerLocks,
        Scaleform::Render::GL::HALGLTexture *texID,
        const Scaleform::Render::Size<unsigned long> *size,
        Scaleform::Render::ImageBase *pimage)
{
  unsigned int Height; // ecx
  Scaleform::Render::GL::Texture::HWTextureDesc *pTextures; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx

  Scaleform::Render::Texture::Texture(this, pmanagerLocks, size, 0, 0, pimage, 0i64);
  this->__vftable = (Scaleform::Render::GL::Texture_vtbl *)&Scaleform::Render::GL::Texture::`vftable';
  this->pBackingImage.pObject = 0i64;
  this->Texture0.TexId.pObject = 0i64;
  *(_QWORD *)this->LastMinFilter = 0i64;
  *(_QWORD *)&this->LastMinFilter[2] = 0i64;
  *(_QWORD *)this->LastAddress = 0i64;
  *(_QWORD *)&this->LastAddress[2] = 0i64;
  this->TextureFlags |= 4u;
  this->pTextures = &this->Texture0;
  Height = size->Height;
  this->Texture0.Size.Width = size->Width;
  this->Texture0.Size.Height = Height;
  pTextures = this->pTextures;
  if ( texID )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)texID);
  pObject = (Scaleform::RefCountVImpl *)pTextures->TexId.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  pTextures->TexId.pObject = texID;
}

void __fastcall Scaleform::Render::GL::Texture::Texture(
        Scaleform::Render::GL::Texture *this,
        Scaleform::Render::TextureManagerLocks *pmanagerLocks,
        const Scaleform::Render::GL::TextureFormat *pformat,
        unsigned int mipLevels,
        const Scaleform::Render::Size<unsigned long> *size,
        unsigned int use,
        Scaleform::Render::ImageBase *pimage)
{
  Scaleform::Render::ImageFormat v9; // eax
  unsigned __int8 FormatPlaneCount; // al
  Scaleform::Render::GL::Texture::HWTextureDesc *p_Texture0; // rax
  size_t v12; // r8

  Scaleform::Render::Texture::Texture(this, pmanagerLocks, size, mipLevels, use, pimage, pformat);
  this->__vftable = (Scaleform::Render::GL::Texture_vtbl *)&Scaleform::Render::GL::Texture::`vftable';
  this->pBackingImage.pObject = 0i64;
  this->Texture0.TexId.pObject = 0i64;
  *(_QWORD *)this->LastMinFilter = 0i64;
  *(_QWORD *)&this->LastMinFilter[2] = 0i64;
  *(_QWORD *)this->LastAddress = 0i64;
  *(_QWORD *)&this->LastAddress[2] = 0i64;
  v9 = pformat->GetImageFormat((Scaleform::Render::TextureFormat *)pformat);
  FormatPlaneCount = Scaleform::Render::ImageData::GetFormatPlaneCount(v9);
  this->TextureCount = FormatPlaneCount;
  if ( FormatPlaneCount <= 1u )
    p_Texture0 = &this->Texture0;
  else
    p_Texture0 = (Scaleform::Render::GL::Texture::HWTextureDesc *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                    Scaleform::Memory::pGlobalHeap,
                                                                    this,
                                                                    16i64 * FormatPlaneCount,
                                                                    0i64);
  v12 = 16i64 * this->TextureCount;
  this->pTextures = p_Texture0;
  memset(p_Texture0, 0, v12);
}

void __fastcall Scaleform::Render::Texture::Texture(
        Scaleform::Render::Texture *this,
        Scaleform::Render::TextureManagerLocks *pmanagerLocks,
        const Scaleform::Render::Size<unsigned long> *size,
        unsigned __int8 mipLevels,
        unsigned __int16 use,
        Scaleform::Render::ImageBase *pimage,
        const Scaleform::Render::TextureFormat *pformat)
{
  unsigned int Height; // ecx

  this->__vftable = (Scaleform::Render::Texture_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->pPrev = (Scaleform::Render::Texture *)-1i64;
  this->pNext = (Scaleform::Render::Texture *)-1i64;
  this->GPUFence.pObject = 0i64;
  this->__vftable = (Scaleform::Render::Texture_vtbl *)&Scaleform::Render::Texture::`vftable';
  if ( pmanagerLocks )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pmanagerLocks);
  this->pManagerLocks.pObject = pmanagerLocks;
  this->pImage = pimage;
  Height = size->Height;
  this->ImgSize.Width = size->Width;
  this->ImgSize.Height = Height;
  this->Use = use;
  this->pFormat = pformat;
  this->MipLevels = mipLevels;
  this->State = State_InitPending;
  this->TextureCount = 1;
  this->TextureFlags = 0;
  this->pMap = 0i64;
}

void __fastcall Scaleform::Render::GL::TextureManager::TextureManager(
        Scaleform::Render::GL::TextureManager *this,
        unsigned int renderThreadId,
        Scaleform::Render::ThreadCommandQueue *commandQueue,
        Scaleform::Render::TextureCache *texCache)
{
  Scaleform::Render::TextureManager::TextureManager(this, renderThreadId, commandQueue, texCache);
  this->Scaleform::Render::TextureManager::Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::GL::TextureManager_vtbl *)&Scaleform::Render::GL::TextureManager::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>'};
  this->Scaleform::Render::TextureManager::Scaleform::Render::ImageUpdateSync::__vftable = (Scaleform::Render::ImageUpdateSync_vtbl *)&Scaleform::Render::GL::TextureManager::`vftable'{for `Scaleform::Render::ImageUpdateSync'};
  Scaleform::Render::MappedTextureBase::MappedTextureBase(&this->MappedTexture0);
  this->MappedTexture0.__vftable = (Scaleform::Render::GL::MappedTexture_vtbl *)&Scaleform::Render::GL::MappedTexture::`vftable';
  this->pHal = 0i64;
  this->Caps = 0;
  this->TextureResourceDestroyList.PendingFreeList.Data.Data = 0i64;
  this->TextureResourceDestroyList.PendingFreeList.Data.Size = 0i64;
  this->TextureResourceDestroyList.PendingFreeList.Data.Policy.Capacity = 0i64;
  this->MaximumTextureSize = 0;
}

void __fastcall Scaleform::Render::GL::DepthStencilSurface::~DepthStencilSurface(
        Scaleform::Render::GL::DepthStencilSurface *this)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rdi
  Scaleform::Waitable::HandlerArray *pHandlers; // rbx
  Scaleform::Render::GL::HAL *v4; // rbp
  unsigned __int64 v5; // r8
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::RefCountVImpl *v9; // rcx
  Scaleform::Render::Fence *v10; // rcx
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry __that; // [rsp+20h] [rbp-98h] BYREF

  pObject = this->pManagerLocks.pObject;
  this->__vftable = (Scaleform::Render::GL::DepthStencilSurface_vtbl *)&Scaleform::Render::GL::DepthStencilSurface::`vftable';
  if ( pObject )
    pObject = (Scaleform::Render::TextureManagerLocks *)pObject->pManager;
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(&__that, this);
  pHandlers = pObject->TextureMutex.pHandlers;
  Scaleform::Mutex::DoLock((Scaleform::Mutex *)&pHandlers->HandlersLock.csBuf[32]);
  v4 = *(Scaleform::Render::GL::HAL **)&pObject[3].ImageLock.csBuf[16];
  if ( v4 )
    Scaleform::Render::RenderBuffer::AddRef(*(Scaleform::RefCountVImpl **)&pObject[3].ImageLock.csBuf[16]);
  if ( __that.pHAL.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)__that.pHAL.pObject);
  v5 = (unsigned __int64)&pObject[3].TextureMutex.~RefCountImplCore + 1;
  __that.pHAL.pObject = v4;
  Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::ResizeNoConstruct(
    (Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0> > *)&pObject[3].ImageLock.csBuf[32],
    &pObject[3].ImageLock.csBuf[32],
    v5);
  v6 = (Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *)(*(_QWORD *)&pObject[3].ImageLock.csBuf[32]
                                                                           + 120
                                                                           * (__int64)pObject[3].TextureMutex.__vftable
                                                                           - 120);
  if ( v6 )
    Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(v6, &__that);
  Scaleform::Mutex::Unlock((Scaleform::Mutex *)&pHandlers->HandlersLock.csBuf[32]);
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::~PendingTextureDestroyEntry(&__that);
  v7 = (Scaleform::RefCountVImpl *)this->RenderBufferID.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  v8 = (Scaleform::RefCountVImpl *)this->pMemoryManager.pObject;
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  v9 = (Scaleform::RefCountVImpl *)this->pManagerLocks.pObject;
  if ( v9 )
    Scaleform::RefCountImpl::Release(v9);
  v10 = this->GPUFence.pObject;
  if ( v10 )
    Scaleform::Render::Fence::Release(v10);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::~PendingTextureDestroyEntry(
        Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *this)
{
  __int64 v1; // rdi
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *v2; // rsi
  __int64 v3; // rbx
  Scaleform::RefCountVImpl *pObject; // rcx
  __int64 v6; // rbx
  Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> *pFramebuffer; // rsi
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> *pRenderBuffer; // rbx
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::RefCountVImpl *v11; // rcx

  v1 = 4i64;
  v2 = this + 1;
  v3 = 4i64;
  do
  {
    pObject = (Scaleform::RefCountVImpl *)v2[-1].pFramebuffer[3].pObject;
    v2 = (Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *)((char *)v2 - 8);
    --v3;
    if ( pObject )
      Scaleform::RefCountImpl::Release(pObject);
  }
  while ( v3 );
  v6 = 4i64;
  pFramebuffer = this->pFramebuffer;
  do
  {
    v8 = (Scaleform::RefCountVImpl *)pFramebuffer[-1].pObject;
    --pFramebuffer;
    --v6;
    if ( v8 )
      Scaleform::RefCountImpl::Release(v8);
  }
  while ( v6 );
  pRenderBuffer = this->pRenderBuffer;
  do
  {
    v10 = (Scaleform::RefCountVImpl *)pRenderBuffer[-1].pObject;
    --pRenderBuffer;
    --v1;
    if ( v10 )
      Scaleform::RefCountImpl::Release(v10);
  }
  while ( v1 );
  v11 = (Scaleform::RefCountVImpl *)this->pHAL.pObject;
  if ( v11 )
    Scaleform::RefCountImpl::Release(v11);
  if ( this->GPUFence.pObject )
    Scaleform::Render::Fence::Release(this->GPUFence.pObject);
}

void __fastcall Scaleform::Render::GL::Texture::~Texture(Scaleform::Render::GL::Texture *this)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rbx
  Scaleform::Render::Texture *pPrev; // rcx
  Scaleform::Render::Texture *pNext; // rax
  Scaleform::Render::GL::Texture::HWTextureDesc *pTextures; // rdx
  Scaleform::RefCountVImpl *v6; // rcx
  Scaleform::Render::RawImage *v7; // rcx
  Scaleform::RefCountVImpl *v8; // rcx
  Scaleform::Render::Fence *v9; // rcx

  pObject = this->pManagerLocks.pObject;
  this->__vftable = (Scaleform::Render::GL::Texture_vtbl *)&Scaleform::Render::GL::Texture::`vftable';
  Scaleform::Mutex::DoLock(&pObject->TextureMutex);
  pPrev = this->pPrev;
  if ( pPrev != (Scaleform::Render::Texture *)-1i64 )
  {
    pNext = this->pNext;
    if ( pNext != (Scaleform::Render::Texture *)-1i64 )
    {
      pPrev->pNext = pNext;
      this->pNext->Scaleform::Render::Texture::pPrev = this->pPrev;
      this->pPrev = (Scaleform::Render::Texture *)-1i64;
      this->pNext = (Scaleform::Render::Texture *)-1i64;
    }
  }
  if ( (unsigned int)(this->State - 2) <= 1 )
    Scaleform::Render::GL::Texture::ReleaseHWTextures(this, 1);
  pTextures = this->pTextures;
  if ( pTextures != &this->Texture0 && pTextures )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  Scaleform::Mutex::Unlock(&pObject->TextureMutex);
  v6 = (Scaleform::RefCountVImpl *)this->Texture0.TexId.pObject;
  if ( v6 )
    Scaleform::RefCountImpl::Release(v6);
  v7 = this->pBackingImage.pObject;
  if ( v7 )
    v7->Release(v7);
  this->__vftable = (Scaleform::Render::GL::Texture_vtbl *)&Scaleform::Render::Texture::`vftable';
  v8 = (Scaleform::RefCountVImpl *)this->pManagerLocks.pObject;
  if ( v8 )
    Scaleform::RefCountImpl::Release(v8);
  v9 = this->GPUFence.pObject;
  if ( v9 )
    Scaleform::Render::Fence::Release(v9);
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::GL::TextureManager::~TextureManager(Scaleform::Render::GL::TextureManager *this)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rbx
  unsigned __int64 *p_Size; // rbp
  unsigned __int64 Size; // rdi
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *i; // rbx
  Scaleform::Render::Palette *v6; // rbx

  pObject = this->pLocks.pObject;
  this->Scaleform::Render::TextureManager::Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::GL::TextureManager_vtbl *)&Scaleform::Render::GL::TextureManager::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>'};
  this->Scaleform::Render::TextureManager::Scaleform::Render::ImageUpdateSync::__vftable = (Scaleform::Render::ImageUpdateSync_vtbl *)&Scaleform::Render::GL::TextureManager::`vftable'{for `Scaleform::Render::ImageUpdateSync'};
  Scaleform::Mutex::DoLock(&pObject->TextureMutex);
  Scaleform::Render::GL::TextureManager::processTextureKillList(this);
  p_Size = &this->TextureFormats.Data.Size;
  if ( this == (Scaleform::Render::GL::TextureManager *)-144i64 )
    p_Size = 0i64;
  while ( (unsigned __int64 *)this->Textures.Root.pNext != p_Size )
    this->Textures.Root.pNext->LoseManager(this->Textures.Root.pNext);
  this->pLocks.pObject->pManager = 0i64;
  Scaleform::Mutex::Unlock(&pObject->TextureMutex);
  Scaleform::Render::FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry>::ProcessDestructionList(
    &this->TextureResourceDestroyList,
    1);
  Size = this->TextureResourceDestroyList.PendingFreeList.Data.Size;
  for ( i = &this->TextureResourceDestroyList.PendingFreeList.Data.Data[Size - 1]; Size; --Size )
    Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::~PendingTextureDestroyEntry(i--);
  Scaleform::Memory::pGlobalHeap->Free(
    Scaleform::Memory::pGlobalHeap,
    this->TextureResourceDestroyList.PendingFreeList.Data.Data);
  this->MappedTexture0.__vftable = (Scaleform::Render::GL::MappedTexture_vtbl *)&Scaleform::Render::MappedTextureBase::`vftable';
  Scaleform::Render::ImageData::freePlanes(&this->MappedTexture0.Data);
  v6 = this->MappedTexture0.Data.pPalette.pObject;
  if ( v6
    && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                       &this->MappedTexture0.Data.pPalette.pObject->RefCount.Value,
                       -1) == 1 )
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v6);
  }
  Scaleform::Render::TextureManager::~TextureManager(this);
}

void __fastcall Scaleform::Render::GL::Texture::ApplyTexture(
        Scaleform::Render::GL::Texture *this,
        __int64 stage,
        const Scaleform::Render::ImageFillMode *fillMode)
{
  int v4; // ebp
  unsigned __int8 Fill; // cl
  unsigned int v7; // er15
  unsigned int v8; // er14
  unsigned int v9; // er13
  char v10; // cl
  Scaleform::Render::TextureManager *pManager; // r12
  unsigned __int16 v12; // di
  Scaleform::Render::TextureManager_vtbl *v13; // rsi
  Scaleform::Render::ImageFormat v14; // eax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v15; // rax
  char v16; // cl
  int v17; // esi
  Scaleform::Render::GL::HALGLTexture *pObject; // rdi
  __int64 v19; // rax
  __int64 v20; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v21; // rcx
  __int64 v22; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v23; // rcx
  __int64 v24; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v25; // rcx
  __int64 v26; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v27; // rcx
  __int64 v28; // rax

  v4 = stage;
  Scaleform::Render::Texture::ApplyTexture(this, stage, fillMode);
  Fill = fillMode->Fill;
  if ( (fillMode->Fill & 2) != 0 )
  {
    v7 = 9729;
    if ( this->MipLevels > 1u )
      v7 = 9987;
  }
  else
  {
    v7 = 9728;
  }
  v8 = 10497;
  v9 = (Fill >> 1) & 1 | 0x2600;
  v10 = Fill & 1;
  if ( v10 )
    v8 = 33071;
  pManager = this->pManagerLocks.pObject->pManager;
  if ( !v10
    && (((this->ImgSize.Width - 1) & this->ImgSize.Width) != 0
     || ((this->ImgSize.Height - 1) & this->ImgSize.Height) != 0) )
  {
    v12 = this->Use | 1;
    v13 = pManager->Scaleform::RefCountBase<Scaleform::Render::TextureManager,72>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,72>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
    v14 = this->GetImageFormat(this);
    if ( !v13->IsNonPow2Supported(pManager, v14, v12) )
    {
      v15 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
      if ( v15 )
      {
        if ( ((__int64)v15[5].Execute & 0x10) != 0 )
        {
          v16 = warned_11;
          v8 = 33071;
          if ( !warned_11 )
            v16 = 1;
          warned_11 = v16;
        }
      }
    }
  }
  if ( this->TextureCount )
  {
    v17 = -v4;
    do
    {
      pObject = this->pTextures[v17 + v4].TexId.pObject;
      v19 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))pManager[2].ServiceCommandInstance.~RefCountImplCore
             + 110))(pManager[2].ServiceCommandInstance.__vftable);
      (*(void (__fastcall **)(__int64, _QWORD))(*(_QWORD *)v19 + 48i64))(v19, (unsigned int)(v4 + 33984));
      v20 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))pManager[2].ServiceCommandInstance.~RefCountImplCore
             + 110))(pManager[2].ServiceCommandInstance.__vftable);
      (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::GL::HALGLTexture *))(*(_QWORD *)v20 + 112i64))(
        v20,
        3553i64,
        pObject);
      if ( this->LastMinFilter[v4] != v7 || this->LastAddress[v4] != v8 )
      {
        v21 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v22 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v21->~RefCountImplCore
               + 110))(v21);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v22 + 880i64))(
          v22,
          3553i64,
          10240i64,
          v9);
        v23 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v24 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v23->~RefCountImplCore
               + 110))(v23);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v24 + 880i64))(
          v24,
          3553i64,
          10241i64,
          v7);
        v25 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v26 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v25->~RefCountImplCore
               + 110))(v25);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v26 + 880i64))(
          v26,
          3553i64,
          10242i64,
          v8);
        v27 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v28 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v27->~RefCountImplCore
               + 110))(v27);
        (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v28 + 880i64))(
          v28,
          3553i64,
          10243i64,
          v8);
        this->LastMinFilter[v4] = v7;
        this->LastAddress[v4] = v8;
      }
      ++v4;
    }
    while ( v17 + v4 < (unsigned int)this->TextureCount );
  }
}

void __fastcall Scaleform::Render::GL::TextureManager::BeginFrame(Scaleform::Render::GL::TextureManager *this)
{
  Scaleform::Render::TextureManager::BeginFrame(this);
  *(_QWORD *)this->CurrentTextures = -1i64;
  *(_QWORD *)&this->CurrentTextures[2] = -1i64;
}

Scaleform::Render::DepthStencilSurface *__fastcall Scaleform::Render::GL::TextureManager::CreateDepthStencilSurface(
        Scaleform::Render::GL::TextureManager *this,
        const Scaleform::Render::Size<unsigned long> *size,
        Scaleform::Render::MemoryManager *manager)
{
  Scaleform::Render::GL::DepthStencilSurface *v5; // rax
  int v7; // [rsp+48h] [rbp+20h] BYREF

  v7 = 72;
  v5 = (Scaleform::Render::GL::DepthStencilSurface *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       this,
                                                       80i64,
                                                       &v7);
  if ( v5 )
    Scaleform::Render::GL::DepthStencilSurface::DepthStencilSurface(v5, this->pLocks.pObject, size);
  return Scaleform::Render::TextureManager::postCreateDepthStencilSurface(this, v5);
}

Scaleform::Render::DepthStencilSurface *__fastcall Scaleform::Render::GL::TextureManager::CreateDepthStencilSurface(
        Scaleform::Render::GL::TextureManager *this,
        Scaleform::Render::GL::HALGLRenderbuffer *id)
{
  Scaleform::Render::GL::GraphicsDevice *v4; // rax
  Scaleform::Render::DepthStencilSurface *result; // rax
  Scaleform::Render::GL::GraphicsDevice *v6; // rax
  Scaleform::Render::GL::GraphicsDevice *v7; // rax
  Scaleform::Render::GL::GraphicsDevice *v8; // rax
  Scaleform::Render::GL::DepthStencilSurface *v9; // rax
  Scaleform::Render::TextureManagerLocks *pObject; // rdx
  __int64 v11; // rax
  __int64 v12; // rbx
  Scaleform::RefCountVImpl *v13; // rcx
  Scaleform::Render::Size<unsigned long> size; // [rsp+20h] [rbp-18h] BYREF
  int v15; // [rsp+40h] [rbp+8h] BYREF
  unsigned int v16; // [rsp+50h] [rbp+18h] BYREF
  unsigned int v17; // [rsp+58h] [rbp+20h] BYREF

  v4 = this->pHal->GetGraphicsDevice(this->pHal);
  if ( !v4->glIsRenderbuffer(v4, id) )
    return 0i64;
  v6 = this->pHal->GetGraphicsDevice(this->pHal);
  v6->glBindRenderbuffer(v6, 36161u, id);
  v7 = this->pHal->GetGraphicsDevice(this->pHal);
  v7->glGetRenderbufferParameteriv(v7, 36161u, 36162u, (int *)&v16);
  v8 = this->pHal->GetGraphicsDevice(this->pHal);
  v8->glGetRenderbufferParameteriv(v8, 36161u, 36162u, (int *)&v17);
  v15 = 72;
  v9 = (Scaleform::Render::GL::DepthStencilSurface *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                       Scaleform::Memory::pGlobalHeap,
                                                       this,
                                                       80i64,
                                                       &v15);
  if ( v9 )
  {
    pObject = this->pLocks.pObject;
    size.Width = v16;
    size.Height = v17;
    Scaleform::Render::GL::DepthStencilSurface::DepthStencilSurface(v9, pObject, &size);
    v12 = v11;
  }
  else
  {
    v12 = 0i64;
  }
  if ( id )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)id);
  v13 = *(Scaleform::RefCountVImpl **)(v12 + 72);
  if ( v13 )
    Scaleform::RefCountImpl::Release(v13);
  *(_QWORD *)(v12 + 72) = id;
  result = (Scaleform::Render::DepthStencilSurface *)v12;
  *(_DWORD *)(v12 + 48) = 2;
  return result;
}

Scaleform::Render::Texture *__fastcall Scaleform::Render::GL::TextureManager::CreateTexture(
        Scaleform::Render::GL::TextureManager *this,
        unsigned int texID,
        bool deleteTexture,
        Scaleform::Render::Size<unsigned long> imgSize,
        Scaleform::Render::ImageBase *pimage)
{
  int MaximumTextureSize; // er10
  signed int v7; // er11
  bool v10; // cc
  Scaleform::Render::Texture *v11; // rdi
  Scaleform::MemoryHeap_vtbl *v12; // rax
  Scaleform::Render::GL::Texture *v13; // rax
  Scaleform::Render::Texture *v14; // rax
  int v16; // [rsp+50h] [rbp+8h] BYREF
  Scaleform::Render::Size<unsigned long> size; // [rsp+68h] [rbp+20h] BYREF

  MaximumTextureSize = this->MaximumTextureSize;
  v7 = MaximumTextureSize;
  if ( *(_DWORD *)(*(_QWORD *)&imgSize + 4i64) < MaximumTextureSize )
    v7 = *(_DWORD *)(*(_QWORD *)&imgSize + 4i64);
  v10 = *(_DWORD *)imgSize.Width < MaximumTextureSize;
  v16 = 72;
  if ( v10 )
    MaximumTextureSize = *(_DWORD *)imgSize.Width;
  v11 = 0i64;
  v12 = Scaleform::Memory::pGlobalHeap->__vftable;
  if ( MaximumTextureSize < 0 )
    MaximumTextureSize = 0;
  size.Width = MaximumTextureSize;
  if ( v7 < 0 )
    v7 = 0;
  size.Height = v7;
  v13 = (Scaleform::Render::GL::Texture *)v12->AllocAutoHeap(
                                            Scaleform::Memory::pGlobalHeap,
                                            this,
                                            160ui64,
                                            (const Scaleform::AllocInfo *)&v16);
  if ( v13 )
  {
    Scaleform::Render::GL::Texture::Texture(v13, this->pLocks.pObject, texID, deleteTexture, &size, pimage);
    v11 = v14;
  }
  return Scaleform::Render::TextureManager::postCreateTexture(this, v11, 0);
}

Scaleform::Render::Texture *__fastcall Scaleform::Render::GL::TextureManager::CreateTexture(
        Scaleform::Render::GL::TextureManager *this,
        Scaleform::Render::GL::HALGLTexture *texID,
        Scaleform::Render::Size<unsigned long> imgSize,
        Scaleform::Render::ImageBase *pimage)
{
  int MaximumTextureSize; // er10
  signed int v6; // er11
  bool v8; // cc
  Scaleform::Render::Texture *v10; // rdi
  Scaleform::MemoryHeap_vtbl *v11; // rax
  Scaleform::Render::GL::Texture *v12; // rax
  Scaleform::Render::Texture *v13; // rax
  int v15; // [rsp+50h] [rbp+8h] BYREF
  Scaleform::Render::Size<unsigned long> size; // [rsp+60h] [rbp+18h] BYREF

  MaximumTextureSize = this->MaximumTextureSize;
  v6 = MaximumTextureSize;
  if ( *(_DWORD *)(*(_QWORD *)&imgSize + 4i64) < MaximumTextureSize )
    v6 = *(_DWORD *)(*(_QWORD *)&imgSize + 4i64);
  v8 = *(_DWORD *)imgSize.Width < MaximumTextureSize;
  v15 = 72;
  if ( v8 )
    MaximumTextureSize = *(_DWORD *)imgSize.Width;
  v10 = 0i64;
  v11 = Scaleform::Memory::pGlobalHeap->__vftable;
  if ( MaximumTextureSize < 0 )
    MaximumTextureSize = 0;
  size.Width = MaximumTextureSize;
  if ( v6 < 0 )
    v6 = 0;
  size.Height = v6;
  v12 = (Scaleform::Render::GL::Texture *)v11->AllocAutoHeap(
                                            Scaleform::Memory::pGlobalHeap,
                                            this,
                                            160ui64,
                                            (const Scaleform::AllocInfo *)&v15);
  if ( v12 )
  {
    Scaleform::Render::GL::Texture::Texture(v12, this->pLocks.pObject, texID, &size, pimage);
    v10 = v13;
  }
  return Scaleform::Render::TextureManager::postCreateTexture(this, v10, 0);
}

const Scaleform::Render::GL::TextureFormat *__fastcall Scaleform::Render::GL::TextureManager::CreateTexture(
        Scaleform::Render::GL::TextureManager *this,
        Scaleform::Render::ImageFormat format,
        unsigned int mipLevels,
        const Scaleform::Render::Size<unsigned long> *size,
        unsigned int use,
        Scaleform::Render::ImageBase *pimage)
{
  const Scaleform::Render::GL::TextureFormat *result; // rax
  const Scaleform::Render::GL::TextureFormat *v10; // r14
  int MaximumTextureSize; // ecx
  bool v12; // cc
  int Height; // edx
  Scaleform::Render::Texture *v14; // rsi
  Scaleform::Render::GL::Texture *v15; // rax
  Scaleform::Render::Texture *v16; // rax
  int v17; // [rsp+40h] [rbp-28h] BYREF
  Scaleform::Render::Size<unsigned long> v18; // [rsp+48h] [rbp-20h] BYREF

  result = (const Scaleform::Render::GL::TextureFormat *)Scaleform::Render::TextureManager::precreateTexture(
                                                           this,
                                                           format,
                                                           use,
                                                           pimage);
  v10 = result;
  if ( result )
  {
    MaximumTextureSize = this->MaximumTextureSize;
    v12 = (signed int)size->Height < MaximumTextureSize;
    Height = MaximumTextureSize;
    v17 = 72;
    if ( v12 )
      Height = size->Height;
    if ( (signed int)size->Width < MaximumTextureSize )
      MaximumTextureSize = size->Width;
    v14 = 0i64;
    if ( MaximumTextureSize < 0 )
      MaximumTextureSize = 0;
    v18.Width = MaximumTextureSize;
    if ( Height < 0 )
      Height = 0;
    v18.Height = Height;
    v15 = (Scaleform::Render::GL::Texture *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                              Scaleform::Memory::pGlobalHeap,
                                              this,
                                              160i64,
                                              &v17);
    if ( v15 )
    {
      Scaleform::Render::GL::Texture::Texture(v15, this->pLocks.pObject, v10, mipLevels, &v18, use, pimage);
      v14 = v16;
    }
    return (const Scaleform::Render::GL::TextureFormat *)Scaleform::Render::TextureManager::postCreateTexture(
                                                           this,
                                                           v14,
                                                           use);
  }
  return result;
}

bool __fastcall Scaleform::Render::GL::DepthStencilSurface::CurrentFormatHasDepth()
{
  unsigned int Format; // edx

  Format = Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex].Format;
  return Format - 34041 <= 1 || Format == 35056;
}

void __fastcall Scaleform::Render::GL::TextureManager::DestroyFBO(
        Scaleform::Render::GL::TextureManager *this,
        Scaleform::Render::GL::HALGLFramebuffer *fboid)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rbx
  Scaleform::Render::GL::HAL *pHal; // rdi
  unsigned __int64 v5; // r8
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *v6; // rcx
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry __that; // [rsp+20h] [rbp-98h] BYREF

  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(&__that, fboid);
  pObject = this->pLocks.pObject;
  Scaleform::Mutex::DoLock(&pObject->TextureMutex);
  pHal = this->pHal;
  if ( pHal )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)this->pHal);
  if ( __that.pHAL.pObject )
    Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)__that.pHAL.pObject);
  v5 = this->TextureResourceDestroyList.PendingFreeList.Data.Size + 1;
  __that.pHAL.pObject = pHal;
  Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::ResizeNoConstruct(
    &this->TextureResourceDestroyList.PendingFreeList.Data,
    &this->TextureResourceDestroyList,
    v5);
  v6 = &this->TextureResourceDestroyList.PendingFreeList.Data.Data[this->TextureResourceDestroyList.PendingFreeList.Data.Size
                                                                 - 1];
  if ( v6 )
    Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(v6, &__that);
  Scaleform::Mutex::Unlock(&pObject->TextureMutex);
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::~PendingTextureDestroyEntry(&__that);
}

void __fastcall Scaleform::Render::GL::Texture::DisposeTextureData(Scaleform::Render::GL::Texture *this)
{
  Scaleform::Render::RawImage *pObject; // rcx

  Scaleform::Render::Texture::DisposeTextureData(this);
  pObject = this->pBackingImage.pObject;
  if ( pObject )
    pObject->Release(pObject);
  this->pBackingImage.pObject = 0i64;
}

void __fastcall Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::FreeResource(
        Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *this)
{
  Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *pTexture; // rdx
  unsigned int StageCount; // eax
  __int64 v4; // rax
  Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> *pRenderBuffer; // rdx
  unsigned int v6; // eax
  __int64 v7; // rax
  Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> *pFramebuffer; // rdx
  unsigned int v9; // eax
  __int64 v10; // rax
  char v11[32]; // [rsp+20h] [rbp-38h] BYREF

  pTexture = this->pTexture;
  if ( this->pTexture[0].pObject )
  {
    StageCount = this->StageCount;
    if ( StageCount )
      memmove(v11, pTexture, 8i64 * StageCount);
    v4 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *))this->pHAL.pObject->GetGraphicsDevice)(
           this->pHAL.pObject,
           pTexture);
    (*(void (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v4 + 320i64))(v4, this->StageCount, v11);
  }
  pRenderBuffer = this->pRenderBuffer;
  if ( this->pRenderBuffer[0].pObject )
  {
    v6 = this->StageCount;
    if ( v6 )
      memmove(v11, pRenderBuffer, 8i64 * v6);
    v7 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> *))this->pHAL.pObject->GetGraphicsDevice)(
           this->pHAL.pObject,
           pRenderBuffer);
    (*(void (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v7 + 296i64))(v7, this->StageCount, v11);
  }
  pFramebuffer = this->pFramebuffer;
  if ( this->pFramebuffer[0].pObject )
  {
    v9 = this->StageCount;
    if ( v9 )
      memmove(v11, pFramebuffer, 8i64 * v9);
    v10 = ((__int64 (__fastcall *)(Scaleform::Render::GL::HAL *, Scaleform::Ptr<Scaleform::Render::GL::HALGLFramebuffer> *))this->pHAL.pObject->GetGraphicsDevice)(
            this->pHAL.pObject,
            pFramebuffer);
    (*(void (__fastcall **)(__int64, _QWORD, char *))(*(_QWORD *)v10 + 272i64))(v10, this->StageCount, v11);
  }
}

void __fastcall AgProgram::run(AgProgram *this)
{
  this->onExecuteImpl(this);
}

Concurrency::details::ScheduleGroupSegmentBase *__fastcall Scaleform::SwitchFormatter::GetSize(
        Concurrency::details::ContextBase *this)
{
  return this->m_pSegment;
}

__int64 __fastcall Scaleform::Render::Texture::GetImageFormat(Scaleform::Render::Texture *this)
{
  const Scaleform::Render::TextureFormat *pFormat; // rcx

  pFormat = this->pFormat;
  if ( pFormat )
    return ((__int64 (__fastcall *)(const Scaleform::Render::TextureFormat *))pFormat->GetImageFormat)(pFormat);
  else
    return 0i64;
}

__int64 __fastcall Scaleform::Render::GL::TextureFormat::GetImageFormat(Scaleform::Render::GL::TextureFormat *this)
{
  return this->pMapping->Format;
}

__int64 __fastcall Scaleform::Render::Texture::GetMipmapCount(Scaleform::Render::Texture *this)
{
  __int64 result; // rax

  result = 1i64;
  if ( (this->Use & 2) == 0 )
    return this->MipLevels;
  return result;
}

void (__fastcall *__fastcall Scaleform::Render::GL::TextureFormat::GetScanlineCopyFn(
        Scaleform::Render::GL::TextureFormat *this))(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *)
{
  return this->pMapping->CopyFunc;
}

void (__fastcall *__fastcall Scaleform::Render::GL::TextureFormat::GetScanlineUncopyFn(
        Scaleform::Render::GL::TextureFormat *this))(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *)
{
  return this->pMapping->UncopyFunc;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::DepthStencilSurface::GetSize(
        Scaleform::Render::DepthStencilSurface *this,
        Scaleform::Render::Size<unsigned long> *result)
{
  *result = this->Size;
  return result;
}

const Scaleform::Render::TextureFormat *__fastcall Scaleform::Render::GL::Texture::GetTextureFormatMapping(
        Scaleform::Render::GL::Texture *this)
{
  const Scaleform::Render::TextureFormat *result; // rax

  result = this->pFormat;
  if ( result )
    return (const Scaleform::Render::TextureFormat *)result[1].__vftable;
  return result;
}

__int64 __fastcall Scaleform::Render::GL::TextureManager::GetTextureFormatSupport(
        Scaleform::Render::GL::TextureManager *this)
{
  unsigned int v1; // ebx
  unsigned int v3; // edi
  __int64 v4; // rdx
  Scaleform::Render::TextureFormat *v5; // rcx
  Scaleform::Render::ImageFormat v6; // eax

  v1 = 0;
  v3 = 0;
  if ( this->TextureFormats.Data.Size )
  {
    v4 = 0i64;
    do
    {
      v5 = this->TextureFormats.Data.Data[v4];
      v6 = v5->GetImageFormat(v5);
      switch ( v6 )
      {
        case Image_DXT5:
          v1 |= 1u;
          break;
        case Image_PVRTC_RGBA_4BPP:
          v1 |= 8u;
          break;
        case Image_ETC1_RGB_4BPP:
          v1 |= 0x20u;
          break;
        case Image_ATCICA:
          v1 |= 0x10u;
          break;
        case Image_ETC1A_RGBA_4BPP:
          v1 |= 0x40u;
          break;
      }
      v4 = ++v3;
    }
    while ( v3 < this->TextureFormats.Data.Size );
  }
  return v1;
}

Scaleform::Render::ImageUpdateSync_vtbl *__fastcall Scaleform::Render::DepthStencilSurface::GetTextureManager(
        Scaleform::Render::DepthStencilSurface *this)
{
  Scaleform::Render::ImageUpdateSync_vtbl *result; // rax

  result = (Scaleform::Render::ImageUpdateSync_vtbl *)this->pManagerLocks.pObject;
  if ( result )
    return (Scaleform::Render::ImageUpdateSync_vtbl *)result->UpdateImage;
  return result;
}

Scaleform::Render::Size<unsigned long> *__fastcall Scaleform::Render::GL::Texture::GetTextureSize(
        Scaleform::Render::GL::Texture *this,
        Scaleform::Render::Size<unsigned long> *result,
        unsigned int plane)
{
  *result = this->pTextures[plane].Size;
  return result;
}

const Scaleform::Render::TextureFormat *__fastcall Scaleform::Render::GL::TextureManager::GetTextureUseCaps(
        Scaleform::Render::GL::TextureManager *this,
        Scaleform::Render::ImageFormat format)
{
  unsigned int v3; // ebx
  const Scaleform::Render::TextureFormat *result; // rax

  v3 = 272;
  if ( (format & 0xFFFu) - 50 > 0x31 )
    v3 = 306;
  result = (const Scaleform::Render::TextureFormat *)((__int64 (__fastcall *)(Scaleform::Render::GL::TextureManager *))this->getTextureFormat)(this);
  if ( result )
  {
    if ( this->isScanlineCompatible(this, result) )
      v3 |= 0x80u;
    return (const Scaleform::Render::TextureFormat *)v3;
  }
  return result;
}

void __fastcall Scaleform::Render::Texture::ImageLost(Scaleform::Render::Texture *this)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rbx

  pObject = this->pManagerLocks.pObject;
  Scaleform::Lock::DoLock(&pObject->ImageLock);
  this->pImage = 0i64;
  Scaleform::Lock::Unlock(&pObject->ImageLock);
}

bool __fastcall Scaleform::Render::GL::DepthStencilSurface::Initialize(
        Scaleform::Render::GL::DepthStencilSurface *this)
{
  __int64 v2; // rax
  Scaleform::Render::GL::HALGLRenderbuffer *v3; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v5; // rcx
  __int64 v6; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v7; // rcx
  __int64 v8; // rax
  int v9; // eax
  __int64 SFGLExtension; // rdx
  int v11; // eax
  __int64 v12; // rcx
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v13; // rcx
  __int64 v14; // rax
  bool result; // al

  v2 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
         Scaleform::Memory::pGlobalHeap,
         32i64);
  v3 = (Scaleform::Render::GL::HALGLRenderbuffer *)v2;
  if ( v2 )
  {
    *(_QWORD *)v2 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v2 = &Scaleform::Render::GL::HALGLRenderbuffer::`vftable';
    *(_DWORD *)(v2 + 8) = 1;
    *(_QWORD *)(v2 + 16) = 0i64;
    *(_DWORD *)(v2 + 24) = 0;
  }
  else
  {
    v3 = 0i64;
  }
  pObject = (Scaleform::RefCountVImpl *)this->RenderBufferID.pObject;
  if ( pObject )
    Scaleform::RefCountImpl::Release(pObject);
  this->RenderBufferID.pObject = v3;
  v5 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v6 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v5->~RefCountImplCore + 110))(v5);
  (*(void (__fastcall **)(__int64, __int64, Scaleform::Ptr<Scaleform::Render::GL::HALGLRenderbuffer> *))(*(_QWORD *)v6 + 472i64))(
    v6,
    1i64,
    &this->RenderBufferID);
  v7 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v8 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v7->~RefCountImplCore + 110))(v7);
  (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::GL::HALGLRenderbuffer *))(*(_QWORD *)v8 + 104i64))(
    v8,
    36161i64,
    this->RenderBufferID.pObject);
  v9 = Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex;
  if ( Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex < 0 )
    v9 = 0;
  Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex = v9;
  SFGLExtension = Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[v9].SFGLExtension;
  if ( (_DWORD)SFGLExtension )
  {
    while ( !Scaleform::Render::GL::HAL::CheckExtension(
               (Scaleform::Render::GL::HAL *)this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable,
               SFGLExtension)
         && !Scaleform::Render::GL::HAL::CheckGLVersion(
               (Scaleform::Render::GL::HAL *)this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable,
               Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex].GLMajorVersion,
               Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex].GLMinorVersion) )
    {
      v11 = Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex;
      if ( Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex >= 0
        && !Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex].Format
        || (++Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex,
            v12 = v11 + 1,
            !Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[v12].Format) )
      {
        this->State = State_InitFailed;
        return 0;
      }
      SFGLExtension = Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[v12].SFGLExtension;
      if ( !(_DWORD)SFGLExtension )
        break;
    }
  }
  v13 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v14 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v13->~RefCountImplCore
         + 110))(v13);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int))(*(_QWORD *)v14 + 816i64))(
    v14,
    36161i64,
    Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex].Format,
    this->Size.Width,
    this->Size.Height);
  result = 1;
  this->State = State_Valid;
  return result;
}

char __fastcall Scaleform::Render::GL::Texture::Initialize(
        Scaleform::Render::GL::Texture *this,
        Scaleform::Render::GL::HALGLTexture *texID)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rax
  Scaleform::RefCountVImpl *v4; // rdi
  Scaleform::Render::TextureManager *pManager; // rsi
  Scaleform::Render::GL::HALGLTexture *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v8; // rcx
  __int64 v9; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v10; // rcx
  __int64 v11; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v12; // rcx
  __int64 v13; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v14; // rcx
  __int64 v15; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v16; // rcx
  __int64 v17; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v18; // rcx
  __int64 v19; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v20; // rcx
  __int64 v21; // rax
  int v22; // edx
  bool v23; // zf
  Scaleform::Render::GL::Texture::HWTextureDesc *pTextures; // rax
  unsigned int Height; // ecx
  Scaleform::Render::ImageBase *pImage; // rcx
  unsigned __int8 v27; // al
  Scaleform::Render::ImageFormat v28; // eax
  __int64 v29; // rdx
  Scaleform::Render::GL::TextureFormat::Mapping *v30; // rdi
  unsigned int BaseTextureFormatFromInternal; // eax
  unsigned int intfmt[14]; // [rsp+30h] [rbp-38h] BYREF
  int v34; // [rsp+70h] [rbp+8h] BYREF
  unsigned int v35; // [rsp+78h] [rbp+10h] BYREF
  unsigned int v36; // [rsp+80h] [rbp+18h] BYREF
  char v37; // [rsp+88h] [rbp+20h] BYREF

  pObject = this->pManagerLocks.pObject;
  this->pFormat = 0i64;
  v4 = (Scaleform::RefCountVImpl *)texID;
  pManager = pObject->pManager;
  v6 = this->pTextures->TexId.pObject;
  if ( v6 && v6 != texID )
  {
    LOBYTE(texID) = 1;
    this->ReleaseHWTextures(this, (bool)texID);
  }
  this->pTextures = &this->Texture0;
  if ( v4 )
    Scaleform::Render::RenderBuffer::AddRef(v4);
  v7 = (Scaleform::RefCountVImpl *)this->Texture0.TexId.pObject;
  if ( v7 )
    Scaleform::RefCountImpl::Release(v7);
  this->Texture0.TexId.pObject = (Scaleform::Render::GL::HALGLTexture *)v4;
  v8 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v9 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v8->~RefCountImplCore + 110))(v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48i64))(v9, 33988i64);
  v10 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v11 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v10->~RefCountImplCore
         + 110))(v10);
  (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::GL::HALGLTexture *))(*(_QWORD *)v11 + 112i64))(
    v11,
    3553i64,
    this->pTextures->TexId.pObject);
  v12 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v13 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v12->~RefCountImplCore
         + 110))(v12);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, unsigned int *))(*(_QWORD *)v13 + 632i64))(
    v13,
    3553i64,
    0i64,
    4096i64,
    &v35);
  v14 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v15 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v14->~RefCountImplCore
         + 110))(v14);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, unsigned int *))(*(_QWORD *)v15 + 632i64))(
    v15,
    3553i64,
    0i64,
    4097i64,
    &v36);
  v16 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v17 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v16->~RefCountImplCore
         + 110))(v16);
  (*(void (__fastcall **)(__int64, __int64, __int64, char *))(*(_QWORD *)v17 + 640i64))(v17, 3553i64, 33084i64, &v37);
  v18 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v19 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v18->~RefCountImplCore
         + 110))(v18);
  (*(void (__fastcall **)(__int64, __int64, __int64, int *))(*(_QWORD *)v19 + 640i64))(v19, 3553i64, 33085i64, &v34);
  v20 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v21 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v20->~RefCountImplCore
         + 110))(v20);
  (*(void (__fastcall **)(__int64, __int64, _QWORD, __int64, unsigned int *))(*(_QWORD *)v21 + 632i64))(
    v21,
    3553i64,
    0i64,
    4099i64,
    intfmt);
  v22 = v34;
  v23 = v34 == 1000;
  this->Texture0.Size.Width = v35;
  if ( v23 )
    v22 = 1;
  this->Texture0.Size.Height = v36;
  v23 = this->ImgSize.Width == 0;
  v34 = v22;
  if ( v23 && !this->ImgSize.Height )
  {
    pTextures = this->pTextures;
    Height = pTextures->Size.Height;
    this->ImgSize.Width = pTextures->Size.Width;
    this->ImgSize.Height = Height;
  }
  pImage = this->pImage;
  v27 = v22 - v37;
  if ( (_BYTE)v22 == v37 )
    v27 = 1;
  this->pFormat = 0i64;
  this->MipLevels = v27;
  if ( pImage )
  {
    v28 = pImage->GetFormat(pImage);
    v29 = (unsigned int)v28;
    LODWORD(v29) = v28 & 0xFFEFFFFF;
    this->pFormat = pManager->getTextureFormat(pManager, (Scaleform::Render::ImageFormat)v29);
  }
  v30 = Scaleform::Render::GL::TextureFormatMapping;
  if ( Scaleform::Render::GL::TextureFormatMapping[0].Format )
  {
    BaseTextureFormatFromInternal = Scaleform::Render::GL::TextureManager::getBaseTextureFormatFromInternal(intfmt[0]);
    while ( v30->GLFormat != BaseTextureFormatFromInternal )
    {
      ++v30;
      if ( v30->Format == Image_None )
        goto LABEL_23;
    }
    this->pFormat = pManager->getTextureFormat(pManager, v30->Format);
  }
LABEL_23:
  if ( this->pFormat )
  {
    this->State = State_Valid;
    return Scaleform::Render::Texture::Initialize(this);
  }
  else
  {
    this->State = State_InitFailed;
    return 0;
  }
}

char __fastcall Scaleform::Render::GL::Texture::Initialize(Scaleform::Render::GL::Texture *this)
{
  char v2; // al
  char v3; // bp
  Scaleform::Render::ImageFormat v4; // eax
  __int64 Width; // rdx
  Scaleform::Render::ImageFormat v6; // er13
  Scaleform::Render::TextureManager *pManager; // r14
  unsigned int v8; // esi
  Scaleform::Render::GL::Texture::HWTextureDesc *v9; // rdi
  Scaleform::Render::Size<unsigned long> *FormatPlaneSize; // rax
  unsigned int Height; // ecx
  unsigned int v12; // ecx
  unsigned int MipLevels; // er15
  unsigned int v14; // edi
  Scaleform::Render::GL::Texture::HWTextureDesc *v15; // rax
  unsigned int v16; // ecx
  unsigned int v17; // eax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v18; // rcx
  __int64 v19; // rax
  unsigned int v20; // er12
  unsigned int v21; // ebp
  Scaleform::Render::GL::Texture::HWTextureDesc *v22; // rsi
  __int64 v23; // rax
  Scaleform::Render::GL::HALGLTexture *v24; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v26; // rcx
  __int64 v27; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v28; // rcx
  __int64 v29; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v30; // rcx
  __int64 v31; // rax
  unsigned int *TextureFormatMapping; // rbp
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v33; // rcx
  __int64 v34; // rax
  unsigned int v35; // edi
  unsigned int v36; // er14
  unsigned int i; // esi
  unsigned int v38; // eax
  unsigned int v39; // ecx
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v40; // rcx
  __int64 v41; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v42; // rcx
  __int64 v43; // rax
  Scaleform::Render::RawImage *v44; // rax
  Scaleform::Render::RawImage *v45; // rcx
  Scaleform::Render::RawImage *v46; // rdi
  _BOOL8 v47; // rdx
  Scaleform::Render::Size<unsigned long> result; // [rsp+50h] [rbp-78h] BYREF
  Scaleform::Render::Size<unsigned long> sz; // [rsp+58h] [rbp-70h] BYREF
  Scaleform::Render::Size<unsigned long> v50; // [rsp+68h] [rbp-60h] BYREF
  char v51; // [rsp+D0h] [rbp+8h]
  Scaleform::Render::ImageFormat v52; // [rsp+E0h] [rbp+18h]
  Scaleform::Render::Size<unsigned long> v53; // [rsp+E8h] [rbp+20h] BYREF

  if ( (this->TextureFlags & 4) != 0 )
    return Scaleform::Render::GL::Texture::Initialize(this, this->pTextures->TexId.pObject);
  v3 = 0;
  v4 = ((unsigned int (*)(void))this->GetImageFormat)();
  Width = 0i64;
  v6 = v4;
  v52 = v4;
  pManager = this->pManagerLocks.pObject->pManager;
  if ( this->State != State_Lost )
  {
    v8 = 0;
    if ( this->TextureCount )
    {
      do
      {
        v9 = &this->pTextures[v8];
        FormatPlaneSize = Scaleform::Render::ImageData::GetFormatPlaneSize(&result, v6, &this->ImgSize, v8);
        Height = FormatPlaneSize->Height;
        LODWORD(FormatPlaneSize) = FormatPlaneSize->Width;
        v9->Size.Height = Height;
        v9->Size.Width = (unsigned int)FormatPlaneSize;
        if ( !pManager->IsNonPow2Supported(pManager, v6, this->Use) )
        {
          sz = v9->Size;
          Scaleform::Render::ImageSize_RoundUpPow2(&v53, (Scaleform::Render::Size<unsigned long>)&sz);
          Width = 32i64;
          v12 = 32;
          if ( v53.Width > 0x20 )
            Width = v53.Width;
          v53.Width = Width;
          if ( v53.Height > 0x20 )
            v12 = v53.Height;
          v53.Height = v12;
          if ( (_DWORD)Width != v9->Size.Width || v12 != v9->Size.Height )
          {
            v9->Size.Width = Width;
            v3 = 1;
            v9->Size.Height = v12;
          }
        }
        ++v8;
      }
      while ( v8 < this->TextureCount );
      if ( v3 )
      {
        if ( (v6 & 0xFFFu) - 50 <= 0x31 )
        {
          if ( this->State != State_Lost )
            this->State = State_InitFailed;
          return 0;
        }
        this->TextureFlags |= 1u;
      }
    }
  }
  MipLevels = this->MipLevels;
  v51 = 0;
  if ( (this->Use & 2) != 0 )
  {
    if ( (((__int64 (__fastcall *)(Scaleform::Render::TextureManager *, _QWORD))pManager->GetTextureUseCaps)(
            pManager,
            (unsigned int)v6) & 2) != 0 )
    {
      v51 = 1;
      MipLevels = 1;
    }
    else
    {
      this->TextureFlags |= 2u;
      v14 = 0;
      for ( MipLevels = 31; v14 < this->TextureCount; MipLevels = v17 )
      {
        v15 = &this->pTextures[v14];
        v16 = v15->Size.Height;
        LODWORD(v15) = v15->Size.Width;
        v50.Height = v16;
        v50.Width = (unsigned int)v15;
        v17 = Scaleform::Render::ImageSize_MipLevelCount((Scaleform::Render::Size<unsigned long>)&v50);
        if ( MipLevels < v17 )
          v17 = MipLevels;
        ++v14;
      }
      this->MipLevels = MipLevels;
    }
  }
  v18 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v19 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *, __int64))v18->~RefCountImplCore
         + 110))(
          v18,
          Width);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v19 + 48i64))(v19, 33988i64);
  v20 = 0;
  if ( this->TextureCount )
  {
    v21 = (v6 & 0xFFF) - 50;
    do
    {
      v22 = &this->pTextures[v20];
      v23 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
              Scaleform::Memory::pGlobalHeap,
              24i64);
      v24 = (Scaleform::Render::GL::HALGLTexture *)v23;
      if ( v23 )
      {
        *(_QWORD *)v23 = &Scaleform::RefCountImplCore::`vftable';
        *(_DWORD *)(v23 + 8) = 1;
        *(_QWORD *)v23 = &Scaleform::Render::GL::HALGLTexture::`vftable';
        *(_DWORD *)(v23 + 16) = 0;
      }
      else
      {
        v24 = 0i64;
      }
      pObject = (Scaleform::RefCountVImpl *)v22->TexId.pObject;
      if ( pObject )
        Scaleform::RefCountImpl::Release(pObject);
      v22->TexId.pObject = v24;
      v26 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
      v27 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v26->~RefCountImplCore
             + 110))(v26);
      (*(void (__fastcall **)(__int64, __int64, Scaleform::Ptr<Scaleform::Render::GL::HALGLTexture> *))(*(_QWORD *)v27 + 480i64))(
        v27,
        1i64,
        &v22->TexId);
      v28 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
      v29 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v28->~RefCountImplCore
             + 110))(v28);
      (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::GL::HALGLTexture *))(*(_QWORD *)v29 + 112i64))(
        v29,
        3553i64,
        v22->TexId.pObject);
      v30 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
      v31 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v30->~RefCountImplCore
             + 110))(v30);
      (*(void (__fastcall **)(__int64, __int64, __int64, _QWORD))(*(_QWORD *)v31 + 880i64))(
        v31,
        3553i64,
        33085i64,
        (unsigned int)this->MipLevels - 1);
      if ( v21 > 0x31 )
      {
        TextureFormatMapping = (unsigned int *)Scaleform::Render::GL::Texture::GetTextureFormatMapping(this);
        v33 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v34 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v33->~RefCountImplCore
               + 110))(v33);
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, unsigned int, _DWORD, unsigned int, unsigned int, _QWORD))(*(_QWORD *)v34 + 872i64))(
          v34,
          3553i64,
          0i64,
          TextureFormatMapping[2],
          v22->Size.Width,
          v22->Size.Height,
          0,
          TextureFormatMapping[3],
          TextureFormatMapping[4],
          0i64);
        v35 = v22->Size.Width;
        v36 = 1;
        for ( i = v22->Size.Height; v36 < MipLevels; ++v36 )
        {
          v38 = v35 >> 1;
          v39 = i >> 1;
          v35 = 1;
          i = 1;
          if ( v38 )
            v35 = v38;
          if ( v39 )
            i = v39;
          v40 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
          v41 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v40->~RefCountImplCore
                 + 110))(v40);
          (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, unsigned int, _DWORD, unsigned int, unsigned int, _QWORD))(*(_QWORD *)v41 + 872i64))(
            v41,
            3553i64,
            v36,
            TextureFormatMapping[2],
            v35,
            i,
            0,
            TextureFormatMapping[3],
            TextureFormatMapping[4],
            0i64);
        }
        v21 = (v6 & 0xFFF) - 50;
      }
      ++v20;
    }
    while ( v20 < this->TextureCount );
    v6 = v52;
  }
  if ( v51 )
  {
    v42 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
    v43 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v42->~RefCountImplCore
           + 110))(v42);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v43 + 496i64))(v43, 3553i64);
  }
  if ( this->State == State_Lost && this->pBackingImage.pObject )
  {
    this->UpdateRenderTargetData(this, 0i64, 0i64);
  }
  else
  {
    if ( (this->Use & 0xC0) != 0 )
    {
      v44 = Scaleform::Render::RawImage::Create(v6, this->MipLevels, &this->pTextures->Size, 0, 0i64, 0i64);
      v45 = this->pBackingImage.pObject;
      v46 = v44;
      if ( v45 )
        v45->Release(v45);
      this->pBackingImage.pObject = v46;
    }
    if ( this->pImage && !(unsigned __int8)Scaleform::Render::Texture::Update(this) )
    {
      LOBYTE(v47) = 1;
      this->ReleaseHWTextures(this, v47);
      v2 = 0;
      this->State = State_InitFailed;
      return v2;
    }
  }
  this->State = State_Valid;
  return Scaleform::Render::Texture::Initialize(this);
}

void __fastcall Scaleform::Render::GL::TextureManager::Initialize(
        Scaleform::Render::GL::TextureManager *this,
        Scaleform::Render::GL::HAL *phal)
{
  Scaleform::Render::GL::GraphicsDevice *v4; // rax

  this->RenderThreadId = Concurrency::details::platform::GetCurrentThreadId();
  this->pHal = phal;
  this->Caps = 7;
  if ( Scaleform::Render::GL::HAL::CheckExtension(phal, 55i64) )
    this->Caps |= 0x10u;
  v4 = this->pHal->GetGraphicsDevice(this->pHal);
  v4->glGetIntegerv(v4, 3379u, &this->MaximumTextureSize);
  Scaleform::Render::GL::TextureManager::initTextureFormats(this);
}

bool __fastcall Scaleform::Render::GL::TextureManager::IsDrawableImageFormat(
        Scaleform::Render::GL::TextureManager *this,
        Scaleform::Render::ImageFormat format)
{
  return (unsigned int)(format - 1) <= 1;
}

bool __fastcall Scaleform::Render::GL::TextureManager::IsNonPow2Supported(
        Scaleform::Render::GL::TextureManager *this,
        Scaleform::Render::ImageFormat __formal,
        unsigned __int16 use)
{
  int v3; // eax
  int v4; // edx

  v3 = 3;
  if ( (use & 3) == 0 )
    v3 = 1;
  v4 = v3 | 4;
  if ( (use & 0x400) == 0 )
    v4 = v3;
  return (v4 & this->Caps) == v4;
}

bool __fastcall Scaleform::Render::GL::Texture::IsValid(Scaleform::Render::GL::Texture *this)
{
  return this->pTextures != 0i64;
}

void __fastcall Scaleform::Render::GL::Texture::MakeMappable(Scaleform::Render::GL::Texture *this)
{
  unsigned int MipLevels; // ebx
  Scaleform::Render::ImageFormat v3; // eax
  Scaleform::Render::RawImage *v4; // rax
  Scaleform::Render::RawImage *pObject; // rcx
  Scaleform::Render::RawImage *v6; // rbx

  MipLevels = this->MipLevels;
  v3 = this->pFormat->GetImageFormat((Scaleform::Render::TextureFormat *)this->pFormat);
  v4 = Scaleform::Render::RawImage::Create(v3, MipLevels, &this->pTextures->Size, 0, 0i64, 0i64);
  pObject = this->pBackingImage.pObject;
  v6 = v4;
  if ( pObject )
    pObject->Release(pObject);
  this->pBackingImage.pObject = v6;
}

char __fastcall Scaleform::Render::GL::MappedTexture::Map(
        Scaleform::Render::GL::MappedTexture *this,
        Scaleform::Render::Texture *ptexture,
        unsigned int mipLevel,
        unsigned int levelCount)
{
  unsigned int v5; // er15
  int MipLevels; // ebx
  Scaleform::Render::ImageFormat v9; // eax
  int v10; // er13
  Scaleform::Render::ImageFormat v11; // ebx
  Scaleform::Render::RawImage *v12; // rcx
  unsigned int TextureCount; // er13
  unsigned int i; // edi
  __int64 StartMipLevel; // rdx
  unsigned int v16; // eax
  unsigned int v17; // ecx
  unsigned int v18; // esi
  unsigned int v19; // er15
  int v20; // ebx
  int FormatPlaneCount; // eax
  __int64 v22; // rcx
  Scaleform::Render::Palette *pObject; // rbx
  Scaleform::Render::ImageFormat v25; // ebx
  Scaleform::Render::ImagePlane pplane; // [rsp+20h] [rbp-60h] BYREF
  Scaleform::Render::ImageData pdata; // [rsp+40h] [rbp-40h] BYREF

  v5 = mipLevel;
  if ( levelCount > 4 )
  {
    v25 = ptexture->GetImageFormat(ptexture);
    Scaleform::Render::ImageData::Clear(&this->Data);
    if ( !Scaleform::Render::ImageData::allocPlanes(&this->Data, v25, levelCount, 1) )
      return 0;
  }
  else
  {
    MipLevels = 1;
    if ( (ptexture->Use & 2) == 0 )
      MipLevels = ptexture->MipLevels;
    v9 = ptexture->GetFormat(ptexture);
    v10 = MipLevels * Scaleform::Render::ImageData::GetFormatPlaneCount(v9);
    v11 = ptexture->GetImageFormat(ptexture);
    Scaleform::Render::ImageData::Clear(&this->Data);
    this->Data.Flags |= 1u;
    this->Data.Format = v11;
    this->Data.LevelCount = levelCount;
    this->Data.pPlanes = this->Planes;
    this->Data.RawPlaneCount = v10;
    if ( this != (Scaleform::Render::GL::MappedTexture *)-88i64 && v10 == 1 )
    {
      this->Data.Plane0.Width = this->Planes[0].Width;
      this->Data.Plane0.Height = this->Planes[0].Height;
      this->Data.Plane0.Pitch = this->Planes[0].Pitch;
      this->Data.Plane0.DataSize = this->Planes[0].DataSize;
      this->Data.Plane0.pData = this->Planes[0].pData;
    }
    v5 = mipLevel;
  }
  if ( !ptexture[1].__vftable )
    return 0;
  this->StartMipLevel = v5;
  this->pTexture = ptexture;
  this->LevelCount = levelCount;
  v12 = (Scaleform::Render::RawImage *)ptexture[1].__vftable;
  TextureCount = ptexture->TextureCount;
  *(_QWORD *)&pdata.Format = 0i64;
  *(_DWORD *)&pdata.Flags = 0x10000;
  pdata.pPlanes = &pdata.Plane0;
  memset(&pdata.pPalette, 0, 40);
  Scaleform::Render::RawImage::GetImageData(v12, &pdata);
  for ( i = 0; i < TextureCount; ++i )
  {
    StartMipLevel = this->StartMipLevel;
    v16 = 0;
    memset(&pplane, 0, sizeof(pplane));
    v17 = 0;
    if ( (_DWORD)StartMipLevel )
    {
      do
      {
        v16 >>= 1;
        if ( !v16 )
          v16 = 1;
        v17 >>= 1;
        if ( !v17 )
          v17 = 1;
        --StartMipLevel;
      }
      while ( StartMipLevel );
      pplane.Width = v16;
      pplane.Height = v17;
    }
    v18 = 0;
    if ( levelCount )
    {
      v19 = i;
      do
      {
        v20 = v18 + this->StartMipLevel;
        FormatPlaneCount = Scaleform::Render::ImageData::GetFormatPlaneCount(pdata.Format);
        Scaleform::Render::ImageData::GetPlane(&pdata, i + v20 * FormatPlaneCount, &pplane);
        ++v18;
        v22 = v19;
        v19 += TextureCount;
        this->Data.pPlanes[v22] = pplane;
      }
      while ( v18 < levelCount );
    }
  }
  this->pTexture->pMap = this;
  Scaleform::Render::ImageData::freePlanes(&pdata);
  pObject = pdata.pPalette.pObject;
  if ( pdata.pPalette.pObject )
  {
    if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                         &pdata.pPalette.pObject->RefCount.Value,
                         -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pObject);
  }
  return 1;
}

void __fastcall Scaleform::Render::GL::TextureManager::NotifyLostContext(Scaleform::Render::GL::TextureManager *this)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rbx
  Scaleform::Render::Texture *pNext; // rdi
  unsigned __int64 *p_Size; // rsi

  pObject = this->pLocks.pObject;
  Scaleform::Mutex::DoLock(&pObject->TextureMutex);
  pNext = this->Textures.Root.pNext;
  p_Size = &this->TextureFormats.Data.Size;
  if ( this == (Scaleform::Render::GL::TextureManager *)-144i64 )
    p_Size = 0i64;
  while ( pNext != (Scaleform::Render::Texture *)p_Size )
  {
    pNext->LoseTextureData(pNext);
    pNext = pNext->pNext;
  }
  Scaleform::ArrayData<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::Resize(
    &this->TextureResourceDestroyList.PendingFreeList.Data,
    0i64);
  Scaleform::Mutex::Unlock(&pObject->TextureMutex);
}

unsigned __int64 __fastcall Scaleform::Render::FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry>::ProcessDestructionList(
        Scaleform::Render::FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry> *this,
        bool forceWait)
{
  unsigned int v2; // ebx
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *v5; // rdi
  Scaleform::Render::Fence *pObject; // rax
  Scaleform::Render::Fence *v7; // rax

  v2 = 0;
  if ( this->PendingFreeList.Data.Size )
  {
    while ( 1 )
    {
      v5 = &this->PendingFreeList.Data.Data[v2];
      pObject = v5->GPUFence.pObject;
      if ( !v5->GPUFence.pObject
        || !pObject->HasData
        || !pObject->Data
        || !Scaleform::Render::FenceImpl::IsPending(pObject->Data, 1i64) )
      {
        break;
      }
      if ( forceWait )
      {
        v7 = v5->GPUFence.pObject;
        if ( !v5->GPUFence.pObject
          || !v7->HasData
          || !v7->Data
          || Scaleform::Render::FenceImpl::WaitFence(v7->Data, 1i64) )
        {
          break;
        }
        ++v2;
      }
      else
      {
        ++v2;
      }
LABEL_16:
      if ( v2 >= this->PendingFreeList.Data.Size )
        return this->PendingFreeList.Data.Size;
    }
    Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::FreeResource(v5);
    if ( this->PendingFreeList.Data.Size == 1 )
    {
      Scaleform::ArrayData<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::Resize(
        &this->PendingFreeList.Data,
        0i64);
    }
    else
    {
      Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::~PendingTextureDestroyEntry(&this->PendingFreeList.Data.Data[v2]);
      memmove(
        &this->PendingFreeList.Data.Data[v2],
        &this->PendingFreeList.Data.Data[v2 + 1],
        120 * (this->PendingFreeList.Data.Size - v2) - 120);
      --this->PendingFreeList.Data.Size;
    }
    goto LABEL_16;
  }
  return this->PendingFreeList.Data.Size;
}

void __fastcall Scaleform::Render::GL::Texture::ReleaseHWTextures(Scaleform::Render::GL::Texture *this, bool __formal)
{
  Scaleform::Render::TextureManager *pManager; // rbp
  Scaleform::Render::TextureManagerLocks *pObject; // rbx
  Scaleform::Render::GL::HAL *v5; // rdi
  unsigned __int64 v6; // r8
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *v7; // rcx
  unsigned int i; // ebx
  Scaleform::Render::GL::Texture::HWTextureDesc *v9; // rdi
  Scaleform::RefCountVImpl *v10; // rcx
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry __that; // [rsp+20h] [rbp-98h] BYREF

  Scaleform::Render::Texture::ReleaseHWTextures(this, 1);
  pManager = this->pManagerLocks.pObject->pManager;
  if ( (this->TextureFlags & 0x10) == 0 )
  {
    Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(&__that, this);
    pObject = pManager->pLocks.pObject;
    Scaleform::Mutex::DoLock(&pObject->TextureMutex);
    v5 = (Scaleform::Render::GL::HAL *)pManager[2].ServiceCommandInstance.__vftable;
    if ( v5 )
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)pManager[2].ServiceCommandInstance.__vftable);
    if ( __that.pHAL.pObject )
      Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)__that.pHAL.pObject);
    v6 = *(_QWORD *)&pManager[2].RenderThreadId + 1i64;
    __that.pHAL.pObject = v5;
    Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::ResizeNoConstruct(
      (Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0> > *)&pManager[2].ServiceCommandInstance.pManager,
      &pManager[2].ServiceCommandInstance.pManager,
      v6);
    v7 = (Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *)((char *)pManager[2].ServiceCommandInstance.pManager
                                                                             + 120
                                                                             * *(_QWORD *)&pManager[2].RenderThreadId
                                                                             - 120);
    if ( v7 )
      Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::PendingTextureDestroyEntry(v7, &__that);
    Scaleform::Mutex::Unlock(&pObject->TextureMutex);
    Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::~PendingTextureDestroyEntry(&__that);
  }
  for ( i = 0; i < this->TextureCount; ++i )
  {
    v9 = &this->pTextures[i];
    v10 = (Scaleform::RefCountVImpl *)v9->TexId.pObject;
    if ( v10 )
      Scaleform::RefCountImpl::Release(v10);
    v9->TexId.pObject = 0i64;
  }
  *(_QWORD *)this->LastMinFilter = 0i64;
  *(_QWORD *)&this->LastMinFilter[2] = 0i64;
  *(_QWORD *)this->LastAddress = 0i64;
  *(_QWORD *)&this->LastAddress[2] = 0i64;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::TextureFormat *,Scaleform::AllocatorLH<Scaleform::Render::TextureFormat *,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::TextureFormat **Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::TextureFormat **v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 8 * v6;
      if ( Data )
      {
        v8 = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                    Scaleform::Memory::pGlobalHeap,
                                                    Data,
                                                    v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (Scaleform::Render::TextureFormat **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                          Scaleform::Memory::pGlobalHeap,
                                                          pheapAddr,
                                                          v7,
                                                          &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0> > *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // rdi
  unsigned __int64 v8; // r8
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *v9; // rax
  int v10; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    v6 = 8i64;
    if ( newCapacity >= 8 )
      v6 = newCapacity;
    v7 = (v6 + 7) & 0xFFFFFFFFFFFFFFF8ui64;
    v8 = 120 * v7;
    if ( Data )
    {
      v9 = (Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *)Scaleform::Memory::pGlobalHeap->Realloc(
                                                                                  Scaleform::Memory::pGlobalHeap,
                                                                                  Data,
                                                                                  v8);
      this->Policy.Capacity = v7;
      this->Data = v9;
    }
    else
    {
      v10 = 67;
      this->Data = (Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                                          Scaleform::Memory::pGlobalHeap,
                                                                                          pheapAddr,
                                                                                          v8,
                                                                                          &v10);
      this->Policy.Capacity = v7;
    }
  }
}

void Scaleform::Render::GL::DepthStencilSurface::ResetGLFormatIndex(void)
{
  Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex = -1;
}

void __fastcall Scaleform::ArrayData<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::Resize(
        Scaleform::ArrayData<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0> > *this,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *v5; // rax
  unsigned __int64 i; // rbx

  Size = this->Size;
  Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::ResizeNoConstruct(
    this,
    this,
    newSize);
  if ( newSize > Size )
  {
    v5 = &this->Data[Size];
    for ( i = newSize - Size; i; --i )
    {
      if ( v5 )
      {
        v5->GPUFence.pObject = 0i64;
        v5->pHAL.pObject = 0i64;
        v5->StageCount = 0;
        v5->pTexture[0].pObject = 0i64;
        v5->pTexture[1].pObject = 0i64;
        v5->pTexture[2].pObject = 0i64;
        v5->pTexture[3].pObject = 0i64;
        v5->pRenderBuffer[0].pObject = 0i64;
        v5->pRenderBuffer[1].pObject = 0i64;
        v5->pRenderBuffer[2].pObject = 0i64;
        v5->pRenderBuffer[3].pObject = 0i64;
        v5->pFramebuffer[0].pObject = 0i64;
        v5->pFramebuffer[1].pObject = 0i64;
        v5->pFramebuffer[2].pObject = 0i64;
        v5->pFramebuffer[3].pObject = 0i64;
      }
      ++v5;
    }
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0> > *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *i; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    for ( i = &this->Data[v7 - 1 + newSize]; v7; --v7 )
      Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::~PendingTextureDestroyEntry(i--);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

bool __fastcall Scaleform::Render::GL::DepthStencilSurface::SetNextGLFormatIndex()
{
  if ( Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex >= 0
    && !Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex].Format )
  {
    return 0;
  }
  return Scaleform::Render::GL::DepthStencilSurface::GLStencilFormats[++Scaleform::Render::GL::DepthStencilSurface::GLFormatIndex].Format != 0;
}

void __fastcall Scaleform::Render::GL::MappedTexture::Unmap(Scaleform::Render::GL::MappedTexture *this, bool __formal)
{
  Scaleform::Render::Texture *pTexture; // r12
  unsigned int v4; // ebp
  unsigned int i; // er14
  int v6; // ebx
  unsigned int v7; // edi
  Scaleform::Render::ImagePlane pplane; // [rsp+20h] [rbp-48h] BYREF

  pTexture = this->pTexture;
  v4 = 0;
  for ( i = pTexture->TextureCount; v4 < i; ++v4 )
  {
    v6 = 0;
    memset(&pplane, 0, sizeof(pplane));
    if ( this->LevelCount > 0 )
    {
      v7 = v4;
      do
      {
        Scaleform::Render::ImageData::GetPlane(&this->Data, v7, &pplane);
        if ( pplane.pData )
          ((void (__fastcall *)(Scaleform::Render::Texture *, _QWORD, _QWORD, Scaleform::Render::ImagePlane *))pTexture->__vftable[1].~RefCountImplCore)(
            pTexture,
            v4,
            v6 + this->StartMipLevel,
            &pplane);
        ++v6;
        v7 += i;
      }
      while ( v6 < this->LevelCount );
    }
  }
  Scaleform::Render::MappedTextureBase::Unmap(this, 1);
}

bool __fastcall Scaleform::Render::GL::Texture::Update(
        Scaleform::Render::GL::Texture *this,
        const Scaleform::Render::Texture::UpdateDesc *updates,
        unsigned int count,
        unsigned int mipLevel)
{
  const Scaleform::Render::TextureFormat *pFormat; // rdi
  __int64 v5; // r13
  const Scaleform::Render::Texture::UpdateDesc *v6; // rbx
  Scaleform::Render::TextureFormat_vtbl *v8; // rdi
  void (__fastcall *v9)(Scaleform::Render::TextureFormat *); // r15
  unsigned int v10; // er14
  unsigned int *p_y1; // rbx
  unsigned int v12; // ebp
  __int64 v13; // rdx
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v14; // rcx
  __int64 v15; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v16; // rcx
  __int64 v17; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v18; // rcx
  __int64 v19; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v20; // rcx
  __int64 v21; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v22; // rcx
  __int64 v23; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v24; // rcx
  __int64 v25; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v26; // rcx
  __int64 v27; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v28; // rcx
  __int64 v29; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v30; // rcx
  __int64 v31; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v32; // rcx
  __int64 v33; // rax
  Scaleform::Render::MappedTextureBase *pMap; // r15
  Scaleform::Render::MappedTextureBase *v35; // rax
  Scaleform::Render::ImageFormat v36; // eax
  _BOOL8 v37; // r8
  Scaleform::Render::ImageFormat v38; // er14
  unsigned int *p_y2; // rbx
  __int64 v40; // rbp
  unsigned int v41; // edx
  Scaleform::Render::ImageData *p_Data; // rcx
  unsigned int v43; // er8
  unsigned int v44; // er9
  unsigned int v45; // ecx
  unsigned int v46; // eax
  void (__fastcall *copyScanline)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *); // rax
  Scaleform::Render::ImagePlane pplane; // [rsp+50h] [rbp-78h] BYREF
  Scaleform::Render::ImagePlane splane; // [rsp+70h] [rbp-58h] BYREF

  pFormat = this->pFormat;
  v5 = count;
  v6 = updates;
  if ( pFormat )
    v8 = pFormat[1].__vftable;
  else
    v8 = 0i64;
  if ( !this->pBackingImage.pObject )
  {
    v9 = v8[1].~TextureFormat;
    v10 = 0;
    if ( !count )
    {
LABEL_23:
      LOBYTE(v35) = 1;
      return (char)v35;
    }
    p_y1 = &updates->DestRect.y1;
    while ( 1 )
    {
      v12 = *(p_y1 - 9);
      v13 = *(_QWORD *)(p_y1 - 7);
      if ( v9 )
        break;
      if ( v13 == v12 * BYTE4(v8->GetScanlineCopyFn) )
      {
        v14 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v15 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *, __int64, __int64))v14->~RefCountImplCore
               + 110))(
                v14,
                v13,
                4294967292i64);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v15 + 704i64))(v15, 3314i64, v12);
        v16 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v17 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v16->~RefCountImplCore
               + 110))(v16);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v17 + 704i64))(v17, 3317i64, 1i64);
        v18 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v19 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v18->~RefCountImplCore
               + 110))(v18);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v19 + 888i64))(v19, 3553i64, mipLevel);
        v20 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v21 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v20->~RefCountImplCore
               + 110))(v20);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v21 + 704i64))(v21, 3314i64, 0i64);
      }
      else if ( v13 == ((v12 * BYTE4(v8->GetScanlineCopyFn) + 3) & 0xFFFFFFFC) )
      {
        v22 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v23 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *, __int64, __int64))v22->~RefCountImplCore
               + 110))(
                v22,
                v13,
                4294967292i64);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v23 + 704i64))(v23, 3314i64, v12);
        v24 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v25 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v24->~RefCountImplCore
               + 110))(v24);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v25 + 704i64))(v25, 3317i64, 4i64);
        v26 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v27 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v26->~RefCountImplCore
               + 110))(v26);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v27 + 888i64))(v27, 3553i64, mipLevel);
        v28 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v29 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v28->~RefCountImplCore
               + 110))(v28);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v29 + 704i64))(v29, 3314i64, 0i64);
        v30 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v31 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v30->~RefCountImplCore
               + 110))(v30);
        (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v31 + 704i64))(v31, 3317i64, 1i64);
      }
      else
      {
        if ( v13 != (p_y1[1] - *(p_y1 - 1)) * BYTE4(v8->GetScanlineCopyFn) )
          break;
        v32 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v33 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *, __int64, __int64))v32->~RefCountImplCore
               + 110))(
                v32,
                v13,
                4294967292i64);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v33 + 888i64))(v33, 3553i64, mipLevel);
      }
      ++v10;
      p_y1 += 14;
      if ( v10 >= (unsigned int)v5 )
        goto LABEL_23;
    }
    ((void (__fastcall *)(Scaleform::Render::GL::Texture *, __int64, __int64))this->MakeMappable)(
      this,
      v13,
      4294967292i64);
    v6 = updates;
  }
  pMap = this->pMap;
  v35 = this->pManagerLocks.pObject->pManager->mapTexture(this->pManagerLocks.pObject->pManager, this, mipLevel, 1i64);
  if ( v35 )
  {
    v36 = this->GetImageFormat(this);
    memset(&pplane, 0, sizeof(pplane));
    v38 = v36;
    if ( (_DWORD)v5 )
    {
      p_y2 = &v6->DestRect.y2;
      v40 = v5;
      do
      {
        v41 = p_y2[1];
        p_Data = &this->pMap->Data;
        splane = *(Scaleform::Render::ImagePlane *)(p_y2 - 11);
        Scaleform::Render::ImageData::GetPlane(p_Data, v41, &pplane);
        v43 = *(p_y2 - 2);
        v44 = p_y2[1];
        v45 = *(p_y2 - 1) - *(p_y2 - 3);
        pplane.pData += *(p_y2 - 3) * BYTE4(v8->GetScanlineCopyFn) + pplane.Pitch * v43;
        v46 = *p_y2 - v43;
        splane.Width = v45;
        splane.Height = v46;
        pplane.Height = v46;
        copyScanline = (void (__fastcall *)(unsigned __int8 *, const unsigned __int8 *, unsigned __int64, Scaleform::Render::Palette *, void *))v8[1].~TextureFormat;
        pplane.Width = v45;
        Scaleform::Render::ConvertImagePlane(&pplane, &splane, v38, v44, copyScanline, 0i64, 0i64);
        p_y2 += 14;
        --v40;
      }
      while ( v40 );
    }
    if ( !pMap )
    {
      LOBYTE(v37) = 1;
      this->pManagerLocks.pObject->pManager->unmapTexture(this->pManagerLocks.pObject->pManager, this, v37);
    }
    goto LABEL_23;
  }
  return (char)v35;
}

char __fastcall Scaleform::Render::GL::Texture::UpdateRenderTargetData(
        Scaleform::Render::GL::Texture *this,
        Scaleform::Render::RenderTargetData *__formal,
        Scaleform::Render::HAL *a3)
{
  Scaleform::Render::RawImage *pObject; // rcx
  char v6; // di
  __int64 v7; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v8; // rcx
  __int64 v9; // rax
  unsigned int v10; // edi
  unsigned int MipmapCount; // eax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v12; // rcx
  __int64 v13; // rax
  unsigned int LevelCount; // eax
  Scaleform::Render::Palette *v15; // rbx
  Scaleform::Render::ImagePlane pplane; // [rsp+50h] [rbp-9h] BYREF
  Scaleform::Render::ImageData pdata; // [rsp+70h] [rbp+17h] BYREF

  pObject = this->pBackingImage.pObject;
  if ( !pObject )
    return 0;
  *(_DWORD *)&pdata.Flags = 0x10000;
  *(_QWORD *)&pdata.Format = 0i64;
  memset(&pdata.pPalette, 0, 40);
  pdata.pPlanes = &pdata.Plane0;
  if ( Scaleform::Render::RawImage::GetImageData(pObject, &pdata) )
  {
    v7 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.~RefCountImplCore
          + 110))(this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable);
    (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v7 + 48i64))(v7, 33988i64);
    v8 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
    v9 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v8->~RefCountImplCore
          + 110))(v8);
    (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::GL::HALGLTexture *))(*(_QWORD *)v9 + 112i64))(
      v9,
      3553i64,
      this->pTextures->TexId.pObject);
    v10 = 0;
    MipmapCount = Scaleform::Render::Texture::GetMipmapCount(this);
    if ( pdata.LevelCount < MipmapCount )
      MipmapCount = pdata.LevelCount;
    if ( MipmapCount )
    {
      do
      {
        memset(&pplane, 0, sizeof(pplane));
        Scaleform::Render::ImageData::GetPlane(&pdata, v10, &pplane);
        v12 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v13 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v12->~RefCountImplCore
               + 110))(v12);
        (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v13 + 872i64))(v13, 3553i64, v10++);
        LevelCount = Scaleform::Render::Texture::GetMipmapCount(this);
        if ( pdata.LevelCount < LevelCount )
          LevelCount = pdata.LevelCount;
      }
      while ( v10 < LevelCount );
    }
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  Scaleform::Render::ImageData::freePlanes(&pdata);
  v15 = pdata.pPalette.pObject;
  if ( pdata.pPalette.pObject )
  {
    if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                         &pdata.pPalette.pObject->RefCount.Value,
                         -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v15);
  }
  return v6;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

char __fastcall Scaleform::Render::GL::Texture::UpdateStagingData(
        Scaleform::Render::GL::Texture *this,
        Scaleform::Render::RenderTargetData *prtData)
{
  Scaleform::Render::RawImage *pObject; // rcx
  char v6; // di
  __int64 v7; // rax
  const Scaleform::Render::TextureFormat *pFormat; // rsi
  Scaleform::Render::TextureFormat_vtbl *v9; // rsi
  unsigned int v10; // edi
  unsigned int MipmapCount; // eax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v12; // rcx
  __int64 v13; // rax
  unsigned int LevelCount; // eax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v15; // rcx
  __int64 v16; // rbx
  __int64 v17; // rax
  Scaleform::Render::Palette *v18; // rbx
  Scaleform::Render::ImagePlane pplane; // [rsp+40h] [rbp-9h] BYREF
  Scaleform::Render::ImageData pdata; // [rsp+60h] [rbp+17h] BYREF

  pObject = this->pBackingImage.pObject;
  if ( !pObject )
    return 0;
  *(_DWORD *)&pdata.Flags = 0x10000;
  *(_QWORD *)&pdata.Format = 0i64;
  memset(&pdata.pPalette, 0, 40);
  pdata.pPlanes = &pdata.Plane0;
  if ( Scaleform::Render::RawImage::GetImageData(pObject, &pdata) )
  {
    v7 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.~RefCountImplCore
          + 110))(this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable);
    (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::DepthStencilBuffer *))(*(_QWORD *)v7 + 88i64))(
      v7,
      36160i64,
      prtData[1].pDepthStencilBuffer.pObject);
    pFormat = this->pFormat;
    if ( pFormat )
      v9 = pFormat[1].__vftable;
    else
      v9 = 0i64;
    v10 = 0;
    MipmapCount = Scaleform::Render::Texture::GetMipmapCount(this);
    if ( pdata.LevelCount < MipmapCount )
      MipmapCount = pdata.LevelCount;
    if ( MipmapCount )
    {
      do
      {
        memset(&pplane, 0, sizeof(pplane));
        Scaleform::Render::ImageData::GetPlane(&pdata, v10, &pplane);
        v12 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v13 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v12->~RefCountImplCore
               + 110))(v12);
        (*(void (__fastcall **)(__int64, _QWORD, _QWORD, _QWORD, unsigned int, _DWORD, int, unsigned __int8 *))(*(_QWORD *)v13 + 800i64))(
          v13,
          0i64,
          0i64,
          this->ImgSize.Width,
          this->ImgSize.Height,
          HIDWORD(v9->GetImageFormat),
          5121,
          pplane.pData);
        ++v10;
        LevelCount = Scaleform::Render::Texture::GetMipmapCount(this);
        if ( pdata.LevelCount < LevelCount )
          LevelCount = pdata.LevelCount;
      }
      while ( v10 < LevelCount );
    }
    v15 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
    v16 = *(_QWORD *)(*((_QWORD *)v15[26].Execute + 104 * (__int64)v15[27].~RefCountImplCore - 104) + 32i64);
    v17 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v15->~RefCountImplCore
           + 110))(v15);
    (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v17 + 88i64))(v17, 36160i64, *(_QWORD *)(v16 + 40));
    v6 = 1;
  }
  else
  {
    v6 = 0;
  }
  Scaleform::Render::ImageData::freePlanes(&pdata);
  v18 = pdata.pPalette.pObject;
  if ( pdata.pPalette.pObject )
  {
    if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                         &pdata.pPalette.pObject->RefCount.Value,
                         -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v18);
  }
  return v6;
}

char __fastcall Scaleform::Render::GL::Texture::Upload(
        Scaleform::Render::GL::Texture *this,
        unsigned int itex,
        unsigned int level,
        const Scaleform::Render::ImagePlane *plane)
{
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v8; // rcx
  __int64 v9; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v10; // rcx
  __int64 v11; // rax
  const Scaleform::Render::TextureFormat *pFormat; // r14
  Scaleform::Render::TextureFormat_vtbl *v13; // r14
  Scaleform::Render::ImageFormat v14; // ecx
  int MipLevelSize; // ebx
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v16; // rcx
  __int64 v17; // rax
  unsigned __int64 Pitch; // rdx
  __int64 v19; // rax
  Scaleform::Render::GL::Texture::HWTextureDesc *pTextures; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v21; // rcx
  __int64 v22; // rax
  const Scaleform::Render::TextureFormat *v23; // rcx
  Scaleform::Render::TextureFormat_vtbl *v24; // rcx
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v25; // rcx
  __int64 v26; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v27; // rcx
  __int64 v28; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v29; // rcx
  __int64 v30; // rax
  Scaleform::Render::GL::Texture::HWTextureDesc *v31; // rcx
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v32; // rcx
  __int64 v33; // rax
  const Scaleform::Render::TextureFormat *v34; // rcx
  Scaleform::Render::TextureFormat_vtbl *v35; // rcx
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v36; // rcx
  __int64 v37; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v38; // rcx
  __int64 v39; // rax
  Scaleform::Render::TextureManager::ServiceCommand_vtbl *v40; // rcx
  __int64 v41; // rax
  Scaleform::Render::GL::Texture::HWTextureDesc *v42; // rax
  unsigned int Width; // edx
  unsigned int Height; // er8
  __int64 v45; // r9
  unsigned int v46; // eax
  unsigned int v47; // ecx
  Scaleform::Render::GL::Texture_vtbl *v48; // rax
  Scaleform::Render::Size<unsigned long> sz; // [rsp+50h] [rbp-88h] BYREF
  int v51[2]; // [rsp+58h] [rbp-80h] BYREF
  unsigned __int64 v52; // [rsp+60h] [rbp-78h]
  unsigned __int64 DataSize; // [rsp+68h] [rbp-70h]
  unsigned __int8 *pData; // [rsp+70h] [rbp-68h]
  __int64 v55; // [rsp+78h] [rbp-60h]
  unsigned int v56; // [rsp+80h] [rbp-58h]
  unsigned int v57; // [rsp+84h] [rbp-54h]
  unsigned int v58; // [rsp+88h] [rbp-50h]

  v8 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v9 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v8->~RefCountImplCore + 110))(v8);
  (*(void (__fastcall **)(__int64, __int64))(*(_QWORD *)v9 + 48i64))(v9, 33988i64);
  v10 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
  v11 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v10->~RefCountImplCore
         + 110))(v10);
  (*(void (__fastcall **)(__int64, __int64, Scaleform::Render::GL::HALGLTexture *))(*(_QWORD *)v11 + 112i64))(
    v11,
    3553i64,
    this->pTextures[itex].TexId.pObject);
  pFormat = this->pFormat;
  if ( pFormat )
    v13 = pFormat[1].__vftable;
  else
    v13 = 0i64;
  if ( (unsigned __int64)(((__int64)v13->~TextureFormat & 0xFFF) - 50) > 0x31 )
  {
    Pitch = plane->Pitch;
    v19 = plane->Width * BYTE4(v13->GetScanlineCopyFn);
    if ( v19 == Pitch )
    {
      pTextures = this->pTextures;
      if ( plane->Width == pTextures[itex].Size.Width && plane->Height == pTextures[itex].Size.Height )
      {
        v21 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v22 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v21->~RefCountImplCore
               + 110))(v21);
        v23 = this->pFormat;
        if ( v23 )
          v24 = v23[1].__vftable;
        else
          v24 = 0i64;
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, unsigned int, _DWORD, _DWORD, _DWORD, unsigned __int8 *))(*(_QWORD *)v22 + 872i64))(
          v22,
          3553i64,
          level,
          LODWORD(v24->GetImageFormat),
          plane->Width,
          plane->Height,
          0,
          HIDWORD(v13->GetImageFormat),
          v13->GetScanlineCopyFn,
          plane->pData);
      }
      else
      {
        v25 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v26 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v25->~RefCountImplCore
               + 110))(v25);
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, unsigned int, unsigned int, _DWORD, _DWORD, unsigned __int8 *))(*(_QWORD *)v26 + 888i64))(
          v26,
          3553i64,
          level,
          0i64,
          0,
          plane->Width,
          plane->Height,
          HIDWORD(v13->GetImageFormat),
          v13->GetScanlineCopyFn,
          plane->pData);
      }
    }
    else if ( Pitch == (((_DWORD)v19 + 3) & 0xFFFFFFFC) )
    {
      v27 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
      v28 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v27->~RefCountImplCore
             + 110))(v27);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v28 + 704i64))(v28, 3314i64, plane->Width);
      v29 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
      v30 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v29->~RefCountImplCore
             + 110))(v29);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v30 + 704i64))(v30, 3317i64, 4i64);
      v31 = this->pTextures;
      if ( plane->Width == v31[itex].Size.Width && plane->Height == v31[itex].Size.Height )
      {
        v32 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v33 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v32->~RefCountImplCore
               + 110))(v32);
        v34 = this->pFormat;
        if ( v34 )
          v35 = v34[1].__vftable;
        else
          v35 = 0i64;
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, unsigned int, _DWORD, _DWORD, _DWORD, unsigned __int8 *))(*(_QWORD *)v33 + 872i64))(
          v33,
          3553i64,
          level,
          LODWORD(v35->GetImageFormat),
          plane->Width,
          plane->Height,
          0,
          HIDWORD(v13->GetImageFormat),
          v13->GetScanlineCopyFn,
          plane->pData);
      }
      else
      {
        v36 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
        v37 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v36->~RefCountImplCore
               + 110))(v36);
        (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, _DWORD, unsigned int, unsigned int, _DWORD, _DWORD, unsigned __int8 *))(*(_QWORD *)v37 + 888i64))(
          v37,
          3553i64,
          level,
          0i64,
          0,
          plane->Width,
          plane->Height,
          HIDWORD(v13->GetImageFormat),
          v13->GetScanlineCopyFn,
          plane->pData);
      }
      v38 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
      v39 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v38->~RefCountImplCore
             + 110))(v38);
      (*(void (__fastcall **)(__int64, __int64, _QWORD))(*(_QWORD *)v39 + 704i64))(v39, 3314i64, 0i64);
      v40 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
      v41 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v40->~RefCountImplCore
             + 110))(v40);
      (*(void (__fastcall **)(__int64, __int64, __int64))(*(_QWORD *)v41 + 704i64))(v41, 3317i64, 1i64);
    }
    else
    {
      if ( !this->pBackingImage.pObject )
        this->MakeMappable(this);
      v42 = this->pTextures;
      Width = v42[itex].Size.Width;
      Height = v42[itex].Size.Height;
      if ( level > 1 )
      {
        v45 = level - 1;
        do
        {
          v46 = Width >> 1;
          v47 = Height >> 1;
          Width = 1;
          Height = 1;
          if ( v46 )
            Width = v46;
          if ( v47 )
            Height = v47;
          --v45;
        }
        while ( v45 );
      }
      v51[0] = plane->Width;
      v51[1] = plane->Height;
      v52 = plane->Pitch;
      DataSize = plane->DataSize;
      pData = plane->pData;
      v48 = this->__vftable;
      v56 = Width;
      v57 = Height;
      v55 = 0i64;
      v58 = itex;
      v48->Update(this, (const Scaleform::Render::Texture::UpdateDesc *)v51, 1u, level);
    }
  }
  else
  {
    v14 = HIDWORD(v13->~TextureFormat);
    sz = *(Scaleform::Render::Size<unsigned long> *)&plane->Width;
    MipLevelSize = Scaleform::Render::ImageData::GetMipLevelSize(v14, &sz, itex);
    v16 = this->pManagerLocks.pObject->pManager[2].ServiceCommandInstance.__vftable;
    v17 = (*((__int64 (__fastcall **)(Scaleform::Render::TextureManager::ServiceCommand_vtbl *))v16->~RefCountImplCore
           + 110))(v16);
    (*(void (__fastcall **)(__int64, __int64, _QWORD, _QWORD, unsigned int, unsigned int, _DWORD, int, unsigned __int8 *))(*(_QWORD *)v17 + 224i64))(
      v17,
      3553i64,
      level,
      HIDWORD(v13->GetImageFormat),
      plane->Width,
      plane->Height,
      0,
      MipLevelSize,
      plane->pData);
  }
  return 1;
}

void __fastcall Scaleform::Render::GL::Texture::computeUpdateConvertRescaleFlags(
        Scaleform::Render::GL::Texture *this,
        bool rescale,
        bool swMipGen,
        Scaleform::Render::ImageFormat inputFormat,
        Scaleform::Render::ResizeImageType *rescaleType,
        Scaleform::Render::ImageFormat *rescaleBuffFromat,
        bool *convert)
{
  const Scaleform::Render::TextureFormat *pFormat; // rcx
  char v9; // r8
  char v10; // al

  pFormat = this->pFormat;
  if ( pFormat )
    pFormat = (const Scaleform::Render::TextureFormat *)pFormat[1].__vftable;
  *rescaleBuffFromat = SHIDWORD(pFormat->__vftable);
  *rescaleType = ResizeNone;
  if ( rescale )
  {
    v9 = BYTE4(pFormat[2].__vftable);
    if ( v9 == 4 )
    {
      *rescaleType = ResizeRgbaToRgba;
    }
    else if ( v9 == 1 )
    {
      *rescaleType = ResizeGray;
    }
    else
    {
      *rescaleBuffFromat = Image_R8G8B8A8;
      *convert = 1;
    }
  }
  if ( swMipGen )
  {
    v10 = BYTE4(pFormat[2].__vftable);
    if ( v10 != 4 && v10 != 1 )
      *convert = 1;
  }
}

Scaleform::Render::MappedTextureBase *__fastcall Scaleform::Render::GL::TextureManager::createMappedTexture(
        Scaleform::Render::GL::TextureManager *this)
{
  Scaleform::Render::MappedTextureBase *result; // rax
  Scaleform::Render::MappedTextureBase *v2; // rbx
  int v3; // [rsp+38h] [rbp+10h] BYREF

  v3 = 72;
  result = (Scaleform::Render::MappedTextureBase *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                     Scaleform::Memory::pGlobalHeap,
                                                     this,
                                                     216i64,
                                                     &v3);
  v2 = result;
  if ( result )
  {
    Scaleform::Render::MappedTextureBase::MappedTextureBase(result);
    v2->__vftable = (Scaleform::Render::MappedTextureBase_vtbl *)&Scaleform::Render::GL::MappedTexture::`vftable';
    return v2;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::GL::TextureManager::getBaseTextureFormatFromInternal(unsigned int intfmt)
{
  if ( intfmt <= 0x804D )
  {
    if ( intfmt >= 0x803F )
      return 6409i64;
    if ( intfmt != 10768 )
    {
      if ( intfmt - 32827 <= 3 )
        return 6406i64;
      return intfmt;
    }
    return 6407i64;
  }
  if ( intfmt >= 0x804F )
  {
    if ( intfmt > 0x8054 )
    {
      if ( intfmt <= 0x805B )
        return 6408i64;
      return intfmt;
    }
    return 6407i64;
  }
  return intfmt;
}

Scaleform::Render::GL::MappedTexture *__fastcall Scaleform::Render::GL::TextureManager::getDefaultMappedTexture(
        Scaleform::Render::GL::TextureManager *this)
{
  return &this->MappedTexture0;
}

void __fastcall Scaleform::Render::GL::TextureManager::initTextureFormats(Scaleform::Render::GL::TextureManager *this)
{
  Scaleform::Render::GL::TextureFormat::Mapping *v2; // rbx
  __int64 Extension; // rdx
  Scaleform::Render::TextureFormat *v4; // rax
  Scaleform::Render::TextureFormat *v5; // r14
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  Scaleform::Render::TextureFormat **v8; // rcx
  Scaleform::Render::TextureFormat **v9; // rcx
  Scaleform::Render::GL::TextureFormat::Mapping *i; // rcx
  int v11; // [rsp+40h] [rbp+8h] BYREF

  if ( this->pHal )
  {
    v2 = Scaleform::Render::GL::TextureFormatMapping;
    if ( Scaleform::Render::GL::TextureFormatMapping[0].Format )
    {
      while ( 1 )
      {
        if ( v2->GLColors != 6406 && v2->GLColors != 6409
          || !Scaleform::Render::GL::HAL::CheckGLVersion(this->pHal, 3i64, 0i64) )
        {
          Extension = (unsigned int)v2->Extension;
          if ( !(_DWORD)Extension || Scaleform::Render::GL::HAL::CheckExtension(this->pHal, Extension) )
            break;
        }
LABEL_21:
        ++v2;
        if ( v2->Format == Image_None )
          return;
      }
      v11 = 72;
      v4 = (Scaleform::Render::TextureFormat *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                 Scaleform::Memory::pGlobalHeap,
                                                 this,
                                                 16i64,
                                                 &v11);
      v5 = v4;
      if ( v4 )
      {
        v4->__vftable = (Scaleform::Render::TextureFormat_vtbl *)&Scaleform::Render::GL::TextureFormat::`vftable';
        v4[1].__vftable = (Scaleform::Render::TextureFormat_vtbl *)v2;
      }
      else
      {
        v5 = 0i64;
      }
      v6 = this->TextureFormats.Data.Size + 1;
      if ( v6 >= this->TextureFormats.Data.Size )
      {
        if ( v6 > this->TextureFormats.Data.Policy.Capacity )
        {
          v7 = v6 + (v6 >> 2);
          goto LABEL_16;
        }
      }
      else if ( v6 < this->TextureFormats.Data.Policy.Capacity >> 1 )
      {
        v7 = this->TextureFormats.Data.Size + 1;
LABEL_16:
        Scaleform::ArrayDataBase<Scaleform::Render::Text::LineBuffer::Line *,Scaleform::AllocatorLH<Scaleform::Render::Text::LineBuffer::Line *,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
          &this->TextureFormats.Data,
          &this->TextureFormats,
          v7);
      }
      v8 = this->TextureFormats.Data.Data - 1;
      this->TextureFormats.Data.Size = v6;
      v9 = &v8[v6];
      if ( v9 )
        *v9 = v5;
      for ( i = v2 + 1; i->Format == v2->Format; ++i )
        v2 = i;
      goto LABEL_21;
    }
  }
}

void __fastcall Scaleform::Render::GL::TextureManager::processInitTextures(Scaleform::Render::GL::TextureManager *this)
{
  Scaleform::ListSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> *p_TextureInitQueue; // rsi
  Scaleform::Render::Texture *p_Textures; // rax
  Scaleform::ListSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> *v4; // rbp
  Scaleform::Render::Texture *pNext; // rbx
  Scaleform::Render::Texture *pPrev; // rax
  Scaleform::Render::Texture *v7; // rcx

  p_TextureInitQueue = &this->TextureInitQueue;
  p_Textures = (Scaleform::Render::Texture *)&this->Textures;
  if ( this == (Scaleform::Render::GL::TextureManager *)-160i64 )
    p_Textures = 0i64;
  if ( this->TextureInitQueue.Root.pNext != p_Textures )
  {
    v4 = &this->Textures;
    if ( this == (Scaleform::Render::GL::TextureManager *)-160i64 )
      v4 = 0i64;
    do
    {
      pNext = this->TextureInitQueue.Root.pNext;
      pPrev = pNext->pPrev;
      if ( pPrev != (Scaleform::Render::Texture *)-1i64 )
      {
        v7 = pNext->pNext;
        if ( v7 != (Scaleform::Render::Texture *)-1i64 )
        {
          pPrev->pNext = v7;
          pNext->pNext->pPrev = pNext->pPrev;
          pNext->pPrev = (Scaleform::Render::Texture *)-1i64;
          pNext->pNext = (Scaleform::Render::Texture *)-1i64;
        }
      }
      if ( pNext->Initialize(pNext) )
      {
        pNext->pPrev = this->Textures.Root.pPrev;
        pNext->pNext = (Scaleform::Render::Texture *)&this->TextureFormats.Data.Size;
        this->Textures.Root.pPrev->pNext = pNext;
        this->Textures.Root.pPrev = pNext;
      }
    }
    while ( (Scaleform::ListSafe<Scaleform::Render::Texture,Scaleform::Render::Texture> *)p_TextureInitQueue->Root.pNext != v4 );
    Scaleform::WaitCondition::NotifyAll(&this->pLocks.pObject->TextureInitWC);
  }
}

void __fastcall Scaleform::Render::GL::TextureManager::processTextureKillList(
        Scaleform::Render::GL::TextureManager *this)
{
  Scaleform::Render::TextureManagerLocks *pObject; // rbx
  Scaleform::Render::FenceResourceDestroyList<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry> *p_TextureResourceDestroyList; // rdi
  unsigned int v4; // ebp
  Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry *v5; // rsi
  Scaleform::Render::Fence *v6; // rax

  pObject = this->pLocks.pObject;
  Scaleform::Mutex::DoLock(&pObject->TextureMutex);
  p_TextureResourceDestroyList = &this->TextureResourceDestroyList;
  v4 = 0;
  while ( v4 < p_TextureResourceDestroyList->PendingFreeList.Data.Size )
  {
    v5 = &p_TextureResourceDestroyList->PendingFreeList.Data.Data[v4];
    v6 = v5->GPUFence.pObject;
    if ( v5->GPUFence.pObject && v6->HasData && v6->Data && Scaleform::Render::FenceImpl::IsPending(v6->Data, 1i64) )
    {
      ++v4;
    }
    else
    {
      Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::FreeResource(v5);
      if ( p_TextureResourceDestroyList->PendingFreeList.Data.Size == 1 )
      {
        Scaleform::ArrayData<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,Scaleform::AllocatorLH<Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry,67>,Scaleform::ArrayConstPolicy<8,8,0>>::Resize(
          &p_TextureResourceDestroyList->PendingFreeList.Data,
          0i64);
      }
      else
      {
        Scaleform::Render::GL::TextureManager::PendingTextureDestroyEntry::~PendingTextureDestroyEntry(&p_TextureResourceDestroyList->PendingFreeList.Data.Data[v4]);
        memmove(
          &p_TextureResourceDestroyList->PendingFreeList.Data.Data[v4],
          &p_TextureResourceDestroyList->PendingFreeList.Data.Data[v4 + 1],
          120 * (p_TextureResourceDestroyList->PendingFreeList.Data.Size - v4) - 120);
        --p_TextureResourceDestroyList->PendingFreeList.Data.Size;
      }
    }
  }
  Scaleform::Mutex::Unlock(&pObject->TextureMutex);
}

void __fastcall Scaleform::Render::GL::Texture::uploadImage(
        Scaleform::Render::GL::Texture *this,
        Scaleform::Render::ImageData *psource)
{
  Scaleform::Render::GL::Texture *v3; // rdi
  unsigned int v4; // esi
  unsigned int i; // ebx
  int v6; // edx
  Scaleform::Render::ImagePlane pplane; // [rsp+20h] [rbp-28h] BYREF

  v3 = this;
  v4 = 0;
  if ( this->TextureCount )
  {
    LOBYTE(this) = this->MipLevels;
    do
    {
      for ( i = 0; i < (unsigned int)this; ++i )
      {
        v6 = i * v3->TextureCount;
        memset(&pplane, 0, sizeof(pplane));
        Scaleform::Render::ImageData::GetPlane(psource, v4 + v6, &pplane);
        v3->Upload(v3, v4, i, &pplane);
        LODWORD(this) = v3->MipLevels;
      }
      ++v4;
    }
    while ( v4 < v3->TextureCount );
  }
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

