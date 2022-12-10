#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix4x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_fontcachehandle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix2x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_stroker.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtgmath.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/xtr1common"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hairliner.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_linebuffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_highlight.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_context.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_constants.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_sysalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_hash.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_vertex.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_log.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_simd_sse.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textlayout.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_types2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatadefs.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/math.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_refcount.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memory.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_memoryheap.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixstate.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_profiler.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_ampinterface.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_atomic.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_utf8util.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocinfo.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/sys/stat.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textprimitivebundle.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/wchar.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachetext.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wconio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_alg.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treetext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_sgmlparser.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_viewport.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcache.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_meshkey.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_sync.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_strokeraa.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_primitive.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocaddr.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_radixtree.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_queue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_gradients.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_uncopyable.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_stats.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_twips.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_timer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphcacheconfig.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_docview.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_range.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_font.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_rasterizer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessdefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphparam.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/malloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_image.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdlib.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_shapedatapacked.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/cmath"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_color.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_pathdatapacker.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filters.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/heapmh/heapmh_sysallocmalloc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_filterdesc.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_filterparams.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/stdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_core.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wstdio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrix3x4.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_fontmanager.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_stdio_config.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wtime.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/string.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphqueue.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memory.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_memcpy_s.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_resizeimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arrayunsafe.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_memorymanager.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_matrixpool.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_std.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_containers.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_allocator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_scale9grid.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cxform.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/ctype.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_arraystaticbuff.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_treecachenode.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_bundle.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_threadcommandqueue.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_list.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threads.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_array.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_file.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/text/text_styledtext.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_wstring.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_drawableimage.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_buffer.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_math2d.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_toleranceparams.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_textmeshprovider.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessgen.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_types.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_tessellator.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_hal.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_cacheeffect.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/kernel/sf_threadcheck.h"
#include "program files (x86)/windows kits/10/include/10.0.10240.0/ucrt/corecrt_wio.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_states.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_statebag.h"
#include "program files (x86)/microsoft visual studio 14.0/vc/include/vadefs.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_glyphfitter.h"
#include "dev/kof/master/development/source/middleware/autodesk/scaleform/gfx_sdk/src/render/render_texturecache.h"

struct Scaleform::Render::ImageGlyphVertex
{
	float x; // 0x0
	float y; // 0x4
	float u; // 0x8
	float v; // 0xC
	void Set(float, float, float, float);
	static Scaleform::Render::VertexElement Elements[3]; // 0xFFFFFFFFFFFFFFFF
	static Scaleform::Render::VertexFormat Format; // 0xFFFFFFFFFFFFFFFF
};
void Scaleform::Render::VectorGlyphShape::OnEvict(Scaleform::Render::MeshBase * mesh); // 0x14002E7C0
Scaleform::Render::Rect<float> Scaleform::Render::VectorGlyphShape::GetBounds(const Scaleform::Render::Matrix2x4<float> & m); // 0x1404002E0
bool Scaleform::Render::VectorGlyphShape::HitTestShape(const Scaleform::Render::Matrix2x4<float> & m, float x, float y, float morphRatio, Scaleform::Render::StrokeGenerator * gen, const Scaleform::Render::ToleranceParams * tol); // 0x14004BBE0
bool Scaleform::Render::VectorGlyphShape::GetData(Scaleform::Render::HAL * hal, Scaleform::Render::MeshBase * mesh, Scaleform::Render::VertexOutput * verOut, unsigned long meshGenFlags); // 0x1403FF760
enum Scaleform::Render::VectorGlyphShape::GetData::__l2::<unnamed-enum-VerBufSize>
{
	VerBufSize = 128,
	TriBufSize = 128,
};
void Scaleform::Render::VectorGlyphShape::GetFillData(Scaleform::Render::FillData * data, unsigned long layer, unsigned long fillIndex, unsigned long meshGenFlags); // 0x140400260
Scaleform::Render::TextMeshProvider::TextMeshProvider(Scaleform::Render::GlyphCache * cache); // 0x1403FDEE0
Scaleform::Render::TextMeshProvider::~TextMeshProvider(); // 0x1403FE040
void Scaleform::Render::TextMeshProvider::ClearEntries(); // 0x1403FE7A0
void Scaleform::Render::TextMeshProvider::Clear(); // 0x1403FE650
void Scaleform::Render::TextMeshProvider::AddToInUseList(); // 0x1403FE180
Scaleform::Render::Fence * Scaleform::Render::TextMeshProvider::GetLatestFence(); // 0x140400300
void Scaleform::Render::TextMeshProvider::OnEvictSlots(); // 0x140400570
void Scaleform::Render::TextMeshProvider::AddNotifier(Scaleform::Render::TextNotifier * notifier); // 0x1403FE100
void Scaleform::Render::TextMeshProvider::PinSlots(); // 0x140400580
void Scaleform::Render::TextMeshProvider::UnpinSlots(); // 0x140400970
Scaleform::Render::MeshUseStatus Scaleform::Render::TextMeshProvider::GetMeshUseStatus(); // 0x140400470
void Scaleform::Render::TextMeshProvider::setMeshData(Scaleform::Render::TessBase * tess, Scaleform::Render::VertexOutput * verOut, const unsigned long * colors, Scaleform::Render::TextMeshProvider::VertexCountType & verCount); // 0x140404F90
enum Scaleform::Render::TextMeshProvider::setMeshData::__l2::<unnamed-enum-ChunkSize>
{
	ChunkSize = 64,
};
Scaleform::Render::VertexElement Scaleform::Render::ImageGlyphVertex::Elements[3]; // 0x1409FA3F0
Scaleform::Render::VertexFormat Scaleform::Render::ImageGlyphVertex::Format; // 0x1409FA408
void(*Scaleform::Render::ImageGlyphVertex::ormat$initializer$::operator--)(); // 0x140739E50
bool Scaleform::Render::TextMeshProvider::generateSelection(Scaleform::Render::HAL * hal, Scaleform::Render::VertexOutput * verOut, const Scaleform::Render::TextMeshLayer & layer, const Scaleform::Render::Matrix2x4<float> & mtx, unsigned long meshGenFlags); // 0x140404040
class Scaleform::ArrayStaticBuffPOD<unsigned long,16,2>
{
	typedef unsigned long ValueType;
private:
	ArrayStaticBuffPOD<unsigned long,16,2>(const Scaleform::ArrayStaticBuffPOD<unsigned long,16,2> &);
public:
	ArrayStaticBuffPOD<unsigned long,16,2>(Scaleform::MemoryHeap *);
	~ArrayStaticBuffPOD<unsigned long,16,2>();
	void Clear();
	void PushBack(const unsigned long &);
	unsigned long long GetSize();
	void CutAt(unsigned long long);
	unsigned long & operator[](unsigned long long);
	const unsigned long & operator[](unsigned long long);
	unsigned long & At(unsigned long long);
	const unsigned long & At(unsigned long long);
	unsigned long ValueAt(unsigned long long);
private:
	const Scaleform::ArrayStaticBuffPOD<unsigned long,16,2> & operator=(const Scaleform::ArrayStaticBuffPOD<unsigned long,16,2> &);
	Scaleform::MemoryHeap * pHeap; // 0x0
	unsigned long long Size; // 0x8
	unsigned long long Reserved; // 0x10
	unsigned long Static[16]; // 0x18
	unsigned long * Data; // 0x58
public:
	void __dflt_ctor_closure();
};
struct Scaleform::Render::CornerVertex
{
	float x; // 0x0
	float y; // 0x4
	CornerVertex(float, float);
	CornerVertex();
};
void Scaleform::Render::calcMiter<Scaleform::Render::CornerVertex>(const Scaleform::Render::CornerVertex v0, const Scaleform::Render::CornerVertex v1, const Scaleform::Render::CornerVertex v2, float width, float * x, float * y); // 0x1403FDD20
bool Scaleform::Render::TextMeshProvider::generateRectangle(Scaleform::Render::HAL * hal, Scaleform::Render::VertexOutput * verOut, const Scaleform::Render::Matrix2x4<float> & mtx, const float * coord, unsigned long fillColor, unsigned long borderColor, unsigned long meshGenFlags); // 0x140403A80
bool Scaleform::Render::TextMeshProvider::clipGlyphRect(Scaleform::Render::Rect<float> & chr, Scaleform::Render::Rect<float> & tex); // 0x1404026E0
bool Scaleform::Render::TextMeshProvider::generateRasterMesh(Scaleform::Render::VertexOutput * verOut, const Scaleform::Render::TextMeshLayer & layer); // 0x1404036A0
enum Scaleform::Render::TextMeshProvider::generateRasterMesh::__l2::<unnamed-enum-GlyphChunkSize>
{
	GlyphChunkSize = 64,
};
bool Scaleform::Render::TextMeshProvider::generatePackedMesh(Scaleform::Render::VertexOutput * verOut, const Scaleform::Render::TextMeshLayer & layer); // 0x140403200
enum Scaleform::Render::TextMeshProvider::generatePackedMesh::__l2::<unnamed-enum-GlyphChunkSize>
{
	GlyphChunkSize = 64,
};
bool Scaleform::Render::TextMeshProvider::generateImageMesh(Scaleform::Render::VertexOutput * verOut, const Scaleform::Render::TextMeshLayer & layer); // 0x140402CD0
bool Scaleform::Render::TextMeshProvider::generateUnderlines(Scaleform::Render::HAL * hal, Scaleform::Render::VertexOutput * verOut, const Scaleform::Render::TextMeshLayer & layer, const Scaleform::Render::Matrix2x4<float> & mtx, unsigned long meshGenFlags); // 0x1404046F0
Scaleform::Render::MatrixPoolImpl::HMatrix Scaleform::Render::TextMeshProvider::UpdateMaskClearBounds(Scaleform::Render::HAL * hal, Scaleform::Render::MatrixPoolImpl::HMatrix viewMat); // 0x1404009E0
Scaleform::Render::MatrixPoolImpl::HMatrix Scaleform::Render::TextMeshProvider::GetMaskClearBounds(); // 0x140400450
bool Scaleform::Render::TextMeshProvider::generateMask(Scaleform::Render::VertexOutput * verOut, const Scaleform::Render::TextMeshLayer & layer); // 0x140402FC0
bool Scaleform::Render::TextMeshProvider::generateNullVectorMesh(Scaleform::Render::VertexOutput * verOut); // 0x140403120
bool Scaleform::Render::TextMeshProvider::GetData(Scaleform::Render::HAL * hal, Scaleform::Render::MeshBase * mesh, Scaleform::Render::VertexOutput * verOut, unsigned long meshGenFlags); // 0x1403FF5B0
void Scaleform::Render::TextMeshProvider::GetFillData(Scaleform::Render::FillData * data, unsigned long layer, unsigned long fillIndex, unsigned long meshGenFlags); // 0x1403FFFA0
void Scaleform::Render::TextMeshProvider::addVectorGlyph(Scaleform::Render::TmpTextStorage & storage, unsigned long color, Scaleform::Render::FontCacheHandle * font, unsigned short glyphIndex, unsigned short flags, float fontSize, float x, float y); // 0x1404022C0
void Scaleform::Render::TextMeshProvider::addSelection(Scaleform::Render::TmpTextStorage & storage, unsigned long color, const Scaleform::Render::Rect<float> & rect); // 0x140401D60
void Scaleform::Render::TextMeshProvider::addUnderline(Scaleform::Render::TmpTextStorage & storage, unsigned long color, Scaleform::Render::TextUnderlineStyle style, float x, float y, float len); // 0x1404021F0
void Scaleform::Render::TextMeshProvider::addMask(Scaleform::Render::TmpTextStorage & storage); // 0x1404019C0
void Scaleform::Render::TextMeshProvider::addLayer(Scaleform::Render::TmpTextStorage & storage, Scaleform::Render::TextLayerType type, unsigned long start, unsigned long count); // 0x1404015F0
enum Scaleform::Render::TextMeshProvider::addLayer::__l2::<unnamed-enum-MaxCapacity>
{
	MaxCapacity = 16382,
};
void Scaleform::Render::TextMeshProvider::addLayer(Scaleform::Render::TmpTextStorage & storage, unsigned long long start, unsigned long long end); // 0x1404016D0
void Scaleform::Render::TextMeshProvider::sortEntries(Scaleform::Render::TmpTextStorage & storage); // 0x140405200
void Scaleform::Render::TextMeshProvider::addImage(Scaleform::Render::TmpTextStorage & storage, const Scaleform::Render::GlyphRunData & data, Scaleform::Render::Image * img, float scaleX, float scaleY, float baseLine, bool snap); // 0x140401320
float Scaleform::Render::TextMeshProvider::calcHeightRatio(const Scaleform::Render::MatrixPoolImpl::HMatrix & m, const Scaleform::Render::Matrix4x4<float> & m4, const Scaleform::Render::Viewport & vp); // 0x1404024F0
bool Scaleform::Render::TextMeshProvider::NeedsUpdate(const Scaleform::Render::MatrixPoolImpl::HMatrix & m, const Scaleform::Render::Matrix4x4<float> & m4, const Scaleform::Render::Viewport & vp, const Scaleform::Render::TextFieldParam & param); // 0x140400500
void Scaleform::Render::TextMeshProvider::addRasterGlyph(Scaleform::Render::TmpTextStorage & storage, Scaleform::Render::TextLayerType type, Scaleform::Render::GlyphRunData & data, unsigned long color, Scaleform::Render::GlyphNode * node, float screenSize, bool snap, float stretch); // 0x140401A70
void Scaleform::Render::TextMeshProvider::addTextureGlyph(Scaleform::Render::TmpTextStorage & storage, const Scaleform::Render::TextureGlyph * tgl, Scaleform::Render::GlyphRunData & data, unsigned long color); // 0x140401E00
bool Scaleform::Render::TextMeshProvider::addGlyph(Scaleform::Render::HAL * hal, Scaleform::Render::TmpTextStorage & storage, Scaleform::Render::GlyphRunData & data, unsigned long glyphIndex, bool fauxBold, bool fauxItalic, bool snap, unsigned long meshGenFlags); // 0x140400BF0
unsigned long Scaleform::Render::TextMeshProvider::CalcVectorParams(Scaleform::Render::HAL * hal, Scaleform::Render::TextMeshLayer & layer, const Scaleform::Render::TextMeshEntry & ent, const Scaleform::Render::Matrix2x4<float> & scalingMtx, float sizeScale, const Scaleform::Render::MatrixPoolImpl::HMatrix & m, unsigned long meshGenFlags, float * keyData); // 0x1403FE1C0
void Scaleform::Render::TextMeshProvider::createVectorGlyph(Scaleform::Render::HAL * hal, unsigned long layerIdx, const Scaleform::Render::MatrixPoolImpl::HMatrix & m, unsigned long meshGenFlags); // 0x140402960
bool Scaleform::Render::TextMeshProvider::CreateMeshData(Scaleform::Render::HAL * hal, const Scaleform::Render::TextLayout * layout, const Scaleform::Render::MatrixPoolImpl::HMatrix & m, const Scaleform::Render::Matrix4x4<float> & m4, const Scaleform::Render::Viewport & vp, unsigned long meshGenFlags); // 0x1403FE8C0//decompilation failure at 1409FA3F0!
//decompilation failure at 1409FA408!
//decompilation failure at 140739E50!
void __fastcall Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>,Scaleform::Render::TextMeshProvider::CmpEntries>(
        Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4> *arr,
        unsigned __int64 start,
        unsigned __int64 end,
        Scaleform::Render::TextMeshProvider::CmpEntries less)
{
  signed __int64 v4; // rbp
  unsigned __int64 v5; // r15
  char *i; // rdi
  unsigned __int64 v8; // r10
  unsigned __int64 v9; // r9
  Scaleform::Render::TmpTextMeshEntry **Pages; // rdx
  Scaleform::Render::TmpTextMeshEntry *v11; // r8
  __int64 v12; // r14
  Scaleform::Render::TmpTextMeshEntry *v13; // rax
  __int64 v14; // rsi
  __int128 v15; // xmm2
  __int128 v16; // xmm3
  Scaleform::Render::MaskEnt v17; // xmm4
  unsigned __int64 v18; // rbx
  Scaleform::Render::TmpTextMeshEntry **v19; // rcx
  __int64 v20; // r11
  Scaleform::Render::TmpTextMeshEntry *v21; // rdx
  __int64 v22; // rcx
  bool v23; // cf
  Scaleform::Render::PrimitiveFill *v24; // rax
  Scaleform::Render::PrimitiveFill *pFill; // r8
  __int128 v26; // xmm2
  __int128 v27; // xmm3
  Scaleform::Render::MaskEnt v28; // xmm4
  Scaleform::Render::TmpTextMeshEntry **v29; // rcx
  Scaleform::Render::TmpTextMeshEntry *v30; // rdx
  Scaleform::Render::TmpTextMeshEntry *v31; // rcx
  bool v32; // cf
  Scaleform::Render::PrimitiveFill *v33; // rax
  Scaleform::Render::PrimitiveFill *v34; // r8
  __int128 v35; // xmm2
  __int128 v36; // xmm3
  Scaleform::Render::MaskEnt v37; // xmm4
  Scaleform::Render::TmpTextMeshEntry **v38; // rcx
  Scaleform::Render::TmpTextMeshEntry *v39; // rdx
  __int64 v40; // rcx
  bool v41; // cf
  Scaleform::Render::PrimitiveFill *v42; // rax
  Scaleform::Render::PrimitiveFill *v43; // r8
  __int128 v44; // xmm2
  __int128 v45; // xmm3
  Scaleform::Render::MaskEnt v46; // xmm4
  Scaleform::Render::TmpTextMeshEntry **v47; // r11
  Scaleform::Render::TmpTextMeshEntry *v48; // r8
  unsigned __int16 LayerType; // bx
  __int64 v50; // rdx
  bool v51; // cf
  Scaleform::Render::PrimitiveFill *v52; // rax
  Scaleform::Render::PrimitiveFill *v53; // rcx
  unsigned __int16 v54; // bx
  __int64 v55; // rax
  bool v56; // cf
  Scaleform::Render::PrimitiveFill *v57; // rcx
  Scaleform::Render::PrimitiveFill *v58; // rdx
  Scaleform::Render::TmpTextMeshEntry *v59; // r8
  __int128 v60; // xmm0
  Scaleform::Render::TmpTextMeshEntry *v61; // rdx
  __int128 v62; // xmm2
  __int128 v63; // xmm3
  Scaleform::Render::MaskEnt v64; // xmm4
  Scaleform::Render::TmpTextMeshEntry *v65; // rax
  __int128 v66; // xmm2
  __int128 v67; // xmm3
  Scaleform::Render::MaskEnt v68; // xmm4
  signed __int64 v69; // r11
  unsigned __int64 j; // r9
  Scaleform::Render::TmpTextMeshEntry **v71; // rbx
  __int64 v72; // rdx
  __int64 v73; // r8
  bool v74; // cf
  unsigned __int64 v75; // rax
  unsigned __int64 v76; // rcx
  Scaleform::Render::TmpTextMeshEntry *v77; // rcx
  __int128 v78; // xmm2
  __int128 v79; // xmm3
  __int128 v80; // xmm4
  unsigned __int64 v81; // [rsp+0h] [rbp-2D8h]
  char v82[640]; // [rsp+10h] [rbp-2C8h] BYREF

  v4 = end;
  v5 = start;
  if ( end - start >= 2 )
  {
    for ( i = v82; ; v4 = *((_QWORD *)i + 1) )
    {
      while ( (__int64)(v4 - v5) > 9 )
      {
        v8 = v5 + 1;
        v9 = v4 - 1;
        Pages = arr->Pages;
        v11 = &Pages[(v5 + (__int64)(v4 - v5) / 2) >> 6][((_DWORD)v5 + (unsigned int)((__int64)(v4 - v5) / 2)) & 0x3F];
        v12 = v5 >> 6;
        v13 = Pages[v12];
        v14 = v5 & 0x3F;
        v15 = *(_OWORD *)&v13[v14].LayerType;
        v16 = *(_OWORD *)&v13[v14].pFill;
        v17 = *(Scaleform::Render::MaskEnt *)((char *)&v13[v14].EntryData.MaskData + 8);
        *(_OWORD *)&v13[v14].LayerType = *(_OWORD *)&v11->LayerType;
        *(_OWORD *)&v13[v14].pFill = *(_OWORD *)&v11->pFill;
        *(Scaleform::Render::MaskEnt *)((char *)&v13[v14].EntryData.MaskData + 8) = *(Scaleform::Render::MaskEnt *)((char *)&v11->EntryData.MaskData + 8);
        *(_OWORD *)&v11->LayerType = v15;
        *(_OWORD *)&v11->pFill = v16;
        v18 = (v5 + 1) >> 6;
        *(Scaleform::Render::MaskEnt *)((char *)&v11->EntryData.MaskData + 8) = v17;
        v19 = arr->Pages;
        v20 = ((_BYTE)v5 + 1) & 0x3F;
        v21 = &v19[v18][v20];
        v81 = 8 * ((unsigned __int64)(v4 - 1) >> 6);
        v22 = (__int64)&v19[v81 / 8][((_BYTE)v4 - 1) & 0x3F];
        v23 = *(_WORD *)v22 < v21->LayerType;
        if ( *(_WORD *)v22 == v21->LayerType )
        {
          v24 = *(Scaleform::Render::PrimitiveFill **)(v22 + 16);
          pFill = v21->pFill;
          v23 = v24 < pFill;
          if ( v24 == pFill )
            v23 = *(_DWORD *)(v22 + 4) < v21->EntryIdx;
        }
        if ( v23 )
        {
          v26 = *(_OWORD *)v22;
          v27 = *(_OWORD *)(v22 + 16);
          v28 = *(Scaleform::Render::MaskEnt *)(v22 + 32);
          *(_OWORD *)v22 = *(_OWORD *)&v21->LayerType;
          *(_OWORD *)(v22 + 16) = *(_OWORD *)&v21->pFill;
          *(Scaleform::Render::MaskEnt *)(v22 + 32) = *(Scaleform::Render::MaskEnt *)((char *)&v21->EntryData.MaskData
                                                                                    + 8);
          *(_OWORD *)&v21->LayerType = v26;
          *(_OWORD *)&v21->pFill = v27;
          *(Scaleform::Render::MaskEnt *)((char *)&v21->EntryData.MaskData + 8) = v28;
        }
        v29 = arr->Pages;
        v30 = &v29[v18][v20];
        v31 = &v29[v12][v14];
        v32 = v31->LayerType < v30->LayerType;
        if ( v31->LayerType == v30->LayerType )
        {
          v33 = v31->pFill;
          v34 = v30->pFill;
          v32 = v33 < v34;
          if ( v33 == v34 )
            v32 = v31->EntryIdx < v30->EntryIdx;
        }
        if ( v32 )
        {
          v35 = *(_OWORD *)&v31->LayerType;
          v36 = *(_OWORD *)&v31->pFill;
          v37 = *(Scaleform::Render::MaskEnt *)((char *)&v31->EntryData.MaskData + 8);
          *(_OWORD *)&v31->LayerType = *(_OWORD *)&v30->LayerType;
          *(_OWORD *)&v31->pFill = *(_OWORD *)&v30->pFill;
          *(Scaleform::Render::MaskEnt *)((char *)&v31->EntryData.MaskData + 8) = *(Scaleform::Render::MaskEnt *)((char *)&v30->EntryData.MaskData + 8);
          *(_OWORD *)&v30->LayerType = v35;
          *(_OWORD *)&v30->pFill = v36;
          *(Scaleform::Render::MaskEnt *)((char *)&v30->EntryData.MaskData + 8) = v37;
        }
        v38 = arr->Pages;
        v39 = &v38[v12][v14];
        v40 = (__int64)&v38[v81 / 8][((_BYTE)v4 - 1) & 0x3F];
        v41 = *(_WORD *)v40 < v39->LayerType;
        if ( *(_WORD *)v40 == v39->LayerType )
        {
          v42 = *(Scaleform::Render::PrimitiveFill **)(v40 + 16);
          v43 = v39->pFill;
          v41 = v42 < v43;
          if ( v42 == v43 )
            v41 = *(_DWORD *)(v40 + 4) < v39->EntryIdx;
        }
        if ( v41 )
        {
          v44 = *(_OWORD *)v40;
          v45 = *(_OWORD *)(v40 + 16);
          v46 = *(Scaleform::Render::MaskEnt *)(v40 + 32);
          *(_OWORD *)v40 = *(_OWORD *)&v39->LayerType;
          *(_OWORD *)(v40 + 16) = *(_OWORD *)&v39->pFill;
          *(Scaleform::Render::MaskEnt *)(v40 + 32) = *(Scaleform::Render::MaskEnt *)((char *)&v39->EntryData.MaskData
                                                                                    + 8);
          *(_OWORD *)&v39->LayerType = v44;
          *(_OWORD *)&v39->pFill = v45;
          *(Scaleform::Render::MaskEnt *)((char *)&v39->EntryData.MaskData + 8) = v46;
        }
        while ( 1 )
        {
          v47 = arr->Pages;
          v48 = v47[v12];
          LayerType = v48[v5 & 0x3F].LayerType;
          do
          {
            ++v8;
            v50 = (__int64)&v47[v8 >> 6][v8 & 0x3F];
            v51 = *(_WORD *)v50 < LayerType;
            if ( *(_WORD *)v50 == LayerType )
            {
              v52 = *(Scaleform::Render::PrimitiveFill **)(v50 + 16);
              v53 = v48[v14].pFill;
              v51 = v52 < v53;
              if ( v52 == v53 )
                v51 = *(_DWORD *)(v50 + 4) < v48[v14].EntryIdx;
            }
          }
          while ( v51 );
          v54 = v48[v5 & 0x3F].LayerType;
          do
          {
            --v9;
            v55 = (__int64)&v47[v9 >> 6][v9 & 0x3F];
            v56 = v54 < *(_WORD *)v55;
            if ( v54 == *(_WORD *)v55 )
            {
              v57 = v48[v14].pFill;
              v58 = *(Scaleform::Render::PrimitiveFill **)(v55 + 16);
              v56 = v57 < v58;
              if ( v57 == v58 )
                v56 = v48[v14].EntryIdx < *(_DWORD *)(v55 + 4);
            }
          }
          while ( v56 );
          v59 = &v47[v9 >> 6][v9 & 0x3F];
          v60 = *(_OWORD *)&v59->LayerType;
          if ( (__int64)v8 > (__int64)v9 )
            break;
          v61 = &v47[v8 >> 6][v8 & 0x3F];
          v62 = *(_OWORD *)&v61->LayerType;
          v63 = *(_OWORD *)&v61->pFill;
          v64 = *(Scaleform::Render::MaskEnt *)((char *)&v61->EntryData.MaskData + 8);
          *(_OWORD *)&v61->LayerType = v60;
          *(_OWORD *)&v61->pFill = *(_OWORD *)&v59->pFill;
          *(Scaleform::Render::MaskEnt *)((char *)&v61->EntryData.MaskData + 8) = *(Scaleform::Render::MaskEnt *)((char *)&v59->EntryData.MaskData + 8);
          *(_OWORD *)&v59->LayerType = v62;
          *(_OWORD *)&v59->pFill = v63;
          *(Scaleform::Render::MaskEnt *)((char *)&v59->EntryData.MaskData + 8) = v64;
        }
        v65 = v47[v12];
        v66 = *(_OWORD *)&v65[v14].LayerType;
        v67 = *(_OWORD *)&v65[v14].pFill;
        v68 = *(Scaleform::Render::MaskEnt *)((char *)&v65[v14].EntryData.MaskData + 8);
        *(_OWORD *)&v65[v14].LayerType = v60;
        *(_OWORD *)&v65[v14].pFill = *(_OWORD *)&v59->pFill;
        *(Scaleform::Render::MaskEnt *)((char *)&v65[v14].EntryData.MaskData + 8) = *(Scaleform::Render::MaskEnt *)((char *)&v59->EntryData.MaskData + 8);
        *(_OWORD *)&v59->LayerType = v66;
        *(_OWORD *)&v59->pFill = v67;
        *(Scaleform::Render::MaskEnt *)((char *)&v59->EntryData.MaskData + 8) = v68;
        if ( (__int64)(v9 - v5) <= (__int64)(v4 - v8) )
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
      v69 = v5 + 1;
      for ( j = v5; v69 < v4; ++v69 )
      {
        while ( 1 )
        {
          v71 = arr->Pages;
          v72 = (__int64)&v71[j >> 6][j & 0x3F];
          v73 = (__int64)&v71[(j + 1) >> 6][((_BYTE)j + 1) & 0x3F];
          v74 = *(_WORD *)v73 < *(_WORD *)v72;
          if ( *(_WORD *)v73 == *(_WORD *)v72 )
          {
            v75 = *(_QWORD *)(v73 + 16);
            v76 = *(_QWORD *)(v72 + 16);
            v74 = v75 < v76;
            if ( v75 == v76 )
              v74 = *(_DWORD *)(v73 + 4) < *(_DWORD *)(v72 + 4);
          }
          if ( !v74 )
            break;
          v77 = &v71[(j + 1) >> 6][((_BYTE)j + 1) & 0x3F];
          v78 = *(_OWORD *)&v77->LayerType;
          v79 = *(_OWORD *)&v77->pFill;
          v80 = *(__int128 *)((char *)&v77->EntryData.MaskData + 8);
          *(_OWORD *)&v77->LayerType = *(_OWORD *)v72;
          *(_OWORD *)&v77->pFill = *(_OWORD *)(v72 + 16);
          *(Scaleform::Render::MaskEnt *)((char *)&v77->EntryData.MaskData + 8) = *(Scaleform::Render::MaskEnt *)(v72 + 32);
          *(_OWORD *)v72 = v78;
          *(_OWORD *)(v72 + 16) = v79;
          *(_OWORD *)(v72 + 32) = v80;
          if ( j == v5 )
            break;
          --j;
        }
        j = v69;
      }
      if ( i <= v82 )
        break;
      v5 = *((_QWORD *)i - 2);
      i -= 16;
    }
  }
}

void __fastcall Scaleform::Render::calcMiter_Scaleform::Render::CornerVertex_(
        const Scaleform::Render::CornerVertex v0,
        const Scaleform::Render::CornerVertex v1,
        const Scaleform::Render::CornerVertex v2,
        float width,
        float *x,
        float *y)
{
  float v6; // xmm11_4
  float v7; // xmm14_4
  float v8; // xmm13_4
  float v9; // xmm15_4
  float v10; // xmm6_4
  float v11; // xmm0_4
  float v13; // [rsp+6Ch] [rbp-9Ch]

  v6 = v1.y;
  v7 = v1.x;
  v13 = v0.y;
  v8 = v1.y - v0.y;
  v9 = v0.x;
  v10 = sqrtf((float)(v8 * v8) + (float)((float)(v1.x - v0.x) * (float)(v1.x - v0.x)));
  v11 = sqrtf((float)((float)(v2.y - v6) * (float)(v2.y - v6)) + (float)((float)(v2.x - v7) * (float)(v2.x - v7)));
  *x = v7;
  *y = v6;
  Scaleform::Render::Math2D::Intersection(
    v9 + (float)((float)(v8 * width) / v10),
    (float)((float)((float)(v9 - v7) * width) / v10) + v13,
    v7 + (float)((float)(v8 * width) / v10),
    (float)((float)((float)(v9 - v7) * width) / v10) + v6,
    (float)((float)((float)(v2.y - v6) * width) / v11) + v7,
    (float)((float)((float)(v7 - v2.x) * width) / v11) + v6,
    v2.x + (float)((float)((float)(v2.y - v6) * width) / v11),
    (float)((float)((float)(v7 - v2.x) * width) / v11) + v2.y,
    x,
    y,
    0.001);
}

void __fastcall Scaleform::Render::TextMeshProvider::TextMeshProvider(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::GlyphCache *cache)
{
  Scaleform::MemoryHeap *pHeap; // rax
  Scaleform::MemoryHeap *v3; // rax
  Scaleform::MemoryHeap *v4; // rax

  this->pPrev = (Scaleform::Render::TextMeshProvider *)-1i64;
  this->pNext = (Scaleform::Render::TextMeshProvider *)-1i64;
  this->__vftable = (Scaleform::Render::TextMeshProvider_vtbl *)&Scaleform::Render::TextMeshProvider::`vftable';
  this->pCache = cache;
  this->Flags = 0;
  if ( cache )
    pHeap = cache->pHeap;
  else
    pHeap = Scaleform::Memory::pGlobalHeap;
  this->Notifiers.Data.Data = 0i64;
  this->Notifiers.Data.Size = 0i64;
  this->Notifiers.Data.Policy.Capacity = 0i64;
  this->Notifiers.Data.pHeap = pHeap;
  if ( cache )
    v3 = cache->pHeap;
  else
    v3 = Scaleform::Memory::pGlobalHeap;
  this->Entries.Data.Data = 0i64;
  this->Entries.Data.Size = 0i64;
  this->Entries.Data.Policy.Capacity = 0i64;
  this->Entries.Data.pHeap = v3;
  if ( cache )
    v4 = cache->pHeap;
  else
    v4 = Scaleform::Memory::pGlobalHeap;
  this->Layers.Data.Data = 0i64;
  this->Layers.Data.Size = 0i64;
  this->Layers.Data.Policy.Capacity = 0i64;
  this->Layers.Data.pHeap = v4;
  this->PinCount = 0i64;
  this->pBundle = 0i64;
  this->pBundleEntry = 0i64;
  this->HeightRatio = 0.0;
  *(_QWORD *)&this->ClipBox.x1 = 0i64;
  *(_QWORD *)&this->ClipBox.x2 = 0i64;
  *(_QWORD *)&this->ClearBox.x1 = 0i64;
  *(_QWORD *)&this->ClearBox.x2 = 0i64;
  this->ClearBounds.pHandle = &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle;
  *(_QWORD *)&this->Bounds.x1 = 0i64;
  *(_QWORD *)&this->Bounds.x2 = 0i64;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>(
        Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Ptr<Scaleform::Render::PrimitiveFill> *p_pFill; // rbx

  Size = this->Size;
  if ( Size )
  {
    p_pFill = &this->Data[Size - 1].pFill;
    do
    {
      if ( p_pFill->pObject )
        Scaleform::RefCountNTSImpl::Release(p_pFill->pObject);
      p_pFill -= 5;
      --Size;
    }
    while ( Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
}

void __fastcall Scaleform::Render::TextMeshProvider::~TextMeshProvider(Scaleform::Render::TextMeshProvider *this)
{
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rcx

  this->__vftable = (Scaleform::Render::TextMeshProvider_vtbl *)&Scaleform::Render::TextMeshProvider::`vftable';
  Scaleform::Render::TextMeshProvider::Clear(this);
  pHandle = this->ClearBounds.pHandle;
  if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(pHandle->pHeader);
  Scaleform::ConstructorMov<Scaleform::Render::TextMeshLayer>::DestructArray(
    this->Layers.Data.Data,
    this->Layers.Data.Size);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Layers.Data.Data);
  Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>::~ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>(&this->Entries.Data);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Notifiers.Data.Data);
  this->__vftable = (Scaleform::Render::TextMeshProvider_vtbl *)&Scaleform::Render::MeshProvider::`vftable';
}

void __fastcall Scaleform::Render::TextMeshProvider::AddNotifier(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TextNotifier *notifier)
{
  unsigned __int64 v3; // rbx
  Scaleform::ArrayDH_POD<Scaleform::Render::TextNotifier *,2,Scaleform::ArrayDefaultPolicy> *p_Notifiers; // rdi
  unsigned __int64 v5; // r8
  Scaleform::Render::TextNotifier **Data; // rax

  if ( notifier )
  {
    v3 = this->Notifiers.Data.Size + 1;
    p_Notifiers = &this->Notifiers;
    if ( v3 >= this->Notifiers.Data.Size )
    {
      if ( v3 > this->Notifiers.Data.Policy.Capacity )
      {
        v5 = v3 + (v3 >> 2);
        goto LABEL_7;
      }
    }
    else if ( v3 < this->Notifiers.Data.Policy.Capacity >> 1 )
    {
      v5 = this->Notifiers.Data.Size + 1;
LABEL_7:
      Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        (Scaleform::ArrayDataBase<Scaleform::GFx::ASString,Scaleform::AllocatorDH<Scaleform::GFx::ASString,2>,Scaleform::ArrayDefaultPolicy> *)&this->Notifiers,
        this->Notifiers.Data.pHeap,
        v5);
    }
    Data = p_Notifiers->Data.Data;
    p_Notifiers->Data.Size = v3;
    Data[v3 - 1] = notifier;
    Scaleform::Render::GlyphQueue::PinSlot(notifier->pSlot);
  }
}

void __fastcall Scaleform::Render::TextMeshProvider::AddToInUseList(Scaleform::Render::TextMeshProvider *this)
{
  unsigned int Flags; // eax
  Scaleform::Render::GlyphCache *pCache; // rdx

  Flags = this->Flags;
  if ( (Flags & 6) == 0 )
  {
    pCache = this->pCache;
    this->Flags = Flags | 2;
    this->pPrev = pCache->TextInUse.Root.pPrev;
    this->pNext = (Scaleform::Render::TextMeshProvider *)&pCache->RectsToUpdate.Capacity;
    pCache->TextInUse.Root.pPrev->pNext = this;
    pCache->TextInUse.Root.pPrev = this;
  }
}

__int64 __fastcall Scaleform::Render::TextMeshProvider::CalcVectorParams(
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TextMeshLayer *layer,
        const Scaleform::Render::TextMeshEntry *ent,
        const Scaleform::Render::Matrix2x4<float> *scalingMtx,
        float sizeScale,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m,
        unsigned int meshGenFlags,
        float *keyData)
{
  __int128 v8; // xmm6
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // r8
  float y; // xmm1_4
  unsigned int v15; // xmm0_4
  Scaleform::Render::Matrix3x4<float> *Matrix3D; // rax
  __int128 v17; // xmm1
  __int128 v18; // xmm0
  Scaleform::Render::MatrixPoolImpl::HMatrix *p_M; // rbx
  Scaleform::Render::MatrixPoolImpl::MatrixPool *v20; // rax
  const Scaleform::Render::MatrixPoolImpl::HMatrix *v21; // rax
  unsigned __int8 Format; // al
  __int64 v23; // rcx
  __int64 v24; // rax
  float v25; // xmm1_4
  float v26; // xmm2_4
  float v27; // xmm7_4
  float v28; // xmm0_4
  float v29; // xmm8_4
  float v30; // xmm7_4
  float v31; // xmm3_4
  unsigned int v32; // xmm5_4
  float v33; // xmm10_4
  float v34; // xmm9_4
  float v35; // xmm0_4
  Scaleform::Render::MatrixPoolImpl::MatrixPool *v36; // rax
  unsigned int mColor; // eax
  int v38; // ecx
  __m128i v39; // xmm0
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rax
  const Scaleform::Render::Cxform *v41; // rdx
  unsigned int v42; // edi
  bool v43; // bl
  Scaleform::Render::MatrixPoolImpl::HMatrix result; // [rsp+28h] [rbp-E0h] BYREF
  Scaleform::Render::Matrix2x4<float> m2; // [rsp+34h] [rbp-D4h] BYREF
  float v47; // [rsp+54h] [rbp-B4h]
  Scaleform::Render::Cxform v48; // [rsp+58h] [rbp-B0h] BYREF
  Scaleform::Render::Matrix3x4<float> v49; // [rsp+78h] [rbp-90h] BYREF
  Scaleform::Render::Matrix3x4<float> m1; // [rsp+A8h] [rbp-60h] BYREF
  __int128 v51; // [rsp+128h] [rbp+20h]

  pHeader = m->pHandle->pHeader;
  if ( (pHeader->Format & 0x10) != 0 )
  {
    y = ent->EntryData.VectorData.y;
    m2.M[0][1] = sizeScale;
    *(_QWORD *)&m2.M[1][2] = LODWORD(sizeScale);
    *(float *)&v15 = ent->EntryData.VectorData.x + 0.0;
    *(_QWORD *)&m2.M[0][2] = 0i64;
    v47 = y + 0.0;
    *(_QWORD *)&m2.M[1][0] = v15;
    Matrix3D = Scaleform::Render::MatrixPoolImpl::HMatrix::GetMatrix3D((Scaleform::Render::MatrixPoolImpl::HMatrix *)m);
    *(_OWORD *)&v49.M[0][0] = *(_OWORD *)&Matrix3D->M[0][0];
    v17 = *(_OWORD *)&Matrix3D->M[1][0];
    *(_OWORD *)&m1.M[0][0] = *(_OWORD *)&v49.M[0][0];
    *(_OWORD *)&v49.M[1][0] = v17;
    v18 = *(_OWORD *)&Matrix3D->M[2][0];
    *(_OWORD *)&m1.M[1][0] = v17;
    *(_OWORD *)&v49.M[2][0] = v18;
    *(_OWORD *)&m1.M[2][0] = v18;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&v49, &m1, (Scaleform::Render::Matrix2x4<float> *)&m2.M[0][1]);
    p_M = &layer->M;
    if ( p_M->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    {
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix3D(p_M, &v49);
      goto LABEL_10;
    }
    v20 = hal->GetMatrixPool(hal);
    v21 = Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(v20, &result, &v49, 0x10u);
  }
  else
  {
    Format = pHeader->Format;
    v51 = v8;
    p_M = &layer->M;
    v23 = Format & 0xF;
    v24 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v23].Offsets[4] + 1i64;
    m2.M[0][1] = *(float *)&pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[v23].Offsets[4]
                                  + 1].pHandle;
    m2.M[0][2] = *((float *)&pHeader[v24].pHandle + 1);
    v25 = m2.M[0][2] * ent->EntryData.VectorData.y;
    LODWORD(m2.M[0][3]) = pHeader[v24].RefCount;
    *(_QWORD *)&m2.M[1][0] = *(_QWORD *)&pHeader[v24].DataPageOffset;
    m2.M[1][2] = *((float *)&pHeader[v24 + 1].pHandle + 1);
    v26 = m2.M[1][2] * ent->EntryData.VectorData.y;
    LODWORD(m2.M[1][3]) = pHeader[v24 + 1].RefCount;
    v27 = *(float *)&pHeader[v24 + 1].DataPageOffset;
    v28 = m2.M[0][1] * ent->EntryData.VectorData.x;
    m2.M[1][3] = 0.0;
    v29 = m2.M[1][0] + (float)(v25 + v28);
    v30 = v27 + (float)(v26 + (float)(m2.M[1][1] * ent->EntryData.VectorData.x));
    v31 = m2.M[1][2] * 0.0;
    *(float *)&v32 = (float)(m2.M[0][2] * sizeScale) + (float)(m2.M[0][1] * 0.0);
    v33 = (float)(m2.M[0][1] * 0.0) + (float)(m2.M[0][2] * 0.0);
    m2.M[0][1] = (float)(m2.M[0][1] * sizeScale) + (float)(m2.M[0][2] * 0.0);
    v34 = m2.M[1][1] * 0.0;
    *(_QWORD *)&m2.M[0][2] = v32;
    v35 = (float)(m2.M[1][1] * sizeScale) + (float)(m2.M[1][2] * 0.0);
    m2.M[1][2] = (float)(m2.M[1][2] * sizeScale) + (float)(m2.M[1][1] * 0.0);
    m2.M[1][0] = v29 + v33;
    m2.M[1][1] = v35;
    v47 = v30 + (float)(v34 + v31);
    if ( layer->M.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    {
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(p_M, (Scaleform::Render::Matrix2x4<float> *)&m2.M[0][1]);
      goto LABEL_10;
    }
    v36 = (Scaleform::Render::MatrixPoolImpl::MatrixPool *)((__int64 (__fastcall *)(Scaleform::Render::HAL *, Scaleform::Render::MatrixPoolImpl::HMatrixConstants::ElementsInfo *))hal->GetMatrixPool)(
                                                             hal,
                                                             Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable);
    v21 = Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(
            v36,
            &result,
            (Scaleform::Render::Matrix2x4<float> *)&m2.M[0][1],
            0);
  }
  Scaleform::Render::MatrixPoolImpl::HMatrix::operator=(p_M, v21);
  if ( result.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(result.pHandle->pHeader);
LABEL_10:
  mColor = ent->mColor;
  *(_OWORD *)&v48.M[0][0] = 0i64;
  LODWORD(result.pHandle) = mColor;
  v38 = (unsigned __int8)mColor;
  v48.M[1][0] = (float)BYTE2(mColor) / 255.0;
  v48.M[1][1] = (float)BYTE1(mColor) / 255.0;
  v39 = _mm_cvtsi32_si128(HIBYTE(mColor));
  pHandle = m->pHandle;
  v48.M[1][3] = _mm_cvtepi32_ps(v39).m128_f32[0] / 255.0;
  v48.M[1][2] = (float)v38 / 255.0;
  if ( (pHandle->pHeader->Format & 1) != 0 )
    v41 = (const Scaleform::Render::Cxform *)&pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHandle->pHeader->Format & 0xF].Offsets[0]
                                                             + 1];
  else
    v41 = &Scaleform::Render::Cxform::Identity;
  Scaleform::Render::Cxform::Append(&v48, v41);
  Scaleform::Render::MatrixPoolImpl::HMatrix::SetCxform(p_M, &v48);
  v42 = (((meshGenFlags & 1) << 6) + 1) | 0x80;
  if ( (meshGenFlags & 2) == 0 )
    v42 = ((meshGenFlags & 1) << 6) + 1;
  v43 = Scaleform::Render::MeshKey::CalcMatrixKey(scalingMtx, keyData, 0i64);
  keyData[(unsigned int)Scaleform::Render::MeshKey::GetKeySize(v42) - 1] = 0.0;
  if ( !v43 )
    v42 |= 0x8000u;
  return v42;
}

void __fastcall Scaleform::Render::TextMeshProvider::Clear(Scaleform::Render::TextMeshProvider *this)
{
  unsigned int Flags; // ecx
  unsigned int v3; // ecx
  Scaleform::Render::TextPrimitiveBundle *pBundle; // rcx

  Flags = this->Flags;
  if ( (Flags & 6) != 0 )
  {
    v3 = Flags & 0xFFFFFFFD;
    this->Flags = v3;
    if ( (v3 & 6) == 4 )
    {
      this->Flags = v3 & 0xFFFFFFFB;
      Scaleform::Render::TextMeshProvider::UnpinSlots(this);
    }
    this->pPrev->pNext = this->pNext;
    this->pNext->pPrev = this->pPrev;
    this->pPrev = (Scaleform::Render::TextMeshProvider *)-1i64;
    this->pNext = (Scaleform::Render::TextMeshProvider *)-1i64;
  }
  pBundle = this->pBundle;
  if ( pBundle )
  {
    Scaleform::Render::TextPrimitiveBundle::removeEntryFromLayers(pBundle, this->pBundleEntry);
    this->pBundle = 0i64;
    this->pBundleEntry = 0i64;
  }
  Scaleform::Render::TextMeshProvider::ClearEntries(this);
  Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>::ClearAndRelease(&this->Entries.Data);
  Scaleform::ConstructorMov<Scaleform::Render::TextMeshLayer>::DestructArray(
    this->Layers.Data.Data,
    this->Layers.Data.Size);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Layers.Data.Data);
  this->Layers.Data.Data = 0i64;
  this->Layers.Data.Size = 0i64;
  this->Layers.Data.Policy.Capacity = 0i64;
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>::ClearAndRelease(
        Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy> *this)
{
  unsigned __int64 Size; // rdi
  Scaleform::Ptr<Scaleform::Render::PrimitiveFill> *p_pFill; // rbx

  Size = this->Size;
  if ( Size )
  {
    p_pFill = &this->Data[Size - 1].pFill;
    do
    {
      if ( p_pFill->pObject )
        Scaleform::RefCountNTSImpl::Release(p_pFill->pObject);
      p_pFill -= 5;
      --Size;
    }
    while ( Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Data);
  this->Data = 0i64;
  this->Size = 0i64;
  this->Policy.Capacity = 0i64;
}

void __fastcall Scaleform::Render::TextMeshProvider::ClearEntries(Scaleform::Render::TextMeshProvider *this)
{
  unsigned __int64 i; // rdi
  unsigned __int64 v3; // rdi
  __int64 v4; // rsi
  Scaleform::Render::TextMeshEntry *Data; // rcx
  unsigned __int64 Size; // rsi
  Scaleform::Ptr<Scaleform::Render::PrimitiveFill> *p_pFill; // rdi

  for ( i = 0i64; i < this->Notifiers.Data.Size; ++i )
    Scaleform::Render::GlyphQueue::RemoveNotifier(&this->pCache->Queue, this->Notifiers.Data.Data[i]);
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Notifiers.Data.Data);
  this->Notifiers.Data.Data = 0i64;
  v3 = 0i64;
  this->Notifiers.Data.Size = 0i64;
  this->Notifiers.Data.Policy.Capacity = 0i64;
  if ( this->Entries.Data.Size )
  {
    v4 = 0i64;
    do
    {
      Data = this->Entries.Data.Data;
      if ( ((Data[v4].LayerType - 8) & 0xFFFB) == 0 )
        Scaleform::RefCountImpl::Release((Scaleform::RefCountVImpl *)Data[v4].EntryData.VectorData.pFont);
      ++v3;
      ++v4;
    }
    while ( v3 < this->Entries.Data.Size );
  }
  Size = this->Entries.Data.Size;
  if ( Size )
  {
    p_pFill = &this->Entries.Data.Data[Size - 1].pFill;
    do
    {
      if ( p_pFill->pObject )
        Scaleform::RefCountNTSImpl::Release(p_pFill->pObject);
      p_pFill -= 5;
      --Size;
    }
    while ( Size );
  }
  Scaleform::Memory::pGlobalHeap->Free(Scaleform::Memory::pGlobalHeap, this->Entries.Data.Data);
  this->Entries.Data.Data = 0i64;
  this->Entries.Data.Size = 0i64;
  this->Entries.Data.Policy.Capacity = 0i64;
  this->Flags &= 0xFFFFFE1F;
}

char __fastcall Scaleform::Render::TextMeshProvider::CreateMeshData(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::HAL *hal,
        const Scaleform::Render::TextLayout *layout,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m,
        const Scaleform::Render::Matrix4x4<float> *m4,
        const Scaleform::Render::Viewport *vp,
        unsigned int meshGenFlags)
{
  Scaleform::MemoryHeap *v7; // rax
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // r8
  float *v12; // rax
  float v13; // xmm4_4
  float v14; // xmm3_4
  float v15; // xmm5_4
  float v16; // xmm2_4
  float v17; // xmm2_4
  float v18; // xmm0_4
  float v19; // xmm0_4
  bool snap; // r15
  __int128 v21; // xmm0
  __int128 v22; // xmm1
  __int128 v23; // xmm0
  __int128 v24; // xmm1
  Scaleform::Render::Rect<float> Bounds; // xmm0
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // rdx
  __int64 v27; // rax
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v28; // rax
  float y2; // xmm2_4
  float x2; // xmm1_4
  float x1; // eax
  float v32; // xmm1_4
  float v33; // xmm2_4
  float v34; // eax
  unsigned __int64 Next; // rsi
  Scaleform::Render::HAL *v36; // r13
  int v37; // ebx
  Scaleform::Render::PrimitiveFill *Fill; // rax
  char Size; // al
  unsigned __int64 v40; // rbx
  __int64 v41; // rdx
  Scaleform::Render::TmpTextMeshEntry *v42; // rcx
  float v43; // xmm6_4
  float v44; // xmm7_4
  float v45; // xmm0_4
  float v46; // xmm2_4
  float v47; // xmm1_4
  __int64 v48; // rbx
  Scaleform::Render::GlyphCache *pCache; // rcx
  Scaleform::Render::FontCacheHandle *v50; // rax
  Scaleform::Render::TextLayerType v51; // ecx
  __int128 v52; // xmm6
  const Scaleform::Render::MatrixPoolImpl::HMatrix *v53; // r13
  Scaleform::Render::Mesh *v54; // r15
  char v55; // r14
  unsigned __int64 v56; // rsi
  Scaleform::Render::TmpTextMeshEntry *v57; // rbx
  float v58; // xmm6_4
  float v59; // xmm6_4
  float v60; // xmm4_4
  float v61; // xmm0_4
  float v62; // xmm3_4
  float v63; // xmm2_4
  float v64; // xmm1_4
  float v65; // xmm0_4
  float v66; // xmm2_4
  float v67; // xmm1_4
  float v68; // xmm0_4
  float v69; // xmm2_4
  Scaleform::Render::Fence *LatestFence; // rax
  Scaleform::Render::Fence *v71; // rsi
  unsigned __int64 i; // rbx
  unsigned __int64 v73; // rsi
  __int64 v74; // rbx
  Scaleform::Render::TextMeshLayer *v75; // r14
  Scaleform::Render::Mesh *v76; // rax
  Scaleform::Render::Mesh *v77; // rax
  Scaleform::RefCountVImpl *pObject; // rcx
  unsigned __int64 MaxPages; // r8
  Scaleform::Render::LinearHeap::PageType *v80; // rbx
  __int128 v82; // [rsp+58h] [rbp-B0h]
  __m256i v83; // [rsp+68h] [rbp-A0h]
  Scaleform::Render::TmpTextStorage storage; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::Render::HAL *hala; // [rsp+108h] [rbp+0h]
  Scaleform::Render::Matrix2x4<float> v86; // [rsp+118h] [rbp+10h] BYREF
  Scaleform::Render::GlyphRunData data; // [rsp+138h] [rbp+30h] BYREF
  Scaleform::Render::MatrixPoolImpl::HMatrix *other[2]; // [rsp+238h] [rbp+130h] BYREF
  Scaleform::Render::Matrix2x4<float> viewMatrix; // [rsp+248h] [rbp+140h] BYREF

  v7 = Scaleform::Memory::pGlobalHeap;
  this->Flags &= 0xFFFFFF1F;
  storage.LHeap.pHeap = v7;
  storage.Entries.pHeap = (Scaleform::Render::LinearHeap *)&storage;
  storage.Layers.pHeap = (Scaleform::Render::LinearHeap *)&storage;
  storage.LHeap.Granularity = 0x2000i64;
  memset(&storage.LHeap.pPagePool, 0, 24);
  other[0] = (Scaleform::Render::MatrixPoolImpl::HMatrix *)m;
  pHandle = m->pHandle;
  memset(&storage.Entries.Size, 0, 32);
  memset(&storage.Layers.Size, 0, 32);
  hala = hal;
  v12 = (float *)&pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHandle->pHeader->Format & 0xF].Offsets[4]
                                 + 1];
  v13 = *v12;
  viewMatrix.M[0][0] = *v12;
  v14 = v12[1];
  *(_QWORD *)&viewMatrix.M[0][1] = *(_QWORD *)(v12 + 1);
  viewMatrix.M[0][3] = v12[3];
  v15 = v12[4];
  viewMatrix.M[1][0] = v15;
  v16 = v12[5];
  *(_QWORD *)&viewMatrix.M[1][1] = *(_QWORD *)(v12 + 5);
  viewMatrix.M[1][3] = v12[7];
  snap = 0;
  if ( (pHandle->pHeader->Format & 0x10) == 0 )
  {
    v17 = (float)((float)(v16 * 0.0) + v15) + 0.0;
    v18 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64((float)((float)((float)(v14 * 0.0) + v13) + 0.0)) & _xmm);
    if ( v18 <= 0.000001 || (v19 = COERCE_DOUBLE(COERCE_UNSIGNED_INT64(v17) & _xmm), v19 <= 0.000001) )
      snap = 1;
  }
  *(_OWORD *)&data.DirMtx.M[0][0] = _xmm;
  *(_OWORD *)&data.DirMtx.M[1][0] = _xmm;
  *(_OWORD *)&data.InvMtx.M[0][0] = _xmm;
  v21 = *(_OWORD *)&layout->Param.TextParam.pFont;
  *(_OWORD *)&data.InvMtx.M[1][0] = _xmm;
  v22 = *(_OWORD *)&layout->Param.TextParam.BlurY;
  *(_OWORD *)&data.Param.TextParam.pFont = v21;
  v23 = *(_OWORD *)&layout->Param.ShadowParam.GlyphIndex;
  *(_OWORD *)&data.Param.TextParam.BlurY = v22;
  v24 = *(_OWORD *)&layout->Param.ShadowColor;
  *(_OWORD *)&data.Param.ShadowParam.GlyphIndex = v23;
  Bounds = layout->Bounds;
  *(_OWORD *)&data.Param.ShadowColor = v24;
  data.Bounds = Bounds;
  memset(&data.pFont, 0, 52);
  data.GlyphBounds = 0i64;
  pHeader = pHandle->pHeader;
  v27 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHandle->pHeader->Format & 0xF].Offsets[4]
      + 1i64;
  *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&data.DirMtx.M[0][0] = pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHandle->pHeader->Format & 0xF].Offsets[4]
                                                                                          + 1];
  *(Scaleform::Render::MatrixPoolImpl::DataHeader *)&data.DirMtx.M[1][0] = pHeader[v27 + 1];
  *(_OWORD *)&v86.M[1][0] = _xmm;
  *(_OWORD *)&v86.M[0][0] = _xmm;
  Scaleform::Render::Matrix2x4<float>::SetInverse(&v86, &data.DirMtx);
  data.InvMtx = v86;
  Bounds.x1 = Scaleform::Render::TextMeshProvider::calcHeightRatio(m, m4, vp);
  this->HeightRatio = Bounds.x1;
  v28 = m->pHandle;
  data.HeightRatio = Bounds.x1;
  data.HintedNomHeight = 0;
  if ( (v28->pHeader->Format & 0x10) != 0 )
  {
    data.Param.TextParam.Flags &= 0xFFFCu;
    data.Param.ShadowParam.Flags &= 0xFFFCu;
  }
  y2 = layout->Bounds.y2;
  x2 = layout->Bounds.x2;
  x1 = layout->Bounds.x1;
  this->Bounds.y1 = layout->Bounds.y1;
  this->Bounds.x2 = x2;
  this->Bounds.y2 = y2;
  this->Bounds.x1 = x1;
  this->Flags &= ~8u;
  v32 = layout->ClipBox.x2;
  v33 = layout->ClipBox.y2;
  v34 = layout->ClipBox.x1;
  this->ClipBox.y1 = layout->ClipBox.y1;
  this->ClipBox.x2 = v32;
  this->ClipBox.y2 = v33;
  this->ClipBox.x1 = v34;
  if ( this->ClipBox.x1 < v32 && this->ClipBox.y1 < v33 )
    this->Flags |= 8u;
  this->Flags |= 0x10u;
  Next = 0i64;
  v36 = hala;
  while ( 1 )
  {
    Next = Scaleform::Render::TextLayout::ReadNext(
             (Scaleform::Render::TextLayout *)layout,
             Next,
             (Scaleform::Render::TextLayout::Record *)&v86);
    if ( !Next )
      break;
    switch ( LOBYTE(v86.M[0][0]) )
    {
      case 0:
        if ( (BYTE1(v86.M[0][0]) & 1) == 0 )
          Scaleform::Render::TextMeshProvider::addGlyph(
            this,
            v36,
            &storage,
            &data,
            HIWORD(v86.M[0][0]),
            (BYTE1(v86.M[0][0]) & 2) != 0,
            (BYTE1(v86.M[0][0]) & 4) != 0,
            snap,
            meshGenFlags);
        data.NewLineX = data.NewLineX + v86.M[0][1];
        continue;
      case 1:
        data.mColor = LODWORD(v86.M[0][1]);
        continue;
      case 2:
        v37 = LODWORD(v86.M[0][2]);
        LODWORD(v82) = 0;
        DWORD1(v82) = storage.Entries.Size;
        DWORD2(v82) = LODWORD(v86.M[0][1]);
        Fill = Scaleform::Render::GlyphCache::GetFill(this->pCache, TextLayer_Background, 0);
        v83.m256i_i32[6] = v37;
        ++Fill->RefCount;
        *(Scaleform::Render::Rect<float> *)&v83.m256i_u64[1] = data.Bounds;
        goto LABEL_19;
      case 3:
        v43 = v86.M[0][1];
        v44 = v86.M[0][2];
        *(_QWORD *)&data.NewLineX = *(_QWORD *)&v86.M[0][1];
        if ( !snap || (!data.pFont || (data.pFont->Flags & 0x80) == 0) && (data.Param.TextParam.Flags & 1) == 0 )
          continue;
        v45 = floorf(
                (float)((float)((float)(data.DirMtx.M[1][1] * v86.M[0][2]) + (float)(data.DirMtx.M[1][0] * v86.M[0][1]))
                      + data.DirMtx.M[1][3])
              + 0.5);
        v46 = data.DirMtx.M[0][1] * v44;
        v47 = data.DirMtx.M[0][0] * v43;
        goto LABEL_27;
      case 4:
        v48 = *(_QWORD *)&v86.M[0][2];
        pCache = this->pCache;
        data.pFont = *(Scaleform::Render::Font **)&v86.M[0][2];
        v50 = Scaleform::Render::GlyphCache::RegisterFont(pCache, *(Scaleform::Render::Font **)&v86.M[0][2]);
        data.FontSize = v86.M[0][1];
        data.pFontHandle = v50;
        data.TexHeight = (*(float (__fastcall **)(__int64))(*(_QWORD *)v48 + 104i64))(v48);
        if ( !snap || !data.pFont || (data.pFont->Flags & 0x80) == 0 )
          continue;
        v45 = floorf(
                (float)((float)((float)(data.DirMtx.M[1][1] * data.NewLineY)
                              + (float)(data.DirMtx.M[1][0] * data.NewLineX))
                      + data.DirMtx.M[1][3])
              + 0.5);
        v46 = data.DirMtx.M[0][1] * data.NewLineY;
        v47 = data.DirMtx.M[0][0] * data.NewLineX;
LABEL_27:
        data.NewLineY = (float)((float)(v45 * data.InvMtx.M[1][1])
                              + (float)((float)((float)(v46 + v47) + data.DirMtx.M[0][3]) * data.InvMtx.M[1][0]))
                      + data.InvMtx.M[1][3];
        break;
      case 5:
        v51 = TextLayer_Selection;
        goto LABEL_33;
      case 6:
        Scaleform::Render::TextMeshProvider::addUnderline(
          this,
          &storage,
          LODWORD(v86.M[1][0]),
          (Scaleform::Render::TextUnderlineStyle)HIWORD(v86.M[0][0]),
          v86.M[0][1],
          v86.M[0][2],
          v86.M[0][3]);
        this->Flags |= 0x80u;
        continue;
      case 7:
        v51 = TextLayer_Cursor;
LABEL_33:
        v52 = *(_OWORD *)&v86.M[0][2];
        *(_QWORD *)&v82 = __PAIR64__(storage.Entries.Size, v51);
        DWORD2(v82) = LODWORD(v86.M[0][1]);
        Fill = Scaleform::Render::GlyphCache::GetFill(this->pCache, v51, 0);
        *(_OWORD *)&v83.m256i_u64[1] = v52;
        ++Fill->RefCount;
LABEL_19:
        v83.m256i_i64[0] = (__int64)Fill;
        Size = storage.Entries.Size;
        v40 = storage.Entries.Size >> 6;
        if ( storage.Entries.Size >> 6 >= storage.Entries.NumPages )
        {
          Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>::allocPage(
            &storage.Entries,
            storage.Entries.Size >> 6);
          Size = storage.Entries.Size;
        }
        v41 = Size & 0x3F;
        v42 = storage.Entries.Pages[v40];
        *(_OWORD *)&v42[v41].LayerType = v82;
        *(__m256i *)&v42[v41].pFill = v83;
        ++storage.Entries.Size;
        break;
      case 8:
        Scaleform::Render::TextMeshProvider::addImage(
          this,
          &storage,
          &data,
          *(Scaleform::Render::Image **)&v86.M[0][2],
          v86.M[1][0],
          v86.M[1][1],
          v86.M[1][2],
          snap);
        data.NewLineX = data.NewLineX + v86.M[1][3];
        break;
      default:
        continue;
    }
  }
  v53 = other[0];
  if ( (this->Flags & 0xC0) == 0 || (this->Flags & 8) == 0 )
  {
    v54 = 0i64;
    goto LABEL_57;
  }
  Scaleform::Render::TextMeshProvider::addMask(this, &storage);
  v54 = 0i64;
  v55 = 1;
  v56 = 0i64;
  *(_QWORD *)&this->ClearBox.x1 = 0i64;
  *(_QWORD *)&this->ClearBox.x2 = 0i64;
  if ( !storage.Entries.Size )
    goto LABEL_55;
  do
  {
    v57 = &storage.Entries.Pages[v56 >> 6][v56 & 0x3F];
    *(_OWORD *)other = 0i64;
    if ( v57->LayerType == 4 || v57->LayerType == 5 || v57->LayerType == 7 )
    {
      v63 = v57->EntryData.RasterData.Coord[0];
      *(float *)other = v63;
      v62 = v57->EntryData.RasterData.Coord[1];
      *((float *)other + 1) = v62;
      v61 = v57->EntryData.RasterData.Coord[2];
      *(float *)&other[1] = v61;
      v60 = v57->EntryData.RasterData.Coord[3];
      *((float *)&other[1] + 1) = v60;
    }
    else
    {
      if ( v57->LayerType != 8 )
        goto LABEL_51;
      v58 = v57->EntryData.RasterData.Coord[3];
      v59 = v58
          / ((float (__fastcall *)(Scaleform::Render::Font *, __int64))v57->EntryData.VectorData.pFont->GetNominalGlyphHeight)(
              v57->EntryData.VectorData.pFont,
              13i64);
      v57->EntryData.VectorData.pFont->GetGlyphBounds(
        v57->EntryData.VectorData.pFont,
        v57->EntryData.VectorData.GlyphIndex,
        (Scaleform::Render::Rect<float> *)other);
      *(float *)other = (float)(v59 * *(float *)other) + v57->EntryData.VectorData.x;
      *((float *)other + 1) = (float)(v59 * *((float *)other + 1)) + v57->EntryData.VectorData.y;
      *(float *)&other[1] = (float)(v59 * *(float *)&other[1]) + v57->EntryData.VectorData.x;
      *((float *)&other[1] + 1) = (float)(v59 * *((float *)&other[1] + 1)) + v57->EntryData.VectorData.y;
      v57->LayerType = 12;
      v60 = *((float *)&other[1] + 1);
      v61 = *(float *)&other[1];
      v62 = *((float *)other + 1);
      v63 = *(float *)other;
    }
    if ( v63 < v61 && v62 < v60 )
    {
      if ( v55 )
      {
        this->ClearBox.x2 = v61;
        this->ClearBox.y2 = v60;
      }
      else
      {
        v63 = fminf(v63, this->ClearBox.x1);
        v62 = fminf(v62, this->ClearBox.y1);
        v64 = fmaxf(this->ClearBox.x2, v61);
        v65 = fmaxf(this->ClearBox.y2, v60);
        this->ClearBox.x2 = v64;
        this->ClearBox.y2 = v65;
      }
      this->ClearBox.y1 = v62;
      v55 = 0;
      this->ClearBox.x1 = v63;
    }
LABEL_51:
    if ( v57->LayerType == 9 )
      v57->LayerType = 13;
    ++v56;
  }
  while ( v56 < storage.Entries.Size );
  v54 = 0i64;
LABEL_55:
  v66 = 1.0 / this->HeightRatio;
  this->Flags |= 0x100u;
  v67 = this->ClearBox.y1 - v66;
  this->ClearBox.x1 = this->ClearBox.x1 - v66;
  v68 = v66 + this->ClearBox.x2;
  v69 = v66 + this->ClearBox.y2;
  this->ClearBox.y1 = v67;
  this->ClearBox.x2 = v68;
  this->ClearBox.y2 = v69;
LABEL_57:
  LatestFence = Scaleform::Render::TextMeshProvider::GetLatestFence(this);
  v71 = LatestFence;
  if ( LatestFence )
    ++LatestFence->RefCount;
  for ( i = 0i64; i < this->Notifiers.Data.Size; ++i )
    Scaleform::Render::GlyphQueue::UnpinSlot(this->Notifiers.Data.Data[i]->pSlot, v71);
  if ( v71 )
    Scaleform::Render::Fence::Release(v71);
  this->Flags &= ~0x10u;
  Scaleform::Render::TextMeshProvider::sortEntries(this, &storage);
  v73 = 0i64;
  if ( this->Layers.Data.Size )
  {
    v74 = 0i64;
    do
    {
      v75 = this->Layers.Data.Data;
      if ( ((v75[v74].Type - 8) & 0xFFFFFFFB) != 0 )
      {
        Scaleform::Render::MatrixPoolImpl::HMatrix::operator=(&v75[v74].M, v53);
        LODWORD(other[0]) = 68;
        v76 = (Scaleform::Render::Mesh *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                           Scaleform::Memory::pGlobalHeap,
                                           this,
                                           224i64,
                                           other);
        if ( v76 )
        {
          Scaleform::Render::Mesh::Mesh(v76, this, &viewMatrix, 0.0, v73, meshGenFlags);
          v54 = v77;
        }
        pObject = (Scaleform::RefCountVImpl *)v75[v74].pMesh.pObject;
        if ( pObject )
          Scaleform::RefCountImpl::Release(pObject);
        v75[v74].pMesh.pObject = v54;
        v54 = 0i64;
      }
      else
      {
        Scaleform::Render::TextMeshProvider::createVectorGlyph(this, hala, v73, v53, meshGenFlags);
        this->Flags |= 0x40u;
      }
      ++v73;
      ++v74;
    }
    while ( v73 < this->Layers.Data.Size );
  }
  this->Flags |= 0x20u;
  MaxPages = storage.LHeap.MaxPages;
  if ( storage.LHeap.MaxPages )
  {
    v80 = &storage.LHeap.pPagePool[storage.LHeap.MaxPages - 1];
    do
    {
      storage.LHeap.MaxPages = --MaxPages;
      if ( v80->pStart )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *))storage.LHeap.pHeap->Free)(storage.LHeap.pHeap);
        MaxPages = storage.LHeap.MaxPages;
      }
      --v80;
    }
    while ( MaxPages );
    storage.LHeap.MaxPages = -1i64;
    storage.LHeap.pHeap->Free(storage.LHeap.pHeap, storage.LHeap.pPagePool);
  }
  return 1;
}

void __fastcall Scaleform::ConstructorMov<Scaleform::Render::TextMeshLayer>::DestructArray(
        Scaleform::Render::TextMeshLayer *p,
        unsigned __int64 count)
{
  Scaleform::Render::MatrixPoolImpl::HMatrix *p_M; // rbx
  unsigned __int64 v3; // rdi
  Scaleform::RefCountNTSImpl *pHandle; // rcx
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v5; // rcx
  Scaleform::Render::MeshKey *v6; // rcx
  Scaleform::RefCountVImpl *v7; // rcx

  if ( count )
  {
    p_M = &p[count - 1].M;
    v3 = count;
    do
    {
      pHandle = (Scaleform::RefCountNTSImpl *)p_M[1].pHandle;
      if ( pHandle )
        Scaleform::RefCountNTSImpl::Release(pHandle);
      if ( p_M->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
        Scaleform::Render::MatrixPoolImpl::DataHeader::Release(p_M->pHandle->pHeader);
      v5 = p_M[-1].pHandle;
      if ( v5 )
        ((void (__fastcall *)(Scaleform::Render::MatrixPoolImpl::EntryHandle *))v5[2].pHeader[1].pHandle)(&v5[2]);
      v6 = (Scaleform::Render::MeshKey *)p_M[-2].pHandle;
      if ( v6 )
        Scaleform::Render::MeshKey::Release(v6);
      v7 = (Scaleform::RefCountVImpl *)p_M[-3].pHandle;
      if ( v7 )
        Scaleform::RefCountImpl::Release(v7);
      p_M -= 8;
      --v3;
    }
    while ( v3 );
  }
}

Scaleform::Render::Rect<float> *__fastcall Scaleform::Render::VectorGlyphShape::GetIdentityBounds(
        Scaleform::Render::VectorGlyphShape *this,
        Scaleform::Render::Rect<float> *result)
{
  result->x1 = *(float *)&this->pRaster.pObject;
  result->y1 = *((float *)&this->pRaster.pObject + 1);
  result->x2 = *((float *)&this->pRaster + 2);
  result->y2 = *((float *)&this->pRaster + 3);
  return result;
}

bool __fastcall Scaleform::Render::TextMeshProvider::GetData(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::MeshBase *mesh,
        Scaleform::Render::VertexOutput *verOut,
        unsigned int meshGenFlags)
{
  Scaleform::Render::TextMeshEntry *Data; // rbx
  Scaleform::Render::TextMeshLayer *v6; // r8
  __int64 Start; // rax
  bool result; // al
  Scaleform::Render::Matrix2x4<float> mtx; // [rsp+40h] [rbp-28h] BYREF

  Data = this->Entries.Data.Data;
  v6 = &this->Layers.Data.Data[(unsigned __int64)mesh->Layer];
  mtx.M[0][0] = this->HeightRatio;
  mtx.M[1][1] = mtx.M[0][0];
  *(_OWORD *)&mtx.M[0][1] = 0ui64;
  Start = v6->Start;
  *(_QWORD *)&mtx.M[1][2] = 0i64;
  switch ( v6->Type )
  {
    case TextLayer_Background:
      result = Scaleform::Render::TextMeshProvider::generateRectangle(
                 this,
                 hal,
                 verOut,
                 &mtx,
                 Data[Start].EntryData.RasterData.Coord,
                 Data[Start].mColor,
                 Data[Start].EntryData.BackgroundData.BorderColor,
                 meshGenFlags);
      break;
    case TextLayer_Selection:
      result = Scaleform::Render::TextMeshProvider::generateSelection(this, hal, verOut, v6, &mtx, meshGenFlags);
      break;
    case TextLayer_Shadow:
    case TextLayer_ShadowText:
    case TextLayer_RasterText:
      result = Scaleform::Render::TextMeshProvider::generateRasterMesh(this, verOut, v6);
      break;
    case TextLayer_PackedText:
    case TextLayer_PackedDFAText:
      result = Scaleform::Render::TextMeshProvider::generatePackedMesh(this, verOut, v6);
      break;
    case TextLayer_Images:
      result = Scaleform::Render::TextMeshProvider::generateImageMesh(this, verOut, v6);
      break;
    case TextLayer_Underline:
    case TextLayer_Underline_Masked:
      result = Scaleform::Render::TextMeshProvider::generateUnderlines(this, hal, verOut, v6, &mtx, meshGenFlags);
      break;
    case TextLayer_Cursor:
      result = Scaleform::Render::TextMeshProvider::generateRectangle(
                 this,
                 hal,
                 verOut,
                 &mtx,
                 Data[Start].EntryData.RasterData.Coord,
                 Data[Start].mColor,
                 0,
                 meshGenFlags);
      break;
    case TextLayer_Mask:
      result = Scaleform::Render::TextMeshProvider::generateMask(this, verOut, v6);
      break;
    default:
      result = 0;
      break;
  }
  return result;
}

bool __fastcall Scaleform::Render::VectorGlyphShape::GetData(
        Scaleform::Render::VectorGlyphShape *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::MeshBase *mesh,
        Scaleform::Render::VertexOutput *verOut,
        unsigned int meshGenFlags)
{
  Scaleform::Render::Matrix2x4<float> *p_ViewMatrix; // r12
  Scaleform::Render::VertexOutput *v7; // r14
  float v10; // xmm10_4
  float v11; // xmm1_4
  Scaleform::Render::Tessellator *p_mTess; // rsi
  int v13; // eax
  Scaleform::Render::FontCacheHandle *pFont; // rcx
  float v15; // xmm11_4
  float v16; // xmm12_4
  unsigned int v17; // er15
  float v18; // xmm13_4
  char v19; // di
  float v20; // xmm14_4
  float v21; // xmm15_4
  float v22; // xmm0_4
  int v23; // eax
  float v24; // xmm2_4
  int i; // eax
  float v26; // xmm2_4
  float v27; // xmm3_4
  float y3; // xmm1_4
  float v29; // xmm3_4
  float v30; // xmm7_4
  float y4; // xmm1_4
  unsigned int v32; // eax
  bool NullVectorMesh; // al
  unsigned int v34; // er13
  unsigned int j; // er12
  char *v36; // rbx
  __int64 v37; // r14
  char *v38; // rdi
  float v39; // xmm0_4
  float v40; // xmm0_4
  int v41; // eax
  float v42; // xmm0_4
  float v43; // xmm0_4
  float v44; // xmm0_4
  unsigned __int64 v45; // rcx
  unsigned int v46; // edi
  int v47; // ebx
  bool v48; // bl
  bool v49; // [rsp+40h] [rbp-C0h]
  int v50[2]; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::Render::VertexFormat *v51; // [rsp+50h] [rbp-B0h]
  __int64 v52; // [rsp+58h] [rbp-A8h]
  __int64 v53; // [rsp+60h] [rbp-A0h]
  int v54; // [rsp+68h] [rbp-98h] BYREF
  __int64 v55; // [rsp+6Ch] [rbp-94h]
  __int64 v56; // [rsp+74h] [rbp-8Ch]
  __int64 v57; // [rsp+7Ch] [rbp-84h]
  __int64 v58; // [rsp+84h] [rbp-7Ch]
  __int64 v59; // [rsp+8Ch] [rbp-74h]
  int v60; // [rsp+94h] [rbp-6Ch]
  Tween::EasingType v61; // [rsp+98h] [rbp-68h]
  char v62; // [rsp+9Ch] [rbp-64h]
  Scaleform::Render::VertexOutput *v63; // [rsp+A0h] [rbp-60h]
  Scaleform::Render::MeshGenerator *v64; // [rsp+A8h] [rbp-58h]
  Scaleform::Render::ToleranceParams param; // [rsp+B0h] [rbp-50h] BYREF
  Scaleform::Render::Matrix2x4<float> v66; // [rsp+100h] [rbp+0h] BYREF
  Scaleform::Render::TessMesh v67; // [rsp+120h] [rbp+20h] BYREF
  Scaleform::Render::Matrix2x4<float> v68; // [rsp+140h] [rbp+40h] BYREF
  float v69; // [rsp+160h] [rbp+60h] BYREF
  float v70; // [rsp+164h] [rbp+64h]
  float x3; // [rsp+168h] [rbp+68h]
  float v72; // [rsp+16Ch] [rbp+6Ch]
  float x4; // [rsp+170h] [rbp+70h]
  float v74; // [rsp+174h] [rbp+74h]
  int v75[6]; // [rsp+178h] [rbp+78h] BYREF
  char v76[4]; // [rsp+190h] [rbp+90h] BYREF
  char v77; // [rsp+194h] [rbp+94h] BYREF
  char v78[4]; // [rsp+790h] [rbp+690h] BYREF
  char v79; // [rsp+794h] [rbp+694h] BYREF
  unsigned __int16 v80[384]; // [rsp+1190h] [rbp+1090h] BYREF

  v63 = verOut;
  p_ViewMatrix = &mesh->ViewMatrix;
  v7 = verOut;
  if ( ((__int64 (__fastcall *)(Scaleform::Render::FontCacheHandle *))this->Key.pFont->pPrev->pNext)(this->Key.pFont) )
    return Scaleform::Render::VectorGlyphShape::generateNullVectorMesh(
             (Scaleform::Render::VectorGlyphShape *)((char *)this - 16),
             v7);
  v64 = hal->GetMeshGen(hal);
  Scaleform::Render::MeshGenerator::Clear(v64);
  v10 = FLOAT_0_5;
  param = *Scaleform::Render::HAL::GetToleranceParams(hal);
  param.CurveTolerance = _mm_shuffle_ps(*(__m128 *)&param.Epsilon, *(__m128 *)&param.Epsilon, 85).m128_f32[0] * 2.0;
  param.CollinearityTolerance = param.CollinearityTolerance * 2.0;
  if ( (meshGenFlags & 3) == 1 )
    v11 = param.EdgeAAScale * 0.5;
  else
    v11 = 0.0;
  p_mTess = &v64->mTess;
  Scaleform::Render::Tessellator::SetEdgeAAWidth(&v64->mTess, v11);
  Scaleform::Render::Tessellator::SetFillRule(&v64->mTess, FillNonZero);
  v13 = ((__int64 (__fastcall *)(Scaleform::Render::FontCacheHandle *))this->Key.pFont->pPrev[1].pManager)(this->Key.pFont);
  pFont = this->Key.pFont;
  v15 = p_ViewMatrix->M[0][0];
  v16 = p_ViewMatrix->M[0][1];
  v17 = 0;
  v18 = p_ViewMatrix->M[0][3];
  v19 = 1;
  v20 = p_ViewMatrix->M[1][0];
  v21 = p_ViewMatrix->M[1][1];
  v61 = FLOAT_1_0;
  v22 = p_ViewMatrix->M[1][3];
  v54 = v13;
  v55 = 0i64;
  v56 = 0i64;
  v57 = 0i64;
  v58 = 0i64;
  v59 = 0i64;
  v60 = 0;
  v62 = 0;
  v23 = ((__int64 (__fastcall *)(Scaleform::Render::FontCacheHandle *, int *, float *, int *))pFont->pPrev[2].pPrev)(
          pFont,
          &v54,
          &v69,
          v75);
  if ( v23 )
  {
    do
    {
      if ( !v19 && v23 == 2 )
        break;
      v19 = 0;
      if ( v75[0] == v75[1] )
      {
        ((void (__fastcall *)(Scaleform::Render::FontCacheHandle *, int *))this->Key.pFont->pPrev[2].pManager)(
          this->Key.pFont,
          &v54);
      }
      else
      {
        v24 = (float)((float)(v20 * v69) + (float)(v21 * v70)) + v22;
        v69 = (float)((float)(v16 * v70) + (float)(v15 * v69)) + v18;
        v70 = v24;
        ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(p_mTess);
        for ( i = ((__int64 (__fastcall *)(Scaleform::Render::FontCacheHandle *, int *, float *))this->Key.pFont->pPrev[2].pNext)(
                    this->Key.pFont,
                    &v54,
                    &v69);
              i;
              i = ((__int64 (__fastcall *)(Scaleform::Render::FontCacheHandle *, int *, float *))this->Key.pFont->pPrev[2].pNext)(
                    this->Key.pFont,
                    &v54,
                    &v69) )
        {
          switch ( i )
          {
            case 1:
              v26 = (float)((float)(v20 * v69) + (float)(v21 * v70)) + v22;
              v69 = (float)((float)(v16 * v70) + (float)(v15 * v69)) + v18;
              v70 = v26;
              ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(p_mTess);
              break;
            case 2:
              v27 = (float)(v20 * v69) + (float)(v21 * v70);
              v69 = (float)((float)(v16 * v70) + (float)(v15 * v69)) + v18;
              v70 = v27 + v22;
              y3 = (float)((float)(v20 * x3) + (float)(v21 * v72)) + v22;
              x3 = (float)((float)(v16 * v72) + (float)(v15 * x3)) + v18;
              v72 = y3;
              Scaleform::Render::TessellateQuadCurve(p_mTess, &param, v69, v27 + v22, x3, y3);
              break;
            case 3:
              v29 = (float)(v20 * v69) + (float)(v21 * v70);
              v69 = (float)((float)(v16 * v70) + (float)(v15 * v69)) + v18;
              v70 = v29 + v22;
              v30 = (float)((float)(v20 * x3) + (float)(v21 * v72)) + v22;
              x3 = (float)((float)(v16 * v72) + (float)(v15 * x3)) + v18;
              v72 = v30;
              y4 = (float)((float)(v20 * x4) + (float)(v21 * v74)) + v22;
              x4 = (float)((float)(v16 * v74) + (float)(v15 * x4)) + v18;
              v74 = y4;
              Scaleform::Render::TessellateCubicCurve(p_mTess, &param, v69, v29 + v22, x3, v30, x4, y4);
              break;
          }
        }
        ((void (__fastcall *)(Scaleform::Render::Tessellator *, __int64, _QWORD))p_mTess->FinalizePath)(
          p_mTess,
          1i64,
          0i64);
      }
      v23 = ((__int64 (__fastcall *)(Scaleform::Render::FontCacheHandle *, int *, float *, int *))this->Key.pFont->pPrev[2].pPrev)(
              this->Key.pFont,
              &v54,
              &v69,
              v75);
    }
    while ( v23 );
    v10 = FLOAT_0_5;
  }
  Scaleform::Render::Tessellator::Tessellate(p_mTess, 0);
  if ( p_mTess->GetMeshCount(p_mTess) && p_mTess->GetVertexCount(p_mTess) )
  {
    *(_OWORD *)&v66.M[0][0] = _xmm;
    *(_OWORD *)&v66.M[1][0] = _xmm;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v66, p_ViewMatrix);
    p_mTess->Transform(p_mTess, &v66);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *, Scaleform::Render::Matrix2x4<float> *))p_mTess->StretchTo)(
      p_mTess,
      &v68);
    v50[0] = p_mTess->GetMeshVertexCount(p_mTess, 0);
    v32 = p_mTess->GetMeshTriangleCount(p_mTess, 0);
    v52 = 0i64;
    v53 = 0i64;
    v50[1] = 3 * v32;
    v51 = &Scaleform::Render::VertexXY16iCF32::Format;
    NullVectorMesh = v7->BeginOutput(v7, (const Scaleform::Render::VertexOutput::Fill *)v50, 1u, &v68);
    v49 = NullVectorMesh;
    if ( NullVectorMesh )
    {
      p_mTess->GetMesh(p_mTess, 0, &v67);
      v34 = 0;
      for ( j = p_mTess->GetVertices(p_mTess, &v67, (Scaleform::Render::TessVertex *)v78, 128u);
            j;
            j = p_mTess->GetVertices(p_mTess, &v67, (Scaleform::Render::TessVertex *)v78, 128u) )
      {
        v36 = &v77;
        v37 = j;
        v38 = &v79;
        do
        {
          v39 = *((float *)v38 - 1);
          if ( v39 >= 0.0 )
            v40 = v39 + v10;
          else
            v40 = v39 - v10;
          v41 = (int)floorf(v40);
          v42 = *(float *)v38;
          *((_WORD *)v36 - 2) = v41;
          if ( v42 >= 0.0 )
            v43 = v42 + v10;
          else
            v43 = v42 - v10;
          v44 = floorf(v43);
          v45 = *((unsigned __int16 *)v38 + 6);
          *(_DWORD *)v36 = -1;
          v38 += 20;
          *((_WORD *)v36 - 1) = (int)v44;
          v36[4] = Scaleform::Render::Factors[v45 & 3];
          v36[5] = Scaleform::Render::Factors[(v45 >> 2) & 3];
          v36 += 12;
          --v37;
        }
        while ( v37 );
        v7 = v63;
        v63->SetVertices(v63, 0, v34, v76, j);
        v34 += j;
      }
      v46 = p_mTess->GetMeshTriangleCount(p_mTess, HIDWORD(v53));
      if ( v46 )
      {
        do
        {
          v47 = 128;
          if ( v17 + 128 > v46 )
          {
            v47 = v46 - v17;
            if ( v46 == v17 )
              break;
          }
          p_mTess->GetTrianglesI16(p_mTess, HIDWORD(v53), v80, v17, v47);
          v7->SetIndices(v7, 0, 3 * v17, v80, 3 * v47);
          v17 += v47;
        }
        while ( v17 < v46 );
      }
      v7->EndOutput(v7);
      v48 = v49;
      goto LABEL_42;
    }
  }
  else
  {
    NullVectorMesh = Scaleform::Render::VectorGlyphShape::generateNullVectorMesh(
                       (Scaleform::Render::VectorGlyphShape *)((char *)this - 16),
                       v7);
  }
  v48 = NullVectorMesh;
LABEL_42:
  Scaleform::Render::MeshGenerator::Clear(v64);
  return v48;
}

__int64 __fastcall AgUser::isSignedIn(Concurrency::details::ThreadInternalContext *this)
{
  return 1i64;
}

void __fastcall Scaleform::Render::TextMeshProvider::GetFillData(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::FillData *data,
        unsigned int layer,
        unsigned int fillIndex,
        unsigned int meshGenFlags)
{
  Scaleform::Render::TextMeshLayer *v6; // rdx
  __int64 v7; // rax
  Scaleform::Render::RawImage *Image; // rax
  __int64 v9; // rax
  __int64 Start; // rax
  Scaleform::Render::Image *v11; // rbx
  __int64 v12; // rax
  __int64 v13; // rax
  __int64 v14; // rax
  __int64 v15; // rax
  __int64 v16; // rax
  __int64 v17; // rax
  Scaleform::Render::FillData v18; // [rsp+20h] [rbp-28h] BYREF

  if ( (meshGenFlags & 2) != 0 )
  {
$LN12_105:
    Scaleform::Render::FillData::FillData(&v18, Fill_Mask);
    data->Type = *(_DWORD *)v17;
    data->Color = *(_DWORD *)(v17 + 8);
    data->pGradient = *(Scaleform::Render::GradientData **)(v17 + 8);
    data->pGradient = *(Scaleform::Render::GradientData **)(v17 + 8);
    data->PrimFill = *(_DWORD *)(v17 + 16);
    data->FillMode.Fill = *(_BYTE *)(v17 + 20);
    data->pVFormat = *(const Scaleform::Render::VertexFormat **)(v17 + 24);
  }
  else
  {
    v6 = &this->Layers.Data.Data[(unsigned __int64)layer];
    switch ( v6->Type )
    {
      case TextLayer_Background:
      case TextLayer_Selection:
      case TextLayer_Shapes:
      case TextLayer_Underline:
      case TextLayer_Cursor:
      case TextLayer_Shapes_Masked:
      case TextLayer_Underline_Masked:
        Scaleform::Render::FillData::FillData(&v18, Fill_VColor);
        data->Type = *(_DWORD *)v7;
        data->Color = *(_DWORD *)(v7 + 8);
        data->pGradient = *(Scaleform::Render::GradientData **)(v7 + 8);
        data->pGradient = *(Scaleform::Render::GradientData **)(v7 + 8);
        data->PrimFill = *(_DWORD *)(v7 + 16);
        data->FillMode.Fill = *(_BYTE *)(v7 + 20);
        data->pVFormat = &Scaleform::Render::VertexXY16iCF32::Format;
        data->PrimFill = PrimFill_VColor;
        return;
      case TextLayer_Shadow:
      case TextLayer_ShadowText:
      case TextLayer_RasterText:
        Image = Scaleform::Render::GlyphCache::GetImage(this->pCache, this->Entries.Data.Data[v6->Start].TextureId);
        LOBYTE(meshGenFlags) = 3;
        Scaleform::Render::FillData::FillData(&v18, Image, (unsigned __int8 *)&meshGenFlags);
        data->Type = *(_DWORD *)v9;
        data->Color = *(_DWORD *)(v9 + 8);
        data->pGradient = *(Scaleform::Render::GradientData **)(v9 + 8);
        data->pGradient = *(Scaleform::Render::GradientData **)(v9 + 8);
        data->PrimFill = *(_DWORD *)(v9 + 16);
        data->FillMode.Fill = *(_BYTE *)(v9 + 20);
        goto LABEL_5;
      case TextLayer_PackedText:
        Start = v6->Start;
        LOBYTE(meshGenFlags) = 3;
        v11 = *(Scaleform::Render::Image **)&this->Entries.Data.Data[Start].EntryData.RasterData.pGlyph->Param.BlurY;
        Scaleform::Render::FillData::FillData(&v18, v11, (unsigned __int8 *)&meshGenFlags);
        data->Type = *(_DWORD *)v12;
        data->Color = *(_DWORD *)(v12 + 8);
        data->pGradient = *(Scaleform::Render::GradientData **)(v12 + 8);
        data->pGradient = *(Scaleform::Render::GradientData **)(v12 + 8);
        data->PrimFill = *(_DWORD *)(v12 + 16);
        data->FillMode.Fill = *(_BYTE *)(v12 + 20);
        data->pVFormat = *(const Scaleform::Render::VertexFormat **)(v12 + 24);
        if ( v11->GetFormat(v11) != Image_A8 )
          goto LABEL_10;
LABEL_5:
        data->PrimFill = PrimFill_UVTextureAlpha_VColor;
        data->pVFormat = &Scaleform::Render::RasterGlyphVertex::Format;
        break;
      case TextLayer_PackedDFAText:
        v13 = v6->Start;
        LOBYTE(meshGenFlags) = 3;
        Scaleform::Render::FillData::FillData(
          &v18,
          *(Scaleform::Render::Image **)&this->Entries.Data.Data[v13].EntryData.RasterData.pGlyph->Param.BlurY,
          (unsigned __int8 *)&meshGenFlags);
        data->Type = *(_DWORD *)v14;
        data->Color = *(_DWORD *)(v14 + 8);
        data->pGradient = *(Scaleform::Render::GradientData **)(v14 + 8);
        data->pGradient = *(Scaleform::Render::GradientData **)(v14 + 8);
        data->PrimFill = *(_DWORD *)(v14 + 16);
        data->FillMode.Fill = *(_BYTE *)(v14 + 20);
        data->pVFormat = &Scaleform::Render::RasterGlyphVertex::Format;
        data->PrimFill = PrimFill_UVTextureDFAlpha_VColor;
        return;
      case TextLayer_Images:
        v15 = v6->Start;
        LOBYTE(meshGenFlags) = 3;
        Scaleform::Render::FillData::FillData(
          &v18,
          this->Entries.Data.Data[v15].EntryData.ImageData.pImage,
          (unsigned __int8 *)&meshGenFlags);
        data->Type = *(_DWORD *)v16;
        data->Color = *(_DWORD *)(v16 + 8);
        data->pGradient = *(Scaleform::Render::GradientData **)(v16 + 8);
        data->pGradient = *(Scaleform::Render::GradientData **)(v16 + 8);
        data->PrimFill = *(_DWORD *)(v16 + 16);
        data->FillMode.Fill = *(_BYTE *)(v16 + 20);
LABEL_10:
        data->PrimFill = PrimFill_UVTexture;
        data->pVFormat = &Scaleform::Render::ImageGlyphVertex::Format;
        break;
      case TextLayer_Mask:
        goto $LN12_105;
      default:
        return;
    }
  }
}

void __fastcall Scaleform::Render::VectorGlyphShape::GetFillData(
        Scaleform::Render::VectorGlyphShape *this,
        Scaleform::Render::FillData *data,
        unsigned int layer,
        unsigned int fillIndex)
{
  __int64 v5; // rax
  Scaleform::Render::FillData v6; // [rsp+20h] [rbp-28h] BYREF

  Scaleform::Render::FillData::FillData(&v6, Fill_VColor);
  data->Type = *(_DWORD *)v5;
  data->Color = *(_DWORD *)(v5 + 8);
  data->pGradient = *(Scaleform::Render::GradientData **)(v5 + 8);
  data->pGradient = *(Scaleform::Render::GradientData **)(v5 + 8);
  data->PrimFill = *(_DWORD *)(v5 + 16);
  data->FillMode.Fill = *(_BYTE *)(v5 + 20);
  data->pVFormat = &Scaleform::Render::VertexXY16iCF32::Format;
  data->PrimFill = PrimFill_VColor;
}

void __fastcall Scaleform::Render::VectorGlyphShape::GetFillMatrix(
        Scaleform::Render::VectorGlyphShape *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::MeshBase *mesh,
        Scaleform::Render::Matrix2x4<float> *matrix)
{
  *(_OWORD *)&matrix->M[0][0] = 0x3F800000ui64;
  matrix->M[1][0] = 0.0;
  matrix->M[1][3] = 0.0;
  *(_QWORD *)&matrix->M[1][1] = 1065353216i64;
}

Scaleform::Render::Fence *__fastcall Scaleform::Render::TextMeshProvider::GetLatestFence(
        Scaleform::Render::TextMeshProvider *this)
{
  Scaleform::Render::Fence *v1; // rbx
  unsigned __int64 v2; // r14
  __int64 v4; // r15
  Scaleform::Render::Mesh *pObject; // rdi
  unsigned __int64 i; // rbp
  _QWORD *p_pData; // rax
  _QWORD *v8; // rax
  Scaleform::Render::FenceImpl *v9; // rcx
  _QWORD *pData; // rax
  Scaleform::Render::Fence *v11; // rsi

  v1 = 0i64;
  v2 = 0i64;
  if ( this->Layers.Data.Size )
  {
    v4 = 0i64;
    do
    {
      pObject = this->Layers.Data.Data[v4].pMesh.pObject;
      if ( pObject )
      {
        for ( i = 0i64; i < pObject->CacheItems.Size; ++i )
        {
          if ( pObject->CacheItems.Size <= 2 )
            p_pData = &pObject->CacheItems.AD.pData;
          else
            p_pData = pObject->CacheItems.AD.pData;
          if ( *(_QWORD *)(p_pData[i] + 24i64) )
          {
            if ( !v1
              || (pObject->CacheItems.Size <= 2 ? (v8 = &pObject->CacheItems.AD.pData) : (v8 = pObject->CacheItems.AD.pData),
                  (v9 = **(Scaleform::Render::FenceImpl ***)(v8[i] + 24i64)) != 0i64
               && (!v1->Data || Scaleform::Render::FenceImpl::operator>(v9, v1->Data))) )
            {
              if ( pObject->CacheItems.Size <= 2 )
                pData = &pObject->CacheItems.AD.pData;
              else
                pData = pObject->CacheItems.AD.pData;
              v11 = *(Scaleform::Render::Fence **)(pData[i] + 24i64);
              if ( v11 )
                ++v11->RefCount;
              if ( v1 )
                Scaleform::Render::Fence::Release(v1);
              v1 = v11;
            }
          }
        }
      }
      ++v2;
      ++v4;
    }
    while ( v2 < this->Layers.Data.Size );
    if ( v1 )
      Scaleform::Render::Fence::Release(v1);
  }
  return v1;
}

__int64 __fastcall Scaleform::Render::StrokerAA::GetMeshVertexCount(AgDelayedSaveDataMount *this)
{
  return LODWORD(this->m_mountPoint.m_text);
}

Scaleform::Render::MatrixPoolImpl::HMatrix *__fastcall Scaleform::Render::TextMeshProvider::GetMaskClearBounds(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::MatrixPoolImpl::HMatrix *result)
{
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rax

  pHandle = this->ClearBounds.pHandle;
  result->pHandle = pHandle;
  if ( pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    ++pHandle->pHeader->RefCount;
  return result;
}

__int64 __fastcall Scaleform::Render::TextMeshProvider::GetMeshUseStatus(Scaleform::Render::TextMeshProvider *this)
{
  unsigned int v1; // esi
  unsigned __int64 i; // rdi
  Scaleform::Render::TextMeshLayer *v5; // rax
  Scaleform::Render::Mesh *pObject; // rcx
  int UseStatus; // eax

  v1 = 0;
  if ( this->PinCount )
    return 5i64;
  for ( i = 0i64; i < this->GetLayerCount(this); ++i )
  {
    v5 = &this->Layers.Data.Data[(unsigned __int64)(unsigned int)i];
    if ( v5->Type > TextLayer_RasterText )
      break;
    if ( v5->Type >= TextLayer_Shadow )
    {
      pObject = v5->pMesh.pObject;
      if ( pObject )
      {
        UseStatus = Scaleform::Render::Mesh::GetUseStatus(pObject);
        if ( UseStatus > (int)v1 )
          v1 = UseStatus;
      }
    }
  }
  return v1;
}

bool __fastcall Scaleform::GFx::InteractiveObject::OnCharEvent(
        Scaleform::Render::Texture *this,
        Scaleform::Render::RenderTargetData *__formal)
{
  return 0;
}

bool __fastcall Scaleform::Render::TextMeshProvider::NeedsUpdate(
        Scaleform::Render::TextMeshProvider *this,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m,
        const Scaleform::Render::Matrix4x4<float> *m4,
        const Scaleform::Render::Viewport *vp,
        const Scaleform::Render::TextFieldParam *param)
{
  float v6; // xmm0_4
  float v7; // xmm3_4

  v6 = Scaleform::Render::TextMeshProvider::calcHeightRatio(m, m4, vp);
  v7 = FLOAT_0_85000002;
  if ( (param->TextParam.Flags & 1) != 0 )
    v7 = FLOAT_0_99000001;
  return (float)(this->HeightRatio * v7) > v6 || v6 > (float)(this->HeightRatio / v7);
}

void __fastcall ActorWeapon::ActionFlagCheck(_SETJMP_FLOAT128 *JumpBuffer)
{
  ;
}

// attributes: thunk
void __fastcall Scaleform::Render::TextMeshProvider::OnEvictSlots(Scaleform::Render::TextMeshProvider *this)
{
  Scaleform::Render::TextMeshProvider::Clear(this);
}

void __fastcall Scaleform::Render::TextMeshProvider::PinSlots(Scaleform::Render::TextMeshProvider *this)
{
  unsigned __int64 i; // rbx

  for ( i = 0i64; i < this->Notifiers.Data.Size; ++i )
    Scaleform::Render::GlyphQueue::PinSlot(this->Notifiers.Data.Data[i]->pSlot);
}

void __fastcall Scaleform::ArrayStaticBuffPOD<unsigned long,16,2>::PushBack(
        Scaleform::ArrayStaticBuffPOD<unsigned long,16,2> *this,
        const unsigned int *val)
{
  unsigned __int64 Size; // rcx
  unsigned __int64 Reserved; // r8
  Scaleform::MemoryHeap *pHeap; // rcx
  unsigned __int64 v7; // r8
  unsigned int *v8; // rax
  __int128 v9; // xmm0
  unsigned int *Data; // rdx
  unsigned __int64 v11; // r8

  Size = this->Size;
  if ( Size >= 0x10 )
  {
    Reserved = this->Reserved;
    if ( Size == 16 )
    {
      pHeap = this->pHeap;
      v7 = 2 * Reserved;
      this->Reserved = v7;
      if ( pHeap )
        v8 = (unsigned int *)pHeap->Alloc(pHeap, 4 * v7, 0i64);
      else
        v8 = (unsigned int *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                               Scaleform::Memory::pGlobalHeap,
                               this,
                               4 * v7,
                               0i64);
      v9 = *(_OWORD *)this->Static;
      this->Data = v8;
      *(_OWORD *)v8 = v9;
      *((_OWORD *)v8 + 1) = *(_OWORD *)&this->Static[4];
      *((_OWORD *)v8 + 2) = *(_OWORD *)&this->Static[8];
      *((_OWORD *)v8 + 3) = *(_OWORD *)&this->Static[12];
    }
    else if ( Size >= Reserved )
    {
      Data = this->Data;
      v11 = 2 * Reserved;
      this->Reserved = v11;
      this->Data = (unsigned int *)Scaleform::Memory::pGlobalHeap->Realloc(
                                     Scaleform::Memory::pGlobalHeap,
                                     Data,
                                     4 * v11);
    }
    this->Data[this->Size++] = *val;
  }
  else
  {
    this->Static[Size] = *val;
    ++this->Size;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,Scaleform::AllocatorDH<Scaleform::GFx::AS3::SPtr<Scaleform::GFx::AS3::InstanceTraits::Traits>,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::GFx::ASString,Scaleform::AllocatorDH<Scaleform::GFx::ASString,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::GFx::ASString *Data; // rdx
  unsigned __int64 v6; // rdi
  Scaleform::GFx::ASString *v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (Scaleform::GFx::ASString *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::GFx::ASString *, unsigned __int64, const void *))Scaleform::Memory::pGlobalHeap->Realloc)(
                                           Scaleform::Memory::pGlobalHeap,
                                           Data,
                                           8 * v6,
                                           pheapAddr);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = *(_QWORD *)pheapAddr;
      v9 = 2;
      this->Data = (Scaleform::GFx::ASString *)(*(__int64 (__fastcall **)(const void *, unsigned __int64, int *))(v8 + 80))(
                                                 pheapAddr,
                                                 8 * v6,
                                                 &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::GFx::ASString *, _QWORD, const void *))Scaleform::Memory::pGlobalHeap->Free)(
          Scaleform::Memory::pGlobalHeap,
          Data,
          0i64,
          pheapAddr);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::TextMeshEntry *Data; // rdx
  unsigned __int64 v6; // rdi
  Scaleform::Render::TextMeshEntry *v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (Scaleform::Render::TextMeshEntry *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TextMeshEntry *, unsigned __int64, const void *))Scaleform::Memory::pGlobalHeap->Realloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   Data,
                                                   40 * v6,
                                                   pheapAddr);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = *(_QWORD *)pheapAddr;
      v9 = 2;
      this->Data = (Scaleform::Render::TextMeshEntry *)(*(__int64 (__fastcall **)(const void *, unsigned __int64, int *))(v8 + 80))(
                                                         pheapAddr,
                                                         40 * v6,
                                                         &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TextMeshEntry *, _QWORD, const void *))Scaleform::Memory::pGlobalHeap->Free)(
          Scaleform::Memory::pGlobalHeap,
          Data,
          0i64,
          pheapAddr);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newCapacity)
{
  Scaleform::Render::TextMeshLayer *Data; // rdx
  unsigned __int64 v6; // rdi
  Scaleform::Render::TextMeshLayer *v7; // rax
  __int64 v8; // rax
  int v9; // [rsp+30h] [rbp+8h] BYREF

  if ( newCapacity != this->Policy.Capacity )
  {
    Data = this->Data;
    if ( newCapacity )
    {
      v6 = (newCapacity + 3) & 0xFFFFFFFFFFFFFFFCui64;
      if ( Data )
      {
        v7 = (Scaleform::Render::TextMeshLayer *)((__int64 (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TextMeshLayer *, unsigned __int64, const void *))Scaleform::Memory::pGlobalHeap->Realloc)(
                                                   Scaleform::Memory::pGlobalHeap,
                                                   Data,
                                                   v6 << 6,
                                                   pheapAddr);
        this->Policy.Capacity = v6;
        this->Data = v7;
        return;
      }
      v8 = *(_QWORD *)pheapAddr;
      v9 = 2;
      this->Data = (Scaleform::Render::TextMeshLayer *)(*(__int64 (__fastcall **)(const void *, unsigned __int64, int *))(v8 + 80))(
                                                         pheapAddr,
                                                         v6 << 6,
                                                         &v9);
    }
    else
    {
      v6 = 0i64;
      if ( Data )
      {
        ((void (__fastcall *)(Scaleform::MemoryHeap *, Scaleform::Render::TextMeshLayer *, _QWORD, const void *))Scaleform::Memory::pGlobalHeap->Free)(
          Scaleform::Memory::pGlobalHeap,
          Data,
          0i64,
          pheapAddr);
        this->Data = 0i64;
        this->Policy.Capacity = 0i64;
        return;
      }
    }
    this->Policy.Capacity = v6;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rsi
  unsigned __int64 v7; // rsi
  Scaleform::Ptr<Scaleform::Render::PrimitiveFill> *p_pFill; // rbx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    v7 = Size - newSize;
    if ( v7 )
    {
      p_pFill = &this->Data[v7 - 1 + newSize].pFill;
      do
      {
        if ( p_pFill->pObject )
          Scaleform::RefCountNTSImpl::Release(p_pFill->pObject);
        p_pFill -= 5;
        --v7;
      }
      while ( v7 );
    }
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
        Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy> *this,
        const void *pheapAddr,
        unsigned __int64 newSize)
{
  unsigned __int64 Size; // rdx

  Size = this->Size;
  if ( newSize >= Size )
  {
    if ( newSize <= this->Policy.Capacity )
    {
      this->Size = newSize;
    }
    else
    {
      Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize + (newSize >> 2));
      this->Size = newSize;
    }
  }
  else
  {
    Scaleform::ConstructorMov<Scaleform::Render::TextMeshLayer>::DestructArray(&this->Data[newSize], Size - newSize);
    if ( newSize < this->Policy.Capacity >> 1 )
      Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy>::Reserve(
        this,
        pheapAddr,
        newSize);
    this->Size = newSize;
  }
}

void __fastcall Scaleform::Render::TextMeshProvider::UnpinSlots(Scaleform::Render::TextMeshProvider *this)
{
  Scaleform::Render::Fence *LatestFence; // rax
  Scaleform::Render::Fence *v3; // rdi
  unsigned __int64 i; // rbx

  LatestFence = Scaleform::Render::TextMeshProvider::GetLatestFence(this);
  v3 = LatestFence;
  if ( LatestFence )
    ++LatestFence->RefCount;
  for ( i = 0i64; i < this->Notifiers.Data.Size; ++i )
    Scaleform::Render::GlyphQueue::UnpinSlot(this->Notifiers.Data.Data[i]->pSlot, v3);
  if ( v3 )
    Scaleform::Render::Fence::Release(v3);
}

Scaleform::Render::MatrixPoolImpl::HMatrix *__fastcall Scaleform::Render::TextMeshProvider::UpdateMaskClearBounds(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::MatrixPoolImpl::HMatrix *result,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::MatrixPoolImpl::HMatrix viewMat)
{
  float x2; // xmm3_4
  float y1; // xmm2_4
  float y2; // xmm0_4
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // rcx
  Scaleform::Render::Matrix3x4<float> *Matrix3D; // rax
  __int128 v13; // xmm1
  __int128 v14; // xmm0
  Scaleform::Render::MatrixPoolImpl::HMatrix *p_ClearBounds; // rbx
  Scaleform::Render::MatrixPoolImpl::MatrixPool *v16; // rax
  const Scaleform::Render::MatrixPoolImpl::HMatrix *v17; // rax
  Scaleform::Render::MatrixPoolImpl::MatrixPool *v18; // rax
  Scaleform::Render::MatrixPoolImpl::EntryHandle *v19; // rcx
  Scaleform::Render::MatrixPoolImpl::HMatrix resulta; // [rsp+20h] [rbp-79h] BYREF
  Scaleform::Render::Matrix3x4<float> dst; // [rsp+30h] [rbp-69h] BYREF
  Scaleform::Render::Matrix2x4<float> m2; // [rsp+60h] [rbp-39h] BYREF
  Scaleform::Render::Matrix3x4<float> src; // [rsp+80h] [rbp-19h] BYREF

  x2 = this->ClearBox.x2;
  y1 = this->ClearBox.y1;
  *(_OWORD *)&m2.M[0][0] = _xmm;
  *(_OWORD *)&src.M[0][0] = _xmm;
  *(_QWORD *)&src.M[1][0] = 0x3F8000003F800000i64;
  y2 = this->ClearBox.y2;
  *(_OWORD *)&m2.M[1][0] = _xmm;
  *(_QWORD *)&dst.M[0][0] = __PAIR64__(LODWORD(y1), LODWORD(this->ClearBox.x1));
  *(_QWORD *)&dst.M[0][2] = __PAIR64__(LODWORD(y1), LODWORD(x2));
  *(_QWORD *)&dst.M[1][0] = __PAIR64__(LODWORD(y2), LODWORD(x2));
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&m2, (const float *)&src, (const float *)&dst);
  pHandle = viewMat.pHandle->pHeader->pHandle;
  if ( (HIBYTE(pHandle[1].pNext) & 0x10) != 0 )
  {
    Matrix3D = Scaleform::Render::MatrixPoolImpl::HMatrix::GetMatrix3D((Scaleform::Render::MatrixPoolImpl::HMatrix *)viewMat.pHandle);
    *(_OWORD *)&src.M[0][0] = *(_OWORD *)&Matrix3D->M[0][0];
    v13 = *(_OWORD *)&Matrix3D->M[1][0];
    *(_OWORD *)&dst.M[0][0] = *(_OWORD *)&src.M[0][0];
    *(_OWORD *)&src.M[1][0] = v13;
    v14 = *(_OWORD *)&Matrix3D->M[2][0];
    *(_OWORD *)&dst.M[1][0] = v13;
    *(_OWORD *)&src.M[2][0] = v14;
    *(_OWORD *)&dst.M[2][0] = v14;
    Scaleform::Render::Matrix3x4<float>::MultiplyMatrix(&src, &dst, &m2);
    p_ClearBounds = &this->ClearBounds;
    if ( p_ClearBounds->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    {
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix3D(p_ClearBounds, &src);
      goto LABEL_10;
    }
    v16 = hal->GetMatrixPool(hal);
    v17 = Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(v16, &resulta, &src, 0x10u);
  }
  else
  {
    Scaleform::Render::Matrix2x4<float>::Append(
      &m2,
      (const Scaleform::Render::Matrix2x4<float> *)&pHandle[2
                                                          * Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[HIBYTE(pHandle[1].pNext) & 0xF].Offsets[4]
                                                          + 2]);
    p_ClearBounds = &this->ClearBounds;
    if ( p_ClearBounds->pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    {
      Scaleform::Render::MatrixPoolImpl::HMatrix::SetMatrix2D(p_ClearBounds, &m2);
      goto LABEL_10;
    }
    v18 = hal->GetMatrixPool(hal);
    v17 = Scaleform::Render::MatrixPoolImpl::MatrixPool::CreateMatrix(v18, &resulta, &m2, 0);
  }
  Scaleform::Render::MatrixPoolImpl::HMatrix::operator=(p_ClearBounds, v17);
  if ( resulta.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release(resulta.pHandle->pHeader);
LABEL_10:
  v19 = p_ClearBounds->pHandle;
  result->pHandle = p_ClearBounds->pHandle;
  if ( v19 != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    ++v19->pHeader->RefCount;
  if ( viewMat.pHandle->pNext != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
    Scaleform::Render::MatrixPoolImpl::DataHeader::Release((Scaleform::Render::MatrixPoolImpl::DataHeader *)viewMat.pHandle->pHeader->pHandle);
  return result;
}

char __fastcall Scaleform::Render::TextMeshProvider::addGlyph(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::TmpTextStorage *storage,
        Scaleform::Render::GlyphRunData *data,
        unsigned int glyphIndex,
        bool fauxBold,
        bool fauxItalic,
        bool snap,
        unsigned int meshGenFlags)
{
  char v12; // bl
  float screenSize; // xmm7_4
  const Scaleform::Render::TextureGlyph *v14; // rax
  unsigned __int16 Flags; // cx
  char v16; // r14
  char v17; // al
  bool v18; // r13
  bool v20; // r12
  int outline; // ebx
  Scaleform::Render::ToleranceParams *ToleranceParams; // rax
  Scaleform::Render::VectorGlyphShape *GlyphShape; // rax
  unsigned __int16 v24; // dx
  Scaleform::Render::VectorGlyphShape *v25; // rbx
  Scaleform::Render::FontCacheHandle *pFontHandle; // rax
  __int64 v27; // xmm1_8
  __int16 v28; // cx
  __int16 v29; // cx
  unsigned __int16 v30; // ax
  unsigned __int16 v31; // cx
  bool v32; // zf
  float CachedFontSize; // xmm0_4
  long double v34; // xmm0_8
  unsigned int RasterSize; // edx
  __int16 v36; // cx
  unsigned __int16 v37; // cx
  Scaleform::Render::Font *pFont; // rcx
  double v39; // xmm0_8
  unsigned __int16 v40; // dx
  char v41; // cl
  char v42; // al
  float v43; // xmm6_4
  Scaleform::Render::GlyphNode *Glyph; // rax
  Scaleform::Render::GlyphCache *pCache; // rdx
  Scaleform::Render::GlyphCache::RasResult v46; // eax
  float NewLineY; // xmm3_4
  float NewLineX; // xmm0_4
  float v49; // xmm7_4
  unsigned int mColor; // er8
  float v51; // xmm6_4
  char v52; // di
  const Scaleform::Render::ShapeDataInterface *pShape; // rcx
  unsigned int color; // er14
  unsigned __int16 v55; // dx
  __int64 v56; // xmm1_8
  __int16 v57; // cx
  __int16 v58; // cx
  unsigned __int16 v59; // cx
  const Scaleform::Render::GlyphRaster *pRaster; // r8
  float CachedShadowSize; // xmm0_4
  long double v62; // xmm0_8
  Scaleform::Render::GlyphCache *v63; // rcx
  Scaleform::Render::GlyphNode *v64; // rax
  char v65; // [rsp+50h] [rbp-71h]
  Scaleform::Render::Rect<float> rect; // [rsp+60h] [rbp-61h] BYREF
  Scaleform::Render::GlyphParam gp; // [rsp+70h] [rbp-51h] BYREF
  char v69; // [rsp+118h] [rbp+57h]

  v12 = 0;
  screenSize = data->HeightRatio * data->FontSize;
  v69 = 1;
  v14 = data->pFont->GetTextureGlyph(data->pFont, glyphIndex);
  if ( !v14 )
  {
LABEL_5:
    Flags = data->Param.TextParam.Flags;
    v16 = 1;
    v17 = v12;
    if ( (meshGenFlags & 2) != 0 )
      v17 = 1;
    v65 = v17;
    v18 = (Flags & 0x10) != 0 || fauxItalic;
    v20 = (Flags & 8) != 0 || fauxBold;
    outline = Flags >> 12;
    ToleranceParams = Scaleform::Render::HAL::GetToleranceParams(hal);
    GlyphShape = Scaleform::Render::GlyphCache::CreateGlyphShape(
                   this->pCache,
                   data,
                   ToleranceParams,
                   glyphIndex,
                   screenSize,
                   v20,
                   v18,
                   outline,
                   0);
    v24 = data->Param.TextParam.Flags;
    v25 = GlyphShape;
    pFontHandle = data->pFontHandle;
    v27 = *(_QWORD *)&data->Param.TextParam.BlurY;
    *(_QWORD *)&gp.GlyphIndex = *(_QWORD *)&data->Param.TextParam.GlyphIndex;
    gp.pFont = pFontHandle;
    *(_QWORD *)&gp.BlurY = v27;
    gp.GlyphIndex = glyphIndex;
    if ( (v24 & 8) != 0 || fauxBold )
      v28 = gp.Flags | 8;
    else
      v28 = gp.Flags & 0xFFF7;
    if ( (v24 & 0x10) != 0 || fauxItalic )
      v29 = v28 | 0x10;
    else
      v29 = v28 & 0xFFEF;
    v30 = v29 | 0x400;
    v31 = v29 & 0xFBFF;
    if ( (v24 & 0x400) != 0 )
      v31 = v30;
    v32 = data->pRaster == 0i64;
    gp.Flags = v31;
    CachedFontSize = Scaleform::Render::GlyphCache::GetCachedFontSize(this->pCache, &gp, screenSize, !v32);
    v34 = floor(CachedFontSize * 16.0);
    RasterSize = data->RasterSize;
    gp.FontSize = (int)v34;
    v36 = gp.Flags & 0xFDFF;
    if ( RasterSize )
      v36 = gp.Flags | 0x200;
    v37 = v36 & 0xFFFB;
    gp.Flags = v37;
    if ( (v37 & 0x400) == 0 )
      v16 = v65;
    if ( (v37 & 1) != 0 && (v37 & 0x100) == 0 && !data->VectorSize && !RasterSize )
    {
      pFont = gp.pFont->pFont;
      if ( (pFont->Flags & 0x80) == 0
        && (float)((float)gp.BlurX * 0.0625) == 0.0
        && (float)((float)gp.BlurY * 0.0625) == 0.0 )
      {
        v39 = ((double (__fastcall *)(Scaleform::Render::Font *, _QWORD))pFont->GetGlyphWidth)(pFont, gp.GlyphIndex);
        if ( (float)(int)this->pCache->Queue.MaxSlotHeight > (float)((float)((float)(*(float *)&v39 * screenSize)
                                                                           / gp.pFont->pFont->GetNominalGlyphHeight(gp.pFont->pFont))
                                                                   * 3.0) )
          gp.Flags |= 4u;
      }
    }
    if ( this->pCache->GetParams(&this->pCache->Scaleform::Render::GlyphCacheConfig)->UseAutoFit
      && snap
      && (gp.Flags & 0xF000) == 0
      && (gp.Flags & 1) != 0
      && (gp.Flags & 2) != 0
      && screenSize > 6.0
      && (gp.pFont->pFont->Flags & 0x2010) != 0 )
    {
      v40 = gp.Flags | 2;
    }
    else
    {
      v40 = gp.Flags & 0xFFFD;
    }
    v41 = v16;
    v42 = LOBYTE(data->Param.ShadowParam.Flags) >> 5;
    gp.Flags = v40;
    if ( (v42 & 1) == 0 && !v16 )
    {
      if ( (v40 & 4) != 0 )
        v43 = FLOAT_2_5;
      else
        v43 = *(float *)&FLOAT_1_0;
      Glyph = Scaleform::Render::GlyphCache::FindGlyph(this->pCache, this, &gp);
      if ( Glyph
        || (gp.BlurX || gp.BlurY ? (Glyph = Scaleform::Render::GlyphCache::RasterizeShadow(
                                              this->pCache,
                                              hal,
                                              data,
                                              this,
                                              &gp,
                                              screenSize,
                                              data->pRaster)) : (Glyph = Scaleform::Render::GlyphCache::RasterizeGlyph(
                                                                           this->pCache,
                                                                           hal,
                                                                           data,
                                                                           this,
                                                                           &gp)),
            Glyph) )
      {
        Scaleform::Render::TextMeshProvider::addRasterGlyph(
          this,
          storage,
          TextLayer_RasterText,
          data,
          data->mColor,
          Glyph,
          screenSize,
          snap,
          v43);
        v41 = 0;
        goto LABEL_73;
      }
      pCache = this->pCache;
      v46 = pCache->Result;
      if ( v46 == Res_ShapeNotFound )
      {
        NewLineY = data->NewLineY;
        NewLineX = data->NewLineX;
        v49 = data->FontSize * 0.25;
        mColor = data->mColor;
        v51 = data->FontSize * 0.5;
        rect.x1 = NewLineX + (float)(v49 * 0.5);
        rect.x2 = (float)(NewLineX + v49) + (float)(v49 * 0.5);
        rect.y2 = NewLineY - (float)(v51 * 0.25);
        rect.y1 = (float)(NewLineY - v51) - (float)(v51 * 0.25);
        Scaleform::Render::TextMeshProvider::addSelection(this, storage, mColor, &rect);
LABEL_64:
        v52 = 1;
LABEL_65:
        if ( v25 )
          v25->Release(&v25->Scaleform::Render::MeshProvider);
        return v52;
      }
      if ( v46 == Res_ShapeIsEmpty )
        goto LABEL_64;
      v41 = 0;
      if ( v46 == Res_CacheFull )
      {
        if ( !pCache->GetParams(&pCache->Scaleform::Render::GlyphCacheConfig)->UseVectorOnFullCache )
        {
          v52 = 0;
          goto LABEL_65;
        }
        goto LABEL_74;
      }
      if ( (unsigned int)(v46 - 3) <= 1 )
      {
LABEL_74:
        pShape = data->pShape;
        if ( pShape && !pShape->IsEmpty((Scaleform::Render::ShapeDataInterface *)pShape) )
        {
          Scaleform::Render::TextMeshProvider::addVectorGlyph(
            this,
            storage,
            data->mColor,
            data->pFontHandle,
            glyphIndex,
            gp.Flags,
            data->FontSize,
            data->NewLineX,
            data->NewLineY);
          this->Flags |= 0x40u;
        }
LABEL_77:
        color = data->Param.ShadowColor;
        if ( color && v69 )
        {
          v55 = data->Param.TextParam.Flags;
          v56 = *(_QWORD *)&data->Param.ShadowParam.BlurY;
          *(_OWORD *)&gp.pFont = *(_OWORD *)&data->Param.ShadowParam.pFont;
          *(_QWORD *)&gp.BlurY = v56;
          v57 = _mm_extract_epi16(*(__m128i *)&gp.pFont, 6) & 0xFFFC;
          gp.pFont = data->pFontHandle;
          if ( (v55 & 8) != 0 || fauxBold )
            v58 = v57 | 8;
          else
            v58 = v57 & 0xFFF7;
          if ( (v55 & 0x10) != 0 || fauxItalic )
            v59 = v58 | 0x10;
          else
            v59 = v58 & 0xFFEF;
          pRaster = data->pRaster;
          gp.Flags = v59;
          CachedShadowSize = Scaleform::Render::GlyphCache::GetCachedShadowSize(this->pCache, screenSize, pRaster);
          v62 = floor(CachedShadowSize * 16.0);
          v63 = this->pCache;
          gp.GlyphIndex = glyphIndex;
          gp.FontSize = (int)v62;
          v64 = Scaleform::Render::GlyphCache::FindGlyph(v63, this, &gp);
          if ( v64
            || (v64 = Scaleform::Render::GlyphCache::RasterizeShadow(
                        this->pCache,
                        hal,
                        data,
                        this,
                        &gp,
                        screenSize,
                        data->pRaster)) != 0i64 )
          {
            Scaleform::Render::TextMeshProvider::addRasterGlyph(
              this,
              storage,
              TextLayer_Shadow,
              data,
              color,
              v64,
              screenSize,
              snap,
              1.0);
          }
          else if ( this->pCache->Result == Res_CacheFull )
          {
            v52 = 0;
            goto LABEL_65;
          }
        }
        goto LABEL_64;
      }
    }
LABEL_73:
    if ( !v41 )
      goto LABEL_77;
    goto LABEL_74;
  }
  if ( (data->pFont->Flags & 0x1000) == 0 && (float)(this->pCache->Param.MaxRasterScale * data->TexHeight) < screenSize )
  {
    v12 = 1;
    v69 = 0;
    goto LABEL_5;
  }
  if ( v14->pImage.pObject )
    Scaleform::Render::TextMeshProvider::addTextureGlyph(this, storage, v14, data, data->mColor);
  return 1;
}

void __fastcall Scaleform::Render::TextMeshProvider::addImage(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TmpTextStorage *storage,
        const Scaleform::Render::GlyphRunData *data,
        Scaleform::Render::Image *img,
        float scaleX,
        float scaleY,
        float baseLine,
        bool snap)
{
  float NewLineY; // xmm7_4
  float NewLineX; // xmm8_4
  Scaleform::Render::Image_vtbl *v13; // r8
  Scaleform::Render::GlyphCache *pCache; // rax
  Scaleform::RefCountVImpl *v15; // rax
  Scaleform::Render::Texture *v16; // rbx
  Scaleform::Render::GlyphCache *v17; // rax
  Scaleform::Render::Image_vtbl *v18; // rax
  int Width; // ecx
  Scaleform::Render::Image_vtbl *v20; // rax
  int Height; // ecx
  unsigned __int64 v22; // rdi
  __int128 v23; // xmm1
  Scaleform::Render::TmpTextMeshEntry *v24; // rax
  __int64 v25; // rdx
  const Scaleform::Render::VertexFormat **p_pFormat; // rdi
  __int128 v27; // xmm0
  __int64 v28; // rbx
  Scaleform::RefCountVImpl *v29; // rcx
  __int64 v30; // [rsp+28h] [rbp-99h] BYREF
  __int128 v31; // [rsp+30h] [rbp-91h]
  __int128 v32; // [rsp+40h] [rbp-81h]
  __int128 v33; // [rsp+50h] [rbp-71h]
  Scaleform::Render::PrimitiveFillData initdata; // [rsp+60h] [rbp-61h] BYREF

  NewLineY = data->NewLineY;
  NewLineX = data->NewLineX;
  if ( snap )
    NewLineX = (float)((float)(floorf(
                                 (float)((float)((float)(NewLineY * data->DirMtx.M[0][1])
                                               + (float)(NewLineX * data->DirMtx.M[0][0]))
                                       + data->DirMtx.M[0][3])
                               + 0.5)
                             * data->InvMtx.M[0][0])
                     + (float)((float)((float)((float)(NewLineY * data->DirMtx.M[1][1])
                                             + (float)(NewLineX * data->DirMtx.M[1][0]))
                                     + data->DirMtx.M[1][3])
                             * data->InvMtx.M[0][1]))
             + data->InvMtx.M[0][3];
  v13 = img->__vftable;
  DWORD1(v31) = storage->Entries.Size;
  pCache = this->pCache;
  LODWORD(v31) = 7;
  v15 = (Scaleform::RefCountVImpl *)v13->GetTexture(img, pCache->pTexMan);
  v16 = (Scaleform::Render::Texture *)v15;
  *(_QWORD *)&initdata.Type = 11i64;
  initdata.Textures[0].pObject = 0i64;
  initdata.pFormat = &Scaleform::Render::ImageGlyphVertex::Format;
  initdata.Textures[1].pObject = 0i64;
  *(_WORD *)&initdata.FillModes[0].Fill = 3;
  if ( v15 )
    Scaleform::Render::RenderBuffer::AddRef(v15);
  initdata.Textures[0].pObject = v16;
  v17 = this->pCache;
  initdata.Textures[1].pObject = 0i64;
  *(_QWORD *)&v32 = Scaleform::Render::PrimitiveFillManager::CreateFill(v17->pFillMan, &initdata);
  v18 = img->__vftable;
  *((float *)&v32 + 2) = NewLineX;
  *((float *)&v32 + 3) = NewLineY - (float)(scaleY * baseLine);
  Width = v18->GetSize(img, (Scaleform::Render::Size<unsigned long> *)&v30)->Width;
  v20 = img->__vftable;
  *(float *)&v33 = (float)((float)Width * scaleX) + NewLineX;
  Height = v20->GetSize(img, (Scaleform::Render::Size<unsigned long> *)&v30)->Height;
  *((_QWORD *)&v33 + 1) = img;
  v22 = storage->Entries.Size >> 6;
  *((float *)&v33 + 1) = (float)((float)Height * scaleY) + (float)(NewLineY - (float)(scaleY * baseLine));
  if ( v22 >= storage->Entries.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>::allocPage(&storage->Entries, v22);
  v23 = v32;
  v24 = storage->Entries.Pages[v22];
  v25 = storage->Entries.Size & 0x3F;
  p_pFormat = &initdata.pFormat;
  *(_OWORD *)&v24[v25].LayerType = v31;
  v27 = v33;
  *(_OWORD *)&v24[v25].pFill = v23;
  *(Scaleform::Render::MaskEnt *)((char *)&v24[v25].EntryData.MaskData + 8) = (Scaleform::Render::MaskEnt)v27;
  ++storage->Entries.Size;
  v28 = 2i64;
  do
  {
    v29 = (Scaleform::RefCountVImpl *)*--p_pFormat;
    --v28;
    if ( v29 )
      Scaleform::RefCountImpl::Release(v29);
  }
  while ( v28 );
}

void __fastcall Scaleform::Render::TextMeshProvider::addLayer(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TmpTextStorage *storage,
        Scaleform::Render::TextLayerType type,
        unsigned int start,
        unsigned int count)
{
  unsigned int v9; // ebp
  unsigned __int64 v10; // rdi
  __int64 v11; // rcx
  Scaleform::Render::TmpTextMeshLayer *v12; // rax
  __int128 v13; // [rsp+20h] [rbp-38h]
  Scaleform::Render::PrimitiveFill *pFill; // [rsp+30h] [rbp-28h]

  do
  {
    v9 = 16382;
    if ( count < 0x3FFE )
      v9 = count;
    v10 = storage->Layers.Size >> 4;
    *(_QWORD *)&v13 = __PAIR64__(start, type);
    DWORD2(v13) = v9;
    pFill = storage->Entries.Pages[(unsigned __int64)start >> 6][start & 0x3F].pFill;
    if ( v10 >= storage->Layers.NumPages )
      Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4>::allocPage(&storage->Layers, v10);
    start += v9;
    v11 = storage->Layers.Size & 0xF;
    v12 = storage->Layers.Pages[v10];
    *(_OWORD *)&v12[v11].Type = v13;
    v12[v11].pFill = pFill;
    ++storage->Layers.Size;
    count -= v9;
  }
  while ( count );
}

void __fastcall Scaleform::Render::TextMeshProvider::addLayer(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TmpTextStorage *storage,
        unsigned __int64 start,
        unsigned __int64 end)
{
  Scaleform::Render::TmpTextMeshEntry **Pages; // r11
  unsigned __int64 v8; // rcx
  unsigned __int64 v9; // r15
  unsigned __int64 v10; // rdx
  char *v11; // rbx
  unsigned __int16 v12; // r9
  Scaleform::Render::TextMeshLayer *v13; // r8
  unsigned int v14; // esi
  unsigned int v15; // er14
  int v16; // ebp
  unsigned __int64 v17; // rdi
  __int64 v18; // rcx
  Scaleform::Render::TmpTextMeshLayer *v19; // rax
  unsigned int v20; // esi
  unsigned int v21; // er14
  unsigned int v22; // er12
  int v23; // ebp
  unsigned __int64 v24; // rdi
  __int64 v25; // rcx
  Scaleform::Render::TmpTextMeshLayer *v26; // rax
  __int128 v27; // [rsp+30h] [rbp-58h]
  Scaleform::Render::PrimitiveFill *pFill; // [rsp+40h] [rbp-48h]
  Scaleform::Render::PrimitiveFill *v29; // [rsp+40h] [rbp-48h]
  unsigned __int64 v30; // [rsp+98h] [rbp+10h]
  unsigned __int64 v31; // [rsp+A0h] [rbp+18h]

  Pages = storage->Entries.Pages;
  v8 = 8 * (start >> 6);
  v9 = start;
  v30 = v8;
  v10 = 48 * (start & 0x3F);
  v11 = *(char **)((char *)Pages + v8) + v10;
  v31 = v10;
  v12 = *(_WORD *)v11;
  if ( *(_WORD *)v11 == 4
    && this->Layers.Data.Size
    && (v13 = &this->Layers.Data.Data[this->Layers.Data.Size], (unsigned int)(v13[-1].Type - 2) <= 1)
    && (Scaleform::Render::PrimitiveFill *)*((_QWORD *)v11 + 2) == Pages[(unsigned __int64)v13[-1].Start >> 6][v13[-1].Start & 0x3F].pFill )
  {
    v13[-1].Type = TextLayer_ShadowText;
    v13[-1].Count += end - v9;
  }
  else if ( ((v12 - 8) & 0xFFFB) != 0 )
  {
    if ( v12 == 7 )
    {
      for ( ; v9 < end; ++v9 )
      {
        v14 = 1;
        v15 = v9;
        do
        {
          v16 = 16382;
          if ( v14 < 0x3FFE )
            v16 = v14;
          v17 = storage->Layers.Size >> 4;
          LODWORD(v27) = 7;
          DWORD1(v27) = v15;
          DWORD2(v27) = v16;
          pFill = storage->Entries.Pages[(unsigned __int64)v15 >> 6][v15 & 0x3F].pFill;
          if ( v17 >= storage->Layers.NumPages )
            Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4>::allocPage(&storage->Layers, v17);
          v15 += v16;
          v18 = storage->Layers.Size & 0xF;
          v19 = storage->Layers.Pages[v17];
          *(_OWORD *)&v19[v18].Type = v27;
          v19[v18].pFill = pFill;
          ++storage->Layers.Size;
          v14 -= v16;
        }
        while ( v14 );
      }
    }
    else
    {
      Scaleform::Render::TextMeshProvider::addLayer(this, storage, (Scaleform::Render::TextLayerType)v12, v9, end - v9);
    }
  }
  else
  {
    for ( ; v9 < end; v8 = v30 )
    {
      v20 = 1;
      v21 = v9;
      v22 = *(unsigned __int16 *)((char *)&(*(Scaleform::Render::TmpTextMeshEntry **)((char *)storage->Entries.Pages + v8))->LayerType
                                + v10);
      do
      {
        v23 = 16382;
        if ( v20 < 0x3FFE )
          v23 = v20;
        v24 = storage->Layers.Size >> 4;
        *(_QWORD *)&v27 = __PAIR64__(v21, v22);
        DWORD2(v27) = v23;
        v29 = storage->Entries.Pages[(unsigned __int64)v21 >> 6][v21 & 0x3F].pFill;
        if ( v24 >= storage->Layers.NumPages )
          Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4>::allocPage(&storage->Layers, v24);
        v21 += v23;
        v25 = storage->Layers.Size & 0xF;
        v26 = storage->Layers.Pages[v24];
        *(_OWORD *)&v26[v25].Type = v27;
        v26[v25].pFill = v29;
        ++storage->Layers.Size;
        v20 -= v23;
      }
      while ( v20 );
      v10 = v31;
      ++v9;
    }
  }
}

void __fastcall Scaleform::Render::TextMeshProvider::addMask(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TmpTextStorage *storage)
{
  Scaleform::Render::Rect<float> ClipBox; // xmm0
  unsigned __int64 v5; // rbx
  Scaleform::Render::TmpTextMeshEntry *v6; // rax
  __int64 v7; // rdx
  __int128 v8; // [rsp+20h] [rbp-38h]
  __m256i v9; // [rsp+30h] [rbp-28h] OVERLAPPED

  LODWORD(v8) = 11;
  *(_QWORD *)((char *)&v8 + 4) = LODWORD(storage->Entries.Size);
  v9.m256i_i64[0] = (__int64)Scaleform::Render::GlyphCache::GetFill(this->pCache, TextLayer_Mask, 0);
  ++*(_DWORD *)(v9.m256i_i64[0] + 8);
  ClipBox = this->ClipBox;
  v5 = storage->Entries.Size >> 6;
  *(Scaleform::Render::Rect<float> *)&v9.m256i_u64[1] = ClipBox;
  if ( v5 >= storage->Entries.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>::allocPage(&storage->Entries, v5);
  v6 = storage->Entries.Pages[v5];
  v7 = storage->Entries.Size & 0x3F;
  *(_OWORD *)&v6[v7].LayerType = v8;
  *(__m256i *)&v6[v7].pFill = v9;
  ++storage->Entries.Size;
}

void __fastcall Scaleform::Render::TextMeshProvider::addRasterGlyph(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TmpTextStorage *storage,
        Scaleform::Render::TextLayerType type,
        Scaleform::Render::GlyphRunData *data,
        unsigned int color,
        Scaleform::Render::GlyphNode *node,
        float screenSize,
        bool snap,
        float stretch)
{
  float NewLineX; // xmm3_4
  float NewLineY; // xmm7_4
  float v15; // xmm6_4
  unsigned __int16 w; // r8
  unsigned __int16 h; // dx
  float v18; // xmm6_4
  float v19; // xmm7_4
  float v20; // xmm8_4
  float v21; // xmm9_4
  float ShadowOffsetX; // xmm1_4
  float v23; // xmm2_4
  float v24; // xmm7_4
  float v25; // xmm9_4
  float v26; // xmm6_4
  float v27; // xmm8_4
  float ShadowOffsetY; // xmm0_4
  float v29; // xmm0_4
  float v30; // xmm1_4
  Scaleform::Render::PrimitiveFill *Fill; // rax
  unsigned __int64 v32; // rdi
  Scaleform::Render::TmpTextMeshEntry *v33; // rax
  __int64 v34; // rdx
  __int128 v35; // [rsp+20h] [rbp-78h]
  __int128 v36; // [rsp+30h] [rbp-68h]
  Scaleform::Render::MaskEnt v37; // [rsp+40h] [rbp-58h]

  NewLineX = data->NewLineX;
  if ( snap && ((data->pFont->Flags & 0x80) != 0 || (node->Param.Flags & 1) != 0 && (node->Param.Flags & 4) == 0) )
  {
    NewLineY = data->NewLineY;
    v15 = data->NewLineX;
    NewLineX = (float)((float)(floorf(
                                 (float)((float)((float)(NewLineY * data->DirMtx.M[0][1])
                                               + (float)(NewLineX * data->DirMtx.M[0][0]))
                                       + data->DirMtx.M[0][3])
                               + 0.5)
                             * data->InvMtx.M[0][0])
                     + (float)((float)((float)((float)(NewLineY * data->DirMtx.M[1][1])
                                             + (float)(v15 * data->DirMtx.M[1][0]))
                                     + data->DirMtx.M[1][3])
                             * data->InvMtx.M[0][1]))
             + data->InvMtx.M[0][3];
  }
  w = node->mRect.w;
  if ( w > 1u )
  {
    h = node->mRect.h;
    if ( h > 1u )
    {
      v18 = (float)((float)node->Origin.x * 0.0625) + 1.0;
      v19 = (float)((float)node->Origin.y * 0.0625) + 1.0;
      v20 = (float)((float)w + v18) - 2.0;
      v21 = (float)((float)h + v19) - 2.0;
      ShadowOffsetX = 0.0;
      v23 = (float)((float)(screenSize * node->Scale) / fmaxf(0.0000099999997, (float)node->Param.FontSize * 0.0625))
          / data->HeightRatio;
      v24 = v19 * v23;
      v25 = v21 * v23;
      v26 = v18 * (float)(v23 / stretch);
      v27 = v20 * (float)(v23 / stretch);
      ShadowOffsetY = 0.0;
      if ( type == TextLayer_Shadow )
      {
        ShadowOffsetX = data->Param.ShadowOffsetX;
        ShadowOffsetY = data->Param.ShadowOffsetY;
      }
      v29 = ShadowOffsetY + data->NewLineY;
      v30 = ShadowOffsetX + NewLineX;
      WORD1(v35) = node->pSlot->TextureId & 0x7FFF;
      DWORD1(v35) = storage->Entries.Size;
      LOWORD(v35) = type;
      DWORD2(v35) = color;
      Fill = Scaleform::Render::GlyphCache::GetFill(this->pCache, type, WORD1(v35));
      *(_QWORD *)&v37.Coord[2] = node;
      ++Fill->RefCount;
      v32 = storage->Entries.Size >> 6;
      *((float *)&v36 + 2) = v26 + v30;
      *((float *)&v36 + 3) = v24 + v29;
      *(_QWORD *)&v36 = Fill;
      if ( v32 >= storage->Entries.NumPages )
        Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>::allocPage(&storage->Entries, v32);
      v33 = storage->Entries.Pages[v32];
      v34 = storage->Entries.Size & 0x3F;
      *(_OWORD *)&v33[v34].LayerType = v35;
      *(_OWORD *)&v33[v34].pFill = v36;
      v37.Coord[1] = v25 + v29;
      v37.Coord[0] = v27 + v30;
      *(Scaleform::Render::MaskEnt *)((char *)&v33[v34].EntryData.MaskData + 8) = v37;
      ++storage->Entries.Size;
    }
  }
}

void __fastcall Scaleform::Render::TextMeshProvider::addSelection(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TmpTextStorage *storage,
        unsigned int color,
        const Scaleform::Render::Rect<float> *rect)
{
  Scaleform::Render::Rect<float> v6; // xmm0
  unsigned __int64 v7; // rbx
  Scaleform::Render::TmpTextMeshEntry *v8; // rax
  __int64 v9; // rdx
  __int128 v10; // [rsp+20h] [rbp-38h]
  __m256i v11; // [rsp+30h] [rbp-28h] OVERLAPPED

  DWORD2(v10) = color;
  LODWORD(v10) = 1;
  DWORD1(v10) = storage->Entries.Size;
  v11.m256i_i64[0] = (__int64)Scaleform::Render::GlyphCache::GetFill(this->pCache, TextLayer_Selection, 0);
  ++*(_DWORD *)(v11.m256i_i64[0] + 8);
  v6 = *rect;
  v7 = storage->Entries.Size >> 6;
  *(Scaleform::Render::Rect<float> *)&v11.m256i_u64[1] = v6;
  if ( v7 >= storage->Entries.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>::allocPage(&storage->Entries, v7);
  v8 = storage->Entries.Pages[v7];
  v9 = storage->Entries.Size & 0x3F;
  *(_OWORD *)&v8[v9].LayerType = v10;
  *(__m256i *)&v8[v9].pFill = v11;
  ++storage->Entries.Size;
}

void __fastcall Scaleform::Render::TextMeshProvider::addTextureGlyph(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TmpTextStorage *storage,
        const Scaleform::Render::TextureGlyph *tgl,
        Scaleform::Render::GlyphRunData *data,
        unsigned int color)
{
  float NewLineX; // xmm6_4
  float v10; // xmm0_4
  Scaleform::Render::Image *pObject; // rcx
  float NewLineY; // xmm2_4
  float v13; // xmm7_4
  float v14; // xmm9_4
  float v15; // xmm8_4
  float v16; // xmm3_4
  float v17; // xmm4_4
  float v18; // xmm7_4
  float v19; // xmm9_4
  float v20; // xmm8_4
  float v21; // xmm6_4
  Scaleform::RefCountVImpl *v22; // rax
  Scaleform::RefCountVImpl *v23; // rdx
  Scaleform::Render::Texture *v24; // rbx
  Scaleform::RefCountVImpl *v25; // rcx
  Scaleform::Render::GlyphCache *pCache; // rax
  Scaleform::Render::PrimitiveFill *v27; // rax
  __int64 v28; // rbx
  const Scaleform::Render::VertexFormat **p_pFormat; // rdi
  Scaleform::RefCountVImpl *v30; // rcx
  Scaleform::Render::ImageFormat v31; // eax
  Scaleform::Render::Image *v32; // rcx
  Scaleform::Render::Image_vtbl *v33; // r8
  Scaleform::Render::TextureManager *pTexMan; // rdx
  Scaleform::RefCountVImpl *v35; // rax
  Scaleform::RefCountVImpl *v36; // rdx
  Scaleform::Render::Texture *v37; // rbx
  Scaleform::RefCountVImpl *v38; // rcx
  Scaleform::Render::GlyphCache *v39; // rax
  const Scaleform::Render::VertexFormat **v40; // rdi
  __int64 v41; // rbx
  Scaleform::RefCountVImpl *v42; // rcx
  Scaleform::RefCountVImpl *v43; // rax
  Scaleform::RefCountVImpl *v44; // rdx
  Scaleform::Render::Texture *v45; // rbx
  Scaleform::RefCountVImpl *v46; // rcx
  Scaleform::Render::GlyphCache *v47; // rax
  const Scaleform::Render::VertexFormat **v48; // rdi
  __int64 v49; // rbx
  Scaleform::RefCountVImpl *v50; // rcx
  unsigned __int64 v51; // rdi
  __int128 v52; // xmm1
  Scaleform::Render::TmpTextMeshEntry *v53; // rax
  __int64 v54; // rdx
  __int128 v55; // xmm0
  int v56[2]; // [rsp+28h] [rbp-81h] BYREF
  __int128 v57; // [rsp+30h] [rbp-79h]
  __int128 v58; // [rsp+40h] [rbp-69h]
  __int128 v59; // [rsp+50h] [rbp-59h]
  Scaleform::Render::PrimitiveFillData initdata; // [rsp+60h] [rbp-49h] BYREF

  NewLineX = data->NewLineX;
  tgl->pImage.pObject->GetSize(tgl->pImage.pObject, (Scaleform::Render::Size<unsigned long> *)v56);
  v10 = data->FontSize / data->TexHeight;
  pObject = tgl->pImage.pObject;
  LODWORD(v57) = 5;
  NewLineY = data->NewLineY;
  v13 = tgl->UvBounds.x1 - tgl->UvOrigin.x;
  v14 = tgl->UvBounds.x2 - tgl->UvOrigin.x;
  v15 = tgl->UvBounds.y1 - tgl->UvOrigin.y;
  DWORD1(v57) = storage->Entries.Size;
  DWORD2(v57) = color;
  v16 = (float)v56[0] * v10;
  v17 = (float)v56[1] * v10;
  v18 = (float)(v13 * v16) + NewLineX;
  v19 = (float)(v14 * v16) + NewLineX;
  v20 = (float)(v15 * v17) + NewLineY;
  v21 = (float)((float)(tgl->UvBounds.y2 - tgl->UvOrigin.y) * v17) + NewLineY;
  if ( (data->pFont->Flags & 0x10000) != 0 )
  {
    v22 = (Scaleform::RefCountVImpl *)pObject->GetTexture(pObject, this->pCache->pTexMan);
    v23 = 0i64;
    *(_QWORD *)&initdata.Type = 13i64;
    v24 = (Scaleform::Render::Texture *)v22;
    initdata.Textures[0].pObject = 0i64;
    *(_WORD *)&initdata.FillModes[0].Fill = 3;
    initdata.pFormat = &Scaleform::Render::RasterGlyphVertex::Format;
    v25 = 0i64;
    initdata.Textures[1].pObject = 0i64;
    if ( v22 )
    {
      Scaleform::Render::RenderBuffer::AddRef(v22);
      v25 = (Scaleform::RefCountVImpl *)initdata.Textures[1].pObject;
      v23 = (Scaleform::RefCountVImpl *)initdata.Textures[0].pObject;
    }
    if ( v23 )
    {
      Scaleform::RefCountImpl::Release(v23);
      v25 = (Scaleform::RefCountVImpl *)initdata.Textures[1].pObject;
    }
    initdata.Textures[0].pObject = v24;
    if ( v25 )
      Scaleform::RefCountImpl::Release(v25);
    pCache = this->pCache;
    initdata.Textures[1].pObject = 0i64;
    v27 = Scaleform::Render::PrimitiveFillManager::CreateFill(pCache->pFillMan, &initdata);
    this->Flags |= 0x200u;
    v28 = 2i64;
    *(_QWORD *)&v58 = v27;
    p_pFormat = &initdata.pFormat;
    LOWORD(v57) = 6;
    do
    {
      v30 = (Scaleform::RefCountVImpl *)*--p_pFormat;
      --v28;
      if ( v30 )
        Scaleform::RefCountImpl::Release(v30);
    }
    while ( v28 );
  }
  else
  {
    v31 = pObject->GetFormat(pObject);
    v32 = tgl->pImage.pObject;
    v33 = v32->__vftable;
    pTexMan = this->pCache->pTexMan;
    if ( v31 == Image_A8 )
    {
      v35 = (Scaleform::RefCountVImpl *)v33->GetTexture(v32, pTexMan);
      v36 = 0i64;
      *(_QWORD *)&initdata.Type = 12i64;
      v37 = (Scaleform::Render::Texture *)v35;
      initdata.Textures[0].pObject = 0i64;
      *(_WORD *)&initdata.FillModes[0].Fill = 3;
      initdata.pFormat = &Scaleform::Render::RasterGlyphVertex::Format;
      v38 = 0i64;
      initdata.Textures[1].pObject = 0i64;
      if ( v35 )
      {
        Scaleform::Render::RenderBuffer::AddRef(v35);
        v38 = (Scaleform::RefCountVImpl *)initdata.Textures[1].pObject;
        v36 = (Scaleform::RefCountVImpl *)initdata.Textures[0].pObject;
      }
      if ( v36 )
      {
        Scaleform::RefCountImpl::Release(v36);
        v38 = (Scaleform::RefCountVImpl *)initdata.Textures[1].pObject;
      }
      initdata.Textures[0].pObject = v37;
      if ( v38 )
        Scaleform::RefCountImpl::Release(v38);
      v39 = this->pCache;
      initdata.Textures[1].pObject = 0i64;
      *(_QWORD *)&v58 = Scaleform::Render::PrimitiveFillManager::CreateFill(v39->pFillMan, &initdata);
      v40 = &initdata.pFormat;
      v41 = 2i64;
      do
      {
        v42 = (Scaleform::RefCountVImpl *)*--v40;
        --v41;
        if ( v42 )
          Scaleform::RefCountImpl::Release(v42);
      }
      while ( v41 );
    }
    else
    {
      v43 = (Scaleform::RefCountVImpl *)v33->GetTexture(v32, pTexMan);
      v44 = 0i64;
      *(_QWORD *)&initdata.Type = 11i64;
      v45 = (Scaleform::Render::Texture *)v43;
      initdata.Textures[0].pObject = 0i64;
      *(_WORD *)&initdata.FillModes[0].Fill = 3;
      initdata.pFormat = &Scaleform::Render::ImageGlyphVertex::Format;
      v46 = 0i64;
      initdata.Textures[1].pObject = 0i64;
      if ( v43 )
      {
        Scaleform::Render::RenderBuffer::AddRef(v43);
        v46 = (Scaleform::RefCountVImpl *)initdata.Textures[1].pObject;
        v44 = (Scaleform::RefCountVImpl *)initdata.Textures[0].pObject;
      }
      if ( v44 )
      {
        Scaleform::RefCountImpl::Release(v44);
        v46 = (Scaleform::RefCountVImpl *)initdata.Textures[1].pObject;
      }
      initdata.Textures[0].pObject = v45;
      if ( v46 )
        Scaleform::RefCountImpl::Release(v46);
      v47 = this->pCache;
      initdata.Textures[1].pObject = 0i64;
      *(_QWORD *)&v58 = Scaleform::Render::PrimitiveFillManager::CreateFill(v47->pFillMan, &initdata);
      v48 = &initdata.pFormat;
      v49 = 2i64;
      do
      {
        v50 = (Scaleform::RefCountVImpl *)*--v48;
        --v49;
        if ( v50 )
          Scaleform::RefCountImpl::Release(v50);
      }
      while ( v49 );
    }
  }
  v51 = storage->Entries.Size >> 6;
  *((_QWORD *)&v58 + 1) = __PAIR64__(LODWORD(v20), LODWORD(v18));
  *(_QWORD *)&v59 = __PAIR64__(LODWORD(v21), LODWORD(v19));
  *((_QWORD *)&v59 + 1) = tgl;
  if ( v51 >= storage->Entries.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>::allocPage(&storage->Entries, v51);
  v52 = v58;
  v53 = storage->Entries.Pages[v51];
  v54 = storage->Entries.Size & 0x3F;
  *(_OWORD *)&v53[v54].LayerType = v57;
  v55 = v59;
  *(_OWORD *)&v53[v54].pFill = v52;
  *(Scaleform::Render::MaskEnt *)((char *)&v53[v54].EntryData.MaskData + 8) = (Scaleform::Render::MaskEnt)v55;
  ++storage->Entries.Size;
}

void __fastcall Scaleform::Render::TextMeshProvider::addUnderline(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TmpTextStorage *storage,
        unsigned int color,
        Scaleform::Render::TextUnderlineStyle style,
        float x,
        float y,
        float len)
{
  Scaleform::Render::PrimitiveFill *Fill; // rax
  unsigned __int64 v10; // rbx
  Scaleform::Render::TmpTextMeshEntry *v11; // rax
  __int64 v12; // rdx
  __int128 v13; // [rsp+20h] [rbp-38h]
  __int128 v14; // [rsp+30h] [rbp-28h]
  Scaleform::Render::MaskEnt v15; // [rsp+40h] [rbp-18h]

  DWORD2(v13) = color;
  LODWORD(v13) = 9;
  DWORD1(v13) = storage->Entries.Size;
  Fill = Scaleform::Render::GlyphCache::GetFill(this->pCache, TextLayer_Underline, 0);
  *((_QWORD *)&v14 + 1) = __PAIR64__(LODWORD(x), style);
  ++Fill->RefCount;
  v10 = storage->Entries.Size >> 6;
  *(_QWORD *)v15.Coord = __PAIR64__(LODWORD(len), LODWORD(y));
  *(_QWORD *)&v14 = Fill;
  if ( v10 >= storage->Entries.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>::allocPage(&storage->Entries, v10);
  v11 = storage->Entries.Pages[v10];
  v12 = storage->Entries.Size & 0x3F;
  *(_OWORD *)&v11[v12].LayerType = v13;
  *(_OWORD *)&v11[v12].pFill = v14;
  *(Scaleform::Render::MaskEnt *)((char *)&v11[v12].EntryData.MaskData + 8) = v15;
  ++storage->Entries.Size;
}

void __fastcall Scaleform::Render::TextMeshProvider::addVectorGlyph(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TmpTextStorage *storage,
        unsigned int color,
        Scaleform::Render::FontCacheHandle *font,
        unsigned __int16 glyphIndex,
        unsigned __int16 flags,
        float fontSize,
        float x,
        float y)
{
  unsigned __int64 v11; // rbx
  Scaleform::Render::TmpTextMeshEntry *v12; // rax
  __int64 v13; // rdx
  __int128 v14; // [rsp+20h] [rbp-38h]
  __int128 v15; // [rsp+30h] [rbp-28h]
  Scaleform::Render::MaskEnt v16; // [rsp+40h] [rbp-18h]

  DWORD2(v14) = color;
  LODWORD(v14) = 8;
  DWORD1(v14) = storage->Entries.Size;
  *(_QWORD *)&v15 = Scaleform::Render::GlyphCache::GetFill(this->pCache, TextLayer_Shapes, 0);
  ++*(_DWORD *)(v15 + 8);
  Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)font->pFont);
  *((_QWORD *)&v15 + 1) = font->pFont;
  LOWORD(v16.Coord[0]) = glyphIndex;
  v16.Coord[1] = fontSize;
  v11 = storage->Entries.Size >> 6;
  HIWORD(v16.Coord[0]) = flags;
  *(_QWORD *)&v16.Coord[2] = __PAIR64__(LODWORD(y), LODWORD(x));
  if ( v11 >= storage->Entries.NumPages )
    Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>::allocPage(&storage->Entries, v11);
  v12 = storage->Entries.Pages[v11];
  v13 = storage->Entries.Size & 0x3F;
  *(_OWORD *)&v12[v13].LayerType = v14;
  *(_OWORD *)&v12[v13].pFill = v15;
  *(Scaleform::Render::MaskEnt *)((char *)&v12[v13].EntryData.MaskData + 8) = v16;
  ++storage->Entries.Size;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4> *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // rdx
  void *v5; // rbx
  unsigned __int64 v6; // rax

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    if ( this->Pages )
    {
      v5 = Scaleform::Render::LinearHeap::Alloc(this->pHeap, 16 * MaxPages);
      memmove(v5, this->Pages, 8 * this->NumPages);
      v6 = this->MaxPages;
      this->Pages = (Scaleform::Render::TmpTextMeshEntry **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 4i64;
      this->Pages = (Scaleform::Render::TmpTextMeshEntry **)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x20ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::TmpTextMeshEntry *)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0xC00ui64);
  ++this->NumPages;
}

void __fastcall Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4>::allocPage(
        Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshLayer,4,4> *this,
        unsigned __int64 nb)
{
  unsigned __int64 MaxPages; // rdx
  void *v5; // rbx
  unsigned __int64 v6; // rax

  MaxPages = this->MaxPages;
  if ( nb >= MaxPages )
  {
    if ( this->Pages )
    {
      v5 = Scaleform::Render::LinearHeap::Alloc(this->pHeap, 16 * MaxPages);
      memmove(v5, this->Pages, 8 * this->NumPages);
      v6 = this->MaxPages;
      this->Pages = (Scaleform::Render::TmpTextMeshLayer **)v5;
      this->MaxPages = 2 * v6;
    }
    else
    {
      this->MaxPages = 4i64;
      this->Pages = (Scaleform::Render::TmpTextMeshLayer **)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x20ui64);
    }
  }
  this->Pages[nb] = (Scaleform::Render::TmpTextMeshLayer *)Scaleform::Render::LinearHeap::Alloc(this->pHeap, 0x180ui64);
  ++this->NumPages;
}

float __fastcall Scaleform::Render::TextMeshProvider::calcHeightRatio(
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m,
        const Scaleform::Render::Matrix4x4<float> *m4,
        const Scaleform::Render::Viewport *vp)
{
  Scaleform::Render::MatrixPoolImpl::EntryHandle *pHandle; // r10
  Scaleform::Render::MatrixPoolImpl::DataHeader *pHeader; // r9
  __int64 v6; // rdx
  float v7; // xmm5_4
  float v8; // xmm2_4
  float v9; // xmm6_4
  float v10; // xmm3_4
  float Height; // xmm3_4
  float Width; // xmm2_4
  float src[4]; // [rsp+30h] [rbp-98h] BYREF
  int v15; // [rsp+40h] [rbp-88h]
  int v16; // [rsp+44h] [rbp-84h]
  Scaleform::Render::Matrix2x4<float> v17; // [rsp+50h] [rbp-78h] BYREF
  Scaleform::Render::Rect<float> bounds; // [rsp+70h] [rbp-58h] BYREF
  float dst[8]; // [rsp+80h] [rbp-48h] BYREF

  pHandle = m->pHandle;
  pHeader = m->pHandle->pHeader;
  v6 = Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHeader->Format & 0xF].Offsets[4]
     + 1i64;
  v7 = *(float *)&pHandle->pHeader[Scaleform::Render::MatrixPoolImpl::HMatrixConstants::MatrixElementSizeTable[pHandle->pHeader->Format & 0xF].Offsets[4]
                                 + 1].pHandle;
  v17.M[0][0] = v7;
  v8 = *((float *)&pHeader[v6].pHandle + 1);
  *(_QWORD *)&v17.M[0][1] = *(Scaleform::Render::MatrixPoolImpl::EntryHandle **)((char *)&pHeader[v6].pHandle + 4);
  v17.M[0][3] = *(float *)&pHeader[v6].DataPageOffset;
  v9 = *(float *)&pHeader[v6 + 1].pHandle;
  v17.M[1][0] = v9;
  v10 = *((float *)&pHeader[v6 + 1].pHandle + 1);
  *(_QWORD *)&v17.M[1][1] = *(Scaleform::Render::MatrixPoolImpl::EntryHandle **)((char *)&pHeader[v6 + 1].pHandle + 4);
  v17.M[1][3] = *(float *)&pHeader[v6 + 1].DataPageOffset;
  if ( (pHandle->pHeader->Format & 0x10) == 0 )
    return fmaxf(
             0.0000000099999999,
             COERCE_DOUBLE(COERCE_UNSIGNED_INT64(
                             Scaleform::Render::Math2D::LinePointDistance(
                               0.0,
                               0.0,
                               (float)(v8 * 0.0) + v7,
                               (float)(v10 * 0.0) + v9,
                               (float)(v7 * 0.0) + v8,
                               (float)(v9 * 0.0) + v10)) & _xmm));
  Height = (float)vp->Height;
  Width = (float)vp->Width;
  bounds = (Scaleform::Render::Rect<float>)_xmm;
  Scaleform::Render::Matrix4x4<float>::TransformHomogeneousAndScaleCorners(
    (Scaleform::Render::Matrix4x4<float> *)m4,
    &bounds,
    Width,
    Height,
    dst);
  v15 = 1065353216;
  v16 = 1065353216;
  *(_OWORD *)src = _xmm;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&v17, src, dst);
  return fmaxf(
           0.0000099999997,
           sqrtf(
             fmaxf(
               (float)(v17.M[0][0] * v17.M[0][0]) + (float)(v17.M[1][0] * v17.M[1][0]),
               (float)(v17.M[0][1] * v17.M[0][1]) + (float)(v17.M[1][1] * v17.M[1][1]))));
}

char __fastcall Scaleform::Render::TextMeshProvider::clipGlyphRect(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::Rect<float> *chr,
        Scaleform::Render::Rect<float> *tex)
{
  float y2; // xmm9_4
  float y1; // xmm7_4
  float v5; // xmm2_4
  float x1; // xmm12_4
  float v7; // xmm14_4
  float v8; // xmm5_4
  float x2; // xmm11_4
  float v10; // xmm3_4
  float v11; // xmm0_4
  float v12; // xmm4_4
  float v13; // xmm1_4
  float v14; // xmm6_4
  float v15; // xmm6_4
  float v16; // xmm10_4
  float v17; // xmm13_4
  float v18; // xmm7_4
  float v19; // xmm15_4
  float v20; // xmm8_4
  float v22; // eax

  if ( (this->Flags & 8) == 0 )
    return 1;
  y2 = chr->y2;
  y1 = this->ClipBox.y1;
  v5 = y2;
  x1 = chr->x1;
  v7 = chr->y1;
  v8 = chr->x1;
  x2 = chr->x2;
  v10 = v7;
  v11 = this->ClipBox.x1;
  v12 = x2;
  v13 = this->ClipBox.x2;
  v14 = this->ClipBox.y2;
  if ( y2 >= y1 && v14 >= v7 && v13 >= v8 && x2 >= v11 )
  {
    if ( v8 <= v11 )
      v8 = this->ClipBox.x1;
    if ( x2 > v13 )
      v12 = this->ClipBox.x2;
    if ( v7 <= y1 )
      v10 = this->ClipBox.y1;
    if ( y2 > v14 )
      v5 = this->ClipBox.y2;
    if ( v8 < v12 && v10 < v5 )
    {
      if ( v8 != x1 || v12 != x2 || v10 != v7 || v5 != y2 )
      {
        v15 = tex->y2;
        v16 = tex->x2;
        v17 = tex->x1;
        v18 = tex->x1;
        v19 = tex->y1;
        v20 = v19;
        if ( x1 != v8 )
          v18 = (float)((float)((float)(v16 - v17) * (float)(v8 - x1)) / (float)(x2 - x1)) + v17;
        if ( v7 != v10 )
          v20 = (float)((float)((float)(v15 - v19) * (float)(v10 - v7)) / (float)(y2 - v7)) + v19;
        if ( x2 != v12 )
          v16 = v16 - (float)((float)((float)(x2 - v12) * (float)(v16 - v17)) / (float)(x2 - x1));
        if ( y2 != v5 )
          v15 = v15 - (float)((float)((float)(y2 - v5) * (float)(v15 - v19)) / (float)(y2 - v7));
        chr->x1 = v8;
        chr->y1 = v10;
        chr->x2 = v12;
        chr->y2 = v5;
        tex->y1 = v20;
        tex->x2 = v16;
        tex->x1 = v18;
        tex->y2 = v15;
      }
      return 1;
    }
  }
  v22 = this->ClipBox.x1;
  chr->x1 = v22;
  chr->x2 = v22;
  chr->y1 = y1;
  chr->y2 = y1;
  tex->x2 = tex->x1;
  tex->y2 = tex->y1;
  return 0;
}

void __fastcall Scaleform::Render::TextMeshProvider::createVectorGlyph(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::HAL *hal,
        unsigned int layerIdx,
        const Scaleform::Render::MatrixPoolImpl::HMatrix *m,
        unsigned int meshGenFlags)
{
  Scaleform::Render::TextMeshProvider *fauxItalic; // rdi
  __int64 Start; // rax
  Scaleform::Render::TextMeshEntry *v9; // r15
  Scaleform::Render::GlyphCache *pCache; // rcx
  unsigned __int16 Flags; // ax
  unsigned int GlyphIndex; // ebx
  bool fauxBold; // r14
  Scaleform::Render::ToleranceParams *ToleranceParams; // rax
  Scaleform::Render::VectorGlyphShape *v15; // rbx
  float v16; // xmm6_4
  Scaleform::Render::TextMeshLayer *v17; // r14
  unsigned int v18; // esi
  Scaleform::Render::ToleranceParams *v19; // rdi
  Scaleform::Render::MeshKeyManager *v20; // rax
  Scaleform::Render::MeshKey *MatchingKey; // rax
  Scaleform::Render::MeshKey *pObject; // rcx
  Scaleform::Render::MeshKey *v23; // rdi
  Scaleform::Render::MeshProvider *v24; // rdi
  Scaleform::Render::VectorGlyphShape *v25; // rcx
  Scaleform::Render::MeshKey *v26; // rax
  Scaleform::Render::Mesh *v27; // rax
  Scaleform::Render::MeshBase *v28; // rsi
  Scaleform::Render::MeshBase *v29; // rax
  Scaleform::Render::MeshKey *v30; // rbx
  Scaleform::RefCountVImpl *v31; // rcx
  Scaleform::Render::MeshKey *v32; // rax
  Scaleform::Render::Mesh *v33; // rbx
  Scaleform::RefCountVImpl *v34; // rcx
  Scaleform::Render::TextMeshLayer *layer; // [rsp+60h] [rbp-A8h] BYREF
  Scaleform::Render::TextMeshProvider *v36; // [rsp+68h] [rbp-A0h]
  unsigned __int16 v37; // [rsp+7Ch] [rbp-8Ch]
  Scaleform::Render::GlyphRunData data; // [rsp+88h] [rbp-80h] BYREF
  Scaleform::Render::Matrix2x4<float> scalingMtx; // [rsp+188h] [rbp+80h] BYREF
  float keyData[20]; // [rsp+1A8h] [rbp+A0h] BYREF

  fauxItalic = this;
  v36 = this;
  layer = &this->Layers.Data.Data[(unsigned __int64)layerIdx];
  Start = layer->Start;
  data.Bounds = 0i64;
  data.GlyphBounds = 0i64;
  v9 = &this->Entries.Data.Data[Start];
  data.Param.TextParam.pFont = 0i64;
  pCache = this->pCache;
  *(_QWORD *)&data.Param.TextParam.GlyphIndex = 0i64;
  *(_DWORD *)&data.Param.TextParam.BlurY = 0x100000;
  data.Param.ShadowParam.pFont = 0i64;
  *(_QWORD *)&data.Param.ShadowParam.GlyphIndex = 0i64;
  *(_DWORD *)&data.Param.ShadowParam.BlurY = 0x100000;
  *(_QWORD *)&data.Param.ShadowColor = 0i64;
  data.Param.ShadowOffsetY = 0.0;
  *(_OWORD *)&data.DirMtx.M[0][0] = _xmm;
  *(_OWORD *)&data.DirMtx.M[1][0] = _xmm;
  *(_OWORD *)&data.InvMtx.M[0][0] = _xmm;
  *(_OWORD *)&data.InvMtx.M[1][0] = _xmm;
  data.pFont = v9->EntryData.VectorData.pFont;
  data.pFontHandle = Scaleform::Render::GlyphCache::RegisterFont(pCache, data.pFont);
  data.FontSize = v9->EntryData.RasterData.Coord[3];
  memset(&data.VectorSize, 0, 20);
  data.mColor = v9->mColor;
  LODWORD(data.NewLineX) = v9->EntryData.BackgroundData.BorderColor;
  data.NewLineY = v9->EntryData.VectorData.y;
  data.HeightRatio = fauxItalic->HeightRatio;
  data.GlyphBounds = 0i64;
  data.HintedNomHeight = 0;
  Flags = v9->EntryData.VectorData.Flags;
  GlyphIndex = v9->EntryData.VectorData.GlyphIndex;
  LOBYTE(fauxItalic) = (Flags & 0x10) != 0;
  v37 = Flags;
  fauxBold = (Flags & 8) != 0;
  ToleranceParams = Scaleform::Render::HAL::GetToleranceParams(hal);
  v15 = Scaleform::Render::GlyphCache::CreateGlyphShape(
          v36->pCache,
          &data,
          ToleranceParams,
          GlyphIndex,
          0.0,
          fauxBold,
          (bool)fauxItalic,
          v37 >> 12,
          1);
  v16 = data.FontSize / data.NomHeight;
  v17 = layer;
  data.HintedNomHeight = v15->pShape.pObject->HintedSize;
  *(_OWORD *)&scalingMtx.M[0][1] = 0ui64;
  *(_QWORD *)&scalingMtx.M[1][2] = 0i64;
  scalingMtx.M[0][0] = (float)(data.FontSize / data.NomHeight) * v36->HeightRatio;
  scalingMtx.M[1][1] = scalingMtx.M[0][0];
  v18 = Scaleform::Render::TextMeshProvider::CalcVectorParams(
          hal,
          layer,
          v9,
          &scalingMtx,
          data.FontSize / data.NomHeight,
          m,
          meshGenFlags,
          keyData);
  v19 = Scaleform::Render::HAL::GetToleranceParams(hal);
  v20 = hal->GetMeshKeyManager(hal);
  MatchingKey = Scaleform::Render::MeshKeyManager::CreateMatchingKey(v20, v15, 0, v18, keyData, v19);
  pObject = layer->pMeshKey.pObject;
  v23 = MatchingKey;
  if ( pObject )
    Scaleform::Render::MeshKey::Release(pObject);
  layer->pMeshKey.pObject = v23;
  v24 = &v15->Scaleform::Render::MeshProvider;
  v15->AddRef(&v15->Scaleform::Render::MeshProvider);
  v25 = v17->pShape.pObject;
  if ( v25 )
    v25->Release(&v25->Scaleform::Render::MeshProvider);
  v17->pShape.pObject = v15;
  v26 = v17->pMeshKey.pObject;
  v17->SizeScale = v16;
  if ( !v26->pMesh.pObject )
  {
    LODWORD(layer) = 68;
    v27 = (Scaleform::Render::Mesh *)Scaleform::Memory::pGlobalHeap->AllocAutoHeap(
                                       Scaleform::Memory::pGlobalHeap,
                                       v36,
                                       224i64,
                                       &layer);
    v28 = 0i64;
    if ( v27 )
    {
      Scaleform::Render::Mesh::Mesh(v27, v17->pMeshKey.pObject->pKeySet, &scalingMtx, 0.0, 0, meshGenFlags);
      v28 = v29;
    }
    v30 = v17->pMeshKey.pObject;
    v31 = (Scaleform::RefCountVImpl *)v30->pMesh.pObject;
    if ( v31 )
      Scaleform::RefCountImpl::Release(v31);
    v30->pMesh.pObject = v28;
  }
  v32 = v17->pMeshKey.pObject;
  v33 = (Scaleform::Render::Mesh *)v32->pMesh.pObject;
  if ( v33 )
    Scaleform::Render::RenderBuffer::AddRef((Scaleform::RefCountVImpl *)v32->pMesh.pObject);
  v34 = (Scaleform::RefCountVImpl *)v17->pMesh.pObject;
  if ( v34 )
    Scaleform::RefCountImpl::Release(v34);
  v17->pMesh.pObject = v33;
  v24->Release(v24);
}

__int64 __fastcall Scaleform::Render::TextMeshProvider::generateImageMesh(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::VertexOutput *verOut,
        const Scaleform::Render::TextMeshLayer *layer)
{
  __int64 Start; // rax
  Scaleform::Render::TextMeshEntry *Data; // rbx
  Scaleform::Render::GlyphCache *pCache; // r8
  __int64 v8; // rdi
  float v9; // xmm9_4
  float v10; // xmm8_4
  float v11; // xmm4_4
  float v12; // xmm3_4
  float v13; // xmm2_4
  float v14; // xmm1_4
  Scaleform::Render::VertexOutput_vtbl *v15; // rax
  __int64 result; // rax
  Scaleform::Render::Rect<float> chr; // [rsp+38h] [rbp-D0h] BYREF
  Scaleform::Render::Rect<float> tex; // [rsp+48h] [rbp-C0h] BYREF
  __int64 v19[4]; // [rsp+58h] [rbp-B0h] BYREF
  float v20; // [rsp+78h] [rbp-90h] BYREF
  float v21; // [rsp+7Ch] [rbp-8Ch]
  float v22; // [rsp+84h] [rbp-84h]
  float v23; // [rsp+88h] [rbp-80h]
  float v24; // [rsp+8Ch] [rbp-7Ch]
  float v25; // [rsp+94h] [rbp-74h]
  __int64 v26[2]; // [rsp+98h] [rbp-70h] BYREF
  float x2; // [rsp+A8h] [rbp-60h]
  float v28; // [rsp+ACh] [rbp-5Ch]
  float v29; // [rsp+B0h] [rbp-58h]
  float y1; // [rsp+B4h] [rbp-54h]
  float v31; // [rsp+B8h] [rbp-50h]
  float y2; // [rsp+BCh] [rbp-4Ch]
  float v33; // [rsp+C0h] [rbp-48h]
  float v34; // [rsp+C4h] [rbp-44h]
  float x1; // [rsp+C8h] [rbp-40h]
  float v36; // [rsp+CCh] [rbp-3Ch]
  float v37; // [rsp+D0h] [rbp-38h]
  float v38; // [rsp+D4h] [rbp-34h]
  int v39[4]; // [rsp+E8h] [rbp-20h] BYREF

  v39[0] = 0x10000;
  v39[1] = 2;
  v39[2] = 196610;
  v19[1] = (__int64)&Scaleform::Render::ImageGlyphVertex::Format;
  Start = layer->Start;
  Data = this->Entries.Data.Data;
  pCache = this->pCache;
  v19[0] = 0x600000004i64;
  v8 = Start;
  v19[2] = 0i64;
  v19[3] = 0i64;
  ((void (__fastcall *)(const Scaleform::Render::GlyphNode *, float *, Scaleform::Render::TextureManager *))Data[Start].EntryData.RasterData.pGlyph->Param.pFont[5].pFont)(
    Data[Start].EntryData.RasterData.pGlyph,
    &v20,
    pCache->pTexMan);
  v9 = Data[v8].EntryData.RasterData.Coord[2] - Data[v8].EntryData.RasterData.Coord[0];
  v10 = Data[v8].EntryData.RasterData.Coord[3] - Data[v8].EntryData.RasterData.Coord[1];
  v11 = (float)((float)((float)(v20 * 0.0) + (float)(v21 * 0.0)) + v22) + Data[v8].EntryData.RasterData.Coord[0];
  tex.x1 = (float)((float)(v20 * 0.0) + (float)(v21 * 0.0)) + v22;
  chr.x1 = v11;
  tex.y1 = (float)((float)(v23 * 0.0) + (float)(v24 * 0.0)) + v25;
  v12 = tex.y1 + Data[v8].EntryData.RasterData.Coord[1];
  tex.y2 = (float)(v23 + v24) + v25;
  v13 = (float)((float)((float)(v21 * v10) + (float)(v20 * v9)) + v22) + Data[v8].EntryData.RasterData.Coord[0];
  chr.y1 = v12;
  chr.x2 = v13;
  v14 = (float)((float)((float)(v23 * v9) + (float)(v24 * v10)) + v25) + Data[v8].EntryData.RasterData.Coord[1];
  tex.x2 = (float)(v20 + v21) + v22;
  chr.y2 = v14;
  Scaleform::Render::TextMeshProvider::clipGlyphRect(this, &chr, &tex);
  v26[0] = *(_QWORD *)&chr.x1;
  v15 = verOut->__vftable;
  x2 = chr.x2;
  y1 = tex.y1;
  v31 = chr.x2;
  v28 = chr.y1;
  y2 = chr.y2;
  v34 = tex.y2;
  v36 = chr.y2;
  v38 = tex.y2;
  v26[1] = *(_QWORD *)&tex.x1;
  v29 = tex.x2;
  v33 = tex.x2;
  x1 = chr.x1;
  v37 = tex.x1;
  result = ((__int64 (__fastcall *)(Scaleform::Render::VertexOutput *, __int64 *, __int64, char *))v15->BeginOutput)(
             verOut,
             v19,
             1i64,
             &extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
  if ( (_BYTE)result )
  {
    verOut->SetVertices(verOut, 0, 0, v26, 4u);
    verOut->SetIndices(verOut, 0, 0, (unsigned __int16 *)v39, 6u);
    verOut->EndOutput(verOut);
    return 1i64;
  }
  return result;
}

char __fastcall Scaleform::Render::TextMeshProvider::generateMask(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::VertexOutput *verOut,
        const Scaleform::Render::TextMeshLayer *layer)
{
  __int64 Start; // rax
  __int64 v5; // rdx
  Scaleform::Render::TextMeshEntry *Data; // rax
  float v7; // xmm3_4
  float v8; // xmm2_4
  float v9; // xmm0_4
  Scaleform::Render::VertexOutput_vtbl *v10; // rax
  char result; // al
  float dst[6]; // [rsp+30h] [rbp-49h] BYREF
  int v13[2]; // [rsp+48h] [rbp-31h] BYREF
  Scaleform::Render::VertexFormat *v14; // [rsp+50h] [rbp-29h]
  __int64 v15; // [rsp+58h] [rbp-21h]
  __int64 v16; // [rsp+60h] [rbp-19h]
  float src[4]; // [rsp+68h] [rbp-11h] BYREF
  int v18; // [rsp+78h] [rbp-1h]
  int v19; // [rsp+7Ch] [rbp+3h]
  Scaleform::Render::Matrix2x4<float> v20; // [rsp+80h] [rbp+7h] BYREF
  __m128i si128; // [rsp+A0h] [rbp+27h] BYREF
  int v22[4]; // [rsp+B0h] [rbp+37h] BYREF

  Start = layer->Start;
  *(_OWORD *)&v20.M[0][0] = _xmm;
  v5 = Start;
  Data = this->Entries.Data.Data;
  *(_OWORD *)&v20.M[1][0] = _xmm;
  *(_OWORD *)src = _xmm_c6fff80046fff800c6fff800c6fff800;
  v18 = 1191180288;
  v7 = Data[v5].EntryData.RasterData.Coord[2];
  v8 = Data[v5].EntryData.RasterData.Coord[1];
  v9 = Data[v5].EntryData.RasterData.Coord[3];
  dst[0] = Data[v5].EntryData.RasterData.Coord[0];
  dst[1] = v8;
  dst[2] = v7;
  dst[3] = v8;
  dst[4] = v7;
  dst[5] = v9;
  v19 = 1191180288;
  Scaleform::Render::Matrix2x4<float>::SetParlToParl(&v20, src, dst);
  v14 = &Scaleform::Render::VertexXY16i::Format;
  v10 = verOut->__vftable;
  v15 = 0i64;
  v16 = 0i64;
  v22[0] = 0x10000;
  v22[1] = 2;
  si128 = _mm_load_si128((const __m128i *)&_xmm);
  v22[2] = 196610;
  v13[0] = 4;
  v13[1] = 6;
  result = v10->BeginOutput(verOut, (const Scaleform::Render::VertexOutput::Fill *)v13, 1u, &v20);
  if ( result )
  {
    verOut->SetVertices(verOut, 0, 0, &si128, 4u);
    verOut->SetIndices(verOut, 0, 0, (unsigned __int16 *)v22, 6u);
    verOut->EndOutput(verOut);
    return 1;
  }
  return result;
}

char __fastcall Scaleform::Render::VectorGlyphShape::generateNullVectorMesh(
        Scaleform::Render::VectorGlyphShape *this,
        Scaleform::Render::VertexOutput *verOut)
{
  Scaleform::Render::VertexOutput_vtbl *v3; // rax
  char result; // al
  int v5[2]; // [rsp+30h] [rbp-48h] BYREF
  Scaleform::Render::VertexFormat *v6; // [rsp+38h] [rbp-40h]
  __int64 v7; // [rsp+40h] [rbp-38h]
  __int64 v8; // [rsp+48h] [rbp-30h]
  __int64 v9; // [rsp+50h] [rbp-28h] BYREF
  __int16 v10; // [rsp+58h] [rbp-20h]
  __int16 v11; // [rsp+60h] [rbp-18h] BYREF
  int v12; // [rsp+62h] [rbp-16h]

  v5[0] = 1;
  v9 = 0i64;
  v10 = 0;
  v6 = &Scaleform::Render::VertexXY16iCF32::Format;
  v3 = verOut->__vftable;
  v12 = 0;
  v11 = 0;
  v7 = 0i64;
  v8 = 0i64;
  v5[1] = 3;
  result = v3->BeginOutput(
             verOut,
             (const Scaleform::Render::VertexOutput::Fill *)v5,
             1u,
             (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
  if ( result )
  {
    verOut->SetVertices(verOut, 0, 0, &v9, 1u);
    verOut->SetIndices(verOut, 0, 0, (unsigned __int16 *)&v11, 3u);
    verOut->EndOutput(verOut);
    return 1;
  }
  return result;
}

bool __fastcall Scaleform::Render::TextMeshProvider::generatePackedMesh(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::VertexOutput *verOut,
        const Scaleform::Render::TextMeshLayer *layer)
{
  Scaleform::Render::VectorGlyphShape *v3; // r14
  __int64 v4; // rcx
  int *v6; // rax
  unsigned int v7; // esi
  unsigned int Count; // er12
  __int64 Start; // rax
  __int64 v10; // rcx
  bool v11; // zf
  const Scaleform::Render::VertexOutput::Fill *v12; // rdx
  bool v13; // r13
  bool result; // al
  unsigned int v15; // ebx
  int v16; // er15
  int v17; // er14
  unsigned int v18; // er12
  int *v19; // r9
  __int64 v20; // r13
  Scaleform::Render::TextMeshEntry *Data; // rcx
  __int64 v22; // rax
  __int64 v23; // rsi
  Scaleform::Render::Rect<float> v24; // xmm0
  int x1_low; // xmm4_4
  int y1_low; // xmm1_4
  int v27; // xmm3_4
  int v28; // xmm2_4
  int x2_low; // xmm0_4
  int v30; // edx
  __int64 v31; // rcx
  __int64 v32; // rax
  int v33; // xmm1_4
  int y2_low; // xmm2_4
  __int64 v35; // rax
  float y2; // xmm0_4
  __int64 v37; // rax
  __int64 v38; // rcx
  __int64 v39; // rax
  int v40; // xmm1_4
  int v41; // xmm2_4
  __int64 v42; // rcx
  float v43; // xmm0_4
  __int64 v44; // rcx
  __int64 v45; // rax
  int *v46; // r9
  bool v47; // [rsp+30h] [rbp-D0h]
  Scaleform::Render::Rect<float> chr; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Rect<float> tex; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v50; // [rsp+60h] [rbp-A0h]
  int mColor; // [rsp+64h] [rbp-9Ch]
  unsigned int v52; // [rsp+68h] [rbp-98h]
  Scaleform::Render::TextMeshProvider *v53; // [rsp+70h] [rbp-90h]
  const Scaleform::Render::TextMeshLayer *v54; // [rsp+78h] [rbp-88h]
  int v55[2]; // [rsp+80h] [rbp-80h] BYREF
  Scaleform::Render::VertexFormat *v56; // [rsp+88h] [rbp-78h]
  __int64 v57; // [rsp+90h] [rbp-70h]
  __int64 v58; // [rsp+98h] [rbp-68h]
  int v59[2]; // [rsp+A0h] [rbp-60h] BYREF
  Scaleform::Render::VertexFormat *v60; // [rsp+A8h] [rbp-58h]
  __int64 v61; // [rsp+B0h] [rbp-50h]
  __int64 v62; // [rsp+B8h] [rbp-48h]
  int v63[1024]; // [rsp+C0h] [rbp-40h] BYREF
  int v64[2]; // [rsp+10C0h] [rbp+FC0h] BYREF
  int v65[1278]; // [rsp+10C8h] [rbp+FC8h] BYREF
  __int16 v66[384]; // [rsp+24C0h] [rbp+23C0h] BYREF

  v3 = (Scaleform::Render::VectorGlyphShape *)this;
  v53 = this;
  v4 = 256i64;
  v54 = layer;
  v6 = v65;
  v7 = 0;
  do
  {
    *((_QWORD *)v6 - 1) = 0i64;
    *(_QWORD *)v6 = 0i64;
    v6[2] = 0;
    v6 += 5;
    --v4;
  }
  while ( v4 );
  Count = layer->Count;
  v56 = &Scaleform::Render::RasterGlyphVertex::Format;
  v57 = 0i64;
  v58 = 0i64;
  v61 = 0i64;
  v55[0] = 4 * Count;
  v59[0] = 4 * Count;
  v55[1] = 6 * Count;
  v59[1] = 6 * Count;
  v60 = &Scaleform::Render::ImageGlyphVertex::Format;
  Start = layer->Start;
  v62 = 0i64;
  v52 = Count;
  v10 = *(_QWORD *)(*((_QWORD *)&v3->pShape.pObject->Decoder.OneOverMultiplier + 5 * Start) + 16i64);
  v11 = (*(unsigned int (__fastcall **)(__int64))(*(_QWORD *)v10 + 32i64))(v10) == 9;
  v12 = (const Scaleform::Render::VertexOutput::Fill *)v55;
  v13 = v11;
  v47 = v11;
  if ( !v11 )
    v12 = (const Scaleform::Render::VertexOutput::Fill *)v59;
  result = verOut->BeginOutput(
             verOut,
             v12,
             1u,
             (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
  if ( result )
  {
    v15 = 0;
    v16 = 0;
    v50 = 0;
    if ( Count )
    {
      v17 = 0;
      v18 = 0;
      while ( 1 )
      {
        if ( v15 >= 0x40 )
        {
          v19 = v64;
          if ( !v13 )
            v19 = v63;
          verOut->SetVertices(verOut, 0, 4 * v16, v19, 256u);
          verOut->SetIndices(verOut, 0, v18, (unsigned __int16 *)v66, 384u);
          v15 = 0;
          v16 += 64;
          v18 += 384;
        }
        v20 = 4 * v15;
        Data = v53->Entries.Data.Data;
        v22 = v7 + v54->Start;
        v23 = 6 * v15;
        v24 = *(Scaleform::Render::Rect<float> *)&Data[v22].EntryData.RasterData.pGlyph->pNext;
        mColor = Data[v22].mColor;
        tex = v24;
        chr = *(Scaleform::Render::Rect<float> *)Data[v22].EntryData.RasterData.Coord;
        Scaleform::Render::TextMeshProvider::clipGlyphRect(v53, &chr, &tex);
        x1_low = LODWORD(chr.x1);
        y1_low = LODWORD(chr.y1);
        v27 = LODWORD(tex.x1);
        v28 = LODWORD(tex.y1);
        x2_low = LODWORD(chr.x2);
        if ( v47 )
        {
          v30 = mColor;
          v31 = 5 * v20;
          v32 = 5i64 * (unsigned int)(v20 + 1);
          v64[v31 + 1] = LODWORD(chr.y1);
          v65[v31 + 2] = v28;
          v64[v31] = x1_low;
          v65[v31 + 1] = v27;
          v65[v31] = v30;
          v64[v32 + 1] = y1_low;
          v33 = LODWORD(tex.x2);
          v64[v32] = x2_low;
          v65[v32 + 2] = v28;
          y2_low = LODWORD(chr.y2);
          v65[v32 + 1] = v33;
          v65[v32] = v30;
          v35 = 5i64 * (unsigned int)(v20 + 2);
          v64[v35] = x2_low;
          y2 = tex.y2;
          v65[v35 + 2] = LODWORD(tex.y2);
          v64[v35 + 1] = y2_low;
          v65[v35 + 1] = v33;
          v65[v35] = v30;
          v37 = 5i64 * (unsigned int)(v20 + 3);
          v64[v37] = x1_low;
          v64[v37 + 1] = y2_low;
          v65[v37 + 1] = v27;
          *(float *)&v65[v37 + 2] = y2;
          v65[v37] = v30;
        }
        else
        {
          v38 = 2i64 * (unsigned int)(v20 + 1);
          v39 = 2i64 * (unsigned int)v20;
          v63[2 * v39 + 1] = LODWORD(chr.y1);
          v63[2 * v39 + 3] = v28;
          v63[2 * v39] = x1_low;
          v63[2 * v39 + 2] = v27;
          v63[2 * v38 + 1] = y1_low;
          v40 = LODWORD(tex.x2);
          v63[2 * v38] = x2_low;
          v63[2 * v38 + 3] = v28;
          v41 = LODWORD(chr.y2);
          v63[2 * v38 + 2] = v40;
          v42 = 2i64 * (unsigned int)(v20 + 2);
          v63[2 * v42] = x2_low;
          v43 = tex.y2;
          v63[2 * v42 + 3] = LODWORD(tex.y2);
          v63[2 * v42 + 1] = v41;
          v63[2 * v42 + 2] = v40;
          v44 = 2i64 * (unsigned int)(v20 + 3);
          v63[2 * v44] = x1_low;
          v63[2 * v44 + 1] = v41;
          v63[2 * v44 + 2] = v27;
          *(float *)&v63[2 * v44 + 3] = v43;
        }
        v66[v23] = v17;
        ++v15;
        v66[(unsigned int)(v23 + 1)] = v17 + 1;
        v66[(unsigned int)(v23 + 2)] = v17 + 2;
        v66[(unsigned int)(v23 + 3)] = v17 + 2;
        v66[(unsigned int)(v23 + 4)] = v17 + 3;
        v45 = (unsigned int)(v23 + 5);
        v7 = v50 + 1;
        v66[v45] = v17;
        v17 += 4;
        v50 = v7;
        if ( v7 >= v52 )
          break;
        v13 = v47;
      }
      if ( v15 )
      {
        v46 = v64;
        if ( !v47 )
          v46 = v63;
        verOut->SetVertices(verOut, 0, 4 * v16, v46, 4 * v15);
        verOut->SetIndices(verOut, 0, 6 * v16, (unsigned __int16 *)v66, 6 * v15);
        goto LABEL_23;
      }
      v3 = (Scaleform::Render::VectorGlyphShape *)v53;
    }
    Scaleform::Render::VectorGlyphShape::generateNullVectorMesh(v3, verOut);
LABEL_23:
    verOut->EndOutput(verOut);
    return 1;
  }
  return result;
}

char __fastcall Scaleform::Render::TextMeshProvider::generateRasterMesh(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::VertexOutput *verOut,
        const Scaleform::Render::TextMeshLayer *layer)
{
  Scaleform::Render::VectorGlyphShape *v3; // rdi
  __int64 v4; // rcx
  const Scaleform::Render::TextMeshLayer *v5; // rsi
  int *v6; // rax
  unsigned int v8; // er13
  unsigned int Count; // ebx
  Scaleform::Render::MeshKeyManager *volatile Value; // rax
  float v11; // xmm6_4
  float v12; // xmm7_4
  char result; // al
  unsigned int v14; // er12
  int v15; // er15
  Scaleform::Render::GlyphShape *pObject; // rax
  __int64 v17; // rbx
  __int64 v18; // rcx
  __int64 v19; // rsi
  unsigned __int16 *v20; // rdx
  int v21; // edi
  float v22; // xmm2_4
  __m128i v23; // xmm0
  float y1; // xmm1_4
  __int64 v25; // rcx
  int y1_low; // xmm2_4
  int x1_low; // xmm4_4
  __int64 v28; // rax
  int v29; // xmm3_4
  int x2_low; // xmm1_4
  int y2_low; // xmm2_4
  __int64 v32; // rax
  __int64 v33; // rax
  __int64 v34; // rax
  unsigned int v35; // [rsp+30h] [rbp-D0h]
  int v36; // [rsp+34h] [rbp-CCh]
  Scaleform::Render::Rect<float> chr; // [rsp+40h] [rbp-C0h] BYREF
  Scaleform::Render::Rect<float> tex; // [rsp+50h] [rbp-B0h] BYREF
  unsigned int v39; // [rsp+60h] [rbp-A0h]
  Scaleform::Render::TextMeshProvider *v40; // [rsp+68h] [rbp-98h]
  const Scaleform::Render::TextMeshLayer *v41; // [rsp+70h] [rbp-90h]
  int v42[2]; // [rsp+78h] [rbp-88h] BYREF
  Scaleform::Render::VertexFormat *v43; // [rsp+80h] [rbp-80h]
  __int64 v44; // [rsp+88h] [rbp-78h]
  __int64 v45; // [rsp+90h] [rbp-70h]
  int v46[2]; // [rsp+A0h] [rbp-60h] BYREF
  int v47[1278]; // [rsp+A8h] [rbp-58h] BYREF
  __int16 v48[384]; // [rsp+14A0h] [rbp+13A0h] BYREF

  v3 = (Scaleform::Render::VectorGlyphShape *)this;
  v40 = this;
  v4 = 256i64;
  v41 = layer;
  v5 = layer;
  v6 = v47;
  v8 = 0;
  do
  {
    *((_QWORD *)v6 - 1) = 0i64;
    *(_QWORD *)v6 = 0i64;
    v6[2] = 0;
    v6 += 5;
    --v4;
  }
  while ( v4 );
  Count = layer->Count;
  v44 = 0i64;
  v45 = 0i64;
  v39 = Count;
  v42[0] = 4 * Count;
  v42[1] = 6 * Count;
  v43 = &Scaleform::Render::RasterGlyphVertex::Format;
  Value = v3->hKeySet.pManager.Value;
  v11 = *(float *)&Value[1].KeySetLock.csBuf[12];
  v12 = *(float *)&Value[1].KeySetLock.csBuf[16];
  result = verOut->BeginOutput(
             verOut,
             (const Scaleform::Render::VertexOutput::Fill *)v42,
             1u,
             (const Scaleform::Render::Matrix2x4<float> *)&extension::gfxi_detail::_exchange_table_generic_gamepad_buttons.m_exchangedUserDataChange[7][152]);
  if ( result )
  {
    v14 = 0;
    v15 = 0;
    v35 = 0;
    if ( !Count )
      return Scaleform::Render::VectorGlyphShape::generateNullVectorMesh(v3, verOut);
    v36 = 0;
    do
    {
      if ( v14 >= 0x40 )
      {
        verOut->SetVertices(verOut, 0, 4 * v15, v46, 256u);
        verOut->SetIndices(verOut, 0, v8, (unsigned __int16 *)v48, 384u);
        v14 = 0;
        v15 += 64;
        v8 += 384;
      }
      pObject = v3->pShape.pObject;
      v17 = 4 * v14;
      v18 = v5->Start + v35;
      v19 = 6 * v14;
      v18 *= 5i64;
      v20 = (unsigned __int16 *)*((_QWORD *)&pObject->Decoder.OneOverMultiplier + v18);
      v21 = *((_DWORD *)&pObject->__vftable + 2 * v18 + 1);
      chr = *(Scaleform::Render::Rect<float> *)(&pObject->pContainer + v18);
      v22 = (float)(v20[25] + 1);
      v23 = _mm_cvtsi32_si128((unsigned int)v20[26] - 2);
      LODWORD(pObject) = v20[27];
      tex.x1 = (float)(v20[24] + 1) * v11;
      tex.y1 = v22 * v12;
      tex.x2 = (float)(_mm_cvtepi32_ps(v23).m128_f32[0] * v11) + tex.x1;
      tex.y2 = (float)((float)((int)pObject - 2) * v12) + (float)(v22 * v12);
      Scaleform::Render::TextMeshProvider::clipGlyphRect(v40, &chr, &tex);
      y1 = chr.y1;
      v25 = 5 * v17;
      y1_low = LODWORD(tex.y1);
      v23.m128i_i32[0] = LODWORD(chr.x2);
      x1_low = LODWORD(chr.x1);
      v28 = 5i64 * (unsigned int)(v17 + 1);
      v29 = LODWORD(tex.x1);
      v46[v25 + 1] = LODWORD(chr.y1);
      v47[v25 + 2] = y1_low;
      v46[v25] = x1_low;
      v47[v25 + 1] = v29;
      v47[v25] = v21;
      *(float *)&v46[v28 + 1] = y1;
      x2_low = LODWORD(tex.x2);
      v46[v28] = v23.m128i_i32[0];
      v47[v28 + 2] = y1_low;
      y2_low = LODWORD(chr.y2);
      v47[v28 + 1] = x2_low;
      v47[v28] = v21;
      v32 = 5i64 * (unsigned int)(v17 + 2);
      v48[v19] = v36;
      v46[v32] = v23.m128i_i32[0];
      v23.m128i_i32[0] = LODWORD(tex.y2);
      v47[v32 + 2] = LODWORD(tex.y2);
      v46[v32 + 1] = y2_low;
      v47[v32 + 1] = x2_low;
      v47[v32] = v21;
      v33 = 5i64 * (unsigned int)(v17 + 3);
      v46[v33] = x1_low;
      v46[v33 + 1] = y2_low;
      v47[v33 + 1] = v29;
      v47[v33 + 2] = v23.m128i_i32[0];
      v47[v33] = v21;
      v48[(unsigned int)(v19 + 1)] = v36 + 1;
      v3 = (Scaleform::Render::VectorGlyphShape *)v40;
      ++v14;
      v48[(unsigned int)(v19 + 2)] = v36 + 2;
      v48[(unsigned int)(v19 + 3)] = v36 + 2;
      v48[(unsigned int)(v19 + 4)] = v36 + 3;
      v34 = (unsigned int)(v19 + 5);
      v5 = v41;
      v48[v34] = v36;
      v36 += 4;
      ++v35;
    }
    while ( v35 < v39 );
    if ( v14 )
    {
      verOut->SetVertices(verOut, 0, 4 * v15, v46, 4 * v14);
      verOut->SetIndices(verOut, 0, 6 * v15, (unsigned __int16 *)v48, 6 * v14);
      verOut->EndOutput(verOut);
      return 1;
    }
    else
    {
      return Scaleform::Render::VectorGlyphShape::generateNullVectorMesh(v3, verOut);
    }
  }
  return result;
}

char __fastcall Scaleform::Render::TextMeshProvider::generateRectangle(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::VertexOutput *verOut,
        const Scaleform::Render::Matrix2x4<float> *mtx,
        const float *coord,
        unsigned int fillColor,
        unsigned int borderColor,
        unsigned int meshGenFlags)
{
  Scaleform::Render::HAL_vtbl *v12; // rax
  Scaleform::Render::MeshGenerator *v13; // r15
  Scaleform::Render::Tessellator *p_mTess; // rdi
  Scaleform::Render::ToleranceParams *ToleranceParams; // rbx
  float v16; // xmm1_4
  __m128 v17; // xmm4
  float v18; // xmm1_4
  float v19; // xmm8_4
  float v20; // xmm2_4
  float v21; // xmm7_4
  float v22; // xmm5_4
  float v23; // xmm3_4
  __m128 v24; // xmm12
  __m128 v25; // xmm13
  __m128 v26; // xmm14
  __m128 v27; // xmm15
  __m128 v28; // xmm9
  float v29; // xmm1_4
  __m128 v30; // xmm11
  __m128 v31; // xmm6
  Scaleform::Render::CornerVertex v32; // xmm7_8
  Scaleform::Render::CornerVertex v33; // xmm8_8
  Scaleform::Render::CornerVertex v34; // xmm9_8
  Scaleform::Render::CornerVertex v35; // xmm6_8
  unsigned int v36; // eax
  bool v38; // bl
  float x; // [rsp+30h] [rbp-D0h] BYREF
  float y; // [rsp+34h] [rbp-CCh] BYREF
  Scaleform::Render::TextMeshProvider::VertexCountType verCount; // [rsp+38h] [rbp-C8h] BYREF
  unsigned int colors[2]; // [rsp+40h] [rbp-C0h] BYREF
  int v43[2]; // [rsp+48h] [rbp-B8h] BYREF
  Scaleform::Render::VertexFormat *v44; // [rsp+50h] [rbp-B0h]
  __int64 v45; // [rsp+58h] [rbp-A8h]
  __int64 v46; // [rsp+60h] [rbp-A0h]
  Scaleform::Render::Matrix2x4<float> v47; // [rsp+70h] [rbp-90h] BYREF
  char v48[32]; // [rsp+90h] [rbp-70h] BYREF

  verCount = (Scaleform::Render::TextMeshProvider::VertexCountType)coord;
  colors[0] = fillColor;
  v12 = hal->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  colors[1] = borderColor;
  v13 = v12->GetMeshGen(hal);
  Scaleform::Render::MeshGenerator::Clear(v13);
  p_mTess = &v13->mTess;
  Scaleform::Render::Tessellator::SetFillRule(&v13->mTess, FillNonZero);
  ToleranceParams = Scaleform::Render::HAL::GetToleranceParams(hal);
  Scaleform::Render::Tessellator::SetToleranceParam(&v13->mTess, ToleranceParams);
  if ( (meshGenFlags & 3) == 1 )
    v16 = ToleranceParams->EdgeAAScale * 0.5;
  else
    v16 = 0.0;
  Scaleform::Render::Tessellator::SetEdgeAAWidth(&v13->mTess, v16);
  v28 = (__m128)LODWORD(mtx->M[0][0]);
  v17 = (__m128)LODWORD(mtx->M[1][1]);
  v24 = v28;
  v18 = *(float *)(*(_QWORD *)&verCount + 4i64);
  v26 = v28;
  v19 = *(float *)verCount.VStart;
  v30 = (__m128)LODWORD(mtx->M[1][0]);
  v25 = v17;
  v20 = *(float *)(*(_QWORD *)&verCount + 8i64);
  v27 = v17;
  v21 = *(float *)(*(_QWORD *)&verCount + 12i64);
  v22 = mtx->M[0][3];
  v23 = mtx->M[1][3];
  v24.m128_f32[0] = (float)((float)(v28.m128_f32[0] * *(float *)verCount.VStart) + (float)(mtx->M[0][1] * v18)) + v22;
  v25.m128_f32[0] = (float)((float)(v17.m128_f32[0] * v18) + (float)(mtx->M[1][0] * *(float *)verCount.VStart)) + v23;
  v26.m128_f32[0] = (float)((float)(v28.m128_f32[0] * v20) + (float)(mtx->M[0][1] * v18)) + v22;
  v27.m128_f32[0] = (float)((float)(v17.m128_f32[0] * v18) + (float)(mtx->M[1][0] * v20)) + v23;
  v28.m128_f32[0] = (float)((float)(v28.m128_f32[0] * *(float *)verCount.VStart) + (float)(mtx->M[0][1] * v21)) + v22;
  v29 = (float)((float)(mtx->M[1][0] * v20) + (float)(mtx->M[1][1] * v21)) + v23;
  *(float *)&verCount.VStart = (float)((float)(mtx->M[0][0] * v20) + (float)(mtx->M[0][1] * v21)) + v22;
  v30.m128_f32[0] = (float)((float)(v30.m128_f32[0] * v19) + (float)(v17.m128_f32[0] * v21)) + v23;
  x = v29;
  if ( fillColor )
  {
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    v31 = (__m128)LODWORD(x);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    p_mTess->ClosePath(&v13->mTess);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *, _QWORD, __int64))p_mTess->FinalizePath)(
      &v13->mTess,
      0i64,
      1i64);
  }
  else
  {
    v31 = (__m128)LODWORD(x);
  }
  if ( borderColor )
  {
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    p_mTess->ClosePath(&v13->mTess);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *, _QWORD, __int64))p_mTess->FinalizePath)(
      &v13->mTess,
      0i64,
      2i64);
    v32 = (Scaleform::Render::CornerVertex)_mm_unpacklo_ps(v28, v30).m128_u64[0];
    v33 = (Scaleform::Render::CornerVertex)_mm_unpacklo_ps(v26, v27).m128_u64[0];
    v34 = (Scaleform::Render::CornerVertex)_mm_unpacklo_ps(v24, v25).m128_u64[0];
    Scaleform::Render::calcMiter_Scaleform::Render::CornerVertex_(v33, v34, v32, 1.0, &x, &y);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    v35 = (Scaleform::Render::CornerVertex)_mm_unpacklo_ps((__m128)verCount.VStart, v31).m128_u64[0];
    Scaleform::Render::calcMiter_Scaleform::Render::CornerVertex_(v34, v32, v35, 1.0, &x, &y);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    Scaleform::Render::calcMiter_Scaleform::Render::CornerVertex_(v32, v35, v33, 1.0, &x, &y);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    Scaleform::Render::calcMiter_Scaleform::Render::CornerVertex_(v35, v33, v34, 1.0, &x, &y);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(&v13->mTess);
    p_mTess->ClosePath(&v13->mTess);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *, _QWORD, __int64))p_mTess->FinalizePath)(
      &v13->mTess,
      0i64,
      2i64);
  }
  Scaleform::Render::Tessellator::Tessellate(&v13->mTess, 0);
  *(_OWORD *)&v47.M[0][0] = _xmm;
  *(_OWORD *)&v47.M[1][0] = _xmm;
  Scaleform::Render::Matrix2x4<float>::SetInverse(&v47, mtx);
  p_mTess->Transform(&v13->mTess, &v47);
  ((void (__fastcall *)(Scaleform::Render::Tessellator *, char *))p_mTess->StretchTo)(&v13->mTess, v48);
  v43[0] = p_mTess->GetMeshVertexCount(&v13->mTess, 0);
  v36 = p_mTess->GetMeshTriangleCount(&v13->mTess, 0);
  v45 = 0i64;
  v46 = 0i64;
  v43[1] = 3 * v36;
  v44 = &Scaleform::Render::VertexXY16iCF32::Format;
  if ( !v43[0] )
    return Scaleform::Render::VectorGlyphShape::generateNullVectorMesh(
             (Scaleform::Render::VectorGlyphShape *)this,
             verOut);
  v38 = verOut->BeginOutput(
          verOut,
          (const Scaleform::Render::VertexOutput::Fill *)v43,
          1u,
          (const Scaleform::Render::Matrix2x4<float> *)v48);
  if ( v38 )
  {
    verCount = 0i64;
    Scaleform::Render::TextMeshProvider::setMeshData(this, &v13->mTess, verOut, colors, &verCount);
    verOut->EndOutput(verOut);
  }
  Scaleform::Render::MeshGenerator::Clear(v13);
  return v38;
}

__int64 __fastcall Scaleform::Render::TextMeshProvider::generateSelection(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::VertexOutput *verOut,
        const Scaleform::Render::TextMeshLayer *layer,
        const Scaleform::Render::Matrix2x4<float> *mtx,
        unsigned int meshGenFlags)
{
  Scaleform::Render::HAL_vtbl *v6; // rax
  const Scaleform::Render::Matrix2x4<float> *v7; // r15
  Scaleform::Render::MeshGenerator *v11; // rdi
  Scaleform::Render::Tessellator *p_mTess; // r14
  Scaleform::Render::ToleranceParams *ToleranceParams; // rax
  float v14; // xmm1_4
  unsigned int v15; // er13
  Scaleform::Render::TextMeshEntry *Data; // r15
  __int64 v17; // rax
  __int64 v18; // rbx
  float v19; // xmm9_4
  float v20; // xmm7_4
  float v21; // xmm8_4
  float v22; // xmm6_4
  float x1; // xmm0_4
  float y1; // xmm3_4
  float x2; // xmm1_4
  float y2; // xmm2_4
  unsigned int v27; // eax
  Scaleform::Render::VertexOutput *v28; // rbx
  unsigned __int8 NullVectorMesh; // r15
  unsigned __int64 MaxPages; // rax
  Scaleform::Render::LinearHeap::PageType *v31; // rbx
  Scaleform::MemoryHeap *pHeap; // rcx
  unsigned __int64 v33; // rax
  Scaleform::Render::LinearHeap::PageType *v34; // rbx
  Scaleform::MemoryHeap *v35; // rcx
  unsigned __int64 v36; // rax
  Scaleform::Render::LinearHeap::PageType *v37; // rbx
  Scaleform::MemoryHeap *v38; // rcx
  unsigned __int64 v39; // rax
  Scaleform::Render::LinearHeap::PageType *v40; // rbx
  Scaleform::MemoryHeap *v41; // rcx
  BOOL verCount; // [rsp+28h] [rbp-E0h]
  Scaleform::Render::TextMeshProvider::VertexCountType v44; // [rsp+38h] [rbp-D0h] BYREF
  Scaleform::Render::VertexOutput *verOuta; // [rsp+40h] [rbp-C8h]
  Scaleform::Render::MeshGenerator *v46; // [rsp+48h] [rbp-C0h]
  _DWORD v47[2]; // [rsp+50h] [rbp-B8h] BYREF
  Scaleform::Render::VertexFormat *v48; // [rsp+58h] [rbp-B0h]
  __int64 v49; // [rsp+60h] [rbp-A8h]
  __int64 v50; // [rsp+68h] [rbp-A0h]
  __int128 v51; // [rsp+A8h] [rbp-60h]
  Scaleform::Render::Matrix2x4<float> v52; // [rsp+C8h] [rbp-40h] BYREF
  Scaleform::ArrayStaticBuffPOD<unsigned long,16,2> v53; // [rsp+E8h] [rbp-20h] BYREF
  char v54[32]; // [rsp+148h] [rbp+40h] BYREF

  v6 = hal->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v7 = mtx;
  verOuta = verOut;
  v44 = (Scaleform::Render::TextMeshProvider::VertexCountType)mtx;
  v46 = v6->GetMeshGen(hal);
  v11 = v46;
  Scaleform::Render::MeshGenerator::Clear(v46);
  p_mTess = &v46->mTess;
  Scaleform::Render::Tessellator::SetFillRule(&v46->mTess, FillNonZero);
  ToleranceParams = Scaleform::Render::HAL::GetToleranceParams(hal);
  Scaleform::Render::Tessellator::SetToleranceParam(&v46->mTess, ToleranceParams);
  v53.pHeap = Scaleform::Memory::pGlobalHeap;
  v53.Size = 0i64;
  v53.Reserved = 16i64;
  v53.Data = v53.Static;
  v51 = *(_OWORD *)&Scaleform::Render::HAL::GetToleranceParams(hal)->Scale9LowerScale;
  if ( (meshGenFlags & 3) == 1 )
    v14 = *((float *)&v51 + 2) * 0.5;
  else
    v14 = 0.0;
  Scaleform::Render::Tessellator::SetEdgeAAWidth(&v46->mTess, v14);
  v15 = 0;
  if ( layer->Count )
  {
    do
    {
      Data = this->Entries.Data.Data;
      v17 = v15 + layer->Start;
      v18 = v17;
      v19 = Data[v17].EntryData.RasterData.Coord[0];
      v20 = Data[v17].EntryData.RasterData.Coord[1];
      v21 = Data[v17].EntryData.RasterData.Coord[2];
      v22 = Data[v17].EntryData.RasterData.Coord[3];
      if ( (this->Flags & 8) != 0 )
      {
        x1 = this->ClipBox.x1;
        y1 = this->ClipBox.y1;
        x2 = this->ClipBox.x2;
        y2 = this->ClipBox.y2;
      }
      else
      {
        x1 = this->Bounds.x1;
        y1 = this->Bounds.y1;
        x2 = this->Bounds.x2;
        y2 = this->Bounds.y2;
      }
      if ( v22 >= y1 && y2 >= v20 && x2 >= v19 && v21 >= x1 )
      {
        if ( v19 <= x1 )
          v19 = x1;
        if ( v21 > x2 )
          v21 = x2;
        if ( v20 <= y1 )
          v20 = y1;
        if ( v22 > y2 )
          v22 = y2;
        if ( v19 < v21 && v20 < v22 )
        {
          ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(p_mTess);
          ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(p_mTess);
          ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(p_mTess);
          ((void (__fastcall *)(Scaleform::Render::Tessellator *))p_mTess->AddVertex)(p_mTess);
        }
      }
      Scaleform::ArrayStaticBuffPOD<unsigned long,16,2>::PushBack(&v53, &Data[v18].mColor);
      p_mTess->ClosePath(p_mTess);
      ++v15;
      LOBYTE(verCount) = 0;
      p_mTess->FinalizePath(p_mTess, 0, v15, 0, verCount);
    }
    while ( v15 < layer->Count );
    v11 = v46;
    v7 = (const Scaleform::Render::Matrix2x4<float> *)v44;
  }
  Scaleform::Render::Tessellator::Tessellate(p_mTess, 0);
  if ( p_mTess->GetMeshCount(p_mTess) && p_mTess->GetVertexCount(p_mTess) )
  {
    *(_OWORD *)&v52.M[0][0] = _xmm;
    *(_OWORD *)&v52.M[1][0] = _xmm;
    Scaleform::Render::Matrix2x4<float>::SetInverse(&v52, v7);
    p_mTess->Transform(p_mTess, &v52);
    ((void (__fastcall *)(Scaleform::Render::Tessellator *, char *))p_mTess->StretchTo)(p_mTess, v54);
    v47[0] = p_mTess->GetMeshVertexCount(p_mTess, 0);
    v27 = p_mTess->GetMeshTriangleCount(p_mTess, 0);
    v28 = verOuta;
    v49 = 0i64;
    v50 = 0i64;
    v47[1] = 3 * v27;
    v48 = &Scaleform::Render::VertexXY16iCF32::Format;
    NullVectorMesh = verOuta->BeginOutput(
                       verOuta,
                       (const Scaleform::Render::VertexOutput::Fill *)v47,
                       1u,
                       (const Scaleform::Render::Matrix2x4<float> *)v54);
    if ( NullVectorMesh )
    {
      v44 = 0i64;
      Scaleform::Render::TextMeshProvider::setMeshData(this, p_mTess, verOuta, v53.Data, &v44);
      v28->EndOutput(v28);
    }
  }
  else
  {
    NullVectorMesh = Scaleform::Render::VectorGlyphShape::generateNullVectorMesh(
                       (Scaleform::Render::VectorGlyphShape *)this,
                       verOuta);
  }
  p_mTess->Clear(p_mTess);
  v11->mStroker.Clear(&v11->mStroker);
  v11->mStrokeSorter.Clear(&v11->mStrokeSorter);
  v11->mHairliner.Clear(&v11->mHairliner);
  v11->mStrokerAA.Clear(&v11->mStrokerAA);
  MaxPages = v11->Heap1.MaxPages;
  if ( MaxPages )
  {
    v31 = &v11->Heap1.pPagePool[MaxPages - 1];
    do
    {
      --v11->Heap1.MaxPages;
      if ( v31->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v11->Heap1.pHeap->Free)(v11->Heap1.pHeap);
      --v31;
    }
    while ( v11->Heap1.MaxPages );
    pHeap = v11->Heap1.pHeap;
    --v11->Heap1.MaxPages;
    pHeap->Free(pHeap, v11->Heap1.pPagePool);
  }
  v11->Heap1.pLastPage = 0i64;
  v11->Heap1.pPagePool = 0i64;
  v11->Heap1.MaxPages = 0i64;
  v33 = v11->Heap2.MaxPages;
  if ( v33 )
  {
    v34 = &v11->Heap2.pPagePool[v33 - 1];
    do
    {
      --v11->Heap2.MaxPages;
      if ( v34->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v11->Heap2.pHeap->Free)(v11->Heap2.pHeap);
      --v34;
    }
    while ( v11->Heap2.MaxPages );
    v35 = v11->Heap2.pHeap;
    --v11->Heap2.MaxPages;
    v35->Free(v35, v11->Heap2.pPagePool);
  }
  v11->Heap2.pLastPage = 0i64;
  v11->Heap2.pPagePool = 0i64;
  v11->Heap2.MaxPages = 0i64;
  v36 = v11->Heap3.MaxPages;
  if ( v36 )
  {
    v37 = &v11->Heap3.pPagePool[v36 - 1];
    do
    {
      --v11->Heap3.MaxPages;
      if ( v37->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v11->Heap3.pHeap->Free)(v11->Heap3.pHeap);
      --v37;
    }
    while ( v11->Heap3.MaxPages );
    v38 = v11->Heap3.pHeap;
    --v11->Heap3.MaxPages;
    v38->Free(v38, v11->Heap3.pPagePool);
  }
  v11->Heap3.pLastPage = 0i64;
  v11->Heap3.pPagePool = 0i64;
  v11->Heap3.MaxPages = 0i64;
  v39 = v11->Heap4.MaxPages;
  if ( v39 )
  {
    v40 = &v11->Heap4.pPagePool[v39 - 1];
    do
    {
      --v11->Heap4.MaxPages;
      if ( v40->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v11->Heap4.pHeap->Free)(v11->Heap4.pHeap);
      --v40;
    }
    while ( v11->Heap4.MaxPages );
    v41 = v11->Heap4.pHeap;
    --v11->Heap4.MaxPages;
    v41->Free(v41, v11->Heap4.pPagePool);
  }
  v11->Heap4.pLastPage = 0i64;
  v11->Heap4.pPagePool = 0i64;
  v11->Heap4.MaxPages = 0i64;
  if ( v53.Data != v53.Static )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  return NullVectorMesh;
}

char __fastcall Scaleform::Render::TextMeshProvider::generateUnderlines(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::HAL *hal,
        Scaleform::Render::VertexOutput *verOut,
        const Scaleform::Render::TextMeshLayer *layer,
        const Scaleform::Render::Matrix2x4<float> *mtx,
        unsigned int meshGenFlags)
{
  Scaleform::Render::VertexOutput *v6; // rbx
  unsigned int v8; // er13
  const Scaleform::Render::Matrix2x4<float> *v9; // r14
  Scaleform::Render::HAL_vtbl *v10; // rax
  Scaleform::Render::TextMeshProvider *v11; // r15
  Scaleform::Render::MeshGenerator *v12; // rsi
  _QWORD *v13; // rdi
  unsigned int v14; // ecx
  Scaleform::Render::TextMeshEntry *Data; // r15
  __int64 v16; // r14
  int v17; // eax
  float v18; // xmm11_4
  float v19; // xmm10_4
  float v20; // xmm4_4
  float v21; // xmm5_4
  float v22; // xmm11_4
  float v23; // xmm7_4
  float v24; // xmm12_4
  float v25; // xmm10_4
  __int64 v26; // rbx
  __int64 v27; // rbx
  float v28; // xmm6_4
  unsigned int Style; // ebx
  float v30; // xmm6_4
  float v31; // xmm7_4
  float v32; // xmm8_4
  Tween::EasingType v33; // xmm11_4
  float v34; // xmm9_4
  int v35; // eax
  Scaleform::Render::Tessellator_vtbl *v36; // rax
  unsigned __int64 MaxPages; // rax
  Scaleform::Render::LinearHeap::PageType *v38; // rbx
  Scaleform::MemoryHeap *pHeap; // rcx
  unsigned __int64 v40; // rax
  Scaleform::Render::LinearHeap::PageType *v41; // rbx
  Scaleform::MemoryHeap *v42; // rcx
  unsigned __int64 v43; // rax
  Scaleform::Render::LinearHeap::PageType *v44; // rbx
  Scaleform::MemoryHeap *v45; // rcx
  unsigned __int64 v46; // rax
  Scaleform::Render::LinearHeap::PageType *v47; // rbx
  Scaleform::MemoryHeap *v48; // rcx
  int verCount; // [rsp+28h] [rbp-E0h]
  Scaleform::Render::TextMeshProvider::VertexCountType v51; // [rsp+38h] [rbp-D0h] BYREF
  Scaleform::Render::TextMeshProvider *v52; // [rsp+40h] [rbp-C8h]
  Scaleform::Render::VertexOutput *v53; // [rsp+48h] [rbp-C0h]
  _DWORD v54[2]; // [rsp+50h] [rbp-B8h] BYREF
  Scaleform::Render::VertexFormat *v55; // [rsp+58h] [rbp-B0h]
  __int64 v56; // [rsp+60h] [rbp-A8h]
  __int64 v57; // [rsp+68h] [rbp-A0h]
  _QWORD v58[5]; // [rsp+70h] [rbp-98h] BYREF
  Scaleform::ArrayStaticBuffPOD<unsigned long,16,2> v59; // [rsp+98h] [rbp-70h] BYREF
  Scaleform::Render::Matrix2x4<float> v60; // [rsp+F8h] [rbp-10h] BYREF
  unsigned int meshGenFlagsa; // [rsp+240h] [rbp+138h]

  v6 = verOut;
  v8 = 0;
  v59.pHeap = Scaleform::Memory::pGlobalHeap;
  v9 = mtx;
  v59.Data = v59.Static;
  v10 = hal->Scaleform::RefCountBase<Scaleform::Render::HAL,65>::Scaleform::RefCountBaseStatImpl<Scaleform::RefCountImpl,65>::Scaleform::RefCountImpl::Scaleform::RefCountImplCore::__vftable;
  v11 = this;
  v52 = this;
  v53 = verOut;
  v51 = (Scaleform::Render::TextMeshProvider::VertexCountType)mtx;
  v59.Size = 0i64;
  v59.Reserved = 16i64;
  v12 = v10->GetMeshGen(hal);
  Scaleform::Render::MeshGenerator::Clear(v12);
  v13 = &v12->mStrokerAA.__vftable;
  v14 = meshGenFlags & 3;
  *(_QWORD *)&v12->mStrokerAA.StartLineCap = 0i64;
  meshGenFlagsa = v14;
  v12->mStrokerAA.LineJoin = MiterJoin;
  if ( v14 == 1 )
  {
    *(_QWORD *)&v12->mStrokerAA.WidthLeft = 0i64;
    v12->mStrokerAA.AaWidthRight = 0.95999998;
    v12->mStrokerAA.AaWidthLeft = 0.95999998;
  }
  else
  {
    v12->mStrokerAA.WidthRight = 0.5;
    v12->mStrokerAA.WidthLeft = 0.5;
    *(_QWORD *)&v12->mStrokerAA.AaWidthLeft = 0i64;
  }
  if ( layer->Count )
  {
    do
    {
      Data = v11->Entries.Data.Data;
      v16 = v8 + layer->Start;
      v17 = Data[v8 + layer->Start].EntryData.UnderlineData.Style - 1;
      if ( v14 == 1 )
      {
        if ( (v17 & 0xFFFFFFFD) != 0 )
        {
          *(_QWORD *)&v12->mStrokerAA.WidthLeft = 0i64;
        }
        else
        {
          v12->mStrokerAA.WidthRight = 1.0;
          v12->mStrokerAA.WidthLeft = 1.0;
        }
        if ( Data[v16].EntryData.UnderlineData.Style == 5 )
        {
          v12->mStrokerAA.WidthRight = 0.25;
          v12->mStrokerAA.WidthLeft = 0.25;
        }
        if ( Data[v16].EntryData.UnderlineData.Style == 4 )
        {
          v12->mStrokerAA.AaWidthRight = 0.5;
          v12->mStrokerAA.AaWidthLeft = 0.5;
        }
        else
        {
          v12->mStrokerAA.AaWidthRight = 0.95999998;
          v12->mStrokerAA.AaWidthLeft = 0.95999998;
        }
      }
      else
      {
        if ( (v17 & 0xFFFFFFFD) != 0 )
        {
          v12->mStrokerAA.WidthRight = 0.5;
          v12->mStrokerAA.WidthLeft = 0.5;
        }
        else
        {
          v12->mStrokerAA.WidthRight = 1.0;
          v12->mStrokerAA.WidthLeft = 1.0;
        }
        if ( Data[v16].EntryData.UnderlineData.Style == 5 )
        {
          v12->mStrokerAA.WidthRight = 0.75;
          v12->mStrokerAA.WidthLeft = 0.75;
        }
        *(_QWORD *)&v12->mStrokerAA.AaWidthLeft = 0i64;
      }
      v12->mStrokerAA.StyleLeft = ++v8;
      v12->mStrokerAA.StyleRight = v8;
      Scaleform::ArrayStaticBuffPOD<unsigned long,16,2>::PushBack(&v59, &Data[v16].mColor);
      v18 = Data[v16].EntryData.RasterData.Coord[1];
      v19 = v18 + Data[v16].EntryData.RasterData.Coord[3];
      v20 = Data[v16].EntryData.RasterData.Coord[2] * *(float *)(*(_QWORD *)&v51 + 4i64);
      v21 = Data[v16].EntryData.RasterData.Coord[2] * *(float *)(*(_QWORD *)&v51 + 20i64);
      v22 = (float)((float)(v18 * *(float *)v51.VStart) + v20) + *(float *)(*(_QWORD *)&v51 + 12i64);
      v23 = (float)((float)(v19 * *(float *)v51.VStart) + v20) + *(float *)(*(_QWORD *)&v51 + 12i64);
      v24 = (float)((float)(Data[v16].EntryData.RasterData.Coord[1] * *(float *)(*(_QWORD *)&v51 + 16i64)) + v21)
          + *(float *)(*(_QWORD *)&v51 + 28i64);
      v25 = (float)((float)(v19 * *(float *)(*(_QWORD *)&v51 + 16i64)) + v21) + *(float *)(*(_QWORD *)&v51 + 28i64);
      if ( Data[v16].EntryData.UnderlineData.Style <= 1 )
      {
        v26 = *v13;
        floorf(v24);
        (*(void (__fastcall **)(Scaleform::Render::StrokerAA *))(v26 + 32))(&v12->mStrokerAA);
        v27 = *v13;
        floorf(v25);
        (*(void (__fastcall **)(Scaleform::Render::StrokerAA *))(v27 + 32))(&v12->mStrokerAA);
        LOBYTE(verCount) = 0;
        (*(void (__fastcall **)(Scaleform::Render::StrokerAA *, _QWORD, _QWORD, _QWORD, int))(*v13 + 48i64))(
          &v12->mStrokerAA,
          0i64,
          0i64,
          0i64,
          verCount);
      }
      if ( Data[v16].EntryData.UnderlineData.Style - 2 <= 1 )
      {
        v22 = floorf(v22) - 0.5;
        v23 = floorf(v23) + 0.5;
        v24 = floorf(v24) + 0.5;
        v28 = v22;
        v25 = floorf(v25) + 0.5;
        if ( v23 >= v22 )
        {
          floorf(v24);
          floorf(v25);
          do
          {
            (*(void (__fastcall **)(Scaleform::Render::StrokerAA *))(*v13 + 32i64))(&v12->mStrokerAA);
            (*(void (__fastcall **)(Scaleform::Render::StrokerAA *))(*v13 + 32i64))(&v12->mStrokerAA);
            LOBYTE(verCount) = 0;
            (*(void (__fastcall **)(Scaleform::Render::StrokerAA *, _QWORD, _QWORD, _QWORD, int))(*v13 + 48i64))(
              &v12->mStrokerAA,
              0i64,
              0i64,
              0i64,
              verCount);
            v28 = v28 + 5.0;
          }
          while ( v23 >= v28 );
        }
      }
      Style = Data[v16].EntryData.UnderlineData.Style;
      if ( Style - 4 <= 1 )
      {
        v30 = floorf(v22);
        v31 = floorf(v23) + 1.0;
        v32 = floorf(v24) + 0.5;
        v33 = FLOAT_4_0;
        v34 = floorf(v25) + 0.5;
        if ( Style == 5 )
          v33 = FLOAT_6_0;
        if ( v31 >= v30 )
        {
          floorf(v32);
          floorf(v34);
          do
          {
            (*(void (__fastcall **)(Scaleform::Render::StrokerAA *))(*v13 + 32i64))(&v12->mStrokerAA);
            (*(void (__fastcall **)(Scaleform::Render::StrokerAA *))(*v13 + 32i64))(&v12->mStrokerAA);
            v30 = v30 + *(float *)&v33;
          }
          while ( v31 >= v30 );
        }
        LOBYTE(verCount) = 0;
        (*(void (__fastcall **)(Scaleform::Render::StrokerAA *, _QWORD, _QWORD, _QWORD, int))(*v13 + 48i64))(
          &v12->mStrokerAA,
          0i64,
          0i64,
          0i64,
          verCount);
      }
      v14 = meshGenFlagsa;
      v11 = v52;
    }
    while ( v8 < layer->Count );
    v6 = v53;
    v9 = (const Scaleform::Render::Matrix2x4<float> *)v51;
  }
  if ( (*(unsigned int (__fastcall **)(Scaleform::Render::StrokerAA *))(*v13 + 72i64))(&v12->mStrokerAA) )
  {
    *(_OWORD *)&v58[1] = _xmm;
    *(_OWORD *)&v58[3] = _xmm;
    Scaleform::Render::Matrix2x4<float>::SetInverse((Scaleform::Render::Matrix2x4<float> *)&v58[1], v9);
    (*(void (__fastcall **)(Scaleform::Render::StrokerAA *, _QWORD *))(*v13 + 56i64))(&v12->mStrokerAA, &v58[1]);
    (*(void (__fastcall **)(Scaleform::Render::StrokerAA *, Scaleform::Render::Matrix2x4<float> *))(*v13 + 64i64))(
      &v12->mStrokerAA,
      &v60);
    v54[0] = (*(__int64 (__fastcall **)(Scaleform::Render::StrokerAA *, _QWORD))(*v13 + 88i64))(&v12->mStrokerAA, 0i64);
    v35 = (*(__int64 (__fastcall **)(Scaleform::Render::StrokerAA *, _QWORD))(*v13 + 96i64))(&v12->mStrokerAA, 0i64);
    v56 = 0i64;
    v57 = 0i64;
    v54[1] = 3 * v35;
    v55 = &Scaleform::Render::VertexXY16iCF32::Format;
    if ( v6->BeginOutput(v6, (const Scaleform::Render::VertexOutput::Fill *)v54, 1u, &v60) )
    {
      v51 = 0i64;
      Scaleform::Render::TextMeshProvider::setMeshData(v11, &v12->mStrokerAA, v6, v59.Data, &v51);
      v6->EndOutput(v6);
    }
  }
  else
  {
    Scaleform::Render::VectorGlyphShape::generateNullVectorMesh((Scaleform::Render::VectorGlyphShape *)v11, v6);
  }
  v12->mStrokerAA.StyleLeft = 1;
  v36 = v12->mTess.__vftable;
  v12->mStrokerAA.StyleRight = 1;
  ((void (*)(void))v36->Clear)();
  v12->mStroker.Clear(&v12->mStroker);
  v12->mStrokeSorter.Clear(&v12->mStrokeSorter);
  v12->mHairliner.Clear(&v12->mHairliner);
  (*(void (__fastcall **)(Scaleform::Render::StrokerAA *))(*v13 + 8i64))(&v12->mStrokerAA);
  MaxPages = v12->Heap1.MaxPages;
  if ( MaxPages )
  {
    v38 = &v12->Heap1.pPagePool[MaxPages - 1];
    do
    {
      --v12->Heap1.MaxPages;
      if ( v38->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v12->Heap1.pHeap->Free)(v12->Heap1.pHeap);
      --v38;
    }
    while ( v12->Heap1.MaxPages );
    pHeap = v12->Heap1.pHeap;
    --v12->Heap1.MaxPages;
    pHeap->Free(pHeap, v12->Heap1.pPagePool);
  }
  v12->Heap1.pLastPage = 0i64;
  v12->Heap1.pPagePool = 0i64;
  v12->Heap1.MaxPages = 0i64;
  v40 = v12->Heap2.MaxPages;
  if ( v40 )
  {
    v41 = &v12->Heap2.pPagePool[v40 - 1];
    do
    {
      --v12->Heap2.MaxPages;
      if ( v41->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v12->Heap2.pHeap->Free)(v12->Heap2.pHeap);
      --v41;
    }
    while ( v12->Heap2.MaxPages );
    v42 = v12->Heap2.pHeap;
    --v12->Heap2.MaxPages;
    v42->Free(v42, v12->Heap2.pPagePool);
  }
  v12->Heap2.pLastPage = 0i64;
  v12->Heap2.pPagePool = 0i64;
  v12->Heap2.MaxPages = 0i64;
  v43 = v12->Heap3.MaxPages;
  if ( v43 )
  {
    v44 = &v12->Heap3.pPagePool[v43 - 1];
    do
    {
      --v12->Heap3.MaxPages;
      if ( v44->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v12->Heap3.pHeap->Free)(v12->Heap3.pHeap);
      --v44;
    }
    while ( v12->Heap3.MaxPages );
    v45 = v12->Heap3.pHeap;
    --v12->Heap3.MaxPages;
    v45->Free(v45, v12->Heap3.pPagePool);
  }
  v12->Heap3.pLastPage = 0i64;
  v12->Heap3.pPagePool = 0i64;
  v12->Heap3.MaxPages = 0i64;
  v46 = v12->Heap4.MaxPages;
  if ( v46 )
  {
    v47 = &v12->Heap4.pPagePool[v46 - 1];
    do
    {
      --v12->Heap4.MaxPages;
      if ( v47->pStart )
        ((void (__fastcall *)(Scaleform::MemoryHeap *))v12->Heap4.pHeap->Free)(v12->Heap4.pHeap);
      --v47;
    }
    while ( v12->Heap4.MaxPages );
    v48 = v12->Heap4.pHeap;
    --v12->Heap4.MaxPages;
    v48->Free(v48, v12->Heap4.pPagePool);
  }
  v12->Heap4.pLastPage = 0i64;
  v12->Heap4.pPagePool = 0i64;
  v12->Heap4.MaxPages = 0i64;
  if ( v59.Data != v59.Static )
    ((void (__fastcall *)(Scaleform::MemoryHeap *))Scaleform::Memory::pGlobalHeap->Free)(Scaleform::Memory::pGlobalHeap);
  return 1;
}

void __fastcall Scaleform::Render::TextMeshProvider::setMeshData(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TessBase *tess,
        Scaleform::Render::VertexOutput *verOut,
        const unsigned int *colors,
        Scaleform::Render::TextMeshProvider::VertexCountType *verCount)
{
  unsigned int i; // er14
  char *v9; // rdi
  __int64 v10; // rbp
  char *v11; // rbx
  float v12; // xmm0_4
  float v13; // xmm0_4
  int v14; // eax
  float v15; // xmm0_4
  float v16; // xmm0_4
  float v17; // xmm0_4
  unsigned __int64 v18; // r8
  unsigned int v19; // edi
  unsigned int v20; // esi
  unsigned int v21; // ebx
  char v22[32]; // [rsp+30h] [rbp-A08h] BYREF
  char v23[4]; // [rsp+50h] [rbp-9E8h] BYREF
  char v24; // [rsp+54h] [rbp-9E4h] BYREF
  char v25[4]; // [rsp+350h] [rbp-6E8h] BYREF
  char v26; // [rsp+354h] [rbp-6E4h] BYREF
  char v27[384]; // [rsp+850h] [rbp-1E8h] BYREF

  tess->GetMesh(tess, 0, (Scaleform::Render::TessMesh *)v22);
  for ( i = tess->GetVertices(tess, (Scaleform::Render::TessMesh *)v22, (Scaleform::Render::TessVertex *)v25, 64u);
        i;
        i = tess->GetVertices(tess, (Scaleform::Render::TessMesh *)v22, (Scaleform::Render::TessVertex *)v25, 64u) )
  {
    v9 = &v24;
    v10 = i;
    v11 = &v26;
    do
    {
      v12 = *((float *)v11 - 1);
      if ( v12 >= 0.0 )
        v13 = v12 + 0.5;
      else
        v13 = v12 - 0.5;
      v14 = (int)floorf(v13);
      v15 = *(float *)v11;
      *((_WORD *)v9 - 2) = v14;
      if ( v15 >= 0.0 )
        v16 = v15 + 0.5;
      else
        v16 = v15 - 0.5;
      v17 = floorf(v16);
      v18 = *((unsigned __int16 *)v11 + 6);
      *((_WORD *)v9 - 1) = (int)v17;
      if ( (v18 & 0x10) != 0 )
        *(_DWORD *)v9 = ((colors[*((unsigned __int16 *)v11 + 4) - 1] | colors[*((unsigned __int16 *)v11 + 5) - 1]) >> 1) & 0x7F7F7F7F;
      else
        *(_DWORD *)v9 = colors[*(unsigned __int16 *)&v11[2 * ((v18 >> 5) & 1) + 8] - 1];
      v11 += 20;
      v9[4] = Scaleform::Render::Factors[v18 & 3];
      v9[5] = Scaleform::Render::Factors[((unsigned __int64)(unsigned __int16)v18 >> 2) & 3];
      v9 += 12;
      --v10;
    }
    while ( v10 );
    verOut->SetVertices(verOut, 0, verCount->VStart, v23, i);
    verCount->VStart += i;
  }
  v19 = 0;
  v20 = tess->GetMeshTriangleCount(tess, 0);
  if ( v20 )
  {
    do
    {
      v21 = 64;
      if ( v19 + 64 > v20 )
      {
        v21 = v20 - v19;
        if ( v20 == v19 )
          break;
      }
      tess->GetTrianglesI16(tess, 0, (unsigned __int16 *)v27, v19, v21);
      verOut->SetIndices(verOut, 0, 3 * verCount->IStart, (unsigned __int16 *)v27, 3 * v21);
      verCount->IStart += v21;
      v19 += v21;
    }
    while ( v19 < v20 );
  }
}

void __fastcall Scaleform::Render::TextMeshProvider::sortEntries(
        Scaleform::Render::TextMeshProvider *this,
        Scaleform::Render::TmpTextStorage *storage)
{
  unsigned __int64 v4; // rbx
  unsigned __int64 v5; // r8
  Scaleform::Render::TmpTextMeshEntry **Pages; // rdx
  Scaleform::Render::TmpTextMeshEntry *v7; // r11
  Scaleform::Render::TmpTextMeshEntry *v8; // rcx
  unsigned __int64 Size; // rbx
  Scaleform::ArrayDH<Scaleform::Render::TextMeshEntry,2,Scaleform::ArrayDefaultPolicy> *p_Entries; // r12
  unsigned __int64 v11; // r14
  __int64 v12; // rdx
  unsigned __int64 i; // rbx
  unsigned __int64 v14; // rbx
  Scaleform::ArrayDH<Scaleform::Render::TextMeshLayer,2,Scaleform::ArrayDefaultPolicy> *p_Layers; // r13
  const Scaleform::MemoryHeap *pHeap; // rdx
  unsigned __int64 v17; // rdi
  Scaleform::Render::TextMeshLayer *v18; // rax
  unsigned __int64 j; // rbx
  unsigned __int64 v20; // r14
  __int64 v21; // rbx
  Scaleform::Render::TextMeshEntry *Data; // rbp
  Scaleform::Render::TmpTextMeshEntry *v23; // rdi
  Scaleform::RefCountNTSImpl *pObject; // rcx
  Scaleform::Render::PrimitiveFill *pFill; // r15
  unsigned __int64 v26; // r14
  __int64 v27; // rbx
  Scaleform::Render::TextMeshLayer *v28; // rdi
  Scaleform::Render::TmpTextMeshLayer *v29; // r15
  Scaleform::RefCountVImpl *v30; // rcx
  Scaleform::Render::PrimitiveFill *v31; // rbp
  Scaleform::RefCountNTSImpl *v32; // rcx
  Scaleform::Render::MatrixPoolImpl::HMatrix other; // [rsp+50h] [rbp+8h] BYREF

  storage->Layers.Size = 0i64;
  Scaleform::Alg::QuickSortSliced<Scaleform::Render::ArrayPaged<Scaleform::Render::TmpTextMeshEntry,6,4>,Scaleform::Render::TextMeshProvider::CmpEntries>(
    &storage->Entries,
    0i64,
    storage->Entries.Size,
    (Scaleform::Render::TextMeshProvider::CmpEntries)this->pCache);
  v4 = 0i64;
  v5 = 0i64;
  if ( storage->Entries.Size )
  {
    do
    {
      Pages = storage->Entries.Pages;
      v7 = Pages[v4 >> 6];
      v8 = Pages[v5 >> 6];
      if ( (v8[v5 & 0x3F].LayerType != v7[v4 & 0x3F].LayerType || v8[v5 & 0x3F].pFill != v7[v4 & 0x3F].pFill) && v4 > v5 )
      {
        Scaleform::Render::TextMeshProvider::addLayer(this, storage, v5, v4);
        v5 = v4;
      }
      ++v4;
    }
    while ( v4 < storage->Entries.Size );
    if ( v4 > v5 )
      Scaleform::Render::TextMeshProvider::addLayer(this, storage, v5, v4);
  }
  Size = storage->Entries.Size;
  p_Entries = &this->Entries;
  v11 = this->Entries.Data.Size;
  Scaleform::ArrayDataBase<Scaleform::Render::TextMeshEntry,Scaleform::AllocatorDH<Scaleform::Render::TextMeshEntry,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &this->Entries.Data,
    this->Entries.Data.pHeap,
    Size);
  if ( Size > v11 )
  {
    v12 = (__int64)&p_Entries->Data.Data[v11];
    for ( i = Size - v11; i; --i )
    {
      if ( v12 )
        *(_QWORD *)(v12 + 8) = 0i64;
      v12 += 40i64;
    }
  }
  v14 = storage->Layers.Size;
  p_Layers = &this->Layers;
  pHeap = this->Layers.Data.pHeap;
  v17 = this->Layers.Data.Size;
  Scaleform::ArrayDataBase<Scaleform::Render::TextMeshLayer,Scaleform::AllocatorDH<Scaleform::Render::TextMeshLayer,2>,Scaleform::ArrayDefaultPolicy>::ResizeNoConstruct(
    &p_Layers->Data,
    pHeap,
    v14);
  if ( v14 > v17 )
  {
    v18 = &p_Layers->Data.Data[v17];
    for ( j = v14 - v17; j; --j )
    {
      if ( v18 )
      {
        v18->pMesh.pObject = 0i64;
        v18->pMeshKey.pObject = 0i64;
        v18->pShape.pObject = 0i64;
        v18->M.pHandle = &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle;
        v18->pFill.pObject = 0i64;
      }
      ++v18;
    }
  }
  v20 = 0i64;
  if ( storage->Entries.Size )
  {
    v21 = 0i64;
    do
    {
      Data = p_Entries->Data.Data;
      v23 = &storage->Entries.Pages[v20 >> 6][v20 & 0x3F];
      Data[v21].LayerType = v23->LayerType;
      Data[v21].TextureId = v23->TextureId;
      Data[v21].mColor = v23->mColor;
      pObject = Data[v21].pFill.pObject;
      pFill = v23->pFill;
      if ( pObject )
        Scaleform::RefCountNTSImpl::Release(pObject);
      Data[v21].pFill.pObject = pFill;
      ++v20;
      *(_OWORD *)Data[v21].EntryData.RasterData.Coord = *(_OWORD *)v23->EntryData.RasterData.Coord;
      Data[v21++].EntryData.RasterData.pGlyph = v23->EntryData.RasterData.pGlyph;
    }
    while ( v20 < storage->Entries.Size );
  }
  v26 = 0i64;
  if ( storage->Layers.Size )
  {
    v27 = 0i64;
    do
    {
      v28 = p_Layers->Data.Data;
      v29 = storage->Layers.Pages[v26 >> 4];
      v28[v27].Type = v29[v26 & 0xF].Type;
      v28[v27].Start = v29[v26 & 0xF].Start;
      v28[v27].Count = v29[v26 & 0xF].Count;
      v30 = (Scaleform::RefCountVImpl *)v28[v27].pMesh.pObject;
      if ( v30 )
        Scaleform::RefCountImpl::Release(v30);
      v28[v27].pMesh.pObject = 0i64;
      other.pHandle = &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle;
      Scaleform::Render::MatrixPoolImpl::HMatrix::operator=(&v28[v27].M, &other);
      if ( other.pHandle != &Scaleform::Render::MatrixPoolImpl::HMatrix::NullHandle )
        Scaleform::Render::MatrixPoolImpl::DataHeader::Release(other.pHandle->pHeader);
      v31 = v29[v26 & 0xF].pFill;
      if ( v31 )
        ++v31->RefCount;
      v32 = v28[v27].pFill.pObject;
      if ( v32 )
        Scaleform::RefCountNTSImpl::Release(v32);
      v28[v27].pFill.pObject = v31;
      ++v26;
      v28[v27++].SizeScale = 1.0;
    }
    while ( v26 < storage->Layers.Size );
  }
}

