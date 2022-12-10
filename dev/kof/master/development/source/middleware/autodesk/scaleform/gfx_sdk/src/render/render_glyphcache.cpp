#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_boundbox.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hittest.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraypaged.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_fontcachehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/imagefiles/render_imagefile.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_listalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"

Scaleform::Render::GlyphTextureImage * Scaleform::Render::GlyphTextureImage::Create(Scaleform::MemoryHeap * heap, Scaleform::Render::TextureManager * texMan, Scaleform::Render::GlyphCache * cache, unsigned long textureId, const Scaleform::Render::Size<unsigned long> & size, unsigned long use); // 0x1403764D0
void Scaleform::Render::GlyphTextureImage::TextureLost(Scaleform::Render::Image::TextureLossReason reason); // 0x140378D40
bool Scaleform::Render::GlyphTextureMapper::Create(unsigned long method, Scaleform::MemoryHeap * heap, Scaleform::Render::TextureManager * texMan, Scaleform::Render::PrimitiveFillManager * fillMan, Scaleform::Render::GlyphCache * cache, unsigned long textureId, const Scaleform::Render::Size<unsigned long> & size); // 0x1403765C0
Scaleform::Render::ImagePlane * Scaleform::Render::GlyphTextureMapper::Map(); // 0x140377790
Scaleform::Render::GlyphCache::GlyphCache(Scaleform::MemoryHeap * heap); // 0x140375480
Scaleform::Render::GlyphCache::~GlyphCache(); // 0x140375A80
Scaleform::Render::GlyphQueue::~GlyphQueue(); // 0x140375CC0
void Scaleform::Render::GlyphCache::Destroy(); // 0x140377150
void Scaleform::Render::GlyphCache::ClearCache(); // 0x1403763E0
bool Scaleform::Render::GlyphCache::SetParams(const Scaleform::Render::GlyphCacheParams & params); // 0x140378B50
void Scaleform::Render::GlyphCache::initialize(); // 0x14037B160
void Scaleform::Render::GlyphCache::Initialize(Scaleform::Render::HAL * ren, Scaleform::Render::PrimitiveFillManager * fillMan); // 0x140377700
void Scaleform::Render::GlyphCache::OnBeginFrame(); // 0x140377800
void Scaleform::Render::GlyphCache::MergeCacheSlots(); // 0x1403777F0
void Scaleform::Render::StrokeScaler::Clear(); // 0x14002E7C0
void Scaleform::Render::GlyphCache::CleanUpFont(Scaleform::Render::FontCacheHandle * font); // 0x1403762C0
Scaleform::Render::PrimitiveFill * Scaleform::Render::GlyphCache::GetFill(Scaleform::Render::TextLayerType type, unsigned long textureId); // 0x1403773D0
Scaleform::Render::Image * Scaleform::Render::GlyphCache::GetImage(unsigned long textureId); // 0x140377560
void Scaleform::Render::GlyphCache::partialUpdateTextures(); // 0x14037B8B0
void Scaleform::Render::GlyphCache::copyImageData(Scaleform::Render::ImagePlane * pl, const unsigned char * data, unsigned long pitch, unsigned long dstX, unsigned long dstY, unsigned long w, unsigned long h); // 0x14037A600
bool Scaleform::Render::GlyphCache::updateTextureGlyph(const Scaleform::Render::GlyphNode * node); // 0x14037BFC0
void Scaleform::Render::GlyphCache::UnlockBuffers(); // 0x140378D70
void Scaleform::Render::GlyphCache::TextureLost(unsigned long textureId, unsigned long reason); // 0x140378C70
Scaleform::Render::FontCacheHandle * Scaleform::Render::GlyphCache::RegisterFont(Scaleform::Render::Font * font); // 0x1403789B0
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphCache::FindGlyph(Scaleform::Render::TextMeshProvider * tm, const Scaleform::Render::GlyphParam & gp); // 0x140377240
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphCache::allocateGlyph(Scaleform::Render::TextMeshProvider * tm, const Scaleform::Render::GlyphParam & gp, unsigned long w, unsigned long h); // 0x1403796F0
void Scaleform::Render::GlyphCache::UnpinAllSlots(); // 0x140378E50
void Scaleform::Render::GlyphCache::ApplyInUseList(); // 0x1403761C0
bool Scaleform::Render::GlyphCache::UpdatePinList(); // 0x140378EF0
void Scaleform::Render::GlyphCache::getGlyphBounds(Scaleform::Render::VectorGlyphShape * glyphShape, const Scaleform::Render::ShapeDataInterface * shapeData); // 0x14037AD20
bool Scaleform::Render::GlyphCache::isOuterContourCW(const Scaleform::Render::ShapeDataInterface * shape); // 0x14037B530
void Scaleform::Render::GlyphCache::copyAndTransformShape(Scaleform::Render::VectorGlyphShape * glyphShape, const Scaleform::Render::ToleranceParams & paramIn, const Scaleform::Render::ShapeDataInterface * srcShape, bool fauxBold, bool fauxItalic, unsigned long outline, float italicOffset, float nominalSize); // 0x140379830
Scaleform::Render::VectorGlyphShape * Scaleform::Render::GlyphCache::CreateGlyphShape(Scaleform::Render::GlyphRunData & data, const Scaleform::Render::ToleranceParams & param, unsigned long glyphIndex, float screenSize, bool fauxBold, bool fauxItalic, unsigned long outline, bool needsVectorShape); // 0x140376880
class Scaleform::Render::ImgBlurWrapperX
{
private:
	ImgBlurWrapperX(const Scaleform::Render::ImgBlurWrapperX &);
public:
	ImgBlurWrapperX(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
	unsigned long GetWidth();
	unsigned long GetHeight();
	unsigned char GetPixel(unsigned long, unsigned long);
	void CopySpanTo(unsigned long, unsigned long, unsigned long, const unsigned char *);
private:
	const Scaleform::Render::ImgBlurWrapperX & operator=(const Scaleform::Render::ImgBlurWrapperX &);
	unsigned char * Img; // 0x0
	unsigned long Pitch; // 0x8
	unsigned long Sx; // 0xC
	unsigned long Sy; // 0x10
	unsigned long W; // 0x14
	unsigned long H; // 0x18
};
class Scaleform::Render::ImgBlurWrapperY
{
private:
	ImgBlurWrapperY(const Scaleform::Render::ImgBlurWrapperY &);
public:
	ImgBlurWrapperY(unsigned char *, unsigned long, unsigned long, unsigned long, unsigned long, unsigned long);
	unsigned long GetWidth();
	unsigned long GetHeight();
	unsigned char GetPixel(unsigned long, unsigned long);
	void CopySpanTo(unsigned long, unsigned long, unsigned long, const unsigned char *);
private:
	const Scaleform::Render::ImgBlurWrapperY & operator=(const Scaleform::Render::ImgBlurWrapperY &);
	unsigned char * Img; // 0x0
	unsigned long Pitch; // 0x8
	unsigned long Sx; // 0xC
	unsigned long Sy; // 0x10
	unsigned long W; // 0x14
	unsigned long H; // 0x18
};
unsigned long Scaleform::Render::FontSizeRamp[29]; // 0x1409F9960
void(*Scaleform::Render::RasterGlyphVertex::ormat$initializer$::operator--)(); // 0x140739CD0
Scaleform::Render::VertexElement Scaleform::Render::RasterGlyphVertex::Elements[4]; // 0x1409F9920
Scaleform::Render::VertexFormat Scaleform::Render::RasterGlyphVertex::Format; // 0x1409F9940
const unsigned char Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >::Sizes[16]; // 0x14074BF48
void Scaleform::Render::RecursiveBlur<Scaleform::Render::ImgBlurWrapperX,Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>,Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::Render::ImgBlurWrapperX & img, float radius, Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy> & sum, Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & buf); // 0x140373FA0
void Scaleform::Render::RecursiveBlur<Scaleform::Render::ImgBlurWrapperY,Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>,Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> >(Scaleform::Render::ImgBlurWrapperY & img, float radius, Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy> & sum, Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> & buf); // 0x140374740
void Scaleform::Render::GlyphCache::recursiveBlur(unsigned char * img, unsigned long pitch, unsigned long sx, unsigned long sy, unsigned long w, unsigned long h, float rx, float ry); // 0x14037BBA0
void Scaleform::Render::GlyphCache::strengthenImage(unsigned char * img, unsigned long pitch, unsigned long sx, unsigned long sy, unsigned long w, unsigned long h, float ratio, long bias); // 0x14037BE00
void Scaleform::Render::GlyphCache::addShapeToRasterizer(const Scaleform::Render::ShapeDataInterface * shape, const Scaleform::Render::ToleranceParams & param, float scaleX, float scaleY); // 0x1403794C0
void Scaleform::Render::GlyphCache::addShapeAutoFit(const Scaleform::Render::ShapeDataInterface * shape, const Scaleform::Render::ToleranceParams & paramIn, unsigned long nomHeight, long lowerCaseTop, long upperCaseTop, float screenSize, float stretch); // 0x140378F90
float Scaleform::Render::GlyphCache::GetCachedFontSize(const Scaleform::Render::GlyphParam & gp, float screenSize, bool exactFit); // 0x1403772A0
float Scaleform::Render::GlyphCache::GetCachedShadowSize(float screenSize, const Scaleform::Render::GlyphRaster * ras); // 0x140377350
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphCache::getPrerasterizedGlyph(Scaleform::Render::GlyphRunData & data, Scaleform::Render::TextMeshProvider * tm, const Scaleform::Render::GlyphParam & gp); // 0x14037AF50
void Scaleform::Render::GlyphCache::filterScanline(unsigned char * sl, unsigned long w); // 0x14037AC40
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphCache::RasterizeGlyph(Scaleform::Render::HAL * hal, Scaleform::Render::GlyphRunData & data, Scaleform::Render::TextMeshProvider * tm, const Scaleform::Render::GlyphParam & gp); // 0x140377850
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphCache::createShadowFromRaster(Scaleform::Render::GlyphRunData & data, Scaleform::Render::TextMeshProvider * tm, const Scaleform::Render::GlyphParam & gp, float screenSize, const Scaleform::Render::GlyphRaster * ras); // 0x14037A6A0
Scaleform::Render::GlyphNode * Scaleform::Render::GlyphCache::RasterizeShadow(Scaleform::Render::HAL * hal, Scaleform::Render::GlyphRunData & data, Scaleform::Render::TextMeshProvider * tm, const Scaleform::Render::GlyphParam & gp, float screenSize, const Scaleform::Render::GlyphRaster * ras); // 0x140377CB0
void Scaleform::Render::GlyphCache::LogWarning(const char * fmt, ...); // 0x140377750
void Scaleform::Render::GlyphCache::cacheFullWarning(); // 0x140379800//decompilation failure at 1409F9960!
//decompilation failure at 140739CD0!
//decompilation failure at 1409F9920!
//decompilation failure at 1409F9940!
//decompilation failure at 14074BF48!
void __fastcall Scaleform::Render::RecursiveBlur<Scaleform::Render::ImgBlurWrapperX,Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>,Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>(
        Scaleform::Render::ImgBlurWrapperX *img,
        float radius,
        Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy> *sum,
        Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *buf)
{
  size_t W; // r12
  float v8; // xmm10_4
  float v9; // xmm0_4
  float v10; // xmm10_4
  int v11; // er13
  float v12; // xmm10_4
  unsigned __int64 v13; // rdi
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm10_4
  float v19; // xmm8_4
  float v20; // xmm3_4
  float v21; // xmm8_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm7_4
  float v27; // xmm9_4
  float v28; // xmm6_4
  float v29; // xmm8_4
  __int64 v30; // rdi
  signed int v31; // ebp
  __int64 v32; // r10
  size_t v33; // r11
  __int64 v34; // r9
  __int128 v35; // xmm5
  __int128 v36; // xmm4
  __int128 v37; // xmm3
  __int64 v38; // r8
  float *Data; // rdi
  int v40; // ecx
  unsigned __int64 i; // rcx
  int v42; // edx
  __int64 v43; // r8
  float v44; // xmm2_4
  __int64 v45; // rdi
  __int64 v46; // rcx
  __int128 v47; // xmm2
  __int64 v48; // rdi
  __int64 v49; // rcx
  unsigned __int64 v50; // rdx
  __int128 v51; // xmm1
  __int64 v52; // rcx
  __int64 v53; // rdx
  __int128 v54; // xmm1
  float v55; // xmm3_4
  float v56; // xmm4_4
  float v57; // xmm5_4
  __int64 v58; // rdx
  float v59; // xmm2_4
  float v60; // xmm2_4
  signed int H; // [rsp+C8h] [rbp+10h]

  W = img->W;
  v8 = fmaxf(0.62, radius);
  H = img->H;
  v9 = ceilf(v8);
  v10 = v8 * 0.5;
  v11 = (int)v9 + 3;
  if ( v10 >= 2.5 )
    v12 = (float)(v10 * 0.98711002) - 0.96329999;
  else
    v12 = 3.97156 - (float)(sqrtf(1.0 - (float)(v10 * 0.26890999)) * 4.1455402);
  v13 = (int)W + 2 * v11;
  v14 = (float)(v12 * v12) * 1.4281;
  v15 = (float)(v12 * v12) * 2.85619;
  v16 = (float)(v12 * v12) * -1.4281;
  v17 = (float)(v12 * v12) * v12;
  v18 = v12 * 2.4441299;
  v19 = v17;
  v20 = v17 * 1.26661;
  v21 = v19 * 0.422205;
  v22 = v16 - v20;
  v23 = (float)(v15 + v18) + v20;
  v24 = 1.0 / (float)((float)(v14 + (float)(v18 + 1.5782501)) + v21);
  v25 = (float)((float)(v22 + v23) + v21) * v24;
  v26 = v23 * v24;
  v27 = 1.0 - v25;
  v28 = v22 * v24;
  v29 = v21 * v24;
  Scaleform::ArrayData<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy>::Resize(&sum->Data, v13);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &buf->Data,
    v13);
  v30 = 0i64;
  v31 = 0;
  if ( H > 0 )
  {
    v32 = (int)W;
    v33 = W;
    v34 = (int)W - 1i64 + 2i64 * v11;
    do
    {
      v35 = 0i64;
      v36 = 0i64;
      LODWORD(v37) = 0;
      v38 = 0i64;
      if ( v11 > 0 && (unsigned int)v11 >= 4 )
      {
        Data = sum->Data.Data;
        if ( sum->Data.Data > (float *)sum || &sum->Data.Data[v11 - 1] < (float *)sum )
        {
          v40 = v11 - (v11 & 3);
          do
            v38 += 4i64;
          while ( v38 < v40 );
          for ( i = (unsigned __int64)(16i64 * ((v40 + 3) / 4)) >> 2; i; --i )
            *Data++ = 0.0;
        }
        v30 = 0i64;
      }
      if ( v38 < v11 )
      {
        if ( v11 - v38 >= 4 )
        {
          do
          {
            sum->Data.Data[v38] = 0.0;
            sum->Data.Data[v38 + 1] = 0.0;
            sum->Data.Data[v38 + 2] = 0.0;
            sum->Data.Data[v38 + 3] = 0.0;
            v38 += 4i64;
          }
          while ( v38 < v11 - 3i64 );
        }
        for ( ; v38 < v11; ++v38 )
          sum->Data.Data[v38] = 0.0;
      }
      v42 = 0;
      if ( (int)W >= 4 )
      {
        v43 = v11;
        v30 = 4i64 * (((unsigned int)(W - 4) >> 2) + 1);
        do
        {
          v44 = (float)((float)((float)((float)img->Img[v42 + img->Sx + img->Pitch * (v31 + img->Sy)] * v27)
                              + (float)(*(float *)&v35 * v26))
                      + (float)(*(float *)&v36 * v28))
              + (float)(*(float *)&v37 * v29);
          sum->Data.Data[v43] = v44;
          *(float *)&v37 = (float)((float)((float)((float)img->Img[v42 + img->Sx + img->Pitch * (v31 + img->Sy) + 1]
                                                 * v27)
                                         + (float)(v44 * v26))
                                 + (float)(*(float *)&v35 * v28))
                         + (float)(*(float *)&v36 * v29);
          LODWORD(sum->Data.Data[v43 + 1]) = v37;
          v36 = COERCE_UNSIGNED_INT((float)img->Img[v42 + img->Sx + img->Pitch * (v31 + img->Sy) + 2]);
          *(float *)&v36 = (float)((float)((float)(*(float *)&v36 * v27) + (float)(*(float *)&v37 * v26))
                                 + (float)(v44 * v28))
                         + (float)(*(float *)&v35 * v29);
          LODWORD(sum->Data.Data[v43 + 2]) = v36;
          v35 = COERCE_UNSIGNED_INT((float)img->Img[v42 + img->Sx + img->Pitch * (v31 + img->Sy) + 3]);
          *(float *)&v35 = (float)((float)((float)(*(float *)&v35 * v27) + (float)(*(float *)&v36 * v26))
                                 + (float)(*(float *)&v37 * v28))
                         + (float)(v44 * v29);
          v42 += 4;
          LODWORD(sum->Data.Data[v43 + 3]) = v35;
          v43 += 4i64;
        }
        while ( v42 < (int)W - 3 );
        v34 = (int)W - 1i64 + 2i64 * v11;
      }
      if ( v42 < (int)W )
      {
        v45 = v11 + v30;
        do
        {
          v46 = v42 + img->Sx + img->Pitch * (v31 + img->Sy);
          ++v42;
          v47 = COERCE_UNSIGNED_INT((float)img->Img[v46]);
          *(float *)&v47 = (float)((float)((float)(*(float *)&v47 * v27) + (float)(*(float *)&v35 * v26))
                                 + (float)(*(float *)&v36 * v28))
                         + (float)(*(float *)&v37 * v29);
          LODWORD(v37) = v36;
          v36 = v35;
          LODWORD(sum->Data.Data[v45]) = v47;
          v35 = v47;
          ++v45;
        }
        while ( v42 < (int)W );
      }
      v48 = 0i64;
      if ( v11 >= 4i64 )
      {
        v49 = v32 + v11;
        v50 = ((unsigned __int64)(v11 - 4i64) >> 2) + 1;
        v48 = 4 * v50;
        do
        {
          v51 = v36;
          *(float *)&v51 = (float)((float)(*(float *)&v36 * v28) + (float)(*(float *)&v35 * v26))
                         + (float)(*(float *)&v37 * v29);
          v37 = v35;
          LODWORD(sum->Data.Data[v49]) = v51;
          *(float *)&v37 = (float)((float)(*(float *)&v35 * v28) + (float)(*(float *)&v51 * v26))
                         + (float)(*(float *)&v36 * v29);
          v36 = v51;
          LODWORD(sum->Data.Data[v49 + 1]) = v37;
          *(float *)&v36 = (float)((float)(*(float *)&v51 * v28) + (float)(*(float *)&v37 * v26))
                         + (float)(*(float *)&v35 * v29);
          v35 = v37;
          LODWORD(sum->Data.Data[v49 + 2]) = v36;
          *(float *)&v35 = (float)((float)(*(float *)&v37 * v28) + (float)(*(float *)&v36 * v26))
                         + (float)(*(float *)&v51 * v29);
          LODWORD(sum->Data.Data[v49 + 3]) = v35;
          v49 += 4i64;
          --v50;
        }
        while ( v50 );
      }
      if ( v48 < v11 )
      {
        v52 = v48 + v32 + v11;
        v53 = v11 - v48;
        do
        {
          v54 = v36;
          *(float *)&v54 = (float)((float)(*(float *)&v36 * v28) + (float)(*(float *)&v35 * v26))
                         + (float)(*(float *)&v37 * v29);
          LODWORD(v37) = v36;
          v36 = v35;
          LODWORD(sum->Data.Data[v52]) = v54;
          v35 = v54;
          ++v52;
          --v53;
        }
        while ( v53 );
      }
      v55 = 0.0;
      v56 = 0.0;
      v57 = 0.0;
      v58 = v34;
      if ( v34 >= v11 )
      {
        if ( v34 - v11 + 1 >= 4 )
        {
          do
          {
            v59 = (float)((float)((float)(v27 * sum->Data.Data[v58]) + (float)(v57 * v26)) + (float)(v56 * v28))
                + (float)(v55 * v29);
            buf->Data.Data[v58] = (int)(float)(v59 + 0.5);
            v55 = (float)((float)((float)(v27 * sum->Data.Data[v58 - 1]) + (float)(v59 * v26)) + (float)(v57 * v28))
                + (float)(v56 * v29);
            buf->Data.Data[v58 - 1] = (int)(float)(v55 + 0.5);
            v56 = (float)((float)((float)(v27 * sum->Data.Data[v58 - 2]) + (float)(v55 * v26)) + (float)(v59 * v28))
                + (float)(v57 * v29);
            buf->Data.Data[v58 - 2] = (int)(float)(v56 + 0.5);
            v57 = (float)((float)((float)(v27 * sum->Data.Data[v58 - 3]) + (float)(v56 * v26)) + (float)(v55 * v28))
                + (float)(v59 * v29);
            buf->Data.Data[v58 - 3] = (int)(float)(v57 + 0.5);
            v58 -= 4i64;
          }
          while ( v58 >= v11 + 3i64 );
        }
        for ( ; v58 >= v11; --v58 )
        {
          v60 = (float)((float)((float)(v27 * sum->Data.Data[v58]) + (float)(v57 * v26)) + (float)(v56 * v28))
              + (float)(v55 * v29);
          v55 = v56;
          v56 = v57;
          v57 = v60;
          buf->Data.Data[v58] = (int)(float)(v60 + 0.5);
        }
      }
      memmove(&img->Img[img->Sx + (unsigned __int64)(img->Pitch * (v31 + img->Sy))], &buf->Data.Data[v11], v33);
      v34 = (int)W - 1i64 + 2i64 * v11;
      ++v31;
      v33 = W;
      v32 = (int)W;
      v30 = 0i64;
    }
    while ( v31 < H );
  }
}

void __fastcall Scaleform::Render::RecursiveBlur<Scaleform::Render::ImgBlurWrapperY,Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>,Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>(
        Scaleform::Render::ImgBlurWrapperY *img,
        float radius,
        Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy> *sum,
        Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *buf)
{
  __int64 H; // r15
  float v8; // xmm10_4
  float v9; // xmm0_4
  float v10; // xmm10_4
  int v11; // ebp
  float v12; // xmm10_4
  unsigned __int64 v13; // rdi
  float v14; // xmm1_4
  float v15; // xmm7_4
  float v16; // xmm6_4
  float v17; // xmm3_4
  float v18; // xmm10_4
  float v19; // xmm8_4
  float v20; // xmm3_4
  float v21; // xmm8_4
  float v22; // xmm6_4
  float v23; // xmm7_4
  float v24; // xmm2_4
  float v25; // xmm0_4
  float v26; // xmm7_4
  float v27; // xmm9_4
  float v28; // xmm6_4
  float v29; // xmm8_4
  signed int v30; // er11
  __int64 v31; // rdi
  signed int i; // er10
  __int128 v33; // xmm5
  __int128 v34; // xmm4
  __int128 v35; // xmm3
  __int64 v36; // r8
  float *Data; // rdi
  int v38; // ecx
  unsigned __int64 j; // rcx
  int v40; // edx
  __int64 v41; // r8
  float v42; // xmm2_4
  __int64 v43; // rdi
  unsigned int v44; // ecx
  __int128 v45; // xmm2
  __int64 v46; // rdi
  __int64 v47; // rcx
  unsigned __int64 v48; // rdx
  __int128 v49; // xmm1
  __int64 v50; // rcx
  __int64 v51; // rdx
  __int128 v52; // xmm1
  float v53; // xmm3_4
  float v54; // xmm4_4
  float v55; // xmm5_4
  __int64 v56; // rdx
  float v57; // xmm2_4
  float v58; // xmm2_4
  int v59; // edi
  unsigned __int8 *v60; // rdx
  unsigned __int8 *v61; // rcx
  unsigned __int8 v62; // al
  unsigned int W; // [rsp+B8h] [rbp+10h]

  H = (int)img->H;
  v8 = fmaxf(0.62, radius);
  W = img->W;
  v9 = ceilf(v8);
  v10 = v8 * 0.5;
  v11 = (int)v9 + 3;
  if ( v10 >= 2.5 )
    v12 = (float)(v10 * 0.98711002) - 0.96329999;
  else
    v12 = 3.97156 - (float)(sqrtf(1.0 - (float)(v10 * 0.26890999)) * 4.1455402);
  v13 = (int)H + 2 * v11;
  v14 = (float)(v12 * v12) * 1.4281;
  v15 = (float)(v12 * v12) * 2.85619;
  v16 = (float)(v12 * v12) * -1.4281;
  v17 = (float)(v12 * v12) * v12;
  v18 = v12 * 2.4441299;
  v19 = v17;
  v20 = v17 * 1.26661;
  v21 = v19 * 0.422205;
  v22 = v16 - v20;
  v23 = (float)(v15 + v18) + v20;
  v24 = 1.0 / (float)((float)(v14 + (float)(v18 + 1.5782501)) + v21);
  v25 = (float)((float)(v22 + v23) + v21) * v24;
  v26 = v23 * v24;
  v27 = 1.0 - v25;
  v28 = v22 * v24;
  v29 = v21 * v24;
  Scaleform::ArrayData<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy>::Resize(&sum->Data, v13);
  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &buf->Data,
    v13);
  v30 = W;
  v31 = 0i64;
  for ( i = 0; i < v30; v31 = 0i64 )
  {
    v33 = 0i64;
    v34 = 0i64;
    LODWORD(v35) = 0;
    v36 = 0i64;
    if ( v11 > 0 && (unsigned int)v11 >= 4 )
    {
      Data = sum->Data.Data;
      if ( sum->Data.Data > (float *)sum || &sum->Data.Data[v11 - 1] < (float *)sum )
      {
        v38 = v11 - (v11 & 3);
        do
          v36 += 4i64;
        while ( v36 < v38 );
        for ( j = (unsigned __int64)(16i64 * ((v38 + 3) / 4)) >> 2; j; --j )
          *Data++ = 0.0;
      }
      v31 = 0i64;
    }
    if ( v36 < v11 )
    {
      if ( v11 - v36 >= 4 )
      {
        do
        {
          sum->Data.Data[v36] = 0.0;
          sum->Data.Data[v36 + 1] = 0.0;
          sum->Data.Data[v36 + 2] = 0.0;
          sum->Data.Data[v36 + 3] = 0.0;
          v36 += 4i64;
        }
        while ( v36 < v11 - 3i64 );
      }
      for ( ; v36 < v11; ++v36 )
        sum->Data.Data[v36] = 0.0;
    }
    v40 = 0;
    if ( (int)H >= 4 )
    {
      v41 = v11;
      v31 = 4i64 * (((unsigned int)(H - 4) >> 2) + 1);
      do
      {
        v42 = (float)((float)((float)((float)img->Img[i + img->Sx + img->Pitch * (v40 + img->Sy)] * v27)
                            + (float)(*(float *)&v33 * v26))
                    + (float)(*(float *)&v34 * v28))
            + (float)(*(float *)&v35 * v29);
        sum->Data.Data[v41] = v42;
        *(float *)&v35 = (float)((float)((float)((float)img->Img[i + img->Sx + img->Pitch * (v40 + img->Sy + 1)] * v27)
                                       + (float)(v42 * v26))
                               + (float)(*(float *)&v33 * v28))
                       + (float)(*(float *)&v34 * v29);
        LODWORD(sum->Data.Data[v41 + 1]) = v35;
        v34 = COERCE_UNSIGNED_INT((float)img->Img[i + img->Sx + img->Pitch * (v40 + img->Sy + 2)]);
        *(float *)&v34 = (float)((float)((float)(*(float *)&v34 * v27) + (float)(*(float *)&v35 * v26))
                               + (float)(v42 * v28))
                       + (float)(*(float *)&v33 * v29);
        LODWORD(sum->Data.Data[v41 + 2]) = v34;
        v33 = COERCE_UNSIGNED_INT((float)img->Img[i + img->Sx + img->Pitch * (v40 + img->Sy + 3)]);
        *(float *)&v33 = (float)((float)((float)(*(float *)&v33 * v27) + (float)(*(float *)&v34 * v26))
                               + (float)(*(float *)&v35 * v28))
                       + (float)(v42 * v29);
        v40 += 4;
        LODWORD(sum->Data.Data[v41 + 3]) = v33;
        v41 += 4i64;
      }
      while ( v40 < (int)H - 3 );
      v30 = W;
    }
    if ( v40 < (int)H )
    {
      v43 = v11 + v31;
      do
      {
        v44 = img->Pitch * (v40 + img->Sy);
        ++v40;
        v45 = COERCE_UNSIGNED_INT((float)img->Img[i + img->Sx + v44]);
        *(float *)&v45 = (float)((float)((float)(*(float *)&v45 * v27) + (float)(*(float *)&v33 * v26))
                               + (float)(*(float *)&v34 * v28))
                       + (float)(*(float *)&v35 * v29);
        LODWORD(v35) = v34;
        v34 = v33;
        LODWORD(sum->Data.Data[v43]) = v45;
        v33 = v45;
        ++v43;
      }
      while ( v40 < (int)H );
    }
    v46 = 0i64;
    if ( v11 >= 4i64 )
    {
      v47 = v11 + H;
      v48 = ((unsigned __int64)(v11 - 4i64) >> 2) + 1;
      v46 = 4 * v48;
      do
      {
        v49 = v34;
        *(float *)&v49 = (float)((float)(*(float *)&v34 * v28) + (float)(*(float *)&v33 * v26))
                       + (float)(*(float *)&v35 * v29);
        v35 = v33;
        LODWORD(sum->Data.Data[v47]) = v49;
        *(float *)&v35 = (float)((float)(*(float *)&v33 * v28) + (float)(*(float *)&v49 * v26))
                       + (float)(*(float *)&v34 * v29);
        v34 = v49;
        LODWORD(sum->Data.Data[v47 + 1]) = v35;
        *(float *)&v34 = (float)((float)(*(float *)&v49 * v28) + (float)(*(float *)&v35 * v26))
                       + (float)(*(float *)&v33 * v29);
        v33 = v35;
        LODWORD(sum->Data.Data[v47 + 2]) = v34;
        *(float *)&v33 = (float)((float)(*(float *)&v35 * v28) + (float)(*(float *)&v34 * v26))
                       + (float)(*(float *)&v49 * v29);
        LODWORD(sum->Data.Data[v47 + 3]) = v33;
        v47 += 4i64;
        --v48;
      }
      while ( v48 );
    }
    if ( v46 < v11 )
    {
      v50 = v46 + v11 + H;
      v51 = v11 - v46;
      do
      {
        v52 = v34;
        *(float *)&v52 = (float)((float)(*(float *)&v34 * v28) + (float)(*(float *)&v33 * v26))
                       + (float)(*(float *)&v35 * v29);
        LODWORD(v35) = v34;
        v34 = v33;
        LODWORD(sum->Data.Data[v50]) = v52;
        v33 = v52;
        ++v50;
        --v51;
      }
      while ( v51 );
    }
    v53 = 0.0;
    v54 = 0.0;
    v55 = 0.0;
    v56 = H - 1 + 2i64 * v11;
    if ( v56 >= v11 )
    {
      if ( H + 2i64 * v11 - v11 >= 4 )
      {
        do
        {
          v57 = (float)((float)((float)(v27 * sum->Data.Data[v56]) + (float)(v55 * v26)) + (float)(v54 * v28))
              + (float)(v53 * v29);
          buf->Data.Data[v56] = (int)(float)(v57 + 0.5);
          v53 = (float)((float)((float)(v27 * sum->Data.Data[v56 - 1]) + (float)(v57 * v26)) + (float)(v55 * v28))
              + (float)(v54 * v29);
          buf->Data.Data[v56 - 1] = (int)(float)(v53 + 0.5);
          v54 = (float)((float)((float)(v27 * sum->Data.Data[v56 - 2]) + (float)(v53 * v26)) + (float)(v57 * v28))
              + (float)(v55 * v29);
          buf->Data.Data[v56 - 2] = (int)(float)(v54 + 0.5);
          v55 = (float)((float)((float)(v27 * sum->Data.Data[v56 - 3]) + (float)(v54 * v26)) + (float)(v53 * v28))
              + (float)(v57 * v29);
          buf->Data.Data[v56 - 3] = (int)(float)(v55 + 0.5);
          v56 -= 4i64;
        }
        while ( v56 >= v11 + 3i64 );
      }
      for ( ; v56 >= v11; --v56 )
      {
        v58 = (float)((float)((float)(v27 * sum->Data.Data[v56]) + (float)(v55 * v26)) + (float)(v54 * v28))
            + (float)(v53 * v29);
        v53 = v54;
        v54 = v55;
        v55 = v58;
        buf->Data.Data[v56] = (int)(float)(v58 + 0.5);
      }
    }
    v59 = H;
    v60 = &buf->Data.Data[v11];
    v61 = &img->Img[i + img->Sx + (unsigned __int64)(img->Pitch * img->Sy)];
    do
    {
      v62 = *v60++;
      *v61 = v62;
      v61 += img->Pitch;
      --v59;
    }
    while ( v59 );
    ++i;
  }
}

char __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::RemoveAlt<Scaleform::Render::VectorGlyphShape *>(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > *this,
        Scaleform::Render::VectorGlyphShape *const *key)
{
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *pTable; // r8
  Scaleform::Render::VectorGlyphShape *v5; // r10
  unsigned __int64 v6; // rcx
  unsigned __int64 NextInChain; // rax
  unsigned __int64 v8; // rdi
  bool v9; // zf
  Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *v10; // rdi
  unsigned __int64 v11; // r9
  __int64 v12; // rdx
  __int64 v13; // rax
  char *v14; // rbx

  pTable = this->pTable;
  if ( !this->pTable )
    return 0;
  v5 = *key;
  v6 = (unsigned __int64)(*key)->Key.pFont >> 6;
  NextInChain = pTable->SizeMask & ((unsigned __int64)v5->Key.pFont ^ v6 ^ v5->Key.GlyphIndex ^ v5->Key.HintedVector ^ v5->Key.HintedRaster ^ v5->Key.Flags ^ (unsigned __int64)v5->Key.Outline);
  v8 = NextInChain + 2 * (NextInChain + 1);
  v9 = *(&pTable->EntryCount + v8) == -2i64;
  v10 = (Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *)(&pTable->EntryCount + v8);
  if ( v9 || v10->HashValue != NextInChain )
    return 0;
  v11 = pTable->SizeMask & ((unsigned __int64)v5->Key.pFont ^ v6 ^ v5->Key.GlyphIndex ^ v5->Key.HintedVector ^ v5->Key.HintedRaster ^ v5->Key.Flags ^ (unsigned __int64)v5->Key.Outline);
  v12 = -1i64;
  while ( v10->HashValue != v11 || v10->Value.pObject != v5 )
  {
    v12 = NextInChain;
    NextInChain = v10->NextInChain;
    if ( v10->NextInChain == -1 )
      return 0;
    v10 = (Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *)(&pTable[NextInChain + 1].EntryCount + NextInChain);
  }
  v9 = v11 == NextInChain;
  v13 = v10->NextInChain;
  if ( v9 )
  {
    if ( v13 != -1 )
    {
      v14 = (char *)pTable + 24 * v13;
      Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>::Clear(v10);
      Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>(
        v10,
        (const Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *)(v14 + 16));
      v10 = (Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *)(v14 + 16);
    }
  }
  else
  {
    *(&pTable[1].EntryCount + 3 * v12) = v13;
  }
  Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>::Clear(v10);
  --this->pTable->EntryCount;
  return 1;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::add<Scaleform::Render::VectorGlyphShape *>(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > *this,
        void *pmemAddr,
        Scaleform::Render::VectorGlyphShape *const *key,
        unsigned __int64 hashValue)
{
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *pTable; // rax
  void *v7; // r9
  unsigned __int64 v9; // r8
  unsigned __int64 SizeMask; // r8
  unsigned __int64 v11; // rsi
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *v12; // rdx
  __int64 v13; // r8
  char *v14; // rbx
  Scaleform::Render::VectorGlyphShape *v15; // rdi
  __int64 v16; // rdi
  Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *v17; // r15
  __int64 v18; // rax
  Scaleform::Render::VectorGlyphShape *v19; // rbp
  __int64 v20; // rcx
  __int64 v21; // r14
  bool v22; // zf
  unsigned __int64 *i; // r14
  __int64 v24; // r14
  __int64 v25; // rcx
  Scaleform::Render::VectorGlyphShape *v26; // rdi
  __int64 v27; // rcx

  pTable = this->pTable;
  v7 = pmemAddr;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount <= 4 * SizeMask + 4 )
      goto LABEL_6;
    v9 = 2 * SizeMask + 2;
  }
  else
  {
    v9 = 8i64;
  }
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::setRawCapacity(
    this,
    pmemAddr,
    v9);
LABEL_6:
  v11 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  v12 = this->pTable;
  v13 = *(&this->pTable[1].EntryCount + 3 * v11);
  v14 = (char *)this->pTable + 24 * v11;
  if ( v13 == -2 )
  {
    v15 = *key;
    if ( *key )
      ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *, __int64, void *))v15->AddRef)(
        &v15->Scaleform::Render::MeshProvider,
        v12,
        -2i64,
        v7);
    *((_QWORD *)v14 + 2) = -1i64;
    *((_QWORD *)v14 + 3) = 0i64;
    if ( v15 )
      ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *, __int64, void *))v15->AddRef)(
        &v15->Scaleform::Render::MeshProvider,
        v12,
        v13,
        v7);
    *((_QWORD *)v14 + 4) = v15;
    if ( v15 )
      ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *, __int64, void *))v15->Release)(
        &v15->Scaleform::Render::MeshProvider,
        v12,
        v13,
        v7);
  }
  else
  {
    v16 = v11;
    do
      v16 = v12->SizeMask & (v16 + 1);
    while ( *(&v12[1].EntryCount + 3 * v16) != -2i64 );
    v17 = (Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *)(&v12[v16 + 1].EntryCount + v16);
    v18 = *((_QWORD *)v14 + 3);
    if ( v18 == v11 )
    {
      if ( v17 )
        Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>(
          v17,
          (const Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *)(v14 + 16));
      v19 = *key;
      if ( v19 )
        ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *, __int64, void *))v19->AddRef)(
          &v19->Scaleform::Render::MeshProvider,
          v12,
          v13,
          v7);
      v20 = *((_QWORD *)v14 + 4);
      if ( v20 )
        (*(void (__fastcall **)(__int64, Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *, __int64, void *))(*(_QWORD *)(v20 + 16) + 16i64))(
          v20 + 16,
          v12,
          v13,
          v7);
      *((_QWORD *)v14 + 4) = v19;
      *((_QWORD *)v14 + 2) = v16;
    }
    else
    {
      v21 = v18 + 2 * (v18 + 1);
      v22 = *(&v12->EntryCount + v21) == v11;
      for ( i = &v12->EntryCount + v21; !v22; i = &v12->EntryCount + v24 )
      {
        v24 = *i + 2 * (*i + 1);
        v22 = *(&v12->EntryCount + v24) == v11;
      }
      if ( v17 )
      {
        v17->NextInChain = v13;
        v17->HashValue = *((_QWORD *)v14 + 3);
        v25 = *((_QWORD *)v14 + 4);
        if ( v25 )
          (*(void (__fastcall **)(__int64, Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *, __int64, void *))(*(_QWORD *)(v25 + 16) + 8i64))(
            v25 + 16,
            v12,
            v13,
            v7);
        v17->Value.pObject = (Scaleform::Render::VectorGlyphShape *)*((_QWORD *)v14 + 4);
      }
      *i = v16;
      v26 = *key;
      if ( *key )
        ((void (__fastcall *)(Scaleform::Render::MeshProvider *, Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *, __int64, void *))v26->AddRef)(
          &v26->Scaleform::Render::MeshProvider,
          v12,
          v13,
          v7);
      v27 = *((_QWORD *)v14 + 4);
      if ( v27 )
        (*(void (__fastcall **)(__int64, Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *, __int64, void *))(*(_QWORD *)(v27 + 16) + 16i64))(
          v27 + 16,
          v12,
          v13,
          v7);
      *((_QWORD *)v14 + 4) = v26;
      *((_QWORD *)v14 + 2) = -1i64;
    }
  }
  *((_QWORD *)v14 + 3) = v11;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::add<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>>(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > *this,
        void *pmemAddr,
        const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> *key,
        unsigned __int64 hashValue)
{
  unsigned __int64 v7; // r14
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *pTable; // rdx
  __int64 v9; // r8
  char *v10; // rdi
  __int64 v11; // rbx
  Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *v12; // r15
  __int64 v13; // rax
  __int64 v14; // rcx
  __int64 v15; // rsi
  bool v16; // zf
  unsigned __int64 *i; // rsi
  __int64 v18; // rsi
  __int64 v19; // rcx
  __int64 v20; // rcx

  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::CheckExpand(
    this,
    pmemAddr);
  v7 = this->pTable->SizeMask & hashValue;
  ++this->pTable->EntryCount;
  pTable = this->pTable;
  v9 = *(&this->pTable[1].EntryCount + 3 * v7);
  v10 = (char *)this->pTable + 24 * v7;
  if ( v9 == -2 )
  {
    *((_QWORD *)v10 + 2) = -1i64;
    *((_QWORD *)v10 + 3) = 0i64;
    if ( key->pObject )
      key->pObject->AddRef(&key->pObject->Scaleform::Render::MeshProvider);
    *((Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> *)v10 + 4) = (Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>)key->pObject;
    *((_QWORD *)v10 + 3) = v7;
  }
  else
  {
    v11 = v7;
    do
      v11 = pTable->SizeMask & (v11 + 1);
    while ( *(&pTable[1].EntryCount + 3 * v11) != -2i64 );
    v12 = (Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *)(&pTable[v11 + 1].EntryCount + v11);
    v13 = *((_QWORD *)v10 + 3);
    if ( v13 == v7 )
    {
      if ( v12 )
        Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>(
          v12,
          (const Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *)(v10 + 16));
      if ( key->pObject )
        key->pObject->AddRef(&key->pObject->Scaleform::Render::MeshProvider);
      v14 = *((_QWORD *)v10 + 4);
      if ( v14 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v14 + 16) + 16i64))(v14 + 16);
      *((Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> *)v10 + 4) = (Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>)key->pObject;
      *((_QWORD *)v10 + 2) = v11;
    }
    else
    {
      v15 = v13 + 2 * (v13 + 1);
      v16 = *(&pTable->EntryCount + v15) == v7;
      for ( i = &pTable->EntryCount + v15; !v16; i = &pTable->EntryCount + v18 )
      {
        v18 = *i + 2 * (*i + 1);
        v16 = *(&pTable->EntryCount + v18) == v7;
      }
      if ( v12 )
      {
        v12->NextInChain = v9;
        v12->HashValue = *((_QWORD *)v10 + 3);
        v19 = *((_QWORD *)v10 + 4);
        if ( v19 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v19 + 16) + 8i64))(v19 + 16);
        v12->Value.pObject = (Scaleform::Render::VectorGlyphShape *)*((_QWORD *)v10 + 4);
      }
      *i = v11;
      if ( key->pObject )
        key->pObject->AddRef(&key->pObject->Scaleform::Render::MeshProvider);
      v20 = *((_QWORD *)v10 + 4);
      if ( v20 )
        (*(void (__fastcall **)(__int64))(*(_QWORD *)(v20 + 16) + 16i64))(v20 + 16);
      *((Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> *)v10 + 4) = (Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>)key->pObject;
      *((_QWORD *)v10 + 2) = -1i64;
    }
    *((_QWORD *)v10 + 3) = v7;
  }
}

void __fastcall Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>(
        Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *this,
        const Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *e)
{
  Scaleform::Render::VectorGlyphShape *pObject; // rcx

  this->NextInChain = e->NextInChain;
  this->HashValue = e->HashValue;
  pObject = e->Value.pObject;
  if ( pObject )
    pObject->AddRef(&pObject->Scaleform::Render::MeshProvider);
  this->Value.pObject = e->Value.pObject;
}

void __fastcall Scaleform::Render::FontCacheHandleManager::FontCacheHandleManager(
        Scaleform::Render::FontCacheHandleManager *this,
        Scaleform::MemoryHeap *renderHeap,
        Scaleform::Render::GlyphCache *q)
{
  __int64 v6; // r9
  Scaleform::List<Scaleform::Render::FontCacheHandle,Scaleform::Render::FontCacheHandle,Scaleform::ListNode<Scaleform::Render::FontCacheHandle> > *Fonts; // rax

  this->__vftable = (Scaleform::Render::FontCacheHandleManager_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  this->RefCount = 1;
  this->__vftable = (Scaleform::Render::FontCacheHandleManager_vtbl *)&Scaleform::Render::FontCacheHandleManager::`vftable';
  Scaleform::Lock::Lock(&this->FontLock, 0);
  v6 = 2i64;
  Fonts = this->Fonts;
  do
  {
    Fonts->Root.pPrev = (Scaleform::Render::FontCacheHandle *)Fonts;
    Fonts->Root.pNext = (Scaleform::Render::FontCacheHandle *)Fonts;
    ++Fonts;
    --v6;
  }
  while ( v6 );
  this->pRenderHeap = renderHeap;
  this->pCache = q;
}

void __fastcall Scaleform::Render::GlyphCache::GlyphCache(
        Scaleform::Render::GlyphCache *this,
        Scaleform::MemoryHeap *heap)
{
  int v2; // esi
  int v3; // ebp
  __int64 v6; // r8
  Scaleform::Render::GlyphTextureMapper *Textures; // rdx
  unsigned __int64 *p_Pitch; // rcx
  unsigned __int64 *v9; // rax
  unsigned __int8 *v10; // r8
  unsigned int v11; // edx
  Scaleform::Log *GlobalLog; // rax

  v2 = 0;
  this->Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::GlyphCache_vtbl *)&Scaleform::RefCountImplCore::`vftable';
  v3 = 1;
  this->RefCount = 1;
  this->Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::GlyphCache_vtbl *)&Scaleform::Render::GlyphCache::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2>'};
  this->Scaleform::Render::CacheBase::__vftable = (Scaleform::Render::CacheBase_vtbl *)&Scaleform::Render::GlyphCache::`vftable'{for `Scaleform::Render::CacheBase'};
  v6 = 32i64;
  this->Scaleform::Render::GlyphCacheConfig::__vftable = (Scaleform::Render::GlyphCacheConfig_vtbl *)&Scaleform::Render::GlyphCache::`vftable'{for `Scaleform::Render::GlyphCacheConfig'};
  this->Param.TextureWidth = 1024;
  this->Param.TextureHeight = 1024;
  this->Param.NumTextures = 1;
  this->Param.MaxSlotHeight = 48;
  this->Param.SlotPadding = 2;
  this->Param.TexUpdWidth = 256;
  this->Param.TexUpdHeight = 512;
  this->Param.MaxRasterScale = 1.0;
  this->Param.MaxVectorCacheSize = 500;
  this->Param.FauxItalicAngle = 0.25;
  this->Param.FauxBoldRatio = 0.045000002;
  this->Param.OutlineRatio = 0.0099999998;
  this->Param.ShadowQuality = 1.0;
  *(_WORD *)&this->Param.UseAutoFit = 257;
  this->Param.FenceWaitOnFullCache = 1;
  this->pHeap = heap;
  Textures = this->Textures;
  this->pRenderer = 0i64;
  this->pFillMan = 0i64;
  this->pTexMan = 0i64;
  *(_QWORD *)&this->TextureWidth = 0i64;
  *(_QWORD *)&this->MaxNumTextures = 0i64;
  *(_QWORD *)&this->SlotPadding = 0i64;
  this->ScaleV = 0.0;
  this->ShadowQuality = 1.0;
  p_Pitch = &this->Textures[0].Data.Plane0.Pitch;
  do
  {
    Textures->Valid = 0;
    v9 = p_Pitch - 1;
    *((_DWORD *)p_Pitch - 13) = 0;
    ++Textures;
    *(p_Pitch - 6) = 0i64;
    *(p_Pitch - 3) = (unsigned __int64)(p_Pitch - 1);
    *(p_Pitch - 5) = 0i64;
    *((_DWORD *)p_Pitch - 8) = 0x10000;
    *(p_Pitch - 2) = 0i64;
    *((_DWORD *)p_Pitch - 1) = 0;
    *p_Pitch = 0i64;
    p_Pitch[1] = 0i64;
    p_Pitch[2] = 0i64;
    p_Pitch += 14;
    *(_DWORD *)v9 = 0;
    *(p_Pitch - 11) = 0i64;
    *(p_Pitch - 10) = 0i64;
    *(p_Pitch - 9) = 0i64;
    *((_BYTE *)p_Pitch - 64) = 0;
    *((_DWORD *)p_Pitch - 15) = 0;
    --v6;
  }
  while ( v6 );
  Scaleform::Render::GlyphQueue::GlyphQueue(&this->Queue);
  *(_QWORD *)&this->Method = 0i64;
  *(_QWORD *)&this->UpdatePacker.Height = 0i64;
  *(_QWORD *)&this->UpdatePacker.LastY = 0i64;
  this->UpdateBuffer.pObject = 0i64;
  this->GlyphsToUpdate.Size = 0i64;
  this->GlyphsToUpdate.NumPages = 0i64;
  this->GlyphsToUpdate.MaxPages = 0i64;
  this->GlyphsToUpdate.Pages = 0i64;
  this->RectsToUpdate.Data = 0i64;
  this->RectsToUpdate.Size = 0i64;
  this->RectsToUpdate.Capacity = 0i64;
  this->TextInUse.Root.pPrev = (Scaleform::Render::TextMeshProvider *)&this->RectsToUpdate.Capacity;
  this->TextInUse.Root.pNext = (Scaleform::Render::TextMeshProvider *)&this->RectsToUpdate.Capacity;
  this->TextInPin.Root.pPrev = (Scaleform::Render::TextMeshProvider *)&this->TextInUse.Root.8;
  this->TextInPin.Root.pNext = (Scaleform::Render::TextMeshProvider *)&this->TextInUse.Root.8;
  this->Notifier.__vftable = (Scaleform::Render::GlyphCache::EvictNotifier_vtbl *)&Scaleform::Render::GlyphCache::EvictNotifier::`vftable';
  this->pFontHandleManager.pObject = 0i64;
  this->pRQCaches = 0i64;
  this->VectorGlyphShapeList.Root.pPrev = (Scaleform::Render::VectorGlyphShape *)&this->Notifier;
  this->VectorGlyphShapeList.Root.pNext = (Scaleform::Render::VectorGlyphShape *)&this->Notifier;
  this->VectorGlyphCache.pTable = 0i64;
  this->pSolidFill.pObject = 0i64;
  this->pMaskFill.pObject = 0i64;
  Scaleform::Render::GlyphFitter::GlyphFitter(&this->Fitter, heap, 1024);
  Scaleform::Render::Rasterizer::Rasterizer(&this->Ras, heap);
  Scaleform::Render::GlyphScanlineFilter::GlyphScanlineFilter(&this->ScanlineFilter, 0.8888889, 0.22222222, 0.022222223);
  this->RasterData.Data.Data = 0i64;
  this->RasterData.Data.Size = 0i64;
  this->RasterData.Data.Policy.Capacity = 0i64;
  this->RasterDataSrc.Data.Data = 0i64;
  this->RasterDataSrc.Data.Size = 0i64;
  this->RasterDataSrc.Data.Policy.Capacity = 0i64;
  this->KnockOutCopy.Data.Data = 0i64;
  this->KnockOutCopy.Data.Size = 0i64;
  this->KnockOutCopy.Data.Policy.Capacity = 0i64;
  this->RasterPitch = 0;
  this->BlurStack.Data.Data = 0i64;
  this->BlurStack.Data.Size = 0i64;
  this->BlurStack.Data.Policy.Capacity = 0i64;
  this->BlurSum.Data.Data = 0i64;
  this->BlurSum.Data.Size = 0i64;
  this->BlurSum.Data.Policy.Capacity = 0i64;
  this->LHeap1.pHeap = heap;
  this->LHeap1.Granularity = 0x2000i64;
  this->LHeap1.pPagePool = 0i64;
  this->LHeap1.pLastPage = 0i64;
  this->LHeap1.MaxPages = 0i64;
  this->LHeap2.pHeap = heap;
  this->LHeap2.Granularity = 0x2000i64;
  this->LHeap2.pPagePool = 0i64;
  this->LHeap2.pLastPage = 0i64;
  this->LHeap2.MaxPages = 0i64;
  Scaleform::Render::Stroker::Stroker(&this->mStroker, &this->LHeap2);
  this->TmpPath1.__vftable = (Scaleform::Render::VertexPath_vtbl *)&Scaleform::Render::VertexPath::`vftable';
  this->TmpPath1.Vertices.pHeap = &this->LHeap1;
  this->TmpPath1.Vertices.Size = 0i64;
  this->TmpPath1.Vertices.NumPages = 0i64;
  this->TmpPath1.Vertices.MaxPages = 0i64;
  this->TmpPath1.Vertices.Pages = 0i64;
  this->TmpPath1.Paths.pHeap = &this->LHeap1;
  this->TmpPath1.Paths.Size = 0i64;
  this->TmpPath1.Paths.NumPages = 0i64;
  v10 = &this->FontSizeMap[1];
  this->TmpPath1.Paths.MaxPages = 0i64;
  this->TmpPath1.Paths.Pages = 0i64;
  this->TmpPath1.LastVertex = 0;
  v11 = 0;
  this->TmpPath2.__vftable = (Scaleform::Render::VertexPath_vtbl *)&Scaleform::Render::VertexPath::`vftable';
  this->TmpPath2.Vertices.pHeap = &this->LHeap2;
  this->TmpPath2.Vertices.Size = 0i64;
  this->TmpPath2.Vertices.NumPages = 0i64;
  this->TmpPath2.Vertices.MaxPages = 0i64;
  this->TmpPath2.Vertices.Pages = 0i64;
  this->TmpPath2.Paths.pHeap = &this->LHeap2;
  this->TmpPath2.Paths.Size = 0i64;
  this->TmpPath2.Paths.NumPages = 0i64;
  this->TmpPath2.Paths.MaxPages = 0i64;
  this->TmpPath2.Paths.Pages = 0i64;
  this->TmpPath2.LastVertex = 0;
  this->RasterizationCount = 0;
  *(_WORD *)&this->RasterCacheWarning = 257;
  this->Notifier.pCache = this;
  do
  {
    if ( v11 > Scaleform::Render::FontSizeRamp[v3] )
    {
      ++v2;
      ++v3;
    }
    *(v10 - 1) = v2;
    if ( v11 + 1 > Scaleform::Render::FontSizeRamp[v3] )
    {
      ++v2;
      ++v3;
    }
    *v10 = v2;
    v11 += 2;
    v10 += 2;
  }
  while ( v11 < 0x100 );
  GlobalLog = Scaleform::Log::GetGlobalLog();
  this->pLog = GlobalLog;
  if ( !GlobalLog )
    this->pLog = Scaleform::Log::GetDefaultLog();
}

void __fastcall Scaleform::Render::GlyphScanlineFilter::GlyphScanlineFilter(
        Scaleform::Render::GlyphScanlineFilter *this,
        float prim,
        float second,
        float tert)
{
  unsigned __int8 *Secondary; // rbx
  int v5; // edi
  float v6; // xmm4_4
  float v7; // xmm9_4
  float v8; // xmm8_4
  float v9; // xmm7_4
  float v10; // xmm6_4

  Secondary = this->Secondary;
  v5 = 0;
  v6 = 1.0 / (float)((float)((float)(second + second) + prim) + (float)(tert + tert));
  v7 = prim * v6;
  v8 = second * v6;
  v9 = tert * v6;
  do
  {
    *(Secondary - 256) = (int)floorf((float)v5 * v7);
    v10 = (float)v5 * v9;
    *Secondary = (int)floorf((float)v5++ * v8);
    (++Secondary)[255] = (int)floorf(v10);
  }
  while ( (unsigned int)v5 < 0x100 );
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::~HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > *this)
{
  __int64 v2; // rdi
  unsigned __int64 v3; // rsi
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *pTable; // rbx
  __int64 v5; // rcx

  if ( this->pTable )
  {
    v2 = 0i64;
    v3 = this->pTable->SizeMask + 1;
    do
    {
      pTable = this->pTable;
      if ( *(unsigned __int64 *)((char *)&this->pTable[1].EntryCount + v2) != -2i64 )
      {
        v5 = *(unsigned __int64 *)((char *)&pTable[2].EntryCount + v2);
        if ( v5 )
          (*(void (__fastcall **)(__int64))(*(_QWORD *)(v5 + 16) + 16i64))(v5 + 16);
        *(unsigned __int64 *)((char *)&pTable[1].EntryCount + v2) = -2i64;
      }
      v2 += 24i64;
      --v3;
    }
    while ( v3 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    this->pTable = 0i64;
  }
}

void __fastcall Scaleform::Render::GlyphCache::~GlyphCache(Scaleform::Render::GlyphCache *this)
{
  Scaleform::Render::PrimitiveFill *pObject; // rcx
  Scaleform::Render::PrimitiveFill *v3; // rcx
  Scaleform::RefCountVImpl *v4; // rcx
  Scaleform::Render::Texture::UpdateDesc *Data; // rdx
  Scaleform::Render::RawImage *v6; // rcx
  Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> *p_ActiveSlots; // rbx
  __int64 v8; // rsi
  Scaleform::RefCountNTSImpl *v9; // rcx
  Scaleform::Render::Fence *v10; // rcx
  Scaleform::Render::TextNotifier *pNext; // rcx
  Scaleform::Render::GlyphSlot *pNextActive; // rdi

  this->Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::GlyphCache_vtbl *)&Scaleform::Render::GlyphCache::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::GlyphCache,2>'};
  this->Scaleform::Render::CacheBase::__vftable = (Scaleform::Render::CacheBase_vtbl *)&Scaleform::Render::GlyphCache::`vftable'{for `Scaleform::Render::CacheBase'};
  this->Scaleform::Render::GlyphCacheConfig::__vftable = (Scaleform::Render::GlyphCacheConfig_vtbl *)&Scaleform::Render::GlyphCache::`vftable'{for `Scaleform::Render::GlyphCacheConfig'};
  Scaleform::Render::GlyphCache::Destroy(this);
  this->TmpPath2.__vftable = (Scaleform::Render::VertexPath_vtbl *)&Scaleform::Render::TessBase::`vftable';
  this->TmpPath1.__vftable = (Scaleform::Render::VertexPath_vtbl *)&Scaleform::Render::TessBase::`vftable';
  this->mStroker.__vftable = (Scaleform::Render::Stroker_vtbl *)&Scaleform::Render::TessBase::`vftable';
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->LHeap2);
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->LHeap1);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->BlurSum.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->BlurStack.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->KnockOutCopy.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->RasterDataSrc.Data.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->RasterData.Data.Data);
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->Ras.LHeap);
  this->Ras.__vftable = (Scaleform::Render::Rasterizer_vtbl *)&Scaleform::Render::TessBase::`vftable';
  Scaleform::Render::LinearHeap::ClearAndRelease(&this->Fitter.LHeap);
  this->Fitter.__vftable = (Scaleform::Render::GlyphFitter_vtbl *)&Scaleform::Render::TessBase::`vftable';
  pObject = this->pMaskFill.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  v3 = this->pSolidFill.pObject;
  if ( v3 )
    Scaleform::RefCountNTSImpl::Release(v3);
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::~HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>(&this->VectorGlyphCache);
  v4 = (Scaleform::RefCountVImpl *)this->pFontHandleManager.pObject;
  if ( v4 )
    Scaleform::RefCountImpl::Release(v4);
  Data = this->RectsToUpdate.Data;
  this->Notifier.__vftable = (Scaleform::Render::GlyphCache::EvictNotifier_vtbl *)&Scaleform::Render::GlyphCacheConfig::`vftable';
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, Data);
  Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2>>::ClearAndRelease(&this->GlyphsToUpdate);
  v6 = this->UpdateBuffer.pObject;
  if ( v6 )
    v6->Release(v6);
  Scaleform::Render::GlyphQueue::~GlyphQueue(&this->Queue);
  p_ActiveSlots = &this->Queue.ActiveSlots;
  v8 = 32i64;
  do
  {
    v9 = (Scaleform::RefCountNTSImpl *)p_ActiveSlots[-2].Root.SlotFence.pObject;
    p_ActiveSlots = (Scaleform::List2<Scaleform::Render::GlyphSlot,Scaleform::Render::GlyphSlot_Active> *)((char *)p_ActiveSlots - 112);
    --v8;
    if ( v9 )
      Scaleform::RefCountNTSImpl::Release(v9);
    v10 = p_ActiveSlots[-1].Root.SlotFence.pObject;
    if ( v10 )
      ((void (__fastcall *)(Scaleform::Render::Fence *))v10->Data->APIHandle)(v10);
    pNext = p_ActiveSlots[-1].Root.TextFields.Root.pNext;
    if ( pNext )
      ((void (__fastcall *)(Scaleform::Render::TextNotifier *))pNext->pPrev->pText)(pNext);
    Scaleform::Render::ImageData::freePlanes((Scaleform::Render::ImageData *)&p_ActiveSlots[-1].Root.pPrevInBand);
    pNextActive = p_ActiveSlots[-1].Root.pNextActive;
    if ( pNextActive
      && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                         (volatile int *)p_ActiveSlots[-1].Root.pNextActive,
                         -1) == 1 )
    {
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, pNextActive);
    }
  }
  while ( v8 );
  this->Scaleform::Render::GlyphCacheConfig::__vftable = (Scaleform::Render::GlyphCacheConfig_vtbl *)&Scaleform::Render::GlyphCacheConfig::`vftable';
  this->Scaleform::Render::CacheBase::__vftable = (Scaleform::Render::CacheBase_vtbl *)&Scaleform::GFx::AS3::VectorBase<unsigned long>::ArrayFunc::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

void __fastcall Scaleform::Render::GlyphQueue::~GlyphQueue(Scaleform::Render::GlyphQueue *this)
{
  Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType *FirstPage; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::TextNotifier,127,Scaleform::AllocatorLH_POD<Scaleform::Render::TextNotifier,75> >::PageType *pNext; // rbx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *pTable; // rax
  __int64 v5; // rcx
  __int64 v6; // rdx
  Scaleform::HashSetBase<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeAltHashF,Scaleform::AllocatorLH<Scaleform::Render::GlyphParamHash,75>,Scaleform::HashsetCachedNodeEntry<Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>,Scaleform::HashNode<Scaleform::Render::GlyphParamHash,Scaleform::Render::GlyphNode *,Scaleform::Render::GlyphParamHash>::NodeHashF> >::TableType *v7; // rax
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *v8; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphNode,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphNode,75> >::PageType *v9; // rbx
  Scaleform::Render::Fence *pObject; // rcx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *v11; // rdx
  Scaleform::ListAllocBase<Scaleform::Render::GlyphSlot,127,Scaleform::AllocatorLH_POD<Scaleform::Render::GlyphSlot,75> >::PageType *v12; // rbx

  FirstPage = this->Notifiers.FirstPage;
  if ( FirstPage )
  {
    do
    {
      pNext = FirstPage->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      FirstPage = pNext;
    }
    while ( pNext );
  }
  pTable = this->GlyphHTable.mHash.pTable;
  if ( pTable )
  {
    v5 = 0i64;
    v6 = pTable->SizeMask + 1;
    do
    {
      v7 = this->GlyphHTable.mHash.pTable;
      if ( v7[v5 + 1].EntryCount != -2i64 )
        v7[v5 + 1].EntryCount = -2i64;
      v5 += 2i64;
      --v6;
    }
    while ( v6 );
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->GlyphHTable.mHash.pTable);
    this->GlyphHTable.mHash.pTable = 0i64;
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Bands.Data);
  v8 = this->Glyphs.FirstPage;
  if ( v8 )
  {
    do
    {
      v9 = v8->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      v8 = v9;
    }
    while ( v9 );
  }
  pObject = this->ActiveSlots.Root.SlotFence.pObject;
  if ( pObject )
    Scaleform::Render::Fence::Release(pObject);
  v11 = this->Slots.FirstPage;
  if ( v11 )
  {
    do
    {
      v12 = v11->pNext;
      ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
      v11 = v12;
    }
    while ( v12 );
  }
}

void __fastcall Scaleform::Render::VectorGlyphShape::~VectorGlyphShape(Scaleform::Render::VectorGlyphShape *this)
{
  Scaleform::Render::GlyphRaster *pObject; // rcx
  Scaleform::RefCountVImpl *v3; // rcx

  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::VectorGlyphShape_vtbl *)&Scaleform::Render::VectorGlyphShape::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>'};
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable = (Scaleform::Render::MeshProvider_vtbl *)&Scaleform::Render::VectorGlyphShape::`vftable'{for `Scaleform::Render::MeshProvider'};
  pObject = this->pRaster.pObject;
  if ( pObject )
    Scaleform::RefCountNTSImpl::Release(pObject);
  v3 = (Scaleform::RefCountVImpl *)this->pShape.pObject;
  if ( v3 )
    Scaleform::RefCountImpl::Release(v3);
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,2>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable = (Scaleform::Render::VectorGlyphShape_vtbl *)&Scaleform::Render::MeshProvider_KeySupport::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>'};
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable = (Scaleform::Render::MeshProvider_vtbl *)&Scaleform::Render::MeshProvider_KeySupport::`vftable'{for `Scaleform::Render::MeshProvider'};
  Scaleform::Render::MeshKeySetHandle::releaseCache(&this->hKeySet);
  this->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable = (Scaleform::Render::MeshProvider_vtbl *)&Scaleform::Render::MeshProvider::`vftable';
  Scaleform::RefCountImplCore::~RefCountImplCore(this);
}

Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *__fastcall Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>::operator=(
        Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *this,
        const Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *a)
{
  unsigned __int64 i; // rax

  Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
    &this->Data,
    a->Data.Size);
  for ( i = 0i64; i < this->Data.Size; ++i )
    this->Data.Data[i] = a->Data.Data[i];
  return this;
}

void __fastcall Scaleform::Render::StrokeScaler::AddVertex(Scaleform::Render::StrokeScaler *this, float x, float y)
{
  this->LastX = x;
  this->LastY = y;
  ((void (__fastcall *)(Scaleform::Render::Stroker *))this->Str->AddVertex)(this->Str);
}

void __fastcall Scaleform::Render::GlyphCache::EvictNotifier::ApplyInUseList(
        Scaleform::Render::GlyphCache::EvictNotifier *this)
{
  Scaleform::Render::GlyphCache::ApplyInUseList(this->pCache);
}

void __fastcall Scaleform::Render::GlyphCache::ApplyInUseList(Scaleform::Render::GlyphCache *this)
{
  Scaleform::Render::TextMeshProvider *pNext; // rbx
  Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > *p_TextInUse; // r14
  unsigned __int64 *p_Capacity; // rbp
  Scaleform::Render::TextMeshProvider *v5; // rdi
  Scaleform::Render::TextMeshProvider *v6; // rax

  pNext = this->TextInUse.Root.pNext;
  p_TextInUse = &this->TextInUse;
  p_Capacity = &this->RectsToUpdate.Capacity;
  if ( this == (Scaleform::Render::GlyphCache *)-4160i64 )
    p_Capacity = 0i64;
  while ( pNext != (Scaleform::Render::TextMeshProvider *)p_Capacity )
  {
    v5 = pNext->pNext;
    pNext->Flags &= ~2u;
    Scaleform::Render::TextMeshProvider::PinSlots(pNext);
    pNext->pPrev = this->TextInPin.Root.pPrev;
    pNext->pNext = (Scaleform::Render::TextMeshProvider *)&this->TextInUse.Root.8;
    this->TextInPin.Root.pPrev->pNext = pNext;
    this->TextInPin.Root.pPrev = pNext;
    pNext->Flags |= 4u;
    pNext = v5;
  }
  v6 = (Scaleform::Render::TextMeshProvider *)&p_TextInUse[-1].Root.8;
  if ( !p_TextInUse )
    v6 = 0i64;
  p_TextInUse->Root.pPrev = v6;
  p_TextInUse->Root.pNext = v6;
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::CheckExpand(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > *this,
        void *pmemAddr)
{
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *pTable; // rax
  unsigned __int64 SizeMask; // r8

  pTable = this->pTable;
  if ( this->pTable )
  {
    SizeMask = pTable->SizeMask;
    if ( 5 * pTable->EntryCount > 4 * SizeMask + 4 )
      Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::setRawCapacity(
        this,
        pmemAddr,
        2 * SizeMask + 2);
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::setRawCapacity(
      this,
      pmemAddr,
      8ui64);
  }
}

void __fastcall Scaleform::Render::GlyphCache::CleanUpFont(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::FontCacheHandle *font)
{
  Scaleform::Render::VectorGlyphShape *pNext; // r8
  Scaleform::Render::GlyphCache::EvictNotifier *p_Notifier; // rdi
  Scaleform::Render::VectorGlyphShape *v6; // rbx
  Scaleform::Render::VectorGlyphShape *key; // [rsp+30h] [rbp+8h] BYREF

  Scaleform::Render::GlyphCache::ApplyInUseList(this);
  Scaleform::Render::GlyphCache::UpdatePinList(this);
  Scaleform::Render::GlyphQueue::CleanUpFont(&this->Queue, font);
  pNext = this->VectorGlyphShapeList.Root.pNext;
  key = pNext;
  p_Notifier = &this->Notifier;
  if ( this == (Scaleform::Render::GlyphCache *)-4232i64 )
    p_Notifier = 0i64;
  while ( pNext != (Scaleform::Render::VectorGlyphShape *)p_Notifier )
  {
    v6 = pNext->pNext;
    if ( pNext->Key.pFont == font )
    {
      pNext->pPrev->pNext = v6;
      pNext->pNext->pPrev = pNext->pPrev;
      Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::RemoveAlt<Scaleform::Render::VectorGlyphShape *>(
        &this->VectorGlyphCache,
        &key);
    }
    pNext = v6;
    key = v6;
  }
}

void __fastcall Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>::Clear(
        Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> *this)
{
  Scaleform::Render::VectorGlyphShape *pObject; // rcx

  pObject = this->Value.pObject;
  if ( pObject )
    pObject->Release(&pObject->Scaleform::Render::MeshProvider);
  this->NextInChain = -2i64;
}

void __fastcall Scaleform::Render::GlyphShape::Clear(Scaleform::Render::GlyphShape *this)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *p_Data; // rbx

  p_Data = &this->Data;
  if ( this->Data.Data.Size && (this->Data.Data.Policy.Capacity & 0xFFFFFFFFFFFFFFFEui64) != 0 )
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &this->Data.Data,
      &this->Data,
      0i64);
  p_Data->Data.Size = 0i64;
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

void __fastcall Scaleform::ArrayPagedBase<unsigned int,6,64,Scaleform::AllocatorPagedLH_POD<unsigned int,2>>::ClearAndRelease(
        Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2> > *this)
{
  unsigned __int64 NumPages; // rcx
  void **v3; // rdi

  NumPages = this->NumPages;
  if ( NumPages )
  {
    v3 = (void **)&this->Pages[NumPages - 1];
    do
    {
      --this->NumPages;
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, *v3--);
    }
    while ( this->NumPages );
    --this->NumPages;
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Pages);
  }
  this->MaxPages = 0i64;
  this->NumPages = 0i64;
  this->Size = 0i64;
  this->Pages = 0i64;
}

void __fastcall Scaleform::Render::GlyphCache::ClearCache(Scaleform::Render::GlyphCache *this)
{
  Scaleform::Render::FontCacheHandleManager *v2; // rax

  Scaleform::Render::GlyphCache::UnpinAllSlots((Scaleform::Render::GlyphCache *)((char *)this - 24));
  Scaleform::Render::GlyphQueue::Clear((Scaleform::Render::GlyphQueue *)&this->Textures[31].pTexImg);
  *(void **)((char *)&this->Queue.Notifiers.pHeapOrPtr + 4) = 0i64;
  v2 = (Scaleform::Render::FontCacheHandleManager *)&this->TextInUse.Root.8;
  HIDWORD(this->Queue.pEvictNotifier) = 0;
  *(_QWORD *)&this->UpdatePacker.LastY = 0i64;
  if ( this == (Scaleform::Render::GlyphCache *)-4208i64 )
    v2 = 0i64;
  this->GlyphsToUpdate.MaxPages = 0i64;
  this->pFontHandleManager.pObject = v2;
  this->pRQCaches = (Scaleform::Render::RQCacheInterface *)v2;
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::~HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>((Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > *)&this->pLog);
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ClosePath(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rax
  float Multiplier; // xmm0_4
  int LastX; // ecx
  int StartX; // edi
  int v7; // edi
  int v8; // esi
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v9; // [rsp+20h] [rbp-18h] BYREF
  float v10; // [rsp+28h] [rbp-10h]

  pContainer = this->pContainer;
  Multiplier = this->Multiplier;
  LastX = pos->LastX;
  StartX = pos->StartX;
  v10 = Multiplier;
  v9.Data = pContainer;
  if ( __PAIR64__(pos->LastY, LastX) != __PAIR64__(pos->StartY, StartX) )
  {
    v7 = StartX - LastX;
    v8 = pos->StartY - pos->LastY;
    if ( v8 )
    {
      if ( v7 )
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
          &v9,
          v7,
          v8);
      else
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
          &v9,
          v8);
    }
    else
    {
      Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
        &v9,
        v7);
    }
    pos->LastX += v7;
    pos->LastY += v8;
  }
}

Scaleform::GFx::ASMovieRootBase *__fastcall Scaleform::Render::GlyphTextureImage::Create(
        Scaleform::MemoryHeap *heap,
        Scaleform::Render::TextureManager *texMan,
        Scaleform::Render::GlyphCache *cache,
        unsigned int textureId,
        const Scaleform::Render::Size<unsigned long> *size,
        unsigned int use)
{
  __int64 v9; // rax
  Scaleform::GFx::ASMovieRootBase *v10; // rbx
  unsigned int Height; // ecx
  Scaleform::GFx::MovieImpl *v12; // rax

  v9 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))heap->Alloc)(heap, 72i64);
  v10 = (Scaleform::GFx::ASMovieRootBase *)v9;
  if ( v9 )
  {
    *(_QWORD *)v9 = &Scaleform::RefCountImplCore::`vftable';
    *(_QWORD *)v9 = &Scaleform::Render::Image::`vftable';
    *(_DWORD *)(v9 + 8) = 1;
    *(_QWORD *)(v9 + 16) = 0i64;
    *(_QWORD *)v9 = &Scaleform::Render::TextureImage::`vftable';
    *(_QWORD *)(v9 + 24) = 0i64;
    *(_QWORD *)(v9 + 32) = 0i64;
    *(_DWORD *)(v9 + 40) = 9;
    Height = size->Height;
    *(_DWORD *)(v9 + 44) = size->Width;
    *(_DWORD *)(v9 + 48) = Height;
    *(_QWORD *)v9 = &Scaleform::Render::GlyphTextureImage::`vftable';
    *(_DWORD *)(v9 + 52) = use;
    *(_QWORD *)(v9 + 56) = cache;
    *(_DWORD *)(v9 + 64) = textureId;
  }
  else
  {
    v10 = 0i64;
  }
  v12 = (Scaleform::GFx::MovieImpl *)((__int64 (__fastcall *)(Scaleform::Render::TextureManager *, __int64, __int64))texMan->CreateTexture)(
                                       texMan,
                                       9i64,
                                       1i64);
  if ( v12 )
  {
    Scaleform::GFx::KeyboardState::SetListener(v10, v12);
    return v10;
  }
  else
  {
    ((void (__fastcall *)(Scaleform::GFx::ASMovieRootBase *))v10->AdvanceFrame)(v10);
    return 0i64;
  }
}

_BOOL8 __fastcall Scaleform::Render::GlyphTextureMapper::Create(
        Scaleform::Render::GlyphTextureMapper *this,
        unsigned int method,
        Scaleform::MemoryHeap *heap,
        Scaleform::Render::TextureManager *texMan,
        Scaleform::Render::PrimitiveFillManager *fillMan,
        Scaleform::Render::GlyphCache *cache,
        unsigned int textureId,
        const Scaleform::Render::Size<unsigned long> *size)
{
  Scaleform::Render::GlyphTextureImage *pObject; // rcx
  Scaleform::Render::RawImage *v13; // rax
  Scaleform::Render::RawImage *v14; // rcx
  Scaleform::Render::RawImage *v15; // rsi
  bool v16; // r14
  Scaleform::RefCountVImpl *v17; // rax
  Scaleform::Render::Texture *v18; // rsi
  Scaleform::Render::PrimitiveFill *v19; // rax
  Scaleform::Render::PrimitiveFill *v20; // rcx
  Scaleform::Render::PrimitiveFill *v21; // rbx
  const Scaleform::Render::VertexFormat **p_pFormat; // rsi
  __int64 v23; // rbx
  Scaleform::RefCountVImpl *v24; // rcx
  Scaleform::Render::RawImage *v25; // rcx
  unsigned int v26; // eax
  Scaleform::GFx::ASMovieRootBase *v27; // rax
  Scaleform::Render::GlyphTextureImage *v28; // rcx
  Scaleform::Render::GlyphTextureImage *v29; // rsi
  Scaleform::RefCountVImpl *v30; // rax
  Scaleform::Render::Texture *v31; // rsi
  Scaleform::Render::PrimitiveFill *v32; // rax
  Scaleform::Render::PrimitiveFill *v33; // rcx
  Scaleform::Render::PrimitiveFill *v34; // rbx
  const Scaleform::Render::VertexFormat **v35; // rsi
  __int64 v36; // rbx
  Scaleform::RefCountVImpl *v37; // rcx
  _BOOL8 result; // rax
  Scaleform::Render::PrimitiveFillData initdata; // [rsp+30h] [rbp-30h] BYREF

  this->pTexMan = texMan;
  this->Method = method;
  if ( method == 2 )
  {
    pObject = this->pTexImg.pObject;
    if ( pObject )
      pObject->Release(pObject);
    this->pTexImg.pObject = 0i64;
    v13 = Scaleform::Render::RawImage::Create(Image_A8, 1u, size, 0x10u, heap, 0i64);
    v14 = this->pRawImg.pObject;
    v15 = v13;
    if ( v14 )
      v14->Release(v14);
    this->pRawImg.pObject = v15;
    v16 = v15 != 0i64;
    if ( v15 )
    {
      v17 = (Scaleform::RefCountVImpl *)v15->GetTexture(v15, texMan);
      *(_QWORD *)&initdata.Type = 12i64;
      v18 = (Scaleform::Render::Texture *)v17;
      initdata.Textures[0].pObject = 0i64;
      initdata.Textures[1].pObject = 0i64;
      initdata.pFormat = &Scaleform::Render::RasterGlyphVertex::Format;
      *(_WORD *)&initdata.FillModes[0].Fill = 3;
      if ( v17 )
        Scaleform::Render::RenderBuffer::AddRef(v17);
      initdata.Textures[0].pObject = v18;
      initdata.Textures[1].pObject = 0i64;
      v19 = Scaleform::Render::PrimitiveFillManager::CreateFill(fillMan, &initdata);
      v20 = this->pFill.pObject;
      v21 = v19;
      if ( v20 )
        Scaleform::RefCountNTSImpl::Release(v20);
      this->pFill.pObject = v21;
      p_pFormat = &initdata.pFormat;
      v23 = 2i64;
      do
      {
        v24 = (Scaleform::RefCountVImpl *)*--p_pFormat;
        --v23;
        if ( v24 )
          Scaleform::RefCountImpl::Release(v24);
      }
      while ( v23 );
    }
  }
  else
  {
    v25 = this->pRawImg.pObject;
    if ( v25 )
      v25->Release(v25);
    v26 = 32;
    this->pRawImg.pObject = 0i64;
    if ( method != 1 )
      v26 = 192;
    v27 = Scaleform::Render::GlyphTextureImage::Create(heap, texMan, cache, textureId, size, v26);
    v28 = this->pTexImg.pObject;
    v29 = (Scaleform::Render::GlyphTextureImage *)v27;
    if ( v28 )
      v28->Release(v28);
    this->pTexImg.pObject = v29;
    v16 = v29 != 0i64;
    if ( v29 )
    {
      v30 = (Scaleform::RefCountVImpl *)v29->GetTexture(v29, texMan);
      *(_QWORD *)&initdata.Type = 12i64;
      v31 = (Scaleform::Render::Texture *)v30;
      initdata.Textures[0].pObject = 0i64;
      initdata.Textures[1].pObject = 0i64;
      initdata.pFormat = &Scaleform::Render::RasterGlyphVertex::Format;
      *(_WORD *)&initdata.FillModes[0].Fill = 3;
      if ( v30 )
        Scaleform::Render::RenderBuffer::AddRef(v30);
      initdata.Textures[0].pObject = v31;
      initdata.Textures[1].pObject = 0i64;
      v32 = Scaleform::Render::PrimitiveFillManager::CreateFill(fillMan, &initdata);
      v33 = this->pFill.pObject;
      v34 = v32;
      if ( v33 )
        Scaleform::RefCountNTSImpl::Release(v33);
      this->pFill.pObject = v34;
      v35 = &initdata.pFormat;
      v36 = 2i64;
      do
      {
        v37 = (Scaleform::RefCountVImpl *)*--v35;
        --v36;
        if ( v37 )
          Scaleform::RefCountImpl::Release(v37);
      }
      while ( v36 );
    }
  }
  result = v16;
  this->Valid = v16;
  return result;
}

Scaleform::Render::VectorGlyphShape *__fastcall Scaleform::Render::GlyphCache::CreateGlyphShape(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::GlyphRunData *data,
        const Scaleform::Render::ToleranceParams *param,
        unsigned int glyphIndex,
        float screenSize,
        bool fauxBold,
        bool fauxItalic,
        unsigned int outline,
        bool needsVectorShape)
{
  Scaleform::Render::Font *pFont; // rsi
  Scaleform::Render::GlyphCache *v10; // rbp
  Scaleform::Render::Font_vtbl *v12; // rax
  float v15; // xmm0_4
  unsigned int v16; // er14
  unsigned int v17; // er12
  int v18; // edi
  const Scaleform::Render::ShapeDataInterface *v19; // rax
  Scaleform::Render::FontCacheHandle *pFontHandle; // r11
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *pTable; // r9
  unsigned __int16 v22; // r10
  __int64 v23; // r8
  __int64 v24; // rcx
  __int64 v25; // rdx
  bool v26; // zf
  __int64 *v27; // rdx
  __int64 v28; // rax
  Scaleform::Render::VectorGlyphShape **v29; // rbx
  Scaleform::Render::VectorGlyphShape *v30; // rdx
  Scaleform::Render::VectorGlyphShape *v31; // rdx
  float y2; // xmm2_4
  float x2; // xmm1_4
  float y1; // xmm0_4
  Scaleform::Render::MeshProvider *v35; // rcx
  Scaleform::Render::MeshProvider_vtbl *v36; // rdx
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *v37; // rax
  unsigned __int64 EntryCount; // rcx
  unsigned __int64 MaxVectorCacheSize; // rax
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *v40; // rdi
  Scaleform::Render::VectorGlyphShape *pNext; // r8
  unsigned __int64 v42; // rdi
  unsigned int v43; // edi
  unsigned int v44; // ebx
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > *v45; // rsi
  Scaleform::Render::VectorGlyphShape *p_Notifier; // r14
  Scaleform::Render::VectorGlyphShape *v47; // rbp
  Scaleform::Render::VectorGlyphShape *v48; // rdx
  __int64 v49; // rbx
  Scaleform::MemoryHeap *pHeap; // rcx
  __int64 v51; // rax
  __int64 v52; // rdi
  Scaleform::RefCountVImpl *v53; // rcx
  __int64 v54; // rax
  __int64 v55; // rdi
  Scaleform::RefCountNTSImpl *v56; // rcx
  const Scaleform::Render::ShapeDataInterface *v57; // rdi
  float italicOffset; // xmm6_4
  __int64 v59; // rax
  __int64 v60; // rdi
  _QWORD *v61; // rax
  float v62; // xmm2_4
  float v63; // xmm1_4
  float v64; // xmm0_4
  Scaleform::Render::VectorGlyphShape *key; // [rsp+50h] [rbp-78h] BYREF
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > *p_VectorGlyphCache; // [rsp+58h] [rbp-70h]
  Scaleform::Render::Font *v67; // [rsp+60h] [rbp-68h]
  unsigned int v70; // [rsp+E8h] [rbp+20h]

  pFont = data->pFont;
  key = (Scaleform::Render::VectorGlyphShape *)&data->GlyphBounds;
  *(_QWORD *)&data->VectorSize = 0i64;
  v10 = this;
  data->pShape = 0i64;
  data->pRaster = 0i64;
  *(_QWORD *)&data->GlyphBounds.x1 = 0i64;
  *(_QWORD *)&data->GlyphBounds.x2 = 0i64;
  v12 = pFont->__vftable;
  v67 = pFont;
  data->NomHeight = v12->GetNominalGlyphHeight(pFont);
  data->NomWidth = pFont->GetNominalGlyphWidth(pFont);
  if ( (_WORD)glyphIndex == 0xFFFF )
    return 0i64;
  if ( (pFont->Flags & 0x20) != 0 )
    v15 = screenSize;
  else
    v15 = 0.0;
  v16 = 0;
  v70 = 0;
  v17 = 0;
  if ( v15 != 0.0 )
  {
    if ( pFont->IsHintedRasterGlyph(pFont, glyphIndex, (int)v15) )
      v17 = (int)v15;
    if ( pFont->IsHintedVectorGlyph(pFont, glyphIndex, (int)v15) )
      v16 = (int)v15;
    v70 = v16;
  }
  v18 = fauxItalic | (fauxBold ? 2 : 0);
  if ( v18
    || v16
    || v17
    || outline
    || needsVectorShape
    || (v19 = pFont->GetPermanentGlyphShape(pFont, glyphIndex), (data->pShape = v19) == 0i64) )
  {
    pFontHandle = data->pFontHandle;
    p_VectorGlyphCache = &v10->VectorGlyphCache;
    pTable = v10->VectorGlyphCache.pTable;
    v22 = fauxItalic | (fauxBold ? 2 : 0);
    if ( !pTable )
      goto LABEL_33;
    v23 = pTable->SizeMask & ((unsigned __int64)pFontHandle ^ (unsigned __int16)glyphIndex ^ (unsigned __int8)v16 ^ (unsigned __int8)v17 ^ (unsigned __int16)outline ^ v22 ^ ((unsigned __int64)pFontHandle >> 6));
    v24 = v23;
    v25 = v23 + 2 * (v23 + 1);
    v26 = *(&pTable->EntryCount + v25) == -2i64;
    v27 = (__int64 *)(&pTable->EntryCount + v25);
    if ( v26 || v27[1] != v23 )
      goto LABEL_33;
    while ( 1 )
    {
      if ( v27[1] == v23 )
      {
        v28 = v27[2];
        if ( *(Scaleform::Render::FontCacheHandle **)(v28 + 56) == pFontHandle
          && *(_WORD *)(v28 + 64) == (_WORD)glyphIndex
          && *(_BYTE *)(v28 + 66) == (_BYTE)v16
          && *(_BYTE *)(v28 + 67) == (_BYTE)v17
          && *(_DWORD *)(v28 + 68) == __PAIR32__(outline, v22) )
        {
          break;
        }
      }
      v24 = *v27;
      if ( *v27 == -1 )
        goto LABEL_33;
      v27 = (__int64 *)(&pTable[v24 + 1].EntryCount + v24);
    }
    if ( v24 >= 0 && (v29 = (Scaleform::Render::VectorGlyphShape **)(&pTable[v24 + 2].EntryCount + v24)) != 0i64 )
    {
      v30 = *v29;
      (*v29)->pPrev->pNext = (*v29)->pNext;
      v30->pNext->pPrev = v30->pPrev;
      v30->pPrev = v10->VectorGlyphShapeList.Root.pPrev;
      v30->pNext = (Scaleform::Render::VectorGlyphShape *)&v10->Notifier;
      v10->VectorGlyphShapeList.Root.pPrev->pNext = v30;
      v10->VectorGlyphShapeList.Root.pPrev = v30;
      data->VectorSize = (*v29)->Key.HintedVector;
      data->RasterSize = (*v29)->Key.HintedRaster;
      data->pShape = (*v29)->pShape.pObject;
      data->pRaster = (*v29)->pRaster.pObject;
      v31 = *v29;
      y2 = (*v29)->Bounds.y2;
      x2 = (*v29)->Bounds.x2;
      y1 = (*v29)->Bounds.y1;
      data->GlyphBounds.x1 = (*v29)->Bounds.x1;
      v35 = &v31->Scaleform::Render::MeshProvider;
      v36 = v31->Scaleform::Render::MeshProvider_KeySupport::Scaleform::Render::MeshProvider_RCImpl::Scaleform::Render::MeshProvider::__vftable;
      data->GlyphBounds.y1 = y1;
      data->GlyphBounds.x2 = x2;
      data->GlyphBounds.y2 = y2;
      v36->AddRef(v35);
      return *v29;
    }
    else
    {
LABEL_33:
      v37 = v10->VectorGlyphCache.pTable;
      EntryCount = 0i64;
      key = 0i64;
      if ( v37 )
        EntryCount = v37->EntryCount;
      MaxVectorCacheSize = v10->Param.MaxVectorCacheSize;
      if ( EntryCount > MaxVectorCacheSize )
      {
        v40 = v10->VectorGlyphCache.pTable;
        pNext = v10->VectorGlyphShapeList.Root.pNext;
        key = pNext;
        if ( v40 )
          v42 = v40->EntryCount;
        else
          LODWORD(v42) = 0;
        v43 = v42 - MaxVectorCacheSize;
        v44 = 0;
        if ( v43 > (unsigned int)MaxVectorCacheSize )
          v43 = MaxVectorCacheSize;
        if ( v43 )
        {
          v45 = p_VectorGlyphCache;
          p_Notifier = (Scaleform::Render::VectorGlyphShape *)&v10->Notifier;
          if ( v10 == (Scaleform::Render::GlyphCache *)-4232i64 )
            p_Notifier = 0i64;
          do
          {
            if ( pNext == p_Notifier )
              break;
            v47 = pNext->pNext;
            if ( !pNext->hKeySet.pKeySet
              || pNext->hKeySet.pKeySet->Meshes.Root.pNext == (Scaleform::Render::MeshKey *)&pNext->hKeySet.pKeySet->Meshes )
            {
              v48 = key;
              key->pPrev->pNext = pNext->pNext;
              pNext->pNext->pPrev = v48->pPrev;
              Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::RemoveAlt<Scaleform::Render::VectorGlyphShape *>(
                v45,
                &key);
            }
            ++v44;
            key = v47;
            pNext = v47;
          }
          while ( v44 < v43 );
          pFont = v67;
          v10 = this;
          v16 = v70;
        }
        LOBYTE(v18) = fauxItalic | (fauxBold ? 2 : 0);
      }
      v49 = (__int64)v10->pHeap->Alloc(v10->pHeap, 128ui64, 0i64);
      if ( v49 )
      {
        *(_QWORD *)v49 = &Scaleform::RefCountImplCore::`vftable';
        *(_DWORD *)(v49 + 8) = 1;
        *(_QWORD *)v49 = &Scaleform::Render::MeshProvider_KeySupport::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>'};
        *(_QWORD *)(v49 + 16) = &Scaleform::Render::MeshProvider_KeySupport::`vftable'{for `Scaleform::Render::MeshProvider'};
        *(_QWORD *)(v49 + 24) = 0i64;
        *(_QWORD *)(v49 + 32) = 0i64;
        *(_QWORD *)(v49 + 40) = -1i64;
        *(_QWORD *)(v49 + 48) = -1i64;
        *(_QWORD *)v49 = &Scaleform::Render::VectorGlyphShape::`vftable'{for `Scaleform::RefCountBase<Scaleform::Render::MeshProvider_RCImpl,2>'};
        *(_QWORD *)(v49 + 16) = &Scaleform::Render::VectorGlyphShape::`vftable'{for `Scaleform::Render::MeshProvider'};
        *(_QWORD *)(v49 + 56) = 0i64;
        *(_WORD *)(v49 + 64) = 0;
        *(_DWORD *)(v49 + 66) = 0;
        *(_WORD *)(v49 + 70) = 0;
        *(_QWORD *)(v49 + 72) = 0i64;
        *(_QWORD *)(v49 + 80) = 0i64;
        *(_QWORD *)(v49 + 96) = 0i64;
        *(_QWORD *)(v49 + 104) = 0i64;
        *(_QWORD *)(v49 + 112) = v10;
      }
      *(_QWORD *)(v49 + 56) = data->pFontHandle;
      *(_WORD *)(v49 + 64) = glyphIndex;
      *(_BYTE *)(v49 + 66) = v16;
      *(_BYTE *)(v49 + 67) = v17;
      *(_WORD *)(v49 + 68) = (unsigned __int8)v18;
      *(_WORD *)(v49 + 70) = (unsigned __int8)outline;
      pHeap = v10->pHeap;
      key = (Scaleform::Render::VectorGlyphShape *)v49;
      v51 = (__int64)pHeap->Alloc(pHeap, 144ui64, 0i64);
      v52 = v51;
      if ( v51 )
      {
        *(_QWORD *)(v51 + 16) = v51 + 96;
        *(_QWORD *)v51 = &Scaleform::RefCountImplCore::`vftable';
        *(_DWORD *)(v51 + 8) = 1;
        *(_DWORD *)(v51 + 32) = 1065353216;
        *(_QWORD *)(v51 + 24) = v51 + 96;
        *(_DWORD *)(v51 + 40) = 0;
        *(_DWORD *)(v51 + 44) = 1065353216;
        *(_QWORD *)(v51 + 48) = 0i64;
        *(_QWORD *)(v51 + 56) = 0i64;
        *(_QWORD *)(v51 + 64) = 0i64;
        *(_QWORD *)(v51 + 72) = 0i64;
        *(_QWORD *)(v51 + 80) = 0i64;
        *(_QWORD *)(v51 + 88) = 0i64;
        *(_QWORD *)v51 = &Scaleform::Render::GlyphShape::`vftable';
        *(_QWORD *)(v51 + 96) = 0i64;
        *(_QWORD *)(v51 + 104) = 0i64;
        *(_QWORD *)(v51 + 112) = 0i64;
        *(_DWORD *)(v51 + 120) = 0;
        *(_QWORD *)(v51 + 128) = 0i64;
        *(_QWORD *)(v51 + 136) = 0i64;
      }
      else
      {
        v52 = 0i64;
      }
      v53 = *(Scaleform::RefCountVImpl **)(v49 + 72);
      if ( v53 )
        Scaleform::RefCountImpl::Release(v53);
      *(_QWORD *)(v49 + 72) = v52;
      if ( v17 )
      {
        v54 = ((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))v10->pHeap->Alloc)(v10->pHeap, 64i64);
        v55 = v54;
        if ( v54 )
        {
          *(_DWORD *)(v54 + 8) = 1;
          *(_QWORD *)v54 = &Scaleform::Render::GlyphRaster::`vftable';
          *(_QWORD *)(v54 + 16) = 0i64;
          *(_QWORD *)(v54 + 24) = 0i64;
          *(_QWORD *)(v54 + 32) = 0i64;
          *(_QWORD *)(v54 + 40) = 0i64;
          *(_QWORD *)(v54 + 48) = 0i64;
          *(_DWORD *)(v54 + 56) = 0;
        }
        else
        {
          v55 = 0i64;
        }
        v56 = *(Scaleform::RefCountNTSImpl **)(v49 + 80);
        if ( v56 )
          Scaleform::RefCountNTSImpl::Release(v56);
        *(_QWORD *)(v49 + 80) = v55;
      }
      v57 = 0i64;
      if ( !v16 )
        v57 = pFont->GetPermanentGlyphShape(pFont, glyphIndex);
      italicOffset = pFont->Descent;
      if ( v57 )
      {
        pFont->GetGlyphBounds(pFont, glyphIndex, (Scaleform::Render::Rect<float> *)(v49 + 96));
        Scaleform::Render::GlyphCache::copyAndTransformShape(
          v10,
          (Scaleform::Render::VectorGlyphShape *)v49,
          param,
          v57,
          fauxBold,
          fauxItalic,
          outline,
          italicOffset,
          data->NomHeight);
      }
      else if ( fauxBold || fauxItalic || outline )
      {
        v59 = (__int64)v10->pHeap->Alloc(v10->pHeap, 144ui64, 0i64);
        v60 = v59;
        if ( v59 )
        {
          v61 = (_QWORD *)(v59 + 96);
          *(_QWORD *)v60 = &Scaleform::RefCountImplCore::`vftable';
          *(_DWORD *)(v60 + 8) = 1;
          *(_QWORD *)(v60 + 16) = v61;
          *(_DWORD *)(v60 + 32) = 1065353216;
          *(_QWORD *)(v60 + 24) = v61;
          *(_DWORD *)(v60 + 40) = 0;
          *(_DWORD *)(v60 + 44) = 1065353216;
          *(_QWORD *)(v60 + 48) = 0i64;
          *(_QWORD *)(v60 + 56) = 0i64;
          *(_QWORD *)(v60 + 64) = 0i64;
          *(_QWORD *)(v60 + 72) = 0i64;
          *(_QWORD *)(v60 + 80) = 0i64;
          *(_QWORD *)(v60 + 88) = 0i64;
          *(_QWORD *)v60 = &Scaleform::Render::GlyphShape::`vftable';
          *v61 = 0i64;
          v61[1] = 0i64;
          v61[2] = 0i64;
          *(_DWORD *)(v60 + 120) = 0;
          *(_QWORD *)(v60 + 128) = 0i64;
          *(_QWORD *)(v60 + 136) = 0i64;
        }
        else
        {
          v60 = 0i64;
        }
        pFont->GetTemporaryGlyphShape(pFont, glyphIndex, v16, (Scaleform::Render::GlyphShape *)v60);
        Scaleform::Render::GlyphCache::getGlyphBounds(
          v10,
          (Scaleform::Render::VectorGlyphShape *)v49,
          (const Scaleform::Render::ShapeDataInterface *)v60);
        Scaleform::Render::GlyphCache::copyAndTransformShape(
          v10,
          (Scaleform::Render::VectorGlyphShape *)v49,
          param,
          (const Scaleform::Render::ShapeDataInterface *)v60,
          fauxBold,
          fauxItalic,
          outline,
          italicOffset,
          data->NomHeight);
        if ( v60 )
          Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)v60);
      }
      else
      {
        Scaleform::Render::GlyphShape::Clear(*(Scaleform::Render::GlyphShape **)(v49 + 72));
        pFont->GetTemporaryGlyphShape(pFont, glyphIndex, v16, *(Scaleform::Render::GlyphShape **)(v49 + 72));
        Scaleform::Render::GlyphCache::getGlyphBounds(
          v10,
          (Scaleform::Render::VectorGlyphShape *)v49,
          *(const Scaleform::Render::ShapeDataInterface **)(v49 + 72));
      }
      if ( v17 )
      {
        pFont->GetGlyphRaster(pFont, glyphIndex, v17, *(Scaleform::Render::GlyphRaster **)(v49 + 80));
        *(_DWORD *)(*(_QWORD *)(v49 + 80) + 56i64) = v17;
      }
      v62 = *(float *)(v49 + 108);
      v63 = *(float *)(v49 + 104);
      v64 = *(float *)(v49 + 100);
      data->GlyphBounds.x1 = *(float *)(v49 + 96);
      data->GlyphBounds.y1 = v64;
      data->GlyphBounds.x2 = v63;
      data->GlyphBounds.y2 = v62;
      data->VectorSize = v16;
      data->RasterSize = v17;
      data->pShape = *(const Scaleform::Render::ShapeDataInterface **)(v49 + 72);
      data->pRaster = *(const Scaleform::Render::GlyphRaster **)(v49 + 80);
      data->HintedNomHeight = *(_DWORD *)(*(_QWORD *)(v49 + 72) + 120i64);
      *(_QWORD *)(v49 + 40) = v10->VectorGlyphShapeList.Root.pPrev;
      *(_QWORD *)(v49 + 48) = &v10->Notifier;
      v10->VectorGlyphShapeList.Root.pPrev->pNext = (Scaleform::Render::VectorGlyphShape *)v49;
      v10->VectorGlyphShapeList.Root.pPrev = (Scaleform::Render::VectorGlyphShape *)v49;
      Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::add<Scaleform::Render::VectorGlyphShape *>(
        &v10->VectorGlyphCache,
        &v10->VectorGlyphCache,
        &key,
        *(_QWORD *)(v49 + 56) ^ (*(_QWORD *)(v49 + 56) >> 6) ^ *(unsigned __int16 *)(v49 + 64) ^ *(unsigned __int8 *)(v49 + 66) ^ *(unsigned __int8 *)(v49 + 67) ^ *(unsigned __int16 *)(v49 + 68) ^ (unsigned __int64)*(unsigned __int16 *)(v49 + 70));
      return (Scaleform::Render::VectorGlyphShape *)v49;
    }
  }
  else
  {
    pFont->GetGlyphBounds(pFont, glyphIndex, (Scaleform::Render::Rect<float> *)key);
    return 0i64;
  }
}

void __fastcall Scaleform::Render::GlyphCache::Destroy(Scaleform::Render::GlyphCache *this)
{
  unsigned int i; // edx
  __int64 v3; // rax
  __int64 v4; // rcx
  Scaleform::Render::VectorGlyphShape *p_Notifier; // rax
  Scaleform::Render::FontCacheHandleManager *pObject; // rcx
  Scaleform::RefCountVImpl *v7; // rcx
  Scaleform::Render::RQCacheInterface *pRQCaches; // rax

  Scaleform::Render::GlyphCache::UnpinAllSlots(this);
  Scaleform::Render::GlyphQueue::Clear(&this->Queue);
  for ( i = 0; i < this->MaxNumTextures; this->Textures[v4].NumGlyphsToUpdate = 0 )
  {
    v3 = i++;
    v4 = v3;
    this->Textures[v4].Valid = 0;
  }
  *(_QWORD *)&this->UpdatePacker.LastX = 0i64;
  this->UpdatePacker.LastMaxHeight = 0;
  p_Notifier = (Scaleform::Render::VectorGlyphShape *)&this->Notifier;
  this->GlyphsToUpdate.Size = 0i64;
  this->RectsToUpdate.Size = 0i64;
  if ( this == (Scaleform::Render::GlyphCache *)-4232i64 )
    p_Notifier = 0i64;
  this->VectorGlyphShapeList.Root.pPrev = p_Notifier;
  this->VectorGlyphShapeList.Root.pNext = p_Notifier;
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::~HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>(&this->VectorGlyphCache);
  pObject = this->pFontHandleManager.pObject;
  if ( pObject )
  {
    Scaleform::Render::FontCacheHandleManager::DestroyAllFonts(pObject);
    v7 = (Scaleform::RefCountVImpl *)this->pFontHandleManager.pObject;
    if ( v7 )
      Scaleform::RefCountImpl::Release(v7);
    this->pFontHandleManager.pObject = 0i64;
  }
  pRQCaches = this->pRQCaches;
  if ( pRQCaches )
  {
    pRQCaches->pCaches[1] = 0i64;
    this->pRQCaches = 0i64;
  }
}

void __fastcall Scaleform::Render::GlyphCache::EvictNotifier::Evict(
        Scaleform::Render::GlyphCache::EvictNotifier *this,
        Scaleform::Render::TextMeshProvider *p)
{
  Scaleform::Render::TextMeshProvider::OnEvictSlots(p);
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphCache::FindGlyph(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::TextMeshProvider *tm,
        const Scaleform::Render::GlyphParam *gp)
{
  Scaleform::Render::GlyphQueue *p_Queue; // rsi
  Scaleform::Render::GlyphNode *result; // rax
  Scaleform::Render::GlyphNode *v6; // rbx
  Scaleform::Render::TextNotifier *Notifier; // rax

  p_Queue = &this->Queue;
  result = Scaleform::Render::GlyphQueue::FindGlyph(&this->Queue, gp);
  v6 = result;
  if ( result )
  {
    Notifier = Scaleform::Render::GlyphQueue::CreateNotifier(p_Queue, result, tm);
    Scaleform::Render::TextMeshProvider::AddNotifier(tm, Notifier);
    return v6;
  }
  return result;
}

float __fastcall Scaleform::Render::GlyphCache::GetCachedFontSize(
        Scaleform::Render::GlyphCache *this,
        const Scaleform::Render::GlyphParam *gp,
        float screenSize,
        bool exactFit)
{
  float v5; // xmm0_4
  __int64 v6; // rdx
  int v7; // eax
  float v8; // xmm1_4

  if ( !exactFit )
  {
    if ( (gp->Flags & 1) != 0 )
    {
      screenSize = floorf((float)(screenSize * 4.0) + 0.5) * 0.25;
    }
    else
    {
      v5 = floorf(screenSize);
      v6 = ((unsigned int)((int)v5 + 3) >> 2) + (int)v5;
      v7 = 255;
      if ( (unsigned int)v6 <= 0xFF )
        v7 = Scaleform::Render::FontSizeRamp[this->FontSizeMap[v6] + 1];
      screenSize = (float)v7;
    }
  }
  v8 = (float)(this->MaxSlotHeight - 2 * this->SlotPadding);
  if ( (float)(v8 * this->Param.MaxRasterScale) >= screenSize )
    return fminf(screenSize, v8);
  return screenSize;
}

float __fastcall Scaleform::Render::GlyphCache::GetCachedShadowSize(
        Scaleform::Render::GlyphCache *this,
        float screenSize,
        const Scaleform::Render::GlyphRaster *ras)
{
  unsigned int v5; // ecx
  int v6; // eax

  if ( ras )
    return (float)(int)ras->HintedSize;
  v5 = (int)floorf(screenSize);
  v6 = 255;
  if ( v5 <= 0xFF )
    v6 = Scaleform::Render::FontSizeRamp[this->FontSizeMap[v5] + 1];
  return fminf((float)v6, (float)(this->MaxSlotHeight - 2 * this->SlotPadding));
}

Scaleform::Render::PrimitiveFill *__fastcall Scaleform::Render::GlyphCache::GetFill(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::TextLayerType type,
        unsigned int textureId)
{
  Scaleform::Render::PrimitiveFill *result; // rax

  switch ( type )
  {
    case TextLayer_Background:
    case TextLayer_Selection:
    case TextLayer_Shapes:
    case TextLayer_Underline:
    case TextLayer_Cursor:
    case TextLayer_Shapes_Masked:
    case TextLayer_Underline_Masked:
      result = this->pSolidFill.pObject;
      break;
    case TextLayer_Shadow:
    case TextLayer_ShadowText:
    case TextLayer_RasterText:
      result = this->Textures[textureId].pFill.pObject;
      break;
    case TextLayer_Mask:
      result = this->pMaskFill.pObject;
      break;
    default:
      result = 0i64;
      break;
  }
  return result;
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int idx,
        Scaleform::Render::FillStyleType *p)
{
  Scaleform::Render::ComplexFill *v4; // rax
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::Render::FillStyleType *v6; // rdi
  Scaleform::RefCountVImpl *pObject; // rcx
  Scaleform::RefCountVImpl *v8; // rcx

  if ( idx <= this->FillStyles.Data.Size )
  {
    v6 = &this->FillStyles.Data.Data[idx - 1];
    p->Color = v6->Color;
    pObject = (Scaleform::RefCountVImpl *)v6->pFill.pObject;
    if ( pObject )
      Scaleform::Render::RenderBuffer::AddRef(pObject);
    v8 = (Scaleform::RefCountVImpl *)p->pFill.pObject;
    if ( v8 )
      Scaleform::RefCountImpl::Release(v8);
    v4 = v6->pFill.pObject;
  }
  else
  {
    if ( __TSS0__4__GetFillStyle___ShapeDataPacked_V__ArrayLH_POD_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUFillStyleType_34__Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
    {
      Init_thread_header(&__TSS0__4__GetFillStyle___ShapeDataPacked_V__ArrayLH_POD_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUFillStyleType_34__Z_4HA);
      if ( __TSS0__4__GetFillStyle___ShapeDataPacked_V__ArrayLH_POD_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUFillStyleType_34__Z_4HA == -1 )
      {
        `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.Color = 0;
        `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject = 0i64;
        atexit(`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::`dynamic atexit destructor for 'defaultFillStyle'');
        Init_thread_footer(&__TSS0__4__GetFillStyle___ShapeDataPacked_V__ArrayLH_POD_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUFillStyleType_34__Z_4HA);
      }
    }
    p->Color = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.Color;
    v4 = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject;
    if ( `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject )
    {
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject);
      v4 = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject;
    }
    v5 = (Scaleform::RefCountVImpl *)p->pFill.pObject;
    if ( v5 )
    {
      Scaleform::RefCountImpl::Release(v5);
      p->pFill.pObject = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetFillStyle'::`5'::defaultFillStyle.pFill.pObject;
      return;
    }
  }
  p->pFill.pObject = v4;
}

__int64 __fastcall Scaleform::Render::ShapeDataFloatTempl<Scaleform::Array<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyleCount(
        Scaleform::Render::ShapeDataFloatTempl<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this)
{
  return LODWORD(this->Strokes.Data.Size);
}

Scaleform::Render::RawImage *__fastcall Scaleform::Render::GlyphCache::GetImage(
        Scaleform::Render::GlyphCache *this,
        unsigned int textureId)
{
  __int64 v2; // rdx
  Scaleform::Render::RawImage *result; // rax

  v2 = textureId;
  result = this->Textures[v2].pRawImg.pObject;
  if ( !result )
    return (Scaleform::Render::RawImage *)this->Textures[v2].pTexImg.pObject;
  return result;
}

float __fastcall Scaleform::Render::StrokeScaler::GetLastX(Scaleform::Render::StrokeScaler *this)
{
  return this->LastX;
}

float __fastcall Scaleform::Render::StrokeScaler::GetLastY(Scaleform::Render::StrokeScaler *this)
{
  return this->LastY;
}

__int64 __fastcall AgHttp::onSingletonExit(__crt_locale_data *__formal)
{
  return 0i64;
}

std::_Align_type<double,64> *__fastcall __Get____Func_impl_U_unnamed_type_nothing___1__InstallGFxInterface_extension__YAXXZ_V__allocator_H_std__VValue_GFx_Scaleform__AEAVGFXIMovieContext_3_PEBV678_I_std__EEBAPEBXXZ(
        _Mtx_internal_imp_t *mtx)
{
  return &mtx->cs;
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStartingPos(
        AgDisplay *this)
{
  return (unsigned int)this->m_windowMode;
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int idx,
        Scaleform::Render::StrokeStyleType *p)
{
  Scaleform::Render::ComplexFill *pObject; // rax
  Scaleform::RefCountVImpl *v5; // rcx
  Scaleform::Render::DashArray *v6; // rax
  Scaleform::RefCountVImpl *v7; // rcx

  if ( idx <= this->StrokeStyles.Data.Size )
  {
    Scaleform::Render::StrokeStyleType::operator=(p, &this->StrokeStyles.Data.Data[idx - 1]);
  }
  else
  {
    if ( __TSS0__4__GetStrokeStyle___ShapeDataPacked_V__ArrayLH_POD_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUStrokeStyleType_34__Z_4HA > *(_DWORD *)(*((_QWORD *)NtCurrentTeb()->Reserved1[11] + tls_index) + 40i64) )
    {
      Init_thread_header(&__TSS0__4__GetStrokeStyle___ShapeDataPacked_V__ArrayLH_POD_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUStrokeStyleType_34__Z_4HA);
      if ( __TSS0__4__GetStrokeStyle___ShapeDataPacked_V__ArrayLH_POD_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUStrokeStyleType_34__Z_4HA == -1 )
      {
        *(_QWORD *)&`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Width = 0i64;
        *(_QWORD *)&`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Flags = 0i64;
        `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Color = 0;
        *(_OWORD *)&`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject = 0i64;
        atexit(`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::`dynamic atexit destructor for 'defaultStrokeStyle'');
        Init_thread_footer(&__TSS0__4__GetStrokeStyle___ShapeDataPacked_V__ArrayLH_POD_E_01UArrayDefaultPolicy_Scaleform___Scaleform___Render_Scaleform__UEBAXIPEAUStrokeStyleType_34__Z_4HA);
      }
    }
    p->Width = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Width;
    p->Units = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Units;
    p->Flags = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Flags;
    p->Miter = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Miter;
    p->Color = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.Color;
    pObject = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject;
    if ( `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject )
    {
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject);
      pObject = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject;
    }
    v5 = (Scaleform::RefCountVImpl *)p->pFill.pObject;
    if ( v5 )
    {
      Scaleform::RefCountImpl::Release(v5);
      pObject = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pFill.pObject;
    }
    p->pFill.pObject = pObject;
    v6 = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pDashes.pObject;
    if ( `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pDashes.pObject )
    {
      Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)`Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pDashes.pObject);
      v6 = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pDashes.pObject;
    }
    v7 = (Scaleform::RefCountVImpl *)p->pDashes.pObject;
    if ( v7 )
    {
      Scaleform::RefCountImpl::Release(v7);
      v6 = `Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyle'::`5'::defaultStrokeStyle.pDashes.pObject;
    }
    p->pDashes.pObject = v6;
  }
}

__int64 __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::GetStrokeStyleCount(
        Concurrency::details::VirtualProcessorRoot *this)
{
  return this->m_executionResource.m_nodeId;
}

void __fastcall Scaleform::Render::GlyphCache::Initialize(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::HAL *ren,
        Scaleform::Render::PrimitiveFillManager *fillMan)
{
  this->pRenderer = ren;
  this->pFillMan = fillMan;
  if ( ren->IsInitialized(ren) )
    Scaleform::Render::GlyphCache::initialize(this);
}

bool __fastcall Scaleform::Render::GlyphShape::IsEmpty(Scaleform::Render::GlyphShape *this)
{
  return this->Data.Data.Size == 0;
}

void Scaleform::Render::GlyphCache::LogWarning(Scaleform::Render::GlyphCache *this, const char *fmt, ...)
{
  Scaleform::Log *pLog; // rcx
  int v3[6]; // [rsp+20h] [rbp-18h] BYREF
  va_list va; // [rsp+50h] [rbp+18h] BYREF

  va_start(va, fmt);
  pLog = this->pLog;
  if ( pLog )
  {
    v3[0] = 143360;
    ((void (__fastcall *)(Scaleform::Log *, int *, const char *, __int64 *))pLog->LogMessageVarg)(
      pLog,
      v3,
      fmt,
      (__int64 *)va);
  }
}

Scaleform::Render::ImagePlane *__fastcall Scaleform::Render::GlyphTextureMapper::Map(
        Scaleform::Render::GlyphTextureMapper *this)
{
  unsigned int Method; // eax
  void *pObject; // rcx
  __int64 v4; // r9

  Method = this->Method;
  if ( Method )
  {
    if ( Method != 2 )
      return 0i64;
    if ( !this->Mapped )
    {
      pObject = this->pRawImg.pObject;
      v4 = 0i64;
      goto LABEL_8;
    }
  }
  else if ( !this->Mapped )
  {
    pObject = this->pTexImg.pObject;
    v4 = 1i64;
LABEL_8:
    if ( (*(unsigned __int8 (__fastcall **)(void *, Scaleform::Render::ImageData *, _QWORD, __int64))(*(_QWORD *)pObject + 136i64))(
           pObject,
           &this->Data,
           0i64,
           v4) )
    {
      this->Mapped = 1;
      return this->Data.pPlanes;
    }
    return 0i64;
  }
  return this->Data.pPlanes;
}

void __fastcall Scaleform::Render::GlyphCache::MergeCacheSlots(Scaleform::Render::GlyphCache *this)
{
  Scaleform::Render::GlyphQueue::MergeEmptySlots(&this->Queue);
}

void __fastcall Scaleform::Render::GlyphCache::OnBeginFrame(Scaleform::Render::GlyphCache *this)
{
  Scaleform::Render::HAL *pRenderer; // rcx
  Scaleform::Render::FontCacheHandleManager *pObject; // rcx

  if ( this->pFontHandleManager.pObject )
    goto LABEL_5;
  pRenderer = this->pRenderer;
  if ( pRenderer && pRenderer->IsInitialized(pRenderer) )
  {
    Scaleform::Render::GlyphCache::initialize(this);
LABEL_5:
    pObject = this->pFontHandleManager.pObject;
    if ( pObject )
      Scaleform::Render::FontCacheHandleManager::ProcessKillList(pObject);
  }
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphCache::RasterizeGlyph(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::GlyphRunData *data,
        Scaleform::Render::TextMeshProvider *tm,
        const Scaleform::Render::GlyphParam *gp)
{
  int upperCaseTop; // ebp
  int lowerCaseTop; // er14
  bool v11; // bl
  float stretch; // xmm9_4
  Scaleform::Render::Font *pFont; // rbp
  __int16 v14; // ax
  Scaleform::Render::Font *v15; // rbp
  __int16 v16; // ax
  signed int HintedNomHeight; // eax
  float NomHeight; // xmm0_4
  float v19; // xmm7_4
  float v20; // xmm6_4
  float v21; // xmm0_4
  unsigned int v22; // ebx
  float screenSize; // xmm6_4
  const Scaleform::Render::ToleranceParams *ToleranceParams; // rax
  const Scaleform::Render::ToleranceParams *v25; // rax
  __int64 SlotPadding; // r14
  int v27; // ebx
  int v28; // ebp
  int v29; // esi
  int v30; // er12
  unsigned int v31; // ebp
  unsigned int MaxSlotHeight; // er12
  Scaleform::Render::GlyphNode *Glyph; // rax
  unsigned __int8 *v34; // rcx
  bool v35; // r13
  unsigned int i; // ebx
  unsigned __int8 *v37; // rsi
  Scaleform::Render::Rasterizer_vtbl *v38; // rax
  Scaleform::Render::GlyphNode *node; // [rsp+C0h] [rbp+8h]

  if ( this->MaxNumTextures )
  {
    if ( data->RasterSize )
    {
      return Scaleform::Render::GlyphCache::getPrerasterizedGlyph(this, data, tm, gp);
    }
    else if ( data->pShape )
    {
      upperCaseTop = 0;
      lowerCaseTop = 0;
      v11 = this->Param.UseAutoFit && (gp->Flags & 2) != 0;
      if ( (gp->Flags & 4) != 0 )
        stretch = FLOAT_2_5;
      else
        stretch = *(float *)&FLOAT_1_0;
      if ( v11 )
      {
        pFont = gp->pFont->pFont;
        if ( !pFont->LowerCaseTop )
          Scaleform::Render::Font::calcLowerUpperTop(gp->pFont->pFont, this);
        v14 = pFont->LowerCaseTop;
        if ( v14 <= 0 )
          v14 = 0;
        lowerCaseTop = (unsigned __int16)v14;
        v15 = gp->pFont->pFont;
        if ( !v15->UpperCaseTop )
          Scaleform::Render::Font::calcLowerUpperTop(gp->pFont->pFont, this);
        v16 = v15->UpperCaseTop;
        if ( v16 <= 0 )
          v16 = 0;
        upperCaseTop = (unsigned __int16)v16;
        if ( !lowerCaseTop || !v16 )
          v11 = 0;
      }
      HintedNomHeight = data->HintedNomHeight;
      NomHeight = data->NomHeight;
      if ( HintedNomHeight )
      {
        v11 = 0;
        NomHeight = (float)HintedNomHeight;
      }
      v19 = (float)((float)gp->FontSize * 0.0625) / NomHeight;
      v20 = floorf(v19 * data->GlyphBounds.y1);
      v21 = ceilf(v19 * data->GlyphBounds.y2);
      if ( v20 >= v21 )
      {
        v20 = 0.0;
        v21 = 0.0;
      }
      if ( (int)(float)(v21 - v20) + 2 * this->SlotPadding < this->MaxSlotHeight )
      {
        this->Ras.Clear(&this->Ras);
        if ( v11 )
        {
          v22 = (int)data->NomHeight;
          screenSize = (float)gp->FontSize * 0.0625;
          ToleranceParams = Scaleform::Render::HAL::GetToleranceParams(hal);
          Scaleform::Render::GlyphCache::addShapeAutoFit(
            this,
            data->pShape,
            ToleranceParams,
            v22,
            lowerCaseTop,
            upperCaseTop,
            screenSize,
            stretch);
        }
        else
        {
          v25 = Scaleform::Render::HAL::GetToleranceParams(hal);
          Scaleform::Render::GlyphCache::addShapeToRasterizer(this, data->pShape, v25, v19 * stretch, v19);
        }
        SlotPadding = (int)this->SlotPadding;
        v27 = 0;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        if ( Scaleform::Render::Rasterizer::SortCells(&this->Ras) )
        {
          v27 = this->Ras.MinX - SlotPadding;
          v28 = SlotPadding + this->Ras.MaxX;
          v29 = this->Ras.MinY - SlotPadding;
          v30 = SlotPadding + this->Ras.MaxY;
        }
        v31 = v28 - v27 + 1;
        MaxSlotHeight = v30 - v29 + 1;
        if ( MaxSlotHeight > this->MaxSlotHeight )
          MaxSlotHeight = this->MaxSlotHeight;
        Glyph = Scaleform::Render::GlyphCache::allocateGlyph(this, tm, gp, v31, MaxSlotHeight);
        node = Glyph;
        if ( Glyph )
        {
          Glyph->Scale = 1.0;
          Glyph->Origin.x = 16 * v27;
          Glyph->Origin.y = 16 * v29;
          Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
            &this->RasterData.Data,
            v31 * MaxSlotHeight);
          v34 = this->RasterData.Data.Data;
          this->RasterPitch = v31;
          memset(v34, 0, v31 * MaxSlotHeight);
          if ( this->Ras.Gamma1 != 1.0 )
            Scaleform::Render::Rasterizer::SetGamma1(&this->Ras, 1.0);
          v35 = v31 >= 5 && stretch > 1.0;
          for ( i = 0; i < this->Ras.SortedYs.Size; ++i )
          {
            if ( i + (unsigned int)SlotPadding >= MaxSlotHeight )
              break;
            v37 = &this->RasterData.Data.Data[this->RasterPitch * (i + (unsigned int)SlotPadding)];
            Scaleform::Render::Rasterizer::SweepScanline(&this->Ras, i, &v37[SlotPadding], 1u, 0);
            if ( v35 )
              Scaleform::Render::GlyphCache::filterScanline(this, v37, v31);
          }
          Scaleform::Render::GlyphCache::updateTextureGlyph(this, node);
          v38 = this->Ras.__vftable;
          ++this->RasterizationCount;
          v38->Clear(&this->Ras);
          return node;
        }
        else
        {
          this->Result = Res_CacheFull;
          Scaleform::Render::GlyphCache::cacheFullWarning(this);
          return 0i64;
        }
      }
      else
      {
        this->Result = Res_ShapeIsTooBig;
        return 0i64;
      }
    }
    else
    {
      this->Result = Res_ShapeNotFound;
      return 0i64;
    }
  }
  else
  {
    this->Result = Res_NoRasterCache;
    return 0i64;
  }
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphCache::RasterizeShadow(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::GlyphRunData *data,
        Scaleform::Render::TextMeshProvider *tm,
        const Scaleform::Render::GlyphParam *gp,
        float screenSize,
        const Scaleform::Render::GlyphRaster *ras)
{
  Scaleform::Render::GlyphNode *result; // rax
  const Scaleform::Render::GlyphParam *v11; // r15
  float HeightRatio; // xmm0_4
  float v13; // xmm9_4
  float v14; // xmm6_4
  float rx; // xmm8_4
  float ry; // xmm7_4
  signed int HintedNomHeight; // eax
  float v18; // xmm1_4
  float NomHeight; // xmm0_4
  float y1; // xmm2_4
  float scaleY; // xmm6_4
  float y2; // xmm0_4
  float v23; // xmm0_4
  float v24; // xmm1_4
  const Scaleform::Render::ToleranceParams *ToleranceParams; // rax
  unsigned int SlotPadding; // ebx
  unsigned __int64 v27; // rsi
  int v28; // er12
  unsigned int v29; // er14
  unsigned int v30; // ebp
  unsigned int v31; // eax
  int v32; // ebx
  unsigned int v33; // er12
  unsigned int h; // ebp
  Scaleform::Render::GlyphNode *Glyph; // rax
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *p_RasterData; // r14
  unsigned __int8 *v37; // rcx
  Tween::EasingType v38; // xmm1_4
  unsigned int v39; // ebx
  int v40; // ebx
  float v41; // xmm0_4
  unsigned __int8 *v42; // r8
  unsigned __int8 *v43; // rdx
  __int16 v44; // ax
  Scaleform::Render::Rasterizer_vtbl *v45; // rax
  signed int v46; // [rsp+50h] [rbp-B8h]
  Scaleform::Render::GlyphNode *node; // [rsp+58h] [rbp-B0h]
  unsigned int v48; // [rsp+110h] [rbp+8h]

  if ( this->MaxNumTextures )
  {
    v11 = gp;
    if ( !ras
      || (result = Scaleform::Render::GlyphCache::createShadowFromRaster(this, data, tm, gp, screenSize, ras)) == 0i64 )
    {
      if ( data->pShape )
      {
        HeightRatio = data->HeightRatio;
        v13 = *(float *)&FLOAT_1_0;
        v14 = (float)gp->FontSize * 0.0625;
        rx = (float)((float)((float)gp->BlurX * 0.0625) * (float)(v14 / screenSize)) * HeightRatio;
        ry = (float)((float)((float)gp->BlurY * 0.0625) * (float)(v14 / screenSize)) * HeightRatio;
        HintedNomHeight = data->HintedNomHeight;
        v18 = (float)((float)(int)this->MaxSlotHeight * this->ShadowQuality) - (float)(2 * this->SlotPadding);
        if ( HintedNomHeight )
          NomHeight = (float)HintedNomHeight;
        else
          NomHeight = data->NomHeight;
        y1 = data->GlyphBounds.y1;
        scaleY = v14 / NomHeight;
        y2 = data->GlyphBounds.y2;
        if ( y1 >= y2 )
        {
          y2 = 0.0;
          y1 = 0.0;
        }
        v23 = (float)((float)(y2 * scaleY) + ry) - (float)((float)(y1 * scaleY) - ry);
        if ( v23 >= v18 )
        {
          v24 = v18 / v23;
          scaleY = scaleY * v24;
          rx = rx * v24;
          ry = ry * v24;
          v13 = 1.0 / v24;
        }
        this->Ras.Clear(&this->Ras);
        ToleranceParams = Scaleform::Render::HAL::GetToleranceParams(hal);
        Scaleform::Render::GlyphCache::addShapeToRasterizer(this, data->pShape, ToleranceParams, scaleY, scaleY);
        SlotPadding = this->SlotPadding;
        v46 = SlotPadding + (int)ceilf(rx);
        v27 = 0i64;
        v28 = 0;
        v29 = 0;
        v30 = 0;
        v31 = SlotPadding + (int)ceilf(ry);
        v32 = 0;
        v48 = v31;
        if ( Scaleform::Render::Rasterizer::SortCells(&this->Ras) )
        {
          v32 = this->Ras.MinX - v46;
          v28 = v46 + this->Ras.MaxX;
          v29 = this->Ras.MinY - v48;
          v30 = v48 + this->Ras.MaxY;
        }
        v33 = v28 - v32 + 1;
        h = v30 - v29 + 1;
        if ( h > this->MaxSlotHeight )
          h = this->MaxSlotHeight;
        Glyph = Scaleform::Render::GlyphCache::allocateGlyph(this, tm, gp, v33, h);
        node = Glyph;
        if ( Glyph )
        {
          Glyph->Scale = v13;
          Glyph->Origin.x = 16 * v32;
          Glyph->Origin.y = 16 * v29;
          p_RasterData = &this->RasterData;
          Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
            &this->RasterData.Data,
            v33 * h);
          v37 = this->RasterData.Data.Data;
          this->RasterPitch = v33;
          memset(v37, 0, v33 * h);
          if ( v33 > 1 && h > 1 )
          {
            v38 = FLOAT_1_0;
            if ( gp->BlurX || gp->BlurY )
              v38 = FLOAT_0_40000001;
            if ( *(float *)&v38 != this->Ras.Gamma2 )
              Scaleform::Render::Rasterizer::SetGamma2(&this->Ras, *(float *)&v38);
            v39 = 0;
            if ( this->Ras.SortedYs.Size )
            {
              do
              {
                if ( v39 + v48 >= h )
                  break;
                Scaleform::Render::Rasterizer::SweepScanline(
                  &this->Ras,
                  v39,
                  &p_RasterData->Data.Data[v46 + (unsigned __int64)(this->RasterPitch * (v39 + v48))],
                  1u,
                  1);
                ++v39;
              }
              while ( v39 < this->Ras.SortedYs.Size );
              v11 = gp;
            }
            v40 = 0;
            if ( (v11->Flags & 0x20) != 0 )
              Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>::operator=(
                &this->KnockOutCopy,
                &this->RasterData);
            if ( rx > 0.0 || ry > 0.0 )
            {
              Scaleform::Render::GlyphCache::recursiveBlur(
                this,
                p_RasterData->Data.Data,
                this->RasterPitch,
                0,
                0,
                v33,
                h,
                rx,
                ry);
              v40 = 8;
            }
            v41 = (float)v11->BlurStrength * 0.0625;
            if ( v41 <= 1.0 )
              v40 = 0;
            Scaleform::Render::GlyphCache::strengthenImage(
              this,
              p_RasterData->Data.Data,
              this->RasterPitch,
              0,
              0,
              v33,
              h,
              v41,
              v40);
            if ( (v11->Flags & 0x20) != 0 )
            {
              v42 = this->KnockOutCopy.Data.Data;
              v43 = p_RasterData->Data.Data;
              if ( this->KnockOutCopy.Data.Size )
              {
                do
                {
                  v44 = *v42++;
                  ++v43;
                  ++v27;
                  *(v43 - 1) = (unsigned __int16)((255 - v44) * *(v43 - 1) + 255) >> 8;
                }
                while ( v27 < this->KnockOutCopy.Data.Size );
              }
            }
          }
          Scaleform::Render::GlyphCache::updateTextureGlyph(this, node);
          v45 = this->Ras.__vftable;
          ++this->RasterizationCount;
          v45->Clear(&this->Ras);
          return node;
        }
        else
        {
          this->Result = Res_CacheFull;
          if ( this->RasterCacheWarning )
          {
            Scaleform::Render::GlyphCache::LogWarning(
              this,
              "Warning: Increase raster glyph cache capacity - see GlyphCacheParams");
            this->RasterCacheWarning = 0;
          }
          return 0i64;
        }
      }
      else
      {
        this->Result = Res_ShapeNotFound;
        return 0i64;
      }
    }
  }
  else
  {
    this->Result = Res_NoRasterCache;
    return 0i64;
  }
  return result;
}

__int64 __fastcall Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
        Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int pos,
        int *data)
{
  __int64 v3; // r9
  __int64 v5; // rdx
  unsigned __int8 *v6; // r8
  unsigned __int8 *v7; // r11
  unsigned __int8 v8; // cl
  __int64 v9; // rax
  int v10; // ebx
  __int64 v11; // r9
  unsigned __int8 v12; // cl
  unsigned int v13; // eax
  int v14; // edx
  int v15; // edx
  int v16; // er8
  int v17; // edx
  int v18; // edx
  int v19; // ecx
  unsigned int v20; // er8
  int v21; // edx
  int v22; // eax
  unsigned int v23; // er8
  int v24; // edx
  int v25; // ecx
  unsigned int v26; // er8
  int v27; // eax
  int v28; // edx
  int v29; // er9
  unsigned int v30; // er8
  int v31; // er9
  int v32; // er8
  unsigned int v33; // er8
  int v34; // edx
  int v35; // ecx
  unsigned int v36; // er8
  unsigned int v37; // edx
  int v38; // eax
  unsigned int v39; // er8
  unsigned int v40; // er9
  int v41; // edx
  unsigned int v42; // edx
  char v43; // al
  int v44; // ecx
  int v45; // eax
  unsigned int v46; // er8
  unsigned int v47; // er9
  int v48; // edx
  unsigned int v49; // edx
  unsigned __int8 v50; // al
  int v51; // ecx
  int v52; // eax
  unsigned int v53; // er8
  unsigned int v54; // er9
  int v55; // edx
  int v56; // ecx
  unsigned int v57; // edx
  unsigned __int8 v58; // al
  int v59; // ecx
  int v60; // eax
  unsigned int v61; // er8
  unsigned int v62; // er9
  int v63; // edx
  int v64; // ecx
  unsigned int v65; // edx
  unsigned __int8 v66; // al
  int v67; // ecx
  int v68; // eax
  unsigned __int8 v70; // [rsp+0h] [rbp-20h]
  unsigned __int8 v71; // [rsp+1h] [rbp-1Fh] BYREF
  unsigned __int8 v72; // [rsp+2h] [rbp-1Eh]
  unsigned __int8 v73; // [rsp+3h] [rbp-1Dh]
  unsigned __int8 v74; // [rsp+4h] [rbp-1Ch]
  unsigned __int8 v75; // [rsp+5h] [rbp-1Bh]
  unsigned __int8 v76; // [rsp+6h] [rbp-1Ah]
  unsigned __int8 v77; // [rsp+7h] [rbp-19h]
  unsigned __int8 v78; // [rsp+8h] [rbp-18h]
  unsigned __int8 v79; // [rsp+9h] [rbp-17h]
  unsigned __int8 v80; // [rsp+Ah] [rbp-16h]
  unsigned __int8 v81; // [rsp+Bh] [rbp-15h]
  unsigned __int8 v82; // [rsp+Ch] [rbp-14h]
  unsigned __int8 v83; // [rsp+Dh] [rbp-13h]
  unsigned __int8 v84; // [rsp+Eh] [rbp-12h]
  char v85; // [rsp+Fh] [rbp-11h]

  v3 = pos;
  v5 = pos + 1;
  v6 = &v71;
  v7 = this->Data->Data.Data;
  v70 = v7[v3];
  v8 = v70;
  v9 = v70 & 0xF;
  v10 = Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::Sizes[v9];
  if ( Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::Sizes[v9] )
  {
    v11 = Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::Sizes[v9];
    do
    {
      v12 = v7[v5];
      v5 = (unsigned int)(v5 + 1);
      *v6++ = v12;
      --v11;
    }
    while ( v11 );
    v8 = v70;
  }
  v13 = v8;
  switch ( v8 & 0xF )
  {
    case 0:
      *data = 0;
      goto LABEL_7;
    case 1:
      v14 = v71 | (((char)v72 | ((char)v73 << 8)) << 8);
      *data = 0;
      data[1] = (v8 >> 4) | (16 * v14);
      break;
    case 2:
      *data = 1;
LABEL_7:
      data[1] = (16 * (char)v71) | (v8 >> 4);
      break;
    case 3:
      v15 = v71 | (((char)v72 | ((char)v73 << 8)) << 8);
      *data = 1;
      data[1] = (v8 >> 4) | (16 * v15);
      break;
    case 4:
      v16 = (char)v71;
      v17 = (char)(v71 << 6);
      *data = 2;
      data[1] = (v17 | (v8 >> 2)) >> 2;
      data[2] = v16 >> 2;
      break;
    case 5:
      v18 = (v8 >> 4) | (4 * (char)(4 * v71));
      v19 = (4 * (char)v72) | (v71 >> 6);
      *data = 2;
      data[2] = v19;
      data[1] = v18;
      break;
    case 6:
      v20 = v72;
      v21 = v71 | (4 * (char)(v72 << 6));
      *data = 2;
      v22 = (char)v73 << 6;
      data[1] = (v8 >> 4) | (16 * v21);
      data[2] = v22 | (v20 >> 2);
      break;
    case 7:
      v23 = v74;
      v24 = v73 | (4 * (char)(v74 << 6));
      *data = 2;
      v25 = v76 | ((char)v77 << 8);
      data[1] = (v13 >> 4) | (16 * (v71 | ((v72 | (v24 << 8)) << 8)));
      data[2] = (v23 >> 2) | ((v75 | (v25 << 8)) << 6);
      break;
    case 8:
      v26 = v71;
      v27 = (char)(v71 << 7) | (v8 >> 1);
      *data = 3;
      v28 = (char)v72;
      data[1] = v27 >> 3;
      data[2] = (char)(4 * v26) >> 3;
      data[4] = v28 >> 3;
      data[3] = (int)((char)(32 * v28) | (v26 >> 3)) >> 3;
      break;
    case 9:
      v29 = v71 >> 2;
      v30 = v72;
      data[1] = ((char)(32 * v71) | (v8 >> 3)) >> 1;
      v31 = ((char)((_BYTE)v30 << 6) | v29) >> 1;
      v32 = (int)((char)(v73 << 7) | (v30 >> 1)) >> 1;
      data[4] = (char)v73 >> 1;
      *data = 3;
      data[2] = v31;
      data[3] = v32;
      break;
    case 0xA:
      v33 = v71;
      v34 = 2 * (char)(8 * v71);
      *data = 3;
      data[1] = (v8 >> 4) | v34;
      v35 = (v33 >> 5) | (2 * (char)(4 * v72));
      v36 = v72;
      v37 = v73;
      data[2] = v35;
      v38 = 2 * (char)v74;
      data[3] = (2 * (char)(2 * v37)) | (v36 >> 6);
      data[4] = v38 | (v37 >> 7);
      break;
    case 0xB:
      v39 = v71;
      v40 = v73;
      v41 = (v8 >> 4) | (8 * (char)(2 * v71));
      *data = 3;
      data[1] = v41;
      v42 = v74;
      v43 = 8 * v74;
      data[2] = (v39 >> 7) | (2 * (v72 | (4 * (char)((_BYTE)v40 << 6))));
      v44 = (v40 >> 2) | (8 * v43);
      v45 = (char)v75;
      data[3] = v44;
      data[4] = (8 * v45) | (v42 >> 5);
      break;
    case 0xC:
      v46 = v72;
      v47 = v73;
      v48 = (v8 >> 4) | (16 * (v71 | (2 * (char)(v72 << 7))));
      *data = 3;
      data[1] = v48;
      v49 = v75;
      v50 = v75;
      data[2] = (v46 >> 1) | (32 * (char)(4 * v47));
      v51 = (v47 >> 6) | (4 * (v74 | (8 * (char)(32 * v50))));
      v52 = (char)v76;
      data[3] = v51;
      data[4] = (32 * v52) | (v49 >> 3);
      break;
    case 0xD:
      v53 = v72;
      v54 = v74;
      v55 = v71 | (8 * (char)(32 * v72));
      *data = 3;
      v56 = v73 | (4 * (char)((_BYTE)v54 << 6));
      data[1] = (v13 >> 4) | (16 * v55);
      v57 = v76;
      v58 = v76;
      data[2] = (v53 >> 3) | (32 * v56);
      v59 = (v54 >> 2) | ((v75 | (2 * (char)(v58 << 7))) << 6);
      v60 = (char)v77;
      data[3] = v59;
      data[4] = (v60 << 7) | (v57 >> 1);
      break;
    case 0xE:
      v61 = v74;
      v62 = v78;
      v63 = v73 | (8 * (char)(32 * v74));
      *data = 3;
      v64 = v77 | (4 * (char)((_BYTE)v62 << 6));
      data[1] = (v13 >> 4) | (16 * (v71 | ((v72 | (v63 << 8)) << 8)));
      v65 = v82;
      v66 = v82;
      data[2] = (v61 >> 3) | (32 * (v75 | ((v76 | (v64 << 8)) << 8)));
      v67 = (v62 >> 2) | ((v79 | ((v80 | ((v81 | (2 * (char)(v66 << 7))) << 8)) << 8)) << 6);
      v68 = v84;
      data[3] = v67;
      data[4] = (v65 >> 1) | ((v83 | ((v68 | (v85 << 8)) << 8)) << 7);
      break;
    case 0xF:
      *data = 4;
      break;
  }
  return (unsigned int)(v10 + 1);
}

Scaleform::Render::PathEdgeType __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord)
{
  return Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
           &this->Decoder,
           pos,
           coord);
}

__int64 __fastcall Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
        Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord)
{
  __int64 result; // rax
  int v7; // er9
  int v8; // er8
  float v9; // xmm1_4
  int data; // [rsp+20h] [rbp-28h] BYREF
  int v11; // [rsp+24h] [rbp-24h]
  int v12; // [rsp+28h] [rbp-20h]
  int v13; // [rsp+2Ch] [rbp-1Ch]
  int v14; // [rsp+30h] [rbp-18h]

  pos->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadEdge(
                &this->Decoder,
                pos->Pos,
                &data);
  switch ( data )
  {
    case 0:
      pos->LastX += v11;
      goto LABEL_10;
    case 1:
      pos->LastY += v11;
      goto LABEL_10;
    case 2:
      pos->LastX += v11;
      pos->LastY += v12;
LABEL_10:
      result = 1i64;
      *coord = (float)pos->LastX * this->OneOverMultiplier;
      coord[1] = (float)pos->LastY * this->OneOverMultiplier;
      return result;
  }
  if ( data != 3 )
    return 0i64;
  result = 2i64;
  v7 = pos->LastX + v13;
  v8 = pos->LastY + v14;
  v9 = (float)(pos->LastY + v12);
  *coord = (float)(pos->LastX + v11) * this->OneOverMultiplier;
  coord[1] = v9 * this->OneOverMultiplier;
  coord[2] = (float)v7 * this->OneOverMultiplier;
  coord[3] = (float)v8 * this->OneOverMultiplier;
  pos->LastX = v7;
  pos->LastY = v8;
  return result;
}

Scaleform::Render::ShapePathType __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadPathInfo(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord,
        unsigned int *styles)
{
  return Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadPathInfo(
           &this->Decoder,
           pos,
           coord,
           styles);
}

__int64 __fastcall Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadPathInfo(
        Scaleform::Render::ShapeDataPackedDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        float *coord,
        unsigned int *styles)
{
  __int64 v5; // rdx
  unsigned __int8 *Data; // r10
  unsigned int v10; // esi
  unsigned int v11; // esi
  int v12; // eax
  unsigned int SInt30; // eax
  int StartX; // edx
  int StartY; // ecx

  v5 = pos->Pos;
  Data = this->Decoder.Data->Data.Data;
  v10 = Data[v5];
  if ( (v10 & 1) != 0 )
  {
    v11 = (v10 >> 1) | (Data[(unsigned int)(v5 + 1)] << 7);
    v12 = 2;
  }
  else
  {
    v11 = v10 >> 1;
    v12 = 1;
  }
  pos->Pos += v12;
  if ( v11 )
  {
    pos->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadUInt30(
                  &this->Decoder,
                  pos->Pos,
                  styles);
    pos->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadUInt30(
                  &this->Decoder,
                  pos->Pos,
                  styles + 1);
    pos->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadUInt30(
                  &this->Decoder,
                  pos->Pos,
                  styles + 2);
    pos->Pos += Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadSInt30(
                  &this->Decoder,
                  pos->Pos,
                  &pos->StartX);
    SInt30 = Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadSInt30(
               &this->Decoder,
               pos->Pos,
               &pos->StartY);
    StartX = pos->StartX;
    pos->Pos += SInt30;
    StartY = pos->StartY;
    pos->LastX = StartX;
    pos->LastY = StartY;
    *coord = (float)StartX * this->OneOverMultiplier;
    coord[1] = (float)pos->StartY * this->OneOverMultiplier;
  }
  return v11;
}

__int64 __fastcall Scaleform::Render::PathDataDecoder<Scaleform::ArrayDH<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ReadSInt30(
        Scaleform::Render::PathDataDecoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        unsigned int pos,
        int *v)
{
  unsigned __int8 *Data; // r11
  int v4; // er9
  int v5; // er9
  __int64 result; // rax
  int v7; // edx

  Data = this->Data->Data.Data;
  v4 = (char)Data[pos];
  if ( (Data[pos] & 3) != 0 )
  {
    if ( (Data[pos] & 3) == 1 )
    {
      *v = (v4 >> 2) & 0x3F | ((char)Data[pos + 1] << 6);
      return 2i64;
    }
    else
    {
      v5 = (v4 >> 2) & 0x3F;
      if ( (Data[pos] & 3) == 2 )
      {
        result = 3i64;
        v7 = v5 | ((Data[pos + 1] | ((char)Data[pos + 2] << 8)) << 6);
      }
      else
      {
        result = 4i64;
        v7 = v5 | ((Data[pos + 1] | ((Data[pos + 2] | ((char)Data[pos + 3] << 8)) << 8)) << 6);
      }
      *v = v7;
    }
  }
  else
  {
    result = 1i64;
    *v = v4 >> 2;
  }
  return result;
}

Scaleform::Render::FontCacheHandle *__fastcall Scaleform::Render::GlyphCache::RegisterFont(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::Font *font)
{
  Scaleform::Render::HAL *pRenderer; // rcx
  Scaleform::Render::FontCacheHandleManager *pObject; // rcx

  if ( !this->pFontHandleManager.pObject )
  {
    pRenderer = this->pRenderer;
    if ( !pRenderer || !pRenderer->IsInitialized(pRenderer) )
      return 0i64;
    Scaleform::Render::GlyphCache::initialize(this);
  }
  pObject = this->pFontHandleManager.pObject;
  if ( pObject )
    return Scaleform::Render::FontCacheHandleManager::RegisterFont(pObject, font);
  return 0i64;
}

void __fastcall Scaleform::ArrayDataBase<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<unsigned int,Scaleform::AllocatorLH_POD<unsigned int,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  unsigned int *Data; // rdx
  unsigned __int64 v6; // rdi
  unsigned __int64 v7; // r8
  unsigned int *v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      v7 = 4 * v6;
      if ( Data )
      {
        v8 = (unsigned int *)Scaleform::Memory::pGlobalHeap->Realloc(Scaleform::Memory::pGlobalHeap, Data, v7);
        this->Policy.Capacity = v6;
        this->Data = v8;
        return;
      }
      v9 = 2;
      this->Data = (unsigned int *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
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

void __fastcall Scaleform::ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2>>::Reserve(
        Scaleform::ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2> > *this,
        unsigned __int64 cap,
        unsigned __int64 extraTail)
{
  int v6; // [rsp+30h] [rbp+8h] BYREF

  if ( cap <= this->Capacity )
  {
    this->Size = 0i64;
  }
  else
  {
    Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
    this->Capacity = cap + extraTail;
    if ( cap + extraTail )
    {
      v6 = 2;
      this->Data = (Scaleform::Render::Texture::UpdateDesc *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                               Scaleform::Memory::pGlobalHeap,
                                                               this,
                                                               56 * (cap + extraTail),
                                                               &v6);
    }
    else
    {
      this->Data = 0i64;
    }
    this->Size = 0i64;
  }
}

void __fastcall Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

void __fastcall Scaleform::ArrayData<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        Scaleform::ArrayData<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy> *this,
        unsigned __int64 newSize)
{
  if ( newSize >= this->Size )
  {
    if ( newSize > this->Policy.Capacity )
    {
      Scaleform::ArrayDataBase<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<unsigned int,Scaleform::AllocatorLH_POD<unsigned int,2>,Scaleform::ArrayDefaultPolicy> *)this,
        this,
        newSize + (newSize >> 2));
      this->Size = newSize;
      return;
    }
  }
  else if ( newSize < this->Policy.Capacity >> 1 )
  {
    Scaleform::ArrayDataBase<float,Scaleform::AllocatorLH_POD<float,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      (Scaleform::ArrayDataBase<unsigned int,Scaleform::AllocatorLH_POD<unsigned int,2>,Scaleform::ArrayDefaultPolicy> *)this,
      this,
      newSize);
    this->Size = newSize;
    return;
  }
  this->Size = newSize;
}

char __fastcall Scaleform::Render::GlyphCache::SetParams(
        Scaleform::Render::GlyphCache *this,
        const Scaleform::Render::GlyphCacheParams *params)
{
  __int64 v3; // rcx

  *(Scaleform::Render::GlyphCacheParams *)&this->RefCount = *params;
  v3 = *(_QWORD *)&this->Param.FauxBoldRatio;
  if ( v3 && (*(unsigned __int8 (__fastcall **)(__int64))(*(_QWORD *)v3 + 48i64))(v3) )
    Scaleform::Render::GlyphCache::initialize((Scaleform::Render::GlyphCache *)((char *)this - 24));
  return 1;
}

void __fastcall Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
        Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *this,
        Scaleform::Render::ShapePosInfo *pos,
        Scaleform::Render::ShapePathType type,
        unsigned int leftStyle,
        unsigned int rightStyle,
        unsigned int strokeStyle,
        float startX,
        float startY)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rax
  float v10; // xmm6_4
  int v12; // edx
  int v13; // edx
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v14; // [rsp+20h] [rbp-28h] BYREF
  float Multiplier; // [rsp+28h] [rbp-20h]

  pContainer = this->pContainer;
  Multiplier = this->Multiplier;
  v10 = Multiplier;
  v14.Data = pContainer;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt15(
    &v14,
    type);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v14,
    leftStyle);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v14,
    rightStyle);
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt30(
    &v14,
    strokeStyle);
  v12 = (int)(float)(v10 * startX);
  pos->LastX = v12;
  pos->StartX = v12;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
    &v14,
    v12);
  v13 = (int)(float)(v10 * startY);
  pos->LastY = v13;
  pos->StartY = v13;
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
    &v14,
    v13);
}

Scaleform::Render::Matrix2x4<float> *__fastcall Scaleform::Render::GlyphFitter::StretchTo(
        Scaleform::Render::Stroker *this,
        Scaleform::Render::Matrix2x4<float> *result,
        float __formal,
        float a4)
{
  Scaleform::Render::Matrix2x4<float> *v4; // rax

  *(_OWORD *)&result->M[0][0] = 0x3F800000ui64;
  result->M[1][0] = 0.0;
  result->M[1][3] = 0.0;
  v4 = result;
  *(_QWORD *)&result->M[1][1] = 1065353216i64;
  return v4;
}

void __fastcall Scaleform::Render::GlyphCache::TextureLost(
        Scaleform::Render::GlyphCache *this,
        unsigned int textureId,
        unsigned int reason)
{
  __int64 v4; // rdi
  unsigned __int64 v5; // r10
  unsigned __int64 i; // rax
  Scaleform::Render::GlyphCache::UpdateRect **Pages; // r11
  __int64 v8; // r9
  __int64 v9; // rdx
  Scaleform::Render::GlyphCache::UpdateRect *v10; // r8
  __int64 v11; // rcx

  v4 = textureId;
  Scaleform::Render::GlyphQueue::CleanUpTexture(&this->Queue, textureId);
  v5 = 0i64;
  for ( i = 0i64; i < this->GlyphsToUpdate.Size; ++i )
  {
    Pages = this->GlyphsToUpdate.Pages;
    v8 = (__int64)&Pages[i >> 6][i & 0x3F];
    if ( *(_DWORD *)(v8 + 24) != (_DWORD)v4 )
    {
      v9 = v5 & 0x3F;
      v10 = Pages[v5++ >> 6];
      *(_OWORD *)&v10[v9].SrcX = *(_OWORD *)v8;
      *(_QWORD *)&v10[v9].w = *(_QWORD *)(v8 + 16);
      v10[v9].TextureId = *(_DWORD *)(v8 + 24);
    }
  }
  if ( v5 < this->GlyphsToUpdate.Size )
    this->GlyphsToUpdate.Size = v5;
  v11 = v4;
  this->Textures[v11].Valid = 0;
  this->Textures[v11].NumGlyphsToUpdate = 0;
}

void __fastcall Scaleform::Render::GlyphTextureImage::TextureLost(
        Scaleform::Render::GlyphTextureImage *this,
        Scaleform::Render::Image::TextureLossReason reason)
{
  Scaleform::Render::TextureImage::TextureLost(this);
  Scaleform::Render::GlyphCache::TextureLost(this->pCache, this->TextureId, reason);
}

void __fastcall Scaleform::Render::GlyphCache::UnlockBuffers(Scaleform::Render::GlyphCache *this)
{
  unsigned int v2; // edi
  __int64 v3; // rbx
  int v4; // eax
  __int64 v5; // rax

  if ( LODWORD(this->Queue.Notifiers.pHeapOrPtr) == 1 )
    Scaleform::Render::GlyphCache::partialUpdateTextures((Scaleform::Render::GlyphCache *)((char *)this - 16));
  v2 = 0;
  if ( LODWORD(this->pTexMan) )
  {
    while ( 1 )
    {
      v3 = v2;
      v4 = *(_DWORD *)((char *)&this->ScaleU + v3 * 112);
      if ( v4 )
        break;
      if ( LOBYTE(this->Textures[v3].pTexImg.pObject) )
      {
        (*(void (__fastcall **)(unsigned __int8 *))(*(_QWORD *)this->Textures[v3].Data.Plane0.pData + 144i64))(this->Textures[v3].Data.Plane0.pData);
LABEL_10:
        LOBYTE(this->Textures[v3].pTexImg.pObject) = 0;
      }
LABEL_11:
      if ( ++v2 >= LODWORD(this->pTexMan) )
        goto LABEL_12;
    }
    if ( v4 != 2 || !LOBYTE(this->Textures[v3].pTexImg.pObject) )
      goto LABEL_11;
    (*(void (__fastcall **)(unsigned __int64))(*(_QWORD *)this->Textures[v3].Data.Plane0.DataSize + 144i64))(this->Textures[v3].Data.Plane0.DataSize);
    v5 = (*(__int64 (__fastcall **)(unsigned __int64, _QWORD))(*(_QWORD *)this->Textures[v3].Data.Plane0.DataSize
                                                             + 168i64))(
           this->Textures[v3].Data.Plane0.DataSize,
           *(_QWORD *)((char *)&this->ScaleV + v3 * 112));
    (*(void (__fastcall **)(__int64))(*(_QWORD *)v5 + 144i64))(v5);
    goto LABEL_10;
  }
LABEL_12:
  LODWORD(this->Notifier.pCache->__vftable) &= ~2u;
}

void __fastcall Scaleform::Render::GlyphCache::UnpinAllSlots(Scaleform::Render::GlyphCache *this)
{
  Scaleform::Render::TextMeshProvider *pNext; // rax
  Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > *p_TextInUse; // r9
  unsigned __int64 *p_Capacity; // rdx
  Scaleform::Render::TextMeshProvider *v5; // rax
  Scaleform::List<Scaleform::Render::TextMeshProvider,Scaleform::Render::TextMeshProvider,Scaleform::ListNode<Scaleform::Render::TextMeshProvider> > *p_TextInPin; // rdx
  bool v7; // zf
  $C228B5947597CC1444908D8D91ED005F *v8; // rcx
  Scaleform::Render::TextMeshProvider *v9; // rax
  Scaleform::Render::TextMeshProvider *v10; // rax

  pNext = this->TextInUse.Root.pNext;
  p_TextInUse = &this->TextInUse;
  p_Capacity = &this->RectsToUpdate.Capacity;
  if ( this == (Scaleform::Render::GlyphCache *)-4160i64 )
    p_Capacity = 0i64;
  while ( pNext != (Scaleform::Render::TextMeshProvider *)p_Capacity )
  {
    pNext->Flags &= 0xFFFFFFF9;
    pNext = pNext->pNext;
  }
  v5 = this->TextInPin.Root.pNext;
  p_TextInPin = &this->TextInPin;
  v7 = &this->TextInPin == 0i64;
  v8 = &this->TextInUse.Root.8;
  if ( v7 )
    v8 = 0i64;
  while ( v5 != (Scaleform::Render::TextMeshProvider *)v8 )
  {
    v5->Flags &= 0xFFFFFFF9;
    v5 = v5->pNext;
  }
  v9 = (Scaleform::Render::TextMeshProvider *)&p_TextInUse[-1].Root.8;
  if ( !p_TextInUse )
    v9 = 0i64;
  p_TextInUse->Root.pPrev = v9;
  p_TextInUse->Root.pNext = v9;
  v10 = (Scaleform::Render::TextMeshProvider *)&p_TextInPin[-1].Root.8;
  if ( !p_TextInPin )
    v10 = 0i64;
  p_TextInPin->Root.pPrev = v10;
  p_TextInPin->Root.pNext = v10;
  Scaleform::Render::GlyphQueue::UnpinAllSlots(&this->Queue);
}

bool __fastcall Scaleform::Render::GlyphCache::EvictNotifier::UpdatePinList(
        Scaleform::Render::GlyphCache::EvictNotifier *this)
{
  return Scaleform::Render::GlyphCache::UpdatePinList(this->pCache);
}

__int64 __fastcall Scaleform::Render::GlyphCache::UpdatePinList(Scaleform::Render::GlyphCache *this)
{
  Scaleform::Render::TextMeshProvider *pNext; // rbx
  unsigned __int8 v2; // bp
  $C228B5947597CC1444908D8D91ED005F *v3; // rsi
  Scaleform::Render::TextMeshProvider *v4; // rdi

  pNext = this->TextInPin.Root.pNext;
  v2 = 0;
  v3 = &this->TextInUse.Root.8;
  if ( this == (Scaleform::Render::GlyphCache *)-4176i64 )
    v3 = 0i64;
  while ( pNext != (Scaleform::Render::TextMeshProvider *)v3 )
  {
    v4 = pNext->pNext;
    if ( Scaleform::Render::TextMeshProvider::GetMeshUseStatus(pNext) < MUS_InUse )
    {
      pNext->Flags &= ~4u;
      Scaleform::Render::TextMeshProvider::UnpinSlots(pNext);
      v2 = 1;
      pNext->pPrev->pNext = pNext->pNext;
      pNext->pNext->pPrev = pNext->pPrev;
      pNext->pPrev = (Scaleform::Render::TextMeshProvider *)-1i64;
      pNext->pNext = (Scaleform::Render::TextMeshProvider *)-1i64;
    }
    pNext = v4;
  }
  return v2;
}

void __fastcall Scaleform::Render::GlyphCache::addShapeAutoFit(
        Scaleform::Render::GlyphCache *this,
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::ToleranceParams *paramIn,
        unsigned int nomHeight,
        int lowerCaseTop,
        int upperCaseTop,
        float screenSize,
        float stretch)
{
  Scaleform::Render::GlyphFitter *p_Fitter; // rbx
  int v13; // eax
  __int128 v14; // xmm1
  float v15; // xmm3_4
  Scaleform::Render::ShapeDataInterface_vtbl *v16; // rax
  float v17; // xmm6_4
  float v18; // xmm3_4
  __int128 v19; // xmm0
  unsigned int v20; // er12
  Scaleform::Render::ShapeDataInterface_vtbl *v21; // rax
  char v22; // si
  Scaleform::Render::ShapePathType i; // eax
  Scaleform::Render::PathEdgeType j; // eax
  float v25; // xmm8_4
  unsigned __int64 v26; // rdi
  unsigned __int64 v27; // rcx
  __int64 v28; // rdi
  Scaleform::Render::GlyphFitter::ContourType *v29; // r14
  int MinY; // edx
  int v31; // ecx
  __int16 v32; // r8
  __int16 v33; // cx
  int MinX; // er9
  int v35; // edx
  unsigned int k; // esi
  int v37; // edx
  int v38; // ecx
  __int16 v39; // r8
  __int16 v40; // cx
  int v41; // er9
  int v42; // edx
  Scaleform::Render::GlyphFitter::VertexType v43; // [rsp+30h] [rbp-D0h]
  Scaleform::Render::GlyphFitter::VertexType v44; // [rsp+30h] [rbp-D0h]
  unsigned int v45; // [rsp+38h] [rbp-C8h] BYREF
  __int64 v46; // [rsp+3Ch] [rbp-C4h]
  __int64 v47; // [rsp+44h] [rbp-BCh]
  __int64 v48; // [rsp+4Ch] [rbp-B4h]
  __int64 v49; // [rsp+54h] [rbp-ACh]
  __int64 v50; // [rsp+5Ch] [rbp-A4h]
  int v51; // [rsp+64h] [rbp-9Ch]
  int v52; // [rsp+68h] [rbp-98h]
  char v53; // [rsp+6Ch] [rbp-94h]
  Scaleform::Render::ToleranceParams param; // [rsp+70h] [rbp-90h] BYREF
  float v55; // [rsp+C0h] [rbp-40h] BYREF
  float v56; // [rsp+C4h] [rbp-3Ch]
  float x3; // [rsp+C8h] [rbp-38h]
  float y3; // [rsp+CCh] [rbp-34h]
  int v59[4]; // [rsp+D8h] [rbp-28h] BYREF

  p_Fitter = &this->Fitter;
  this->Fitter.Clear(&this->Fitter);
  if ( !shape->IsEmpty((Scaleform::Render::ShapeDataInterface *)shape) )
  {
    v13 = (int)(float)(screenSize * 64.0);
    if ( v13 > 2048 )
      v13 = 2048;
    this->Fitter.NominalFontHeight = v13;
    v14 = *(_OWORD *)&paramIn->StrokeLowerScale;
    *(_OWORD *)&param.Epsilon = *(_OWORD *)&paramIn->Epsilon;
    v15 = (float)v13;
    param.CurveRecursionLimit = paramIn->CurveRecursionLimit;
    v16 = shape->__vftable;
    *(_OWORD *)&param.StrokeLowerScale = v14;
    *(_QWORD *)&v14 = *(_QWORD *)&paramIn->MinDet3D;
    v17 = v15 / (float)(int)nomHeight;
    v18 = (float)(v15 * 0.5) / screenSize;
    *(_OWORD *)&param.FillLowerScale = *(_OWORD *)&paramIn->FillLowerScale;
    v19 = *(_OWORD *)&paramIn->Scale9LowerScale;
    param.CurveTolerance = _mm_shuffle_ps(*(__m128 *)&param.Epsilon, *(__m128 *)&param.Epsilon, 85).m128_f32[0] * v18;
    *(_OWORD *)&param.Scale9LowerScale = v19;
    *(_QWORD *)&param.MinDet3D = v14;
    param.CollinearityTolerance = param.CollinearityTolerance * v18;
    v20 = 0;
    v45 = v16->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shape);
    v21 = shape->__vftable;
    v46 = 0i64;
    v47 = 0i64;
    v48 = 0i64;
    v22 = 1;
    v49 = 0i64;
    v50 = 0i64;
    v51 = 0;
    v52 = 1065353216;
    v53 = 0;
    for ( i = v21->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)shape,
                (Scaleform::Render::ShapePosInfo *)&v45,
                &v55,
                (unsigned int *)v59);
          i;
          i = shape->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)shape,
                (Scaleform::Render::ShapePosInfo *)&v45,
                &v55,
                (unsigned int *)v59) )
    {
      if ( !v22 && i == Shape_NewLayer )
        break;
      v22 = 0;
      if ( v59[0] == v59[1] )
      {
        shape->SkipPathData((Scaleform::Render::ShapeDataInterface *)shape, (Scaleform::Render::ShapePosInfo *)&v45);
      }
      else
      {
        LODWORD(v56) = COERCE_UNSIGNED_INT(v56 * v17) ^ _xmm;
        v55 = v55 * v17;
        Scaleform::Render::GlyphFitter::MoveTo(p_Fitter, v55, v56);
        for ( j = shape->ReadEdge(
                    (Scaleform::Render::ShapeDataInterface *)shape,
                    (Scaleform::Render::ShapePosInfo *)&v45,
                    &v55);
              j;
              j = shape->ReadEdge(
                    (Scaleform::Render::ShapeDataInterface *)shape,
                    (Scaleform::Render::ShapePosInfo *)&v45,
                    &v55) )
        {
          if ( j == Edge_LineTo )
          {
            LODWORD(v56) = COERCE_UNSIGNED_INT(v56 * v17) ^ _xmm;
            v55 = v55 * v17;
            Scaleform::Render::GlyphFitter::LineTo(p_Fitter, v55, v56);
          }
          else
          {
            v55 = v55 * v17;
            LODWORD(v56) = COERCE_UNSIGNED_INT(v56 * v17) ^ _xmm;
            x3 = x3 * v17;
            LODWORD(y3) = COERCE_UNSIGNED_INT(y3 * v17) ^ _xmm;
            Scaleform::Render::TessellateQuadCurve(p_Fitter, &param, v55, v56, x3, y3);
          }
        }
        p_Fitter->ClosePath(p_Fitter);
      }
    }
    Scaleform::Render::GlyphFitter::FitGlyph(
      p_Fitter,
      (int)screenSize,
      0,
      (int)(float)((float)lowerCaseTop * v17),
      (int)(float)((float)upperCaseTop * v17));
    v25 = 1.0 / (float)this->Fitter.UnitsPerPixelY;
    if ( this->Fitter.Contours.Size )
    {
      v26 = 0i64;
      do
      {
        v27 = v26 >> 2;
        v28 = v26 & 3;
        v29 = this->Fitter.Contours.Pages[v27];
        if ( v29[v28].NumVertices > 2 )
        {
          MinY = p_Fitter->MinY;
          v43 = this->Fitter.Vertices.Pages[(unsigned __int64)v29[v28].StartVertex >> 4][v29[v28].StartVertex & 0xF];
          v31 = v43.y - MinY;
          if ( v31 < 0 || v31 >= SLODWORD(p_Fitter->LerpRampY.Size) )
            v32 = HIWORD(*(_DWORD *)&this->Fitter.Vertices.Pages[(unsigned __int64)v29[v28].StartVertex >> 4][v29[v28].StartVertex & 0xF]);
          else
            v32 = MinY + p_Fitter->LerpRampY.Array[v31];
          v33 = (__int16)this->Fitter.Vertices.Pages[(unsigned __int64)v29[v28].StartVertex >> 4][v29[v28].StartVertex & 0xF];
          MinX = p_Fitter->MinX;
          v35 = v43.x - MinX;
          if ( v35 >= 0 && v35 < SLODWORD(p_Fitter->LerpRampX.Size) )
            v33 = MinX + p_Fitter->LerpRampX.Array[v35];
          Scaleform::Render::Rasterizer::MoveTo(&this->Ras, (float)((float)v33 * v25) * stretch, (float)-v32 * v25);
          for ( k = 1; k < v29[v28].NumVertices; ++k )
          {
            v37 = p_Fitter->MinY;
            v44 = this->Fitter.Vertices.Pages[(unsigned __int64)(k + v29[v28].StartVertex) >> 4][((_BYTE)k
                                                                                                + LOBYTE(v29[v28].StartVertex)) & 0xF];
            v38 = v44.y - v37;
            if ( v38 < 0 || v38 >= SLODWORD(p_Fitter->LerpRampY.Size) )
              v39 = HIWORD(*(_DWORD *)&this->Fitter.Vertices.Pages[(unsigned __int64)(k + v29[v28].StartVertex) >> 4][((_BYTE)k + LOBYTE(v29[v28].StartVertex)) & 0xF]);
            else
              v39 = v37 + p_Fitter->LerpRampY.Array[v38];
            v40 = (__int16)this->Fitter.Vertices.Pages[(unsigned __int64)(k + v29[v28].StartVertex) >> 4][((_BYTE)k + LOBYTE(v29[v28].StartVertex)) & 0xF];
            v41 = p_Fitter->MinX;
            v42 = v44.x - v41;
            if ( v42 >= 0 && v42 < SLODWORD(p_Fitter->LerpRampX.Size) )
              v40 = v41 + p_Fitter->LerpRampX.Array[v42];
            Scaleform::Render::Rasterizer::LineTo(&this->Ras, (float)((float)v40 * v25) * stretch, (float)-v39 * v25);
          }
          this->Ras.ClosePath(&this->Ras);
        }
        v26 = ++v20;
      }
      while ( v20 < this->Fitter.Contours.Size );
    }
    p_Fitter->Clear(p_Fitter);
  }
}

void __fastcall Scaleform::Render::GlyphCache::addShapeToRasterizer(
        Scaleform::Render::GlyphCache *this,
        const Scaleform::Render::ShapeDataInterface *shape,
        const Scaleform::Render::ToleranceParams *param,
        float scaleX,
        float scaleY)
{
  char v8; // r14
  Scaleform::Render::ShapePathType i; // eax
  Scaleform::Render::PathEdgeType j; // eax
  Scaleform::Render::Rasterizer *p_Ras; // rcx
  unsigned int v12; // [rsp+30h] [rbp-61h] BYREF
  __int64 v13; // [rsp+34h] [rbp-5Dh]
  __int64 v14; // [rsp+3Ch] [rbp-55h]
  __int64 v15; // [rsp+44h] [rbp-4Dh]
  __int64 v16; // [rsp+4Ch] [rbp-45h]
  __int64 v17; // [rsp+54h] [rbp-3Dh]
  int v18; // [rsp+5Ch] [rbp-35h]
  Tween::EasingType v19; // [rsp+60h] [rbp-31h]
  char v20; // [rsp+64h] [rbp-2Dh]
  float v21; // [rsp+68h] [rbp-29h] BYREF
  float v22; // [rsp+6Ch] [rbp-25h]
  float x3; // [rsp+70h] [rbp-21h]
  float y3; // [rsp+74h] [rbp-1Dh]
  int v25[4]; // [rsp+80h] [rbp-11h] BYREF

  if ( !shape->IsEmpty((Scaleform::Render::ShapeDataInterface *)shape) )
  {
    v12 = shape->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shape);
    v19 = FLOAT_1_0;
    v13 = 0i64;
    v14 = 0i64;
    v15 = 0i64;
    v8 = 1;
    v16 = 0i64;
    v17 = 0i64;
    v18 = 0;
    v20 = 0;
    for ( i = shape->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)shape,
                (Scaleform::Render::ShapePosInfo *)&v12,
                &v21,
                (unsigned int *)v25);
          i;
          i = shape->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)shape,
                (Scaleform::Render::ShapePosInfo *)&v12,
                &v21,
                (unsigned int *)v25) )
    {
      if ( !v8 && i == Shape_NewLayer )
        break;
      v8 = 0;
      if ( v25[0] == v25[1] )
      {
        shape->SkipPathData((Scaleform::Render::ShapeDataInterface *)shape, (Scaleform::Render::ShapePosInfo *)&v12);
      }
      else
      {
        v21 = v21 * scaleX;
        v22 = v22 * scaleY;
        Scaleform::Render::Rasterizer::MoveTo(&this->Ras, v21, v22);
        for ( j = shape->ReadEdge(
                    (Scaleform::Render::ShapeDataInterface *)shape,
                    (Scaleform::Render::ShapePosInfo *)&v12,
                    &v21);
              j;
              j = shape->ReadEdge(
                    (Scaleform::Render::ShapeDataInterface *)shape,
                    (Scaleform::Render::ShapePosInfo *)&v12,
                    &v21) )
        {
          p_Ras = &this->Ras;
          v21 = v21 * scaleX;
          v22 = v22 * scaleY;
          if ( j == Edge_LineTo )
          {
            Scaleform::Render::Rasterizer::LineTo(p_Ras, v21, v22);
          }
          else
          {
            x3 = x3 * scaleX;
            y3 = y3 * scaleY;
            Scaleform::Render::TessellateQuadCurve(p_Ras, param, v21, v22, x3, y3);
          }
        }
        this->Ras.ClosePath(&this->Ras);
      }
    }
  }
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphCache::allocateGlyph(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::TextMeshProvider *tm,
        const Scaleform::Render::GlyphParam *gp,
        unsigned int w,
        unsigned int h)
{
  Scaleform::Render::GlyphQueue *p_Queue; // rsi
  Scaleform::Render::GlyphNode *result; // rax
  Scaleform::Render::GlyphNode *v8; // rbx
  Scaleform::Render::TextNotifier *Notifier; // rax

  p_Queue = &this->Queue;
  result = Scaleform::Render::GlyphQueue::AllocateGlyph(&this->Queue, gp, w, h);
  v8 = result;
  if ( result )
  {
    Notifier = Scaleform::Render::GlyphQueue::CreateNotifier(p_Queue, result, tm);
    Scaleform::Render::TextMeshProvider::AddNotifier(tm, Notifier);
    return v8;
  }
  return result;
}

void __fastcall Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2>>::allocatePage(
        Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2> > *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // r8
  Scaleform::Render::GlyphCache::UpdateRect **Pages; // rdx
  Scaleform::Render::GlyphCache::UpdateRect **v6; // rax
  int v7; // [rsp+30h] [rbp+8h] BYREF

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    Pages = this->Pages;
    if ( Pages )
    {
      v6 = (Scaleform::Render::GlyphCache::UpdateRect **)Scaleform::Memory::pGlobalHeap->Realloc(
                                                           Scaleform::Memory::pGlobalHeap,
                                                           Pages,
                                                           8 * MaxPages + 128);
    }
    else
    {
      v7 = 2;
      v6 = (Scaleform::Render::GlyphCache::UpdateRect **)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                           Scaleform::Memory::pGlobalHeap,
                                                           this,
                                                           128i64,
                                                           &v7);
    }
    this->MaxPages += 16i64;
    this->Pages = v6;
  }
  v7 = 2;
  this->Pages[nb] = (Scaleform::Render::GlyphCache::UpdateRect *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                                                   Scaleform::Memory::pGlobalHeap,
                                                                   this,
                                                                   1792i64,
                                                                   &v7);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::GlyphCache::cacheFullWarning(Scaleform::Render::GlyphCache *this)
{
  if ( this->RasterCacheWarning )
  {
    Scaleform::Render::GlyphCache::LogWarning(
      this,
      "Warning: Increase raster glyph cache capacity - see GlyphCacheParams");
    this->RasterCacheWarning = 0;
  }
}

void __fastcall Scaleform::Render::GlyphCache::copyAndTransformShape(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::VectorGlyphShape *glyphShape,
        const Scaleform::Render::ToleranceParams *paramIn,
        const Scaleform::Render::ShapeDataInterface *srcShape,
        bool fauxBold,
        bool fauxItalic,
        unsigned int outline,
        float italicOffset,
        float nominalSize)
{
  Scaleform::Render::ShapeDataInterface_vtbl *v9; // rax
  char *Data; // r12
  Scaleform::Render::VectorGlyphShape *v13; // rbx
  __int128 v14; // xmm0
  unsigned int CurveRecursionLimit; // eax
  __m128 v16; // xmm2
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  float v19; // xmm7_4
  int v20; // er14
  char v21; // di
  Scaleform::Render::ShapePathType n; // ecx
  Scaleform::Render::ShapePathType v23; // er8
  Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > *v24; // rcx
  float v25; // xmm0_4
  Scaleform::Render::PathEdgeType v26; // eax
  int LastY; // er14
  int LastX; // er15
  float v29; // xmm1_4
  float v30; // xmm0_4
  Scaleform::Render::GlyphShape *v31; // rcx
  float v32; // xmm0_4
  int v33; // ebx
  int v34; // edi
  float v35; // xmm6_4
  float v36; // xmm0_4
  int v37; // edi
  int v38; // ebx
  Scaleform::Render::ShapeDataInterface_vtbl *v39; // rax
  __int64 v40; // r13
  __int64 v41; // rdx
  Scaleform::Render::ShapePathType i; // eax
  __int64 v43; // rdx
  float v44; // xmm2_4
  Scaleform::Render::PathEdgeType j; // eax
  float v46; // xmm1_4
  float v47; // xmm0_4
  float v48; // xmm11_4
  float v49; // xmm4_4
  unsigned __int64 k; // r8
  unsigned __int64 v51; // rcx
  __int64 v52; // rcx
  _QWORD *v53; // r15
  unsigned int v54; // edx
  unsigned __int64 v55; // rdi
  unsigned __int64 v56; // rcx
  __int64 v57; // rdi
  __int64 v58; // rsi
  unsigned int v59; // ebx
  unsigned int v60; // edx
  unsigned __int64 v61; // r12
  unsigned __int64 v62; // rcx
  __int64 v63; // r12
  __int64 v64; // r13
  __int64 v65; // r8
  __int64 v66; // rdx
  Scaleform::Render::GlyphShape *pObject; // rax
  float v68; // xmm7_4
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *pContainer; // rbx
  float Multiplier; // xmm6_4
  float v71; // xmm8_4
  unsigned __int64 Size; // rax
  unsigned __int64 v73; // rdi
  unsigned __int64 v74; // r8
  unsigned __int8 *v75; // rax
  unsigned __int64 v76; // rax
  unsigned __int64 v77; // rdi
  unsigned __int64 v78; // r8
  unsigned __int8 *v79; // rax
  unsigned __int64 v80; // rax
  unsigned __int64 v81; // rdi
  unsigned __int64 v82; // r8
  unsigned __int8 *v83; // rax
  int v84; // er15
  int v85; // edi
  int v86; // er14
  unsigned int v87; // esi
  __int64 v88; // r8
  __int64 v89; // rdx
  Scaleform::Render::GlyphShape *v90; // rcx
  float v91; // xmm1_4
  float v92; // xmm0_4
  float v93; // xmm1_4
  int v94; // ebx
  int v95; // edi
  Scaleform::Render::GlyphShape *v96; // rcx
  int Multiplier_low; // xmm0_4
  int v98; // edi
  int v99; // eax
  Scaleform::Render::GlyphShape *v100; // rcx
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *v101; // rax
  bool isOuterContourCW; // [rsp+40h] [rbp-C0h]
  unsigned int v103; // [rsp+44h] [rbp-BCh]
  int v104; // [rsp+44h] [rbp-BCh]
  unsigned int v106; // [rsp+50h] [rbp-B0h]
  char *v107; // [rsp+58h] [rbp-A8h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v108; // [rsp+60h] [rbp-A0h] BYREF
  float v109; // [rsp+68h] [rbp-98h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v110; // [rsp+70h] [rbp-90h] BYREF
  float v111; // [rsp+78h] [rbp-88h]
  unsigned int v112; // [rsp+80h] [rbp-80h] BYREF
  __int64 v113; // [rsp+84h] [rbp-7Ch]
  __int64 v114; // [rsp+8Ch] [rbp-74h]
  __int64 v115; // [rsp+94h] [rbp-6Ch]
  __int64 v116; // [rsp+9Ch] [rbp-64h]
  __int64 v117; // [rsp+A4h] [rbp-5Ch]
  int v118; // [rsp+ACh] [rbp-54h]
  int v119; // [rsp+B0h] [rbp-50h]
  char v120; // [rsp+B4h] [rbp-4Ch]
  __int64 v121; // [rsp+B8h] [rbp-48h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v122; // [rsp+C0h] [rbp-40h] BYREF
  float v123; // [rsp+C8h] [rbp-38h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v124; // [rsp+D0h] [rbp-30h] BYREF
  float v125; // [rsp+D8h] [rbp-28h]
  char *v126; // [rsp+E0h] [rbp-20h]
  Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> > v127; // [rsp+E8h] [rbp-18h] BYREF
  float v128; // [rsp+F0h] [rbp-10h]
  Scaleform::Render::ToleranceParams param; // [rsp+100h] [rbp+0h] BYREF
  Scaleform::Render::Matrix2x4<float> v130; // [rsp+150h] [rbp+50h] BYREF
  Scaleform::Render::ShapePosInfo m; // [rsp+170h] [rbp+70h] BYREF
  float startX; // [rsp+1B0h] [rbp+B0h] BYREF
  float v133; // [rsp+1B4h] [rbp+B4h]
  float v134; // [rsp+1B8h] [rbp+B8h]
  float v135; // [rsp+1BCh] [rbp+BCh]
  unsigned int leftStyle; // [rsp+1C8h] [rbp+C8h] BYREF
  unsigned int rightStyle; // [rsp+1CCh] [rbp+CCh]
  unsigned int strokeStyle; // [rsp+1D0h] [rbp+D0h]

  v9 = srcShape->__vftable;
  Data = (char *)this;
  v110.Data = (Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *)this;
  v13 = glyphShape;
  if ( v9->IsEmpty((Scaleform::Render::ShapeDataInterface *)srcShape) )
    return;
  v14 = *(_OWORD *)&paramIn->FillLowerScale;
  CurveRecursionLimit = paramIn->CurveRecursionLimit;
  v16 = *(__m128 *)&paramIn->Epsilon;
  v17 = *(_OWORD *)&paramIn->StrokeLowerScale;
  *(__m128 *)&param.Epsilon = v16;
  *(_OWORD *)&param.FillLowerScale = v14;
  v18 = *(_OWORD *)&paramIn->Scale9LowerScale;
  param.CurveRecursionLimit = CurveRecursionLimit;
  *(_OWORD *)&param.Scale9LowerScale = v18;
  v19 = 0.0;
  *(_OWORD *)&param.StrokeLowerScale = v17;
  *(_QWORD *)&param.MinDet3D = *(_QWORD *)&paramIn->MinDet3D;
  param.CollinearityTolerance = v16.m128_f32[2] * (float)(nominalSize * 0.015625);
  *(_OWORD *)&v130.M[0][0] = _xmm;
  param.CurveTolerance = _mm_shuffle_ps(v16, v16, 85).m128_f32[0] * (float)(nominalSize * 0.015625);
  *(_OWORD *)&v130.M[1][0] = _xmm;
  if ( fauxItalic )
  {
    v130.M[0][3] = 0.0;
    m.Pos = 1065353216;
    v130.M[1][3] = italicOffset + 0.0;
    m.StartX = tanf(COERCE_FLOAT(*((_DWORD *)Data + 17) ^ _xmm));
    *(_QWORD *)&m.StartY = 0i64;
    m.LastY = tanf(0.0);
    *(_QWORD *)&m.FillBase = 1065353216i64;
    m.NumFillBits = 0;
    Scaleform::Render::Matrix2x4<float>::Append(&v130, (const Scaleform::Render::Matrix2x4<float> *)&m);
    v130.M[0][3] = v130.M[0][3] + 0.0;
    v130.M[1][3] = v130.M[1][3] - italicOffset;
  }
  v20 = 0;
  v112 = srcShape->GetStartingPos((Scaleform::Render::ShapeDataInterface *)srcShape);
  v121 = 0i64;
  v21 = 1;
  v113 = 0i64;
  v114 = 0i64;
  v115 = 0i64;
  v116 = 0i64;
  v117 = 0i64;
  v118 = 0;
  v119 = 1065353216;
  v120 = 0;
  memset(&m, 0, 48);
  m.Sfactor = 1.0;
  m.Initialized = 0;
  if ( fauxBold || outline )
  {
    v40 = (__int64)(Data + 6520);
    isOuterContourCW = Scaleform::Render::GlyphCache::isOuterContourCW((Scaleform::Render::GlyphCache *)Data, srcShape);
    v41 = *((_QWORD *)Data + 815);
    v126 = Data + 6520;
    (*(void (__fastcall **)(char *))(v41 + 8))(Data + 6520);
    (*(void (__fastcall **)(char *))(*((_QWORD *)Data + 826) + 8i64))(Data + 6608);
    if ( fauxBold )
      v19 = nominalSize * *((float *)Data + 18);
    *(_QWORD *)&m.Pos = &Scaleform::Render::StrokeScaler::`vftable';
    *(_QWORD *)&m.StartY = Data + 6520;
    *(_OWORD *)&m.LastY = _xmm;
    *((float *)Data + 1644) = v19 * 0.5;
    for ( i = srcShape->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)srcShape,
                (Scaleform::Render::ShapePosInfo *)&v112,
                &startX,
                &leftStyle);
          i;
          i = srcShape->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)srcShape,
                (Scaleform::Render::ShapePosInfo *)&v112,
                &startX,
                &leftStyle) )
    {
      if ( !v21 && i == Shape_NewLayer )
        break;
      v21 = 0;
      if ( leftStyle == rightStyle )
      {
        srcShape->SkipPathData(
          (Scaleform::Render::ShapeDataInterface *)srcShape,
          (Scaleform::Render::ShapePosInfo *)&v112);
      }
      else
      {
        v44 = (float)(v133 * v130.M[1][1]) + (float)(v130.M[1][0] * startX);
        startX = (float)((float)(v133 * v130.M[0][1]) + (float)(startX * v130.M[0][0])) + v130.M[0][3];
        *(float *)&m.StrokeBase = startX;
        v133 = v44 + v130.M[1][3];
        *(float *)&m.NumFillBits = v44 + v130.M[1][3];
        (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&m.StartY + 32i64))(*(_QWORD *)&m.StartY);
        for ( j = srcShape->ReadEdge(
                    (Scaleform::Render::ShapeDataInterface *)srcShape,
                    (Scaleform::Render::ShapePosInfo *)&v112,
                    &startX);
              j;
              j = srcShape->ReadEdge(
                    (Scaleform::Render::ShapeDataInterface *)srcShape,
                    (Scaleform::Render::ShapePosInfo *)&v112,
                    &startX) )
        {
          v46 = startX;
          v47 = startX * v130.M[0][0];
          if ( j == Edge_LineTo )
          {
            startX = (float)((float)(v133 * v130.M[0][1]) + v47) + v130.M[0][3];
            *(float *)&m.StrokeBase = startX;
            v133 = (float)((float)(v133 * v130.M[1][1]) + (float)(v130.M[1][0] * v46)) + v130.M[1][3];
            *(float *)&m.NumFillBits = v133;
            (*(void (__fastcall **)(_QWORD))(**(_QWORD **)&m.StartY + 32i64))(*(_QWORD *)&m.StartY);
          }
          else
          {
            v48 = (float)(v133 * v130.M[1][1]) + (float)(v130.M[1][0] * startX);
            startX = (float)((float)(v133 * v130.M[0][1]) + v47) + v130.M[0][3];
            v133 = v48 + v130.M[1][3];
            v49 = (float)((float)(v135 * v130.M[0][1]) + (float)(v134 * v130.M[0][0])) + v130.M[0][3];
            v135 = (float)((float)(v135 * v130.M[1][1]) + (float)(v130.M[1][0] * v134)) + v130.M[1][3];
            v134 = v49;
            Scaleform::Render::TessellateQuadCurve(
              (Scaleform::Render::TessBase *)&m,
              &param,
              startX,
              v48 + v130.M[1][3],
              v49,
              v135);
          }
        }
        (*(void (__fastcall **)(char *))(*(_QWORD *)v40 + 40i64))(Data + 6520);
        Scaleform::Render::Stroker::CalcEquidistant(
          (Scaleform::Render::Stroker *)(Data + 6520),
          (Scaleform::Render::TessBase *)Data + 826,
          (Scaleform::Render::StrokerTypes::EquidistantDir)!isOuterContourCW);
      }
    }
    for ( k = 0i64; k < *((_QWORD *)Data + 828); *(float *)(v52 + 8 * v43 + 4) = *(float *)(v52 + 8 * v43 + 4) * 0.001 )
    {
      v43 = k & 0xF;
      v51 = k++ >> 4;
      v52 = *(_QWORD *)(*((_QWORD *)Data + 831) + 8 * v51);
    }
    v53 = Data + 6608;
    v107 = Data + 6608;
    if ( outline )
    {
      v53 = Data + 6704;
      v107 = Data + 6704;
      (*(void (__fastcall **)(char *, __int64, unsigned __int64))(*((_QWORD *)Data + 838) + 8i64))(Data + 6704, v43, k);
      (*(void (__fastcall **)(char *))(*(_QWORD *)v40 + 8i64))(Data + 6520);
      *((_DWORD *)Data + 1645) = 0;
      v54 = 0;
      v103 = 0;
      *((float *)Data + 1644) = (float)((float)((float)(int)outline * *((float *)Data + 19)) * nominalSize) * 0.5;
      if ( *((_QWORD *)Data + 833) )
      {
        v55 = 0i64;
        do
        {
          v56 = v55 >> 2;
          v57 = v55 & 3;
          v58 = *(_QWORD *)(*((_QWORD *)Data + 836) + 8 * v56);
          if ( *(_DWORD *)(v58 + 8 * v57 + 4) > 2u )
          {
            v59 = 0;
            do
            {
              (*(void (__fastcall **)(char *))(*(_QWORD *)v40 + 32i64))(Data + 6520);
              ++v59;
            }
            while ( v59 < *(_DWORD *)(v58 + 8 * v57 + 4) );
            (*(void (__fastcall **)(char *))(*(_QWORD *)v40 + 40i64))(Data + 6520);
            Scaleform::Render::Stroker::GenerateStroke(
              (Scaleform::Render::Stroker *)(Data + 6520),
              (Scaleform::Render::TessBase *)Data + 838);
            v54 = v103;
          }
          v55 = ++v54;
          v103 = v54;
        }
        while ( (unsigned __int64)v54 < *((_QWORD *)Data + 833) );
        v13 = glyphShape;
      }
    }
    v60 = 0;
    v106 = 0;
    if ( !v53[7] )
    {
LABEL_90:
      Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(v13->pShape.pObject);
      (*(void (__fastcall **)(__int64))(*(_QWORD *)v40 + 8i64))(v40);
      (*(void (__fastcall **)(char *))(*((_QWORD *)Data + 826) + 8i64))(Data + 6608);
      (*(void (__fastcall **)(char *))(*((_QWORD *)Data + 838) + 8i64))(Data + 6704);
      Scaleform::Render::LinearHeap::ClearAndRelease((Scaleform::Render::LinearHeap *)Data + 161);
      Scaleform::Render::LinearHeap::ClearAndRelease((Scaleform::Render::LinearHeap *)Data + 162);
      return;
    }
    v61 = 0i64;
    while ( 1 )
    {
      v62 = v61 >> 2;
      v63 = v61 & 3;
      v64 = *(_QWORD *)(v53[10] + 8 * v62);
      if ( *(_DWORD *)(v64 + 8 * v63 + 4) > 2u )
        break;
LABEL_88:
      v61 = ++v60;
      v106 = v60;
      if ( (unsigned __int64)v60 >= v53[7] )
      {
        v40 = (__int64)v126;
        Data = (char *)v110.Data;
        goto LABEL_90;
      }
    }
    v65 = *(_DWORD *)(v64 + 8 * v63) & 0xF;
    v66 = *(_QWORD *)(v53[5] + 8 * ((unsigned __int64)*(unsigned int *)(v64 + 8 * v63) >> 4));
    pObject = v13->pShape.pObject;
    v68 = *(float *)(v66 + 8 * v65 + 4);
    pContainer = pObject->pContainer;
    Multiplier = pObject->Multiplier;
    v71 = *(float *)(v66 + 8 * v65);
    v123 = Multiplier;
    v122.Data = pContainer;
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteUInt15(
      &v122,
      2 - (v20 != 0));
    Size = pContainer->Data.Size;
    v73 = Size + 1;
    if ( Size + 1 >= Size )
    {
      if ( v73 <= pContainer->Data.Policy.Capacity )
        goto LABEL_60;
      v74 = v73 + (v73 >> 2);
    }
    else
    {
      if ( v73 >= pContainer->Data.Policy.Capacity >> 1 )
        goto LABEL_60;
      v74 = Size + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &pContainer->Data,
      pContainer,
      v74);
LABEL_60:
    v75 = pContainer->Data.Data;
    pContainer->Data.Size = v73;
    v75[v73 - 1] = 4;
    v76 = pContainer->Data.Size;
    v77 = v76 + 1;
    if ( v76 + 1 >= v76 )
    {
      if ( v77 <= pContainer->Data.Policy.Capacity )
        goto LABEL_66;
      v78 = v77 + (v77 >> 2);
    }
    else
    {
      if ( v77 >= pContainer->Data.Policy.Capacity >> 1 )
        goto LABEL_66;
      v78 = v76 + 1;
    }
    Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
      &pContainer->Data,
      pContainer,
      v78);
LABEL_66:
    v79 = pContainer->Data.Data;
    pContainer->Data.Size = v77;
    v79[v77 - 1] = 0;
    v80 = pContainer->Data.Size;
    v81 = v80 + 1;
    if ( v80 + 1 >= v80 )
    {
      if ( v81 > pContainer->Data.Policy.Capacity )
      {
        v82 = v81 + (v81 >> 2);
        goto LABEL_71;
      }
    }
    else if ( v81 < pContainer->Data.Policy.Capacity >> 1 )
    {
      v82 = v80 + 1;
LABEL_71:
      Scaleform::ArrayDataBase<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        &pContainer->Data,
        pContainer,
        v82);
    }
    v83 = pContainer->Data.Data;
    pContainer->Data.Size = v81;
    v83[v81 - 1] = 0;
    v84 = (int)(float)(Multiplier * v71);
    v85 = v84;
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
      &v122,
      v84);
    v86 = (int)(float)(Multiplier * v68);
    v104 = v86;
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteSInt30(
      &v122,
      v86);
    v87 = 1;
    if ( *(_DWORD *)(v64 + 8 * v63 + 4) > 1u )
    {
      do
      {
        v88 = ((_BYTE)v87 + *(_BYTE *)(v64 + 8 * v63)) & 0xF;
        v89 = *(_QWORD *)(*((_QWORD *)v107 + 5) + 8 * ((unsigned __int64)(v87 + *(_DWORD *)(v64 + 8 * v63)) >> 4));
        v90 = glyphShape->pShape.pObject;
        v91 = v90->Multiplier;
        v92 = v91 * *(float *)(v89 + 8 * v88);
        v124.Data = v90->pContainer;
        v125 = v91;
        v93 = v91 * *(float *)(v89 + 8 * v88 + 4);
        v94 = (int)v92 - v84;
        v95 = (int)v93 - v86;
        if ( (int)v93 == v86 )
        {
          Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
            &v124,
            v94);
        }
        else if ( v94 )
        {
          Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
            &v124,
            v94,
            v95);
        }
        else
        {
          Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
            &v124,
            v95);
        }
        v84 = (int)v92;
        v86 = (int)v93;
        ++v87;
      }
      while ( v87 < *(_DWORD *)(v64 + 8 * v63 + 4) );
      v85 = (int)(float)(Multiplier * v71);
    }
    v13 = glyphShape;
    v96 = glyphShape->pShape.pObject;
    Multiplier_low = LODWORD(v96->Multiplier);
    v108.Data = v96->pContainer;
    v109 = *(float *)&Multiplier_low;
    if ( v84 != v85 || v86 != v104 )
    {
      v98 = v85 - v84;
      v99 = v104 - v86;
      if ( v104 == v86 )
      {
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
          &v108,
          v98);
      }
      else if ( v98 )
      {
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
          &v108,
          v98,
          v99);
      }
      else
      {
        Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
          &v108,
          v99);
      }
    }
    v100 = glyphShape->pShape.pObject;
    v101 = v100->pContainer;
    v128 = v100->Multiplier;
    v127.Data = v101;
    Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteEndPath(&v127);
    v53 = v107;
    v20 = v121 + 1;
    v60 = v106;
    v121 = (unsigned int)(v121 + 1);
    goto LABEL_88;
  }
  for ( n = srcShape->ReadPathInfo(
              (Scaleform::Render::ShapeDataInterface *)srcShape,
              (Scaleform::Render::ShapePosInfo *)&v112,
              &startX,
              &leftStyle);
        n;
        n = srcShape->ReadPathInfo(
              (Scaleform::Render::ShapeDataInterface *)srcShape,
              (Scaleform::Render::ShapePosInfo *)&v112,
              &startX,
              &leftStyle) )
  {
    if ( !v21 && n == Shape_NewLayer )
      break;
    v21 = 0;
    if ( leftStyle == rightStyle )
    {
      srcShape->SkipPathData(
        (Scaleform::Render::ShapeDataInterface *)srcShape,
        (Scaleform::Render::ShapePosInfo *)&v112);
    }
    else
    {
      v23 = n;
      v24 = v13->pShape.pObject;
      v25 = (float)(v130.M[1][0] * startX) + (float)(v133 * v130.M[1][1]);
      startX = (float)((float)(v133 * v130.M[0][1]) + (float)(startX * v130.M[0][0])) + v130.M[0][3];
      v133 = v25 + v130.M[1][3];
      Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::StartPath(
        v24,
        &m,
        v23,
        leftStyle,
        rightStyle,
        strokeStyle,
        startX,
        v25 + v130.M[1][3]);
      v26 = srcShape->ReadEdge(
              (Scaleform::Render::ShapeDataInterface *)srcShape,
              (Scaleform::Render::ShapePosInfo *)&v112,
              &startX);
      if ( v26 )
      {
        LastY = m.LastY;
        LastX = m.LastX;
        do
        {
          v29 = startX;
          v30 = startX * v130.M[0][0];
          v31 = v13->pShape.pObject;
          if ( v26 == Edge_LineTo )
          {
            startX = (float)((float)(v133 * v130.M[0][1]) + v30) + v130.M[0][3];
            v133 = (float)((float)(v130.M[1][0] * v29) + (float)(v133 * v130.M[1][1])) + v130.M[1][3];
            v32 = v31->Multiplier;
            v110.Data = v31->pContainer;
            v33 = (int)(float)(startX * v32) - LastX;
            v111 = v32;
            v34 = (int)(float)(v133 * v32) - LastY;
            if ( v34 )
            {
              if ( v33 )
              {
                Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteLine(
                  &v110,
                  v33,
                  v34);
                LastX += v33;
              }
              else
              {
                Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteVLine(
                  &v110,
                  v34);
              }
              LastY += v34;
            }
            else
            {
              Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteHLine(
                &v110,
                v33);
              LastX += v33;
            }
          }
          else
          {
            v35 = v135;
            startX = (float)((float)(v133 * v130.M[0][1]) + v30) + v130.M[0][3];
            v133 = (float)((float)(v130.M[1][0] * v29) + (float)(v133 * v130.M[1][1])) + v130.M[1][3];
            v135 = (float)((float)(v130.M[1][0] * v134) + (float)(v135 * v130.M[1][1])) + v130.M[1][3];
            v134 = (float)((float)(v35 * v130.M[0][1]) + (float)(v134 * v130.M[0][0])) + v130.M[0][3];
            v36 = v31->Multiplier;
            v108.Data = v31->pContainer;
            v37 = (int)(float)(v134 * v36) - LastX;
            v109 = v36;
            v38 = (int)(float)(v135 * v36) - LastY;
            Scaleform::Render::PathDataEncoder<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::WriteQuad(
              &v108,
              (int)(float)(startX * v36) - LastX,
              (int)(float)(v133 * v36) - LastY,
              v37,
              v38);
            LastX += v37;
            LastY += v38;
          }
          v39 = srcShape->__vftable;
          m.LastY = LastY;
          m.LastX = LastX;
          v26 = v39->ReadEdge(
                  (Scaleform::Render::ShapeDataInterface *)srcShape,
                  (Scaleform::Render::ShapePosInfo *)&v112,
                  &startX);
          v13 = glyphShape;
        }
        while ( v26 );
        v21 = 0;
      }
      Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::ClosePath(
        v13->pShape.pObject,
        &m);
      Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndPath(v13->pShape.pObject);
    }
  }
  Scaleform::Render::ShapeDataPacked<Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>::EndShape(v13->pShape.pObject);
}

void __fastcall Scaleform::Render::GlyphCache::copyImageData(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::ImagePlane *pl,
        const unsigned __int8 *data,
        unsigned int pitch,
        unsigned int dstX,
        unsigned int dstY,
        unsigned int w,
        unsigned int h)
{
  unsigned int v8; // ebx
  __int64 v11; // r12

  v8 = 0;
  if ( h )
  {
    v11 = pitch;
    do
    {
      memmove(&pl->pData[dstX + pl->Pitch * (v8 + dstY)], data, w);
      data += v11;
      ++v8;
    }
    while ( v8 < h );
  }
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphCache::createShadowFromRaster(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::GlyphRunData *data,
        Scaleform::Render::TextMeshProvider *tm,
        const Scaleform::Render::GlyphParam *gp,
        float screenSize,
        const Scaleform::Render::GlyphRaster *ras)
{
  float HeightRatio; // xmm0_4
  Scaleform::Render::GlyphCache *v7; // rdi
  unsigned int SlotPadding; // er14
  signed int Height; // ebp
  float v12; // xmm7_4
  float v13; // xmm1_4
  float rx; // xmm8_4
  float ry; // xmm6_4
  float v16; // xmm1_4
  float v17; // xmm2_4
  unsigned int v18; // er15
  float v19; // xmm0_4
  unsigned int w; // er12
  unsigned int v21; // ebx
  float v22; // xmm10_4
  int h; // ebp
  unsigned int v24; // er14
  float v25; // xmm9_4
  unsigned int MaxSlotHeight; // eax
  Scaleform::Render::GlyphNode *Glyph; // rax
  Scaleform::Render::GlyphNode *v28; // r14
  Scaleform::Render::TextNotifier *Notifier; // rax
  int v30; // esi
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *p_RasterDataSrc; // r14
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *p_RasterData; // r15
  unsigned __int8 *v33; // rcx
  unsigned __int64 v34; // rbx
  unsigned int v35; // esi
  unsigned int v36; // ebp
  const Scaleform::Render::GlyphParam *v37; // rsi
  int v38; // er13
  unsigned __int64 i; // rdx
  float v40; // xmm0_4
  unsigned __int64 v41; // r9
  unsigned __int8 *v42; // r8
  unsigned __int8 *j; // rdx
  __int16 v44; // ax
  bool v46; // zf
  int dstWidth; // [rsp+50h] [rbp-D8h]
  int dstHeight; // [rsp+58h] [rbp-D0h]
  size_t Size; // [rsp+60h] [rbp-C8h]
  Scaleform::Render::GlyphNode *node; // [rsp+68h] [rbp-C0h]
  unsigned int v52; // [rsp+138h] [rbp+10h]
  unsigned int screenSizea; // [rsp+150h] [rbp+28h]
  unsigned int rasa; // [rsp+158h] [rbp+30h]

  HeightRatio = data->HeightRatio;
  v7 = this;
  SlotPadding = this->SlotPadding;
  Height = ras->Height;
  v12 = *(float *)&FLOAT_1_0;
  v13 = (float)((float)gp->FontSize * 0.0625) / screenSize;
  rx = (float)((float)((float)gp->BlurX * 0.0625) * v13) * HeightRatio;
  ry = (float)((float)((float)gp->BlurY * 0.0625) * v13) * HeightRatio;
  v16 = (float)((float)(int)this->MaxSlotHeight * this->ShadowQuality) - (float)(int)(2 * SlotPadding);
  v17 = (float)(ry + ry) + (float)Height;
  if ( v17 >= v16 )
  {
    v12 = v16 / v17;
    rx = rx * (float)(v16 / v17);
    ry = ry * (float)(v16 / v17);
  }
  v18 = SlotPadding + (int)ceilf(rx);
  v52 = v18;
  v19 = ceilf(ry);
  w = ras->Width + 1 + 2 * v18;
  v21 = SlotPadding + (int)v19;
  rasa = v21;
  v22 = (float)(int)(ras->Width + 1 + 2 * v18);
  h = Height + 2 * v21 + 1;
  screenSizea = h;
  v24 = (int)ceilf(v22 * v12);
  v25 = (float)h;
  dstWidth = v24;
  MaxSlotHeight = (int)ceilf((float)h * v12);
  if ( MaxSlotHeight > v7->MaxSlotHeight )
    MaxSlotHeight = v7->MaxSlotHeight;
  dstHeight = MaxSlotHeight;
  Glyph = Scaleform::Render::GlyphQueue::AllocateGlyph(&v7->Queue, gp, v24, MaxSlotHeight);
  node = Glyph;
  v28 = Glyph;
  if ( Glyph )
  {
    Notifier = Scaleform::Render::GlyphQueue::CreateNotifier(&v7->Queue, Glyph, tm);
    Scaleform::Render::TextMeshProvider::AddNotifier(tm, Notifier);
    v30 = dstWidth;
    v28->Origin.x = (int)(float)((float)((float)(int)(-16 * (v18 + ras->OriginX)) * (float)dstWidth) / v22);
    v28->Origin.y = (int)(float)((float)((float)(int)(-16 * (v21 + ras->OriginY)) * (float)dstHeight) / v25);
    v28->Scale = (float)((float)(v25 / (float)dstHeight) + (float)(v22 / (float)dstWidth)) * 0.5;
    p_RasterDataSrc = &v7->RasterDataSrc;
    Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
      &v7->RasterDataSrc.Data,
      w * h);
    p_RasterData = &v7->RasterData;
    Size = (unsigned int)(dstWidth * dstHeight);
    Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
      &v7->RasterData.Data,
      (unsigned int)Size);
    v33 = v7->RasterDataSrc.Data.Data;
    v7->RasterPitch = dstWidth;
    memset(v33, 0, w * h);
    v34 = 0i64;
    if ( w > 1 && (unsigned int)h > 1 )
    {
      v35 = 0;
      if ( ras->Height )
      {
        v36 = v52 + rasa * w;
        do
        {
          if ( v35 + rasa >= screenSizea )
            break;
          memmove(&p_RasterDataSrc->Data.Data[v36], &ras->Raster.Data.Data[v35 * ras->Width], ras->Width);
          ++v35;
          v36 += w;
        }
        while ( v35 < ras->Height );
        v7 = this;
        h = screenSizea;
        p_RasterData = &this->RasterData;
      }
      v37 = gp;
      v38 = 0;
      if ( (gp->Flags & 0x20) != 0 )
      {
        Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
          &v7->KnockOutCopy.Data,
          p_RasterDataSrc->Data.Size);
        for ( i = 0i64; i < v7->KnockOutCopy.Data.Size; ++i )
          v7->KnockOutCopy.Data.Data[i] = p_RasterDataSrc->Data.Data[i];
        v37 = gp;
      }
      if ( rx > 0.0 || ry > 0.0 )
      {
        Scaleform::Render::GlyphCache::recursiveBlur(v7, p_RasterDataSrc->Data.Data, w, 0, 0, w, h, rx, ry);
        v38 = 8;
      }
      v40 = (float)v37->BlurStrength * 0.0625;
      if ( v40 <= 1.0 )
        v38 = 0;
      Scaleform::Render::GlyphCache::strengthenImage(v7, p_RasterDataSrc->Data.Data, w, 0, 0, w, h, v40, v38);
      if ( (v37->Flags & 0x20) != 0 )
      {
        v41 = 0i64;
        v42 = v7->KnockOutCopy.Data.Data;
        for ( j = p_RasterDataSrc->Data.Data;
              v41 < v7->KnockOutCopy.Data.Size;
              *(j - 1) = (unsigned __int16)((255 - v44) * *(j - 1) + 255) >> 8 )
        {
          v44 = *v42++;
          ++j;
          ++v41;
        }
      }
      v30 = dstWidth;
    }
    if ( h == dstHeight && w == v30 )
    {
      Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        &p_RasterData->Data,
        p_RasterDataSrc->Data.Size);
      if ( p_RasterData->Data.Size )
      {
        do
        {
          p_RasterData->Data.Data[v34] = p_RasterDataSrc->Data.Data[v34];
          ++v34;
        }
        while ( v34 < p_RasterData->Data.Size );
      }
    }
    else
    {
      memset(p_RasterData->Data.Data, 0, Size);
      Scaleform::Render::ResizeImageBilinear(
        p_RasterData->Data.Data,
        v30,
        dstHeight,
        v30,
        p_RasterDataSrc->Data.Data,
        w,
        h,
        w,
        ResizeGray);
    }
    Scaleform::Render::GlyphCache::updateTextureGlyph(v7, node);
    ++v7->RasterizationCount;
    return node;
  }
  else
  {
    v46 = !v7->RasterCacheWarning;
    v7->Result = Res_CacheFull;
    if ( !v46 )
    {
      Scaleform::Render::GlyphCache::LogWarning(
        v7,
        "Warning: Increase raster glyph cache capacity - see GlyphCacheParams");
      v7->RasterCacheWarning = 0;
    }
    return 0i64;
  }
}

void __fastcall Scaleform::Render::GlyphCache::filterScanline(
        Scaleform::Render::GlyphCache *this,
        unsigned __int8 *sl,
        unsigned int w)
{
  unsigned int v3; // eax
  size_t v6; // rdi
  char *v7; // rax
  unsigned int v8; // ebx
  __int64 v9; // rcx
  unsigned __int8 v10; // r11
  unsigned __int8 v11; // r9
  char Src; // [rsp+20h] [rbp-128h] BYREF
  char v13[255]; // [rsp+21h] [rbp-127h] BYREF

  v3 = 256;
  if ( w <= 0x100 )
    v3 = w;
  v6 = v3;
  memset(&Src, 0, v3);
  if ( (unsigned int)v6 > 4 )
  {
    v7 = v13;
    v8 = 4;
    do
    {
      v9 = (unsigned __int8)(v7++)[sl - (unsigned __int8 *)v13 + 2];
      ++v8;
      v10 = this->ScanlineFilter.Tertiary[v9];
      v11 = this->ScanlineFilter.Secondary[v9];
      *(v7 - 2) += v10;
      *(v7 - 1) += v11;
      v7[1] += v11;
      v7[2] += v10;
      *v7 += this->ScanlineFilter.Primary[v9];
    }
    while ( v8 < (unsigned int)v6 );
  }
  memmove(sl, &Src, v6);
}

void __fastcall Scaleform::Render::GlyphCache::getGlyphBounds(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::VectorGlyphShape *glyphShape,
        const Scaleform::Render::ShapeDataInterface *shapeData)
{
  Scaleform::Render::ShapeDataInterface_vtbl *v5; // rax
  Scaleform::Render::ShapeDataInterface_vtbl *v6; // rax
  Scaleform::Render::Rect<float> bounds; // [rsp+30h] [rbp-59h] BYREF
  Scaleform::Render::ShapePosInfo pos; // [rsp+40h] [rbp-49h] BYREF
  Scaleform::Render::Matrix2x4<float> trans; // [rsp+80h] [rbp-9h] BYREF
  char v10[16]; // [rsp+A0h] [rbp+17h] BYREF
  float coord[6]; // [rsp+B0h] [rbp+27h] BYREF

  if ( glyphShape->Key.HintedVector )
  {
    if ( shapeData->IsEmpty((Scaleform::Render::ShapeDataInterface *)shapeData) )
    {
      glyphShape->Key.pFont->pFont->GetGlyphBounds(
        glyphShape->Key.pFont->pFont,
        glyphShape->Key.GlyphIndex,
        &glyphShape->Bounds);
    }
    else
    {
      v6 = shapeData->__vftable;
      *(_OWORD *)&trans.M[0][0] = _xmm;
      bounds = (Scaleform::Render::Rect<float>)_xmm_f149f2caf149f2ca7149f2ca7149f2ca;
      *(_OWORD *)&trans.M[1][0] = _xmm;
      pos.Pos = v6->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shapeData);
      LODWORD(pos.Sfactor) = FLOAT_1_0;
      memset(&pos.StartX, 0, 44);
      pos.Initialized = 0;
      while ( shapeData->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)shapeData,
                &pos,
                coord,
                (unsigned int *)v10) )
        Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(
          shapeData,
          &trans,
          &pos,
          coord,
          &bounds);
      glyphShape->Bounds = bounds;
    }
  }
  else
  {
    glyphShape->Key.pFont->pFont->GetGlyphBounds(
      glyphShape->Key.pFont->pFont,
      glyphShape->Key.GlyphIndex,
      &glyphShape->Bounds);
    if ( (glyphShape->Bounds.x1 >= glyphShape->Bounds.x2 || glyphShape->Bounds.y1 >= glyphShape->Bounds.y2)
      && !shapeData->IsEmpty((Scaleform::Render::ShapeDataInterface *)shapeData) )
    {
      v5 = shapeData->__vftable;
      *(_OWORD *)&trans.M[0][0] = _xmm;
      bounds = (Scaleform::Render::Rect<float>)_xmm_f149f2caf149f2ca7149f2ca7149f2ca;
      *(_OWORD *)&trans.M[1][0] = _xmm;
      pos.Pos = v5->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shapeData);
      LODWORD(pos.Sfactor) = FLOAT_1_0;
      memset(&pos.StartX, 0, 44);
      pos.Initialized = 0;
      while ( shapeData->ReadPathInfo(
                (Scaleform::Render::ShapeDataInterface *)shapeData,
                &pos,
                coord,
                (unsigned int *)v10) )
        Scaleform::Render::ExpandBoundsToPath<Scaleform::Render::Matrix2x4<float>>(
          shapeData,
          &trans,
          &pos,
          coord,
          &bounds);
      glyphShape->Bounds = bounds;
    }
  }
}

Scaleform::Render::GlyphNode *__fastcall Scaleform::Render::GlyphCache::getPrerasterizedGlyph(
        Scaleform::Render::GlyphCache *this,
        Scaleform::Render::GlyphRunData *data,
        Scaleform::Render::TextMeshProvider *tm,
        const Scaleform::Render::GlyphParam *gp)
{
  const Scaleform::Render::GlyphRaster *pRaster; // rsi
  unsigned int SlotPadding; // ebp
  int v8; // ebx
  int v9; // er12
  unsigned int MaxSlotHeight; // er14
  unsigned int v11; // er15
  Scaleform::Render::GlyphNode *Glyph; // rax
  Scaleform::Render::GlyphNode *v13; // r15
  Scaleform::Render::TextNotifier *Notifier; // rax
  unsigned __int64 v15; // rbx
  unsigned __int8 *v16; // rcx
  unsigned int i; // ebx
  bool v18; // zf
  unsigned int v19; // [rsp+60h] [rbp+8h]

  pRaster = data->pRaster;
  if ( pRaster->Height + 2 * this->SlotPadding < this->MaxSlotHeight
    || data->pShape->IsEmpty((Scaleform::Render::ShapeDataInterface *)data->pShape) )
  {
    SlotPadding = this->SlotPadding;
    v8 = -(pRaster->OriginX + SlotPadding);
    v9 = -(pRaster->OriginY + SlotPadding);
    MaxSlotHeight = pRaster->Height + SlotPadding + SlotPadding + 1;
    v11 = 2 * SlotPadding + pRaster->Width + 1;
    v19 = v11;
    if ( MaxSlotHeight > this->MaxSlotHeight )
    {
      MaxSlotHeight = this->MaxSlotHeight;
      if ( this->RasterTooBigWarning )
      {
        Scaleform::Render::GlyphCache::LogWarning(
          this,
          "Warning: Raster glyph is too big - increase GlyphCacheParams.MaxSlotHeight");
        this->RasterTooBigWarning = 0;
      }
    }
    Glyph = Scaleform::Render::GlyphQueue::AllocateGlyph(&this->Queue, gp, v11, MaxSlotHeight);
    v13 = Glyph;
    if ( Glyph )
    {
      Notifier = Scaleform::Render::GlyphQueue::CreateNotifier(&this->Queue, Glyph, tm);
      Scaleform::Render::TextMeshProvider::AddNotifier(tm, Notifier);
      v13->Origin.x = 16 * v8;
      v13->Origin.y = 16 * v9;
      v13->Scale = 1.0;
      v15 = v19 * MaxSlotHeight;
      Scaleform::ArrayData<unsigned char,Scaleform::AllocatorLH_POD<unsigned char,2>,Scaleform::ArrayDefaultPolicy>::Resize(
        &this->RasterData.Data,
        v15);
      v16 = this->RasterData.Data.Data;
      this->RasterPitch = v19;
      memset(v16, 0, (unsigned int)v15);
      for ( i = 0; i < pRaster->Height; ++i )
      {
        if ( i + SlotPadding >= MaxSlotHeight )
          break;
        memmove(
          &this->RasterData.Data.Data[SlotPadding + this->RasterPitch * (i + SlotPadding)],
          &pRaster->Raster.Data.Data[i * pRaster->Width],
          pRaster->Width);
      }
      Scaleform::Render::GlyphCache::updateTextureGlyph(this, v13);
      ++this->RasterizationCount;
      return v13;
    }
    else
    {
      v18 = !this->RasterCacheWarning;
      this->Result = Res_CacheFull;
      if ( !v18 )
      {
        Scaleform::Render::GlyphCache::LogWarning(
          this,
          "Warning: Increase raster glyph cache capacity - see GlyphCacheParams");
        this->RasterCacheWarning = 0;
      }
      return 0i64;
    }
  }
  else
  {
    this->Result = Res_ShapeIsTooBig;
    return 0i64;
  }
}

void __fastcall Scaleform::Render::GlyphCache::initialize(Scaleform::Render::GlyphCache *this)
{
  Scaleform::Render::TextureManager *v2; // rax
  unsigned int textureWidth; // er10
  unsigned int textureHeight; // er9
  unsigned int NumTextures; // er11
  unsigned int maxSlotHeight; // er15
  unsigned int SlotPadding; // esi
  unsigned int TexUpdWidth; // edi
  unsigned int TexUpdHeight; // er14
  bool fenceWaitOnFull; // r12
  unsigned int v11; // eax
  unsigned int v12; // ecx
  char v13; // dl
  char i; // r8
  __int64 v15; // rsi
  float ShadowQuality; // eax
  char v17; // al
  Scaleform::MemoryHeap *pHeap; // rax
  Scaleform::Render::RawImage *v19; // rax
  Scaleform::Render::RawImage *pObject; // rcx
  Scaleform::Render::RawImage *v21; // rdi
  unsigned int j; // edi
  Scaleform::Render::TextureManager *pTexMan; // r9
  Scaleform::MemoryHeap *v24; // r8
  unsigned int Method; // edx
  Scaleform::Render::FontCacheHandleManager *v26; // rax
  Scaleform::Render::FontCacheHandleManager *v27; // rax
  Scaleform::Render::FontCacheHandleManager *v28; // rdi
  Scaleform::RefCountVImpl *v29; // rcx
  Scaleform::Render::PrimitiveFillManager *pFillMan; // rcx
  Scaleform::Render::PrimitiveFill *v31; // rax
  Scaleform::Render::PrimitiveFill *v32; // rcx
  Scaleform::Render::PrimitiveFill *v33; // rdi
  Scaleform::Render::PrimitiveFill *v34; // rax
  Scaleform::Render::PrimitiveFill *v35; // rcx
  Scaleform::Render::PrimitiveFill *v36; // rdi
  Scaleform::Render::RQCacheInterface *v37; // rax
  Scaleform::Render::CacheBase *v38; // rcx
  const Scaleform::Render::VertexFormat **p_pFormat; // rdi
  __int64 v40; // rbx
  Scaleform::RefCountVImpl *v41; // rcx
  const Scaleform::Render::VertexFormat **v42; // rbx
  Scaleform::RefCountVImpl *v43; // rcx
  Scaleform::Render::Size<unsigned long> size; // [rsp+40h] [rbp-49h] BYREF
  __int128 v45; // [rsp+48h] [rbp-41h]
  Scaleform::Render::PrimitiveFillData v46; // [rsp+60h] [rbp-29h] BYREF
  Scaleform::Render::PrimitiveFillData initdata; // [rsp+88h] [rbp-1h] BYREF

  Scaleform::Render::GlyphCache::Destroy(this);
  v2 = this->pRenderer->GetTextureManager(this->pRenderer);
  textureWidth = this->Param.TextureWidth;
  textureHeight = this->Param.TextureHeight;
  NumTextures = this->Param.NumTextures;
  maxSlotHeight = this->Param.MaxSlotHeight;
  SlotPadding = this->Param.SlotPadding;
  TexUpdWidth = this->Param.TexUpdWidth;
  TexUpdHeight = this->Param.TexUpdHeight;
  fenceWaitOnFull = this->Param.FenceWaitOnFullCache;
  this->pTexMan = v2;
  v11 = 63;
  v12 = 63;
  if ( textureWidth >= 0x40 )
    v12 = textureWidth - 1;
  if ( textureHeight >= 0x40 )
    v11 = textureHeight - 1;
  v13 = 0;
  for ( i = 0; v12; v12 >>= 1 )
    ++v13;
  for ( ; v11; v11 >>= 1 )
    ++i;
  this->SlotPadding = SlotPadding;
  this->MaxSlotHeight = maxSlotHeight;
  if ( NumTextures > 0x20 )
    NumTextures = 32;
  this->TextureWidth = 1 << v13;
  v15 = 2i64;
  ShadowQuality = this->Param.ShadowQuality;
  this->TextureHeight = 1 << i;
  this->MaxNumTextures = NumTextures;
  this->ShadowQuality = ShadowQuality;
  this->ScaleU = 1.0 / (float)(1 << v13);
  this->ScaleV = 1.0 / (float)(1 << i);
  if ( NumTextures )
  {
    Scaleform::Render::GlyphQueue::Init(
      &this->Queue,
      &this->Notifier,
      0,
      NumTextures,
      textureWidth,
      textureHeight,
      maxSlotHeight,
      fenceWaitOnFull);
    v17 = this->pTexMan->GetTextureUseCaps(this->pTexMan, Image_A8);
    if ( v17 >= 0 )
    {
      if ( (v17 & 0x20) != 0 )
      {
        pHeap = this->pHeap;
        v45 = __PAIR64__(TexUpdHeight, TexUpdWidth);
        this->Method = TU_MultipleUpdate;
        *(_OWORD *)&this->UpdatePacker.Width = __PAIR64__(TexUpdHeight, TexUpdWidth);
        this->UpdatePacker.LastMaxHeight = 0;
        size.Width = TexUpdWidth;
        size.Height = TexUpdHeight;
        v19 = Scaleform::Render::RawImage::Create(Image_A8, 1u, &size, 0, pHeap, 0i64);
        pObject = this->UpdateBuffer.pObject;
        v21 = v19;
        if ( pObject )
          pObject->Release(pObject);
        this->UpdateBuffer.pObject = v21;
      }
      else
      {
        this->Method = TU_WholeImage;
      }
    }
    else
    {
      this->Method = TU_DirectMap;
    }
    for ( j = 0; j < this->MaxNumTextures; ++j )
    {
      pTexMan = this->pTexMan;
      v24 = this->pHeap;
      Method = this->Method;
      size = *(Scaleform::Render::Size<unsigned long> *)&this->TextureWidth;
      Scaleform::Render::GlyphTextureMapper::Create(
        &this->Textures[j],
        Method,
        v24,
        pTexMan,
        this->pFillMan,
        this,
        j,
        &size);
    }
  }
  if ( !this->pFontHandleManager.pObject )
  {
    v26 = (Scaleform::Render::FontCacheHandleManager *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, __int64))Scaleform::Memory::pGlobalHeap->Alloc)(
                                                         Scaleform::Memory::pGlobalHeap,
                                                         112i64);
    if ( v26 )
    {
      Scaleform::Render::FontCacheHandleManager::FontCacheHandleManager(v26, this->pHeap, this);
      v28 = v27;
    }
    else
    {
      v28 = 0i64;
    }
    v29 = (Scaleform::RefCountVImpl *)this->pFontHandleManager.pObject;
    if ( v29 )
      Scaleform::RefCountImpl::Release(v29);
    this->pFontHandleManager.pObject = v28;
  }
  pFillMan = this->pFillMan;
  initdata.pFormat = &Scaleform::Render::VertexXY16iCF32::Format;
  *(_QWORD *)&initdata.Type = 4i64;
  v46.pFormat = &Scaleform::Render::VertexXY16i::Format;
  *(_WORD *)&initdata.FillModes[0].Fill = 0;
  initdata.Textures[0].pObject = 0i64;
  initdata.Textures[1].pObject = 0i64;
  *(_QWORD *)&v46.Type = 1i64;
  *(_WORD *)&v46.FillModes[0].Fill = 0;
  v46.Textures[0].pObject = 0i64;
  v46.Textures[1].pObject = 0i64;
  v31 = Scaleform::Render::PrimitiveFillManager::CreateFill(pFillMan, &initdata);
  v32 = this->pSolidFill.pObject;
  v33 = v31;
  if ( v32 )
    Scaleform::RefCountNTSImpl::Release(v32);
  this->pSolidFill.pObject = v33;
  v34 = Scaleform::Render::PrimitiveFillManager::CreateFill(this->pFillMan, &v46);
  v35 = this->pMaskFill.pObject;
  v36 = v34;
  if ( v35 )
    Scaleform::RefCountNTSImpl::Release(v35);
  this->pMaskFill.pObject = v36;
  v37 = this->pRenderer->GetRQCacheInterface(this->pRenderer);
  v38 = &this->Scaleform::Render::CacheBase;
  this->pRQCaches = v37;
  p_pFormat = &v46.pFormat;
  if ( !this )
    v38 = 0i64;
  v40 = 2i64;
  v37->pCaches[1] = v38;
  do
  {
    v41 = (Scaleform::RefCountVImpl *)*--p_pFormat;
    --v40;
    if ( v41 )
      Scaleform::RefCountImpl::Release(v41);
  }
  while ( v40 );
  v42 = &initdata.pFormat;
  do
  {
    v43 = (Scaleform::RefCountVImpl *)*--v42;
    --v15;
    if ( v43 )
      Scaleform::RefCountImpl::Release(v43);
  }
  while ( v15 );
}

__int64 __fastcall Scaleform::Render::GlyphCache::isOuterContourCW(
        Scaleform::Render::GlyphCache *this,
        const Scaleform::Render::ShapeDataInterface *shape)
{
  float v2; // xmm9_4
  float v3; // xmm10_4
  float v5; // xmm11_4
  float v6; // xmm12_4
  float v7; // xmm15_4
  bool v8; // si
  char v9; // di
  Scaleform::Render::ShapePathType v10; // eax
  Scaleform::Render::ShapeDataInterface_vtbl *v11; // rax
  float v12; // xmm13_4
  float v13; // xmm14_4
  float v14; // xmm6_4
  float v15; // xmm7_4
  float v16; // xmm8_4
  Scaleform::Render::PathEdgeType i; // eax
  float v18; // xmm2_4
  float v19; // xmm0_4
  float v21; // [rsp+28h] [rbp-E0h]
  float v22; // [rsp+2Ch] [rbp-DCh]
  float v23; // [rsp+30h] [rbp-D8h]
  __int64 v24[6]; // [rsp+34h] [rbp-D4h] BYREF
  int v25; // [rsp+64h] [rbp-A4h]
  Tween::EasingType v26; // [rsp+68h] [rbp-A0h]
  int v27; // [rsp+6Ch] [rbp-9Ch]
  float v28; // [rsp+70h] [rbp-98h] BYREF
  float v29; // [rsp+74h] [rbp-94h]
  float v30; // [rsp+78h] [rbp-90h]
  float v31; // [rsp+7Ch] [rbp-8Ch]
  int v32[4]; // [rsp+88h] [rbp-80h] BYREF

  v2 = FLOAT_1_0e10;
  v3 = FLOAT_N1_0e10;
  v5 = FLOAT_1_0e10;
  v21 = FLOAT_1_0e10;
  v6 = FLOAT_N1_0e10;
  v22 = FLOAT_N1_0e10;
  v7 = FLOAT_1_0e10;
  v23 = FLOAT_N1_0e10;
  v8 = 1;
  HIDWORD(v24[0]) = shape->GetStartingPos((Scaleform::Render::ShapeDataInterface *)shape);
  v26 = FLOAT_1_0;
  memset(&v24[1], 0, 40);
  v9 = 1;
  v25 = 0;
  LOBYTE(v27) = 0;
  v10 = shape->ReadPathInfo(
          (Scaleform::Render::ShapeDataInterface *)shape,
          (Scaleform::Render::ShapePosInfo *)((char *)v24 + 4),
          &v28,
          (unsigned int *)v32);
  if ( v10 == Shape_EndShape )
    return 1i64;
  do
  {
    if ( !v9 && v10 == Shape_NewLayer )
      break;
    v9 = 0;
    v11 = shape->__vftable;
    if ( v32[0] == v32[1] )
    {
      v11->SkipPathData(
        (Scaleform::Render::ShapeDataInterface *)shape,
        (Scaleform::Render::ShapePosInfo *)((char *)v24 + 4));
    }
    else
    {
      v12 = v28;
      v13 = v29;
      v14 = v28;
      v15 = v29;
      v16 = 0.0;
      for ( i = v11->ReadEdge(
                  (Scaleform::Render::ShapeDataInterface *)shape,
                  (Scaleform::Render::ShapePosInfo *)((char *)v24 + 4),
                  &v28);
            i;
            i = shape->ReadEdge(
                  (Scaleform::Render::ShapeDataInterface *)shape,
                  (Scaleform::Render::ShapePosInfo *)((char *)v24 + 4),
                  &v28) )
      {
        v18 = v29 * v14;
        v14 = v28;
        v2 = fminf(v28, v2);
        v5 = fminf(v29, v5);
        v3 = fmaxf(v28, v3);
        v19 = v28 * v15;
        v15 = v29;
        v6 = fmaxf(v29, v6);
        v16 = v16 + (float)(v18 - v19);
        if ( i == Edge_QuadTo )
        {
          v14 = v30;
          v15 = v31;
          v2 = fminf(v30, v2);
          v5 = fminf(v31, v5);
          v3 = fmaxf(v30, v3);
          v6 = fmaxf(v31, v6);
          v16 = v16 + (float)((float)(v31 * v28) - (float)(v30 * v29));
        }
      }
      if ( v14 != v12 || v15 != v13 )
      {
        v2 = fminf(v12, v2);
        v5 = fminf(v13, v5);
        v16 = v16 + (float)((float)(v14 * v13) - (float)(v15 * v12));
        v3 = fmaxf(v12, v3);
        v6 = fmaxf(v13, v6);
      }
      if ( v7 > v2 || v21 > v5 || v3 > v22 || v6 > v23 )
      {
        v21 = v5;
        v22 = v3;
        v7 = v2;
        v23 = v6;
        v8 = v16 > 0.0;
      }
    }
    v10 = shape->ReadPathInfo(
            (Scaleform::Render::ShapeDataInterface *)shape,
            (Scaleform::Render::ShapePosInfo *)((char *)v24 + 4),
            &v28,
            (unsigned int *)v32);
  }
  while ( v10 );
  return v8;
}

void __fastcall Scaleform::Render::GlyphCache::partialUpdateTextures(Scaleform::Render::GlyphCache *this)
{
  Scaleform::Render::RawImage *pObject; // rcx
  unsigned int i; // er15
  Scaleform::Render::GlyphTextureMapper *v4; // r13
  unsigned int NumGlyphsToUpdate; // eax
  unsigned __int64 v6; // rbx
  unsigned int v7; // edi
  unsigned int v8; // ebx
  unsigned int v9; // er13
  Scaleform::Render::GlyphCache::UpdateRect *v10; // r14
  Scaleform::Render::RawImage *v11; // rcx
  __int64 v12; // rax
  Scaleform::Render::Texture::UpdateDesc *v13; // rdi
  Scaleform::Render::Palette *v14; // rdi
  Scaleform::Render::Texture::UpdateDesc *Data; // rbx
  __int64 v16; // rax
  Scaleform::Render::Palette *v17; // rbx
  Scaleform::Render::ImageData v18; // [rsp+28h] [rbp-59h] BYREF
  Scaleform::Render::ImageData pdata; // [rsp+68h] [rbp-19h] BYREF
  Scaleform::Render::GlyphTextureMapper *v20; // [rsp+F0h] [rbp+6Fh]

  pObject = this->UpdateBuffer.pObject;
  pdata.pPlanes = &pdata.Plane0;
  *(_QWORD *)&pdata.Format = 0i64;
  *(_DWORD *)&pdata.Flags = 0x10000;
  memset(&pdata.pPalette, 0, 40);
  Scaleform::Render::RawImage::GetImageData(pObject, &pdata);
  for ( i = 0; i < this->MaxNumTextures; ++i )
  {
    v4 = &this->Textures[i];
    v20 = v4;
    NumGlyphsToUpdate = v4->NumGlyphsToUpdate;
    if ( NumGlyphsToUpdate )
    {
      v6 = NumGlyphsToUpdate;
      Scaleform::ArrayUnsafeBase<Scaleform::Render::Texture::UpdateDesc,Scaleform::AllocatorLH_POD<Scaleform::Render::Texture::UpdateDesc,2>>::Reserve(
        &this->RectsToUpdate,
        NumGlyphsToUpdate,
        0x20ui64);
      this->RectsToUpdate.Size = v6;
      v7 = 0;
      v8 = 0;
      if ( LODWORD(this->GlyphsToUpdate.Size) )
      {
        v9 = 0;
        do
        {
          v10 = &this->GlyphsToUpdate.Pages[(unsigned __int64)v8 >> 6][v8 & 0x3F];
          if ( v10->TextureId == i )
          {
            v11 = this->UpdateBuffer.pObject;
            v12 = v9++;
            *(_QWORD *)&v18.Format = 0i64;
            v13 = &this->RectsToUpdate.Data[v12];
            *(_DWORD *)&v18.Flags = 0x10000;
            v18.pPlanes = &v18.Plane0;
            memset(&v18.pPalette, 0, 40);
            Scaleform::Render::RawImage::GetImageData(v11, &v18);
            v13->DestRect.x1 = v10->DstX;
            v13->DestRect.y1 = v10->DstY;
            v13->DestRect.x2 = v10->DstX + v10->w;
            v13->DestRect.y2 = v10->DstY + v10->h;
            v13->SourcePlane = *pdata.pPlanes;
            v13->SourcePlane.pData = &v18.pPlanes->pData[v18.pPlanes->Pitch * v10->SrcY + v10->SrcX];
            v13->PlaneIndex = 0;
            Scaleform::Render::ImageData::freePlanes(&v18);
            v14 = v18.pPalette.pObject;
            if ( v18.pPalette.pObject )
            {
              if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                                   &v18.pPalette.pObject->RefCount.Value,
                                   -1) == 1 )
                Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v14);
            }
          }
          ++v8;
        }
        while ( v8 < LODWORD(this->GlyphsToUpdate.Size) );
        v7 = v9;
        v4 = v20;
      }
      Data = this->RectsToUpdate.Data;
      if ( v4->Method == 1 )
      {
        v16 = (__int64)v4->pTexImg.pObject->GetTexture(v4->pTexImg.pObject, v4->pTexMan);
        if ( v16 )
          (*(void (__fastcall **)(__int64, Scaleform::Render::Texture::UpdateDesc *, _QWORD, _QWORD))(*(_QWORD *)v16 + 152i64))(
            v16,
            Data,
            v7,
            0i64);
      }
      v4->NumGlyphsToUpdate = 0;
    }
  }
  this->GlyphsToUpdate.Size = 0i64;
  *(_QWORD *)&this->UpdatePacker.LastX = 0i64;
  this->UpdatePacker.LastMaxHeight = 0;
  Scaleform::Render::ImageData::freePlanes(&pdata);
  v17 = pdata.pPalette.pObject;
  if ( pdata.pPalette.pObject )
  {
    if ( (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                         &pdata.pPalette.pObject->RefCount.Value,
                         -1) == 1 )
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v17);
  }
}

void __fastcall Scaleform::Render::GlyphCache::recursiveBlur(
        Scaleform::Render::GlyphCache *this,
        unsigned __int8 *img,
        unsigned int pitch,
        unsigned int sx,
        unsigned int sy,
        unsigned int w,
        unsigned int h,
        float rx,
        float ry)
{
  Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy> *p_BlurStack; // rbx
  Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy> *p_BlurSum; // rdi
  Scaleform::Render::ImgBlurWrapperY imga; // [rsp+20h] [rbp-48h] BYREF

  p_BlurStack = &this->BlurStack;
  p_BlurSum = &this->BlurSum;
  imga.Pitch = pitch;
  imga.Sx = sx;
  imga.Img = img;
  imga.Sy = sy;
  imga.W = w;
  imga.H = h;
  Scaleform::Render::RecursiveBlur<Scaleform::Render::ImgBlurWrapperX,Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>,Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>(
    (Scaleform::Render::ImgBlurWrapperX *)&imga,
    rx,
    &this->BlurSum,
    &this->BlurStack);
  imga.Img = img;
  imga.Pitch = pitch;
  imga.Sx = sx;
  imga.Sy = sy;
  imga.W = w;
  imga.H = h;
  Scaleform::Render::RecursiveBlur<Scaleform::Render::ImgBlurWrapperY,Scaleform::ArrayLH_POD<float,2,Scaleform::ArrayDefaultPolicy>,Scaleform::ArrayLH_POD<unsigned char,2,Scaleform::ArrayDefaultPolicy>>(
    &imga,
    ry,
    p_BlurSum,
    p_BlurStack);
}

void __fastcall Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::setRawCapacity(
        Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > *this,
        void *pheapAddr,
        unsigned __int64 newSize)
{
  __int64 v5; // rdi
  __int64 v6; // rbx
  __int64 v7; // rcx
  unsigned __int64 v8; // rbp
  const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> *v9; // rsi
  Scaleform::Render::VectorGlyphShape *pObject; // rcx
  Scaleform::Render::VectorGlyphShape *v11; // rcx
  int v12; // [rsp+60h] [rbp+18h] BYREF
  Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> > v13; // [rsp+68h] [rbp+20h] BYREF

  if ( newSize )
  {
    if ( newSize >= 8 )
      v5 = 1i64 << ((unsigned __int8)Scaleform::Alg::UpperBit(newSize - 1) + 1);
    else
      v5 = 8i64;
    v12 = 2;
    v6 = 0i64;
    v13.pTable = 0i64;
    v13.pTable = (Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor> >::TableType *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(Scaleform::Memory::pGlobalHeap, pheapAddr, 24 * v5 + 16, &v12);
    v13.pTable->EntryCount = 0i64;
    v13.pTable->SizeMask = v5 - 1;
    if ( v5 )
    {
      v7 = 0i64;
      do
      {
        v7 += 24i64;
        *(_QWORD *)((char *)v13.pTable + v7 - 8) = -2i64;
        --v5;
      }
      while ( v5 );
    }
    if ( this->pTable )
    {
      v8 = this->pTable->SizeMask + 1;
      do
      {
        v9 = (const Scaleform::Ptr<Scaleform::Render::VectorGlyphShape> *)((char *)this->pTable + v6);
        if ( v9[2].pObject != (Scaleform::Render::VectorGlyphShape *)-2i64 )
        {
          pObject = v9[4].pObject;
          Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::add<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>>(
            &v13,
            pheapAddr,
            v9 + 4,
            (unsigned __int64)pObject->Key.pFont ^ ((unsigned __int64)pObject->Key.pFont >> 6) ^ pObject->Key.GlyphIndex ^ pObject->Key.HintedVector ^ pObject->Key.HintedRaster ^ pObject->Key.Flags ^ (unsigned __int64)pObject->Key.Outline);
          v11 = v9[4].pObject;
          if ( v11 )
            v11->Release(&v11->Scaleform::Render::MeshProvider);
          v9[2].pObject = (Scaleform::Render::VectorGlyphShape *)-2i64;
        }
        v6 += 24i64;
        --v8;
      }
      while ( v8 );
      Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->pTable);
    }
    this->pTable = v13.pTable;
  }
  else
  {
    Scaleform::HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>::~HashSetBase<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::Render::VectorGlyphShape::PtrHashFunctor,Scaleform::AllocatorLH<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,2>,Scaleform::HashsetCachedEntry<Scaleform::Ptr<Scaleform::Render::VectorGlyphShape>,Scaleform::Render::VectorGlyphShape::PtrHashFunctor>>(this);
  }
}

void __fastcall Scaleform::Render::GlyphCache::strengthenImage(
        Scaleform::Render::GlyphCache *this,
        unsigned __int8 *img,
        unsigned int pitch,
        unsigned int sx,
        unsigned int sy,
        unsigned int w,
        unsigned int h,
        float ratio,
        int bias)
{
  unsigned int v10; // er11
  __int64 v11; // rbx
  __int64 v12; // rbp
  unsigned int v13; // er9
  unsigned __int8 *v14; // rcx
  unsigned int v15; // eax
  __int64 v16; // r8
  int v17; // eax
  int v18; // eax
  int v19; // eax
  int v20; // eax
  __int64 v21; // r8
  int v22; // eax

  if ( ratio != 1.0 && h )
  {
    v10 = sy * pitch;
    v11 = h;
    v12 = sx;
    do
    {
      v13 = 0;
      v14 = &img[v12 + v10];
      if ( w >= 4 )
      {
        v15 = ((w - 4) >> 2) + 1;
        v16 = v15;
        v13 = 4 * v15;
        do
        {
          v17 = bias + (int)(float)((float)((float)(*v14 - bias) * ratio) + 0.5);
          if ( v17 >= 0 )
          {
            if ( v17 > 255 )
              LOBYTE(v17) = -1;
          }
          else
          {
            LOBYTE(v17) = 0;
          }
          *v14 = v17;
          v18 = bias + (int)(float)((float)((float)(v14[1] - bias) * ratio) + 0.5);
          if ( v18 >= 0 )
          {
            if ( v18 > 255 )
              LOBYTE(v18) = -1;
          }
          else
          {
            LOBYTE(v18) = 0;
          }
          v14[1] = v18;
          v19 = bias + (int)(float)((float)((float)(v14[2] - bias) * ratio) + 0.5);
          if ( v19 >= 0 )
          {
            if ( v19 > 255 )
              LOBYTE(v19) = -1;
          }
          else
          {
            LOBYTE(v19) = 0;
          }
          v14[2] = v19;
          v20 = bias + (int)(float)((float)((float)(v14[3] - bias) * ratio) + 0.5);
          if ( v20 >= 0 )
          {
            if ( v20 > 255 )
              LOBYTE(v20) = -1;
          }
          else
          {
            LOBYTE(v20) = 0;
          }
          v14[3] = v20;
          v14 += 4;
          --v16;
        }
        while ( v16 );
      }
      if ( v13 < w )
      {
        v21 = w - v13;
        do
        {
          v22 = bias + (int)(float)((float)((float)(*v14 - bias) * ratio) + 0.5);
          if ( v22 >= 0 )
          {
            if ( v22 > 255 )
              LOBYTE(v22) = -1;
          }
          else
          {
            LOBYTE(v22) = 0;
          }
          *v14++ = v22;
          --v21;
        }
        while ( v21 );
      }
      v10 += pitch;
      --v11;
    }
    while ( v11 );
  }
}

char __fastcall Scaleform::Render::GlyphCache::updateTextureGlyph(
        Scaleform::Render::GlyphCache *this,
        const Scaleform::Render::GlyphNode *node)
{
  unsigned __int8 *v3; // r14
  unsigned int w; // er15
  unsigned int h; // esi
  int textureId; // er12
  char *v7; // r13
  Scaleform::Render::TextureManager *pTexMan; // r9
  Scaleform::MemoryHeap *pHeap; // r8
  unsigned int Method; // edx
  unsigned int LastX; // er14
  unsigned int v12; // ecx
  unsigned int LastY; // edi
  Scaleform::Render::RawImage *pObject; // rcx
  Scaleform::ArrayPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,6,16,2> *p_GlyphsToUpdate; // rbx
  unsigned __int64 v16; // rdi
  __int64 v17; // rcx
  Scaleform::Render::GlyphCache::UpdateRect *v18; // rax
  Scaleform::Render::Palette *v19; // rbx
  Scaleform::Render::ImagePlane *v21; // rax
  unsigned __int8 *data; // [rsp+40h] [rbp-59h]
  __int128 v23; // [rsp+48h] [rbp-51h]
  Scaleform::Render::ImageData pdata; // [rsp+70h] [rbp-29h] BYREF
  unsigned int dstY; // [rsp+100h] [rbp+67h]
  unsigned int dstX; // [rsp+108h] [rbp+6Fh]
  unsigned int pitch; // [rsp+110h] [rbp+77h]
  Scaleform::Render::Size<unsigned long> size; // [rsp+118h] [rbp+7Fh] BYREF

  v3 = this->RasterData.Data.Data;
  w = node->mRect.w;
  h = node->mRect.h;
  textureId = node->pSlot->TextureId & 0x7FFF;
  pitch = this->RasterPitch;
  dstX = node->mRect.x;
  dstY = node->mRect.y;
  data = v3;
  v7 = (char *)this + 112 * (node->pSlot->TextureId & 0x7FFF);
  if ( !v7[152] )
  {
    pTexMan = this->pTexMan;
    pHeap = this->pHeap;
    Method = this->Method;
    size = *(Scaleform::Render::Size<unsigned long> *)&this->TextureWidth;
    Scaleform::Render::GlyphTextureMapper::Create(
      (Scaleform::Render::GlyphTextureMapper *)(v7 + 152),
      Method,
      pHeap,
      pTexMan,
      this->pFillMan,
      this,
      textureId,
      &size);
  }
  this->pRQCaches->LockFlags |= 2u;
  if ( this->Method == TU_MultipleUpdate )
  {
    LastX = this->UpdatePacker.LastX;
    v12 = LastX + w;
    if ( LastX + w <= this->UpdatePacker.Width )
    {
      LastY = this->UpdatePacker.LastY;
      if ( LastY + h <= this->UpdatePacker.Height )
      {
LABEL_6:
        this->UpdatePacker.LastX = v12;
        if ( h <= this->UpdatePacker.LastMaxHeight )
          goto LABEL_14;
        goto LABEL_13;
      }
    }
    LastY = this->UpdatePacker.LastY + this->UpdatePacker.LastMaxHeight;
    this->UpdatePacker.LastY = LastY;
    if ( LastY + h <= this->UpdatePacker.Height )
      goto LABEL_12;
    Scaleform::Render::GlyphCache::partialUpdateTextures(this);
    LastX = this->UpdatePacker.LastX;
    v12 = LastX + w;
    if ( LastX + w <= this->UpdatePacker.Width )
    {
      LastY = this->UpdatePacker.LastY;
      if ( LastY + h <= this->UpdatePacker.Height )
        goto LABEL_6;
    }
    LastY = this->UpdatePacker.LastY + this->UpdatePacker.LastMaxHeight;
    this->UpdatePacker.LastY = LastY;
    if ( LastY + h <= this->UpdatePacker.Height )
    {
LABEL_12:
      this->UpdatePacker.LastX = w;
      LastX = 0;
LABEL_13:
      this->UpdatePacker.LastMaxHeight = h;
LABEL_14:
      pObject = this->UpdateBuffer.pObject;
      memset(&pdata.pPalette, 0, 40);
      pdata.pPlanes = &pdata.Plane0;
      *(_QWORD *)&pdata.Format = 0i64;
      *(_DWORD *)&pdata.Flags = 0x10000;
      Scaleform::Render::RawImage::GetImageData(pObject, &pdata);
      Scaleform::Render::GlyphCache::copyImageData(this, pdata.pPlanes, data, pitch, LastX, LastY, w, h);
      ++*((_DWORD *)v7 + 65);
      p_GlyphsToUpdate = &this->GlyphsToUpdate;
      DWORD1(v23) = LastY;
      *((_QWORD *)&v23 + 1) = __PAIR64__(dstY, dstX);
      v16 = p_GlyphsToUpdate->Size >> 6;
      LODWORD(v23) = LastX;
      if ( v16 >= p_GlyphsToUpdate->NumPages )
        Scaleform::ArrayPagedBase<Scaleform::Render::GlyphCache::UpdateRect,6,16,Scaleform::AllocatorPagedLH_POD<Scaleform::Render::GlyphCache::UpdateRect,2>>::allocatePage(
          p_GlyphsToUpdate,
          v16);
      v17 = p_GlyphsToUpdate->Size & 0x3F;
      v18 = p_GlyphsToUpdate->Pages[v16];
      *(_OWORD *)&v18[v17].SrcX = v23;
      *(_QWORD *)&v18[v17].w = __PAIR64__(h, w);
      v18[v17].TextureId = textureId;
      ++p_GlyphsToUpdate->Size;
      Scaleform::Render::ImageData::freePlanes(&pdata);
      v19 = pdata.pPalette.pObject;
      if ( pdata.pPalette.pObject
        && (unsigned int)Scaleform::AtomicOpsRaw_4ByteImpl::ExchangeAdd_NoSync(
                           &pdata.pPalette.pObject->RefCount.Value,
                           -1) == 1 )
      {
        Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, v19);
        return 1;
      }
      return 1;
    }
  }
  else
  {
    v21 = Scaleform::Render::GlyphTextureMapper::Map((Scaleform::Render::GlyphTextureMapper *)(v7 + 152));
    if ( v21 )
    {
      Scaleform::Render::GlyphCache::copyImageData(this, v21, v3, pitch, dstX, dstY, w, h);
      return 1;
    }
  }
  return 0;
}

